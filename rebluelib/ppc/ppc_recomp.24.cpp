#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821AF5DC"))) PPC_WEAK_FUNC(sub_821AF5DC);
PPC_FUNC_IMPL(__imp__sub_821AF5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF5E0"))) PPC_WEAK_FUNC(sub_821AF5E0);
PPC_FUNC_IMPL(__imp__sub_821AF5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r7,176(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,16392
	ctx.r8.s64 = ctx.r11.s64 + 16392;
	// ori r6,r10,16
	ctx.r6.u64 = ctx.r10.u64 | 16;
	// stw r6,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r6.u32);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af628
	if (!ctx.cr6.eq) goto loc_821AF628;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,4323
	ctx.r11.s64 = ctx.r11.s64 + 4323;
loc_821AF628:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r5,r10,-26696
	ctx.r5.s64 = ctx.r10.s64 + -26696;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233dcb0
	ctx.lr = 0x821AF640;
	sub_8233DCB0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82082030
	ctx.lr = 0x821AF654;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821af69c
	if (ctx.cr6.eq) goto loc_821AF69C;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r7,r10,21424
	ctx.r7.s64 = ctx.r10.s64 + 21424;
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// addi r8,r9,-26668
	ctx.r8.s64 = ctx.r9.s64 + -26668;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x821af6a0
	goto loc_821AF6A0;
loc_821AF69C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821AF6A0:
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// stw r31,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lwz r11,-27100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27100);
	// addis r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 65536;
	// bl 0x82081680
	ctx.lr = 0x821AF6C8;
	sub_82081680(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF6DC"))) PPC_WEAK_FUNC(sub_821AF6DC);
PPC_FUNC_IMPL(__imp__sub_821AF6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF6E0"))) PPC_WEAK_FUNC(sub_821AF6E0);
PPC_FUNC_IMPL(__imp__sub_821AF6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821AF6E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r27,176(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r11,r11,-7224
	ctx.r11.s64 = ctx.r11.s64 + -7224;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af79c
	if (ctx.cr6.eq) goto loc_821AF79C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r25,30
	ctx.r25.s64 = 30;
	// li r26,512
	ctx.r26.s64 = 512;
loc_821AF71C:
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af790
	if (ctx.cr6.eq) goto loc_821AF790;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_821AF730:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af784
	if (ctx.cr6.eq) goto loc_821AF784;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r31,r3,72
	ctx.r31.s64 = ctx.r3.s64 + 72;
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821af784
	if (!ctx.cr6.eq) goto loc_821AF784;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AF768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AF768:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r8,r26,r9
	ctx.r8.u64 = ctx.r26.u64 | ctx.r9.u64;
	// stwcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821af768
	if (!ctx.cr0.eq) goto loc_821AF768;
loc_821AF784:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x821af730
	if (!ctx.cr0.eq) goto loc_821AF730;
loc_821AF790:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x821af71c
	if (!ctx.cr0.eq) goto loc_821AF71C;
loc_821AF79C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821af878
	ctx.lr = 0x821AF7A4;
	sub_821AF878(ctx, base);
	// lwz r11,488(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af840
	if (ctx.cr6.eq) goto loc_821AF840;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_821AF7BC:
	// lwz r11,484(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 484);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821af834
	if (ctx.cr6.eq) goto loc_821AF834;
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af7e0
	if (ctx.cr6.eq) goto loc_821AF7E0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x821749b0
	ctx.lr = 0x821AF7E0;
	sub_821749B0(ctx, base);
loc_821AF7E0:
	// lwz r31,76(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821af824
	if (ctx.cr6.eq) goto loc_821AF824;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x821af824
	if (ctx.cr6.eq) goto loc_821AF824;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x820f43c8
	ctx.lr = 0x821AF804;
	sub_820F43C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821af820
	if (ctx.cr6.eq) goto loc_821AF820;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217c458
	ctx.lr = 0x821AF820;
	sub_8217C458(ctx, base);
loc_821AF820:
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
loc_821AF824:
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af834
	if (ctx.cr6.eq) goto loc_821AF834;
	// bl 0x8217ea18
	ctx.lr = 0x821AF834;
	sub_8217EA18(ctx, base);
loc_821AF834:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x821af7bc
	if (!ctx.cr0.eq) goto loc_821AF7BC;
loc_821AF840:
	// lwz r31,436(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 436);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821af86c
	if (ctx.cr6.eq) goto loc_821AF86C;
loc_821AF84C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AF860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821af84c
	if (!ctx.cr6.eq) goto loc_821AF84C;
loc_821AF86C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821AF874"))) PPC_WEAK_FUNC(sub_821AF874);
PPC_FUNC_IMPL(__imp__sub_821AF874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF878"))) PPC_WEAK_FUNC(sub_821AF878);
PPC_FUNC_IMPL(__imp__sub_821AF878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821AF880;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af9b4
	if (ctx.cr6.eq) goto loc_821AF9B4;
	// lwz r11,512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af994
	if (ctx.cr6.eq) goto loc_821AF994;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// ori r25,r11,1
	ctx.r25.u64 = ctx.r11.u64 | 1;
	// ori r26,r10,6
	ctx.r26.u64 = ctx.r10.u64 | 6;
loc_821AF8BC:
	// lwz r11,508(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 508);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,264
	ctx.r3.s64 = 264;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x820f43c8
	ctx.lr = 0x821AF8D4;
	sub_820F43C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821af988
	if (ctx.cr6.eq) goto loc_821AF988;
	// cmpw cr6,r3,r25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x821af8fc
	if (!ctx.cr6.eq) goto loc_821AF8FC;
	// bl 0x820ddca8
	ctx.lr = 0x821AF8EC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af904
	if (ctx.cr6.eq) goto loc_821AF904;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x821af924
	goto loc_821AF924;
loc_821AF8FC:
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x821af90c
	if (!ctx.cr6.eq) goto loc_821AF90C;
loc_821AF904:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x821af924
	goto loc_821AF924;
loc_821AF90C:
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
	ctx.lr = 0x821AF924;
	sub_820F3178(ctx, base);
loc_821AF924:
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x821af974
	if (!ctx.cr6.eq) goto loc_821AF974;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x821af974
	if (ctx.cr6.eq) goto loc_821AF974;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af974
	if (ctx.cr6.eq) goto loc_821AF974;
	// bl 0x821702b8
	ctx.lr = 0x821AF950;
	sub_821702B8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bge cr6,0x821af974
	if (!ctx.cr6.lt) goto loc_821AF974;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a5b58
	ctx.lr = 0x821AF970;
	sub_820A5B58(ctx, base);
	// b 0x821af988
	goto loc_821AF988;
loc_821AF974:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bd0b8
	ctx.lr = 0x821AF988;
	sub_820BD0B8(ctx, base);
loc_821AF988:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x821af8bc
	if (!ctx.cr0.eq) goto loc_821AF8BC;
loc_821AF994:
	// lwz r11,508(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af9ac
	if (ctx.cr6.eq) goto loc_821AF9AC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821AF9AC;
	sub_82080000(ctx, base);
loc_821AF9AC:
	// stw r24,508(r28)
	PPC_STORE_U32(ctx.r28.u32 + 508, ctx.r24.u32);
	// stw r24,512(r28)
	PPC_STORE_U32(ctx.r28.u32 + 512, ctx.r24.u32);
loc_821AF9B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821AF9BC"))) PPC_WEAK_FUNC(sub_821AF9BC);
PPC_FUNC_IMPL(__imp__sub_821AF9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF9C0"))) PPC_WEAK_FUNC(sub_821AF9C0);
PPC_FUNC_IMPL(__imp__sub_821AF9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x821AF9C8;
	__savegprlr_18(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r18,r11,-29208
	ctx.r18.s64 = ctx.r11.s64 + -29208;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r18,16392
	ctx.r8.s64 = ctx.r18.s64 + 16392;
	// lwzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r20,128(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821afb9c
	if (ctx.cr6.eq) goto loc_821AFB9C;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821afb9c
	if (!ctx.cr6.eq) goto loc_821AFB9C;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bne cr6,0x821afa3c
	if (!ctx.cr6.eq) goto loc_821AFA3C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// li r5,512
	ctx.r5.s64 = 512;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233eaf0
	ctx.lr = 0x821AFA38;
	sub_8233EAF0(ctx, base);
	// addi r23,r1,80
	ctx.r23.s64 = ctx.r1.s64 + 80;
loc_821AFA3C:
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821afb9c
	if (ctx.cr6.eq) goto loc_821AFB9C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r25,r31,132
	ctx.r25.s64 = ctx.r31.s64 + 132;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r19,r11,-7224
	ctx.r19.s64 = ctx.r11.s64 + -7224;
loc_821AFA58:
	// lhz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r9,27
	ctx.r8.u64 = ctx.r9.u32 & 0x1F;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// slw r9,r22,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821afb8c
	if (!ctx.cr6.eq) goto loc_821AFB8C;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplwi cr6,r31,4096
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4096, ctx.xer);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// bge cr6,0x821afabc
	if (!ctx.cr6.lt) goto loc_821AFABC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r18,8
	ctx.r10.s64 = ctx.r18.s64 + 8;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821afabc
	if (ctx.cr6.eq) goto loc_821AFABC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x821af9c0
	ctx.lr = 0x821AFAB0;
	sub_821AF9C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afba8
	if (ctx.cr6.eq) goto loc_821AFBA8;
loc_821AFABC:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r19,4
	ctx.r10.s64 = ctx.r19.s64 + 4;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afb8c
	if (ctx.cr6.eq) goto loc_821AFB8C;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_821AFAD8:
	// cmplwi cr6,r26,14
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 14, ctx.xer);
	// beq cr6,0x821afb14
	if (ctx.cr6.eq) goto loc_821AFB14;
	// cmplwi cr6,r26,6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 6, ctx.xer);
	// beq cr6,0x821afb14
	if (ctx.cr6.eq) goto loc_821AFB14;
	// cmplwi cr6,r26,11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 11, ctx.xer);
	// beq cr6,0x821afb14
	if (ctx.cr6.eq) goto loc_821AFB14;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// beq cr6,0x821afb14
	if (ctx.cr6.eq) goto loc_821AFB14;
	// cmplwi cr6,r26,5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 5, ctx.xer);
	// beq cr6,0x821afb14
	if (ctx.cr6.eq) goto loc_821AFB14;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// beq cr6,0x821afb14
	if (ctx.cr6.eq) goto loc_821AFB14;
	// cmplwi cr6,r26,29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 29, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne cr6,0x821afb18
	if (!ctx.cr6.eq) goto loc_821AFB18;
loc_821AFB14:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_821AFB18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afb7c
	if (ctx.cr6.eq) goto loc_821AFB7C;
	// lwz r28,120(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821afb7c
	if (ctx.cr6.eq) goto loc_821AFB7C;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_821AFB38:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r8,r9,0,16,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000;
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r29,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821AFB60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821afbb4
	if (!ctx.cr6.eq) goto loc_821AFBB4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x821afb38
	if (ctx.cr6.lt) goto loc_821AFB38;
loc_821AFB7C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r26,30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 30, ctx.xer);
	// blt cr6,0x821afad8
	if (ctx.cr6.lt) goto loc_821AFAD8;
loc_821AFB8C:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x821afa58
	if (ctx.cr6.lt) goto loc_821AFA58;
loc_821AFB9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
loc_821AFBA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
loc_821AFBB4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821AFBC8"))) PPC_WEAK_FUNC(sub_821AFBC8);
PPC_FUNC_IMPL(__imp__sub_821AFBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821afbe0
	if (!ctx.cr6.lt) goto loc_821AFBE0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821AFBE0:
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AFBF0"))) PPC_WEAK_FUNC(sub_821AFBF0);
PPC_FUNC_IMPL(__imp__sub_821AFBF0) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,10776
	ctx.r31.s64 = ctx.r11.s64 + 10776;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821AFC18;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afc3c
	if (ctx.cr6.eq) goto loc_821AFC3C;
loc_821AFC24:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821afc6c
	if (!ctx.cr6.eq) goto loc_821AFC6C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821afc24
	if (!ctx.cr6.eq) goto loc_821AFC24;
loc_821AFC3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821afc94
	if (!ctx.cr6.eq) goto loc_821AFC94;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8217e1f0
	ctx.lr = 0x821AFC50;
	sub_8217E1F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821afc94
	if (!ctx.cr6.eq) goto loc_821AFC94;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821AFC64;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821afcd8
	goto loc_821AFCD8;
loc_821AFC6C:
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
	// b 0x821afcc8
	goto loc_821AFCC8;
loc_821AFC94:
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
loc_821AFCC8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821AFCD4;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821AFCD8:
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

__attribute__((alias("__imp__sub_821AFCF0"))) PPC_WEAK_FUNC(sub_821AFCF0);
PPC_FUNC_IMPL(__imp__sub_821AFCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821AFCF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// twllei r9,0
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// divwu r8,r11,r9
	ctx.r8.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f63e0
	ctx.lr = 0x821AFD3C;
	sub_820F63E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821afd64
	if (ctx.cr6.eq) goto loc_821AFD64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_821AFD4C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821afda8
	if (ctx.cr6.eq) goto loc_821AFDA8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x821afd4c
	if (!ctx.cr6.eq) goto loc_821AFD4C;
loc_821AFD64:
	// bl 0x821afbf0
	ctx.lr = 0x821AFD68;
	sub_821AFBF0(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r3,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_821AFD8C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821afd8c
	if (!ctx.cr0.eq) goto loc_821AFD8C;
loc_821AFDA8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821AFDC0"))) PPC_WEAK_FUNC(sub_821AFDC0);
PPC_FUNC_IMPL(__imp__sub_821AFDC0) {
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
	// ld r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// beq cr6,0x821afe10
	if (ctx.cr6.eq) goto loc_821AFE10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82247340
	ctx.lr = 0x821AFDF8;
	sub_82247340(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_821AFE10:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
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

__attribute__((alias("__imp__sub_821AFE48"))) PPC_WEAK_FUNC(sub_821AFE48);
PPC_FUNC_IMPL(__imp__sub_821AFE48) {
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
	// ld r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// beq cr6,0x821afe94
	if (ctx.cr6.eq) goto loc_821AFE94;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82247340
	ctx.lr = 0x821AFE80;
	sub_82247340(ctx, base);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_821AFE94:
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

__attribute__((alias("__imp__sub_821AFEC4"))) PPC_WEAK_FUNC(sub_821AFEC4);
PPC_FUNC_IMPL(__imp__sub_821AFEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AFEC8"))) PPC_WEAK_FUNC(sub_821AFEC8);
PPC_FUNC_IMPL(__imp__sub_821AFEC8) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,10888
	ctx.r31.s64 = ctx.r11.s64 + 10888;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821AFEF0;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aff14
	if (ctx.cr6.eq) goto loc_821AFF14;
loc_821AFEFC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821aff44
	if (!ctx.cr6.eq) goto loc_821AFF44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821afefc
	if (!ctx.cr6.eq) goto loc_821AFEFC;
loc_821AFF14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aff6c
	if (!ctx.cr6.eq) goto loc_821AFF6C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821affc8
	ctx.lr = 0x821AFF28;
	sub_821AFFC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aff6c
	if (!ctx.cr6.eq) goto loc_821AFF6C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821AFF3C;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821affb0
	goto loc_821AFFB0;
loc_821AFF44:
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
	// b 0x821affa0
	goto loc_821AFFA0;
loc_821AFF6C:
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
loc_821AFFA0:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821AFFAC;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821AFFB0:
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

__attribute__((alias("__imp__sub_821AFFC8"))) PPC_WEAK_FUNC(sub_821AFFC8);
PPC_FUNC_IMPL(__imp__sub_821AFFC8) {
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
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82082030
	ctx.lr = 0x821AFFFC;
	sub_82082030(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,10888
	ctx.r11.s64 = ctx.r11.s64 + 10888;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b0018
	if (ctx.cr6.eq) goto loc_821B0018;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x821b001c
	goto loc_821B001C;
loc_821B0018:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_821B001C:
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
	// beq cr6,0x821b005c
	if (ctx.cr6.eq) goto loc_821B005C;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B0054:
	// stwu r3,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b0054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B0054;
loc_821B005C:
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

__attribute__((alias("__imp__sub_821B007C"))) PPC_WEAK_FUNC(sub_821B007C);
PPC_FUNC_IMPL(__imp__sub_821B007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0080"))) PPC_WEAK_FUNC(sub_821B0080);
PPC_FUNC_IMPL(__imp__sub_821B0080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821B0088;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// twllei r9,0
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// divwu r8,r11,r9
	ctx.r8.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f63e0
	ctx.lr = 0x821B00CC;
	sub_820F63E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821b00f4
	if (ctx.cr6.eq) goto loc_821B00F4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_821B00DC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821b0138
	if (ctx.cr6.eq) goto loc_821B0138;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x821b00dc
	if (!ctx.cr6.eq) goto loc_821B00DC;
loc_821B00F4:
	// bl 0x821afec8
	ctx.lr = 0x821B00F8;
	sub_821AFEC8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r3,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_821B011C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b011c
	if (!ctx.cr0.eq) goto loc_821B011C;
loc_821B0138:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B0150"))) PPC_WEAK_FUNC(sub_821B0150);
PPC_FUNC_IMPL(__imp__sub_821B0150) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,10832
	ctx.r31.s64 = ctx.r11.s64 + 10832;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821B0178;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b019c
	if (ctx.cr6.eq) goto loc_821B019C;
loc_821B0184:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b01cc
	if (!ctx.cr6.eq) goto loc_821B01CC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b0184
	if (!ctx.cr6.eq) goto loc_821B0184;
loc_821B019C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b01f4
	if (!ctx.cr6.eq) goto loc_821B01F4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8217e2a8
	ctx.lr = 0x821B01B0;
	sub_8217E2A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b01f4
	if (!ctx.cr6.eq) goto loc_821B01F4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B01C4;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b0238
	goto loc_821B0238;
loc_821B01CC:
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
	// b 0x821b0228
	goto loc_821B0228;
loc_821B01F4:
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
loc_821B0228:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B0234;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821B0238:
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

__attribute__((alias("__imp__sub_821B0250"))) PPC_WEAK_FUNC(sub_821B0250);
PPC_FUNC_IMPL(__imp__sub_821B0250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821B0258;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// twllei r9,0
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// divwu r8,r11,r9
	ctx.r8.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f63e0
	ctx.lr = 0x821B029C;
	sub_820F63E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821b02c4
	if (ctx.cr6.eq) goto loc_821B02C4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_821B02AC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821b0308
	if (ctx.cr6.eq) goto loc_821B0308;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x821b02ac
	if (!ctx.cr6.eq) goto loc_821B02AC;
loc_821B02C4:
	// bl 0x821b0150
	ctx.lr = 0x821B02C8;
	sub_821B0150(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r3,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_821B02EC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b02ec
	if (!ctx.cr0.eq) goto loc_821B02EC;
loc_821B0308:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B0320"))) PPC_WEAK_FUNC(sub_821B0320);
PPC_FUNC_IMPL(__imp__sub_821B0320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B0328;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-26584
	ctx.r10.s64 = ctx.r11.s64 + -26584;
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,2180
	ctx.r3.s64 = 2180;
	// addi r30,r30,-16368
	ctx.r30.s64 = ctx.r30.s64 + -16368;
	// bl 0x82082030
	ctx.lr = 0x821B0358;
	sub_82082030(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,109
	ctx.r9.s64 = 109;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq cr6,0x821b0380
	if (ctx.cr6.eq) goto loc_821B0380;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821B0374:
	// stwu r31,20(r11)
	ea = 20 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821b0374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B0374;
	// b 0x821b0384
	goto loc_821B0384;
loc_821B0380:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_821B0384:
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821B0394:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// bdnz 0x821b0394
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B0394;
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r3,-16356
	ctx.r3.s64 = ctx.r3.s64 + -16356;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// bl 0x82305000
	ctx.lr = 0x821B03D8;
	sub_82305000(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// ori r9,r11,49200
	ctx.r9.u64 = ctx.r11.u64 | 49200;
	// addi r11,r29,16388
	ctx.r11.s64 = ctx.r29.s64 + 16388;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stwx r31,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r31.u32);
loc_821B03F4:
	// stw r31,-16380(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16380, ctx.r31.u32);
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821b03f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B03F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82082030
	ctx.lr = 0x821B0414;
	sub_82082030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b0434
	if (ctx.cr6.eq) goto loc_821B0434;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x821B042C;
	sub_8233EAF0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x821b0438
	goto loc_821B0438;
loc_821B0434:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821B0438:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r31,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r31.u32);
	// stw r31,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r31.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-26660
	ctx.r8.s64 = ctx.r10.s64 + -26660;
	// ori r4,r9,32776
	ctx.r4.u64 = ctx.r9.u64 | 32776;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r5,-26660(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26660);
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// ori r10,r7,49164
	ctx.r10.u64 = ctx.r7.u64 | 49164;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r7,r6,-21184
	ctx.r7.s64 = ctx.r6.s64 + -21184;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r11,16396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16396, ctx.r11.u32);
	// stbx r31,r29,r4
	PPC_STORE_U8(ctx.r29.u32 + ctx.r4.u32, ctx.r31.u8);
	// stwx r31,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r31.u32);
	// stw r29,224(r7)
	PPC_STORE_U32(ctx.r7.u32 + 224, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B0494"))) PPC_WEAK_FUNC(sub_821B0494);
PPC_FUNC_IMPL(__imp__sub_821B0494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0498"))) PPC_WEAK_FUNC(sub_821B0498);
PPC_FUNC_IMPL(__imp__sub_821B0498) {
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
	// bl 0x821b04f8
	ctx.lr = 0x821B04B8;
	sub_821B04F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b04d8
	if (ctx.cr6.eq) goto loc_821B04D8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b04d8
	if (ctx.cr6.eq) goto loc_821B04D8;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B04D8;
	sub_82080000(ctx, base);
loc_821B04D8:
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

__attribute__((alias("__imp__sub_821B04F4"))) PPC_WEAK_FUNC(sub_821B04F4);
PPC_FUNC_IMPL(__imp__sub_821B04F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B04F8"))) PPC_WEAK_FUNC(sub_821B04F8);
PPC_FUNC_IMPL(__imp__sub_821B04F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B0500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-26584
	ctx.r10.s64 = ctx.r11.s64 + -26584;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x821b0544
	if (ctx.cr6.eq) goto loc_821B0544;
loc_821B0520:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,440(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x821af1f8
	ctx.lr = 0x821B052C;
	sub_821AF1F8(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B0538;
	sub_82080000(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821b0520
	if (!ctx.cr6.eq) goto loc_821B0520;
loc_821B0544:
	// addi r31,r29,16392
	ctx.r31.s64 = ctx.r29.s64 + 16392;
	// li r30,4096
	ctx.r30.s64 = 4096;
loc_821B054C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0564
	if (ctx.cr6.eq) goto loc_821B0564;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B0564;
	sub_82080000(ctx, base);
loc_821B0564:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821b054c
	if (!ctx.cr0.eq) goto loc_821B054C;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r11,r11,-16356
	ctx.r11.s64 = ctx.r11.s64 + -16356;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b058c
	if (ctx.cr6.eq) goto loc_821B058C;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x821B058C;
	sub_82246E18(ctx, base);
loc_821B058C:
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// addi r31,r31,-16368
	ctx.r31.s64 = ctx.r31.s64 + -16368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b18d8
	ctx.lr = 0x821B059C;
	sub_821B18D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b05b4
	if (ctx.cr6.eq) goto loc_821B05B4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B05B4;
	sub_82080000(ctx, base);
loc_821B05B4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r11,-28940
	ctx.r9.s64 = ctx.r11.s64 + -28940;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-21184
	ctx.r11.s64 = ctx.r11.s64 + -21184;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821B05D4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821b05e4
	if (!ctx.cr6.eq) goto loc_821B05E4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821B05E4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821b05d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B05D4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B05F4"))) PPC_WEAK_FUNC(sub_821B05F4);
PPC_FUNC_IMPL(__imp__sub_821B05F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B05F8"))) PPC_WEAK_FUNC(sub_821B05F8);
PPC_FUNC_IMPL(__imp__sub_821B05F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x821B0600;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r22,r3,8
	ctx.r22.s64 = ctx.r3.s64 + 8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r29,4096
	ctx.r29.s64 = 4096;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// ori r28,r11,49164
	ctx.r28.u64 = ctx.r11.u64 | 49164;
loc_821B061C:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b068c
	if (ctx.cr6.eq) goto loc_821B068C;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b068c
	if (ctx.cr6.eq) goto loc_821B068C;
	// lwzx r11,r26,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r28.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b068c
	if (!ctx.cr6.eq) goto loc_821B068C;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
loc_821B0650:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b067c
	if (ctx.cr6.eq) goto loc_821B067C;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b067c
	if (!ctx.cr6.eq) goto loc_821B067C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82247328
	ctx.lr = 0x821B0678;
	sub_82247328(ctx, base);
	// b 0x821b0650
	goto loc_821B0650;
loc_821B067C:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
loc_821B068C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821b061c
	if (!ctx.cr0.eq) goto loc_821B061C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b07d4
	if (ctx.cr6.eq) goto loc_821B07D4;
	// addis r27,r26,1
	ctx.r27.s64 = ctx.r26.s64 + 65536;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r27,r27,-16356
	ctx.r27.s64 = ctx.r27.s64 + -16356;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r25,r11,-7224
	ctx.r25.s64 = ctx.r11.s64 + -7224;
loc_821B06BC:
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adfb8
	ctx.lr = 0x821B06CC;
	sub_821ADFB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b06fc
	if (ctx.cr6.eq) goto loc_821B06FC;
loc_821B06D8:
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b06fc
	if (ctx.cr6.eq) goto loc_821B06FC;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821adfb8
	ctx.lr = 0x821B06F0;
	sub_821ADFB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b06d8
	if (!ctx.cr6.eq) goto loc_821B06D8;
loc_821B06FC:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,440(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// rlwinm r10,r11,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// bl 0x821aef60
	ctx.lr = 0x821B0714;
	sub_821AEF60(ctx, base);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// bl 0x823052d8
	ctx.lr = 0x821B072C;
	sub_823052D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16389(r25)
	PPC_STORE_U8(ctx.r25.u32 + 16389, ctx.r11.u8);
	// lwz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r6,r7,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821b077c
	if (ctx.cr6.eq) goto loc_821B077C;
loc_821B0744:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B0758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b077c
	if (!ctx.cr6.eq) goto loc_821B077C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82247328
	ctx.lr = 0x821B076C;
	sub_82247328(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b0744
	if (!ctx.cr6.eq) goto loc_821B0744;
loc_821B077C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r30,176(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x823051a8
	ctx.lr = 0x821B0788;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af1f8
	ctx.lr = 0x821B0790;
	sub_821AF1F8(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B079C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821b07ac
	if (ctx.cr6.eq) goto loc_821B07AC;
	// stw r29,440(r28)
	PPC_STORE_U32(ctx.r28.u32 + 440, ctx.r29.u32);
	// b 0x821b07b0
	goto loc_821B07B0;
loc_821B07AC:
	// stw r29,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r29.u32);
loc_821B07B0:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r23,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r23.u32);
	// bl 0x821b16d0
	ctx.lr = 0x821B07C8;
	sub_821B16D0(ctx, base);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b06bc
	if (!ctx.cr6.eq) goto loc_821B06BC;
loc_821B07D4:
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x821B07E4;
	sub_8233EAF0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B07EC"))) PPC_WEAK_FUNC(sub_821B07EC);
PPC_FUNC_IMPL(__imp__sub_821B07EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B07F0"))) PPC_WEAK_FUNC(sub_821B07F0);
PPC_FUNC_IMPL(__imp__sub_821B07F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x821b0890
	if (!ctx.cr6.lt) goto loc_821B0890;
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
	// beq cr6,0x821b0890
	if (ctx.cr6.eq) goto loc_821B0890;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b082c
	if (ctx.cr6.eq) goto loc_821B082C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821b0840
	goto loc_821B0840;
loc_821B082C:
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r9,r10,0,15,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FE00;
	// rlwinm r9,r9,0,22,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF03FF;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r10,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821B0840:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b0870
	if (ctx.cr6.eq) goto loc_821B0870;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// bne cr6,0x821b0864
	if (!ctx.cr6.eq) goto loc_821B0864;
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_821B0864:
	// stw r9,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821B0870:
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b0890
	if (!ctx.cr6.eq) goto loc_821B0890;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,-26648
	ctx.r9.s64 = ctx.r10.s64 + -26648;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_821B0890:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B0898"))) PPC_WEAK_FUNC(sub_821B0898);
PPC_FUNC_IMPL(__imp__sub_821B0898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821B08A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,4098
	ctx.r11.s64 = ctx.r4.s64 + 4098;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r27,128(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821b0900
	if (ctx.cr6.eq) goto loc_821B0900;
	// addi r31,r11,132
	ctx.r31.s64 = ctx.r11.s64 + 132;
loc_821B08CC:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821b090c
	if (ctx.cr6.eq) goto loc_821B090C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b0898
	ctx.lr = 0x821B08E4;
	sub_821B0898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b090c
	if (!ctx.cr6.eq) goto loc_821B090C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x821b08cc
	if (ctx.cr6.lt) goto loc_821B08CC;
loc_821B0900:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_821B090C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B0918"))) PPC_WEAK_FUNC(sub_821B0918);
PPC_FUNC_IMPL(__imp__sub_821B0918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x821B0920;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r11,-29208
	ctx.r30.s64 = ctx.r11.s64 + -29208;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b0958
	if (ctx.cr6.eq) goto loc_821B0958;
loc_821B0944:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aef60
	ctx.lr = 0x821B094C;
	sub_821AEF60(ctx, base);
	// lwz r31,440(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b0944
	if (!ctx.cr6.eq) goto loc_821B0944;
loc_821B0958:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821b16d0
	ctx.lr = 0x821B0964;
	sub_821B16D0(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r25,r11,-7224
	ctx.r25.s64 = ctx.r11.s64 + -7224;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// addi r3,r25,16696
	ctx.r3.s64 = ctx.r25.s64 + 16696;
	// bl 0x821063d0
	ctx.lr = 0x821B097C;
	sub_821063D0(ctx, base);
	// li r24,-1
	ctx.r24.s64 = -1;
loc_821B0980:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0bf8
	if (ctx.cr6.eq) goto loc_821B0BF8;
loc_821B0998:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r28,440(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b0bd8
	if (ctx.cr6.eq) goto loc_821B0BD8;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b0bd8
	if (!ctx.cr6.eq) goto loc_821B0BD8;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b0bd8
	if (!ctx.cr6.eq) goto loc_821B0BD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adfb8
	ctx.lr = 0x821B09D8;
	sub_821ADFB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b0bd8
	if (!ctx.cr6.eq) goto loc_821B0BD8;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b09fc
	if (ctx.cr6.eq) goto loc_821B09FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac9b8
	ctx.lr = 0x821B09FC;
	sub_821AC9B8(ctx, base);
loc_821B09FC:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0a20
	if (ctx.cr6.eq) goto loc_821B0A20;
loc_821B0A08:
	// lhz r10,246(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 246);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b0ab8
	if (!ctx.cr6.eq) goto loc_821B0AB8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b0a08
	if (!ctx.cr6.eq) goto loc_821B0A08;
loc_821B0A20:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821B0A24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b0bd8
	if (!ctx.cr6.eq) goto loc_821B0BD8;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b0bd8
	if (!ctx.cr6.eq) goto loc_821B0BD8;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b0bd8
	if (!ctx.cr6.eq) goto loc_821B0BD8;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b0b20
	if (ctx.cr6.eq) goto loc_821B0B20;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,49164
	ctx.r10.u64 = ctx.r11.u64 | 49164;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b0b10
	if (ctx.cr6.eq) goto loc_821B0B10;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// ori r9,r11,32776
	ctx.r9.u64 = ctx.r11.u64 | 32776;
	// lbzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b0b20
	if (ctx.cr6.eq) goto loc_821B0B20;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r11,r11,-32756
	ctx.r11.s64 = ctx.r11.s64 + -32756;
loc_821B0A94:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,176(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 176);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821b0ac0
	if (ctx.cr6.eq) goto loc_821B0AC0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821b0a94
	if (ctx.cr6.lt) goto loc_821B0A94;
	// b 0x821b0b20
	goto loc_821B0B20;
loc_821B0AB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821b0a24
	goto loc_821B0A24;
loc_821B0AC0:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821b0afc
	if (!ctx.cr6.lt) goto loc_821B0AFC;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-32764
	ctx.r9.s64 = ctx.r9.s64 + -32764;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_821B0ADC:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r7,r9,32776
	ctx.r7.u64 = ctx.r9.u64 | 32776;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lbzx r9,r30,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821b0adc
	if (ctx.cr6.lt) goto loc_821B0ADC;
loc_821B0AFC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,255
	ctx.r10.s64 = ctx.r9.s64 + 255;
	// ori r9,r11,32776
	ctx.r9.u64 = ctx.r11.u64 | 32776;
	// stbx r10,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u8);
	// b 0x821b0b20
	goto loc_821B0B20;
loc_821B0B10:
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// ori r9,r10,49164
	ctx.r9.u64 = ctx.r10.u64 | 49164;
	// stwx r27,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r27.u32);
loc_821B0B20:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,-16356
	ctx.r3.s64 = ctx.r11.s64 + -16356;
	// bl 0x823052d8
	ctx.lr = 0x821B0B30;
	sub_823052D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16389(r25)
	PPC_STORE_U8(ctx.r25.u32 + 16389, ctx.r11.u8);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b0b90
	if (ctx.cr6.eq) goto loc_821B0B90;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b0b90
	if (ctx.cr6.eq) goto loc_821B0B90;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r3,r11,-16356
	ctx.r3.s64 = ctx.r11.s64 + -16356;
	// bl 0x823051a8
	ctx.lr = 0x821B0B64;
	sub_823051A8(ctx, base);
loc_821B0B64:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b0b84
	if (!ctx.cr6.eq) goto loc_821B0B84;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b0b9c
	if (ctx.cr6.eq) goto loc_821B0B9C;
loc_821B0B84:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82247328
	ctx.lr = 0x821B0B8C;
	sub_82247328(ctx, base);
	// b 0x821b0b64
	goto loc_821B0B64;
loc_821B0B90:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r3,r11,-16356
	ctx.r3.s64 = ctx.r11.s64 + -16356;
	// bl 0x823051a8
	ctx.lr = 0x821B0B9C;
	sub_823051A8(ctx, base);
loc_821B0B9C:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// bl 0x821af1f8
	ctx.lr = 0x821B0BB4;
	sub_821AF1F8(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B0BC0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b0bd0
	if (ctx.cr6.eq) goto loc_821B0BD0;
	// stw r28,440(r29)
	PPC_STORE_U32(ctx.r29.u32 + 440, ctx.r28.u32);
	// b 0x821b0bdc
	goto loc_821B0BDC;
loc_821B0BD0:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// b 0x821b0bdc
	goto loc_821B0BDC;
loc_821B0BD8:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_821B0BDC:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821b0998
	if (!ctx.cr6.eq) goto loc_821B0998;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821b0bf8
	if (ctx.cr6.eq) goto loc_821B0BF8;
	// cmplw cr6,r23,r26
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x821b0980
	if (!ctx.cr6.eq) goto loc_821B0980;
loc_821B0BF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r25,16696
	ctx.r3.s64 = ctx.r25.s64 + 16696;
	// bl 0x821063d0
	ctx.lr = 0x821B0C04;
	sub_821063D0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821b0c18
	ctx.lr = 0x821B0C0C;
	sub_821B0C18(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B0C14"))) PPC_WEAK_FUNC(sub_821B0C14);
PPC_FUNC_IMPL(__imp__sub_821B0C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0C18"))) PPC_WEAK_FUNC(sub_821B0C18);
PPC_FUNC_IMPL(__imp__sub_821B0C18) {
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
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-29208
	ctx.r31.s64 = ctx.r11.s64 + -29208;
	// ori r9,r10,49164
	ctx.r9.u64 = ctx.r10.u64 | 49164;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0c78
	if (ctx.cr6.eq) goto loc_821B0C78;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b0d58
	if (!ctx.cr6.eq) goto loc_821B0D58;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b0d58
	if (!ctx.cr6.eq) goto loc_821B0D58;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,49164
	ctx.r9.u64 = ctx.r10.u64 | 49164;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
loc_821B0C78:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b0cb8
	if (!ctx.cr6.eq) goto loc_821B0CB8;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,-7224
	ctx.r11.s64 = ctx.r11.s64 + -7224;
	// lbz r10,16389(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16389);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b0ca8
	if (!ctx.cr6.eq) goto loc_821B0CA8;
	// lbz r11,16388(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821b0cac
	if (ctx.cr6.eq) goto loc_821B0CAC;
loc_821B0CA8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821B0CAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b0d58
	if (!ctx.cr6.eq) goto loc_821B0D58;
loc_821B0CB8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,32776
	ctx.r10.u64 = ctx.r11.u64 | 32776;
	// lbzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0d58
	if (ctx.cr6.eq) goto loc_821B0D58;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,32780
	ctx.r9.u64 = ctx.r10.u64 | 32780;
	// lwzx r30,r31,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b0d10
	if (ctx.cr6.eq) goto loc_821B0D10;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,49164
	ctx.r10.u64 = ctx.r11.u64 | 49164;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x821af5e0
	ctx.lr = 0x821B0CF4;
	sub_821AF5E0(ctx, base);
	// lwz r9,548(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x82247090
	ctx.lr = 0x821B0D04;
	sub_82247090(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r8,32776
	ctx.r7.u64 = ctx.r8.u64 | 32776;
	// lbzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
loc_821B0D10:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x821b0d48
	if (!ctx.cr6.gt) goto loc_821B0D48;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-32760
	ctx.r11.s64 = ctx.r11.s64 + -32760;
loc_821B0D28:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r9,32776
	ctx.r7.u64 = ctx.r9.u64 | 32776;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lbzx r9,r31,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821b0d28
	if (ctx.cr6.lt) goto loc_821B0D28;
loc_821B0D48:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,255
	ctx.r10.s64 = ctx.r9.s64 + 255;
	// ori r9,r11,32776
	ctx.r9.u64 = ctx.r11.u64 | 32776;
	// stbx r10,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
loc_821B0D58:
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

__attribute__((alias("__imp__sub_821B0D70"))) PPC_WEAK_FUNC(sub_821B0D70);
PPC_FUNC_IMPL(__imp__sub_821B0D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B0D78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r11,16392
	ctx.r9.s64 = ctx.r11.s64 + 16392;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0e1c
	if (ctx.cr6.eq) goto loc_821B0E1C;
	// lwz r31,128(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// addi r10,r11,132
	ctx.r10.s64 = ctx.r11.s64 + 132;
	// cmplwi cr6,r4,4096
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4096, ctx.xer);
	// bge cr6,0x821b0e1c
	if (!ctx.cr6.lt) goto loc_821B0E1C;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0e1c
	if (ctx.cr6.eq) goto loc_821B0E1C;
	// addi r9,r11,468
	ctx.r9.s64 = ctx.r11.s64 + 468;
loc_821B0DC4:
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
	// bne 0x821b0dc4
	if (!ctx.cr0.eq) goto loc_821B0DC4;
	// lwz r6,160(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r5,r6,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821b0e1c
	if (ctx.cr6.eq) goto loc_821B0E1C;
	// lwz r9,160(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r8,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r8.u32);
	// beq cr6,0x821b0e1c
	if (ctx.cr6.eq) goto loc_821B0E1C;
	// addi r30,r10,-2
	ctx.r30.s64 = ctx.r10.s64 + -2;
loc_821B0E08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzu r4,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// bl 0x821b0d70
	ctx.lr = 0x821B0E14;
	sub_821B0D70(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821b0e08
	if (!ctx.cr0.eq) goto loc_821B0E08;
loc_821B0E1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B0E24"))) PPC_WEAK_FUNC(sub_821B0E24);
PPC_FUNC_IMPL(__imp__sub_821B0E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0E28"))) PPC_WEAK_FUNC(sub_821B0E28);
PPC_FUNC_IMPL(__imp__sub_821B0E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x821B0E30;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,4096
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4096, ctx.xer);
	// blt cr6,0x821b0e5c
	if (ctx.cr6.lt) goto loc_821B0E5C;
loc_821B0E50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_821B0E5C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,16392
	ctx.r9.s64 = ctx.r11.s64 + 16392;
	// lwzx r27,r10,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821b0e50
	if (ctx.cr6.eq) goto loc_821B0E50;
	// addi r10,r26,2
	ctx.r10.s64 = ctx.r26.s64 + 2;
	// lwz r30,128(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// addi r11,r27,132
	ctx.r11.s64 = ctx.r27.s64 + 132;
	// rlwinm r24,r10,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r24,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821b0efc
	if (ctx.cr6.eq) goto loc_821B0EFC;
	// lwz r10,160(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b0ed0
	if (ctx.cr6.eq) goto loc_821B0ED0;
	// lwz r10,160(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 160, ctx.r9.u32);
	// beq cr6,0x821b0ed0
	if (ctx.cr6.eq) goto loc_821B0ED0;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_821B0EBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzu r4,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// bl 0x821b0d70
	ctx.lr = 0x821B0EC8;
	sub_821B0D70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821b0ebc
	if (!ctx.cr0.eq) goto loc_821B0EBC;
loc_821B0ED0:
	// addi r11,r28,468
	ctx.r11.s64 = ctx.r28.s64 + 468;
loc_821B0ED4:
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
	// bne 0x821b0ed4
	if (!ctx.cr0.eq) goto loc_821B0ED4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_821B0EFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b0f28
	if (ctx.cr6.eq) goto loc_821B0F28;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_821B0F08:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lhzu r4,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b0e28
	ctx.lr = 0x821B0F20;
	sub_821B0E28(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821b0f08
	if (!ctx.cr0.eq) goto loc_821B0F08;
loc_821B0F28:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,552
	ctx.r3.s64 = 552;
	// bl 0x82082030
	ctx.lr = 0x821B0F3C;
	sub_82082030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b0f54
	if (ctx.cr6.eq) goto loc_821B0F54;
	// bl 0x821aa630
	ctx.lr = 0x821B0F4C;
	sub_821AA630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x821b0f58
	goto loc_821B0F58;
loc_821B0F54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B0F58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0f98
	if (ctx.cr6.eq) goto loc_821B0F98;
	// addi r11,r11,440
	ctx.r11.s64 = ctx.r11.s64 + 440;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b0f90
	if (ctx.cr6.eq) goto loc_821B0F90;
loc_821B0F7C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,440
	ctx.r11.s64 = ctx.r11.s64 + 440;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b0f7c
	if (!ctx.cr6.eq) goto loc_821B0F7C;
loc_821B0F90:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x821b0f9c
	goto loc_821B0F9C;
loc_821B0F98:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_821B0F9C:
	// stwx r3,r24,r31
	PPC_STORE_U32(ctx.r24.u32 + ctx.r31.u32, ctx.r3.u32);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lwz r8,148(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// or r7,r8,r22
	ctx.r7.u64 = ctx.r8.u64 | ctx.r22.u64;
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// addi r10,r10,-32760
	ctx.r10.s64 = ctx.r10.s64 + -32760;
	// stw r26,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r26.u32);
	// ori r6,r9,4
	ctx.r6.u64 = ctx.r9.u64 | 4;
	// stw r23,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r23.u32);
	// stw r7,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r7.u32);
	// stw r6,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r6.u32);
	// stw r25,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r25.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r5,r11,8195
	ctx.r5.s64 = ctx.r11.s64 + 8195;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r3.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B0FF0"))) PPC_WEAK_FUNC(sub_821B0FF0);
PPC_FUNC_IMPL(__imp__sub_821B0FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B0FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,4096
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4096, ctx.xer);
	// bge cr6,0x821b10ac
	if (!ctx.cr6.lt) goto loc_821B10AC;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b10ac
	if (ctx.cr6.eq) goto loc_821B10AC;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lwz r9,176(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// addi r10,r10,-29208
	ctx.r10.s64 = ctx.r10.s64 + -29208;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,16392
	ctx.r7.s64 = ctx.r10.s64 + 16392;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b10ac
	if (ctx.cr6.eq) goto loc_821B10AC;
	// lwz r9,160(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821b10ac
	if (!ctx.cr6.eq) goto loc_821B10AC;
	// addi r9,r11,468
	ctx.r9.s64 = ctx.r11.s64 + 468;
loc_821B1050:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b1050
	if (!ctx.cr0.eq) goto loc_821B1050;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821b10ac
	if (!ctx.cr6.eq) goto loc_821B10AC;
	// lwz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// addi r9,r10,132
	ctx.r9.s64 = ctx.r10.s64 + 132;
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// stw r7,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r7.u32);
	// lwz r31,128(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b10ac
	if (ctx.cr6.eq) goto loc_821B10AC;
	// addi r30,r9,-2
	ctx.r30.s64 = ctx.r9.s64 + -2;
loc_821B1098:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzu r4,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// bl 0x821b0ff0
	ctx.lr = 0x821B10A4;
	sub_821B0FF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821b1098
	if (!ctx.cr0.eq) goto loc_821B1098;
loc_821B10AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B10B4"))) PPC_WEAK_FUNC(sub_821B10B4);
PPC_FUNC_IMPL(__imp__sub_821B10B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B10B8"))) PPC_WEAK_FUNC(sub_821B10B8);
PPC_FUNC_IMPL(__imp__sub_821B10B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821B10C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,4096
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4096, ctx.xer);
	// bge cr6,0x821b1184
	if (!ctx.cr6.lt) goto loc_821B1184;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r10,r3
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821b1184
	if (ctx.cr6.eq) goto loc_821B1184;
	// lwz r11,160(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 160);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b1184
	if (!ctx.cr6.eq) goto loc_821B1184;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r27,r11,-29208
	ctx.r27.s64 = ctx.r11.s64 + -29208;
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b1160
	if (ctx.cr6.eq) goto loc_821B1160;
loc_821B110C:
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// addi r10,r27,16392
	ctx.r10.s64 = ctx.r27.s64 + 16392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b1154
	if (ctx.cr6.eq) goto loc_821B1154;
	// addi r31,r11,132
	ctx.r31.s64 = ctx.r11.s64 + 132;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_821B1130:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x821b1148
	if (!ctx.cr6.eq) goto loc_821B1148;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,176(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// bl 0x821b10b8
	ctx.lr = 0x821B1148;
	sub_821B10B8(ctx, base);
loc_821B1148:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x821b1130
	if (!ctx.cr0.eq) goto loc_821B1130;
loc_821B1154:
	// lwz r29,440(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821b110c
	if (!ctx.cr6.eq) goto loc_821B110C;
loc_821B1160:
	// lwz r11,468(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b1184
	if (!ctx.cr6.gt) goto loc_821B1184;
loc_821B116C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821b0ff0
	ctx.lr = 0x821B1178;
	sub_821B0FF0(ctx, base);
	// lwz r11,468(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821b116c
	if (ctx.cr6.gt) goto loc_821B116C;
loc_821B1184:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B118C"))) PPC_WEAK_FUNC(sub_821B118C);
PPC_FUNC_IMPL(__imp__sub_821B118C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1190"))) PPC_WEAK_FUNC(sub_821B1190);
PPC_FUNC_IMPL(__imp__sub_821B1190) {
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
	// bl 0x821b11b8
	ctx.lr = 0x821B11A0;
	sub_821B11B8(ctx, base);
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

__attribute__((alias("__imp__sub_821B11B4"))) PPC_WEAK_FUNC(sub_821B11B4);
PPC_FUNC_IMPL(__imp__sub_821B11B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B11B8"))) PPC_WEAK_FUNC(sub_821B11B8);
PPC_FUNC_IMPL(__imp__sub_821B11B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821B11C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r10,176(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 176);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,16392
	ctx.r8.s64 = ctx.r11.s64 + 16392;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821b11f8
	if (!ctx.cr6.eq) goto loc_821B11F8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,4323
	ctx.r4.s64 = ctx.r11.s64 + 4323;
loc_821B11F8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_821B11FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b11fc
	if (!ctx.cr6.eq) goto loc_821B11FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8233c048
	ctx.lr = 0x821B1228;
	sub_8233C048(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r28,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r28.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stbx r28,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r28.u8);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// sth r28,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// bl 0x82161240
	ctx.lr = 0x821B125C;
	sub_82161240(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821b13b4
	if (ctx.cr6.eq) goto loc_821B13B4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r25,r11,-26596
	ctx.r25.s64 = ctx.r11.s64 + -26596;
loc_821B1270:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x821b12bc
	if (ctx.cr6.lt) goto loc_821B12BC;
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
	// bne cr6,0x821b12b4
	if (!ctx.cr6.eq) goto loc_821B12B4;
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
	ctx.lr = 0x821B12B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B12B4:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// b 0x821b12c8
	goto loc_821B12C8;
loc_821B12BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307908
	ctx.lr = 0x821B12C4;
	sub_82307908(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_821B12C8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82082030
	ctx.lr = 0x821B12DC;
	sub_82082030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b12f8
	if (ctx.cr6.eq) goto loc_821B12F8;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x821B12F4;
	sub_8233EAF0(ctx, base);
	// b 0x821b12fc
	goto loc_821B12FC;
loc_821B12F8:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821B12FC:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x821B130C;
	sub_8208CFB0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233cc00
	ctx.lr = 0x821B1320;
	sub_8233CC00(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x821b136c
	if (ctx.cr6.lt) goto loc_821B136C;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwzx r29,r8,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x821b1364
	if (!ctx.cr6.eq) goto loc_821B1364;
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
	ctx.lr = 0x821B1364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B1364:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x821b1374
	goto loc_821B1374;
loc_821B136C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307908
	ctx.lr = 0x821B1374;
	sub_82307908(ctx, base);
loc_821B1374:
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r28,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r28.u32);
	// addi r4,r30,132
	ctx.r4.s64 = ctx.r30.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x821B138C;
	sub_8208CFB0(ctx, base);
	// addi r11,r27,4098
	ctx.r11.s64 = ctx.r27.s64 + 4098;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r30,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r30.u32);
	// bl 0x82161240
	ctx.lr = 0x821B13A8;
	sub_82161240(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b1270
	if (!ctx.cr6.eq) goto loc_821B1270;
loc_821B13B4:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B13BC"))) PPC_WEAK_FUNC(sub_821B13BC);
PPC_FUNC_IMPL(__imp__sub_821B13BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B13C0"))) PPC_WEAK_FUNC(sub_821B13C0);
PPC_FUNC_IMPL(__imp__sub_821B13C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x821B13C8;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r19,r11,-29208
	ctx.r19.s64 = ctx.r11.s64 + -29208;
	// lwz r29,4(r19)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b16c4
	if (ctx.cr6.eq) goto loc_821B16C4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// clrlwi r18,r3,24
	ctx.r18.u64 = ctx.r3.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r23,40
	ctx.r23.s64 = 40;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r20,r11,4323
	ctx.r20.s64 = ctx.r11.s64 + 4323;
	// addi r26,r10,-26316
	ctx.r26.s64 = ctx.r10.s64 + -26316;
	// addi r22,r9,-7224
	ctx.r22.s64 = ctx.r9.s64 + -7224;
	// addi r28,r8,22200
	ctx.r28.s64 = ctx.r8.s64 + 22200;
loc_821B141C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821b144c
	if (ctx.cr6.eq) goto loc_821B144C;
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b144c
	if (ctx.cr6.eq) goto loc_821B144C;
loc_821B1434:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82247328
	ctx.lr = 0x821B143C;
	sub_82247328(ctx, base);
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b1434
	if (!ctx.cr6.eq) goto loc_821B1434;
loc_821B144C:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r31,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r31.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r31,500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 500, ctx.r31.u32);
	// addi r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 + 28;
loc_821B1460:
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821b147c
	if (!ctx.cr6.eq) goto loc_821B147C;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// stw r9,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r9.u32);
	// stw r8,500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 500, ctx.r8.u32);
loc_821B147C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821b149c
	if (!ctx.cr6.eq) goto loc_821B149C;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r9,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r9.u32);
	// stw r8,500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 500, ctx.r8.u32);
loc_821B149C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821b14b8
	if (!ctx.cr6.eq) goto loc_821B14B8;
	// stw r9,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r9.u32);
	// stw r11,500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 500, ctx.r11.u32);
loc_821B14B8:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821b14d8
	if (!ctx.cr6.eq) goto loc_821B14D8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r9.u32);
	// stw r8,500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 500, ctx.r8.u32);
loc_821B14D8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// blt cr6,0x821b1460
	if (ctx.cr6.lt) goto loc_821B1460;
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1530
	if (!ctx.cr6.eq) goto loc_821B1530;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
loc_821B1504:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x821b1524
	if (ctx.cr6.eq) goto loc_821B1524;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x821b1504
	if (ctx.cr6.lt) goto loc_821B1504;
	// b 0x821b1530
	goto loc_821B1530;
loc_821B1524:
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 500, ctx.r11.u32);
	// stw r10,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r10.u32);
loc_821B1530:
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1544
	if (!ctx.cr6.eq) goto loc_821B1544;
	// stw r27,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r27.u32);
	// stw r31,500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 500, ctx.r31.u32);
loc_821B1544:
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// addi r10,r22,4
	ctx.r10.s64 = ctx.r22.s64 + 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b1560
	if (ctx.cr6.eq) goto loc_821B1560;
	// bl 0x82179078
	ctx.lr = 0x821B1560;
	sub_82179078(ctx, base);
loc_821B1560:
	// ld r11,456(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 456);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x821b16b8
	if (ctx.cr6.eq) goto loc_821B16B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82082030
	ctx.lr = 0x821B1580;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b15e4
	if (ctx.cr6.eq) goto loc_821B15E4;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r31,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r31.u64);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// sth r31,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r31.u16);
	// sth r31,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r31.u16);
	// stb r31,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r31.u8);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stw r27,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// stw r31,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r31.u32);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r31.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// stw r23,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r23.u32);
	// stw r31,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r31.u32);
	// stw r31,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r31.u32);
	// stw r25,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r25.u32);
	// std r24,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r24.u64);
	// b 0x821b15e8
	goto loc_821B15E8;
loc_821B15E4:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_821B15E8:
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// addi r10,r19,16392
	ctx.r10.s64 = ctx.r19.s64 + 16392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821b1604
	if (!ctx.cr6.eq) goto loc_821B1604;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_821B1604:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7fa8
	ctx.lr = 0x821B1618;
	sub_821B7FA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,456(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 456);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B1630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r27,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r27.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// bl 0x8208cfb0
	ctx.lr = 0x821B1654;
	sub_8208CFB0(ctx, base);
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// bne cr6,0x821b167c
	if (!ctx.cr6.eq) goto loc_821B167C;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
loc_821B167C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aafc8
	ctx.lr = 0x821B168C;
	sub_821AAFC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B16A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821B16B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B16B8:
	// lwz r29,440(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821b141c
	if (!ctx.cr6.eq) goto loc_821B141C;
loc_821B16C4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B16CC"))) PPC_WEAK_FUNC(sub_821B16CC);
PPC_FUNC_IMPL(__imp__sub_821B16CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B16D0"))) PPC_WEAK_FUNC(sub_821B16D0);
PPC_FUNC_IMPL(__imp__sub_821B16D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821B16D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r28,r28,-16336
	ctx.r28.s64 = ctx.r28.s64 + -16336;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b1788
	if (ctx.cr6.eq) goto loc_821B1788;
loc_821B16F8:
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
	ctx.lr = 0x821B1710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b1734
	if (!ctx.cr6.eq) goto loc_821B1734;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1734
	if (!ctx.cr6.eq) goto loc_821B1734;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x821b177c
	goto loc_821B177C;
loc_821B1734:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b174c
	if (!ctx.cr6.eq) goto loc_821B174C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4c88
	ctx.lr = 0x821B174C;
	sub_820F4C88(ctx, base);
loc_821B174C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1764
	if (ctx.cr6.eq) goto loc_821B1764;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
loc_821B1764:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B177C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B177C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821b16f8
	if (!ctx.cr6.eq) goto loc_821B16F8;
loc_821B1788:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B1794"))) PPC_WEAK_FUNC(sub_821B1794);
PPC_FUNC_IMPL(__imp__sub_821B1794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1798"))) PPC_WEAK_FUNC(sub_821B1798);
PPC_FUNC_IMPL(__imp__sub_821B1798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821B17A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821b18cc
	if (!ctx.cr6.gt) goto loc_821B18CC;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_821B17C8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r29,r25,r11
	ctx.r29.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
loc_821B17D4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821b17f8
	if (!ctx.cr6.eq) goto loc_821B17F8;
	// stwcx. r26,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b17d4
	if (!ctx.cr0.eq) goto loc_821B17D4;
	// b 0x821b1800
	goto loc_821B1800;
loc_821B17F8:
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_821B1800:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821b184c
	if (!ctx.cr6.eq) goto loc_821B184C;
loc_821B180C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82247328
	ctx.lr = 0x821B1814;
	sub_82247328(ctx, base);
loc_821B1814:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821b1838
	if (!ctx.cr6.eq) goto loc_821B1838;
	// stwcx. r26,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b1814
	if (!ctx.cr0.eq) goto loc_821B1814;
	// b 0x821b1840
	goto loc_821B1840;
loc_821B1838:
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_821B1840:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b180c
	if (ctx.cr6.eq) goto loc_821B180C;
loc_821B184C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821b18b4
	if (ctx.cr6.eq) goto loc_821B18B4;
loc_821B1858:
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x821b18a8
	if (!ctx.cr6.eq) goto loc_821B18A8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bl 0x821b19d8
	ctx.lr = 0x821B1888;
	sub_821B19D8(ctx, base);
	// addi r7,r27,8
	ctx.r7.s64 = ctx.r27.s64 + 8;
loc_821B188C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b188c
	if (!ctx.cr0.eq) goto loc_821B188C;
loc_821B18A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821b1858
	if (!ctx.cr6.eq) goto loc_821B1858;
loc_821B18B4:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b17c8
	if (ctx.cr6.lt) goto loc_821B17C8;
loc_821B18CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B18D4"))) PPC_WEAK_FUNC(sub_821B18D4);
PPC_FUNC_IMPL(__imp__sub_821B18D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B18D8"))) PPC_WEAK_FUNC(sub_821B18D8);
PPC_FUNC_IMPL(__imp__sub_821B18D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821B18E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821b19c8
	if (!ctx.cr6.gt) goto loc_821B19C8;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_821B1904:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
loc_821B1910:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821b1934
	if (!ctx.cr6.eq) goto loc_821B1934;
	// stwcx. r26,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b1910
	if (!ctx.cr0.eq) goto loc_821B1910;
	// b 0x821b193c
	goto loc_821B193C;
loc_821B1934:
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_821B193C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821b1988
	if (!ctx.cr6.eq) goto loc_821B1988;
loc_821B1948:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82247328
	ctx.lr = 0x821B1950;
	sub_82247328(ctx, base);
loc_821B1950:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821b1974
	if (!ctx.cr6.eq) goto loc_821B1974;
	// stwcx. r26,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b1950
	if (!ctx.cr0.eq) goto loc_821B1950;
	// b 0x821b197c
	goto loc_821B197C;
loc_821B1974:
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_821B197C:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b1948
	if (ctx.cr6.eq) goto loc_821B1948;
loc_821B1988:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821b19a8
	if (ctx.cr6.eq) goto loc_821B19A8;
loc_821B1994:
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x821b19d8
	ctx.lr = 0x821B199C;
	sub_821B19D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x821b1994
	if (!ctx.cr6.eq) goto loc_821B1994;
loc_821B19A8:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b1904
	if (ctx.cr6.lt) goto loc_821B1904;
loc_821B19C8:
	// stw r28,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B19D4"))) PPC_WEAK_FUNC(sub_821B19D4);
PPC_FUNC_IMPL(__imp__sub_821B19D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B19D8"))) PPC_WEAK_FUNC(sub_821B19D8);
PPC_FUNC_IMPL(__imp__sub_821B19D8) {
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
	// beq cr6,0x821b1ad4
	if (ctx.cr6.eq) goto loc_821B1AD4;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,10888
	ctx.r31.s64 = ctx.r11.s64 + 10888;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821B1A0C;
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
	// bne cr6,0x821b1ac8
	if (!ctx.cr6.eq) goto loc_821B1AC8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b1ac8
	if (ctx.cr6.eq) goto loc_821B1AC8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821b1ac8
	if (!ctx.cr6.lt) goto loc_821B1AC8;
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
	// beq cr6,0x821b1aa0
	if (ctx.cr6.eq) goto loc_821B1AA0;
loc_821B1A78:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b1a98
	if (ctx.cr6.eq) goto loc_821B1A98;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821b1a78
	if (!ctx.cr6.eq) goto loc_821B1A78;
	// b 0x821b1aa0
	goto loc_821B1AA0;
loc_821B1A98:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_821B1AA0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b1ab8
	if (!ctx.cr6.eq) goto loc_821B1AB8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821B1AB8:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B1AC4;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_821B1AC8:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B1AD4;
	sub_823051A8(ctx, base);
loc_821B1AD4:
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

__attribute__((alias("__imp__sub_821B1AEC"))) PPC_WEAK_FUNC(sub_821B1AEC);
PPC_FUNC_IMPL(__imp__sub_821B1AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1AF0"))) PPC_WEAK_FUNC(sub_821B1AF0);
PPC_FUNC_IMPL(__imp__sub_821B1AF0) {
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
	// addi r10,r11,-22120
	ctx.r10.s64 = ctx.r11.s64 + -22120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821b04f8
	ctx.lr = 0x821B1B1C;
	sub_821B04F8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b1b34
	if (ctx.cr6.eq) goto loc_821B1B34;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B1B34;
	sub_82080000(ctx, base);
loc_821B1B34:
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

__attribute__((alias("__imp__sub_821B1B50"))) PPC_WEAK_FUNC(sub_821B1B50);
PPC_FUNC_IMPL(__imp__sub_821B1B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821B1B58;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,10320
	ctx.r30.s64 = ctx.r11.s64 + 10320;
	// lwz r11,10492(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10492);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b1bb4
	if (!ctx.cr6.eq) goto loc_821B1BB4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,10492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10492, ctx.r11.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// addi r3,r10,29728
	ctx.r3.s64 = ctx.r10.s64 + 29728;
	// stb r29,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r29.u8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// bl 0x8233bff8
	ctx.lr = 0x821B1BB4;
	sub_8233BFF8(ctx, base);
loc_821B1BB4:
	// bl 0x8230a928
	ctx.lr = 0x821B1BB8;
	sub_8230A928(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82248068
	ctx.lr = 0x821B1BC0;
	sub_82248068(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r28,-1
	ctx.r28.s64 = -1;
	// addis r26,r11,-480
	ctx.r26.s64 = ctx.r11.s64 + -31457280;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82247258
	ctx.lr = 0x821B1BE0;
	sub_82247258(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,239
	ctx.r4.s64 = 239;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x821B1BF0;
	sub_8233EAF0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b1c7c
	if (ctx.cr6.eq) goto loc_821B1C7C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,4480
	ctx.r10.s64 = ctx.r11.s64 + 4480;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82082790
	ctx.lr = 0x821B1C10;
	sub_82082790(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x82082830
	ctx.lr = 0x821B1C20;
	sub_82082830(ctx, base);
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// stw r29,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// stw r29,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r29.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r29,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// bl 0x82305000
	ctx.lr = 0x821B1C40;
	sub_82305000(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r27,r11,25072
	ctx.r27.s64 = ctx.r11.s64 + 25072;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r8,r9,4436
	ctx.r8.s64 = ctx.r9.s64 + 4436;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r29,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r29.u32);
	// stw r29,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r29.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// b 0x821b1c8c
	goto loc_821B1C8C;
loc_821B1C7C:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r27,r10,25072
	ctx.r27.s64 = ctx.r10.s64 + 25072;
	// stw r29,25072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25072, ctx.r29.u32);
loc_821B1C8C:
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r10,r31,280
	ctx.r10.s64 = ctx.r31.s64 + 280;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r9,r26,-280
	ctx.r9.s64 = ctx.r26.s64 + -280;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r8,r8,12032
	ctx.r8.s64 = ctx.r8.s64 + 12032;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r8,12844(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12844, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// stw r9,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r9.u32);
	// bl 0x82081d68
	ctx.lr = 0x821B1CD8;
	sub_82081D68(ctx, base);
	// bl 0x82247330
	ctx.lr = 0x821B1CDC;
	sub_82247330(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r31,-32197
	ctx.r31.s64 = -2110062592;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-27096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27096);
	// bl 0x82388744
	ctx.lr = 0x821B1CF0;
	__imp__KeTlsSetValue(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1d34
	if (ctx.cr6.eq) goto loc_821B1D34;
	// lwz r3,-27096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821B1D04;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b1d10
	if (!ctx.cr6.eq) goto loc_821B1D10;
	// bl 0x821b3000
	ctx.lr = 0x821B1D10;
	sub_821B3000(ctx, base);
loc_821B1D10:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x821b1d34
	if (!ctx.cr6.lt) goto loc_821B1D34;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r29,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_821B1D34:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// bl 0x82082030
	ctx.lr = 0x821B1D50;
	sub_82082030(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r29,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r29.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B1D6C"))) PPC_WEAK_FUNC(sub_821B1D6C);
PPC_FUNC_IMPL(__imp__sub_821B1D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1D70"))) PPC_WEAK_FUNC(sub_821B1D70);
PPC_FUNC_IMPL(__imp__sub_821B1D70) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stb r30,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r30.u8);
	// addi r3,r3,1056
	ctx.r3.s64 = ctx.r3.s64 + 1056;
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// std r30,920(r31)
	PPC_STORE_U64(ctx.r31.u32 + 920, ctx.r30.u64);
	// std r30,944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 944, ctx.r30.u64);
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// std r30,960(r31)
	PPC_STORE_U64(ctx.r31.u32 + 960, ctx.r30.u64);
	// stw r30,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r30.u32);
	// stfs f31,980(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// stfs f0,988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// stb r30,968(r31)
	PPC_STORE_U8(ctx.r31.u32 + 968, ctx.r30.u8);
	// stb r11,969(r31)
	PPC_STORE_U8(ctx.r31.u32 + 969, ctx.r11.u8);
	// stb r30,970(r31)
	PPC_STORE_U8(ctx.r31.u32 + 970, ctx.r30.u8);
	// stb r30,972(r31)
	PPC_STORE_U8(ctx.r31.u32 + 972, ctx.r30.u8);
	// stw r30,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r30.u32);
	// std r30,992(r31)
	PPC_STORE_U64(ctx.r31.u32 + 992, ctx.r30.u64);
	// std r30,1016(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1016, ctx.r30.u64);
	// std r30,1032(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1032, ctx.r30.u64);
	// stw r30,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r30.u32);
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stb r30,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r30.u8);
	// stb r30,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r30.u8);
	// stb r30,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// stb r30,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r30.u8);
	// stb r30,401(r31)
	PPC_STORE_U8(ctx.r31.u32 + 401, ctx.r30.u8);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x821b2d70
	ctx.lr = 0x821B1E20;
	sub_821B2D70(ctx, base);
	// li r9,640
	ctx.r9.s64 = 640;
	// stfs f31,1052(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1052, temp.u32);
	// li r8,480
	ctx.r8.s64 = 480;
	// stb r30,1497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1497, ctx.r30.u8);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stb r30,1496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1496, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1E64"))) PPC_WEAK_FUNC(sub_821B1E64);
PPC_FUNC_IMPL(__imp__sub_821B1E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1E68"))) PPC_WEAK_FUNC(sub_821B1E68);
PPC_FUNC_IMPL(__imp__sub_821B1E68) {
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
	// bl 0x82247330
	ctx.lr = 0x821B1E78;
	sub_82247330(ctx, base);
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82226a00
	ctx.lr = 0x821B1E88;
	sub_82226A00(ctx, base);
	// bl 0x82225008
	ctx.lr = 0x821B1E8C;
	sub_82225008(ctx, base);
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

__attribute__((alias("__imp__sub_821B1EA0"))) PPC_WEAK_FUNC(sub_821B1EA0);
PPC_FUNC_IMPL(__imp__sub_821B1EA0) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822480e8
	ctx.lr = 0x821B1EC0;
	sub_822480E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248270
	ctx.lr = 0x821B1EC8;
	sub_82248270(ctx, base);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r7,r9,60
	ctx.r7.s64 = ctx.r9.s64 * 60;
	// lhz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// subf r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x821b1ee8
	if (!ctx.cr0.lt) goto loc_821B1EE8;
	// addi r11,r11,1440
	ctx.r11.s64 = ctx.r11.s64 + 1440;
loc_821B1EE8:
	// lis r10,-18933
	ctx.r10.s64 = -1240793088;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lis r8,-30584
	ctx.r8.s64 = -2004353024;
	// ori r6,r10,24759
	ctx.r6.u64 = ctx.r10.u64 | 24759;
	// lhz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// ori r4,r8,34953
	ctx.r4.u64 = ctx.r8.u64 | 34953;
	// lhz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// mulhw r10,r11,r6
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32)) >> 32;
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// stb r7,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r7.u8);
	// stb r8,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r8.u8);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r30,60
	ctx.r30.s64 = 60;
	// srawi r10,r6,10
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 10;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stb r6,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r6.u8);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r5,1440
	ctx.r10.s64 = ctx.r5.s64 * 1440;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulhw r10,r11,r4
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32)) >> 32;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divw r7,r11,r30
	ctx.r7.s32 = ctx.r11.s32 / ctx.r30.s32;
	// srawi r10,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 5;
	// stb r7,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r7.u8);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r4,r5,60
	ctx.r4.s64 = ctx.r5.s64 * 60;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stb r3,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r3.u8);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_821B1F84"))) PPC_WEAK_FUNC(sub_821B1F84);
PPC_FUNC_IMPL(__imp__sub_821B1F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1F88"))) PPC_WEAK_FUNC(sub_821B1F88);
PPC_FUNC_IMPL(__imp__sub_821B1F88) {
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
	// bl 0x822482f0
	ctx.lr = 0x821B1F98;
	sub_822482F0(ctx, base);
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bne cr6,0x821b1fb4
	if (!ctx.cr6.eq) goto loc_821B1FB4;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x821b2080
	goto loc_821B2080;
loc_821B1FB4:
	// cmplwi cr6,r3,23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 23, ctx.xer);
	// bne cr6,0x821b1fd0
	if (!ctx.cr6.eq) goto loc_821B1FD0;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x821b2080
	goto loc_821B2080;
loc_821B1FD0:
	// bl 0x822484f0
	ctx.lr = 0x821B1FD4;
	sub_822484F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x821b2070
	if (ctx.cr6.gt) goto loc_821B2070;
	// lis r12,-32229
	ctx.r12.s64 = -2112159744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8184
	ctx.r12.s64 = ctx.r12.s64 + 8184;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821B2070;
	case 1:
		goto loc_821B2070;
	case 2:
		goto loc_821B2020;
	case 3:
		goto loc_821B2034;
	case 4:
		goto loc_821B2048;
	case 5:
		goto loc_821B205C;
	case 6:
		goto loc_821B2070;
	case 7:
		goto loc_821B2070;
	case 8:
		goto loc_821B2070;
	case 9:
		goto loc_821B2070;
	default:
		__builtin_unreachable();
	}
	// lwz r16,8304(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8304);
	// lwz r16,8304(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8304);
	// lwz r16,8224(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8224);
	// lwz r16,8244(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8244);
	// lwz r16,8264(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8264);
	// lwz r16,8284(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8284);
	// lwz r16,8304(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8304);
	// lwz r16,8304(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8304);
	// lwz r16,8304(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8304);
	// lwz r16,8304(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8304);
loc_821B2020:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x821b2080
	goto loc_821B2080;
loc_821B2034:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x821b2080
	goto loc_821B2080;
loc_821B2048:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x821b2080
	goto loc_821B2080;
loc_821B205C:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x821b2080
	goto loc_821B2080;
loc_821B2070:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821B2080:
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stw r10,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B2098"))) PPC_WEAK_FUNC(sub_821B2098);
PPC_FUNC_IMPL(__imp__sub_821B2098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x821B20A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82248628
	ctx.lr = 0x821B20A8;
	sub_82248628(ctx, base);
	// lis r31,-32183
	ctx.r31.s64 = -2109145088;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,27608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27608, ctx.r3.u32);
	// bne cr6,0x821b20c4
	if (!ctx.cr6.eq) goto loc_821B20C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_821B20C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822485b8
	ctx.lr = 0x821B20CC;
	sub_822485B8(ctx, base);
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,27608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27608);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,27604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27604, ctx.r11.u32);
	// bl 0x822485b8
	ctx.lr = 0x821B20E4;
	sub_822485B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b22a8
	if (ctx.cr6.eq) goto loc_821B22A8;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// lwz r10,25388(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25388);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// lwz r11,25380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25380);
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// lwz r9,25392(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25392);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// lwz r8,25396(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25396);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r7,25400(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 25400);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r6,25404(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 25404);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r5,25408(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25408);
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r4,25412(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25412);
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lwz r3,25416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25416);
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// lwz r31,25420(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25420);
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// lwz r30,25424(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25424);
	// lis r24,-32178
	ctx.r24.s64 = -2108817408;
	// lwz r29,25428(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25428);
	// lis r23,-32178
	ctx.r23.s64 = -2108817408;
	// lwz r28,25432(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25432);
	// lis r22,-32178
	ctx.r22.s64 = -2108817408;
	// lwz r27,25444(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25444);
	// lis r21,-32178
	ctx.r21.s64 = -2108817408;
	// lwz r26,25448(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25448);
	// lis r20,-32178
	ctx.r20.s64 = -2108817408;
	// lwz r25,25452(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25452);
	// lis r19,-32178
	ctx.r19.s64 = -2108817408;
	// lwz r24,25456(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25456);
	// lis r18,-32178
	ctx.r18.s64 = -2108817408;
	// lwz r23,25460(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + 25460);
	// lis r17,-32178
	ctx.r17.s64 = -2108817408;
	// lwz r22,25464(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25464);
	// lis r16,-32178
	ctx.r16.s64 = -2108817408;
	// lwz r21,25468(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 25468);
	// lis r15,-32178
	ctx.r15.s64 = -2108817408;
	// lwz r20,25472(r20)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25472);
	// lwz r19,25476(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 25476);
	// lis r14,-32178
	ctx.r14.s64 = -2108817408;
	// lwz r18,25480(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + 25480);
	// lwz r17,25484(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25484);
	// lwz r16,25512(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 25512);
	// lwz r15,25516(r15)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r15.u32 + 25516);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// stw r20,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r20.u32);
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// stw r18,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r18.u32);
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r16,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r16.u32);
	// stw r15,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r15.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r11,25524(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 25524);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lwz r10,25528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25528);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// lwz r9,25488(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25488);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r8,25492(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25492);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r7,25496(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 25496);
	// lwz r6,25500(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 25500);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,25504(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25504);
	// lwz r4,25508(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25508);
	// lwz r31,25436(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25436);
	// lwz r30,25520(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25520);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// stw r4,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r4.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x821B22A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B22A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B22B4"))) PPC_WEAK_FUNC(sub_821B22B4);
PPC_FUNC_IMPL(__imp__sub_821B22B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B22B8"))) PPC_WEAK_FUNC(sub_821B22B8);
PPC_FUNC_IMPL(__imp__sub_821B22B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821B22C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,27648
	ctx.r10.s64 = ctx.r11.s64 + 27648;
	// lwz r11,400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b22fc
	if (ctx.cr6.eq) goto loc_821B22FC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x821b22f4
	if (!ctx.cr6.gt) goto loc_821B22F4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821b22fc
	if (!ctx.cr6.eq) goto loc_821B22FC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821b2300
	goto loc_821B2300;
loc_821B22F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821b2300
	goto loc_821B2300;
loc_821B22FC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821B2300:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r10,22200
	ctx.r30.s64 = ctx.r10.s64 + 22200;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r11,1500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1500, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stb r28,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r28.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x822b13e8
	ctx.lr = 0x821B2330;
	sub_822B13E8(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r11,1497(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1497, ctx.r11.u8);
	// bl 0x82310638
	ctx.lr = 0x821B2340;
	sub_82310638(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r31,r11,26180
	ctx.r31.s64 = ctx.r11.s64 + 26180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388424
	ctx.lr = 0x821B2350;
	__imp__XamLoaderGetLaunchDataSize(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1020
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1020, ctx.xer);
	// ble cr6,0x821b236c
	if (!ctx.cr6.gt) goto loc_821B236C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-26576
	ctx.r3.s64 = ctx.r11.s64 + -26576;
	// bl 0x821b2720
	ctx.lr = 0x821B2368;
	sub_821B2720(ctx, base);
	// b 0x821b23d0
	goto loc_821B23D0;
loc_821B236C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b23d0
	if (!ctx.cr6.eq) goto loc_821B23D0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821B2388;
	sub_82082030(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82388434
	ctx.lr = 0x821B2394;
	__imp__XamLoaderGetLaunchData(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b23a8
	if (ctx.cr6.eq) goto loc_821B23A8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x821b23d0
	goto loc_821B23D0;
loc_821B23A8:
	// lis r11,17220
	ctx.r11.s64 = 1128529920;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r9,r11,22577
	ctx.r9.u64 = ctx.r11.u64 | 22577;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821b23c8
	if (!ctx.cr6.eq) goto loc_821B23C8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r29,26188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26188, ctx.r29.u32);
	// b 0x821b23d0
	goto loc_821B23D0;
loc_821B23C8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r29,26184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26184, ctx.r29.u32);
loc_821B23D0:
	// bl 0x821b1f88
	ctx.lr = 0x821B23D4;
	sub_821B1F88(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-26560
	ctx.r4.s64 = ctx.r11.s64 + -26560;
	// li r5,25
	ctx.r5.s64 = 25;
	// bl 0x8233e4e0
	ctx.lr = 0x821B23E8;
	sub_8233E4E0(ctx, base);
	// li r5,231
	ctx.r5.s64 = 231;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,121
	ctx.r3.s64 = ctx.r1.s64 + 121;
	// bl 0x8233eaf0
	ctx.lr = 0x821B23F8;
	sub_8233EAF0(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82226b10
	ctx.lr = 0x821B2400;
	sub_82226B10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b2420
	if (ctx.cr6.eq) goto loc_821B2420;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-26524
	ctx.r4.s64 = ctx.r11.s64 + -26524;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233cc00
	ctx.lr = 0x821B2420;
	sub_8233CC00(ctx, base);
loc_821B2420:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b2098
	ctx.lr = 0x821B2428;
	sub_821B2098(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b2450
	if (!ctx.cr6.eq) goto loc_821B2450;
	// bl 0x822471d0
	ctx.lr = 0x821B2438;
	sub_822471D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b2720
	ctx.lr = 0x821B2440;
	sub_821B2720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,968(r30)
	PPC_STORE_U8(ctx.r30.u32 + 968, ctx.r11.u8);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821B2450:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82082030
	ctx.lr = 0x821B2464;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b2474
	if (ctx.cr6.eq) goto loc_821B2474;
	// bl 0x8230a878
	ctx.lr = 0x821B2470;
	sub_8230A878(ctx, base);
	// b 0x821b2478
	goto loc_821B2478;
loc_821B2474:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821B2478:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r31,r11,-25864
	ctx.r31.s64 = ctx.r11.s64 + -25864;
	// stw r3,-25864(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25864, ctx.r3.u32);
	// bl 0x8230a5c8
	ctx.lr = 0x821B2488;
	sub_8230A5C8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,2128
	ctx.r8.u64 = ctx.r10.u64 | 2128;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82247090
	ctx.lr = 0x821B24A4;
	sub_82247090(ctx, base);
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r29,r7,-7224
	ctx.r29.s64 = ctx.r7.s64 + -7224;
	// lwz r3,16528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16528);
	// bl 0x82247090
	ctx.lr = 0x821B24B8;
	sub_82247090(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,16712(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16712);
	// bl 0x82247090
	ctx.lr = 0x821B24C4;
	sub_82247090(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8230a6d0
	ctx.lr = 0x821B24CC;
	sub_8230A6D0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82247090
	ctx.lr = 0x821B24D4;
	sub_82247090(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82248670
	ctx.lr = 0x821B24DC;
	sub_82248670(ctx, base);
	// stw r3,1048(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1048, ctx.r3.u32);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B24E8"))) PPC_WEAK_FUNC(sub_821B24E8);
PPC_FUNC_IMPL(__imp__sub_821B24E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821B24F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r25,r11,22200
	ctx.r25.s64 = ctx.r11.s64 + 22200;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1048(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1048);
	// bl 0x82388444
	ctx.lr = 0x821B251C;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b2624
	if (ctx.cr6.eq) goto loc_821B2624;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r27,r11,-16888
	ctx.r27.s64 = ctx.r11.s64 + -16888;
loc_821B252C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x821b2608
	if (ctx.cr6.gt) goto loc_821B2608;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b25c8
	if (ctx.cr6.eq) goto loc_821B25C8;
	// bdz 0x821b25bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821B25BC;
	// bdz 0x821b2600
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821B2600;
	// bdz 0x821b2608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821B2608;
	// bdz 0x821b2608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821B2608;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r27,276
	ctx.r30.s64 = ctx.r27.s64 + 276;
loc_821B2568:
	// and r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 & ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b25a4
	if (ctx.cr6.eq) goto loc_821B25A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82082030
	ctx.lr = 0x821B2588;
	sub_82082030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,69
	ctx.r3.s64 = 69;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x821cc178
	ctx.lr = 0x821B25A0;
	sub_821CC178(ctx, base);
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
loc_821B25A4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x821b2568
	if (ctx.cr6.lt) goto loc_821B2568;
	// b 0x821b2608
	goto loc_821B2608;
loc_821B25BC:
	// lfs f0,1052(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 1052);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,752(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 752, temp.u32);
	// b 0x821b2608
	goto loc_821B2608;
loc_821B25C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b25e0
	if (ctx.cr6.eq) goto loc_821B25E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821b2cb0
	ctx.lr = 0x821B25DC;
	sub_821B2CB0(ctx, base);
	// b 0x821b2608
	goto loc_821B2608;
loc_821B25E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821b2cb0
	ctx.lr = 0x821B25E8;
	sub_821B2CB0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821b2608
	if (!ctx.cr6.eq) goto loc_821B2608;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// b 0x821b2608
	goto loc_821B2608;
loc_821B2600:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1496(r25)
	PPC_STORE_U8(ctx.r25.u32 + 1496, ctx.r11.u8);
loc_821B2608:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,1048(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1048);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82388444
	ctx.lr = 0x821B261C;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b252c
	if (!ctx.cr6.eq) goto loc_821B252C;
loc_821B2624:
	// lbz r11,1496(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b26c8
	if (ctx.cr6.eq) goto loc_821B26C8;
	// bl 0x82223018
	ctx.lr = 0x821B2634;
	sub_82223018(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-15440
	ctx.r31.s64 = ctx.r11.s64 + -15440;
	// lwz r3,616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b26b0
	if (ctx.cr6.eq) goto loc_821B26B0;
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b2670
	if (ctx.cr6.eq) goto loc_821B2670;
	// lbz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b2668
	if (!ctx.cr6.eq) goto loc_821B2668;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
loc_821B2668:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x821b26b4
	goto loc_821B26B4;
loc_821B2670:
	// addi r4,r31,568
	ctx.r4.s64 = ctx.r31.s64 + 568;
	// bl 0x8224a2d0
	ctx.lr = 0x821B2678;
	sub_8224A2D0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r26,668(r31)
	PPC_STORE_U8(ctx.r31.u32 + 668, ctx.r26.u8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stw r10,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821b26b0
	if (ctx.cr6.eq) goto loc_821B26B0;
	// stw r26,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// li r3,29
	ctx.r3.s64 = 29;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x821bd5e8
	ctx.lr = 0x821B26B0;
	sub_821BD5E8(ctx, base);
loc_821B26B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821B26B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b26c8
	if (ctx.cr6.eq) goto loc_821B26C8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stb r26,1496(r25)
	PPC_STORE_U8(ctx.r25.u32 + 1496, ctx.r26.u8);
loc_821B26C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B26D0"))) PPC_WEAK_FUNC(sub_821B26D0);
PPC_FUNC_IMPL(__imp__sub_821B26D0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_821B26E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82247678
	ctx.lr = 0x821B26EC;
	sub_82247678(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821b2708
	if (ctx.cr6.eq) goto loc_821B2708;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x821b2708
	if (ctx.cr6.eq) goto loc_821B2708;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x821b26e4
	if (ctx.cr6.lt) goto loc_821B26E4;
loc_821B2708:
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 & ctx.r31.u64;
	// bl 0x82247938
	ctx.lr = 0x821B271C;
	sub_82247938(ctx, base);
}

__attribute__((alias("__imp__sub_821B271C"))) PPC_WEAK_FUNC(sub_821B271C);
PPC_FUNC_IMPL(__imp__sub_821B271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B2720"))) PPC_WEAK_FUNC(sub_821B2720);
PPC_FUNC_IMPL(__imp__sub_821B2720) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b2744
	if (!ctx.cr6.eq) goto loc_821B2744;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821b2760
	goto loc_821B2760;
loc_821B2744:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-22884
	ctx.r4.s64 = ctx.r11.s64 + -22884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233dc60
	ctx.lr = 0x821B2758;
	sub_8233DC60(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_821B2760:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2788
	if (ctx.cr6.eq) goto loc_821B2788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82222fa8
	ctx.lr = 0x821B2774;
	sub_82222FA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b2788
	if (ctx.cr6.eq) goto loc_821B2788;
	// lbz r11,2449(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2449);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b27b0
	if (!ctx.cr6.eq) goto loc_821B27B0;
loc_821B2788:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,22200
	ctx.r6.s64 = ctx.r11.s64 + 22200;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9936
	ctx.r5.s64 = ctx.r10.s64 + 9936;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8233bdb8
	ctx.lr = 0x821B27B0;
	sub_8233BDB8(ctx, base);
loc_821B27B0:
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

__attribute__((alias("__imp__sub_821B27C4"))) PPC_WEAK_FUNC(sub_821B27C4);
PPC_FUNC_IMPL(__imp__sub_821B27C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B27C8"))) PPC_WEAK_FUNC(sub_821B27C8);
PPC_FUNC_IMPL(__imp__sub_821B27C8) {
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
	// bl 0x822482f0
	ctx.lr = 0x821B27D8;
	sub_822482F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bgt cr6,0x821b2b74
	if (ctx.cr6.gt) goto loc_821B2B74;
	// lis r12,-32229
	ctx.r12.s64 = -2112159744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10236
	ctx.r12.s64 = ctx.r12.s64 + 10236;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821B2890;
	case 1:
		goto loc_821B28A4;
	case 2:
		goto loc_821B28B8;
	case 3:
		goto loc_821B28CC;
	case 4:
		goto loc_821B28E0;
	case 5:
		goto loc_821B28F4;
	case 6:
		goto loc_821B2908;
	case 7:
		goto loc_821B291C;
	case 8:
		goto loc_821B2930;
	case 9:
		goto loc_821B2944;
	case 10:
		goto loc_821B2958;
	case 11:
		goto loc_821B296C;
	case 12:
		goto loc_821B2980;
	case 13:
		goto loc_821B2994;
	case 14:
		goto loc_821B29A8;
	case 15:
		goto loc_821B29BC;
	case 16:
		goto loc_821B29D0;
	case 17:
		goto loc_821B29E4;
	case 18:
		goto loc_821B29F8;
	case 19:
		goto loc_821B2A0C;
	case 20:
		goto loc_821B2A20;
	case 21:
		goto loc_821B2A34;
	case 22:
		goto loc_821B2A48;
	case 23:
		goto loc_821B2A5C;
	case 24:
		goto loc_821B2A70;
	case 25:
		goto loc_821B2A84;
	case 26:
		goto loc_821B2A98;
	case 27:
		goto loc_821B2AAC;
	case 28:
		goto loc_821B2AC0;
	case 29:
		goto loc_821B2AD4;
	case 30:
		goto loc_821B2AE8;
	case 31:
		goto loc_821B2AFC;
	case 32:
		goto loc_821B2B10;
	case 33:
		goto loc_821B2B24;
	case 34:
		goto loc_821B2B38;
	case 35:
		goto loc_821B2B4C;
	case 36:
		goto loc_821B2B60;
	default:
		__builtin_unreachable();
	}
	// lwz r16,10384(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10384);
	// lwz r16,10404(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10404);
	// lwz r16,10424(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10424);
	// lwz r16,10444(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10444);
	// lwz r16,10464(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10464);
	// lwz r16,10484(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10484);
	// lwz r16,10504(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10504);
	// lwz r16,10524(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10524);
	// lwz r16,10544(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10544);
	// lwz r16,10564(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10564);
	// lwz r16,10584(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10584);
	// lwz r16,10604(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10604);
	// lwz r16,10624(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10624);
	// lwz r16,10644(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10644);
	// lwz r16,10664(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10664);
	// lwz r16,10684(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10684);
	// lwz r16,10704(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10704);
	// lwz r16,10724(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10724);
	// lwz r16,10744(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10744);
	// lwz r16,10764(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10764);
	// lwz r16,10784(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10784);
	// lwz r16,10804(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10804);
	// lwz r16,10824(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10824);
	// lwz r16,10844(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10844);
	// lwz r16,10864(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10864);
	// lwz r16,10884(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10884);
	// lwz r16,10904(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10904);
	// lwz r16,10924(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10924);
	// lwz r16,10944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10944);
	// lwz r16,10964(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10964);
	// lwz r16,10984(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10984);
	// lwz r16,11004(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11004);
	// lwz r16,11024(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11024);
	// lwz r16,11044(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11044);
	// lwz r16,11064(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11064);
	// lwz r16,11084(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11084);
	// lwz r16,11104(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11104);
loc_821B2890:
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
loc_821B28A4:
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
loc_821B28B8:
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
loc_821B28CC:
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
loc_821B28E0:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B28F4:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2908:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B291C:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2930:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2944:
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2958:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B296C:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2980:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2994:
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B29A8:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B29BC:
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B29D0:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B29E4:
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B29F8:
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2A0C:
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2A20:
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2A34:
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2A48:
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2A5C:
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2A70:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2A84:
	// li r3,26
	ctx.r3.s64 = 26;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2A98:
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2AAC:
	// li r3,28
	ctx.r3.s64 = 28;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2AC0:
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2AD4:
	// li r3,30
	ctx.r3.s64 = 30;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2AE8:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2AFC:
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2B10:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2B24:
	// li r3,34
	ctx.r3.s64 = 34;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2B38:
	// li r3,35
	ctx.r3.s64 = 35;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2B4C:
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2B60:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2B74:
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

__attribute__((alias("__imp__sub_821B2B88"))) PPC_WEAK_FUNC(sub_821B2B88);
PPC_FUNC_IMPL(__imp__sub_821B2B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821B2B90;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r27,r10,22200
	ctx.r27.s64 = ctx.r10.s64 + 22200;
	// stw r11,1504(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1504, ctx.r11.u32);
	// bl 0x821b5da8
	ctx.lr = 0x821B2BB0;
	sub_821B5DA8(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// stw r11,1504(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1504, ctx.r11.u32);
	// bl 0x82189608
	ctx.lr = 0x821B2BBC;
	sub_82189608(ctx, base);
	// bl 0x82226bf8
	ctx.lr = 0x821B2BC0;
	sub_82226BF8(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-18000
	ctx.r31.s64 = ctx.r11.s64 + -18000;
	// ori r9,r10,45352
	ctx.r9.u64 = ctx.r10.u64 | 45352;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2c04
	if (ctx.cr6.eq) goto loc_821B2C04;
	// addi r29,r31,28964
	ctx.r29.s64 = ctx.r31.s64 + 28964;
loc_821B2BE4:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x820e2328
	ctx.lr = 0x821B2BEC;
	sub_820E2328(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r10,r11,45352
	ctx.r10.u64 = ctx.r11.u64 | 45352;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b2be4
	if (ctx.cr6.lt) goto loc_821B2BE4;
loc_821B2C04:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r10,r11,61740
	ctx.r10.u64 = ctx.r11.u64 | 61740;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2c64
	if (ctx.cr6.eq) goto loc_821B2C64;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r28,r11,-20184
	ctx.r28.s64 = ctx.r11.s64 + -20184;
loc_821B2C24:
	// lwzu r30,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e21b0
	ctx.lr = 0x821B2C30;
	sub_820E21B0(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// ori r10,r11,61740
	ctx.r10.u64 = ctx.r11.u64 | 61740;
	// rlwimi r9,r8,0,25,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFF8000007F) | (ctx.r9.u64 & 0x7FFFFF80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwimi r9,r8,0,12,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFF000FF);
	// rlwimi r9,r8,0,7,10
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x1E00000) | (ctx.r9.u64 & 0xFFFFFFFFFE1FFFFF);
	// rlwimi r9,r8,0,2,5
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3C000000) | (ctx.r9.u64 & 0xFFFFFFFFC3FFFFFF);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b2c24
	if (ctx.cr6.lt) goto loc_821B2C24;
loc_821B2C64:
	// bl 0x82226bf8
	ctx.lr = 0x821B2C68;
	sub_82226BF8(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1504(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1504, ctx.r11.u32);
	// bl 0x820dd5c0
	ctx.lr = 0x821B2C78;
	sub_820DD5C0(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,1504(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1504, ctx.r11.u32);
	// bl 0x821d9e10
	ctx.lr = 0x821B2C88;
	sub_821D9E10(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820f5a98
	ctx.lr = 0x821B2C90;
	sub_820F5A98(ctx, base);
	// bl 0x82226bf8
	ctx.lr = 0x821B2C94;
	sub_82226BF8(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,1504(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1504, ctx.r11.u32);
	// bl 0x820dd5c0
	ctx.lr = 0x821B2CA4;
	sub_820DD5C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B2CB0"))) PPC_WEAK_FUNC(sub_821B2CB0);
PPC_FUNC_IMPL(__imp__sub_821B2CB0) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r9,r11,31216
	ctx.r9.s64 = ctx.r11.s64 + 31216;
	// addi r8,r10,22200
	ctx.r8.s64 = ctx.r10.s64 + 22200;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// lwz r3,76(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// stb r31,970(r8)
	PPC_STORE_U8(ctx.r8.u32 + 970, ctx.r31.u8);
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x821b2d00
	if (!ctx.cr6.eq) goto loc_821B2D00;
	// bl 0x820ddca8
	ctx.lr = 0x821B2CF0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b2d18
	if (ctx.cr6.eq) goto loc_821B2D18;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x821b2d38
	goto loc_821B2D38;
loc_821B2D00:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821b2d5c
	if (ctx.cr6.eq) goto loc_821B2D5C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821b2d20
	if (!ctx.cr6.eq) goto loc_821B2D20;
loc_821B2D18:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821b2d38
	goto loc_821B2D38;
loc_821B2D20:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x821B2D34;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821B2D38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2d5c
	if (ctx.cr6.eq) goto loc_821B2D5C;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b2d5c
	if (ctx.cr6.eq) goto loc_821B2D5C;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,78
	ctx.r4.s64 = 78;
	// bl 0x820daf68
	ctx.lr = 0x821B2D5C;
	sub_820DAF68(ctx, base);
loc_821B2D5C:
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

__attribute__((alias("__imp__sub_821B2D70"))) PPC_WEAK_FUNC(sub_821B2D70);
PPC_FUNC_IMPL(__imp__sub_821B2D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B2D78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r30,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r30.u8);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r30.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r30,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stb r30,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r30.u8);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// std r30,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r30.u64);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r29,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x821B2DE0;
	sub_8233EAF0(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// addi r11,r31,400
	ctx.r11.s64 = ctx.r31.s64 + 400;
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B2E00:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821b2e00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B2E00;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B2E18:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821b2e18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B2E18;
	// li r5,60
	ctx.r5.s64 = 60;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r30.u8);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stb r30,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r30.u8);
	// stb r30,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r30.u8);
	// bl 0x8233eaf0
	ctx.lr = 0x821B2E40;
	sub_8233EAF0(ctx, base);
	// std r30,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r30.u64);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// std r30,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r30.u64);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// std r30,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r30.u64);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r29,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B2E6C"))) PPC_WEAK_FUNC(sub_821B2E6C);
PPC_FUNC_IMPL(__imp__sub_821B2E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B2E70"))) PPC_WEAK_FUNC(sub_821B2E70);
PPC_FUNC_IMPL(__imp__sub_821B2E70) {
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
	// bl 0x82247678
	ctx.lr = 0x821B2E88;
	sub_82247678(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x821b2ecc
	if (ctx.cr6.lt) goto loc_821B2ECC;
	// beq cr6,0x821b2eb4
	if (ctx.cr6.eq) goto loc_821B2EB4;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x821b2ee4
	if (!ctx.cr6.lt) goto loc_821B2EE4;
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
loc_821B2EB4:
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
loc_821B2ECC:
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
loc_821B2EE4:
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

__attribute__((alias("__imp__sub_821B2EFC"))) PPC_WEAK_FUNC(sub_821B2EFC);
PPC_FUNC_IMPL(__imp__sub_821B2EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B2F00"))) PPC_WEAK_FUNC(sub_821B2F00);
PPC_FUNC_IMPL(__imp__sub_821B2F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B2F08;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x82247330
	ctx.lr = 0x821B2F30;
	sub_82247330(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r30,-32197
	ctx.r30.s64 = -2110062592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388744
	ctx.lr = 0x821B2F44;
	__imp__KeTlsSetValue(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,25072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2f8c
	if (ctx.cr6.eq) goto loc_821B2F8C;
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821B2F5C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b2f68
	if (!ctx.cr6.eq) goto loc_821B2F68;
	// bl 0x821b3000
	ctx.lr = 0x821B2F68;
	sub_821B3000(ctx, base);
loc_821B2F68:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x821b2f8c
	if (!ctx.cr6.lt) goto loc_821B2F8C;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r31.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_821B2F8C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B2F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-27096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82388734
	ctx.lr = 0x821B2FAC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b2fb8
	if (!ctx.cr6.eq) goto loc_821B2FB8;
	// bl 0x821b3000
	ctx.lr = 0x821B2FB8;
	sub_821B3000(ctx, base);
loc_821B2FB8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2fcc
	if (ctx.cr6.eq) goto loc_821B2FCC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821B2FCC:
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b2ff0
	if (!ctx.cr6.eq) goto loc_821B2FF0;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2ff0
	if (ctx.cr6.eq) goto loc_821B2FF0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B2FF0;
	sub_82080000(ctx, base);
loc_821B2FF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B2FFC"))) PPC_WEAK_FUNC(sub_821B2FFC);
PPC_FUNC_IMPL(__imp__sub_821B2FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B3000"))) PPC_WEAK_FUNC(sub_821B3000);
PPC_FUNC_IMPL(__imp__sub_821B3000) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r30,r11,8012
	ctx.r30.s64 = ctx.r11.s64 + 8012;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x821B3028;
	sub_823052D8(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26512
	ctx.r4.s64 = ctx.r11.s64 + -26512;
	// lwz r5,26204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26204);
	// bl 0x8233cc00
	ctx.lr = 0x821B3040;
	sub_8233CC00(ctx, base);
	// lwz r11,26204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26204);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// mulli r9,r11,172
	ctx.r9.s64 = ctx.r11.s64 * 172;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8032
	ctx.r10.s64 = ctx.r10.s64 + 8032;
	// stw r11,26204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26204, ctx.r11.u32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x82247330
	ctx.lr = 0x821B3060;
	sub_82247330(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-27096(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27096);
	// bl 0x82388744
	ctx.lr = 0x821B3074;
	__imp__KeTlsSetValue(ctx, base);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lwz r11,25072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b30b0
	if (ctx.cr6.eq) goto loc_821B30B0;
	// bl 0x82081bc8
	ctx.lr = 0x821B3088;
	sub_82081BC8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x821b30b0
	if (!ctx.cr6.lt) goto loc_821B30B0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_821B30B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x821B30B8;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_821B30D4"))) PPC_WEAK_FUNC(sub_821B30D4);
PPC_FUNC_IMPL(__imp__sub_821B30D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B30D8"))) PPC_WEAK_FUNC(sub_821B30D8);
PPC_FUNC_IMPL(__imp__sub_821B30D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821B30E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82082030
	ctx.lr = 0x821B30F8;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq cr6,0x821b3158
	if (ctx.cr6.eq) goto loc_821B3158;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// addi r9,r9,-26476
	ctx.r9.s64 = ctx.r9.s64 + -26476;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_821B3124:
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r6,r7,21424
	ctx.r6.s64 = ctx.r7.s64 + 21424;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stb r29,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r29.u8);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stwu r10,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821b3124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B3124;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x821b315c
	goto loc_821B315C;
loc_821B3158:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_821B315C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r31,r11,-17344
	ctx.r31.s64 = ctx.r11.s64 + -17344;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821b325c
	if (!ctx.cr6.lt) goto loc_821B325C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r28,-32197
	ctx.r28.s64 = -2110062592;
	// lis r27,4
	ctx.r27.s64 = 262144;
	// lis r25,-32197
	ctx.r25.s64 = -2110062592;
	// addi r26,r10,-26492
	ctx.r26.s64 = ctx.r10.s64 + -26492;
loc_821B318C:
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// bge cr6,0x821b325c
	if (!ctx.cr6.lt) goto loc_821B325C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b3250
	if (ctx.cr6.eq) goto loc_821B3250;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// beq cr6,0x821b3250
	if (ctx.cr6.eq) goto loc_821B3250;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// beq cr6,0x821b3250
	if (ctx.cr6.eq) goto loc_821B3250;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// rlwinm r5,r30,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233cc00
	ctx.lr = 0x821B31C0;
	sub_8233CC00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r3,-27096(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -27096);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bl 0x82388734
	ctx.lr = 0x821B31DC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b31e8
	if (!ctx.cr6.eq) goto loc_821B31E8;
	// bl 0x821b3000
	ctx.lr = 0x821B31E8;
	sub_821B3000(ctx, base);
loc_821B31E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,-27100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27100);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r8,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r8.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r29.u8);
	// bl 0x82081680
	ctx.lr = 0x821B3228;
	sub_82081680(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,16(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// bl 0x82247090
	ctx.lr = 0x821B3244;
	sub_82247090(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_821B3250:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821b318c
	if (ctx.cr6.lt) goto loc_821B318C;
loc_821B325C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B3264"))) PPC_WEAK_FUNC(sub_821B3264);
PPC_FUNC_IMPL(__imp__sub_821B3264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B3268"))) PPC_WEAK_FUNC(sub_821B3268);
PPC_FUNC_IMPL(__imp__sub_821B3268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821B3270;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b32fc
	if (ctx.cr6.eq) goto loc_821B32FC;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r26,r3,-4
	ctx.r26.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt 0x821b32d0
	if (ctx.cr0.lt) goto loc_821B32D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r29,r11,4352
	ctx.r29.s64 = ctx.r11.s64 + 4352;
	// addi r28,r10,4344
	ctx.r28.s64 = ctx.r10.s64 + 4344;
loc_821B32B4:
	// stwu r28,-32(r31)
	ea = -32 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r27.u8);
	// bl 0x82305448
	ctx.lr = 0x821B32C4;
	sub_82305448(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bge 0x821b32b4
	if (!ctx.cr0.lt) goto loc_821B32B4;
loc_821B32D0:
	// clrlwi r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b32f0
	if (ctx.cr6.eq) goto loc_821B32F0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821b32f0
	if (ctx.cr6.eq) goto loc_821B32F0;
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// lwz r3,-8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B32F0;
	sub_82080000(ctx, base);
loc_821B32F0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821B32FC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4344
	ctx.r9.s64 = ctx.r11.s64 + 4344;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82305448
	ctx.lr = 0x821B3318;
	sub_82305448(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// clrlwi r7,r25,31
	ctx.r7.u64 = ctx.r25.u32 & 0x1;
	// addi r6,r8,4352
	ctx.r6.s64 = ctx.r8.s64 + 4352;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// beq cr6,0x821b333c
	if (ctx.cr6.eq) goto loc_821B333C;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B333C;
	sub_82080000(ctx, base);
loc_821B333C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B3348"))) PPC_WEAK_FUNC(sub_821B3348);
PPC_FUNC_IMPL(__imp__sub_821B3348) {
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
	ctx.lr = 0x821B3360;
	sub_82081C00(ctx, base);
	// bl 0x821b3868
	ctx.lr = 0x821B3364;
	sub_821B3868(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821B3374;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b3388
	if (!ctx.cr6.eq) goto loc_821B3388;
	// bl 0x821b3000
	ctx.lr = 0x821B3384;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821B3388:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b33a0
	if (ctx.cr6.eq) goto loc_821B33A0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_821B33A0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821B33B4"))) PPC_WEAK_FUNC(sub_821B33B4);
PPC_FUNC_IMPL(__imp__sub_821B33B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B33B8"))) PPC_WEAK_FUNC(sub_821B33B8);
PPC_FUNC_IMPL(__imp__sub_821B33B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x820e15f0
	sub_820E15F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B33C4"))) PPC_WEAK_FUNC(sub_821B33C4);
PPC_FUNC_IMPL(__imp__sub_821B33C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B33C8"))) PPC_WEAK_FUNC(sub_821B33C8);
PPC_FUNC_IMPL(__imp__sub_821B33C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x820e95d8
	sub_820E95D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B33D4"))) PPC_WEAK_FUNC(sub_821B33D4);
PPC_FUNC_IMPL(__imp__sub_821B33D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B33D8"))) PPC_WEAK_FUNC(sub_821B33D8);
PPC_FUNC_IMPL(__imp__sub_821B33D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x820daa80
	sub_820DAA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B33E4"))) PPC_WEAK_FUNC(sub_821B33E4);
PPC_FUNC_IMPL(__imp__sub_821B33E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B33E8"))) PPC_WEAK_FUNC(sub_821B33E8);
PPC_FUNC_IMPL(__imp__sub_821B33E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821B33F0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8233fa38
	ctx.lr = 0x821B33F8;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f29,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// std r31,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r31.u64);
	// addi r8,r10,22200
	ctx.r8.s64 = ctx.r10.s64 + 22200;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lfs f30,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// lfs f28,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82247340
	ctx.lr = 0x821B3448;
	sub_82247340(ctx, base);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r5,264(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// ori r4,r7,1
	ctx.r4.u64 = ctx.r7.u64 | 1;
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// ble cr6,0x821b3508
	if (!ctx.cr6.gt) goto loc_821B3508;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// addi r26,r11,-29208
	ctx.r26.s64 = ctx.r11.s64 + -29208;
loc_821B347C:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r11,178(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 178);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x821b34bc
	if (ctx.cr6.eq) goto loc_821B34BC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x821b34b8
	if (!ctx.cr6.lt) goto loc_821B34B8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,8
	ctx.r10.s64 = ctx.r26.s64 + 8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b34b8
	if (ctx.cr6.eq) goto loc_821B34B8;
	// lfs f31,472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f31.f64 = double(temp.f32);
	// b 0x821b34bc
	goto loc_821B34BC;
loc_821B34B8:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_821B34BC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x820da6f8
	ctx.lr = 0x821B34D4;
	sub_820DA6F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b34f4
	if (ctx.cr6.eq) goto loc_821B34F4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821afdc0
	ctx.lr = 0x821B34E8;
	sub_821AFDC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820daa80
	ctx.lr = 0x821B34F4;
	sub_820DAA80(ctx, base);
loc_821B34F4:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b347c
	if (ctx.cr6.lt) goto loc_821B347C;
loc_821B3508:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8233fa84
	ctx.lr = 0x821B3514;
	__restfpr_28(ctx, base);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B3518"))) PPC_WEAK_FUNC(sub_821B3518);
PPC_FUNC_IMPL(__imp__sub_821B3518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82140558
	sub_82140558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B3524"))) PPC_WEAK_FUNC(sub_821B3524);
PPC_FUNC_IMPL(__imp__sub_821B3524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B3528"))) PPC_WEAK_FUNC(sub_821B3528);
PPC_FUNC_IMPL(__imp__sub_821B3528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82140390
	sub_82140390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B3534"))) PPC_WEAK_FUNC(sub_821B3534);
PPC_FUNC_IMPL(__imp__sub_821B3534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B3538"))) PPC_WEAK_FUNC(sub_821B3538);
PPC_FUNC_IMPL(__imp__sub_821B3538) {
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
	// beq cr6,0x821b3634
	if (ctx.cr6.eq) goto loc_821B3634;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,8720
	ctx.r31.s64 = ctx.r11.s64 + 8720;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821B356C;
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
	// bne cr6,0x821b3628
	if (!ctx.cr6.eq) goto loc_821B3628;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b3628
	if (ctx.cr6.eq) goto loc_821B3628;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821b3628
	if (!ctx.cr6.lt) goto loc_821B3628;
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
	// beq cr6,0x821b3600
	if (ctx.cr6.eq) goto loc_821B3600;
loc_821B35D8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b35f8
	if (ctx.cr6.eq) goto loc_821B35F8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821b35d8
	if (!ctx.cr6.eq) goto loc_821B35D8;
	// b 0x821b3600
	goto loc_821B3600;
loc_821B35F8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_821B3600:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b3618
	if (!ctx.cr6.eq) goto loc_821B3618;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821B3618:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B3624;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_821B3628:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B3634;
	sub_823051A8(ctx, base);
loc_821B3634:
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

__attribute__((alias("__imp__sub_821B364C"))) PPC_WEAK_FUNC(sub_821B364C);
PPC_FUNC_IMPL(__imp__sub_821B364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B3650"))) PPC_WEAK_FUNC(sub_821B3650);
PPC_FUNC_IMPL(__imp__sub_821B3650) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,8720
	ctx.r31.s64 = ctx.r11.s64 + 8720;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821B3678;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b369c
	if (ctx.cr6.eq) goto loc_821B369C;
loc_821B3684:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b36cc
	if (!ctx.cr6.eq) goto loc_821B36CC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b3684
	if (!ctx.cr6.eq) goto loc_821B3684;
loc_821B369C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b36f4
	if (!ctx.cr6.eq) goto loc_821B36F4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821b3968
	ctx.lr = 0x821B36B0;
	sub_821B3968(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b36f4
	if (!ctx.cr6.eq) goto loc_821B36F4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B36C4;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b3738
	goto loc_821B3738;
loc_821B36CC:
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
	// b 0x821b3728
	goto loc_821B3728;
loc_821B36F4:
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
loc_821B3728:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B3734;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821B3738:
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

__attribute__((alias("__imp__sub_821B3750"))) PPC_WEAK_FUNC(sub_821B3750);
PPC_FUNC_IMPL(__imp__sub_821B3750) {
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
	// beq cr6,0x821b384c
	if (ctx.cr6.eq) goto loc_821B384C;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,8776
	ctx.r31.s64 = ctx.r11.s64 + 8776;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821B3784;
	sub_823052D8(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
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
	// bne cr6,0x821b3840
	if (!ctx.cr6.eq) goto loc_821B3840;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b3840
	if (ctx.cr6.eq) goto loc_821B3840;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821b3840
	if (!ctx.cr6.lt) goto loc_821B3840;
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
	// beq cr6,0x821b3818
	if (ctx.cr6.eq) goto loc_821B3818;
loc_821B37F0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b3810
	if (ctx.cr6.eq) goto loc_821B3810;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821b37f0
	if (!ctx.cr6.eq) goto loc_821B37F0;
	// b 0x821b3818
	goto loc_821B3818;
loc_821B3810:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_821B3818:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b3830
	if (!ctx.cr6.eq) goto loc_821B3830;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821B3830:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B383C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_821B3840:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B384C;
	sub_823051A8(ctx, base);
loc_821B384C:
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

__attribute__((alias("__imp__sub_821B3864"))) PPC_WEAK_FUNC(sub_821B3864);
PPC_FUNC_IMPL(__imp__sub_821B3864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B3868"))) PPC_WEAK_FUNC(sub_821B3868);
PPC_FUNC_IMPL(__imp__sub_821B3868) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,8776
	ctx.r31.s64 = ctx.r11.s64 + 8776;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821B3890;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b38b4
	if (ctx.cr6.eq) goto loc_821B38B4;
loc_821B389C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b38e4
	if (!ctx.cr6.eq) goto loc_821B38E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b389c
	if (!ctx.cr6.eq) goto loc_821B389C;
loc_821B38B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b390c
	if (!ctx.cr6.eq) goto loc_821B390C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821b3a18
	ctx.lr = 0x821B38C8;
	sub_821B3A18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b390c
	if (!ctx.cr6.eq) goto loc_821B390C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B38DC;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b3950
	goto loc_821B3950;
loc_821B38E4:
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
	// b 0x821b3940
	goto loc_821B3940;
loc_821B390C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,272
	ctx.r10.s64 = ctx.r11.s64 + 272;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
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
loc_821B3940:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B394C;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821B3950:
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

__attribute__((alias("__imp__sub_821B3968"))) PPC_WEAK_FUNC(sub_821B3968);
PPC_FUNC_IMPL(__imp__sub_821B3968) {
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
	ctx.lr = 0x821B3994;
	sub_82082030(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,8720
	ctx.r11.s64 = ctx.r11.s64 + 8720;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b39b0
	if (ctx.cr6.eq) goto loc_821B39B0;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x821b39b4
	goto loc_821B39B4;
loc_821B39B0:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_821B39B4:
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
	// beq cr6,0x821b39f4
	if (ctx.cr6.eq) goto loc_821B39F4;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B39EC:
	// stwu r3,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b39ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B39EC;
loc_821B39F4:
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

__attribute__((alias("__imp__sub_821B3A14"))) PPC_WEAK_FUNC(sub_821B3A14);
PPC_FUNC_IMPL(__imp__sub_821B3A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B3A18"))) PPC_WEAK_FUNC(sub_821B3A18);
PPC_FUNC_IMPL(__imp__sub_821B3A18) {
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
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
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
	ctx.lr = 0x821B3A4C;
	sub_82082030(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,8776
	ctx.r11.s64 = ctx.r11.s64 + 8776;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b3a68
	if (ctx.cr6.eq) goto loc_821B3A68;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x821b3a6c
	goto loc_821B3A6C;
loc_821B3A68:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_821B3A6C:
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
	// beq cr6,0x821b3aac
	if (ctx.cr6.eq) goto loc_821B3AAC;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B3AA4:
	// stwu r3,288(r10)
	ea = 288 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b3aa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B3AA4;
loc_821B3AAC:
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

__attribute__((alias("__imp__sub_821B3ACC"))) PPC_WEAK_FUNC(sub_821B3ACC);
PPC_FUNC_IMPL(__imp__sub_821B3ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B3AD0"))) PPC_WEAK_FUNC(sub_821B3AD0);
PPC_FUNC_IMPL(__imp__sub_821B3AD0) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,4536
	ctx.r3.s64 = ctx.r11.s64 + 4536;
	// bl 0x82220ae8
	ctx.lr = 0x821B3AF4;
	sub_82220AE8(ctx, base);
	// lfs f1,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x821d4dc8
	ctx.lr = 0x821B3B10;
	sub_821D4DC8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,152
	ctx.r6.s64 = ctx.r31.s64 + 152;
loc_821B3B1C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821b3b40
	if (!ctx.cr6.eq) goto loc_821B3B40;
	// stwcx. r7,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b3b1c
	if (!ctx.cr0.eq) goto loc_821B3B1C;
	// b 0x821b3b48
	goto loc_821B3B48;
loc_821B3B40:
	// stwcx. r10,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_821B3B48:
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

__attribute__((alias("__imp__sub_821B3B60"))) PPC_WEAK_FUNC(sub_821B3B60);
PPC_FUNC_IMPL(__imp__sub_821B3B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821B3B68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821b3c20
	if (!ctx.cr6.gt) goto loc_821B3C20;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
loc_821B3B84:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218378
	ctx.lr = 0x821B3B90;
	sub_82218378(ctx, base);
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r30,r31,776
	ctx.r30.s64 = ctx.r31.s64 + 776;
	// addi r29,r31,432
	ctx.r29.s64 = ctx.r31.s64 + 432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B3BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b3be8
	if (ctx.cr6.eq) goto loc_821B3BE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821cfa58
	ctx.lr = 0x821B3BC0;
	sub_821CFA58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821d3db0
	ctx.lr = 0x821B3BE8;
	sub_821D3DB0(ctx, base);
loc_821B3BE8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b3c0c
	if (ctx.cr6.eq) goto loc_821B3C0C;
	// addi r31,r29,-4
	ctx.r31.s64 = ctx.r29.s64 + -4;
	// li r4,6
	ctx.r4.s64 = 6;
loc_821B3BFC:
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x8220db40
	ctx.lr = 0x821B3C04;
	sub_8220DB40(ctx, base);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x821b3bfc
	if (!ctx.cr0.eq) goto loc_821B3BFC;
loc_821B3C0C:
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b3b84
	if (ctx.cr6.lt) goto loc_821B3B84;
loc_821B3C20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B3C28"))) PPC_WEAK_FUNC(sub_821B3C28);
PPC_FUNC_IMPL(__imp__sub_821B3C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821B3C30;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821b3e80
	if (!ctx.cr6.gt) goto loc_821B3E80;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r24,2
	ctx.r24.s64 = 2;
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
loc_821B3C74:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfs f31,504(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f31,492(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stfs f31,488(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f31,484(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b3cb4
	if (ctx.cr6.eq) goto loc_821B3CB4;
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// lfs f1,76(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B3CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B3CB4:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lfs f0,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b3ccc
	if (ctx.cr6.eq) goto loc_821B3CCC;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_821B3CCC:
	// lfs f13,916(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f1,76(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822157e0
	ctx.lr = 0x821B3CE4;
	sub_822157E0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821b3cf8
	if (!ctx.cr6.eq) goto loc_821B3CF8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x821b3d20
	goto loc_821B3D20;
loc_821B3CF8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821b3d1c
	if (ctx.cr6.eq) goto loc_821B3D1C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821b3d1c
	if (ctx.cr6.eq) goto loc_821B3D1C;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821b3d20
	if (!ctx.cr6.gt) goto loc_821B3D20;
loc_821B3D1C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821B3D20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b3db4
	if (ctx.cr6.eq) goto loc_821B3DB4;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r9,r11,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b3d68
	if (ctx.cr6.eq) goto loc_821B3D68;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821b3ddc
	if (ctx.cr6.eq) goto loc_821B3DDC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821b3ddc
	if (ctx.cr6.eq) goto loc_821B3DDC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821b3d60
	if (ctx.cr6.eq) goto loc_821B3D60;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_821B3D60:
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// b 0x821b3ddc
	goto loc_821B3DDC;
loc_821B3D68:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b3d80
	if (!ctx.cr6.eq) goto loc_821B3D80;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_821B3D80:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b3ddc
	if (ctx.cr6.eq) goto loc_821B3DDC;
	// stfs f31,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stfs f31,464(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// stfs f31,460(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stfs f31,480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f31,476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f31,472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// b 0x821b3ddc
	goto loc_821B3DDC;
loc_821B3DB4:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821b3ddc
	if (ctx.cr6.eq) goto loc_821B3DDC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821b3ddc
	if (ctx.cr6.eq) goto loc_821B3DDC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b3dd8
	if (ctx.cr6.eq) goto loc_821B3DD8;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_821B3DD8:
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
loc_821B3DDC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b3df4
	if (ctx.cr6.eq) goto loc_821B3DF4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x821b3df8
	if (!ctx.cr6.eq) goto loc_821B3DF8;
loc_821B3DF4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_821B3DF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b3e10
	if (ctx.cr6.eq) goto loc_821B3E10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82219978
	ctx.lr = 0x821B3E10;
	sub_82219978(ctx, base);
loc_821B3E10:
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r30,r31,776
	ctx.r30.s64 = ctx.r31.s64 + 776;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B3E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218308
	ctx.lr = 0x821B3E34;
	sub_82218308(ctx, base);
	// lwz r9,776(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,132(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821B3E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821b3e6c
	if (ctx.cr6.eq) goto loc_821B3E6C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B3E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B3E6C:
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b3c74
	if (ctx.cr6.lt) goto loc_821B3C74;
loc_821B3E80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B3E94"))) PPC_WEAK_FUNC(sub_821B3E94);
PPC_FUNC_IMPL(__imp__sub_821B3E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B3E98"))) PPC_WEAK_FUNC(sub_821B3E98);
PPC_FUNC_IMPL(__imp__sub_821B3E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821B3EA0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,184(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r30,180(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B3ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// beq cr6,0x821b3ee8
	if (ctx.cr6.eq) goto loc_821B3EE8;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
loc_821B3EE8:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f13,140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x821b40cc
	if (ctx.cr6.eq) goto loc_821B40CC;
	// lfs f31,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r25,2
	ctx.r25.s64 = 2;
loc_821B3F10:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f31,504(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f31,492(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stfs f31,488(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f31,484(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b3f44
	if (ctx.cr6.eq) goto loc_821B3F44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82215ec8
	ctx.lr = 0x821B3F44;
	sub_82215EC8(ctx, base);
loc_821B3F44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822157e0
	ctx.lr = 0x821B3F54;
	sub_822157E0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821b3f68
	if (!ctx.cr6.eq) goto loc_821B3F68;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x821b3f90
	goto loc_821B3F90;
loc_821B3F68:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821b3f8c
	if (ctx.cr6.eq) goto loc_821B3F8C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821b3f8c
	if (ctx.cr6.eq) goto loc_821B3F8C;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821b3f90
	if (!ctx.cr6.gt) goto loc_821B3F90;
loc_821B3F8C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821B3F90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4024
	if (ctx.cr6.eq) goto loc_821B4024;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r9,r11,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b3fd8
	if (ctx.cr6.eq) goto loc_821B3FD8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821b404c
	if (ctx.cr6.eq) goto loc_821B404C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821b404c
	if (ctx.cr6.eq) goto loc_821B404C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821b3fd0
	if (ctx.cr6.eq) goto loc_821B3FD0;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_821B3FD0:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// b 0x821b404c
	goto loc_821B404C;
loc_821B3FD8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b3ff0
	if (!ctx.cr6.eq) goto loc_821B3FF0;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_821B3FF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b404c
	if (ctx.cr6.eq) goto loc_821B404C;
	// stfs f31,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stfs f31,464(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// stfs f31,460(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stfs f31,480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f31,476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f31,472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// b 0x821b404c
	goto loc_821B404C;
loc_821B4024:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821b404c
	if (ctx.cr6.eq) goto loc_821B404C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821b404c
	if (ctx.cr6.eq) goto loc_821B404C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b4048
	if (ctx.cr6.eq) goto loc_821B4048;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_821B4048:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_821B404C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821b4064
	if (ctx.cr6.eq) goto loc_821B4064;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x821b4068
	if (!ctx.cr6.eq) goto loc_821B4068;
loc_821B4064:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821B4068:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b40a4
	if (ctx.cr6.eq) goto loc_821B40A4;
	// lfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821b408c
	if (ctx.cr6.eq) goto loc_821B408C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x821b4090
	if (!ctx.cr6.eq) goto loc_821B4090;
loc_821B408C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821B4090:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b40a4
	if (ctx.cr6.eq) goto loc_821B40A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217678
	ctx.lr = 0x821B40A4;
	sub_82217678(ctx, base);
loc_821B40A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218308
	ctx.lr = 0x821B40AC;
	sub_82218308(ctx, base);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b40c0
	if (ctx.cr6.eq) goto loc_821B40C0;
	// lfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82215e40
	ctx.lr = 0x821B40C0;
	sub_82215E40(ctx, base);
loc_821B40C0:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821b3f10
	if (!ctx.cr0.eq) goto loc_821B3F10;
loc_821B40CC:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821dc988
	ctx.lr = 0x821B40D8;
	sub_821DC988(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B40E8"))) PPC_WEAK_FUNC(sub_821B40E8);
PPC_FUNC_IMPL(__imp__sub_821B40E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x821e1b08
	sub_821E1B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B40F0"))) PPC_WEAK_FUNC(sub_821B40F0);
PPC_FUNC_IMPL(__imp__sub_821B40F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821B40F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r8,r3,336
	ctx.r8.s64 = ctx.r3.s64 + 336;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e17c8
	ctx.lr = 0x821B4120;
	sub_821E17C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// rlwinm r9,r10,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r9,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r9.u32);
	// beq cr6,0x821b42dc
	if (ctx.cr6.eq) goto loc_821B42DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r9,20031
	ctx.r9.s64 = 1312751616;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// li r7,72
	ctx.r7.s64 = 72;
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// ori r5,r9,4
	ctx.r5.u64 = ctx.r9.u64 | 4;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r6,216(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r30,224(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r29,228(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r28,232(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r27,236(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r26,240(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r25,244(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r24,248(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r23,8(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r8,156(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 156);
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b41ec
	if (ctx.cr6.eq) goto loc_821B41EC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,125
	ctx.r4.s64 = 125;
	// bl 0x820daf68
	ctx.lr = 0x821B41EC;
	sub_820DAF68(ctx, base);
loc_821B41EC:
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b42dc
	if (!ctx.cr6.eq) goto loc_821B42DC;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B4234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821e1ab0
	ctx.lr = 0x821B423C;
	sub_821E1AB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r11,r11,460
	ctx.r11.s64 = ctx.r11.s64 + 460;
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// lfs f10,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f6,f12,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f0,f5,f11,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x821b42dc
	if (!ctx.cr6.lt) goto loc_821B42DC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
loc_821B42DC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B42E4"))) PPC_WEAK_FUNC(sub_821B42E4);
PPC_FUNC_IMPL(__imp__sub_821B42E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B42E8"))) PPC_WEAK_FUNC(sub_821B42E8);
PPC_FUNC_IMPL(__imp__sub_821B42E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B42F0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B4310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r9,r4,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b4350
	if (ctx.cr6.eq) goto loc_821B4350;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b4350
	if (ctx.cr6.eq) goto loc_821B4350;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B4350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B4350:
	// rlwinm r11,r29,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4368
	if (ctx.cr6.eq) goto loc_821B4368;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821dceb8
	ctx.lr = 0x821B4368;
	sub_821DCEB8(ctx, base);
loc_821B4368:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821dd020
	ctx.lr = 0x821B4370;
	sub_821DD020(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821de450
	ctx.lr = 0x821B4378;
	sub_821DE450(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821de758
	ctx.lr = 0x821B4380;
	sub_821DE758(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,256
	ctx.r4.s64 = 16777216;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B4398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,184(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b43d0
	if (ctx.cr6.eq) goto loc_821B43D0;
loc_821B43B0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,416(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 416);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821b4564
	if (!ctx.cr6.eq) goto loc_821B4564;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821b43b0
	if (ctx.cr6.lt) goto loc_821B43B0;
loc_821B43D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B43D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b43e8
	if (ctx.cr6.eq) goto loc_821B43E8;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821dd828
	ctx.lr = 0x821B43E8;
	sub_821DD828(ctx, base);
loc_821B43E8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x821cf958
	ctx.lr = 0x821B43F8;
	sub_821CF958(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,184(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// lwz r11,180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b4424
	if (ctx.cr6.eq) goto loc_821B4424;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_821B4418:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// bdnz 0x821b4418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B4418;
loc_821B4424:
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4440
	if (ctx.cr6.eq) goto loc_821B4440;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
loc_821B4440:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// bl 0x821dcbc8
	ctx.lr = 0x821B4458;
	sub_821DCBC8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821dc748
	ctx.lr = 0x821B4464;
	sub_821DC748(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b4484
	if (ctx.cr6.eq) goto loc_821B4484;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B4484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B4484:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B4498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b44b8
	if (!ctx.cr6.eq) goto loc_821B44B8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821b44b8
	if (!ctx.cr6.eq) goto loc_821B44B8;
	// rlwinm r11,r29,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4558
	if (ctx.cr6.eq) goto loc_821B4558;
loc_821B44B8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B44D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,144(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821B44EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r7,4536
	ctx.r4.s64 = ctx.r7.s64 + 4536;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,336(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x821e2518
	ctx.lr = 0x821B451C;
	sub_821E2518(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x821e2518
	ctx.lr = 0x821B4540;
	sub_821E2518(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821B4558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B4558:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821B4564:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821b43d4
	goto loc_821B43D4;
}

__attribute__((alias("__imp__sub_821B456C"))) PPC_WEAK_FUNC(sub_821B456C);
PPC_FUNC_IMPL(__imp__sub_821B456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B4570"))) PPC_WEAK_FUNC(sub_821B4570);
PPC_FUNC_IMPL(__imp__sub_821B4570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x821B4578;
	__savegprlr_20(ctx, base);
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f29.u64);
	// stfd f30,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821b48e0
	if (!ctx.cr6.gt) goto loc_821B48E0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// addi r25,r3,8
	ctx.r25.s64 = ctx.r3.s64 + 8;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r24,r11,4536
	ctx.r24.s64 = ctx.r11.s64 + 4536;
	// lfs f31,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
loc_821B45C4:
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// lwz r27,64(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// lwz r26,304(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b4670
	if (ctx.cr6.eq) goto loc_821B4670;
	// lwz r10,900(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b4670
	if (ctx.cr6.eq) goto loc_821B4670;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b4668
	if (ctx.cr6.eq) goto loc_821B4668;
	// lwz r10,204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// lwz r9,152(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821b4670
	if (ctx.cr6.eq) goto loc_821B4670;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4628
	if (ctx.cr6.eq) goto loc_821B4628;
	// stw r23,796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 796, ctx.r23.u32);
	// stw r23,804(r30)
	PPC_STORE_U32(ctx.r30.u32 + 804, ctx.r23.u32);
	// stw r23,800(r30)
	PPC_STORE_U32(ctx.r30.u32 + 800, ctx.r23.u32);
loc_821B4628:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821b4658
	if (ctx.cr6.eq) goto loc_821B4658;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821b4658
	if (ctx.cr6.eq) goto loc_821B4658;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b4650
	if (ctx.cr6.eq) goto loc_821B4650;
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r10.u32);
loc_821B4650:
	// stfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stw r20,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r20.u32);
loc_821B4658:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,152(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// bl 0x82217258
	ctx.lr = 0x821B4664;
	sub_82217258(ctx, base);
	// b 0x821b4670
	goto loc_821B4670;
loc_821B4668:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82215b28
	ctx.lr = 0x821B4670;
	sub_82215B28(ctx, base);
loc_821B4670:
	// rlwinm r11,r26,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4694
	if (ctx.cr6.eq) goto loc_821B4694;
	// lwz r11,776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// addi r3,r30,776
	ctx.r3.s64 = ctx.r30.s64 + 776;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B4694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B4694:
	// lwz r11,776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// addi r31,r30,776
	ctx.r31.s64 = ctx.r30.s64 + 776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B46AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,304(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821b46cc
	if (ctx.cr6.eq) goto loc_821B46CC;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// b 0x821b46d8
	goto loc_821B46D8;
loc_821B46CC:
	// lwz r11,976(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 976);
	// lwz r10,980(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 980);
	// lwz r9,984(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 984);
loc_821B46D8:
	// stw r9,1016(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1016, ctx.r9.u32);
	// stfs f31,456(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 456, temp.u32);
	// stw r10,1012(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1012, ctx.r10.u32);
	// lis r4,256
	ctx.r4.s64 = 16777216;
	// stw r11,1008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1008, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	// addi r7,r30,992
	ctx.r7.s64 = ctx.r30.s64 + 992;
	// lwz r10,996(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	// lwz r9,1000(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1000);
	// lwz r8,1004(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1004);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,1020(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1020, ctx.r11.u32);
	// stw r10,1024(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1024, ctx.r10.u32);
	// stw r9,1028(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1028, ctx.r9.u32);
	// stw r8,1032(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1032, ctx.r8.u32);
	// lwz r5,64(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821B4724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,416(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b4748
	if (ctx.cr6.eq) goto loc_821B4748;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,140(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B4748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B4748:
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r11,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r11.u16);
	// bne cr6,0x821b4764
	if (!ctx.cr6.eq) goto loc_821B4764;
	// sth r11,-612(r31)
	PPC_STORE_U16(ctx.r31.u32 + -612, ctx.r11.u16);
	// b 0x821b4794
	goto loc_821B4794;
loc_821B4764:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821b4794
	if (!ctx.cr6.eq) goto loc_821B4794;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b4794
	if (ctx.cr6.eq) goto loc_821B4794;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B4784:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lhz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// sth r9,164(r10)
	PPC_STORE_U16(ctx.r10.u32 + 164, ctx.r9.u16);
	// bdnz 0x821b4784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B4784;
loc_821B4794:
	// rlwinm r11,r26,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40;
	// stw r21,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r21.u32);
	// lfs f0,144(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b47ac
	if (ctx.cr6.eq) goto loc_821B47AC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_821B47AC:
	// lfs f13,916(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,140(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// bctrl 
	ctx.lr = 0x821B47D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821B47E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821b4808
	if (ctx.cr6.eq) goto loc_821B4808;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B4808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B4808:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B481C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b483c
	if (!ctx.cr6.eq) goto loc_821B483C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821b483c
	if (!ctx.cr6.eq) goto loc_821B483C;
	// rlwinm r11,r26,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b48cc
	if (ctx.cr6.eq) goto loc_821B48CC;
loc_821B483C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B4854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,784(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b48b4
	if (ctx.cr6.eq) goto loc_821B48B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B487C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,336(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 336);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821e2518
	ctx.lr = 0x821B48A0;
	sub_821E2518(ctx, base);
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821e2518
	ctx.lr = 0x821B48B4;
	sub_821E2518(ctx, base);
loc_821B48B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B48CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B48CC:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b45c4
	if (ctx.cr6.lt) goto loc_821B45C4;
loc_821B48E0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B48F4"))) PPC_WEAK_FUNC(sub_821B48F4);
PPC_FUNC_IMPL(__imp__sub_821B48F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B48F8"))) PPC_WEAK_FUNC(sub_821B48F8);
PPC_FUNC_IMPL(__imp__sub_821B48F8) {
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
	// addi r30,r3,432
	ctx.r30.s64 = ctx.r3.s64 + 432;
	// bl 0x82218378
	ctx.lr = 0x821B491C;
	sub_82218378(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,776
	ctx.r3.s64 = ctx.r11.s64 + 776;
	// lwz r11,776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B4934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b4978
	if (ctx.cr6.eq) goto loc_821B4978;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,776
	ctx.r3.s64 = ctx.r11.s64 + 776;
	// bl 0x821cfa58
	ctx.lr = 0x821B494C;
	sub_821CFA58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r8,168
	ctx.r3.s64 = ctx.r8.s64 + 168;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821d3db0
	ctx.lr = 0x821B4978;
	sub_821D3DB0(ctx, base);
loc_821B4978:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b499c
	if (ctx.cr6.eq) goto loc_821B499C;
	// addi r31,r30,-4
	ctx.r31.s64 = ctx.r30.s64 + -4;
	// li r4,6
	ctx.r4.s64 = 6;
loc_821B498C:
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x8220db40
	ctx.lr = 0x821B4994;
	sub_8220DB40(ctx, base);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x821b498c
	if (!ctx.cr0.eq) goto loc_821B498C;
loc_821B499C:
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

__attribute__((alias("__imp__sub_821B49B4"))) PPC_WEAK_FUNC(sub_821B49B4);
PPC_FUNC_IMPL(__imp__sub_821B49B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B49B8"))) PPC_WEAK_FUNC(sub_821B49B8);
PPC_FUNC_IMPL(__imp__sub_821B49B8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r3,432
	ctx.r31.s64 = ctx.r3.s64 + 432;
	// bl 0x82218378
	ctx.lr = 0x821B49DC;
	sub_82218378(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// addi r3,r8,168
	ctx.r3.s64 = ctx.r8.s64 + 168;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821d3db0
	ctx.lr = 0x821B4A08;
	sub_821D3DB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4a2c
	if (ctx.cr6.eq) goto loc_821B4A2C;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// li r4,6
	ctx.r4.s64 = 6;
loc_821B4A1C:
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x8220db40
	ctx.lr = 0x821B4A24;
	sub_8220DB40(ctx, base);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x821b4a1c
	if (!ctx.cr0.eq) goto loc_821B4A1C;
loc_821B4A2C:
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

__attribute__((alias("__imp__sub_821B4A44"))) PPC_WEAK_FUNC(sub_821B4A44);
PPC_FUNC_IMPL(__imp__sub_821B4A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B4A48"))) PPC_WEAK_FUNC(sub_821B4A48);
PPC_FUNC_IMPL(__imp__sub_821B4A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82101540
	sub_82101540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B4A68"))) PPC_WEAK_FUNC(sub_821B4A68);
PPC_FUNC_IMPL(__imp__sub_821B4A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82160028
	sub_82160028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B4A74"))) PPC_WEAK_FUNC(sub_821B4A74);
PPC_FUNC_IMPL(__imp__sub_821B4A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B4A78"))) PPC_WEAK_FUNC(sub_821B4A78);
PPC_FUNC_IMPL(__imp__sub_821B4A78) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8215f998
	sub_8215F998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B4A94"))) PPC_WEAK_FUNC(sub_821B4A94);
PPC_FUNC_IMPL(__imp__sub_821B4A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B4A98"))) PPC_WEAK_FUNC(sub_821B4A98);
PPC_FUNC_IMPL(__imp__sub_821B4A98) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lfs f2,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f1,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x820ff768
	ctx.lr = 0x821B4AD0;
	sub_820FF768(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B4AE0"))) PPC_WEAK_FUNC(sub_821B4AE0);
PPC_FUNC_IMPL(__imp__sub_821B4AE0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x820ffc88
	sub_820FFC88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B4AFC"))) PPC_WEAK_FUNC(sub_821B4AFC);
PPC_FUNC_IMPL(__imp__sub_821B4AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B4B00"))) PPC_WEAK_FUNC(sub_821B4B00);
PPC_FUNC_IMPL(__imp__sub_821B4B00) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,664
	ctx.r3.s64 = ctx.r11.s64 + 664;
	// bl 0x823052d8
	ctx.lr = 0x821B4B2C;
	sub_823052D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820fd660
	ctx.lr = 0x821B4B3C;
	sub_820FD660(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820fd580
	ctx.lr = 0x821B4B48;
	sub_820FD580(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,664
	ctx.r3.s64 = ctx.r11.s64 + 664;
	// bl 0x823051a8
	ctx.lr = 0x821B4B54;
	sub_823051A8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r8,r11,26116
	ctx.r8.s64 = ctx.r11.s64 + 26116;
loc_821B4B5C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b4b5c
	if (!ctx.cr0.eq) goto loc_821B4B5C;
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

__attribute__((alias("__imp__sub_821B4B90"))) PPC_WEAK_FUNC(sub_821B4B90);
PPC_FUNC_IMPL(__imp__sub_821B4B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B4B98;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b4bf0
	if (ctx.cr6.eq) goto loc_821B4BF0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
loc_821B4BC0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820fdc90
	ctx.lr = 0x821B4BE4;
	sub_820FDC90(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b4bc0
	if (!ctx.cr6.eq) goto loc_821B4BC0;
loc_821B4BF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B4BFC"))) PPC_WEAK_FUNC(sub_821B4BFC);
PPC_FUNC_IMPL(__imp__sub_821B4BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B4C00"))) PPC_WEAK_FUNC(sub_821B4C00);
PPC_FUNC_IMPL(__imp__sub_821B4C00) {
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
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8214b840
	ctx.lr = 0x821B4C24;
	sub_8214B840(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,20000
	ctx.r10.s64 = ctx.r11.s64 + 20000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r3,r11,-16888
	ctx.r3.s64 = ctx.r11.s64 + -16888;
	// bl 0x8214aa50
	ctx.lr = 0x821B4C44;
	sub_8214AA50(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8214b840
	ctx.lr = 0x821B4C4C;
	sub_8214B840(ctx, base);
	// addi r9,r3,192
	ctx.r9.s64 = ctx.r3.s64 + 192;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// addi r5,r6,26108
	ctx.r5.s64 = ctx.r6.s64 + 26108;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r4,808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 808, ctx.r4.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r3,812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 812, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 816, ctx.r10.u32);
loc_821B4C74:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b4c74
	if (!ctx.cr0.eq) goto loc_821B4C74;
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

__attribute__((alias("__imp__sub_821B4CA8"))) PPC_WEAK_FUNC(sub_821B4CA8);
PPC_FUNC_IMPL(__imp__sub_821B4CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x821B4CB0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa2c
	ctx.lr = 0x821B4CB8;
	__savefpr_25(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r15,r31
	ctx.r15.u64 = ctx.r31.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b4cf0
	if (ctx.cr6.eq) goto loc_821B4CF0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821b4cf0
	if (ctx.cr6.eq) goto loc_821B4CF0;
	// bl 0x82087078
	ctx.lr = 0x821B4CE8;
	sub_82087078(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
loc_821B4CF0:
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x8214b840
	ctx.lr = 0x821B4CF8;
	sub_8214B840(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stb r31,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// li r4,168
	ctx.r4.s64 = 168;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// bl 0x82087010
	ctx.lr = 0x821B4D10;
	sub_82087010(ctx, base);
	// li r14,6
	ctx.r14.s64 = 6;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b4d50
	if (ctx.cr6.eq) goto loc_821B4D50;
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r31.u8);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r14,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r14.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r31.u8);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// b 0x821b4d54
	goto loc_821B4D54;
loc_821B4D50:
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
loc_821B4D54:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,52(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// addi r22,r11,31376
	ctx.r22.s64 = ctx.r11.s64 + 31376;
	// lfs f30,48(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,36(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x821b4e2c
	if (!ctx.cr6.gt) goto loc_821B4E2C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r4,r23,64
	ctx.r4.s64 = ctx.r23.s64 + 64;
	// addi r3,r20,40
	ctx.r3.s64 = ctx.r20.s64 + 40;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r8,r9,3,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7;
	// stw r8,36(r20)
	PPC_STORE_U32(ctx.r20.u32 + 36, ctx.r8.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x821B4D98;
	sub_8233E4E0(ctx, base);
	// addi r3,r20,104
	ctx.r3.s64 = ctx.r20.s64 + 104;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821B4DA8;
	sub_8233E4E0(ctx, base);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r28,r20,24
	ctx.r28.s64 = ctx.r20.s64 + 24;
	// lwz r4,36(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// li r27,45
	ctx.r27.s64 = 45;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r8,193(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 193);
	// bl 0x820ff768
	ctx.lr = 0x821B4DDC;
	sub_820FF768(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r30,16(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b4e2c
	if (ctx.cr6.eq) goto loc_821B4E2C;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_821B4DF4:
	// lwzu r3,-4(r29)
	ea = -4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,36(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lbz r8,193(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 193);
	// bl 0x820ff768
	ctx.lr = 0x821B4E24;
	sub_820FF768(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821b4df4
	if (!ctx.cr6.eq) goto loc_821B4DF4;
loc_821B4E2C:
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// lwz r24,396(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// lwz r3,416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// bl 0x82153328
	ctx.lr = 0x821B4E3C;
	sub_82153328(ctx, base);
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r17,36
	ctx.r17.s64 = 36;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b50cc
	if (ctx.cr6.eq) goto loc_821B50CC;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// addi r25,r23,316
	ctx.r25.s64 = ctx.r23.s64 + 316;
	// addi r28,r11,-29208
	ctx.r28.s64 = ctx.r11.s64 + -29208;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x821b4e94
	if (ctx.cr6.eq) goto loc_821B4E94;
loc_821B4E84:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821b4e98
	goto loc_821B4E98;
loc_821B4E94:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
loc_821B4E98:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b4eac
	if (ctx.cr6.eq) goto loc_821B4EAC;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
loc_821B4EAC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82106128
	ctx.lr = 0x821B4EB8;
	sub_82106128(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b50c0
	if (!ctx.cr6.eq) goto loc_821B50C0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4f18
	if (ctx.cr6.eq) goto loc_821B4F18;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 64, ctx.xer);
	// bge cr6,0x821b50c0
	if (!ctx.cr6.lt) goto loc_821B50C0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r29,r7,1
	ctx.r29.s64 = ctx.r7.s64 + 1;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 64, ctx.xer);
	// bge cr6,0x821b50c0
	if (!ctx.cr6.lt) goto loc_821B50C0;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r29,r8,1
	ctx.r29.s64 = ctx.r8.s64 + 1;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// b 0x821b50c0
	goto loc_821B50C0;
loc_821B4F18:
	// lwz r30,36(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// blt cr6,0x821b4f30
	if (ctx.cr6.lt) goto loc_821B4F30;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x821b4f3c
	goto loc_821B4F3C;
loc_821B4F30:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_821B4F3C:
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// and r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 & ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b50c0
	if (ctx.cr6.eq) goto loc_821B50C0;
	// lwz r11,344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b50c0
	if (ctx.cr6.eq) goto loc_821B50C0;
	// li r4,152
	ctx.r4.s64 = 152;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82087010
	ctx.lr = 0x821B4F6C;
	sub_82087010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b4fa4
	if (ctx.cr6.eq) goto loc_821B4FA4;
	// stw r17,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r17.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r31.u8);
	// stw r14,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r14.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r31.u8);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// b 0x821b4fa8
	goto loc_821B4FA8;
loc_821B4FA4:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_821B4FA8:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r9,340(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// stw r15,120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 120, ctx.r15.u32);
	// stw r8,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r8.u32);
	// lfs f0,48(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 140, temp.u32);
	// lfs f13,52(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stw r18,148(r27)
	PPC_STORE_U32(ctx.r27.u32 + 148, ctx.r18.u32);
	// stfs f13,144(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 144, temp.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r8,r11,496
	ctx.r8.s64 = ctx.r11.s64 + 496;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_821B4FE4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b4ffc
	if (ctx.cr6.eq) goto loc_821B4FFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821b5010
	if (ctx.cr6.eq) goto loc_821B5010;
loc_821B4FFC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x821b4fe4
	if (ctx.cr6.lt) goto loc_821B4FE4;
	// b 0x821b5018
	goto loc_821B5018;
loc_821B5010:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_821B5018:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8214e0a0
	ctx.lr = 0x821B5028;
	sub_8214E0A0(ctx, base);
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b5044
	if (ctx.cr6.eq) goto loc_821B5044;
	// lwz r11,124(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bne cr6,0x821b5048
	if (!ctx.cr6.eq) goto loc_821B5048;
loc_821B5044:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821B5048:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b50c0
	if (ctx.cr6.eq) goto loc_821B50C0;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// stb r19,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r19.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b5094
	if (!ctx.cr6.eq) goto loc_821B5094;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stb r19,8(r20)
	PPC_STORE_U8(ctx.r20.u32 + 8, ctx.r19.u8);
	// stw r31,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b5084
	if (ctx.cr6.eq) goto loc_821B5084;
	// stw r20,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r20.u32);
	// b 0x821b508c
	goto loc_821B508C;
loc_821B5084:
	// stw r20,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
loc_821B508C:
	// stw r20,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r20.u32);
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
loc_821B5094:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// stb r19,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r19.u8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b50b4
	if (ctx.cr6.eq) goto loc_821B50B4;
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// b 0x821b50bc
	goto loc_821B50BC;
loc_821B50B4:
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_821B50BC:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_821B50C0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821b4e84
	if (!ctx.cr6.eq) goto loc_821B4E84;
	// stb r16,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r16.u8);
loc_821B50CC:
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// addi r14,r23,192
	ctx.r14.s64 = ctx.r23.s64 + 192;
	// mr r15,r31
	ctx.r15.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821b56cc
	if (!ctx.cr6.gt) goto loc_821B56CC;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lfs f28,252(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 252);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,144(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 144);
	ctx.f27.f64 = double(temp.f32);
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
	// lfs f26,140(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 140);
	ctx.f26.f64 = double(temp.f32);
	// li r16,520
	ctx.r16.s64 = 520;
	// lfs f25,40(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	ctx.f25.f64 = double(temp.f32);
	// li r18,37
	ctx.r18.s64 = 37;
	// li r20,544
	ctx.r20.s64 = 544;
	// lis r23,-32171
	ctx.r23.s64 = -2108358656;
	// li r19,-1
	ctx.r19.s64 = -1;
	// addi r24,r11,5548
	ctx.r24.s64 = ctx.r11.s64 + 5548;
loc_821B5110:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// lwzx r11,r17,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,-284
	ctx.r29.s64 = ctx.r11.s64 + -284;
	// bne cr6,0x821b5128
	if (!ctx.cr6.eq) goto loc_821B5128;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_821B5128:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821b56b8
	if (ctx.cr6.eq) goto loc_821B56B8;
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// addi r25,r29,284
	ctx.r25.s64 = ctx.r29.s64 + 284;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b514c
	if (ctx.cr6.eq) goto loc_821B514C;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x821b517c
	goto loc_821B517C;
loc_821B514C:
	// lwz r11,5544(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5544);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b5168
	if (!ctx.cr6.eq) goto loc_821B5168;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,5544(r23)
	PPC_STORE_U32(ctx.r23.u32 + 5544, ctx.r10.u32);
loc_821B5168:
	// stfs f30,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stfs f30,4(r24)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// stfs f30,0(r24)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// stfs f29,12(r24)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r24.u32 + 12, temp.u32);
loc_821B517C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r14,8
	ctx.r10.s64 = ctx.r14.s64 + 8;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r4,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r4.u32);
	// lfs f12,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
loc_821B51B8:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f13,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f4,f7,f11,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x821b51f0
	if (ctx.cr6.gt) goto loc_821B51F0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// blt cr6,0x821b51b8
	if (ctx.cr6.lt) goto loc_821B51B8;
loc_821B51F0:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bne cr6,0x821b56b8
	if (!ctx.cr6.eq) goto loc_821B56B8;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b534c
	if (!ctx.cr6.eq) goto loc_821B534C;
	// lbz r10,97(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b5248
	if (!ctx.cr6.eq) goto loc_821B5248;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stb r28,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r28.u8);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b5238
	if (ctx.cr6.eq) goto loc_821B5238;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x821b5240
	goto loc_821B5240;
loc_821B5238:
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_821B5240:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stb r28,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r28.u8);
loc_821B5248:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821b52dc
	if (!ctx.cr6.eq) goto loc_821B52DC;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,160
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 160, ctx.xer);
	// bge cr6,0x821b5280
	if (!ctx.cr6.lt) goto loc_821B5280;
	// lwz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r30,160
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 160, ctx.xer);
	// bge cr6,0x821b526c
	if (!ctx.cr6.lt) goto loc_821B526C;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
loc_821B526C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x821B5278;
	sub_82080478(ctx, base);
	// stw r3,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r3.u32);
	// stw r30,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r30.u32);
loc_821B5280:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -160;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r9,r11,160
	ctx.r9.s64 = ctx.r11.s64 + 160;
	// stw r10,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r9.u32);
	// beq cr6,0x821b52d8
	if (ctx.cr6.eq) goto loc_821B52D8;
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r31,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r31.u8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// b 0x821b52dc
	goto loc_821B52DC;
loc_821B52D8:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_821B52DC:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// lwz r8,340(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r7,176(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// stw r10,120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 120, ctx.r10.u32);
	// stw r7,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r7.u32);
	// lfs f0,48(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 140, temp.u32);
	// lfs f13,52(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,148(r27)
	PPC_STORE_U32(ctx.r27.u32 + 148, ctx.r9.u32);
	// stfs f13,144(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 144, temp.u32);
	// stw r31,128(r27)
	PPC_STORE_U32(ctx.r27.u32 + 128, ctx.r31.u32);
	// stw r31,124(r27)
	PPC_STORE_U32(ctx.r27.u32 + 124, ctx.r31.u32);
	// stw r31,132(r27)
	PPC_STORE_U32(ctx.r27.u32 + 132, ctx.r31.u32);
	// stw r31,136(r27)
	PPC_STORE_U32(ctx.r27.u32 + 136, ctx.r31.u32);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// stb r28,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r28.u8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b5340
	if (ctx.cr6.eq) goto loc_821B5340;
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// b 0x821b5348
	goto loc_821B5348;
loc_821B5340:
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_821B5348:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_821B534C:
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r4,36(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r5,r27,24
	ctx.r5.s64 = ctx.r27.s64 + 24;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ff768
	ctx.lr = 0x821B5374;
	sub_820FF768(ctx, base);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x821b53a4
	if (!ctx.cr6.lt) goto loc_821B53A4;
	// lwz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// bge cr6,0x821b5390
	if (!ctx.cr6.lt) goto loc_821B5390;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
loc_821B5390:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x821B539C;
	sub_82080478(ctx, base);
	// stw r3,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r3.u32);
	// stw r30,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r30.u32);
loc_821B53A4:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// li r22,6
	ctx.r22.s64 = 6;
	// addi r10,r11,-128
	ctx.r10.s64 = ctx.r11.s64 + -128;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// stw r10,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r9.u32);
	// beq cr6,0x821b53f8
	if (ctx.cr6.eq) goto loc_821B53F8;
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stb r31,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r31.u8);
	// stw r22,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r22.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// b 0x821b53fc
	goto loc_821B53FC;
loc_821B53F8:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_821B53FC:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r27,40
	ctx.r4.s64 = ctx.r27.s64 + 40;
	// li r5,80
	ctx.r5.s64 = 80;
	// lwz r9,340(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// stw r10,120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 120, ctx.r10.u32);
	// stw r8,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r8.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x821B5424;
	sub_8233E4E0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r4,36(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r5,r28,24
	ctx.r5.s64 = ctx.r28.s64 + 24;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x820ff768
	ctx.lr = 0x821B544C;
	sub_820FF768(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821b56b8
	if (ctx.cr6.eq) goto loc_821B56B8;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b546c
	if (ctx.cr6.eq) goto loc_821B546C;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x821b5498
	goto loc_821B5498;
loc_821B546C:
	// lwz r11,5544(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5544);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b5484
	if (!ctx.cr6.eq) goto loc_821B5484;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,5544(r23)
	PPC_STORE_U32(ctx.r23.u32 + 5544, ctx.r11.u32);
loc_821B5484:
	// stfs f30,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stfs f30,4(r24)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// stfs f30,0(r24)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// stfs f29,12(r24)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r24.u32 + 12, temp.u32);
loc_821B5498:
	// lwz r10,36(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r9,176
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 176, ctx.xer);
	// lfs f11,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f8,f12,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsubs f31,f6,f28
	ctx.f31.f64 = double(float(ctx.f6.f64 - ctx.f28.f64));
	// bge cr6,0x821b54f4
	if (!ctx.cr6.lt) goto loc_821B54F4;
	// lwz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r30,176
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 176, ctx.xer);
	// bge cr6,0x821b54e0
	if (!ctx.cr6.lt) goto loc_821B54E0;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
loc_821B54E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x821B54EC;
	sub_82080478(ctx, base);
	// stw r3,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r3.u32);
	// stw r30,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r30.u32);
loc_821B54F4:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r9,r11,176
	ctx.r9.s64 = ctx.r11.s64 + 176;
	// addi r8,r10,-176
	ctx.r8.s64 = ctx.r10.s64 + -176;
	// stw r9,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r8.u32);
	// beq cr6,0x821b5548
	if (ctx.cr6.eq) goto loc_821B5548;
	// li r9,35
	ctx.r9.s64 = 35;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stb r31,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r31.u8);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r22,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r22.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// b 0x821b554c
	goto loc_821B554C;
loc_821B5548:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_821B554C:
	// li r5,168
	ctx.r5.s64 = 168;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821B555C;
	sub_8233E4E0(ctx, base);
	// stb r31,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r31.u8);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x821b5594
	if (!ctx.cr6.lt) goto loc_821B5594;
	// lwz r29,0(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// bge cr6,0x821b5580
	if (!ctx.cr6.lt) goto loc_821B5580;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
loc_821B5580:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x821B558C;
	sub_82080478(ctx, base);
	// stw r3,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r3.u32);
	// stw r29,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r29.u32);
loc_821B5594:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// addi r8,r10,-32
	ctx.r8.s64 = ctx.r10.s64 + -32;
	// stw r9,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r8.u32);
	// beq cr6,0x821b55d4
	if (ctx.cr6.eq) goto loc_821B55D4;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stb r31,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r31.u8);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// b 0x821b55d8
	goto loc_821B55D8;
loc_821B55D4:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_821B55D8:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stb r9,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r9.u8);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b55fc
	if (ctx.cr6.eq) goto loc_821B55FC;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x821b5604
	goto loc_821B5604;
loc_821B55FC:
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_821B5604:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stb r9,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r9.u8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b5624
	if (ctx.cr6.eq) goto loc_821B5624;
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// b 0x821b562c
	goto loc_821B562C;
loc_821B5624:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_821B562C:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x823052d8
	ctx.lr = 0x821B5640;
	sub_823052D8(ctx, base);
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821b56ac
	if (!ctx.cr6.lt) goto loc_821B56AC;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x821b5688
	if (!ctx.cr6.gt) goto loc_821B5688;
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bge cr6,0x821b5688
	if (!ctx.cr6.lt) goto loc_821B5688;
	// fmuls f0,f31,f25
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f25.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// b 0x821b56a8
	goto loc_821B56A8;
loc_821B5688:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x821b56a0
	if (!ctx.cr6.gt) goto loc_821B56A0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x821b56a8
	goto loc_821B56A8;
loc_821B56A0:
	// lis r10,-28928
	ctx.r10.s64 = -1895825408;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821B56A8:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_821B56AC:
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x823051a8
	ctx.lr = 0x821B56B8;
	sub_823051A8(ctx, base);
loc_821B56B8:
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r17,r17,8
	ctx.r17.s64 = ctx.r17.s64 + 8;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b5110
	if (ctx.cr6.lt) goto loc_821B5110;
loc_821B56CC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r8,r11,26108
	ctx.r8.s64 = ctx.r11.s64 + 26108;
loc_821B56D4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b56d4
	if (!ctx.cr0.eq) goto loc_821B56D4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b5700
	if (ctx.cr6.eq) goto loc_821B5700;
	// bl 0x82172d60
	ctx.lr = 0x821B5700;
	sub_82172D60(ctx, base);
loc_821B5700:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa78
	ctx.lr = 0x821B570C;
	__restfpr_25(ctx, base);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5710"))) PPC_WEAK_FUNC(sub_821B5710);
PPC_FUNC_IMPL(__imp__sub_821B5710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r11,20000
	ctx.r10.s64 = ctx.r11.s64 + 20000;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// b 0x821551d8
	sub_821551D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5730"))) PPC_WEAK_FUNC(sub_821B5730);
PPC_FUNC_IMPL(__imp__sub_821B5730) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b57c0
	if (ctx.cr6.eq) goto loc_821B57C0;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82087010
	ctx.lr = 0x821B5760;
	sub_82087010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b5790
	if (ctx.cr6.eq) goto loc_821B5790;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x821b5794
	goto loc_821B5794;
loc_821B5790:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821B5794:
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82160028
	ctx.lr = 0x821B57A0;
	sub_82160028(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r6,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, ctx.r6.u8);
loc_821B57C0:
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

__attribute__((alias("__imp__sub_821B57D8"))) PPC_WEAK_FUNC(sub_821B57D8);
PPC_FUNC_IMPL(__imp__sub_821B57D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B57E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// bl 0x82247360
	ctx.lr = 0x821B5874;
	sub_82247360(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82246e60
	ctx.lr = 0x821B588C;
	sub_82246E60(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b61f0
	ctx.lr = 0x821B58B4;
	sub_821B61F0(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x821b61f0
	ctx.lr = 0x821B58C0;
	sub_821B61F0(ctx, base);
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x821b61f0
	ctx.lr = 0x821B58CC;
	sub_821B61F0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B58D8:
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821b58d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B58D8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,26332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26332);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// bl 0x82247218
	ctx.lr = 0x821B58F8;
	sub_82247218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5904"))) PPC_WEAK_FUNC(sub_821B5904);
PPC_FUNC_IMPL(__imp__sub_821B5904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5908"))) PPC_WEAK_FUNC(sub_821B5908);
PPC_FUNC_IMPL(__imp__sub_821B5908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B5910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-17344
	ctx.r31.s64 = ctx.r11.s64 + -17344;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82246e18
	ctx.lr = 0x821B5924;
	sub_82246E18(ctx, base);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b5934
	if (ctx.cr6.eq) goto loc_821B5934;
	// bl 0x82246e18
	ctx.lr = 0x821B5934;
	sub_82246E18(ctx, base);
loc_821B5934:
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// li r29,0
	ctx.r29.s64 = 0;
loc_821B5940:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// lbz r10,-3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -3);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b596c
	if (ctx.cr6.eq) goto loc_821B596C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b5968
	if (ctx.cr6.eq) goto loc_821B5968;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B5968;
	sub_82080000(ctx, base);
loc_821B5968:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_821B596C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r29.u32);
	// stw r29,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r29.u32);
	// bge 0x821b5940
	if (!ctx.cr0.lt) goto loc_821B5940;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5984"))) PPC_WEAK_FUNC(sub_821B5984);
PPC_FUNC_IMPL(__imp__sub_821B5984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5988"))) PPC_WEAK_FUNC(sub_821B5988);
PPC_FUNC_IMPL(__imp__sub_821B5988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821B5990;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-17344
	ctx.r31.s64 = ctx.r11.s64 + -17344;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b5ae8
	if (ctx.cr6.eq) goto loc_821B5AE8;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821b59e0
	if (ctx.cr6.eq) goto loc_821B59E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821b5ef0
	ctx.lr = 0x821B59D4;
	sub_821B5EF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b5b68
	if (!ctx.cr6.eq) goto loc_821B5B68;
loc_821B59E0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821b5a5c
	if (ctx.cr6.eq) goto loc_821B5A5C;
	// lhz r11,102(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 102);
	// lhz r10,90(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bgt cr6,0x821b5a14
	if (ctx.cr6.gt) goto loc_821B5A14;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_821B5A14:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// blt cr6,0x821b5a24
	if (ctx.cr6.lt) goto loc_821B5A24;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_821B5A24:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b5a44
	if (ctx.cr6.lt) goto loc_821B5A44;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_821B5A44:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b5ef0
	ctx.lr = 0x821B5A50;
	sub_821B5EF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b5b68
	if (!ctx.cr6.eq) goto loc_821B5B68;
loc_821B5A5C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821b5ae8
	if (ctx.cr6.eq) goto loc_821B5AE8;
	// lhz r11,98(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 98);
	// lhz r10,86(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821b5a8c
	if (!ctx.cr6.gt) goto loc_821B5A8C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x821b5a98
	goto loc_821B5A98;
loc_821B5A8C:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_821B5A98:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// blt cr6,0x821b5aa8
	if (ctx.cr6.lt) goto loc_821B5AA8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_821B5AA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b5ad0
	if (ctx.cr6.eq) goto loc_821B5AD0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r11,0
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b5ad0
	if (ctx.cr6.lt) goto loc_821B5AD0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_821B5AD0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b5ef0
	ctx.lr = 0x821B5ADC;
	sub_821B5EF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b5b68
	if (!ctx.cr6.eq) goto loc_821B5B68;
loc_821B5AE8:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b5b68
	if (ctx.cr6.eq) goto loc_821B5B68;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x821b5b68
	if (ctx.cr6.eq) goto loc_821B5B68;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821b5b74
	if (!ctx.cr6.eq) goto loc_821B5B74;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821b5b74
	if (!ctx.cr6.eq) goto loc_821B5B74;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821b5b74
	if (!ctx.cr6.eq) goto loc_821B5B74;
	// addi r9,r31,140
	ctx.r9.s64 = ctx.r31.s64 + 140;
loc_821B5B30:
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
	// bne 0x821b5b30
	if (!ctx.cr0.eq) goto loc_821B5B30;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b5b5c
	if (!ctx.cr6.eq) goto loc_821B5B5C;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822471d8
	ctx.lr = 0x821B5B5C;
	sub_822471D8(ctx, base);
loc_821B5B5C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x8209c4e8
	ctx.lr = 0x821B5B68;
	sub_8209C4E8(ctx, base);
loc_821B5B68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_821B5B74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5B80"))) PPC_WEAK_FUNC(sub_821B5B80);
PPC_FUNC_IMPL(__imp__sub_821B5B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821B5B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b5bfc
	if (ctx.cr6.eq) goto loc_821B5BFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
loc_821B5BA0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B5BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b5be8
	if (ctx.cr6.eq) goto loc_821B5BE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B5BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821b5bf0
	goto loc_821B5BF0;
loc_821B5BE8:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_821B5BF0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821b5ba0
	if (!ctx.cr0.eq) goto loc_821B5BA0;
loc_821B5BFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5C04"))) PPC_WEAK_FUNC(sub_821B5C04);
PPC_FUNC_IMPL(__imp__sub_821B5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5C08"))) PPC_WEAK_FUNC(sub_821B5C08);
PPC_FUNC_IMPL(__imp__sub_821B5C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821B5C10;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r31,r11,-17344
	ctx.r31.s64 = ctx.r11.s64 + -17344;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82247250
	ctx.lr = 0x821B5C4C;
	sub_82247250(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b5c74
	if (!ctx.cr6.eq) goto loc_821B5C74;
	// addi r9,r31,128
	ctx.r9.s64 = ctx.r31.s64 + 128;
loc_821B5C58:
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
	// bne 0x821b5c58
	if (!ctx.cr0.eq) goto loc_821B5C58;
loc_821B5C74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b5cec
	if (!ctx.cr6.eq) goto loc_821B5CEC;
loc_821B5C8C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b5988
	ctx.lr = 0x821B5C9C;
	sub_821B5988(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b5cc0
	if (ctx.cr6.eq) goto loc_821B5CC0;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r29,144(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_821B5CC0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b5cd8
	if (ctx.cr6.eq) goto loc_821B5CD8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b5b80
	ctx.lr = 0x821B5CD4;
	sub_821B5B80(ctx, base);
	// b 0x821b5ce0
	goto loc_821B5CE0;
loc_821B5CD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82247328
	ctx.lr = 0x821B5CE0;
	sub_82247328(ctx, base);
loc_821B5CE0:
	// lbz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b5c8c
	if (ctx.cr6.eq) goto loc_821B5C8C;
loc_821B5CEC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5CF4"))) PPC_WEAK_FUNC(sub_821B5CF4);
PPC_FUNC_IMPL(__imp__sub_821B5CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5CF8"))) PPC_WEAK_FUNC(sub_821B5CF8);
PPC_FUNC_IMPL(__imp__sub_821B5CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B5D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-17344
	ctx.r31.s64 = ctx.r11.s64 + -17344;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b5d9c
	if (ctx.cr6.eq) goto loc_821B5D9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b5d60
	if (!ctx.cr6.gt) goto loc_821B5D60;
loc_821B5D2C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b5988
	ctx.lr = 0x821B5D3C;
	sub_821B5988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b5d60
	if (ctx.cr6.eq) goto loc_821B5D60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// bl 0x821b5b80
	ctx.lr = 0x821B5D54;
	sub_821B5B80(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821b5d2c
	if (ctx.cr6.gt) goto loc_821B5D2C;
loc_821B5D60:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b5d9c
	if (!ctx.cr6.gt) goto loc_821B5D9C;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,26332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26332);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821b5d88
	if (!ctx.cr6.eq) goto loc_821B5D88;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_821B5D88:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82247250
	ctx.lr = 0x821B5D94;
	sub_82247250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_821B5D9C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5DA4"))) PPC_WEAK_FUNC(sub_821B5DA4);
PPC_FUNC_IMPL(__imp__sub_821B5DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5DA8"))) PPC_WEAK_FUNC(sub_821B5DA8);
PPC_FUNC_IMPL(__imp__sub_821B5DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821B5DB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-17344
	ctx.r31.s64 = ctx.r11.s64 + -17344;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b5e5c
	if (ctx.cr6.eq) goto loc_821B5E5C;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,26332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26332);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b5df4
	if (ctx.cr6.eq) goto loc_821B5DF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_821B5DF4:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_821B5DF8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b5988
	ctx.lr = 0x821B5E08;
	sub_821B5988(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b5e34
	if (!ctx.cr6.eq) goto loc_821B5E34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821b5e48
	if (!ctx.cr6.eq) goto loc_821B5E48;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821b5e48
	if (ctx.cr6.eq) goto loc_821B5E48;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b5e34
	if (!ctx.cr6.eq) goto loc_821B5E34;
	// bl 0x82247328
	ctx.lr = 0x821B5E34;
	sub_82247328(ctx, base);
loc_821B5E34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// bl 0x821b5b80
	ctx.lr = 0x821B5E44;
	sub_821B5B80(ctx, base);
	// b 0x821b5df8
	goto loc_821B5DF8;
loc_821B5E48:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82247250
	ctx.lr = 0x821B5E54;
	sub_82247250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_821B5E5C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5E64"))) PPC_WEAK_FUNC(sub_821B5E64);
PPC_FUNC_IMPL(__imp__sub_821B5E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5E68"))) PPC_WEAK_FUNC(sub_821B5E68);
PPC_FUNC_IMPL(__imp__sub_821B5E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B5E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32197
	ctx.r30.s64 = -2110062592;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821B5E84;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b5e90
	if (!ctx.cr6.eq) goto loc_821B5E90;
	// bl 0x821b3000
	ctx.lr = 0x821B5E90;
	sub_821B3000(ctx, base);
loc_821B5E90:
	// lis r11,60
	ctx.r11.s64 = 3932160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lis r3,60
	ctx.r3.s64 = 3932160;
	// bl 0x82082030
	ctx.lr = 0x821B5EB0;
	sub_82082030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821B5EC8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b5ed4
	if (!ctx.cr6.eq) goto loc_821B5ED4;
	// bl 0x821b3000
	ctx.lr = 0x821B5ED4;
	sub_821B3000(ctx, base);
loc_821B5ED4:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x821b5c08
	ctx.lr = 0x821B5EE4;
	sub_821B5C08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5EF0"))) PPC_WEAK_FUNC(sub_821B5EF0);
PPC_FUNC_IMPL(__imp__sub_821B5EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x821B5EF8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r22,r11,-17344
	ctx.r22.s64 = ctx.r11.s64 + -17344;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r26,r11,r22
	ctx.r26.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// clrlwi r20,r9,16
	ctx.r20.u64 = ctx.r9.u32 & 0xFFFF;
	// beq cr6,0x821b60b4
	if (ctx.cr6.eq) goto loc_821B60B4;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r22,96
	ctx.r10.s64 = ctx.r22.s64 + 96;
	// rlwinm r19,r4,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r22,84
	ctx.r18.s64 = ctx.r22.s64 + 84;
	// add r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821B5F48:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwzx r10,r19,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r18.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821b60b4
	if (ctx.cr6.eq) goto loc_821B60B4;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r22,86
	ctx.r9.s64 = ctx.r22.s64 + 86;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lwsync 
	// lhz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b5f90
	if (ctx.cr6.lt) goto loc_821B5F90;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x821b5f9c
	goto loc_821B5F9C;
loc_821B5F90:
	// extsh r9,r20
	ctx.r9.s64 = ctx.r20.s16;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_821B5F9C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821b60ac
	if (ctx.cr6.eq) goto loc_821B60AC;
	// extsh r10,r20
	ctx.r10.s64 = ctx.r20.s16;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821b6020
	if (ctx.cr6.eq) goto loc_821B6020;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821b5fd8
	if (!ctx.cr6.lt) goto loc_821B5FD8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_821B5FD8:
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821b5ff0
	if (ctx.cr6.lt) goto loc_821B5FF0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_821B5FF0:
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// lwz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// bl 0x8233e4e0
	ctx.lr = 0x821B601C;
	sub_8233E4E0(ctx, base);
	// b 0x821b605c
	goto loc_821B605C;
loc_821B6020:
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// blt cr6,0x821b6030
	if (ctx.cr6.lt) goto loc_821B6030;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_821B6030:
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// lwz r4,32(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// bl 0x8233e4e0
	ctx.lr = 0x821B6050;
	sub_8233E4E0(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
loc_821B605C:
	// sth r29,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r29.u16);
	// lwsync 
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B6068:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x821b608c
	if (!ctx.cr6.eq) goto loc_821B608C;
	// stwcx. r9,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b6068
	if (!ctx.cr0.eq) goto loc_821B6068;
	// b 0x821b6094
	goto loc_821B6094;
loc_821B608C:
	// stwcx. r11,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_821B6094:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x821b60ac
	if (!ctx.cr6.eq) goto loc_821B60AC;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r21,r31,r21
	ctx.r21.u64 = ctx.r31.u64 + ctx.r21.u64;
	// subf r27,r31,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r31.s64;
loc_821B60AC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821b5f48
	if (!ctx.cr6.eq) goto loc_821B5F48;
loc_821B60B4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B60C0"))) PPC_WEAK_FUNC(sub_821B60C0);
PPC_FUNC_IMPL(__imp__sub_821B60C0) {
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
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,-17344
	ctx.r31.s64 = ctx.r11.s64 + -17344;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r31,84
	ctx.r8.s64 = ctx.r31.s64 + 84;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x821b612c
	if (!ctx.cr6.eq) goto loc_821B612C;
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
loc_821B612C:
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r31,98
	ctx.r6.s64 = ctx.r31.s64 + 98;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821b6164
	if (!ctx.cr6.eq) goto loc_821B6164;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// bl 0x821b62a0
	ctx.lr = 0x821B6150;
	sub_821B62A0(ctx, base);
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
loc_821B6164:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwsync 
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwsync 
	// lwz r5,136(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x821b61dc
	if (ctx.cr6.eq) goto loc_821B61DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x82247218
	ctx.lr = 0x821B619C;
	sub_82247218(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b61dc
	if (ctx.cr6.eq) goto loc_821B61DC;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_821B61AC:
	// addi r9,r31,140
	ctx.r9.s64 = ctx.r31.s64 + 140;
loc_821B61B0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b61b0
	if (!ctx.cr0.eq) goto loc_821B61B0;
	// bdnz 0x821b61ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B61AC;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8209c548
	ctx.lr = 0x821B61DC;
	sub_8209C548(ctx, base);
loc_821B61DC:
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

__attribute__((alias("__imp__sub_821B61F0"))) PPC_WEAK_FUNC(sub_821B61F0);
PPC_FUNC_IMPL(__imp__sub_821B61F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B61F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821b6220
	if (!ctx.cr6.gt) goto loc_821B6220;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821B6220:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821B6230;
	sub_82082030(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821b6244
	if (!ctx.cr6.lt) goto loc_821B6244;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821B6244:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b6260
	if (ctx.cr6.eq) goto loc_821B6260;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821B6260;
	sub_8233E4E0(ctx, base);
loc_821B6260:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6284
	if (ctx.cr6.eq) goto loc_821B6284;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6284
	if (ctx.cr6.eq) goto loc_821B6284;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B6284;
	sub_82080000(ctx, base);
loc_821B6284:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B629C"))) PPC_WEAK_FUNC(sub_821B629C);
PPC_FUNC_IMPL(__imp__sub_821B629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B62A0"))) PPC_WEAK_FUNC(sub_821B62A0);
PPC_FUNC_IMPL(__imp__sub_821B62A0) {
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
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B62C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b6300
	if (ctx.cr6.eq) goto loc_821B6300;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B62EC;
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
loc_821B6300:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821B631C"))) PPC_WEAK_FUNC(sub_821B631C);
PPC_FUNC_IMPL(__imp__sub_821B631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6320"))) PPC_WEAK_FUNC(sub_821B6320);
PPC_FUNC_IMPL(__imp__sub_821B6320) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821b6f70
	ctx.lr = 0x821B6340;
	sub_821B6F70(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-26464
	ctx.r8.s64 = ctx.r10.s64 + -26464;
	// addi r6,r9,-26316
	ctx.r6.s64 = ctx.r9.s64 + -26316;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r7,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r7.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// std r11,552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 552, ctx.r11.u64);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// stw r6,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r6.u32);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// sth r11,572(r31)
	PPC_STORE_U16(ctx.r31.u32 + 572, ctx.r11.u16);
	// sth r11,574(r31)
	PPC_STORE_U16(ctx.r31.u32 + 574, ctx.r11.u16);
	// stb r11,580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 580, ctx.r11.u8);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// stw r5,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r5.u32);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// std r9,544(r31)
	PPC_STORE_U64(ctx.r31.u32 + 544, ctx.r9.u64);
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// stb r10,636(r31)
	PPC_STORE_U8(ctx.r31.u32 + 636, ctx.r10.u8);
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// stb r11,648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 648, ctx.r11.u8);
	// stb r11,649(r31)
	PPC_STORE_U8(ctx.r31.u32 + 649, ctx.r11.u8);
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// std r11,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r11.u64);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// bl 0x82305000
	ctx.lr = 0x821B640C;
	sub_82305000(ctx, base);
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821B642C"))) PPC_WEAK_FUNC(sub_821B642C);
PPC_FUNC_IMPL(__imp__sub_821B642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6430"))) PPC_WEAK_FUNC(sub_821B6430);
PPC_FUNC_IMPL(__imp__sub_821B6430) {
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
	// bl 0x821b6480
	ctx.lr = 0x821B6450;
	sub_821B6480(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6468
	if (ctx.cr6.eq) goto loc_821B6468;
	// bl 0x821b6c08
	ctx.lr = 0x821B6464;
	sub_821B6C08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B6468:
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

__attribute__((alias("__imp__sub_821B6480"))) PPC_WEAK_FUNC(sub_821B6480);
PPC_FUNC_IMPL(__imp__sub_821B6480) {
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
	// lbz r10,636(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 636);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-26464
	ctx.r9.s64 = ctx.r11.s64 + -26464;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821b64c4
	if (ctx.cr6.eq) goto loc_821B64C4;
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// addi r3,r3,536
	ctx.r3.s64 = ctx.r3.s64 + 536;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B64C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B64C4:
	// lwz r10,672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// addi r11,r31,664
	ctx.r11.s64 = ctx.r31.s64 + 664;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b64dc
	if (ctx.cr6.eq) goto loc_821B64DC;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x821B64DC;
	sub_82246E18(ctx, base);
loc_821B64DC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,536
	ctx.r30.s64 = ctx.r31.s64 + 536;
	// addi r10,r11,-26316
	ctx.r10.s64 = ctx.r11.s64 + -26316;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// bl 0x821b8348
	ctx.lr = 0x821B64F4;
	sub_821B8348(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823073b0
	ctx.lr = 0x821B64FC;
	sub_823073B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b7218
	ctx.lr = 0x821B6504;
	sub_821B7218(ctx, base);
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

__attribute__((alias("__imp__sub_821B651C"))) PPC_WEAK_FUNC(sub_821B651C);
PPC_FUNC_IMPL(__imp__sub_821B651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6520"))) PPC_WEAK_FUNC(sub_821B6520);
PPC_FUNC_IMPL(__imp__sub_821B6520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B6528;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233c048
	ctx.lr = 0x821B6548;
	sub_8233C048(ctx, base);
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b6564
	if (!ctx.cr6.eq) goto loc_821B6564;
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230aec0
	ctx.lr = 0x821B6564;
	sub_8230AEC0(ctx, base);
loc_821B6564:
	// rlwinm r4,r30,0,29,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bcbe8
	ctx.lr = 0x821B6570;
	sub_821BCBE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b65e4
	if (!ctx.cr6.eq) goto loc_821B65E4;
	// ld r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// lwz r10,640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r11,32767
	ctx.r9.s64 = ctx.r11.s64 + 32767;
	// rlwinm r11,r9,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// rlwinm r30,r8,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// bne cr6,0x821b65dc
	if (!ctx.cr6.eq) goto loc_821B65DC;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821b65bc
	if (!ctx.cr6.gt) goto loc_821B65BC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821B65BC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821B65CC;
	sub_82082030(ctx, base);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x821B65DC;
	sub_8233EAF0(ctx, base);
loc_821B65DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
loc_821B65E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B65F0"))) PPC_WEAK_FUNC(sub_821B65F0);
PPC_FUNC_IMPL(__imp__sub_821B65F0) {
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
	// lwz r3,512(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821b6614
	if (ctx.cr6.eq) goto loc_821B6614;
	// bl 0x82246e18
	ctx.lr = 0x821B6614;
	sub_82246E18(ctx, base);
loc_821B6614:
	// lbz r10,636(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 636);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r9.u32);
	// stb r11,293(r31)
	PPC_STORE_U8(ctx.r31.u32 + 293, ctx.r11.u8);
	// beq cr6,0x821b6648
	if (ctx.cr6.eq) goto loc_821B6648;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B6648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B6648:
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

__attribute__((alias("__imp__sub_821B6660"))) PPC_WEAK_FUNC(sub_821B6660);
PPC_FUNC_IMPL(__imp__sub_821B6660) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821B666C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b666c
	if (!ctx.cr6.eq) goto loc_821B666C;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821b66b0
	if (ctx.cr0.lt) goto loc_821B66B0;
loc_821B6690:
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x821b66b0
	if (ctx.cr6.eq) goto loc_821B66B0;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x821b66b0
	if (ctx.cr6.eq) goto loc_821B66B0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x821b6690
	if (!ctx.cr0.lt) goto loc_821B6690;
loc_821B66B0:
	// li r10,90
	ctx.r10.s64 = 90;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r10,-26468
	ctx.r4.s64 = ctx.r10.s64 + -26468;
	// bne cr6,0x821b66d8
	if (!ctx.cr6.eq) goto loc_821B66D8;
	// li r11,92
	ctx.r11.s64 = 92;
	// addi r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 2;
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// b 0x8233cc00
	sub_8233CC00(ctx, base);
	return;
loc_821B66D8:
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// b 0x8233cc00
	sub_8233CC00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B66E4"))) PPC_WEAK_FUNC(sub_821B66E4);
PPC_FUNC_IMPL(__imp__sub_821B66E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B66E8"))) PPC_WEAK_FUNC(sub_821B66E8);
PPC_FUNC_IMPL(__imp__sub_821B66E8) {
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
	// lbz r11,636(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 636);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b6718
	if (!ctx.cr6.eq) goto loc_821B6718;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b6764
	goto loc_821B6764;
loc_821B6718:
	// lbz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6738
	if (ctx.cr6.eq) goto loc_821B6738;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x821b6ed0
	ctx.lr = 0x821B6730;
	sub_821B6ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b673c
	goto loc_821B673C;
loc_821B6738:
	// rldicr r4,r30,0,48
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 0) & 0xFFFFFFFFFFFF8000;
loc_821B673C:
	// cmpdi cr6,r30,-1
	ctx.cr6.compare<int64_t>(ctx.r30.s64, -1, ctx.xer);
	// beq cr6,0x821b675c
	if (ctx.cr6.eq) goto loc_821B675C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b6b60
	ctx.lr = 0x821B674C;
	sub_821B6B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821b6760
	if (!ctx.cr6.eq) goto loc_821B6760;
loc_821B675C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B6760:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_821B6764:
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

__attribute__((alias("__imp__sub_821B677C"))) PPC_WEAK_FUNC(sub_821B677C);
PPC_FUNC_IMPL(__imp__sub_821B677C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6780"))) PPC_WEAK_FUNC(sub_821B6780);
PPC_FUNC_IMPL(__imp__sub_821B6780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821B6788;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x821b75e8
	ctx.lr = 0x821B6798;
	sub_821B75E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b6920
	if (!ctx.cr6.eq) goto loc_821B6920;
	// lbz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6920
	if (ctx.cr6.eq) goto loc_821B6920;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x821b6b60
	ctx.lr = 0x821B67C0;
	sub_821B6B60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b6920
	if (!ctx.cr6.eq) goto loc_821B6920;
	// lwz r8,684(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821b6818
	if (!ctx.cr6.eq) goto loc_821B6818;
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B67E4:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x821b692c
	if (ctx.cr6.eq) goto loc_821B692C;
	// lwz r7,588(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821b67e4
	if (ctx.cr6.lt) goto loc_821B67E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B680C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6920
	if (ctx.cr6.eq) goto loc_821B6920;
loc_821B6818:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x821b6884
	if (!ctx.cr6.eq) goto loc_821B6884;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ld r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// ld r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r29.u64, ctx.xer);
	// bge cr6,0x821b6884
	if (!ctx.cr6.lt) goto loc_821B6884;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
loc_821B683C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,656(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// bl 0x821b6b60
	ctx.lr = 0x821B6848;
	sub_821B6B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b6884
	if (!ctx.cr6.eq) goto loc_821B6884;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r6,656(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821b8b68
	ctx.lr = 0x821B686C;
	sub_821B8B68(ctx, base);
	// ld r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// std r9,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r9.u64);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpld cr6,r9,r29
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r29.u64, ctx.xer);
	// blt cr6,0x821b683c
	if (ctx.cr6.lt) goto loc_821B683C;
loc_821B6884:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821b8b68
	ctx.lr = 0x821B689C;
	sub_821B8B68(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r31,664
	ctx.r29.s64 = ctx.r31.s64 + 664;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r8.u64);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ld r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// rldicl r5,r6,49,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 49) & 0x1FFFFFFFFFFFF;
	// rotlwi r30,r5,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// bl 0x823052d8
	ctx.lr = 0x821B68D0;
	sub_823052D8(ctx, base);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b68e4
	if (!ctx.cr6.eq) goto loc_821B68E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
loc_821B68E4:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,644(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821b68f8
	if (!ctx.cr6.eq) goto loc_821B68F8;
	// stb r27,649(r31)
	PPC_STORE_U8(ctx.r31.u32 + 649, ctx.r27.u8);
loc_821B68F8:
	// lwz r10,640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// slw r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// stb r27,648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 648, ctx.r27.u8);
	// bl 0x823051a8
	ctx.lr = 0x821B6920;
	sub_823051A8(ctx, base);
loc_821B6920:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_821B692C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x821b680c
	goto loc_821B680C;
}

__attribute__((alias("__imp__sub_821B6934"))) PPC_WEAK_FUNC(sub_821B6934);
PPC_FUNC_IMPL(__imp__sub_821B6934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6938"))) PPC_WEAK_FUNC(sub_821B6938);
PPC_FUNC_IMPL(__imp__sub_821B6938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 272);
	// bl 0x821bb238
	ctx.lr = 0x821B6954;
	sub_821BB238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b6980
	if (!ctx.cr6.eq) goto loc_821B6980;
	// stb r11,636(r31)
	PPC_STORE_U8(ctx.r31.u32 + 636, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b74a0
	ctx.lr = 0x821B696C;
	sub_821B74A0(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821B6980:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x821b6660
	ctx.lr = 0x821B698C;
	sub_821B6660(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// bl 0x821b7fa8
	ctx.lr = 0x821B69A4;
	sub_821B7FA8(ctx, base);
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// ld r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// std r10,544(r31)
	PPC_STORE_U64(ctx.r31.u32 + 544, ctx.r10.u64);
	// bl 0x821bbc50
	ctx.lr = 0x821B69BC;
	sub_821BBC50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b74a0
	ctx.lr = 0x821B69C4;
	sub_821B74A0(ctx, base);
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// lbz r8,292(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,288(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r4,r31,304
	ctx.r4.s64 = ctx.r31.s64 + 304;
	// ld r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// stb r9,294(r11)
	PPC_STORE_U8(ctx.r11.u32 + 294, ctx.r9.u8);
	// stb r8,292(r11)
	PPC_STORE_U8(ctx.r11.u32 + 292, ctx.r8.u8);
	// stw r7,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r7.u32);
	// std r6,272(r11)
	PPC_STORE_U64(ctx.r11.u32 + 272, ctx.r6.u64);
	// bl 0x8230a9e0
	ctx.lr = 0x821B69F4;
	sub_8230A9E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B6A0C"))) PPC_WEAK_FUNC(sub_821B6A0C);
PPC_FUNC_IMPL(__imp__sub_821B6A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6A10"))) PPC_WEAK_FUNC(sub_821B6A10);
PPC_FUNC_IMPL(__imp__sub_821B6A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821B6A18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,636(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 636);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6abc
	if (ctx.cr6.eq) goto loc_821B6ABC;
	// lwz r11,584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// addi r28,r3,536
	ctx.r28.s64 = ctx.r3.s64 + 536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6abc
	if (ctx.cr6.eq) goto loc_821B6ABC;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821b6aa8
	if (!ctx.cr6.gt) goto loc_821B6AA8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_821B6A58:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B6A6C;
	sub_82247250(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6a84
	if (ctx.cr6.eq) goto loc_821B6A84;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B6A84;
	sub_82080000(ctx, base);
loc_821B6A84:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// std r29,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r29.u64);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b6a58
	if (ctx.cr6.lt) goto loc_821B6A58;
loc_821B6AA8:
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B6ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B6ABC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821b7290
	ctx.lr = 0x821B6AC4;
	sub_821B7290(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6ACC"))) PPC_WEAK_FUNC(sub_821B6ACC);
PPC_FUNC_IMPL(__imp__sub_821B6ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6AD0"))) PPC_WEAK_FUNC(sub_821B6AD0);
PPC_FUNC_IMPL(__imp__sub_821B6AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B6AD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821b72f0
	ctx.lr = 0x821B6AE4;
	sub_821B72F0(ctx, base);
	// lbz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6b58
	if (ctx.cr6.eq) goto loc_821B6B58;
	// addi r31,r31,536
	ctx.r31.s64 = ctx.r31.s64 + 536;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B6B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x821b6b58
	if (!ctx.cr6.gt) goto loc_821B6B58;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821B6B1C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x82082030
	ctx.lr = 0x821B6B38;
	sub_82082030(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r3,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r3.u32);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821b6b1c
	if (ctx.cr6.lt) goto loc_821B6B1C;
loc_821B6B58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6B60"))) PPC_WEAK_FUNC(sub_821B6B60);
PPC_FUNC_IMPL(__imp__sub_821B6B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B6B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,644(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b6b88
	if (!ctx.cr6.eq) goto loc_821B6B88;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821B6B88:
	// addi r29,r31,664
	ctx.r29.s64 = ctx.r31.s64 + 664;
	// rldicl r11,r4,49,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 49) & 0x1FFFFFFFFFFFF;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x823052d8
	ctx.lr = 0x821B6BA0;
	sub_823052D8(ctx, base);
	// lbz r10,649(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 649);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b6bf0
	if (!ctx.cr6.eq) goto loc_821B6BF0;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b6bf0
	if (ctx.cr6.lt) goto loc_821B6BF0;
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// rlwinm r10,r30,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r31,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x823051a8
	ctx.lr = 0x821B6BE4;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821B6BF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x821B6BF8;
	sub_823051A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6C04"))) PPC_WEAK_FUNC(sub_821B6C04);
PPC_FUNC_IMPL(__imp__sub_821B6C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6C08"))) PPC_WEAK_FUNC(sub_821B6C08);
PPC_FUNC_IMPL(__imp__sub_821B6C08) {
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
	// beq cr6,0x821b6d04
	if (ctx.cr6.eq) goto loc_821B6D04;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,8832
	ctx.r31.s64 = ctx.r11.s64 + 8832;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821B6C3C;
	sub_823052D8(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
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
	// bne cr6,0x821b6cf8
	if (!ctx.cr6.eq) goto loc_821B6CF8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b6cf8
	if (ctx.cr6.eq) goto loc_821B6CF8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821b6cf8
	if (!ctx.cr6.lt) goto loc_821B6CF8;
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
	// beq cr6,0x821b6cd0
	if (ctx.cr6.eq) goto loc_821B6CD0;
loc_821B6CA8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6cc8
	if (ctx.cr6.eq) goto loc_821B6CC8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821b6ca8
	if (!ctx.cr6.eq) goto loc_821B6CA8;
	// b 0x821b6cd0
	goto loc_821B6CD0;
loc_821B6CC8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_821B6CD0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b6ce8
	if (!ctx.cr6.eq) goto loc_821B6CE8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821B6CE8:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B6CF4;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_821B6CF8:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B6D04;
	sub_823051A8(ctx, base);
loc_821B6D04:
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

__attribute__((alias("__imp__sub_821B6D1C"))) PPC_WEAK_FUNC(sub_821B6D1C);
PPC_FUNC_IMPL(__imp__sub_821B6D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6D20"))) PPC_WEAK_FUNC(sub_821B6D20);
PPC_FUNC_IMPL(__imp__sub_821B6D20) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,8832
	ctx.r31.s64 = ctx.r11.s64 + 8832;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821B6D48;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6d6c
	if (ctx.cr6.eq) goto loc_821B6D6C;
loc_821B6D54:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b6d9c
	if (!ctx.cr6.eq) goto loc_821B6D9C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b6d54
	if (!ctx.cr6.eq) goto loc_821B6D54;
loc_821B6D6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b6dc4
	if (!ctx.cr6.eq) goto loc_821B6DC4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821b6e20
	ctx.lr = 0x821B6D80;
	sub_821B6E20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b6dc4
	if (!ctx.cr6.eq) goto loc_821B6DC4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B6D94;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b6e08
	goto loc_821B6E08;
loc_821B6D9C:
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
	// b 0x821b6df8
	goto loc_821B6DF8;
loc_821B6DC4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,688
	ctx.r10.s64 = ctx.r11.s64 + 688;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,688(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
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
loc_821B6DF8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B6E04;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821B6E08:
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

__attribute__((alias("__imp__sub_821B6E20"))) PPC_WEAK_FUNC(sub_821B6E20);
PPC_FUNC_IMPL(__imp__sub_821B6E20) {
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
	// mulli r11,r3,704
	ctx.r11.s64 = ctx.r3.s64 * 704;
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
	ctx.lr = 0x821B6E4C;
	sub_82082030(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,8832
	ctx.r11.s64 = ctx.r11.s64 + 8832;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b6e68
	if (ctx.cr6.eq) goto loc_821B6E68;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x821b6e6c
	goto loc_821B6E6C;
loc_821B6E68:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_821B6E6C:
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
	// beq cr6,0x821b6eac
	if (ctx.cr6.eq) goto loc_821B6EAC;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B6EA4:
	// stwu r3,704(r10)
	ea = 704 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b6ea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6EA4;
loc_821B6EAC:
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

__attribute__((alias("__imp__sub_821B6ECC"))) PPC_WEAK_FUNC(sub_821B6ECC);
PPC_FUNC_IMPL(__imp__sub_821B6ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6ED0"))) PPC_WEAK_FUNC(sub_821B6ED0);
PPC_FUNC_IMPL(__imp__sub_821B6ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// divdu r7,r4,r10
	ctx.r7.u64 = ctx.r4.u64 / ctx.r10.u64;
	// divwu r8,r11,r10
	ctx.r8.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf. r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// twllei r10,0
	// tdllei r10,0
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// beq 0x821b6f08
	if (ctx.cr0.eq) goto loc_821B6F08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821B6F08:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821b6f18
	if (!ctx.cr6.gt) goto loc_821B6F18;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_821B6F18:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6f5c
	if (ctx.cr6.eq) goto loc_821B6F5C;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x821b6f5c
	if (!ctx.cr6.lt) goto loc_821B6F5C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r3,r10,32
	ctx.r3.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// blr 
	return;
loc_821B6F5C:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B6F70"))) PPC_WEAK_FUNC(sub_821B6F70);
PPC_FUNC_IMPL(__imp__sub_821B6F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821B6F78;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r9,r11,-26352
	ctx.r9.s64 = ctx.r11.s64 + -26352;
	// std r31,280(r3)
	PPC_STORE_U64(ctx.r3.u32 + 280, ctx.r31.u64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r26,294(r3)
	PPC_STORE_U8(ctx.r3.u32 + 294, ctx.r26.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,272(r3)
	PPC_STORE_U64(ctx.r3.u32 + 272, ctx.r10.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r31.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stb r31,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r31.u8);
	// addi r30,r3,380
	ctx.r30.s64 = ctx.r3.s64 + 380;
	// stb r31,293(r3)
	PPC_STORE_U8(ctx.r3.u32 + 293, ctx.r31.u8);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r31,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r31.u32);
	// clrldi r27,r11,32
	ctx.r27.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r31,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r31.u32);
	// stw r31,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r31.u32);
	// stw r31,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r31.u32);
	// stw r31,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r31.u32);
	// stw r31,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r31.u32);
	// stw r31,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r31.u32);
loc_821B6FE0:
	// stw r26,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82246e60
	ctx.lr = 0x821B6FF8;
	sub_82246E60(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// std r27,52(r30)
	PPC_STORE_U64(ctx.r30.u32 + 52, ctx.r27.u64);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// lwzu r3,40(r30)
	ea = 40 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x822471d8
	ctx.lr = 0x821B701C;
	sub_822471D8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x821b6fe0
	if (!ctx.cr0.lt) goto loc_821B6FE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82246e60
	ctx.lr = 0x821B7038;
	sub_82246E60(ctx, base);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r3,496(r29)
	PPC_STORE_U32(ctx.r29.u32 + 496, ctx.r3.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r26,500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 500, ctx.r26.u32);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// stw r31,504(r29)
	PPC_STORE_U32(ctx.r29.u32 + 504, ctx.r31.u32);
loc_821B7050:
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
	// bne cr6,0x821b7050
	if (!ctx.cr6.eq) goto loc_821B7050;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b72f0
	ctx.lr = 0x821B7070;
	sub_821B72F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B707C"))) PPC_WEAK_FUNC(sub_821B707C);
PPC_FUNC_IMPL(__imp__sub_821B707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7080"))) PPC_WEAK_FUNC(sub_821B7080);
PPC_FUNC_IMPL(__imp__sub_821B7080) {
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
	// bl 0x821b70e0
	ctx.lr = 0x821B70A0;
	sub_821B70E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b70c0
	if (ctx.cr6.eq) goto loc_821B70C0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b70c0
	if (ctx.cr6.eq) goto loc_821B70C0;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B70C0;
	sub_82080000(ctx, base);
loc_821B70C0:
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

__attribute__((alias("__imp__sub_821B70DC"))) PPC_WEAK_FUNC(sub_821B70DC);
PPC_FUNC_IMPL(__imp__sub_821B70DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B70E0"))) PPC_WEAK_FUNC(sub_821B70E0);
PPC_FUNC_IMPL(__imp__sub_821B70E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B70E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-26352
	ctx.r10.s64 = ctx.r11.s64 + -26352;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821b7290
	ctx.lr = 0x821B7100;
	sub_821B7290(ctx, base);
	// lwz r3,496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// bl 0x82246e18
	ctx.lr = 0x821B7108;
	sub_82246E18(ctx, base);
	// addi r11,r30,496
	ctx.r11.s64 = ctx.r30.s64 + 496;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
loc_821B7114:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7130
	if (ctx.cr6.eq) goto loc_821B7130;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B7130;
	sub_82080000(ctx, base);
loc_821B7130:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7148
	if (ctx.cr6.eq) goto loc_821B7148;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B7148;
	sub_82080000(ctx, base);
loc_821B7148:
	// lwz r3,-32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// bl 0x82246e18
	ctx.lr = 0x821B7150;
	sub_82246E18(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x821b7114
	if (!ctx.cr0.lt) goto loc_821B7114;
	// addi r3,r30,304
	ctx.r3.s64 = ctx.r30.s64 + 304;
	// bl 0x821b7e40
	ctx.lr = 0x821B7160;
	sub_821B7E40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7168"))) PPC_WEAK_FUNC(sub_821B7168);
PPC_FUNC_IMPL(__imp__sub_821B7168) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821b6f70
	ctx.lr = 0x821B7188;
	sub_821B6F70(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,-26408
	ctx.r9.s64 = ctx.r11.s64 + -26408;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_821B71C4"))) PPC_WEAK_FUNC(sub_821B71C4);
PPC_FUNC_IMPL(__imp__sub_821B71C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B71C8"))) PPC_WEAK_FUNC(sub_821B71C8);
PPC_FUNC_IMPL(__imp__sub_821B71C8) {
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
	// bl 0x821b7218
	ctx.lr = 0x821B71E8;
	sub_821B7218(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7200
	if (ctx.cr6.eq) goto loc_821B7200;
	// bl 0x821b7aa0
	ctx.lr = 0x821B71FC;
	sub_821B7AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B7200:
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

__attribute__((alias("__imp__sub_821B7218"))) PPC_WEAK_FUNC(sub_821B7218);
PPC_FUNC_IMPL(__imp__sub_821B7218) {
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
	// lbz r10,293(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 293);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-26408
	ctx.r9.s64 = ctx.r11.s64 + -26408;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821b7268
	if (ctx.cr6.eq) goto loc_821B7268;
	// lwz r3,512(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821b7254
	if (ctx.cr6.eq) goto loc_821B7254;
	// bl 0x82246e18
	ctx.lr = 0x821B7254;
	sub_82246E18(ctx, base);
loc_821B7254:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r10,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
	// stb r11,293(r31)
	PPC_STORE_U8(ctx.r31.u32 + 293, ctx.r11.u8);
loc_821B7268:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-26220
	ctx.r10.s64 = ctx.r11.s64 + -26220;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821b70e0
	ctx.lr = 0x821B727C;
	sub_821B70E0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821B7290"))) PPC_WEAK_FUNC(sub_821B7290);
PPC_FUNC_IMPL(__imp__sub_821B7290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821B7298;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,384
	ctx.r31.s64 = ctx.r3.s64 + 384;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821B72AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82247250
	ctx.lr = 0x821B72B8;
	sub_82247250(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b72d0
	if (ctx.cr6.eq) goto loc_821B72D0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B72D0;
	sub_82080000(ctx, base);
loc_821B72D0:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// std r30,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r30.u64);
	// stwu r30,40(r31)
	ea = 40 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r31.u32 = ea;
	// bne 0x821b72ac
	if (!ctx.cr0.eq) goto loc_821B72AC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B72F0"))) PPC_WEAK_FUNC(sub_821B72F0);
PPC_FUNC_IMPL(__imp__sub_821B72F0) {
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
	// addi r30,r3,408
	ctx.r30.s64 = ctx.r3.s64 + 408;
	// li r31,2
	ctx.r31.s64 = 2;
loc_821B730C:
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// bl 0x82082030
	ctx.lr = 0x821B7324;
	sub_82082030(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r3,40(r30)
	ea = 40 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// bne 0x821b730c
	if (!ctx.cr0.eq) goto loc_821B730C;
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

__attribute__((alias("__imp__sub_821B7348"))) PPC_WEAK_FUNC(sub_821B7348);
PPC_FUNC_IMPL(__imp__sub_821B7348) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230ad08
	ctx.lr = 0x821B7374;
	sub_8230AD08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b73bc
	if (ctx.cr6.eq) goto loc_821B73BC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_821B7388:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821b73ac
	if (ctx.cr6.eq) goto loc_821B73AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b7388
	if (ctx.cr6.eq) goto loc_821B7388;
loc_821B73AC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821b73bc
	if (!ctx.cr6.eq) goto loc_821B73BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821b73f0
	goto loc_821B73F0;
loc_821B73BC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_821B73C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821b73e8
	if (ctx.cr6.eq) goto loc_821B73E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b73c4
	if (ctx.cr6.eq) goto loc_821B73C4;
loc_821B73E8:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821B73F0:
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

__attribute__((alias("__imp__sub_821B7408"))) PPC_WEAK_FUNC(sub_821B7408);
PPC_FUNC_IMPL(__imp__sub_821B7408) {
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
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// clrldi r5,r11,32
	ctx.r5.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821B7434;
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

__attribute__((alias("__imp__sub_821B7444"))) PPC_WEAK_FUNC(sub_821B7444);
PPC_FUNC_IMPL(__imp__sub_821B7444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7448"))) PPC_WEAK_FUNC(sub_821B7448);
PPC_FUNC_IMPL(__imp__sub_821B7448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B7450;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233c048
	ctx.lr = 0x821B7470;
	sub_8233C048(ctx, base);
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b748c
	if (!ctx.cr6.eq) goto loc_821B748C;
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230aec0
	ctx.lr = 0x821B748C;
	sub_8230AEC0(ctx, base);
loc_821B748C:
	// rlwinm r4,r30,0,29,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bcbe8
	ctx.lr = 0x821B7498;
	sub_821BCBE8(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B74A0"))) PPC_WEAK_FUNC(sub_821B74A0);
PPC_FUNC_IMPL(__imp__sub_821B74A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B74A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x821b75d4
	if (ctx.cr6.gt) goto loc_821B75D4;
	// ld r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 272);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x821b75d4
	if (ctx.cr6.eq) goto loc_821B75D4;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B74E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b7598
	if (!ctx.cr6.eq) goto loc_821B7598;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b75c8
	if (ctx.cr6.eq) goto loc_821B75C8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r30,r10,32768
	ctx.r30.u64 = ctx.r10.u64 | 32768;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r7,r9,29704
	ctx.r7.s64 = ctx.r9.s64 + 29704;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x8230aaf8
	ctx.lr = 0x821B7524;
	sub_8230AAF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b7554
	if (ctx.cr6.eq) goto loc_821B7554;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// stb r9,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r9.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b754c
	if (ctx.cr6.eq) goto loc_821B754C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_821B754C:
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// b 0x821b755c
	goto loc_821B755C;
loc_821B7554:
	// stb r29,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r29.u8);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
loc_821B755C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B7560:
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
	// bne 0x821b7560
	if (!ctx.cr0.eq) goto loc_821B7560;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821B7588;
	sub_822471D8(ctx, base);
	// stw r29,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821B7598:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b75c8
	if (ctx.cr6.eq) goto loc_821B75C8;
loc_821B75A0:
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
	// bne 0x821b75a0
	if (!ctx.cr0.eq) goto loc_821B75A0;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821B75C8;
	sub_822471D8(ctx, base);
loc_821B75C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821B75D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B75E8"))) PPC_WEAK_FUNC(sub_821B75E8);
PPC_FUNC_IMPL(__imp__sub_821B75E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821B75F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 292);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b761c
	if (ctx.cr6.eq) goto loc_821B761C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// bl 0x821b6ed0
	ctx.lr = 0x821B7614;
	sub_821B6ED0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x821b7620
	goto loc_821B7620;
loc_821B761C:
	// rldicr r29,r5,0,48
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFF8000;
loc_821B7620:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b7938
	ctx.lr = 0x821B7630;
	sub_821B7938(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B7644;
	sub_82247250(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b7690
	if (!ctx.cr6.eq) goto loc_821B7690;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_821B7654:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b7654
	if (!ctx.cr0.eq) goto loc_821B7654;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82247218
	ctx.lr = 0x821B7678;
	sub_82247218(ctx, base);
	// lwz r9,500(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r8.u32);
	// b 0x821b76dc
	goto loc_821B76DC;
loc_821B7690:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b76d8
	if (ctx.cr6.eq) goto loc_821B76D8;
	// std r29,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// bl 0x8233e4e0
	ctx.lr = 0x821B76C4;
	sub_8233E4E0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_821B76D8:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821B76DC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b7760
	if (!ctx.cr6.eq) goto loc_821B7760;
	// lis r11,0
	ctx.r11.s64 = 0;
	// std r29,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r29.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821B771C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b7750
	if (!ctx.cr6.eq) goto loc_821B7750;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x821b7754
	if (!ctx.cr6.gt) goto loc_821B7754;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_821B7750:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821B7754:
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_821B7760:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7774"))) PPC_WEAK_FUNC(sub_821B7774);
PPC_FUNC_IMPL(__imp__sub_821B7774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7778"))) PPC_WEAK_FUNC(sub_821B7778);
PPC_FUNC_IMPL(__imp__sub_821B7778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821B7780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821b7938
	ctx.lr = 0x821B7798;
	sub_821B7938(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B77A8;
	sub_82247250(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82247218
	ctx.lr = 0x821B77B0;
	sub_82247218(ctx, base);
	// lwz r11,500(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 500);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,500(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 500);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 500, ctx.r10.u32);
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// ld r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// std r8,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r8.u64);
	// lwz r7,24(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r5,28(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8233e4e0
	ctx.lr = 0x821B77F0;
	sub_8233E4E0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B7810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821B781C;
	sub_822471D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7828"))) PPC_WEAK_FUNC(sub_821B7828);
PPC_FUNC_IMPL(__imp__sub_821B7828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B7830;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b7878
	if (!ctx.cr6.eq) goto loc_821B7878;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x821b7860
	if (!ctx.cr6.lt) goto loc_821B7860;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_821B7860:
	// lwz r4,32(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x821B786C;
	sub_8233E4E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821B7878:
	// ld r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// addi r6,r31,304
	ctx.r6.s64 = ctx.r31.s64 + 304;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r9,308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// divdu r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 / ctx.r9.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// tdllei r9,0
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821b78c4
	if (!ctx.cr6.eq) goto loc_821B78C4;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subfic r7,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r7.s64 = 1 - ctx.r10.s64;
	// lwz r9,20(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_821B78C4:
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b78d8
	if (!ctx.cr6.eq) goto loc_821B78D8;
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x821b78ec
	goto loc_821B78EC;
loc_821B78D8:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// subf r30,r8,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_821B78EC:
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,32(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// bl 0x8230a948
	ctx.lr = 0x821B78FC;
	sub_8230A948(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b7920
	if (ctx.cr6.eq) goto loc_821B7920;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821B7920:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x821b2720
	ctx.lr = 0x821B792C;
	sub_821B2720(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7938"))) PPC_WEAK_FUNC(sub_821B7938);
PPC_FUNC_IMPL(__imp__sub_821B7938) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r3,432
	ctx.r11.s64 = ctx.r3.s64 + 432;
loc_821B794C:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r10,r5
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r5.u64, ctx.xer);
	// bgt cr6,0x821b796c
	if (ctx.cr6.gt) goto loc_821B796C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r5,r10
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r10.u64, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x821b7970
	if (ctx.cr6.lt) goto loc_821B7970;
loc_821B796C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821B7970:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b79b8
	if (!ctx.cr6.eq) goto loc_821B79B8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b7998
	if (ctx.cr6.eq) goto loc_821B7998;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821b79a0
	if (!ctx.cr6.gt) goto loc_821B79A0;
loc_821B7998:
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_821B79A0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x821b794c
	if (ctx.cr6.lt) goto loc_821B794C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821B79B8:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,416
	ctx.r11.s64 = ctx.r11.s64 + 416;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B79D8"))) PPC_WEAK_FUNC(sub_821B79D8);
PPC_FUNC_IMPL(__imp__sub_821B79D8) {
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
	// lbz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 292);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7a68
	if (ctx.cr6.eq) goto loc_821B7A68;
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// bl 0x821b6ed0
	ctx.lr = 0x821B7A00;
	sub_821B6ED0(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// tdllei r10,0
	// divdu r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 / ctx.r10.u64;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b7a3c
	if (!ctx.cr6.eq) goto loc_821B7A3C;
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821B7A3C:
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821B7A68:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ld r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// ori r3,r10,32768
	ctx.r3.u64 = ctx.r10.u64 | 32768;
	// add r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 + ctx.r3.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x821b7a8c
	if (ctx.cr6.lt) goto loc_821B7A8C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_821B7A8C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821B7AA0"))) PPC_WEAK_FUNC(sub_821B7AA0);
PPC_FUNC_IMPL(__imp__sub_821B7AA0) {
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
	// beq cr6,0x821b7b9c
	if (ctx.cr6.eq) goto loc_821B7B9C;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,8888
	ctx.r31.s64 = ctx.r11.s64 + 8888;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821B7AD4;
	sub_823052D8(ctx, base);
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
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
	// bne cr6,0x821b7b90
	if (!ctx.cr6.eq) goto loc_821B7B90;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b7b90
	if (ctx.cr6.eq) goto loc_821B7B90;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821b7b90
	if (!ctx.cr6.lt) goto loc_821B7B90;
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
	// beq cr6,0x821b7b68
	if (ctx.cr6.eq) goto loc_821B7B68;
loc_821B7B40:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b7b60
	if (ctx.cr6.eq) goto loc_821B7B60;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821b7b40
	if (!ctx.cr6.eq) goto loc_821B7B40;
	// b 0x821b7b68
	goto loc_821B7B68;
loc_821B7B60:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_821B7B68:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b7b80
	if (!ctx.cr6.eq) goto loc_821B7B80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821B7B80:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B7B8C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_821B7B90:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B7B9C;
	sub_823051A8(ctx, base);
loc_821B7B9C:
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

__attribute__((alias("__imp__sub_821B7BB4"))) PPC_WEAK_FUNC(sub_821B7BB4);
PPC_FUNC_IMPL(__imp__sub_821B7BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7BB8"))) PPC_WEAK_FUNC(sub_821B7BB8);
PPC_FUNC_IMPL(__imp__sub_821B7BB8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,8888
	ctx.r31.s64 = ctx.r11.s64 + 8888;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821B7BE0;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7c04
	if (ctx.cr6.eq) goto loc_821B7C04;
loc_821B7BEC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b7c34
	if (!ctx.cr6.eq) goto loc_821B7C34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b7bec
	if (!ctx.cr6.eq) goto loc_821B7BEC;
loc_821B7C04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b7c5c
	if (!ctx.cr6.eq) goto loc_821B7C5C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821b7cb8
	ctx.lr = 0x821B7C18;
	sub_821B7CB8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b7c5c
	if (!ctx.cr6.eq) goto loc_821B7C5C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B7C2C;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b7ca0
	goto loc_821B7CA0;
loc_821B7C34:
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
	// b 0x821b7c90
	goto loc_821B7C90;
loc_821B7C5C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,536
	ctx.r10.s64 = ctx.r11.s64 + 536;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,536(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
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
loc_821B7C90:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821B7C9C;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821B7CA0:
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

__attribute__((alias("__imp__sub_821B7CB8"))) PPC_WEAK_FUNC(sub_821B7CB8);
PPC_FUNC_IMPL(__imp__sub_821B7CB8) {
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
	// mulli r11,r3,544
	ctx.r11.s64 = ctx.r3.s64 * 544;
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
	ctx.lr = 0x821B7CE4;
	sub_82082030(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,8888
	ctx.r11.s64 = ctx.r11.s64 + 8888;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b7d00
	if (ctx.cr6.eq) goto loc_821B7D00;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x821b7d04
	goto loc_821B7D04;
loc_821B7D00:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_821B7D04:
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
	// beq cr6,0x821b7d44
	if (ctx.cr6.eq) goto loc_821B7D44;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B7D3C:
	// stwu r3,544(r10)
	ea = 544 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b7d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B7D3C;
loc_821B7D44:
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

__attribute__((alias("__imp__sub_821B7D64"))) PPC_WEAK_FUNC(sub_821B7D64);
PPC_FUNC_IMPL(__imp__sub_821B7D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7D68"))) PPC_WEAK_FUNC(sub_821B7D68);
PPC_FUNC_IMPL(__imp__sub_821B7D68) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82246e60
	ctx.lr = 0x821B7D98;
	sub_82246E60(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x822471d8
	ctx.lr = 0x821B7DC8;
	sub_822471D8(ctx, base);
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

__attribute__((alias("__imp__sub_821B7DE0"))) PPC_WEAK_FUNC(sub_821B7DE0);
PPC_FUNC_IMPL(__imp__sub_821B7DE0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7e0c
	if (ctx.cr6.eq) goto loc_821B7E0C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B7E0C;
	sub_82080000(ctx, base);
loc_821B7E0C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7e24
	if (ctx.cr6.eq) goto loc_821B7E24;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B7E24;
	sub_82080000(ctx, base);
loc_821B7E24:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82246e18
	ctx.lr = 0x821B7E2C;
	sub_82246E18(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821B7E40"))) PPC_WEAK_FUNC(sub_821B7E40);
PPC_FUNC_IMPL(__imp__sub_821B7E40) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7e64
	if (ctx.cr6.eq) goto loc_821B7E64;
	// bl 0x8230a940
	ctx.lr = 0x821B7E64;
	sub_8230A940(ctx, base);
loc_821B7E64:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7e7c
	if (ctx.cr6.eq) goto loc_821B7E7C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B7E7C;
	sub_82080000(ctx, base);
loc_821B7E7C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7e94
	if (ctx.cr6.eq) goto loc_821B7E94;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B7E94;
	sub_82080000(ctx, base);
loc_821B7E94:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7eac
	if (ctx.cr6.eq) goto loc_821B7EAC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B7EAC;
	sub_82080000(ctx, base);
loc_821B7EAC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821B7EC0"))) PPC_WEAK_FUNC(sub_821B7EC0);
PPC_FUNC_IMPL(__imp__sub_821B7EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-26316
	ctx.r9.s64 = ctx.r10.s64 + -26316;
	// li r8,1
	ctx.r8.s64 = 1;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// sth r11,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r11.u16);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r11.u16);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// bne cr6,0x821b7f2c
	if (!ctx.cr6.eq) goto loc_821B7F2C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_821B7F2C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7F3C"))) PPC_WEAK_FUNC(sub_821B7F3C);
PPC_FUNC_IMPL(__imp__sub_821B7F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7F40"))) PPC_WEAK_FUNC(sub_821B7F40);
PPC_FUNC_IMPL(__imp__sub_821B7F40) {
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
	// addi r10,r11,-26316
	ctx.r10.s64 = ctx.r11.s64 + -26316;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821b8348
	ctx.lr = 0x821B7F6C;
	sub_821B8348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823073b0
	ctx.lr = 0x821B7F74;
	sub_823073B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b7f8c
	if (ctx.cr6.eq) goto loc_821B7F8C;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B7F8C;
	sub_82080000(ctx, base);
loc_821B7F8C:
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

__attribute__((alias("__imp__sub_821B7FA8"))) PPC_WEAK_FUNC(sub_821B7FA8);
PPC_FUNC_IMPL(__imp__sub_821B7FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x821B7FB0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r22,-1
	ctx.r22.s64 = -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821b7fe8
	if (!ctx.cr6.gt) goto loc_821B7FE8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_821B7FE8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821B7FF8;
	sub_82082030(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// ble cr6,0x821b806c
	if (!ctx.cr6.gt) goto loc_821B806C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// ori r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 32768;
loc_821B801C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82082030
	ctx.lr = 0x821B8030;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8040
	if (ctx.cr6.eq) goto loc_821B8040;
	// bl 0x821b7d68
	ctx.lr = 0x821B803C;
	sub_821B7D68(ctx, base);
	// b 0x821b8044
	goto loc_821B8044;
loc_821B8040:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_821B8044:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r28,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r28.u32);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821b801c
	if (ctx.cr6.lt) goto loc_821B801C;
loc_821B806C:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x821b80b8
	if (!ctx.cr6.eq) goto loc_821B80B8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-26672
	ctx.r4.s64 = ctx.r11.s64 + -26672;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8233dc60
	ctx.lr = 0x821B8088;
	sub_8233DC60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b80b0
	if (ctx.cr6.eq) goto loc_821B80B0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-26284
	ctx.r4.s64 = ctx.r11.s64 + -26284;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8233dc60
	ctx.lr = 0x821B80A4;
	sub_8233DC60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821b80b4
	if (!ctx.cr6.eq) goto loc_821B80B4;
loc_821B80B0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_821B80B4:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_821B80B8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821babc8
	ctx.lr = 0x821B80C8;
	sub_821BABC8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lbz r9,293(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 293);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r23,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r23.u32);
	// beq cr6,0x821b820c
	if (ctx.cr6.eq) goto loc_821B820C;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82247218
	ctx.lr = 0x821B80FC;
	sub_82247218(ctx, base);
	// lis r30,-32197
	ctx.r30.s64 = -2110062592;
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821B8108;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b8114
	if (!ctx.cr6.eq) goto loc_821B8114;
	// bl 0x821b3000
	ctx.lr = 0x821B8114;
	sub_821B3000(ctx, base);
loc_821B8114:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x821b8138
	if (!ctx.cr6.lt) goto loc_821B8138;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r23,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r23.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_821B8138:
	// bl 0x821ba6d8
	ctx.lr = 0x821B813C;
	sub_821BA6D8(ctx, base);
	// lwz r11,-27096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82388734
	ctx.lr = 0x821B814C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b8158
	if (!ctx.cr6.eq) goto loc_821B8158;
	// bl 0x821b3000
	ctx.lr = 0x821B8158;
	sub_821B3000(ctx, base);
loc_821B8158:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b816c
	if (ctx.cr6.eq) goto loc_821B816C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821B816C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b8194
	if (ctx.cr6.eq) goto loc_821B8194;
	// clrldi r8,r25,32
	ctx.r8.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b98f0
	ctx.lr = 0x821B8190;
	sub_821B98F0(ctx, base);
	// b 0x821b8198
	goto loc_821B8198;
loc_821B8194:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_821B8198:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r4,r24,24
	ctx.r4.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stwx r10,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r9,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// bne cr6,0x821b81f4
	if (!ctx.cr6.eq) goto loc_821B81F4;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
loc_821B81D8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b81d8
	if (!ctx.cr0.eq) goto loc_821B81D8;
loc_821B81F4:
	// bl 0x821bae90
	ctx.lr = 0x821B81F8;
	sub_821BAE90(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_821B820C:
	// rlwinm r11,r25,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b822c
	if (ctx.cr6.eq) goto loc_821B822C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8e48
	ctx.lr = 0x821B822C;
	sub_821B8E48(ctx, base);
loc_821B822C:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8314
	if (ctx.cr6.eq) goto loc_821B8314;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821b8314
	if (ctx.cr6.eq) goto loc_821B8314;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B824C;
	sub_82247250(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821b8308
	if (ctx.cr6.eq) goto loc_821B8308;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821b82ec
	if (!ctx.cr6.gt) goto loc_821B82EC;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_821B8284:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
loc_821B828C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b828c
	if (!ctx.cr0.eq) goto loc_821B828C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b82d8
	if (!ctx.cr6.eq) goto loc_821B82D8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b82d8
	if (ctx.cr6.eq) goto loc_821B82D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7de0
	ctx.lr = 0x821B82CC;
	sub_821B7DE0(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B82D8;
	sub_82080000(ctx, base);
loc_821B82D8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b8284
	if (ctx.cr6.lt) goto loc_821B8284;
loc_821B82EC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8304
	if (ctx.cr6.eq) goto loc_821B8304;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B8304;
	sub_82080000(ctx, base);
loc_821B8304:
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
loc_821B8308:
	// lbz r3,293(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 293);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_821B8314:
	// lbz r11,292(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8334
	if (ctx.cr6.eq) goto loc_821B8334;
	// lwz r11,328(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 328);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_821B8334:
	// ld r11,272(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 272);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B8348"))) PPC_WEAK_FUNC(sub_821B8348);
PPC_FUNC_IMPL(__imp__sub_821B8348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821B8350;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8378
	if (ctx.cr6.eq) goto loc_821B8378;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B8378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B8378:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b83a4
	if (ctx.cr6.eq) goto loc_821B83A4;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8398
	if (ctx.cr6.eq) goto loc_821B8398;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x821b839c
	goto loc_821B839C;
loc_821B8398:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_821B839C:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_821B83A4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8418
	if (ctx.cr6.eq) goto loc_821B8418;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821b83dc
	if (ctx.cr6.eq) goto loc_821B83DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b83dc
	if (ctx.cr6.eq) goto loc_821B83DC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B83DC;
	sub_82247250(ctx, base);
loc_821B83DC:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_821B83E0:
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
	// bne 0x821b83e0
	if (!ctx.cr0.eq) goto loc_821B83E0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b8418
	if (!ctx.cr6.eq) goto loc_821B8418;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8418
	if (ctx.cr6.eq) goto loc_821B8418;
	// bl 0x821b8530
	ctx.lr = 0x821B8418;
	sub_821B8530(ctx, base);
loc_821B8418:
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9118
	ctx.lr = 0x821B8424;
	sub_821B9118(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b84ac
	if (ctx.cr6.eq) goto loc_821B84AC;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821b84ac
	if (!ctx.cr6.gt) goto loc_821B84AC;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_821B8444:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
loc_821B844C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b844c
	if (!ctx.cr0.eq) goto loc_821B844C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b8498
	if (!ctx.cr6.eq) goto loc_821B8498;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b8498
	if (ctx.cr6.eq) goto loc_821B8498;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7de0
	ctx.lr = 0x821B848C;
	sub_821B7DE0(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B8498;
	sub_82080000(ctx, base);
loc_821B8498:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b8444
	if (ctx.cr6.lt) goto loc_821B8444;
loc_821B84AC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b84c4
	if (ctx.cr6.eq) goto loc_821B84C4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B84C4;
	sub_82080000(ctx, base);
loc_821B84C4:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b850c
	if (ctx.cr6.eq) goto loc_821B850C;
loc_821B84D4:
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
	// bne 0x821b84d4
	if (!ctx.cr0.eq) goto loc_821B84D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b850c
	if (!ctx.cr6.eq) goto loc_821B850C;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b850c
	if (ctx.cr6.eq) goto loc_821B850C;
	// bl 0x821b8530
	ctx.lr = 0x821B850C;
	sub_821B8530(ctx, base);
loc_821B850C:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8520
	if (ctx.cr6.eq) goto loc_821B8520;
	// bl 0x821baf68
	ctx.lr = 0x821B8520;
	sub_821BAF68(ctx, base);
loc_821B8520:
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B8530"))) PPC_WEAK_FUNC(sub_821B8530);
PPC_FUNC_IMPL(__imp__sub_821B8530) {
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
	// bl 0x821b9a48
	ctx.lr = 0x821B8548;
	sub_821B9A48(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821baf68
	ctx.lr = 0x821B8550;
	sub_821BAF68(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b8568
	if (ctx.cr6.eq) goto loc_821B8568;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x821B8568;
	sub_82246E18(ctx, base);
loc_821B8568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ba5c0
	ctx.lr = 0x821B8570;
	sub_821BA5C0(ctx, base);
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

__attribute__((alias("__imp__sub_821B8588"))) PPC_WEAK_FUNC(sub_821B8588);
PPC_FUNC_IMPL(__imp__sub_821B8588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821B8590;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r26,0
	ctx.r26.s64 = 0;
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 292);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b85c8
	if (ctx.cr6.eq) goto loc_821B85C8;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// b 0x821b85cc
	goto loc_821B85CC;
loc_821B85C8:
	// ld r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
loc_821B85CC:
	// cmpld cr6,r29,r11
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x821b87b0
	if (!ctx.cr6.lt) goto loc_821B87B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8db0
	ctx.lr = 0x821B85E4;
	sub_821B8DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b86b4
	if (ctx.cr6.eq) goto loc_821B86B4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// ld r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821b79d8
	ctx.lr = 0x821B8618;
	sub_821B79D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821b8e48
	ctx.lr = 0x821B862C;
	sub_821B8E48(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B8638;
	sub_82247250(ctx, base);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,504(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 504);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821b866c
	if (ctx.cr6.eq) goto loc_821B866C;
loc_821B865C:
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_821B866C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// ld r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// subf r3,r4,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r4.s64;
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_821B86B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8ff0
	ctx.lr = 0x821B86C0;
	sub_821B8FF0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B86D4;
	sub_82247250(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82247218
	ctx.lr = 0x821B86F0;
	sub_82247218(ctx, base);
	// bl 0x821b9880
	ctx.lr = 0x821B86F4;
	sub_821B9880(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8718
	if (ctx.cr6.eq) goto loc_821B8718;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821b98f0
	ctx.lr = 0x821B8714;
	sub_821B98F0(ctx, base);
	// b 0x821b871c
	goto loc_821B871C;
loc_821B8718:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821B871C:
	// bl 0x821bae90
	ctx.lr = 0x821B8720;
	sub_821BAE90(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8e48
	ctx.lr = 0x821B8734;
	sub_821B8E48(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b87b0
	if (ctx.cr6.eq) goto loc_821B87B0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B874C;
	sub_82247250(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821b865c
	if (!ctx.cr6.eq) goto loc_821B865C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// ld r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// subf r3,r5,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r5.s64;
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_821B87B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B87B8"))) PPC_WEAK_FUNC(sub_821B87B8);
PPC_FUNC_IMPL(__imp__sub_821B87B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821B87C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r3,68
	ctx.r29.s64 = ctx.r3.s64 + 68;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b884c
	if (!ctx.cr6.eq) goto loc_821B884C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821b8db0
	ctx.lr = 0x821B87E8;
	sub_821B8DB0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B87F8;
	sub_82247250(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b8824
	if (!ctx.cr6.eq) goto loc_821B8824;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x82082030
	ctx.lr = 0x821B881C;
	sub_82082030(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
loc_821B8824:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// std r28,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r28.u64);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821B884C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r8,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r8.u64);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82247218
	ctx.lr = 0x821B886C;
	sub_82247218(ctx, base);
	// bl 0x821b9880
	ctx.lr = 0x821B8870;
	sub_821B9880(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8898
	if (ctx.cr6.eq) goto loc_821B8898;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ld r8,16(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// bl 0x821b98f0
	ctx.lr = 0x821B8894;
	sub_821B98F0(ctx, base);
	// b 0x821b889c
	goto loc_821B889C;
loc_821B8898:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821B889C:
	// bl 0x821bae90
	ctx.lr = 0x821B88A0;
	sub_821BAE90(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8db0
	ctx.lr = 0x821B88B4;
	sub_821B8DB0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x821b88e0
	if (!ctx.cr6.eq) goto loc_821B88E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b88e0
	if (ctx.cr6.eq) goto loc_821B88E0;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821B88E0:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B88EC;
	sub_82247250(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r9,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r9.u64);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821b893c
	if (!ctx.cr6.eq) goto loc_821B893C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82082030
	ctx.lr = 0x821B8938;
	sub_82082030(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
loc_821B893C:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B8968"))) PPC_WEAK_FUNC(sub_821B8968);
PPC_FUNC_IMPL(__imp__sub_821B8968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821B8970;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lbz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 292);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b89a0
	if (ctx.cr6.eq) goto loc_821B89A0;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// b 0x821b89a4
	goto loc_821B89A4;
loc_821B89A0:
	// ld r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
loc_821B89A4:
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x821b89c0
	if (!ctx.cr6.gt) goto loc_821B89C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821B89C0:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b89dc
	if (ctx.cr6.eq) goto loc_821B89DC;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b8b1c
	if (ctx.cr6.eq) goto loc_821B8B1C;
loc_821B89DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b8db0
	ctx.lr = 0x821B89F4;
	sub_821B8DB0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B8A08;
	sub_82247250(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b8a84
	if (ctx.cr6.eq) goto loc_821B8A84;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// rotlwi r10,r28,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// subf r31,r11,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x821b8a70
	if (!ctx.cr6.gt) goto loc_821B8A70;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821B8A48;
	sub_8233E4E0(ctx, base);
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r5,r31,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r31.s64;
	// add r4,r31,r26
	ctx.r4.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b8968
	ctx.lr = 0x821B8A64;
	sub_821B8968(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821B8A70:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821B8A78;
	sub_8233E4E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821B8A84:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82247218
	ctx.lr = 0x821B8A8C;
	sub_82247218(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8ad0
	if (ctx.cr6.eq) goto loc_821B8AD0;
loc_821B8A98:
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
	// bne 0x821b8a98
	if (!ctx.cr0.eq) goto loc_821B8A98;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b8ad0
	if (!ctx.cr6.eq) goto loc_821B8AD0;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8ad0
	if (ctx.cr6.eq) goto loc_821B8AD0;
	// bl 0x821b8530
	ctx.lr = 0x821B8AD0;
	sub_821B8530(ctx, base);
loc_821B8AD0:
	// bl 0x821b9880
	ctx.lr = 0x821B8AD4;
	sub_821B9880(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8af8
	if (ctx.cr6.eq) goto loc_821B8AF8;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821b98f0
	ctx.lr = 0x821B8AF4;
	sub_821B98F0(ctx, base);
	// b 0x821b8afc
	goto loc_821B8AFC;
loc_821B8AF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B8AFC:
	// stw r3,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
loc_821B8B00:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b8b00
	if (!ctx.cr0.eq) goto loc_821B8B00;
loc_821B8B1C:
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// clrlwi r9,r25,24
	ctx.r9.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r26.u32);
	// stwx r27,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r4.u32);
	// bne cr6,0x821b8b5c
	if (!ctx.cr6.eq) goto loc_821B8B5C;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x821bae90
	ctx.lr = 0x821B8B5C;
	sub_821BAE90(ctx, base);
loc_821B8B5C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B8B68"))) PPC_WEAK_FUNC(sub_821B8B68);
PPC_FUNC_IMPL(__imp__sub_821B8B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821B8B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x821b8db0
	ctx.lr = 0x821B8B98;
	sub_821B8DB0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B8BA8;
	sub_82247250(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82247218
	ctx.lr = 0x821B8BB0;
	sub_82247218(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r9.u32);
	// std r28,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r28.u64);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b8bd8
	if (ctx.cr6.lt) goto loc_821B8BD8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_821B8BD8:
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b8c00
	if (!ctx.cr6.eq) goto loc_821B8C00;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x82082030
	ctx.lr = 0x821B8BFC;
	sub_82082030(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_821B8C00:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821B8C10;
	sub_8233E4E0(ctx, base);
	// bl 0x821b9880
	ctx.lr = 0x821B8C14;
	sub_821B9880(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8c44
	if (ctx.cr6.eq) goto loc_821B8C44;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x821b98f0
	ctx.lr = 0x821B8C34;
	sub_821B98F0(ctx, base);
	// bl 0x821bae90
	ctx.lr = 0x821B8C38;
	sub_821BAE90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_821B8C44:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bae90
	ctx.lr = 0x821B8C4C;
	sub_821BAE90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B8C58"))) PPC_WEAK_FUNC(sub_821B8C58);
PPC_FUNC_IMPL(__imp__sub_821B8C58) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r4,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r4.u64);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lbz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 292);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b8c90
	if (ctx.cr6.eq) goto loc_821B8C90;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// b 0x821b8c94
	goto loc_821B8C94;
loc_821B8C90:
	// ld r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
loc_821B8C94:
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x821b8ca8
	if (!ctx.cr6.lt) goto loc_821B8CA8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821b8e48
	ctx.lr = 0x821B8CA8;
	sub_821B8E48(ctx, base);
loc_821B8CA8:
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

__attribute__((alias("__imp__sub_821B8CBC"))) PPC_WEAK_FUNC(sub_821B8CBC);
PPC_FUNC_IMPL(__imp__sub_821B8CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8CC0"))) PPC_WEAK_FUNC(sub_821B8CC0);
PPC_FUNC_IMPL(__imp__sub_821B8CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821B8CC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_821B8CDC:
	// lwz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821B8CE8:
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// cmpld cr6,r10,r30
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r30.u64, ctx.xer);
	// bgt cr6,0x821b8d0c
	if (ctx.cr6.gt) goto loc_821B8D0C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x821b8d10
	if (ctx.cr6.lt) goto loc_821B8D10;
loc_821B8D0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B8D10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b8d34
	if (!ctx.cr6.eq) goto loc_821B8D34;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b8ce8
	if (ctx.cr6.lt) goto loc_821B8CE8;
	// b 0x821b8d88
	goto loc_821B8D88;
loc_821B8D34:
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821b8d54
	if (!ctx.cr6.eq) goto loc_821B8D54;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B8D54;
	sub_82247250(ctx, base);
loc_821B8D54:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// rotlwi r9,r30,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// ld r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r9,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r9.s64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821b8da0
	if (!ctx.cr6.gt) goto loc_821B8DA0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf r27,r11,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_821B8D88:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b8cdc
	if (!ctx.cr6.eq) goto loc_821B8CDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_821B8DA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B8DAC"))) PPC_WEAK_FUNC(sub_821B8DAC);
PPC_FUNC_IMPL(__imp__sub_821B8DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8DB0"))) PPC_WEAK_FUNC(sub_821B8DB0);
PPC_FUNC_IMPL(__imp__sub_821B8DB0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
loc_821B8DC0:
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// cmpld cr6,r11,r5
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r5.u64, ctx.xer);
	// bgt cr6,0x821b8de8
	if (ctx.cr6.gt) goto loc_821B8DE8;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r5,r11
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r11.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x821b8dec
	if (ctx.cr6.lt) goto loc_821B8DEC;
loc_821B8DE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B8DEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b8e34
	if (!ctx.cr6.eq) goto loc_821B8E34;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8e14
	if (ctx.cr6.eq) goto loc_821B8E14;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821b8e18
	if (!ctx.cr6.gt) goto loc_821B8E18;
loc_821B8E14:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_821B8E18:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b8dc0
	if (ctx.cr6.lt) goto loc_821B8DC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821B8E34:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B8E48"))) PPC_WEAK_FUNC(sub_821B8E48);
PPC_FUNC_IMPL(__imp__sub_821B8E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821B8E50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 292);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b8e74
	if (ctx.cr6.eq) goto loc_821B8E74;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// b 0x821b8e78
	goto loc_821B8E78;
loc_821B8E74:
	// ld r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
loc_821B8E78:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x821b8e90
	if (ctx.cr6.eq) goto loc_821B8E90;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x821b8fe4
	if (!ctx.cr6.lt) goto loc_821B8FE4;
loc_821B8E90:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x821b8fe4
	if (!ctx.cr6.gt) goto loc_821B8FE4;
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x821b91a8
	ctx.lr = 0x821B8EAC;
	sub_821B91A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8db0
	ctx.lr = 0x821B8EC8;
	sub_821B8DB0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b8fe4
	if (!ctx.cr6.eq) goto loc_821B8FE4;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821b8ff0
	ctx.lr = 0x821B8EE4;
	sub_821B8FF0(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8f24
	if (ctx.cr6.eq) goto loc_821B8F24;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8f24
	if (ctx.cr6.eq) goto loc_821B8F24;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// bl 0x821b8db0
	ctx.lr = 0x821B8F20;
	sub_821B8DB0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B8F24:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B8F30;
	sub_82247250(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82247218
	ctx.lr = 0x821B8F38;
	sub_82247218(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// beq cr6,0x821b8f90
	if (ctx.cr6.eq) goto loc_821B8F90;
loc_821B8F58:
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
	// bne 0x821b8f58
	if (!ctx.cr0.eq) goto loc_821B8F58;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b8f90
	if (!ctx.cr6.eq) goto loc_821B8F90;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8f90
	if (ctx.cr6.eq) goto loc_821B8F90;
	// bl 0x821b8530
	ctx.lr = 0x821B8F90;
	sub_821B8530(ctx, base);
loc_821B8F90:
	// bl 0x821b9880
	ctx.lr = 0x821B8F94;
	sub_821B9880(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8fb8
	if (ctx.cr6.eq) goto loc_821B8FB8;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821b98f0
	ctx.lr = 0x821B8FB4;
	sub_821B98F0(ctx, base);
	// b 0x821b8fbc
	goto loc_821B8FBC;
loc_821B8FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B8FBC:
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
loc_821B8FC0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821b8fc0
	if (!ctx.cr0.eq) goto loc_821B8FC0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x821bae90
	ctx.lr = 0x821B8FE4;
	sub_821BAE90(ctx, base);
loc_821B8FE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B8FEC"))) PPC_WEAK_FUNC(sub_821B8FEC);
PPC_FUNC_IMPL(__imp__sub_821B8FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8FF0"))) PPC_WEAK_FUNC(sub_821B8FF0);
PPC_FUNC_IMPL(__imp__sub_821B8FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821B8FF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,60(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b9110
	if (ctx.cr6.eq) goto loc_821B9110;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x821b9110
	if (!ctx.cr6.gt) goto loc_821B9110;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b9034
	if (ctx.cr6.eq) goto loc_821B9034;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821b90b8
	if (!ctx.cr6.eq) goto loc_821B90B8;
loc_821B9034:
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x821B9048;
	sub_823052D8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x823052d8
	ctx.lr = 0x821B9064;
	sub_823052D8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b907c
	if (ctx.cr6.eq) goto loc_821B907C;
	// stw r27,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r27.u32);
loc_821B907C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x821B9084;
	sub_823051A8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b90ac
	if (ctx.cr6.eq) goto loc_821B90AC;
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b90ac
	if (ctx.cr6.eq) goto loc_821B90AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B90AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B90AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x821B90B4;
	sub_823051A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821B90B8:
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
loc_821B90BC:
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
	// bne 0x821b90bc
	if (!ctx.cr0.eq) goto loc_821B90BC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b90e8
	if (ctx.cr6.eq) goto loc_821B90E8;
	// stw r27,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r27.u32);
loc_821B90E8:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9110
	if (ctx.cr6.eq) goto loc_821B9110;
loc_821B90F4:
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
	// bne 0x821b90f4
	if (!ctx.cr0.eq) goto loc_821B90F4;
loc_821B9110:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B9118"))) PPC_WEAK_FUNC(sub_821B9118);
PPC_FUNC_IMPL(__imp__sub_821B9118) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821b8ff0
	ctx.lr = 0x821B9134;
	sub_821B8FF0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9178
	if (ctx.cr6.eq) goto loc_821B9178;
loc_821B9140:
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
	// bne 0x821b9140
	if (!ctx.cr0.eq) goto loc_821B9140;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b9178
	if (!ctx.cr6.eq) goto loc_821B9178;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b9178
	if (ctx.cr6.eq) goto loc_821B9178;
	// bl 0x821b8530
	ctx.lr = 0x821B9178;
	sub_821B8530(ctx, base);
loc_821B9178:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821B9194"))) PPC_WEAK_FUNC(sub_821B9194);
PPC_FUNC_IMPL(__imp__sub_821B9194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9198"))) PPC_WEAK_FUNC(sub_821B9198);
PPC_FUNC_IMPL(__imp__sub_821B9198) {
	PPC_FUNC_PROLOGUE();
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B91A4"))) PPC_WEAK_FUNC(sub_821B91A4);
PPC_FUNC_IMPL(__imp__sub_821B91A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B91A8"))) PPC_WEAK_FUNC(sub_821B91A8);
PPC_FUNC_IMPL(__imp__sub_821B91A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821B91B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,88(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b97e0
	ctx.lr = 0x821B91C4;
	sub_821B97E0(ctx, base);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b91e0
	if (!ctx.cr6.eq) goto loc_821B91E0;
loc_821B91D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_821B91E0:
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b91d4
	if (ctx.cr6.eq) goto loc_821B91D4;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_821B91FC:
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r7,r30
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r30.u64, ctx.xer);
	// bgt cr6,0x821b9224
	if (ctx.cr6.gt) goto loc_821B9224;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821b91fc
	if (ctx.cr6.lt) goto loc_821B91FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_821B9224:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b923c
	if (ctx.cr6.eq) goto loc_821B923C;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ld r29,-16(r10)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// lwz r28,-8(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
loc_821B923C:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx r31,r11,r8
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// beq cr6,0x821b91d4
	if (ctx.cr6.eq) goto loc_821B91D4;
	// cmpld cr6,r30,r29
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r29.u64, ctx.xer);
	// beq cr6,0x821b91d4
	if (ctx.cr6.eq) goto loc_821B91D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b79d8
	ctx.lr = 0x821B9260;
	sub_821B79D8(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpld cr6,r31,r11
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x821b91d4
	if (ctx.cr6.lt) goto loc_821B91D4;
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// beq cr6,0x821b9288
	if (ctx.cr6.eq) goto loc_821B9288;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpld cr6,r11,r30
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, ctx.xer);
	// bgt cr6,0x821b91d4
	if (ctx.cr6.gt) goto loc_821B91D4;
loc_821B9288:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b97e0
	ctx.lr = 0x821B9294;
	sub_821B97E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B929C"))) PPC_WEAK_FUNC(sub_821B929C);
PPC_FUNC_IMPL(__imp__sub_821B929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B92A0"))) PPC_WEAK_FUNC(sub_821B92A0);
PPC_FUNC_IMPL(__imp__sub_821B92A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821B92A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b92e0
	if (!ctx.cr6.eq) goto loc_821B92E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B92E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B92E0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821b938c
	if (ctx.cr6.eq) goto loc_821B938C;
loc_821B92E8:
	// lwz r27,28(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r29,32(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821b936c
	if (ctx.cr6.eq) goto loc_821B936C;
	// subf r31,r29,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r29.s64;
	// subf r11,r28,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r28.s64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821b930c
	if (!ctx.cr6.gt) goto loc_821B930C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_821B930C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821B9320;
	sub_8233E4E0(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// add r26,r31,r26
	ctx.r26.u64 = ctx.r31.u64 + ctx.r26.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821b9358
	if (!ctx.cr6.eq) goto loc_821B9358;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r10,r25,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r25.u32;
	ctx.r10.s64 = ctx.r28.s64 - ctx.r25.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r4,r8,31
	ctx.r4.u64 = ctx.r8.u32 & 0x1;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821B9358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B9358:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x821b92e8
	if (ctx.cr6.lt) goto loc_821B92E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821B936C:
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x821b938c
	if (!ctx.cr6.lt) goto loc_821B938C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r11.u8);
loc_821B938C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B9398"))) PPC_WEAK_FUNC(sub_821B9398);
PPC_FUNC_IMPL(__imp__sub_821B9398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x821B93A0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r29,r8,r10
	ctx.r29.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r7,292(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 292);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821b93d4
	if (ctx.cr6.eq) goto loc_821B93D4;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// b 0x821b93d8
	goto loc_821B93D8;
loc_821B93D4:
	// ld r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
loc_821B93D8:
	// cmpld cr6,r29,r10
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x821b93ec
	if (!ctx.cr6.eq) goto loc_821B93EC;
loc_821B93E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_821B93EC:
	// lbz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 292);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b9400
	if (ctx.cr6.eq) goto loc_821B9400;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// b 0x821b9404
	goto loc_821B9404;
loc_821B9400:
	// ld r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
loc_821B9404:
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x821b93e0
	if (ctx.cr6.gt) goto loc_821B93E0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r8,r27
	ctx.r10.u64 = ctx.r8.u64 + ctx.r27.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x821b9448
	if (ctx.cr6.lt) goto loc_821B9448;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821b8cc0
	ctx.lr = 0x821B9434;
	sub_821B8CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9458
	if (ctx.cr6.eq) goto loc_821B9458;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_821B9448:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x821b92a0
	ctx.lr = 0x821B9450;
	sub_821B92A0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_821B9458:
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// bl 0x821b8db0
	ctx.lr = 0x821B9474;
	sub_821B8DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b94e8
	if (ctx.cr6.eq) goto loc_821B94E8;
	// rotlwi r28,r29,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
loc_821B9484:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r6,r28,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r28.s64;
	// subf r11,r30,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r30.s64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x821b94c0
	if (ctx.cr6.lt) goto loc_821B94C0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821B94C0:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r27,r11,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r11.s64;
	// bl 0x821b8db0
	ctx.lr = 0x821B94DC;
	sub_821B8DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b9484
	if (!ctx.cr6.eq) goto loc_821B9484;
loc_821B94E8:
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8db0
	ctx.lr = 0x821B94FC;
	sub_821B8DB0(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x821b9598
	if (!ctx.cr6.eq) goto loc_821B9598;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9598
	if (ctx.cr6.eq) goto loc_821B9598;
	// li r24,-1
	ctx.r24.s64 = -1;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r23,r28,4
	ctx.r23.s64 = ctx.r28.s64 + 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82247250
	ctx.lr = 0x821B952C;
	sub_82247250(ctx, base);
	// lwz r8,32(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rotlwi r9,r29,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// ld r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// subf r11,r5,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r5.s64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r8,28(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// ld r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// subf r26,r11,r8
	ctx.r26.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821B9584;
	sub_8233E4E0(ctx, base);
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// add r25,r26,r25
	ctx.r25.u64 = ctx.r26.u64 + ctx.r25.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r30,r26,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r26.s64;
	// b 0x821b95bc
	goto loc_821B95BC;
loc_821B9598:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// bl 0x821b8ff0
	ctx.lr = 0x821B95A8;
	sub_821B8FF0(ctx, base);
	// li r24,-1
	ctx.r24.s64 = -1;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r23,r26,4
	ctx.r23.s64 = ctx.r26.s64 + 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82247250
	ctx.lr = 0x821B95BC;
	sub_82247250(ctx, base);
loc_821B95BC:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82247218
	ctx.lr = 0x821B95C4;
	sub_82247218(ctx, base);
	// bl 0x821b9880
	ctx.lr = 0x821B95C8;
	sub_821B9880(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b95f0
	if (ctx.cr6.eq) goto loc_821B95F0;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821b98f0
	ctx.lr = 0x821B95EC;
	sub_821B98F0(ctx, base);
	// b 0x821b95f4
	goto loc_821B95F4;
loc_821B95F0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_821B95F4:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,13
	ctx.r8.s64 = ctx.r11.s64 + 13;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r27,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r27.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// bl 0x821bae90
	ctx.lr = 0x821B9624;
	sub_821BAE90(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// bl 0x821b8db0
	ctx.lr = 0x821B9648;
	sub_821B8DB0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b96ec
	if (ctx.cr6.eq) goto loc_821B96EC;
loc_821B9654:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x821b96ec
	if (ctx.cr6.eq) goto loc_821B96EC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82247250
	ctx.lr = 0x821B966C;
	sub_82247250(ctx, base);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rotlwi r9,r29,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// ld r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// ld r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// subf r11,r7,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subf r30,r11,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821B96C4;
	sub_8233E4E0(ctx, base);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r25,r30,r25
	ctx.r25.u64 = ctx.r30.u64 + ctx.r25.u64;
	// bl 0x821b8db0
	ctx.lr = 0x821B96E0;
	sub_821B8DB0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821b9654
	if (!ctx.cr6.eq) goto loc_821B9654;
loc_821B96EC:
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lbz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9704
	if (ctx.cr6.eq) goto loc_821B9704;
	// lwz r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// b 0x821b9708
	goto loc_821B9708;
loc_821B9704:
	// ld r10,272(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 272);
loc_821B9708:
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x821b9748
	if (!ctx.cr6.lt) goto loc_821B9748;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b97e0
	ctx.lr = 0x821B9724;
	sub_821B97E0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821b79d8
	ctx.lr = 0x821B9734;
	sub_821B79D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821b8e48
	ctx.lr = 0x821B9748;
	sub_821B8E48(ctx, base);
loc_821B9748:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82247250
	ctx.lr = 0x821B9754;
	sub_82247250(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821b978c
	if (ctx.cr6.eq) goto loc_821B978C;
	// stw r22,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r22.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r22,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_821B978C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lwz r8,32(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// ld r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// lwz r6,28(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B97DC"))) PPC_WEAK_FUNC(sub_821B97DC);
PPC_FUNC_IMPL(__imp__sub_821B97DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B97E0"))) PPC_WEAK_FUNC(sub_821B97E0);
PPC_FUNC_IMPL(__imp__sub_821B97E0) {
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
	// lbz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 292);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9864
	if (ctx.cr6.eq) goto loc_821B9864;
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// bl 0x821b6ed0
	ctx.lr = 0x821B9808;
	sub_821B6ED0(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// tdllei r10,0
	// divdu r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 / ctx.r10.u64;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b9840
	if (!ctx.cr6.eq) goto loc_821B9840;
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
loc_821B9840:
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821B9864:
	// rldicr r3,r4,0,48
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 0) & 0xFFFFFFFFFFFF8000;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821B987C"))) PPC_WEAK_FUNC(sub_821B987C);
PPC_FUNC_IMPL(__imp__sub_821B987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9880"))) PPC_WEAK_FUNC(sub_821B9880);
PPC_FUNC_IMPL(__imp__sub_821B9880) {
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
	ctx.lr = 0x821B9898;
	sub_82081C00(ctx, base);
	// bl 0x821ba6d8
	ctx.lr = 0x821B989C;
	sub_821BA6D8(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821B98AC;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b98c0
	if (!ctx.cr6.eq) goto loc_821B98C0;
	// bl 0x821b3000
	ctx.lr = 0x821B98BC;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821B98C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b98d8
	if (ctx.cr6.eq) goto loc_821B98D8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_821B98D8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821B98EC"))) PPC_WEAK_FUNC(sub_821B98EC);
PPC_FUNC_IMPL(__imp__sub_821B98EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B98F0"))) PPC_WEAK_FUNC(sub_821B98F0);
PPC_FUNC_IMPL(__imp__sub_821B98F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821B98F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x82305000
	ctx.lr = 0x821B9940;
	sub_82305000(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// std r24,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r24.u64);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_821B9974:
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821b9974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B9974;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r11,296
	ctx.r8.s64 = ctx.r11.s64 + 296;
loc_821B9988:
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
	// bne 0x821b9988
	if (!ctx.cr0.eq) goto loc_821B9988;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b9a3c
	if (ctx.cr6.eq) goto loc_821B9A3C;
loc_821B99AC:
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
	// bne 0x821b99ac
	if (!ctx.cr0.eq) goto loc_821B99AC;
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821b9a3c
	if (!ctx.cr6.eq) goto loc_821B9A3C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821b9a28
	if (!ctx.cr6.gt) goto loc_821B9A28;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b99fc
	if (!ctx.cr6.eq) goto loc_821B99FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ba2c0
	ctx.lr = 0x821B99FC;
	sub_821BA2C0(ctx, base);
loc_821B99FC:
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821b97e0
	ctx.lr = 0x821B9A08;
	sub_821B97E0(ctx, base);
	// std r3,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r3.u64);
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821b79d8
	ctx.lr = 0x821B9A18;
	sub_821B79D8(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_821B9A28:
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r28,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r28.u32);
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
	// std r10,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r10.u64);
loc_821B9A3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B9A48"))) PPC_WEAK_FUNC(sub_821B9A48);
PPC_FUNC_IMPL(__imp__sub_821B9A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B9A50;
	__savegprlr_29(ctx, base);
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
	// beq cr6,0x821b9aac
	if (ctx.cr6.eq) goto loc_821B9AAC;
loc_821B9A64:
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
	// bne 0x821b9a64
	if (!ctx.cr0.eq) goto loc_821B9A64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b9aac
	if (!ctx.cr6.eq) goto loc_821B9AAC;
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b9aac
	if (ctx.cr6.eq) goto loc_821B9AAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7de0
	ctx.lr = 0x821B9AA0;
	sub_821B7DE0(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B9AAC;
	sub_82080000(ctx, base);
loc_821B9AAC:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9b08
	if (ctx.cr6.eq) goto loc_821B9B08;
loc_821B9AC0:
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
	// bne 0x821b9ac0
	if (!ctx.cr0.eq) goto loc_821B9AC0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b9b08
	if (!ctx.cr6.eq) goto loc_821B9B08;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b9b08
	if (ctx.cr6.eq) goto loc_821B9B08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7de0
	ctx.lr = 0x821B9AFC;
	sub_821B7DE0(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821B9B08;
	sub_82080000(ctx, base);
loc_821B9B08:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B9B14"))) PPC_WEAK_FUNC(sub_821B9B14);
PPC_FUNC_IMPL(__imp__sub_821B9B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9B18"))) PPC_WEAK_FUNC(sub_821B9B18);
PPC_FUNC_IMPL(__imp__sub_821B9B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821B9B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821b9c0c
	if (ctx.cr6.gt) goto loc_821B9C0C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821b9b60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821B9B60;
	// bdzf 4*cr6+eq,0x821b9b80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821B9B80;
	// bdzf 4*cr6+eq,0x821b9b70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821B9B70;
	// bne cr6,0x821b9b60
	if (!ctx.cr6.eq) goto loc_821B9B60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9c18
	ctx.lr = 0x821B9B58;
	sub_821B9C18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821B9B60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9d90
	ctx.lr = 0x821B9B68;
	sub_821B9D90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821B9B70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ba1c0
	ctx.lr = 0x821B9B78;
	sub_821BA1C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821B9B80:
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x821B9B94;
	sub_823052D8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821b9bb4
	if (!ctx.cr6.eq) goto loc_821B9BB4;
	// bl 0x823051a8
	ctx.lr = 0x821B9BA8;
	sub_823051A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821B9BB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x821B9BC0;
	sub_823051A8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821B9BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b9c0c
	if (!ctx.cr6.eq) goto loc_821B9C0C;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821B9BEC;
	sub_822471D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x821B9BF8;
	sub_823052D8(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bl 0x823051a8
	ctx.lr = 0x821B9C08;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B9C0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B9C14"))) PPC_WEAK_FUNC(sub_821B9C14);
PPC_FUNC_IMPL(__imp__sub_821B9C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9C18"))) PPC_WEAK_FUNC(sub_821B9C18);
PPC_FUNC_IMPL(__imp__sub_821B9C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821B9C20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823052d8
	ctx.lr = 0x821B9C3C;
	sub_823052D8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821b9c5c
	if (!ctx.cr6.eq) goto loc_821B9C5C;
loc_821B9C4C:
	// bl 0x823051a8
	ctx.lr = 0x821B9C50;
	sub_823051A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_821B9C5C:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// bl 0x823051a8
	ctx.lr = 0x821B9C68;
	sub_823051A8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,293(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 293);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b9d08
	if (!ctx.cr6.eq) goto loc_821B9D08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821B9C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b9cac
	if (ctx.cr6.eq) goto loc_821B9CAC;
loc_821B9CA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_821B9CAC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x821B9CB8;
	sub_823052D8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821b9c4c
	if (ctx.cr6.eq) goto loc_821B9C4C;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// bl 0x823051a8
	ctx.lr = 0x821B9CD0;
	sub_823051A8(ctx, base);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x821b9d00
	if (!ctx.cr6.eq) goto loc_821B9D00;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B9CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b9ca0
	if (!ctx.cr6.eq) goto loc_821B9CA0;
loc_821B9D00:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stb r28,293(r11)
	PPC_STORE_U8(ctx.r11.u32 + 293, ctx.r28.u8);
loc_821B9D08:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 292);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b9d24
	if (ctx.cr6.eq) goto loc_821B9D24;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// b 0x821b9d28
	goto loc_821B9D28;
loc_821B9D24:
	// ld r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
loc_821B9D28:
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x821b9ca0
	if (!ctx.cr6.eq) goto loc_821B9CA0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x821B9D40;
	sub_823052D8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821b9c4c
	if (ctx.cr6.eq) goto loc_821B9C4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x821B9D5C;
	sub_823051A8(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821B9D68;
	sub_822471D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x821B9D74;
	sub_823052D8(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// bl 0x823051a8
	ctx.lr = 0x821B9D84;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B9D90"))) PPC_WEAK_FUNC(sub_821B9D90);
PPC_FUNC_IMPL(__imp__sub_821B9D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x821B9D98;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,293(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 293);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b9dc8
	if (!ctx.cr6.eq) goto loc_821B9DC8;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821B9DBC;
	sub_822471D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821B9DC8:
	// addi r22,r31,4
	ctx.r22.s64 = ctx.r31.s64 + 4;
	// li r21,-1
	ctx.r21.s64 = -1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x823052d8
	ctx.lr = 0x821B9DDC;
	sub_823052D8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821ba098
	if (ctx.cr6.eq) goto loc_821BA098;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x821B9DF8;
	sub_823051A8(ctx, base);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r29,r31,76
	ctx.r29.s64 = ctx.r31.s64 + 76;
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b9e14
	if (!ctx.cr6.eq) goto loc_821B9E14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ba2c0
	ctx.lr = 0x821B9E14;
	sub_821BA2C0(ctx, base);
loc_821B9E14:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b9e54
	if (ctx.cr6.eq) goto loc_821B9E54;
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x821b9e54
	if (!ctx.cr6.eq) goto loc_821B9E54;
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r4,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r4.u64);
	// bl 0x821b97e0
	ctx.lr = 0x821B9E3C;
	sub_821B97E0(ctx, base);
	// std r3,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r3.u64);
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821b79d8
	ctx.lr = 0x821B9E4C;
	sub_821B79D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
loc_821B9E54:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r23,292(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 292);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B9E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b9e8c
	if (ctx.cr6.eq) goto loc_821B9E8C;
	// lwz r24,24(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x821b9e90
	goto loc_821B9E90;
loc_821B9E8C:
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_821B9E90:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9ec0
	if (ctx.cr6.eq) goto loc_821B9EC0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// bl 0x821b66e8
	ctx.lr = 0x821B9EBC;
	sub_821B66E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821B9EC0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ba000
	if (!ctx.cr6.eq) goto loc_821BA000;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b9ee8
	if (ctx.cr6.eq) goto loc_821B9EE8;
	// lwz r30,632(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 632);
	// b 0x821b9eec
	goto loc_821B9EEC;
loc_821B9EE8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821B9EEC:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b9fd8
	if (!ctx.cr6.eq) goto loc_821B9FD8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x821b9fd8
	if (!ctx.cr6.eq) goto loc_821B9FD8;
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821b9f14
	if (!ctx.cr6.eq) goto loc_821B9F14;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x821b9f6c
	goto loc_821B9F6C;
loc_821B9F14:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x821b9f28
	if (!ctx.cr6.gt) goto loc_821B9F28;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x821b9f6c
	goto loc_821B9F6C;
loc_821B9F28:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x821b9f44
	if (ctx.cr6.gt) goto loc_821B9F44;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x821b9f6c
	goto loc_821B9F6C;
loc_821B9F44:
	// ld r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821b97e0
	ctx.lr = 0x821B9F50;
	sub_821B97E0(ctx, base);
	// cmpld cr6,r27,r3
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x821b9f60
	if (ctx.cr6.eq) goto loc_821B9F60;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x821b9f6c
	goto loc_821B9F6C;
loc_821B9F60:
	// clrlwi r11,r28,20
	ctx.r11.u64 = ctx.r28.u32 & 0xFFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_821B9F6C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b9f98
	if (!ctx.cr6.eq) goto loc_821B9F98;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B9F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821b9fc4
	goto loc_821B9FC4;
loc_821B9F98:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r20,32(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// ld r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B9FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r20,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r20.u32);
loc_821B9FC4:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ba000
	if (ctx.cr6.eq) goto loc_821BA000;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821B9FD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B9FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ba1b4
	if (!ctx.cr6.eq) goto loc_821BA1B4;
loc_821BA000:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823052d8
	ctx.lr = 0x821BA00C;
	sub_823052D8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821ba098
	if (ctx.cr6.eq) goto loc_821BA098;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x821BA028;
	sub_823051A8(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821ba0f8
	if (ctx.cr6.eq) goto loc_821BA0F8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ld r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r7,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r7.u64);
	// beq cr6,0x821ba07c
	if (ctx.cr6.eq) goto loc_821BA07C;
loc_821BA050:
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
	// bne 0x821ba050
	if (!ctx.cr0.eq) goto loc_821BA050;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821BA078;
	sub_822471D8(ctx, base);
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
loc_821BA07C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823052d8
	ctx.lr = 0x821BA088;
	sub_823052D8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821ba0a8
	if (!ctx.cr6.eq) goto loc_821BA0A8;
loc_821BA094:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_821BA098:
	// bl 0x823051a8
	ctx.lr = 0x821BA09C;
	sub_823051A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821BA0A8:
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// ld r10,272(r24)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r24.u32 + 272);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x821ba0dc
	if (!ctx.cr6.lt) goto loc_821BA0DC;
	// lbz r11,636(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba0dc
	if (ctx.cr6.eq) goto loc_821BA0DC;
	// stw r25,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r25.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823051a8
	ctx.lr = 0x821BA0D0;
	sub_823051A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821BA0DC:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x821BA0EC;
	sub_823051A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821BA0F8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba118
	if (ctx.cr6.eq) goto loc_821BA118;
	// bl 0x821ba328
	ctx.lr = 0x821BA10C;
	sub_821BA328(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821BA118:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x821ba490
	ctx.lr = 0x821BA130;
	sub_821BA490(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823052d8
	ctx.lr = 0x821BA13C;
	sub_823052D8(ctx, base);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x821ba094
	if (ctx.cr6.eq) goto loc_821BA094;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ba17c
	if (!ctx.cr6.eq) goto loc_821BA17C;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821BA168;
	sub_822471D8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823051a8
	ctx.lr = 0x821BA170;
	sub_823051A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821BA17C:
	// stw r25,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r25.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821b79d8
	ctx.lr = 0x821BA1A4;
	sub_821B79D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823051a8
	ctx.lr = 0x821BA1B4;
	sub_823051A8(ctx, base);
loc_821BA1B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BA1C0"))) PPC_WEAK_FUNC(sub_821BA1C0);
PPC_FUNC_IMPL(__imp__sub_821BA1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821BA1C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x821BA1E4;
	sub_823052D8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821ba270
	if (ctx.cr6.eq) goto loc_821BA270;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x821BA200;
	sub_823051A8(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x821b7828
	ctx.lr = 0x821BA220;
	sub_821B7828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ba2b8
	if (!ctx.cr6.eq) goto loc_821BA2B8;
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821b97e0
	ctx.lr = 0x821BA234;
	sub_821B97E0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r3,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r5,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// bl 0x821ba490
	ctx.lr = 0x821BA254;
	sub_821BA490(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x821BA260;
	sub_823052D8(ctx, base);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x821ba280
	if (!ctx.cr6.eq) goto loc_821BA280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821BA270:
	// bl 0x823051a8
	ctx.lr = 0x821BA274;
	sub_823051A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821BA280:
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821BA294;
	sub_822471D8(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ba2ac
	if (!ctx.cr6.eq) goto loc_821BA2AC;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821BA2AC;
	sub_822471D8(ctx, base);
loc_821BA2AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x821BA2B4;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BA2B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BA2C0"))) PPC_WEAK_FUNC(sub_821BA2C0);
PPC_FUNC_IMPL(__imp__sub_821BA2C0) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821ba2f8
	if (!ctx.cr6.lt) goto loc_821BA2F8;
	// addi r11,r10,32767
	ctx.r11.s64 = ctx.r10.s64 + 32767;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// b 0x821ba2fc
	goto loc_821BA2FC;
loc_821BA2F8:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_821BA2FC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x82082030
	ctx.lr = 0x821BA310;
	sub_82082030(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821BA328"))) PPC_WEAK_FUNC(sub_821BA328);
PPC_FUNC_IMPL(__imp__sub_821BA328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821BA330;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821b9880
	ctx.lr = 0x821BA33C;
	sub_821B9880(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ba364
	if (ctx.cr6.eq) goto loc_821BA364;
	// li r6,3
	ctx.r6.s64 = 3;
	// ld r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821b98f0
	ctx.lr = 0x821BA360;
	sub_821B98F0(ctx, base);
	// b 0x821ba368
	goto loc_821BA368;
loc_821BA364:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821BA368:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// bl 0x821bae90
	ctx.lr = 0x821BA3D0;
	sub_821BAE90(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821ba404
	if (!ctx.cr6.eq) goto loc_821BA404;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x821BA3EC;
	sub_823052D8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x821BA3FC;
	sub_823051A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_821BA404:
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ld r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821b97e0
	ctx.lr = 0x821BA418;
	sub_821B97E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b79d8
	ctx.lr = 0x821BA428;
	sub_821B79D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ba490
	ctx.lr = 0x821BA43C;
	sub_821BA490(ctx, base);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823052d8
	ctx.lr = 0x821BA44C;
	sub_823052D8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba478
	if (ctx.cr6.eq) goto loc_821BA478;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// bl 0x823051a8
	ctx.lr = 0x821BA470;
	sub_823051A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_821BA478:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x821BA488;
	sub_823051A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

