#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8234F420"))) PPC_WEAK_FUNC(sub_8234F420);
PPC_FUNC_IMPL(__imp__sub_8234F420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,12288(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12288);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x8234F430;
	__savegprlr_20(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r4,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r4.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// bl 0x821c07f0
	ctx.lr = 0x8234F468;
	sub_821C07F0(ctx, base);
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
	// beq 0x8234f4a0
	if (ctx.cr0.eq) goto loc_8234F4A0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// bl 0x8236a958
	ctx.lr = 0x8234F494;
	sub_8236A958(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8234f4a4
	if (!ctx.cr0.eq) goto loc_8234F4A4;
loc_8234F4A0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8234F4A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234f4c4
	if (ctx.cr0.eq) goto loc_8234F4C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x821c2c10
	ctx.lr = 0x8234F4B8;
	sub_821C2C10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8234f4c8
	if (!ctx.cr0.eq) goto loc_8234F4C8;
loc_8234F4C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8234F4C8:
	// clrlwi. r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r28,r11,11720
	ctx.r28.s64 = ctx.r11.s64 + 11720;
	// addi r27,r10,11788
	ctx.r27.s64 = ctx.r10.s64 + 11788;
	// addi r26,r9,12224
	ctx.r26.s64 = ctx.r9.s64 + 12224;
	// bne 0x8234f510
	if (!ctx.cr0.eq) goto loc_8234F510;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,12196
	ctx.r9.s64 = ctx.r11.s64 + 12196;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,-25772
	ctx.r4.s64 = ctx.r10.s64 + -25772;
	// li r8,353
	ctx.r8.s64 = 353;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8234F510;
	sub_82372320(ctx, base);
loc_8234F510:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8234f750
	if (ctx.cr6.eq) goto loc_8234F750;
	// lwz r3,32(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// bl 0x82363e08
	ctx.lr = 0x8234F520;
	sub_82363E08(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8235c948
	ctx.lr = 0x8234F534;
	sub_8235C948(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r24,r10,12188
	ctx.r24.s64 = ctx.r10.s64 + 12188;
	// beq cr6,0x8234f5d4
	if (ctx.cr6.eq) goto loc_8234F5D4;
	// lwz r25,28(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_8234F554:
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
	// bne 0x8234f554
	if (!ctx.cr0.eq) goto loc_8234F554;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234F58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234f5bc
	if (!ctx.cr0.eq) goto loc_8234F5BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r9,r11,12144
	ctx.r9.s64 = ctx.r11.s64 + 12144;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r8,367
	ctx.r8.s64 = 367;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8234F5B8;
	sub_82372320(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8234F5BC:
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bgt cr6,0x8234f5cc
	if (ctx.cr6.gt) goto loc_8234F5CC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8234F5CC:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
loc_8234F5D4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234f658
	if (ctx.cr0.eq) goto loc_8234F658;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8234f610
	if (ctx.cr6.eq) goto loc_8234F610;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234F5F0:
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
	// bne 0x8234f5f0
	if (!ctx.cr0.eq) goto loc_8234F5F0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234F610:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234F628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234f658
	if (!ctx.cr0.eq) goto loc_8234F658;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r9,r11,12104
	ctx.r9.s64 = ctx.r11.s64 + 12104;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r8,378
	ctx.r8.s64 = 378;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8234F654;
	sub_82372320(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8234F658:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234f748
	if (ctx.cr0.eq) goto loc_8234F748;
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r11,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r11.u8);
	// bl 0x8236a338
	ctx.lr = 0x8234F678;
	sub_8236A338(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234f694
	if (ctx.cr0.eq) goto loc_8234F694;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b188
	ctx.lr = 0x8234F690;
	sub_8236B188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8234F694:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234f6c4
	if (ctx.cr6.eq) goto loc_8234F6C4;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8234F6A4:
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
	// bne 0x8234f6a4
	if (!ctx.cr0.eq) goto loc_8234F6A4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8234F6C4:
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234f6f4
	if (ctx.cr6.eq) goto loc_8234F6F4;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8234F6D4:
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
	// bne 0x8234f6d4
	if (!ctx.cr0.eq) goto loc_8234F6D4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8234F6F4:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82358b10
	ctx.lr = 0x8234F700;
	sub_82358B10(ctx, base);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234f730
	if (ctx.cr6.eq) goto loc_8234F730;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8234F710:
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
	// bne 0x8234f710
	if (!ctx.cr0.eq) goto loc_8234F710;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8234F730:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// lbz r5,0(r20)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8235c7c8
	ctx.lr = 0x8234F740;
	sub_8235C7C8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x8234F748;
	sub_821C0630(ctx, base);
loc_8234F748:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8234F750;
	sub_821C0630(ctx, base);
loc_8234F750:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234F758;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F428"))) PPC_WEAK_FUNC(sub_8234F428);
PPC_FUNC_IMPL(__imp__sub_8234F428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x8234F430;
	__savegprlr_20(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r4,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r4.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// bl 0x821c07f0
	ctx.lr = 0x8234F468;
	sub_821C07F0(ctx, base);
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
	// beq 0x8234f4a0
	if (ctx.cr0.eq) goto loc_8234F4A0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// bl 0x8236a958
	ctx.lr = 0x8234F494;
	sub_8236A958(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8234f4a4
	if (!ctx.cr0.eq) goto loc_8234F4A4;
loc_8234F4A0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8234F4A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234f4c4
	if (ctx.cr0.eq) goto loc_8234F4C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x821c2c10
	ctx.lr = 0x8234F4B8;
	sub_821C2C10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8234f4c8
	if (!ctx.cr0.eq) goto loc_8234F4C8;
loc_8234F4C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8234F4C8:
	// clrlwi. r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r28,r11,11720
	ctx.r28.s64 = ctx.r11.s64 + 11720;
	// addi r27,r10,11788
	ctx.r27.s64 = ctx.r10.s64 + 11788;
	// addi r26,r9,12224
	ctx.r26.s64 = ctx.r9.s64 + 12224;
	// bne 0x8234f510
	if (!ctx.cr0.eq) goto loc_8234F510;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,12196
	ctx.r9.s64 = ctx.r11.s64 + 12196;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,-25772
	ctx.r4.s64 = ctx.r10.s64 + -25772;
	// li r8,353
	ctx.r8.s64 = 353;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8234F510;
	sub_82372320(ctx, base);
loc_8234F510:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8234f750
	if (ctx.cr6.eq) goto loc_8234F750;
	// lwz r3,32(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// bl 0x82363e08
	ctx.lr = 0x8234F520;
	sub_82363E08(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8235c948
	ctx.lr = 0x8234F534;
	sub_8235C948(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r24,r10,12188
	ctx.r24.s64 = ctx.r10.s64 + 12188;
	// beq cr6,0x8234f5d4
	if (ctx.cr6.eq) goto loc_8234F5D4;
	// lwz r25,28(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_8234F554:
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
	// bne 0x8234f554
	if (!ctx.cr0.eq) goto loc_8234F554;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234F58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234f5bc
	if (!ctx.cr0.eq) goto loc_8234F5BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r9,r11,12144
	ctx.r9.s64 = ctx.r11.s64 + 12144;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r8,367
	ctx.r8.s64 = 367;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8234F5B8;
	sub_82372320(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8234F5BC:
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bgt cr6,0x8234f5cc
	if (ctx.cr6.gt) goto loc_8234F5CC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8234F5CC:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
loc_8234F5D4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234f658
	if (ctx.cr0.eq) goto loc_8234F658;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8234f610
	if (ctx.cr6.eq) goto loc_8234F610;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234F5F0:
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
	// bne 0x8234f5f0
	if (!ctx.cr0.eq) goto loc_8234F5F0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234F610:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234F628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234f658
	if (!ctx.cr0.eq) goto loc_8234F658;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r9,r11,12104
	ctx.r9.s64 = ctx.r11.s64 + 12104;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r8,378
	ctx.r8.s64 = 378;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8234F654;
	sub_82372320(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8234F658:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234f748
	if (ctx.cr0.eq) goto loc_8234F748;
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r11,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r11.u8);
	// bl 0x8236a338
	ctx.lr = 0x8234F678;
	sub_8236A338(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234f694
	if (ctx.cr0.eq) goto loc_8234F694;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b188
	ctx.lr = 0x8234F690;
	sub_8236B188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8234F694:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234f6c4
	if (ctx.cr6.eq) goto loc_8234F6C4;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8234F6A4:
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
	// bne 0x8234f6a4
	if (!ctx.cr0.eq) goto loc_8234F6A4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8234F6C4:
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234f6f4
	if (ctx.cr6.eq) goto loc_8234F6F4;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8234F6D4:
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
	// bne 0x8234f6d4
	if (!ctx.cr0.eq) goto loc_8234F6D4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8234F6F4:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82358b10
	ctx.lr = 0x8234F700;
	sub_82358B10(ctx, base);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234f730
	if (ctx.cr6.eq) goto loc_8234F730;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8234F710:
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
	// bne 0x8234f710
	if (!ctx.cr0.eq) goto loc_8234F710;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8234F730:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// lbz r5,0(r20)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8235c7c8
	ctx.lr = 0x8234F740;
	sub_8235C7C8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x8234F748;
	sub_821C0630(ctx, base);
loc_8234F748:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8234F750;
	sub_821C0630(ctx, base);
loc_8234F750:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234F758;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F764"))) PPC_WEAK_FUNC(sub_8234F764);
PPC_FUNC_IMPL(__imp__sub_8234F764) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x821c0630
	ctx.lr = 0x8234F77C;
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

__attribute__((alias("__imp__sub_8234F78C"))) PPC_WEAK_FUNC(sub_8234F78C);
PPC_FUNC_IMPL(__imp__sub_8234F78C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	// bl 0x821c0630
	ctx.lr = 0x8234F7A4;
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

__attribute__((alias("__imp__sub_8234F7B4"))) PPC_WEAK_FUNC(sub_8234F7B4);
PPC_FUNC_IMPL(__imp__sub_8234F7B4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	ctx.lr = 0x8234F7CC;
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

__attribute__((alias("__imp__sub_8234F7DC"))) PPC_WEAK_FUNC(sub_8234F7DC);
PPC_FUNC_IMPL(__imp__sub_8234F7DC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	ctx.lr = 0x8234F7F4;
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

__attribute__((alias("__imp__sub_8234F804"))) PPC_WEAK_FUNC(sub_8234F804);
PPC_FUNC_IMPL(__imp__sub_8234F804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F808"))) PPC_WEAK_FUNC(sub_8234F808);
PPC_FUNC_IMPL(__imp__sub_8234F808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,12464(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12464);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8234F818;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// bl 0x821c07f0
	ctx.lr = 0x8234F848;
	sub_821C07F0(ctx, base);
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
	// beq 0x8234f874
	if (ctx.cr0.eq) goto loc_8234F874;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821c2c10
	ctx.lr = 0x8234F868;
	sub_821C2C10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8234f878
	if (!ctx.cr0.eq) goto loc_8234F878;
loc_8234F874:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234F878:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234f8d8
	if (ctx.cr0.eq) goto loc_8234F8D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234f8b4
	if (ctx.cr6.eq) goto loc_8234F8B4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234F894:
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
	// bne 0x8234f894
	if (!ctx.cr0.eq) goto loc_8234F894;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234F8B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234F8CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8234f8dc
	if (!ctx.cr0.eq) goto loc_8234F8DC;
loc_8234F8D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234F8DC:
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234F8F0;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F810"))) PPC_WEAK_FUNC(sub_8234F810);
PPC_FUNC_IMPL(__imp__sub_8234F810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8234F818;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// bl 0x821c07f0
	ctx.lr = 0x8234F848;
	sub_821C07F0(ctx, base);
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
	// beq 0x8234f874
	if (ctx.cr0.eq) goto loc_8234F874;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821c2c10
	ctx.lr = 0x8234F868;
	sub_821C2C10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8234f878
	if (!ctx.cr0.eq) goto loc_8234F878;
loc_8234F874:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234F878:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234f8d8
	if (ctx.cr0.eq) goto loc_8234F8D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234f8b4
	if (ctx.cr6.eq) goto loc_8234F8B4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234F894:
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
	// bne 0x8234f894
	if (!ctx.cr0.eq) goto loc_8234F894;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234F8B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234F8CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8234f8dc
	if (!ctx.cr0.eq) goto loc_8234F8DC;
loc_8234F8D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234F8DC:
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234F8F0;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F8FC"))) PPC_WEAK_FUNC(sub_8234F8FC);
PPC_FUNC_IMPL(__imp__sub_8234F8FC) {
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
	ctx.lr = 0x8234F914;
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

__attribute__((alias("__imp__sub_8234F924"))) PPC_WEAK_FUNC(sub_8234F924);
PPC_FUNC_IMPL(__imp__sub_8234F924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F928"))) PPC_WEAK_FUNC(sub_8234F928);
PPC_FUNC_IMPL(__imp__sub_8234F928) {
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
	// bl 0x8234f1b8
	ctx.lr = 0x8234F948;
	sub_8234F1B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234f958
	if (ctx.cr0.eq) goto loc_8234F958;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x8234F958;
	sub_8236A3F0(ctx, base);
loc_8234F958:
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

__attribute__((alias("__imp__sub_8234F974"))) PPC_WEAK_FUNC(sub_8234F974);
PPC_FUNC_IMPL(__imp__sub_8234F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F978"))) PPC_WEAK_FUNC(sub_8234F978);
PPC_FUNC_IMPL(__imp__sub_8234F978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,12632(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12632);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x8234F988;
	__savegprlr_22(ctx, base);
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
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r5,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r5.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82363e08
	ctx.lr = 0x8234F9AC;
	sub_82363E08(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234f9f0
	if (ctx.cr6.eq) goto loc_8234F9F0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234F9D0:
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
	// bne 0x8234f9d0
	if (!ctx.cr0.eq) goto loc_8234F9D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234F9F0:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x8235c3e0
	ctx.lr = 0x8234FA00;
	sub_8235C3E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234fa94
	if (ctx.cr0.eq) goto loc_8234FA94;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// bl 0x8235ca90
	ctx.lr = 0x8234FA14;
	sub_8235CA90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234fac8
	if (ctx.cr0.eq) goto loc_8234FAC8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r24,1
	ctx.r24.s64 = 1;
	// bl 0x8235cab8
	ctx.lr = 0x8234FA2C;
	sub_8235CAB8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// clrlwi. r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8234fa58
	if (!ctx.cr0.eq) goto loc_8234FA58;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FA40;
	sub_821C0630(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8234FA44:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FA4C;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_8234FA58:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8234fac8
	if (ctx.cr6.eq) goto loc_8234FAC8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8234FA64:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8235cae0
	ctx.lr = 0x8234FA7C;
	sub_8235CAE0(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// or r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 | ctx.r26.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8234fa64
	if (ctx.cr6.lt) goto loc_8234FA64;
	// b 0x8234fac8
	goto loc_8234FAC8;
loc_8234FA94:
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
	// addi r6,r8,11788
	ctx.r6.s64 = ctx.r8.s64 + 11788;
	// addi r9,r11,12560
	ctx.r9.s64 = ctx.r11.s64 + 12560;
	// addi r7,r10,12528
	ctx.r7.s64 = ctx.r10.s64 + 12528;
	// addi r5,r5,11720
	ctx.r5.s64 = ctx.r5.s64 + 11720;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,223
	ctx.r8.s64 = 223;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8234FAC8;
	sub_82372320(ctx, base);
loc_8234FAC8:
	// clrlwi. r30,r24,24
	ctx.r30.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8234fae0
	if (!ctx.cr0.eq) goto loc_8234FAE0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235cb10
	ctx.lr = 0x8234FAD8;
	sub_8235CB10(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// li r25,0
	ctx.r25.s64 = 0;
loc_8234FAE0:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lhz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 16);
	// bl 0x8234f148
	ctx.lr = 0x8234FAEC;
	sub_8234F148(ctx, base);
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// lwz r29,0(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x8234FB04;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b048
	ctx.lr = 0x8234FB14;
	sub_8236B048(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r25,24
	ctx.r4.u64 = ctx.r25.u32 & 0xFF;
	// bl 0x8236b3c0
	ctx.lr = 0x8234FB2C;
	sub_8236B3C0(ctx, base);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234fb9c
	if (ctx.cr6.eq) goto loc_8234FB9C;
	// rlwinm r4,r26,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// bl 0x821c06d8
	ctx.lr = 0x8234FB40;
	sub_821C06D8(ctx, base);
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r26,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r26.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234fb7c
	if (ctx.cr6.eq) goto loc_8234FB7C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FB5C:
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
	// bne 0x8234fb5c
	if (!ctx.cr0.eq) goto loc_8234FB5C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FB7C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234FB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r30.u32);
	// b 0x8234fbe4
	goto loc_8234FBE4;
loc_8234FB9C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c06d8
	ctx.lr = 0x8234FBA4;
	sub_821C06D8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234fbd8
	if (ctx.cr6.eq) goto loc_8234FBD8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FBB8:
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
	// bne 0x8234fbb8
	if (!ctx.cr0.eq) goto loc_8234FBB8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FBD8:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x82358b10
	ctx.lr = 0x8234FBE4;
	sub_82358B10(ctx, base);
loc_8234FBE4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FBEC;
	sub_821C0630(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8234fa44
	goto loc_8234FA44;
}

__attribute__((alias("__imp__sub_8234F980"))) PPC_WEAK_FUNC(sub_8234F980);
PPC_FUNC_IMPL(__imp__sub_8234F980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x8234F988;
	__savegprlr_22(ctx, base);
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
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r5,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r5.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82363e08
	ctx.lr = 0x8234F9AC;
	sub_82363E08(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234f9f0
	if (ctx.cr6.eq) goto loc_8234F9F0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234F9D0:
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
	// bne 0x8234f9d0
	if (!ctx.cr0.eq) goto loc_8234F9D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234F9F0:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x8235c3e0
	ctx.lr = 0x8234FA00;
	sub_8235C3E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234fa94
	if (ctx.cr0.eq) goto loc_8234FA94;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// bl 0x8235ca90
	ctx.lr = 0x8234FA14;
	sub_8235CA90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234fac8
	if (ctx.cr0.eq) goto loc_8234FAC8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r24,1
	ctx.r24.s64 = 1;
	// bl 0x8235cab8
	ctx.lr = 0x8234FA2C;
	sub_8235CAB8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// clrlwi. r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8234fa58
	if (!ctx.cr0.eq) goto loc_8234FA58;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FA40;
	sub_821C0630(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8234FA44:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FA4C;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_8234FA58:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8234fac8
	if (ctx.cr6.eq) goto loc_8234FAC8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8234FA64:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8235cae0
	ctx.lr = 0x8234FA7C;
	sub_8235CAE0(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// or r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 | ctx.r26.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8234fa64
	if (ctx.cr6.lt) goto loc_8234FA64;
	// b 0x8234fac8
	goto loc_8234FAC8;
loc_8234FA94:
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
	// addi r6,r8,11788
	ctx.r6.s64 = ctx.r8.s64 + 11788;
	// addi r9,r11,12560
	ctx.r9.s64 = ctx.r11.s64 + 12560;
	// addi r7,r10,12528
	ctx.r7.s64 = ctx.r10.s64 + 12528;
	// addi r5,r5,11720
	ctx.r5.s64 = ctx.r5.s64 + 11720;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,223
	ctx.r8.s64 = 223;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8234FAC8;
	sub_82372320(ctx, base);
loc_8234FAC8:
	// clrlwi. r30,r24,24
	ctx.r30.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8234fae0
	if (!ctx.cr0.eq) goto loc_8234FAE0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235cb10
	ctx.lr = 0x8234FAD8;
	sub_8235CB10(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// li r25,0
	ctx.r25.s64 = 0;
loc_8234FAE0:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lhz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 16);
	// bl 0x8234f148
	ctx.lr = 0x8234FAEC;
	sub_8234F148(ctx, base);
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// lwz r29,0(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x8234FB04;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b048
	ctx.lr = 0x8234FB14;
	sub_8236B048(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r25,24
	ctx.r4.u64 = ctx.r25.u32 & 0xFF;
	// bl 0x8236b3c0
	ctx.lr = 0x8234FB2C;
	sub_8236B3C0(ctx, base);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234fb9c
	if (ctx.cr6.eq) goto loc_8234FB9C;
	// rlwinm r4,r26,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// bl 0x821c06d8
	ctx.lr = 0x8234FB40;
	sub_821C06D8(ctx, base);
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r26,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r26.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234fb7c
	if (ctx.cr6.eq) goto loc_8234FB7C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FB5C:
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
	// bne 0x8234fb5c
	if (!ctx.cr0.eq) goto loc_8234FB5C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FB7C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234FB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r30.u32);
	// b 0x8234fbe4
	goto loc_8234FBE4;
loc_8234FB9C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c06d8
	ctx.lr = 0x8234FBA4;
	sub_821C06D8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234fbd8
	if (ctx.cr6.eq) goto loc_8234FBD8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FBB8:
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
	// bne 0x8234fbb8
	if (!ctx.cr0.eq) goto loc_8234FBB8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FBD8:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x82358b10
	ctx.lr = 0x8234FBE4;
	sub_82358B10(ctx, base);
loc_8234FBE4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FBEC;
	sub_821C0630(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8234fa44
	goto loc_8234FA44;
}

__attribute__((alias("__imp__sub_8234FBF4"))) PPC_WEAK_FUNC(sub_8234FBF4);
PPC_FUNC_IMPL(__imp__sub_8234FBF4) {
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
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x821c0630
	ctx.lr = 0x8234FC0C;
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

__attribute__((alias("__imp__sub_8234FC1C"))) PPC_WEAK_FUNC(sub_8234FC1C);
PPC_FUNC_IMPL(__imp__sub_8234FC1C) {
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
	// bl 0x821c0630
	ctx.lr = 0x8234FC34;
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

__attribute__((alias("__imp__sub_8234FC44"))) PPC_WEAK_FUNC(sub_8234FC44);
PPC_FUNC_IMPL(__imp__sub_8234FC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234FC48"))) PPC_WEAK_FUNC(sub_8234FC48);
PPC_FUNC_IMPL(__imp__sub_8234FC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,12792(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12792);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8234FC58;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8235b6f8
	ctx.lr = 0x8234FC7C;
	sub_8235B6F8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234fcb4
	if (ctx.cr6.eq) goto loc_8234FCB4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FC94:
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
	// bne 0x8234fc94
	if (!ctx.cr0.eq) goto loc_8234FC94;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FCB4:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x8235c3e0
	ctx.lr = 0x8234FCC4;
	sub_8235C3E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234fcfc
	if (ctx.cr0.eq) goto loc_8234FCFC;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8234fcfc
	if (!ctx.cr6.eq) goto loc_8234FCFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FCE4;
	sub_821C0630(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8234FCE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FCF0;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8234FCFC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// bl 0x8234f148
	ctx.lr = 0x8234FD08;
	sub_8234F148(ctx, base);
	// stb r28,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r28.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x8234FD1C;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b048
	ctx.lr = 0x8234FD2C;
	sub_8236B048(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82358a98
	ctx.lr = 0x8234FD40;
	sub_82358A98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c06d8
	ctx.lr = 0x8234FD4C;
	sub_821C06D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234fd80
	if (ctx.cr6.eq) goto loc_8234FD80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FD60:
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
	// bne 0x8234fd60
	if (!ctx.cr0.eq) goto loc_8234FD60;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FD80:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234FD98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FDA0;
	sub_821C0630(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8234fce8
	goto loc_8234FCE8;
}

__attribute__((alias("__imp__sub_8234FC50"))) PPC_WEAK_FUNC(sub_8234FC50);
PPC_FUNC_IMPL(__imp__sub_8234FC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8234FC58;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8235b6f8
	ctx.lr = 0x8234FC7C;
	sub_8235B6F8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234fcb4
	if (ctx.cr6.eq) goto loc_8234FCB4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FC94:
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
	// bne 0x8234fc94
	if (!ctx.cr0.eq) goto loc_8234FC94;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FCB4:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x8235c3e0
	ctx.lr = 0x8234FCC4;
	sub_8235C3E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234fcfc
	if (ctx.cr0.eq) goto loc_8234FCFC;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8234fcfc
	if (!ctx.cr6.eq) goto loc_8234FCFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FCE4;
	sub_821C0630(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8234FCE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FCF0;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8234FCFC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// bl 0x8234f148
	ctx.lr = 0x8234FD08;
	sub_8234F148(ctx, base);
	// stb r28,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r28.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x8234FD1C;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b048
	ctx.lr = 0x8234FD2C;
	sub_8236B048(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82358a98
	ctx.lr = 0x8234FD40;
	sub_82358A98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c06d8
	ctx.lr = 0x8234FD4C;
	sub_821C06D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234fd80
	if (ctx.cr6.eq) goto loc_8234FD80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FD60:
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
	// bne 0x8234fd60
	if (!ctx.cr0.eq) goto loc_8234FD60;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FD80:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234FD98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FDA0;
	sub_821C0630(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8234fce8
	goto loc_8234FCE8;
}

__attribute__((alias("__imp__sub_8234FDA8"))) PPC_WEAK_FUNC(sub_8234FDA8);
PPC_FUNC_IMPL(__imp__sub_8234FDA8) {
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
	// bl 0x821c0630
	ctx.lr = 0x8234FDC0;
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

__attribute__((alias("__imp__sub_8234FDD0"))) PPC_WEAK_FUNC(sub_8234FDD0);
PPC_FUNC_IMPL(__imp__sub_8234FDD0) {
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
	ctx.lr = 0x8234FDE8;
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

__attribute__((alias("__imp__sub_8234FDF8"))) PPC_WEAK_FUNC(sub_8234FDF8);
PPC_FUNC_IMPL(__imp__sub_8234FDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,12928(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12928);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8234FE08;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x8234fe30
	if (!ctx.cr6.eq) goto loc_8234FE30;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8234FE30:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82363e10
	ctx.lr = 0x8234FE38;
	sub_82363E10(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8234fe74
	if (ctx.cr0.eq) goto loc_8234FE74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357b90
	ctx.lr = 0x8234FE48;
	sub_82357B90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234fe74
	if (ctx.cr0.eq) goto loc_8234FE74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82363e08
	ctx.lr = 0x8234FE58;
	sub_82363E08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234fe74
	if (ctx.cr0.eq) goto loc_8234FE74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82363e08
	ctx.lr = 0x8234FE68;
	sub_82363E08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357c00
	ctx.lr = 0x8234FE74;
	sub_82357C00(ctx, base);
loc_8234FE74:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq 0x8234fed8
	if (ctx.cr0.eq) goto loc_8234FED8;
	// beq cr6,0x8234febc
	if (ctx.cr6.eq) goto loc_8234FEBC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FE9C:
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
	// bne 0x8234fe9c
	if (!ctx.cr0.eq) goto loc_8234FE9C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FEBC:
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234f428
	ctx.lr = 0x8234FED4;
	sub_8234F428(ctx, base);
	// b 0x8234ff18
	goto loc_8234FF18;
loc_8234FED8:
	// beq cr6,0x8234ff00
	if (ctx.cr6.eq) goto loc_8234FF00;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FEE0:
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
	// bne 0x8234fee0
	if (!ctx.cr0.eq) goto loc_8234FEE0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FF00:
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234f810
	ctx.lr = 0x8234FF18;
	sub_8234F810(ctx, base);
loc_8234FF18:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8234ff38
	if (ctx.cr6.eq) goto loc_8234FF38;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8234ff38
	if (ctx.cr0.eq) goto loc_8234FF38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357c10
	ctx.lr = 0x8234FF38;
	sub_82357C10(ctx, base);
loc_8234FF38:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FF40;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234FE00"))) PPC_WEAK_FUNC(sub_8234FE00);
PPC_FUNC_IMPL(__imp__sub_8234FE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8234FE08;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x8234fe30
	if (!ctx.cr6.eq) goto loc_8234FE30;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8234FE30:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82363e10
	ctx.lr = 0x8234FE38;
	sub_82363E10(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8234fe74
	if (ctx.cr0.eq) goto loc_8234FE74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357b90
	ctx.lr = 0x8234FE48;
	sub_82357B90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234fe74
	if (ctx.cr0.eq) goto loc_8234FE74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82363e08
	ctx.lr = 0x8234FE58;
	sub_82363E08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234fe74
	if (ctx.cr0.eq) goto loc_8234FE74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82363e08
	ctx.lr = 0x8234FE68;
	sub_82363E08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357c00
	ctx.lr = 0x8234FE74;
	sub_82357C00(ctx, base);
loc_8234FE74:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq 0x8234fed8
	if (ctx.cr0.eq) goto loc_8234FED8;
	// beq cr6,0x8234febc
	if (ctx.cr6.eq) goto loc_8234FEBC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FE9C:
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
	// bne 0x8234fe9c
	if (!ctx.cr0.eq) goto loc_8234FE9C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FEBC:
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234f428
	ctx.lr = 0x8234FED4;
	sub_8234F428(ctx, base);
	// b 0x8234ff18
	goto loc_8234FF18;
loc_8234FED8:
	// beq cr6,0x8234ff00
	if (ctx.cr6.eq) goto loc_8234FF00;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FEE0:
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
	// bne 0x8234fee0
	if (!ctx.cr0.eq) goto loc_8234FEE0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FF00:
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234f810
	ctx.lr = 0x8234FF18;
	sub_8234F810(ctx, base);
loc_8234FF18:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8234ff38
	if (ctx.cr6.eq) goto loc_8234FF38;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8234ff38
	if (ctx.cr0.eq) goto loc_8234FF38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357c10
	ctx.lr = 0x8234FF38;
	sub_82357C10(ctx, base);
loc_8234FF38:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c0630
	ctx.lr = 0x8234FF40;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234FF4C"))) PPC_WEAK_FUNC(sub_8234FF4C);
PPC_FUNC_IMPL(__imp__sub_8234FF4C) {
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
	ctx.lr = 0x8234FF64;
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

__attribute__((alias("__imp__sub_8234FF74"))) PPC_WEAK_FUNC(sub_8234FF74);
PPC_FUNC_IMPL(__imp__sub_8234FF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234FF78"))) PPC_WEAK_FUNC(sub_8234FF78);
PPC_FUNC_IMPL(__imp__sub_8234FF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,13008(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13008);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8234FF88;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82350040
	if (ctx.cr0.eq) goto loc_82350040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8234ffe0
	if (ctx.cr6.eq) goto loc_8234FFE0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FFC0:
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
	// bne 0x8234ffc0
	if (!ctx.cr0.eq) goto loc_8234FFC0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FFE0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82350014
	if (ctx.cr6.eq) goto loc_82350014;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FFF4:
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
	// bne 0x8234fff4
	if (!ctx.cr0.eq) goto loc_8234FFF4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82350014:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x8234f980
	ctx.lr = 0x82350020;
	sub_8234F980(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x8235002C;
	sub_821C0630(ctx, base);
loc_8235002C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x82350034;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82350040:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8235006c
	if (ctx.cr6.eq) goto loc_8235006C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8235004C:
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
	// bne 0x8235004c
	if (!ctx.cr0.eq) goto loc_8235004C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8235006C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x823500a0
	if (ctx.cr6.eq) goto loc_823500A0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82350080:
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
	// bne 0x82350080
	if (!ctx.cr0.eq) goto loc_82350080;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823500A0:
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// bl 0x8234fc50
	ctx.lr = 0x823500AC;
	sub_8234FC50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x823500B8;
	sub_821C0630(ctx, base);
	// b 0x8235002c
	goto loc_8235002C;
}

__attribute__((alias("__imp__sub_8234FF80"))) PPC_WEAK_FUNC(sub_8234FF80);
PPC_FUNC_IMPL(__imp__sub_8234FF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8234FF88;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82350040
	if (ctx.cr0.eq) goto loc_82350040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8234ffe0
	if (ctx.cr6.eq) goto loc_8234FFE0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FFC0:
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
	// bne 0x8234ffc0
	if (!ctx.cr0.eq) goto loc_8234FFC0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234FFE0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82350014
	if (ctx.cr6.eq) goto loc_82350014;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8234FFF4:
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
	// bne 0x8234fff4
	if (!ctx.cr0.eq) goto loc_8234FFF4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82350014:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x8234f980
	ctx.lr = 0x82350020;
	sub_8234F980(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x8235002C;
	sub_821C0630(ctx, base);
loc_8235002C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x82350034;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82350040:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8235006c
	if (ctx.cr6.eq) goto loc_8235006C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8235004C:
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
	// bne 0x8235004c
	if (!ctx.cr0.eq) goto loc_8235004C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8235006C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x823500a0
	if (ctx.cr6.eq) goto loc_823500A0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82350080:
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
	// bne 0x82350080
	if (!ctx.cr0.eq) goto loc_82350080;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823500A0:
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// bl 0x8234fc50
	ctx.lr = 0x823500AC;
	sub_8234FC50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x823500B8;
	sub_821C0630(ctx, base);
	// b 0x8235002c
	goto loc_8235002C;
}

__attribute__((alias("__imp__sub_823500BC"))) PPC_WEAK_FUNC(sub_823500BC);
PPC_FUNC_IMPL(__imp__sub_823500BC) {
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
	// bl 0x821c0630
	ctx.lr = 0x823500D4;
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

__attribute__((alias("__imp__sub_823500E4"))) PPC_WEAK_FUNC(sub_823500E4);
PPC_FUNC_IMPL(__imp__sub_823500E4) {
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
	ctx.lr = 0x823500FC;
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

__attribute__((alias("__imp__sub_8235010C"))) PPC_WEAK_FUNC(sub_8235010C);
PPC_FUNC_IMPL(__imp__sub_8235010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350110"))) PPC_WEAK_FUNC(sub_82350110);
PPC_FUNC_IMPL(__imp__sub_82350110) {
	PPC_FUNC_PROLOGUE();
	// b 0x8236a3f0
	sub_8236A3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350114"))) PPC_WEAK_FUNC(sub_82350114);
PPC_FUNC_IMPL(__imp__sub_82350114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350118"))) PPC_WEAK_FUNC(sub_82350118);
PPC_FUNC_IMPL(__imp__sub_82350118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350120"))) PPC_WEAK_FUNC(sub_82350120);
PPC_FUNC_IMPL(__imp__sub_82350120) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82350168
	if (ctx.cr6.eq) goto loc_82350168;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350164
	if (ctx.cr6.eq) goto loc_82350164;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82350164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350164:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_82350168:
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

__attribute__((alias("__imp__sub_82350180"))) PPC_WEAK_FUNC(sub_82350180);
PPC_FUNC_IMPL(__imp__sub_82350180) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350188"))) PPC_WEAK_FUNC(sub_82350188);
PPC_FUNC_IMPL(__imp__sub_82350188) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350190"))) PPC_WEAK_FUNC(sub_82350190);
PPC_FUNC_IMPL(__imp__sub_82350190) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350204
	if (ctx.cr6.eq) goto loc_82350204;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823501BC:
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
	// bne 0x823501bc
	if (!ctx.cr0.eq) goto loc_823501BC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82350204
	if (!ctx.cr6.eq) goto loc_82350204;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350204
	if (ctx.cr6.eq) goto loc_82350204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82350204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350204:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82350234
	if (ctx.cr6.eq) goto loc_82350234;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82350214:
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
	// bne 0x82350214
	if (!ctx.cr0.eq) goto loc_82350214;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82350234:
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

__attribute__((alias("__imp__sub_8235024C"))) PPC_WEAK_FUNC(sub_8235024C);
PPC_FUNC_IMPL(__imp__sub_8235024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350250"))) PPC_WEAK_FUNC(sub_82350250);
PPC_FUNC_IMPL(__imp__sub_82350250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82350284
	if (ctx.cr6.eq) goto loc_82350284;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82350264:
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
	// bne 0x82350264
	if (!ctx.cr0.eq) goto loc_82350264;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82350284:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x823502b8
	if (ctx.cr6.eq) goto loc_823502B8;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82350298:
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
	// bne 0x82350298
	if (!ctx.cr0.eq) goto loc_82350298;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_823502B8:
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823502C0"))) PPC_WEAK_FUNC(sub_823502C0);
PPC_FUNC_IMPL(__imp__sub_823502C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x821c0630
	sub_821C0630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823502C4"))) PPC_WEAK_FUNC(sub_823502C4);
PPC_FUNC_IMPL(__imp__sub_823502C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823502C8"))) PPC_WEAK_FUNC(sub_823502C8);
PPC_FUNC_IMPL(__imp__sub_823502C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r8,r4,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_823502DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350318
	if (ctx.cr6.eq) goto loc_82350318;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq 0x82350318
	if (ctx.cr0.eq) goto loc_82350318;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_823502F8:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823502f8
	if (!ctx.cr0.eq) goto loc_823502F8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82350318:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823502dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823502DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350324"))) PPC_WEAK_FUNC(sub_82350324);
PPC_FUNC_IMPL(__imp__sub_82350324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350328"))) PPC_WEAK_FUNC(sub_82350328);
PPC_FUNC_IMPL(__imp__sub_82350328) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x8235034C;
	sub_8236A7A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82350370
	if (ctx.cr0.eq) goto loc_82350370;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a490
	ctx.lr = 0x82350364;
	sub_8236A490(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82350374
	if (!ctx.cr0.eq) goto loc_82350374;
loc_82350370:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82350374:
	// clrlwi. r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823503a0
	if (ctx.cr0.eq) goto loc_823503A0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235038C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8235038c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235038C;
loc_823503A0:
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

__attribute__((alias("__imp__sub_823503B8"))) PPC_WEAK_FUNC(sub_823503B8);
PPC_FUNC_IMPL(__imp__sub_823503B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x823503C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350424
	if (ctx.cr6.eq) goto loc_82350424;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823503E8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350410
	if (ctx.cr6.eq) goto loc_82350410;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8234e920
	ctx.lr = 0x82350400;
	sub_8234E920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82350434
	if (ctx.cr6.eq) goto loc_82350434;
loc_82350410:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823503e8
	if (ctx.cr6.lt) goto loc_823503E8;
loc_82350424:
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
loc_82350428:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82350434:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82350428
	if (ctx.cr6.eq) goto loc_82350428;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82350450:
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
	// bne 0x82350450
	if (!ctx.cr0.eq) goto loc_82350450;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82350428
	goto loc_82350428;
}

__attribute__((alias("__imp__sub_82350474"))) PPC_WEAK_FUNC(sub_82350474);
PPC_FUNC_IMPL(__imp__sub_82350474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350478"))) PPC_WEAK_FUNC(sub_82350478);
PPC_FUNC_IMPL(__imp__sub_82350478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,13392(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13392);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82350488;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x8235cf78
	ctx.lr = 0x823504A0;
	sub_8235CF78(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x8235d3c8
	ctx.lr = 0x823504AC;
	sub_8235D3C8(ctx, base);
	// addi r4,r31,82
	ctx.r4.s64 = ctx.r31.s64 + 82;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82350328
	ctx.lr = 0x823504B8;
	sub_82350328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823505b4
	if (ctx.cr0.eq) goto loc_823505B4;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r7,13288
	ctx.r26.s64 = ctx.r7.s64 + 13288;
	// addi r30,r8,-25772
	ctx.r30.s64 = ctx.r8.s64 + -25772;
	// addi r29,r9,13260
	ctx.r29.s64 = ctx.r9.s64 + 13260;
	// addi r28,r10,13244
	ctx.r28.s64 = ctx.r10.s64 + 13244;
	// addi r27,r11,13216
	ctx.r27.s64 = ctx.r11.s64 + 13216;
loc_823504E8:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821c07f0
	ctx.lr = 0x823504F4;
	sub_821C07F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823505cc
	if (ctx.cr0.eq) goto loc_823505CC;
	// addi r4,r24,20
	ctx.r4.s64 = ctx.r24.s64 + 20;
	// lhz r5,82(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82356918
	ctx.lr = 0x8235050C;
	sub_82356918(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350578
	if (ctx.cr6.eq) goto loc_82350578;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235cfb0
	ctx.lr = 0x82350524;
	sub_8235CFB0(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8235d660
	ctx.lr = 0x8235052C;
	sub_8235D660(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82350560
	if (ctx.cr6.eq) goto loc_82350560;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82350540:
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
	// bne 0x82350540
	if (!ctx.cr0.eq) goto loc_82350540;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82350560:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// bl 0x8235c340
	ctx.lr = 0x8235056C;
	sub_8235C340(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82350574;
	sub_821C0630(ctx, base);
	// b 0x82350598
	goto loc_82350598;
loc_82350578:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,481
	ctx.r8.s64 = 481;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82350598;
	sub_82372320(ctx, base);
loc_82350598:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x823505A0;
	sub_821C0630(ctx, base);
	// addi r4,r31,82
	ctx.r4.s64 = ctx.r31.s64 + 82;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82350328
	ctx.lr = 0x823505AC;
	sub_82350328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823504e8
	if (!ctx.cr0.eq) goto loc_823504E8;
loc_823505B4:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823505BC;
	sub_821C0630(ctx, base);
loc_823505BC:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x823505C4;
	sub_821C0630(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_823505CC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r9,r11,13168
	ctx.r9.s64 = ctx.r11.s64 + 13168;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,466
	ctx.r8.s64 = 466;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823505F0;
	sub_82372320(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823505F8;
	sub_821C0630(ctx, base);
	// b 0x823505bc
	goto loc_823505BC;
}

__attribute__((alias("__imp__sub_82350480"))) PPC_WEAK_FUNC(sub_82350480);
PPC_FUNC_IMPL(__imp__sub_82350480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82350488;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x8235cf78
	ctx.lr = 0x823504A0;
	sub_8235CF78(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x8235d3c8
	ctx.lr = 0x823504AC;
	sub_8235D3C8(ctx, base);
	// addi r4,r31,82
	ctx.r4.s64 = ctx.r31.s64 + 82;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82350328
	ctx.lr = 0x823504B8;
	sub_82350328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823505b4
	if (ctx.cr0.eq) goto loc_823505B4;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r7,13288
	ctx.r26.s64 = ctx.r7.s64 + 13288;
	// addi r30,r8,-25772
	ctx.r30.s64 = ctx.r8.s64 + -25772;
	// addi r29,r9,13260
	ctx.r29.s64 = ctx.r9.s64 + 13260;
	// addi r28,r10,13244
	ctx.r28.s64 = ctx.r10.s64 + 13244;
	// addi r27,r11,13216
	ctx.r27.s64 = ctx.r11.s64 + 13216;
loc_823504E8:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821c07f0
	ctx.lr = 0x823504F4;
	sub_821C07F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823505cc
	if (ctx.cr0.eq) goto loc_823505CC;
	// addi r4,r24,20
	ctx.r4.s64 = ctx.r24.s64 + 20;
	// lhz r5,82(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82356918
	ctx.lr = 0x8235050C;
	sub_82356918(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350578
	if (ctx.cr6.eq) goto loc_82350578;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235cfb0
	ctx.lr = 0x82350524;
	sub_8235CFB0(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8235d660
	ctx.lr = 0x8235052C;
	sub_8235D660(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82350560
	if (ctx.cr6.eq) goto loc_82350560;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82350540:
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
	// bne 0x82350540
	if (!ctx.cr0.eq) goto loc_82350540;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82350560:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// bl 0x8235c340
	ctx.lr = 0x8235056C;
	sub_8235C340(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82350574;
	sub_821C0630(ctx, base);
	// b 0x82350598
	goto loc_82350598;
loc_82350578:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,481
	ctx.r8.s64 = 481;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82350598;
	sub_82372320(ctx, base);
loc_82350598:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x823505A0;
	sub_821C0630(ctx, base);
	// addi r4,r31,82
	ctx.r4.s64 = ctx.r31.s64 + 82;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82350328
	ctx.lr = 0x823505AC;
	sub_82350328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823504e8
	if (!ctx.cr0.eq) goto loc_823504E8;
loc_823505B4:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823505BC;
	sub_821C0630(ctx, base);
loc_823505BC:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x823505C4;
	sub_821C0630(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_823505CC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r9,r11,13168
	ctx.r9.s64 = ctx.r11.s64 + 13168;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,466
	ctx.r8.s64 = 466;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823505F0;
	sub_82372320(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823505F8;
	sub_821C0630(ctx, base);
	// b 0x823505bc
	goto loc_823505BC;
}

__attribute__((alias("__imp__sub_823505FC"))) PPC_WEAK_FUNC(sub_823505FC);
PPC_FUNC_IMPL(__imp__sub_823505FC) {
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
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82350614;
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

__attribute__((alias("__imp__sub_82350624"))) PPC_WEAK_FUNC(sub_82350624);
PPC_FUNC_IMPL(__imp__sub_82350624) {
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8235063C;
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

__attribute__((alias("__imp__sub_8235064C"))) PPC_WEAK_FUNC(sub_8235064C);
PPC_FUNC_IMPL(__imp__sub_8235064C) {
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
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82350664;
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

__attribute__((alias("__imp__sub_82350674"))) PPC_WEAK_FUNC(sub_82350674);
PPC_FUNC_IMPL(__imp__sub_82350674) {
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
	ctx.lr = 0x8235068C;
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

__attribute__((alias("__imp__sub_8235069C"))) PPC_WEAK_FUNC(sub_8235069C);
PPC_FUNC_IMPL(__imp__sub_8235069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823506A0"))) PPC_WEAK_FUNC(sub_823506A0);
PPC_FUNC_IMPL(__imp__sub_823506A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,13584(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13584);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823506B0;
	__savegprlr_28(ctx, base);
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x823506D8;
	sub_8236A338(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823506f4
	if (ctx.cr0.eq) goto loc_823506F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8235d0f0
	ctx.lr = 0x823506F0;
	sub_8235D0F0(ctx, base);
	// b 0x823506f8
	goto loc_823506F8;
loc_823506F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823506F8:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350728
	if (ctx.cr6.eq) goto loc_82350728;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82350708:
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
	// bne 0x82350708
	if (!ctx.cr0.eq) goto loc_82350708;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82350728:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x8235d3c8
	ctx.lr = 0x8235073C;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b3c0
	ctx.lr = 0x82350754;
	sub_8236B3C0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234e920
	ctx.lr = 0x82350760;
	sub_8234E920(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b4a0
	ctx.lr = 0x82350770;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b048
	ctx.lr = 0x82350780;
	sub_8236B048(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x823507b8
	if (ctx.cr6.eq) goto loc_823507B8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82350798:
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
	// bne 0x82350798
	if (!ctx.cr0.eq) goto loc_82350798;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823507B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823507CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823507D4;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x823507DC;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823506A8"))) PPC_WEAK_FUNC(sub_823506A8);
PPC_FUNC_IMPL(__imp__sub_823506A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823506B0;
	__savegprlr_28(ctx, base);
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x823506D8;
	sub_8236A338(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823506f4
	if (ctx.cr0.eq) goto loc_823506F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8235d0f0
	ctx.lr = 0x823506F0;
	sub_8235D0F0(ctx, base);
	// b 0x823506f8
	goto loc_823506F8;
loc_823506F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823506F8:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350728
	if (ctx.cr6.eq) goto loc_82350728;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82350708:
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
	// bne 0x82350708
	if (!ctx.cr0.eq) goto loc_82350708;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82350728:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x8235d3c8
	ctx.lr = 0x8235073C;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b3c0
	ctx.lr = 0x82350754;
	sub_8236B3C0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234e920
	ctx.lr = 0x82350760;
	sub_8234E920(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b4a0
	ctx.lr = 0x82350770;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b048
	ctx.lr = 0x82350780;
	sub_8236B048(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x823507b8
	if (ctx.cr6.eq) goto loc_823507B8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82350798:
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
	// bne 0x82350798
	if (!ctx.cr0.eq) goto loc_82350798;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823507B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823507CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823507D4;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x823507DC;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823507E8"))) PPC_WEAK_FUNC(sub_823507E8);
PPC_FUNC_IMPL(__imp__sub_823507E8) {
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
	// bl 0x821c0630
	ctx.lr = 0x82350800;
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

__attribute__((alias("__imp__sub_82350810"))) PPC_WEAK_FUNC(sub_82350810);
PPC_FUNC_IMPL(__imp__sub_82350810) {
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
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82350110
	ctx.lr = 0x82350828;
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

__attribute__((alias("__imp__sub_82350838"))) PPC_WEAK_FUNC(sub_82350838);
PPC_FUNC_IMPL(__imp__sub_82350838) {
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
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82350868
	if (ctx.cr0.eq) goto loc_82350868;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x821c0630
	ctx.lr = 0x82350868;
	sub_821C0630(ctx, base);
loc_82350868:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350878"))) PPC_WEAK_FUNC(sub_82350878);
PPC_FUNC_IMPL(__imp__sub_82350878) {
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
	// bl 0x821c0630
	ctx.lr = 0x82350890;
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

__attribute__((alias("__imp__sub_823508A0"))) PPC_WEAK_FUNC(sub_823508A0);
PPC_FUNC_IMPL(__imp__sub_823508A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,13736(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13736);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823508B0;
	__savegprlr_28(ctx, base);
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x823508D8;
	sub_8236A338(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823508f4
	if (ctx.cr0.eq) goto loc_823508F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8235d0f0
	ctx.lr = 0x823508F0;
	sub_8235D0F0(ctx, base);
	// b 0x823508f8
	goto loc_823508F8;
loc_823508F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823508F8:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350928
	if (ctx.cr6.eq) goto loc_82350928;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82350908:
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
	// bne 0x82350908
	if (!ctx.cr0.eq) goto loc_82350908;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82350928:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x8235d3c8
	ctx.lr = 0x8235093C;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8236b3c0
	ctx.lr = 0x82350954;
	sub_8236B3C0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234e920
	ctx.lr = 0x82350960;
	sub_8234E920(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b4a0
	ctx.lr = 0x82350970;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b048
	ctx.lr = 0x82350980;
	sub_8236B048(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82350988;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82350990;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823508A8"))) PPC_WEAK_FUNC(sub_823508A8);
PPC_FUNC_IMPL(__imp__sub_823508A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823508B0;
	__savegprlr_28(ctx, base);
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x823508D8;
	sub_8236A338(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823508f4
	if (ctx.cr0.eq) goto loc_823508F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8235d0f0
	ctx.lr = 0x823508F0;
	sub_8235D0F0(ctx, base);
	// b 0x823508f8
	goto loc_823508F8;
loc_823508F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823508F8:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350928
	if (ctx.cr6.eq) goto loc_82350928;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82350908:
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
	// bne 0x82350908
	if (!ctx.cr0.eq) goto loc_82350908;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82350928:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x8235d3c8
	ctx.lr = 0x8235093C;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8236b3c0
	ctx.lr = 0x82350954;
	sub_8236B3C0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234e920
	ctx.lr = 0x82350960;
	sub_8234E920(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b4a0
	ctx.lr = 0x82350970;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b048
	ctx.lr = 0x82350980;
	sub_8236B048(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82350988;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82350990;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235099C"))) PPC_WEAK_FUNC(sub_8235099C);
PPC_FUNC_IMPL(__imp__sub_8235099C) {
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
	// bl 0x821c0630
	ctx.lr = 0x823509B4;
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

__attribute__((alias("__imp__sub_823509C4"))) PPC_WEAK_FUNC(sub_823509C4);
PPC_FUNC_IMPL(__imp__sub_823509C4) {
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
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82350110
	ctx.lr = 0x823509DC;
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

__attribute__((alias("__imp__sub_823509EC"))) PPC_WEAK_FUNC(sub_823509EC);
PPC_FUNC_IMPL(__imp__sub_823509EC) {
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
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82350a1c
	if (ctx.cr0.eq) goto loc_82350A1C;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x821c0630
	ctx.lr = 0x82350A1C;
	sub_821C0630(ctx, base);
loc_82350A1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350A2C"))) PPC_WEAK_FUNC(sub_82350A2C);
PPC_FUNC_IMPL(__imp__sub_82350A2C) {
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
	// bl 0x821c0630
	ctx.lr = 0x82350A44;
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

__attribute__((alias("__imp__sub_82350A54"))) PPC_WEAK_FUNC(sub_82350A54);
PPC_FUNC_IMPL(__imp__sub_82350A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350A58"))) PPC_WEAK_FUNC(sub_82350A58);
PPC_FUNC_IMPL(__imp__sub_82350A58) {
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
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82350a90
	if (ctx.cr6.eq) goto loc_82350A90;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8236a338
	ctx.lr = 0x82350A8C;
	sub_8236A338(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82350A90:
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

__attribute__((alias("__imp__sub_82350AA8"))) PPC_WEAK_FUNC(sub_82350AA8);
PPC_FUNC_IMPL(__imp__sub_82350AA8) {
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
	// ble cr6,0x82350b0c
	if (!ctx.cr6.gt) goto loc_82350B0C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82350ae0
	if (ctx.cr6.gt) goto loc_82350AE0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82350AE0:
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82350af0
	if (ctx.cr6.gt) goto loc_82350AF0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82350AF0:
	// subf. r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// beq 0x82350b08
	if (ctx.cr0.eq) goto loc_82350B08;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a390
	ctx.lr = 0x82350B08;
	sub_8236A390(ctx, base);
loc_82350B08:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82350B0C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82350B20"))) PPC_WEAK_FUNC(sub_82350B20);
PPC_FUNC_IMPL(__imp__sub_82350B20) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82350b64
	if (!ctx.cr6.gt) goto loc_82350B64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82350ba4
	if (!ctx.cr6.gt) goto loc_82350BA4;
loc_82350B64:
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
	// addi r6,r8,13988
	ctx.r6.s64 = ctx.r8.s64 + 13988;
	// addi r9,r11,13944
	ctx.r9.s64 = ctx.r11.s64 + 13944;
	// addi r7,r10,13848
	ctx.r7.s64 = ctx.r10.s64 + 13848;
	// addi r5,r5,13840
	ctx.r5.s64 = ctx.r5.s64 + 13840;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,479
	ctx.r8.s64 = 479;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82350B98;
	sub_82372320(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82350BA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8236b768
	ctx.lr = 0x82350BB4;
	sub_8236B768(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x8236a338
	ctx.lr = 0x82350BE8;
	sub_8236A338(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233eaf0
	ctx.lr = 0x82350BFC;
	sub_8233EAF0(ctx, base);
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

__attribute__((alias("__imp__sub_82350C18"))) PPC_WEAK_FUNC(sub_82350C18);
PPC_FUNC_IMPL(__imp__sub_82350C18) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82350c5c
	if (!ctx.cr6.gt) goto loc_82350C5C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82350c9c
	if (!ctx.cr6.gt) goto loc_82350C9C;
loc_82350C5C:
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
	// addi r6,r8,13988
	ctx.r6.s64 = ctx.r8.s64 + 13988;
	// addi r9,r11,13944
	ctx.r9.s64 = ctx.r11.s64 + 13944;
	// addi r7,r10,14056
	ctx.r7.s64 = ctx.r10.s64 + 14056;
	// addi r5,r5,13840
	ctx.r5.s64 = ctx.r5.s64 + 13840;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,479
	ctx.r8.s64 = 479;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82350C90;
	sub_82372320(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82350C9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8236b768
	ctx.lr = 0x82350CAC;
	sub_8236B768(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x8236a338
	ctx.lr = 0x82350CE0;
	sub_8236A338(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233eaf0
	ctx.lr = 0x82350CF4;
	sub_8233EAF0(ctx, base);
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

__attribute__((alias("__imp__sub_82350D10"))) PPC_WEAK_FUNC(sub_82350D10);
PPC_FUNC_IMPL(__imp__sub_82350D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82350D18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82350d80
	if (!ctx.cr6.gt) goto loc_82350D80;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82350D38:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x82350d5c
	goto loc_82350D5C;
loc_82350D44:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c0630
	ctx.lr = 0x82350D54;
	sub_821C0630(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82350D5C;
	sub_8236A3F0(ctx, base);
loc_82350D5C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82350d44
	if (!ctx.cr6.eq) goto loc_82350D44;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82350d38
	if (ctx.cr6.lt) goto loc_82350D38;
loc_82350D80:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350D8C"))) PPC_WEAK_FUNC(sub_82350D8C);
PPC_FUNC_IMPL(__imp__sub_82350D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350D90"))) PPC_WEAK_FUNC(sub_82350D90);
PPC_FUNC_IMPL(__imp__sub_82350D90) {
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
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82350DB8:
	// lbzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// mulli r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 * 31;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82350db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82350DB8;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82350e10
	if (ctx.cr6.eq) goto loc_82350E10;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82350DF4:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82350e2c
	if (ctx.cr6.eq) goto loc_82350E2C;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82350df4
	if (!ctx.cr6.eq) goto loc_82350DF4;
loc_82350E10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82350E14:
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
loc_82350E2C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82350e40
	if (ctx.cr6.eq) goto loc_82350E40;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// b 0x82350e48
	goto loc_82350E48;
loc_82350E40:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82350E48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823689c8
	ctx.lr = 0x82350E54;
	sub_823689C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235cf08
	ctx.lr = 0x82350E5C;
	sub_8235CF08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82350E64;
	sub_8236A3F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82350e14
	goto loc_82350E14;
}

__attribute__((alias("__imp__sub_82350E78"))) PPC_WEAK_FUNC(sub_82350E78);
PPC_FUNC_IMPL(__imp__sub_82350E78) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82350ed0
	if (ctx.cr6.eq) goto loc_82350ED0;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82350e78
	ctx.lr = 0x82350EA8;
	sub_82350E78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82350e78
	ctx.lr = 0x82350EB4;
	sub_82350E78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x82350EBC;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82350EC4;
	sub_8236A3F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82350ED0:
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

__attribute__((alias("__imp__sub_82350EE8"))) PPC_WEAK_FUNC(sub_82350EE8);
PPC_FUNC_IMPL(__imp__sub_82350EE8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bgt cr6,0x82350f0c
	if (ctx.cr6.gt) goto loc_82350F0C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82350F0C:
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq 0x82350f58
	if (ctx.cr0.eq) goto loc_82350F58;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82350f50
	if (!ctx.cr0.gt) goto loc_82350F50;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blt cr6,0x82350f44
	if (ctx.cr6.lt) goto loc_82350F44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82350F44:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82350aa8
	ctx.lr = 0x82350F50;
	sub_82350AA8(ctx, base);
loc_82350F50:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82350F58:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82350F6C"))) PPC_WEAK_FUNC(sub_82350F6C);
PPC_FUNC_IMPL(__imp__sub_82350F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350F70"))) PPC_WEAK_FUNC(sub_82350F70);
PPC_FUNC_IMPL(__imp__sub_82350F70) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// bl 0x82370a70
	ctx.lr = 0x82350F8C;
	sub_82370A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350F9C"))) PPC_WEAK_FUNC(sub_82350F9C);
PPC_FUNC_IMPL(__imp__sub_82350F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350FA0"))) PPC_WEAK_FUNC(sub_82350FA0);
PPC_FUNC_IMPL(__imp__sub_82350FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,14368(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14368);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82350FB0;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r4,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r5,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r5.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8234eac8
	ctx.lr = 0x82350FD4;
	sub_8234EAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235cf78
	ctx.lr = 0x82350FE0;
	sub_8235CF78(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82350FE8;
	sub_8236A338(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8235100c
	if (ctx.cr0.eq) goto loc_8235100C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8235d0f0
	ctx.lr = 0x82351004;
	sub_8235D0F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82351010
	goto loc_82351010;
loc_8235100C:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82351010:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82351040
	if (ctx.cr6.eq) goto loc_82351040;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82351020:
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
	// bne 0x82351020
	if (!ctx.cr0.eq) goto loc_82351020;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82351040:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8235d3c8
	ctx.lr = 0x8235104C;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b3c0
	ctx.lr = 0x82351064;
	sub_8236B3C0(ctx, base);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234e920
	ctx.lr = 0x82351070;
	sub_8234E920(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b4a0
	ctx.lr = 0x82351080;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b048
	ctx.lr = 0x82351090;
	sub_8236B048(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234ef48
	ctx.lr = 0x8235109C;
	sub_8234EF48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8234f148
	ctx.lr = 0x823510AC;
	sub_8234F148(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// beq cr6,0x823510e0
	if (ctx.cr6.eq) goto loc_823510E0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823510C0:
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
	// bne 0x823510c0
	if (!ctx.cr0.eq) goto loc_823510C0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823510E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823510F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8234ecb8
	ctx.lr = 0x82351104;
	sub_8234ECB8(ctx, base);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r29,r11,-25772
	ctx.r29.s64 = ctx.r11.s64 + -25772;
	// addi r28,r10,13260
	ctx.r28.s64 = ctx.r10.s64 + 13260;
	// addi r27,r9,13244
	ctx.r27.s64 = ctx.r9.s64 + 13244;
	// addi r26,r8,14272
	ctx.r26.s64 = ctx.r8.s64 + 14272;
	// beq cr6,0x82351168
	if (ctx.cr6.eq) goto loc_82351168;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r23,100
	ctx.r3.s64 = ctx.r23.s64 + 100;
	// bl 0x82359588
	ctx.lr = 0x8235113C;
	sub_82359588(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82351168
	if (!ctx.cr0.eq) goto loc_82351168;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r9,r11,14212
	ctx.r9.s64 = ctx.r11.s64 + 14212;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r8,142
	ctx.r8.s64 = 142;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82351168;
	sub_82372320(ctx, base);
loc_82351168:
	// stw r22,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r22.u32);
	// addi r30,r23,100
	ctx.r30.s64 = ctx.r23.s64 + 100;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82350d90
	ctx.lr = 0x82351180;
	sub_82350D90(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82351198
	if (ctx.cr6.eq) goto loc_82351198;
	// stw r22,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r22.u32);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bl 0x8234ebe0
	ctx.lr = 0x82351198;
	sub_8234EBE0(ctx, base);
loc_82351198:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359480
	ctx.lr = 0x823511A8;
	sub_82359480(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823511d4
	if (!ctx.cr0.eq) goto loc_823511D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r9,r11,14168
	ctx.r9.s64 = ctx.r11.s64 + 14168;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r8,158
	ctx.r8.s64 = 158;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823511D4;
	sub_82372320(ctx, base);
loc_823511D4:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8234eac8
	ctx.lr = 0x823511DC;
	sub_8234EAC8(ctx, base);
	// bl 0x82358888
	ctx.lr = 0x823511E0;
	sub_82358888(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82351214
	if (ctx.cr6.eq) goto loc_82351214;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823511F4:
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
	// bne 0x823511f4
	if (!ctx.cr0.eq) goto loc_823511F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82351214:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8234ebe0
	ctx.lr = 0x82351220;
	sub_8234EBE0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82351228;
	sub_821C0630(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82351230;
	sub_821C0630(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82351238;
	sub_821C0630(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x821c0630
	ctx.lr = 0x82351240;
	sub_821C0630(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82351248;
	sub_821C0630(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c0630
	ctx.lr = 0x82351250;
	sub_821C0630(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821c0630
	ctx.lr = 0x82351258;
	sub_821C0630(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350FA8"))) PPC_WEAK_FUNC(sub_82350FA8);
PPC_FUNC_IMPL(__imp__sub_82350FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82350FB0;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r4,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r5,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r5.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8234eac8
	ctx.lr = 0x82350FD4;
	sub_8234EAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235cf78
	ctx.lr = 0x82350FE0;
	sub_8235CF78(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82350FE8;
	sub_8236A338(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8235100c
	if (ctx.cr0.eq) goto loc_8235100C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8235d0f0
	ctx.lr = 0x82351004;
	sub_8235D0F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82351010
	goto loc_82351010;
loc_8235100C:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82351010:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82351040
	if (ctx.cr6.eq) goto loc_82351040;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82351020:
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
	// bne 0x82351020
	if (!ctx.cr0.eq) goto loc_82351020;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82351040:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8235d3c8
	ctx.lr = 0x8235104C;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b3c0
	ctx.lr = 0x82351064;
	sub_8236B3C0(ctx, base);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234e920
	ctx.lr = 0x82351070;
	sub_8234E920(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b4a0
	ctx.lr = 0x82351080;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b048
	ctx.lr = 0x82351090;
	sub_8236B048(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234ef48
	ctx.lr = 0x8235109C;
	sub_8234EF48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8234f148
	ctx.lr = 0x823510AC;
	sub_8234F148(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// beq cr6,0x823510e0
	if (ctx.cr6.eq) goto loc_823510E0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823510C0:
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
	// bne 0x823510c0
	if (!ctx.cr0.eq) goto loc_823510C0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823510E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823510F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8234ecb8
	ctx.lr = 0x82351104;
	sub_8234ECB8(ctx, base);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r29,r11,-25772
	ctx.r29.s64 = ctx.r11.s64 + -25772;
	// addi r28,r10,13260
	ctx.r28.s64 = ctx.r10.s64 + 13260;
	// addi r27,r9,13244
	ctx.r27.s64 = ctx.r9.s64 + 13244;
	// addi r26,r8,14272
	ctx.r26.s64 = ctx.r8.s64 + 14272;
	// beq cr6,0x82351168
	if (ctx.cr6.eq) goto loc_82351168;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r23,100
	ctx.r3.s64 = ctx.r23.s64 + 100;
	// bl 0x82359588
	ctx.lr = 0x8235113C;
	sub_82359588(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82351168
	if (!ctx.cr0.eq) goto loc_82351168;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r9,r11,14212
	ctx.r9.s64 = ctx.r11.s64 + 14212;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r8,142
	ctx.r8.s64 = 142;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82351168;
	sub_82372320(ctx, base);
loc_82351168:
	// stw r22,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r22.u32);
	// addi r30,r23,100
	ctx.r30.s64 = ctx.r23.s64 + 100;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82350d90
	ctx.lr = 0x82351180;
	sub_82350D90(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82351198
	if (ctx.cr6.eq) goto loc_82351198;
	// stw r22,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r22.u32);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bl 0x8234ebe0
	ctx.lr = 0x82351198;
	sub_8234EBE0(ctx, base);
loc_82351198:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359480
	ctx.lr = 0x823511A8;
	sub_82359480(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823511d4
	if (!ctx.cr0.eq) goto loc_823511D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r9,r11,14168
	ctx.r9.s64 = ctx.r11.s64 + 14168;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r8,158
	ctx.r8.s64 = 158;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823511D4;
	sub_82372320(ctx, base);
loc_823511D4:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8234eac8
	ctx.lr = 0x823511DC;
	sub_8234EAC8(ctx, base);
	// bl 0x82358888
	ctx.lr = 0x823511E0;
	sub_82358888(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82351214
	if (ctx.cr6.eq) goto loc_82351214;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823511F4:
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
	// bne 0x823511f4
	if (!ctx.cr0.eq) goto loc_823511F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82351214:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8234ebe0
	ctx.lr = 0x82351220;
	sub_8234EBE0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82351228;
	sub_821C0630(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82351230;
	sub_821C0630(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82351238;
	sub_821C0630(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x821c0630
	ctx.lr = 0x82351240;
	sub_821C0630(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82351248;
	sub_821C0630(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c0630
	ctx.lr = 0x82351250;
	sub_821C0630(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821c0630
	ctx.lr = 0x82351258;
	sub_821C0630(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351260"))) PPC_WEAK_FUNC(sub_82351260);
PPC_FUNC_IMPL(__imp__sub_82351260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// bl 0x821c0630
	ctx.lr = 0x82351278;
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

__attribute__((alias("__imp__sub_82351288"))) PPC_WEAK_FUNC(sub_82351288);
PPC_FUNC_IMPL(__imp__sub_82351288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x821c0630
	ctx.lr = 0x823512A0;
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

__attribute__((alias("__imp__sub_823512B0"))) PPC_WEAK_FUNC(sub_823512B0);
PPC_FUNC_IMPL(__imp__sub_823512B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	ctx.lr = 0x823512C8;
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

__attribute__((alias("__imp__sub_823512D8"))) PPC_WEAK_FUNC(sub_823512D8);
PPC_FUNC_IMPL(__imp__sub_823512D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82350110
	ctx.lr = 0x823512F0;
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

__attribute__((alias("__imp__sub_82351300"))) PPC_WEAK_FUNC(sub_82351300);
PPC_FUNC_IMPL(__imp__sub_82351300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x821c0630
	ctx.lr = 0x82351318;
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

__attribute__((alias("__imp__sub_82351328"))) PPC_WEAK_FUNC(sub_82351328);
PPC_FUNC_IMPL(__imp__sub_82351328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	// bl 0x821c0630
	ctx.lr = 0x82351340;
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

__attribute__((alias("__imp__sub_82351350"))) PPC_WEAK_FUNC(sub_82351350);
PPC_FUNC_IMPL(__imp__sub_82351350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	ctx.lr = 0x82351368;
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

__attribute__((alias("__imp__sub_82351378"))) PPC_WEAK_FUNC(sub_82351378);
PPC_FUNC_IMPL(__imp__sub_82351378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	// bl 0x821c0630
	ctx.lr = 0x82351390;
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

__attribute__((alias("__imp__sub_823513A0"))) PPC_WEAK_FUNC(sub_823513A0);
PPC_FUNC_IMPL(__imp__sub_823513A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x823513A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823513c4
	if (ctx.cr6.gt) goto loc_823513C4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823513C4:
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x823513f0
	if (ctx.cr0.eq) goto loc_823513F0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8236a338
	ctx.lr = 0x823513D8;
	sub_8236A338(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823502c8
	ctx.lr = 0x823513F0;
	sub_823502C8(ctx, base);
loc_823513F0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82351414
	if (ctx.cr6.eq) goto loc_82351414;
loc_82351400:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82351408;
	sub_821C0630(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82351400
	if (!ctx.cr0.eq) goto loc_82351400;
loc_82351414:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x8235141C;
	sub_8236A3F0(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235142C"))) PPC_WEAK_FUNC(sub_8235142C);
PPC_FUNC_IMPL(__imp__sub_8235142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351430"))) PPC_WEAK_FUNC(sub_82351430);
PPC_FUNC_IMPL(__imp__sub_82351430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82351438;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82351464
	if (ctx.cr6.eq) goto loc_82351464;
loc_82351450:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82351458;
	sub_821C0630(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82351450
	if (!ctx.cr0.eq) goto loc_82351450;
loc_82351464:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x8235146C;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351484"))) PPC_WEAK_FUNC(sub_82351484);
PPC_FUNC_IMPL(__imp__sub_82351484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351488"))) PPC_WEAK_FUNC(sub_82351488);
PPC_FUNC_IMPL(__imp__sub_82351488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82351490;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// ble cr6,0x8235152c
	if (!ctx.cr6.gt) goto loc_8235152C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823514bc
	if (ctx.cr6.gt) goto loc_823514BC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_823514BC:
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x823514cc
	if (ctx.cr6.gt) goto loc_823514CC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823514CC:
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x823514fc
	if (ctx.cr0.eq) goto loc_823514FC;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8236a338
	ctx.lr = 0x823514E4;
	sub_8236A338(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823502c8
	ctx.lr = 0x823514FC;
	sub_823502C8(ctx, base);
loc_823514FC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82351520
	if (ctx.cr6.eq) goto loc_82351520;
loc_8235150C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82351514;
	sub_821C0630(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8235150c
	if (!ctx.cr0.eq) goto loc_8235150C;
loc_82351520:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x82351528;
	sub_8236A3F0(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8235152C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351534"))) PPC_WEAK_FUNC(sub_82351534);
PPC_FUNC_IMPL(__imp__sub_82351534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351538"))) PPC_WEAK_FUNC(sub_82351538);
PPC_FUNC_IMPL(__imp__sub_82351538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82351540;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823515f0
	if (ctx.cr6.eq) goto loc_823515F0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823515f0
	if (ctx.cr6.eq) goto loc_823515F0;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823515a8
	if (ctx.cr6.eq) goto loc_823515A8;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
loc_8235157C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370a70
	ctx.lr = 0x82351588;
	sub_82370A70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8235157c
	if (!ctx.cr6.eq) goto loc_8235157C;
loc_823515A8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823515bc
	if (!ctx.cr6.eq) goto loc_823515BC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x823515f0
	goto loc_823515F0;
loc_823515BC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823515f0
	if (ctx.cr6.eq) goto loc_823515F0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x82363fd8
	ctx.lr = 0x823515F0;
	sub_82363FD8(ctx, base);
loc_823515F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823515FC"))) PPC_WEAK_FUNC(sub_823515FC);
PPC_FUNC_IMPL(__imp__sub_823515FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351600"))) PPC_WEAK_FUNC(sub_82351600);
PPC_FUNC_IMPL(__imp__sub_82351600) {
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
	// bl 0x82350d10
	ctx.lr = 0x82351618;
	sub_82350D10(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8236a3f0
	ctx.lr = 0x82351620;
	sub_8236A3F0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82351634"))) PPC_WEAK_FUNC(sub_82351634);
PPC_FUNC_IMPL(__imp__sub_82351634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351638"))) PPC_WEAK_FUNC(sub_82351638);
PPC_FUNC_IMPL(__imp__sub_82351638) {
	PPC_FUNC_PROLOGUE();
	// b 0x82351430
	sub_82351430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235163C"))) PPC_WEAK_FUNC(sub_8235163C);
PPC_FUNC_IMPL(__imp__sub_8235163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351640"))) PPC_WEAK_FUNC(sub_82351640);
PPC_FUNC_IMPL(__imp__sub_82351640) {
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
	// bne cr6,0x82351674
	if (!ctx.cr6.eq) goto loc_82351674;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823513a0
	ctx.lr = 0x82351674;
	sub_823513A0(ctx, base);
loc_82351674:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823516bc
	if (ctx.cr0.eq) goto loc_823516BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823516bc
	if (ctx.cr6.eq) goto loc_823516BC;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8235169C:
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
	// bne 0x8235169c
	if (!ctx.cr0.eq) goto loc_8235169C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_823516BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_823516E0"))) PPC_WEAK_FUNC(sub_823516E0);
PPC_FUNC_IMPL(__imp__sub_823516E0) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351724
	if (ctx.cr6.eq) goto loc_82351724;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821c0630
	ctx.lr = 0x82351718;
	sub_821C0630(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82351488
	ctx.lr = 0x82351724;
	sub_82351488(ctx, base);
loc_82351724:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82351738"))) PPC_WEAK_FUNC(sub_82351738);
PPC_FUNC_IMPL(__imp__sub_82351738) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8235177c
	if (!ctx.cr6.lt) goto loc_8235177C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// bl 0x823689c8
	ctx.lr = 0x82351774;
	sub_823689C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823516e0
	ctx.lr = 0x8235177C;
	sub_823516E0(ctx, base);
loc_8235177C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82351790"))) PPC_WEAK_FUNC(sub_82351790);
PPC_FUNC_IMPL(__imp__sub_82351790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,14584(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14584);
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
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82350e78
	ctx.lr = 0x823517C0;
	sub_82350E78(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x821c0630
	ctx.lr = 0x823517CC;
	sub_821C0630(ctx, base);
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

__attribute__((alias("__imp__sub_82351798"))) PPC_WEAK_FUNC(sub_82351798);
PPC_FUNC_IMPL(__imp__sub_82351798) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82350e78
	ctx.lr = 0x823517C0;
	sub_82350E78(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x821c0630
	ctx.lr = 0x823517CC;
	sub_821C0630(ctx, base);
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

__attribute__((alias("__imp__sub_823517E4"))) PPC_WEAK_FUNC(sub_823517E4);
PPC_FUNC_IMPL(__imp__sub_823517E4) {
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
	// bl 0x823502c0
	ctx.lr = 0x82351800;
	sub_823502C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351810"))) PPC_WEAK_FUNC(sub_82351810);
PPC_FUNC_IMPL(__imp__sub_82351810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,14744(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14744);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82351820;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,10936
	ctx.r11.s64 = ctx.r11.s64 + 10936;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8235d540
	ctx.lr = 0x82351850;
	sub_8235D540(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82363e88
	ctx.lr = 0x82351858;
	sub_82363E88(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,14648
	ctx.r10.s64 = ctx.r10.s64 + 14648;
	// lfs f0,14672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14672);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,14640
	ctx.r9.s64 = ctx.r9.s64 + 14640;
	// addi r11,r8,14652
	ctx.r11.s64 = ctx.r8.s64 + 14652;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f31,-1612(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1612);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82350b20
	ctx.lr = 0x823518A0;
	sub_82350B20(ctx, base);
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x82359bf8
	ctx.lr = 0x823518A8;
	sub_82359BF8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r30,76
	ctx.r10.s64 = ctx.r30.s64 + 76;
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lfs f0,-28948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// stw r29,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r29.u32);
	// stw r29,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r29.u32);
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82350c18
	ctx.lr = 0x823518F0;
	sub_82350C18(ctx, base);
	// addi r11,r30,124
	ctx.r11.s64 = ctx.r30.s64 + 124;
	// stw r29,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r29.u32);
	// stw r29,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r29.u32);
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351818"))) PPC_WEAK_FUNC(sub_82351818);
PPC_FUNC_IMPL(__imp__sub_82351818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82351820;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,10936
	ctx.r11.s64 = ctx.r11.s64 + 10936;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8235d540
	ctx.lr = 0x82351850;
	sub_8235D540(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82363e88
	ctx.lr = 0x82351858;
	sub_82363E88(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,14648
	ctx.r10.s64 = ctx.r10.s64 + 14648;
	// lfs f0,14672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14672);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,14640
	ctx.r9.s64 = ctx.r9.s64 + 14640;
	// addi r11,r8,14652
	ctx.r11.s64 = ctx.r8.s64 + 14652;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f31,-1612(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1612);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82350b20
	ctx.lr = 0x823518A0;
	sub_82350B20(ctx, base);
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x82359bf8
	ctx.lr = 0x823518A8;
	sub_82359BF8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r30,76
	ctx.r10.s64 = ctx.r30.s64 + 76;
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lfs f0,-28948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// stw r29,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r29.u32);
	// stw r29,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r29.u32);
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82350c18
	ctx.lr = 0x823518F0;
	sub_82350C18(ctx, base);
	// addi r11,r30,124
	ctx.r11.s64 = ctx.r30.s64 + 124;
	// stw r29,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r29.u32);
	// stw r29,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r29.u32);
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351914"))) PPC_WEAK_FUNC(sub_82351914);
PPC_FUNC_IMPL(__imp__sub_82351914) {
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
	// bl 0x8236db30
	ctx.lr = 0x8235192C;
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

__attribute__((alias("__imp__sub_8235193C"))) PPC_WEAK_FUNC(sub_8235193C);
PPC_FUNC_IMPL(__imp__sub_8235193C) {
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
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8235d540
	ctx.lr = 0x82351958;
	sub_8235D540(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351968"))) PPC_WEAK_FUNC(sub_82351968);
PPC_FUNC_IMPL(__imp__sub_82351968) {
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
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82363e88
	ctx.lr = 0x82351984;
	sub_82363E88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351994"))) PPC_WEAK_FUNC(sub_82351994);
PPC_FUNC_IMPL(__imp__sub_82351994) {
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
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82351600
	ctx.lr = 0x823519B0;
	sub_82351600(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823519C0"))) PPC_WEAK_FUNC(sub_823519C0);
PPC_FUNC_IMPL(__imp__sub_823519C0) {
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
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82359b58
	ctx.lr = 0x823519DC;
	sub_82359B58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823519EC"))) PPC_WEAK_FUNC(sub_823519EC);
PPC_FUNC_IMPL(__imp__sub_823519EC) {
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
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// bl 0x82351638
	ctx.lr = 0x82351A08;
	sub_82351638(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351A18"))) PPC_WEAK_FUNC(sub_82351A18);
PPC_FUNC_IMPL(__imp__sub_82351A18) {
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
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// bl 0x82351638
	ctx.lr = 0x82351A34;
	sub_82351638(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351A44"))) PPC_WEAK_FUNC(sub_82351A44);
PPC_FUNC_IMPL(__imp__sub_82351A44) {
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
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82359448
	ctx.lr = 0x82351A60;
	sub_82359448(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351A70"))) PPC_WEAK_FUNC(sub_82351A70);
PPC_FUNC_IMPL(__imp__sub_82351A70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82352e70
	sub_82352E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351A78"))) PPC_WEAK_FUNC(sub_82351A78);
PPC_FUNC_IMPL(__imp__sub_82351A78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82352e70
	sub_82352E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351A80"))) PPC_WEAK_FUNC(sub_82351A80);
PPC_FUNC_IMPL(__imp__sub_82351A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,14904(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14904);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82351A90;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,14648
	ctx.r11.s64 = ctx.r11.s64 + 14648;
	// addi r10,r10,14640
	ctx.r10.s64 = ctx.r10.s64 + 14640;
	// addi r9,r9,14652
	ctx.r9.s64 = ctx.r9.s64 + 14652;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r25,r3,8
	ctx.r25.s64 = ctx.r3.s64 + 8;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// bl 0x820cdf68
	ctx.lr = 0x82351AD0;
	sub_820CDF68(ctx, base);
	// bl 0x8236f7e8
	ctx.lr = 0x82351AD4;
	sub_8236F7E8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8235d670
	ctx.lr = 0x82351ADC;
	sub_8235D670(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// beq cr6,0x82351b18
	if (ctx.cr6.eq) goto loc_82351B18;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82351AF4:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x8235fd60
	ctx.lr = 0x82351B04;
	sub_8235FD60(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82351af4
	if (ctx.cr6.lt) goto loc_82351AF4;
loc_82351B18:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82351b3c
	if (ctx.cr6.eq) goto loc_82351B3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82351B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82351B3C:
	// addi r11,r30,124
	ctx.r11.s64 = ctx.r30.s64 + 124;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x8236a3f0
	ctx.lr = 0x82351B4C;
	sub_8236A3F0(ctx, base);
	// stw r29,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r29.u32);
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
	// stw r29,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r29.u32);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// bl 0x82358da8
	ctx.lr = 0x82351B60;
	sub_82358DA8(ctx, base);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x8236a3f0
	ctx.lr = 0x82351B68;
	sub_8236A3F0(ctx, base);
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x82351430
	ctx.lr = 0x82351B70;
	sub_82351430(ctx, base);
	// addi r3,r30,76
	ctx.r3.s64 = ctx.r30.s64 + 76;
	// bl 0x82351430
	ctx.lr = 0x82351B78;
	sub_82351430(ctx, base);
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x8236a3f0
	ctx.lr = 0x82351B8C;
	sub_8236A3F0(ctx, base);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82350d10
	ctx.lr = 0x82351BA0;
	sub_82350D10(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8236a3f0
	ctx.lr = 0x82351BA8;
	sub_8236A3F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82363e88
	ctx.lr = 0x82351BB0;
	sub_82363E88(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8235d540
	ctx.lr = 0x82351BB8;
	sub_8235D540(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236db30
	ctx.lr = 0x82351BC0;
	sub_8236DB30(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351A88"))) PPC_WEAK_FUNC(sub_82351A88);
PPC_FUNC_IMPL(__imp__sub_82351A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82351A90;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,14648
	ctx.r11.s64 = ctx.r11.s64 + 14648;
	// addi r10,r10,14640
	ctx.r10.s64 = ctx.r10.s64 + 14640;
	// addi r9,r9,14652
	ctx.r9.s64 = ctx.r9.s64 + 14652;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r25,r3,8
	ctx.r25.s64 = ctx.r3.s64 + 8;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// bl 0x820cdf68
	ctx.lr = 0x82351AD0;
	sub_820CDF68(ctx, base);
	// bl 0x8236f7e8
	ctx.lr = 0x82351AD4;
	sub_8236F7E8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8235d670
	ctx.lr = 0x82351ADC;
	sub_8235D670(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// beq cr6,0x82351b18
	if (ctx.cr6.eq) goto loc_82351B18;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82351AF4:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x8235fd60
	ctx.lr = 0x82351B04;
	sub_8235FD60(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82351af4
	if (ctx.cr6.lt) goto loc_82351AF4;
loc_82351B18:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82351b3c
	if (ctx.cr6.eq) goto loc_82351B3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82351B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82351B3C:
	// addi r11,r30,124
	ctx.r11.s64 = ctx.r30.s64 + 124;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x8236a3f0
	ctx.lr = 0x82351B4C;
	sub_8236A3F0(ctx, base);
	// stw r29,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r29.u32);
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
	// stw r29,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r29.u32);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// bl 0x82358da8
	ctx.lr = 0x82351B60;
	sub_82358DA8(ctx, base);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x8236a3f0
	ctx.lr = 0x82351B68;
	sub_8236A3F0(ctx, base);
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x82351430
	ctx.lr = 0x82351B70;
	sub_82351430(ctx, base);
	// addi r3,r30,76
	ctx.r3.s64 = ctx.r30.s64 + 76;
	// bl 0x82351430
	ctx.lr = 0x82351B78;
	sub_82351430(ctx, base);
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x8236a3f0
	ctx.lr = 0x82351B8C;
	sub_8236A3F0(ctx, base);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82350d10
	ctx.lr = 0x82351BA0;
	sub_82350D10(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8236a3f0
	ctx.lr = 0x82351BA8;
	sub_8236A3F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82363e88
	ctx.lr = 0x82351BB0;
	sub_82363E88(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8235d540
	ctx.lr = 0x82351BB8;
	sub_8235D540(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236db30
	ctx.lr = 0x82351BC0;
	sub_8236DB30(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351BC8"))) PPC_WEAK_FUNC(sub_82351BC8);
PPC_FUNC_IMPL(__imp__sub_82351BC8) {
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
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x8236db30
	ctx.lr = 0x82351BE0;
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

__attribute__((alias("__imp__sub_82351BF0"))) PPC_WEAK_FUNC(sub_82351BF0);
PPC_FUNC_IMPL(__imp__sub_82351BF0) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8235d540
	ctx.lr = 0x82351C0C;
	sub_8235D540(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351C1C"))) PPC_WEAK_FUNC(sub_82351C1C);
PPC_FUNC_IMPL(__imp__sub_82351C1C) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82363e88
	ctx.lr = 0x82351C38;
	sub_82363E88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351C48"))) PPC_WEAK_FUNC(sub_82351C48);
PPC_FUNC_IMPL(__imp__sub_82351C48) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82351600
	ctx.lr = 0x82351C64;
	sub_82351600(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351C74"))) PPC_WEAK_FUNC(sub_82351C74);
PPC_FUNC_IMPL(__imp__sub_82351C74) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82359b58
	ctx.lr = 0x82351C90;
	sub_82359B58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351CA0"))) PPC_WEAK_FUNC(sub_82351CA0);
PPC_FUNC_IMPL(__imp__sub_82351CA0) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// bl 0x82351638
	ctx.lr = 0x82351CBC;
	sub_82351638(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351CCC"))) PPC_WEAK_FUNC(sub_82351CCC);
PPC_FUNC_IMPL(__imp__sub_82351CCC) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// bl 0x82351638
	ctx.lr = 0x82351CE8;
	sub_82351638(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351CF8"))) PPC_WEAK_FUNC(sub_82351CF8);
PPC_FUNC_IMPL(__imp__sub_82351CF8) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82359448
	ctx.lr = 0x82351D14;
	sub_82359448(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351D24"))) PPC_WEAK_FUNC(sub_82351D24);
PPC_FUNC_IMPL(__imp__sub_82351D24) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// bl 0x8236a878
	ctx.lr = 0x82351D40;
	sub_8236A878(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351D50"))) PPC_WEAK_FUNC(sub_82351D50);
PPC_FUNC_IMPL(__imp__sub_82351D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,15048(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 15048);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82351D60;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x820cdf68
	ctx.lr = 0x82351D78;
	sub_820CDF68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// bne cr6,0x82351d8c
	if (!ctx.cr6.eq) goto loc_82351D8C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82351D8C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236f7e8
	ctx.lr = 0x82351D94;
	sub_8236F7E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8235d668
	ctx.lr = 0x82351D9C;
	sub_8235D668(ctx, base);
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,88
	ctx.r5.s64 = ctx.r30.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x82358c00
	ctx.lr = 0x82351DB0;
	sub_82358C00(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8236a338
	ctx.lr = 0x82351DB8;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82351dd0
	if (ctx.cr0.eq) goto loc_82351DD0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8235b0c8
	ctx.lr = 0x82351DCC;
	sub_8235B0C8(ctx, base);
	// b 0x82351dd4
	goto loc_82351DD4;
loc_82351DD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82351DD4:
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x82350188
	ctx.lr = 0x82351DEC;
	sub_82350188(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82354368
	ctx.lr = 0x82351DF8;
	sub_82354368(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236f7f0
	ctx.lr = 0x82351E04;
	sub_8236F7F0(ctx, base);
	// bl 0x82372e08
	ctx.lr = 0x82351E08;
	sub_82372E08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82373ab0
	ctx.lr = 0x82351E14;
	sub_82373AB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x82351E1C;
	sub_821C0630(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351D58"))) PPC_WEAK_FUNC(sub_82351D58);
PPC_FUNC_IMPL(__imp__sub_82351D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82351D60;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x820cdf68
	ctx.lr = 0x82351D78;
	sub_820CDF68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// bne cr6,0x82351d8c
	if (!ctx.cr6.eq) goto loc_82351D8C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82351D8C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236f7e8
	ctx.lr = 0x82351D94;
	sub_8236F7E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8235d668
	ctx.lr = 0x82351D9C;
	sub_8235D668(ctx, base);
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,88
	ctx.r5.s64 = ctx.r30.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x82358c00
	ctx.lr = 0x82351DB0;
	sub_82358C00(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8236a338
	ctx.lr = 0x82351DB8;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82351dd0
	if (ctx.cr0.eq) goto loc_82351DD0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8235b0c8
	ctx.lr = 0x82351DCC;
	sub_8235B0C8(ctx, base);
	// b 0x82351dd4
	goto loc_82351DD4;
loc_82351DD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82351DD4:
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x82350188
	ctx.lr = 0x82351DEC;
	sub_82350188(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82354368
	ctx.lr = 0x82351DF8;
	sub_82354368(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236f7f0
	ctx.lr = 0x82351E04;
	sub_8236F7F0(ctx, base);
	// bl 0x82372e08
	ctx.lr = 0x82351E08;
	sub_82372E08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82373ab0
	ctx.lr = 0x82351E14;
	sub_82373AB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x82351E1C;
	sub_821C0630(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351E24"))) PPC_WEAK_FUNC(sub_82351E24);
PPC_FUNC_IMPL(__imp__sub_82351E24) {
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
	ctx.lr = 0x82351E3C;
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

__attribute__((alias("__imp__sub_82351E4C"))) PPC_WEAK_FUNC(sub_82351E4C);
PPC_FUNC_IMPL(__imp__sub_82351E4C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82350110
	ctx.lr = 0x82351E64;
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

__attribute__((alias("__imp__sub_82351E74"))) PPC_WEAK_FUNC(sub_82351E74);
PPC_FUNC_IMPL(__imp__sub_82351E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351E78"))) PPC_WEAK_FUNC(sub_82351E78);
PPC_FUNC_IMPL(__imp__sub_82351E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,15296(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 15296);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82351E88;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235cf78
	ctx.lr = 0x82351EA0;
	sub_8235CF78(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x8235d3c8
	ctx.lr = 0x82351EAC;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// bl 0x8236a958
	ctx.lr = 0x82351EC4;
	sub_8236A958(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82351f0c
	if (!ctx.cr0.eq) goto loc_82351F0C;
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,15192
	ctx.r9.s64 = ctx.r11.s64 + 15192;
	// addi r7,r10,15164
	ctx.r7.s64 = ctx.r10.s64 + 15164;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,327
	ctx.r8.s64 = 327;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82351F00;
	sub_82372320(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x821c0630
	ctx.lr = 0x82351F08;
	sub_821C0630(ctx, base);
	// b 0x823525a8
	goto loc_823525A8;
loc_82351F0C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82351F14;
	sub_8236A338(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82351f34
	if (ctx.cr0.eq) goto loc_82351F34;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8235d0f0
	ctx.lr = 0x82351F2C;
	sub_8235D0F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x82351f38
	goto loc_82351F38;
loc_82351F34:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82351F38:
	// stw r24,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r24.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82351f68
	if (ctx.cr6.eq) goto loc_82351F68;
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
loc_82351F48:
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
	// bne 0x82351f48
	if (!ctx.cr0.eq) goto loc_82351F48;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_82351F68:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235d3c8
	ctx.lr = 0x82351F74;
	sub_8235D3C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8235cfb0
	ctx.lr = 0x82351F84;
	sub_8235CFB0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82351F8C:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82352008
	if (!ctx.cr6.lt) goto loc_82352008;
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82351fd4
	if (ctx.cr6.eq) goto loc_82351FD4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82351FB4:
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
	// bne 0x82351fb4
	if (!ctx.cr0.eq) goto loc_82351FB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82351FD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82351FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// and r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82351f8c
	if (!ctx.cr0.eq) goto loc_82351F8C;
loc_82352008:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8236b3c0
	ctx.lr = 0x82352020;
	sub_8236B3C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x821c06d8
	ctx.lr = 0x8235202C;
	sub_821C06D8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8236b3c0
	ctx.lr = 0x82352044;
	sub_8236B3C0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// clrlwi. r25,r29,24
	ctx.r25.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82352324
	if (ctx.cr0.eq) goto loc_82352324;
	// bl 0x821c4e38
	ctx.lr = 0x82352058;
	sub_821C4E38(ctx, base);
	// bl 0x82371718
	ctx.lr = 0x8235205C;
	sub_82371718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82350190
	ctx.lr = 0x82352068;
	sub_82350190(ctx, base);
	// lwz r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8234ea00
	ctx.lr = 0x82352074;
	sub_8234EA00(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// beq cr6,0x823520a8
	if (ctx.cr6.eq) goto loc_823520A8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82352088:
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
	// bne 0x82352088
	if (!ctx.cr0.eq) goto loc_82352088;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823520A8:
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// bl 0x82358970
	ctx.lr = 0x823520B0;
	sub_82358970(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// beq cr6,0x823520e4
	if (ctx.cr6.eq) goto loc_823520E4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823520C4:
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
	// bne 0x823520c4
	if (!ctx.cr0.eq) goto loc_823520C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823520E4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823520FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82352138
	if (!ctx.cr0.eq) goto loc_82352138;
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,15128
	ctx.r9.s64 = ctx.r11.s64 + 15128;
	// addi r7,r10,15164
	ctx.r7.s64 = ctx.r10.s64 + 15164;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,361
	ctx.r8.s64 = 361;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82352138;
	sub_82372320(ctx, base);
loc_82352138:
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r11,23816(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 23816);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// stb r29,23816(r10)
	PPC_STORE_U8(ctx.r10.u32 + 23816, ctx.r29.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8234e918
	ctx.lr = 0x82352158;
	sub_8234E918(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823521c8
	if (ctx.cr6.eq) goto loc_823521C8;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8235216C:
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwzx r3,r10,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
loc_8235217C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8235217c
	if (!ctx.cr0.eq) goto loc_8235217C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,116
	ctx.r5.s64 = ctx.r31.s64 + 116;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823521B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235216c
	if (ctx.cr6.lt) goto loc_8235216C;
loc_823521C8:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
loc_823521D4:
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
	// bne 0x823521d4
	if (!ctx.cr0.eq) goto loc_823521D4;
	// addi r5,r31,116
	ctx.r5.s64 = ctx.r31.s64 + 116;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x823506a8
	ctx.lr = 0x82352204;
	sub_823506A8(ctx, base);
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x82352218;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b048
	ctx.lr = 0x82352228;
	sub_8236B048(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// beq cr6,0x8235225c
	if (ctx.cr6.eq) goto loc_8235225C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8235223C:
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
	// bne 0x8235223c
	if (!ctx.cr0.eq) goto loc_8235223C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8235225C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352308
	if (ctx.cr6.eq) goto loc_82352308;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82352288:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 & ctx.r28.u64;
	// beq cr6,0x823522dc
	if (ctx.cr6.eq) goto loc_823522DC;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_823522BC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823522bc
	if (!ctx.cr0.eq) goto loc_823522BC;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_823522DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823522F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82352288
	if (ctx.cr6.lt) goto loc_82352288;
loc_82352308:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235231c
	if (ctx.cr0.eq) goto loc_8235231C;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x82351640
	ctx.lr = 0x8235231C;
	sub_82351640(ctx, base);
loc_8235231C:
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x821c0630
	ctx.lr = 0x82352324;
	sub_821C0630(ctx, base);
loc_82352324:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r24,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r24.u32);
	// beq cr6,0x82352358
	if (ctx.cr6.eq) goto loc_82352358;
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
loc_82352338:
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
	// bne 0x82352338
	if (!ctx.cr0.eq) goto loc_82352338;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_82352358:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82352580
	if (ctx.cr6.eq) goto loc_82352580;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823523f0
	if (ctx.cr6.eq) goto loc_823523F0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8235238C:
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// beq cr6,0x823523c4
	if (ctx.cr6.eq) goto loc_823523C4;
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
loc_823523A4:
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
	// bne 0x823523a4
	if (!ctx.cr0.eq) goto loc_823523A4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_823523C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823523DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235238c
	if (ctx.cr6.lt) goto loc_8235238C;
loc_823523F0:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352574
	if (ctx.cr6.eq) goto loc_82352574;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82352404:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x8235240C;
	sub_8236A338(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8235242c
	if (ctx.cr0.eq) goto loc_8235242C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8235d0f0
	ctx.lr = 0x82352424;
	sub_8235D0F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82352430
	goto loc_82352430;
loc_8235242C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82352430:
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82352460
	if (ctx.cr6.eq) goto loc_82352460;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82352440:
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
	// bne 0x82352440
	if (!ctx.cr0.eq) goto loc_82352440;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82352460:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8235d3c8
	ctx.lr = 0x8235246C;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b3c0
	ctx.lr = 0x82352484;
	sub_8236B3C0(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r26,92(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x8234e920
	ctx.lr = 0x82352494;
	sub_8234E920(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b4a0
	ctx.lr = 0x823524A4;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236b048
	ctx.lr = 0x823524B4;
	sub_8236B048(ctx, base);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r3,r28,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// beq cr6,0x823524f0
	if (ctx.cr6.eq) goto loc_823524F0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823524D0:
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
	// bne 0x823524d0
	if (!ctx.cr0.eq) goto loc_823524D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823524F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// beq cr6,0x82352538
	if (ctx.cr6.eq) goto loc_82352538;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82352518:
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
	// bne 0x82352518
	if (!ctx.cr0.eq) goto loc_82352518;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82352538:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82352558;
	sub_821C0630(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x821c0630
	ctx.lr = 0x82352560;
	sub_821C0630(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82352404
	if (ctx.cr6.lt) goto loc_82352404;
loc_82352574:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r30,76
	ctx.r3.s64 = ctx.r30.s64 + 76;
	// bl 0x82351640
	ctx.lr = 0x82352580;
	sub_82351640(ctx, base);
loc_82352580:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82352588;
	sub_821C0630(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82352590;
	sub_821C0630(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82352598;
	sub_821C0630(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x821c0630
	ctx.lr = 0x823525A0;
	sub_821C0630(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x821c0630
	ctx.lr = 0x823525A8;
	sub_821C0630(ctx, base);
loc_823525A8:
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x821c0630
	ctx.lr = 0x823525B0;
	sub_821C0630(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351E80"))) PPC_WEAK_FUNC(sub_82351E80);
PPC_FUNC_IMPL(__imp__sub_82351E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82351E88;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235cf78
	ctx.lr = 0x82351EA0;
	sub_8235CF78(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x8235d3c8
	ctx.lr = 0x82351EAC;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// bl 0x8236a958
	ctx.lr = 0x82351EC4;
	sub_8236A958(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82351f0c
	if (!ctx.cr0.eq) goto loc_82351F0C;
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,15192
	ctx.r9.s64 = ctx.r11.s64 + 15192;
	// addi r7,r10,15164
	ctx.r7.s64 = ctx.r10.s64 + 15164;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,327
	ctx.r8.s64 = 327;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82351F00;
	sub_82372320(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x821c0630
	ctx.lr = 0x82351F08;
	sub_821C0630(ctx, base);
	// b 0x823525a8
	goto loc_823525A8;
loc_82351F0C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82351F14;
	sub_8236A338(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82351f34
	if (ctx.cr0.eq) goto loc_82351F34;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8235d0f0
	ctx.lr = 0x82351F2C;
	sub_8235D0F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x82351f38
	goto loc_82351F38;
loc_82351F34:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82351F38:
	// stw r24,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r24.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82351f68
	if (ctx.cr6.eq) goto loc_82351F68;
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
loc_82351F48:
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
	// bne 0x82351f48
	if (!ctx.cr0.eq) goto loc_82351F48;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_82351F68:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235d3c8
	ctx.lr = 0x82351F74;
	sub_8235D3C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8235cfb0
	ctx.lr = 0x82351F84;
	sub_8235CFB0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82351F8C:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82352008
	if (!ctx.cr6.lt) goto loc_82352008;
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82351fd4
	if (ctx.cr6.eq) goto loc_82351FD4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82351FB4:
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
	// bne 0x82351fb4
	if (!ctx.cr0.eq) goto loc_82351FB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82351FD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82351FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// and r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82351f8c
	if (!ctx.cr0.eq) goto loc_82351F8C;
loc_82352008:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8236b3c0
	ctx.lr = 0x82352020;
	sub_8236B3C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x821c06d8
	ctx.lr = 0x8235202C;
	sub_821C06D8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8236b3c0
	ctx.lr = 0x82352044;
	sub_8236B3C0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// clrlwi. r25,r29,24
	ctx.r25.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82352324
	if (ctx.cr0.eq) goto loc_82352324;
	// bl 0x821c4e38
	ctx.lr = 0x82352058;
	sub_821C4E38(ctx, base);
	// bl 0x82371718
	ctx.lr = 0x8235205C;
	sub_82371718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82350190
	ctx.lr = 0x82352068;
	sub_82350190(ctx, base);
	// lwz r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8234ea00
	ctx.lr = 0x82352074;
	sub_8234EA00(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// beq cr6,0x823520a8
	if (ctx.cr6.eq) goto loc_823520A8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82352088:
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
	// bne 0x82352088
	if (!ctx.cr0.eq) goto loc_82352088;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823520A8:
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// bl 0x82358970
	ctx.lr = 0x823520B0;
	sub_82358970(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// beq cr6,0x823520e4
	if (ctx.cr6.eq) goto loc_823520E4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823520C4:
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
	// bne 0x823520c4
	if (!ctx.cr0.eq) goto loc_823520C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823520E4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823520FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82352138
	if (!ctx.cr0.eq) goto loc_82352138;
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,15128
	ctx.r9.s64 = ctx.r11.s64 + 15128;
	// addi r7,r10,15164
	ctx.r7.s64 = ctx.r10.s64 + 15164;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,361
	ctx.r8.s64 = 361;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82352138;
	sub_82372320(ctx, base);
loc_82352138:
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r11,23816(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 23816);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// stb r29,23816(r10)
	PPC_STORE_U8(ctx.r10.u32 + 23816, ctx.r29.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8234e918
	ctx.lr = 0x82352158;
	sub_8234E918(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823521c8
	if (ctx.cr6.eq) goto loc_823521C8;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8235216C:
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwzx r3,r10,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
loc_8235217C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8235217c
	if (!ctx.cr0.eq) goto loc_8235217C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,116
	ctx.r5.s64 = ctx.r31.s64 + 116;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823521B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235216c
	if (ctx.cr6.lt) goto loc_8235216C;
loc_823521C8:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
loc_823521D4:
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
	// bne 0x823521d4
	if (!ctx.cr0.eq) goto loc_823521D4;
	// addi r5,r31,116
	ctx.r5.s64 = ctx.r31.s64 + 116;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x823506a8
	ctx.lr = 0x82352204;
	sub_823506A8(ctx, base);
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x82352218;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b048
	ctx.lr = 0x82352228;
	sub_8236B048(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// beq cr6,0x8235225c
	if (ctx.cr6.eq) goto loc_8235225C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8235223C:
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
	// bne 0x8235223c
	if (!ctx.cr0.eq) goto loc_8235223C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8235225C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352308
	if (ctx.cr6.eq) goto loc_82352308;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82352288:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 & ctx.r28.u64;
	// beq cr6,0x823522dc
	if (ctx.cr6.eq) goto loc_823522DC;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_823522BC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823522bc
	if (!ctx.cr0.eq) goto loc_823522BC;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_823522DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823522F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82352288
	if (ctx.cr6.lt) goto loc_82352288;
loc_82352308:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235231c
	if (ctx.cr0.eq) goto loc_8235231C;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x82351640
	ctx.lr = 0x8235231C;
	sub_82351640(ctx, base);
loc_8235231C:
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x821c0630
	ctx.lr = 0x82352324;
	sub_821C0630(ctx, base);
loc_82352324:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r24,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r24.u32);
	// beq cr6,0x82352358
	if (ctx.cr6.eq) goto loc_82352358;
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
loc_82352338:
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
	// bne 0x82352338
	if (!ctx.cr0.eq) goto loc_82352338;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_82352358:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82352580
	if (ctx.cr6.eq) goto loc_82352580;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823523f0
	if (ctx.cr6.eq) goto loc_823523F0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8235238C:
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// beq cr6,0x823523c4
	if (ctx.cr6.eq) goto loc_823523C4;
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
loc_823523A4:
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
	// bne 0x823523a4
	if (!ctx.cr0.eq) goto loc_823523A4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_823523C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823523DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235238c
	if (ctx.cr6.lt) goto loc_8235238C;
loc_823523F0:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352574
	if (ctx.cr6.eq) goto loc_82352574;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82352404:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x8235240C;
	sub_8236A338(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8235242c
	if (ctx.cr0.eq) goto loc_8235242C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8235d0f0
	ctx.lr = 0x82352424;
	sub_8235D0F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82352430
	goto loc_82352430;
loc_8235242C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82352430:
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82352460
	if (ctx.cr6.eq) goto loc_82352460;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82352440:
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
	// bne 0x82352440
	if (!ctx.cr0.eq) goto loc_82352440;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82352460:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8235d3c8
	ctx.lr = 0x8235246C;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b3c0
	ctx.lr = 0x82352484;
	sub_8236B3C0(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r26,92(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x8234e920
	ctx.lr = 0x82352494;
	sub_8234E920(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b4a0
	ctx.lr = 0x823524A4;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236b048
	ctx.lr = 0x823524B4;
	sub_8236B048(ctx, base);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r3,r28,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// beq cr6,0x823524f0
	if (ctx.cr6.eq) goto loc_823524F0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823524D0:
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
	// bne 0x823524d0
	if (!ctx.cr0.eq) goto loc_823524D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823524F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// beq cr6,0x82352538
	if (ctx.cr6.eq) goto loc_82352538;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82352518:
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
	// bne 0x82352518
	if (!ctx.cr0.eq) goto loc_82352518;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82352538:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82352558;
	sub_821C0630(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x821c0630
	ctx.lr = 0x82352560;
	sub_821C0630(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82352404
	if (ctx.cr6.lt) goto loc_82352404;
loc_82352574:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r30,76
	ctx.r3.s64 = ctx.r30.s64 + 76;
	// bl 0x82351640
	ctx.lr = 0x82352580;
	sub_82351640(ctx, base);
loc_82352580:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82352588;
	sub_821C0630(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82352590;
	sub_821C0630(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82352598;
	sub_821C0630(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x821c0630
	ctx.lr = 0x823525A0;
	sub_821C0630(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x821c0630
	ctx.lr = 0x823525A8;
	sub_821C0630(ctx, base);
loc_823525A8:
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x821c0630
	ctx.lr = 0x823525B0;
	sub_821C0630(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823525B8"))) PPC_WEAK_FUNC(sub_823525B8);
PPC_FUNC_IMPL(__imp__sub_823525B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x821c0630
	ctx.lr = 0x823525D0;
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

__attribute__((alias("__imp__sub_823525E0"))) PPC_WEAK_FUNC(sub_823525E0);
PPC_FUNC_IMPL(__imp__sub_823525E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	// bl 0x821c0630
	ctx.lr = 0x823525F8;
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

__attribute__((alias("__imp__sub_82352608"))) PPC_WEAK_FUNC(sub_82352608);
PPC_FUNC_IMPL(__imp__sub_82352608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x82350110
	ctx.lr = 0x82352620;
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

__attribute__((alias("__imp__sub_82352630"))) PPC_WEAK_FUNC(sub_82352630);
PPC_FUNC_IMPL(__imp__sub_82352630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	// bl 0x821c0630
	ctx.lr = 0x82352648;
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

__attribute__((alias("__imp__sub_82352658"))) PPC_WEAK_FUNC(sub_82352658);
PPC_FUNC_IMPL(__imp__sub_82352658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	// bl 0x821c0630
	ctx.lr = 0x82352670;
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

__attribute__((alias("__imp__sub_82352680"))) PPC_WEAK_FUNC(sub_82352680);
PPC_FUNC_IMPL(__imp__sub_82352680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	// bl 0x821c0630
	ctx.lr = 0x82352698;
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

__attribute__((alias("__imp__sub_823526A8"))) PPC_WEAK_FUNC(sub_823526A8);
PPC_FUNC_IMPL(__imp__sub_823526A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	ctx.lr = 0x823526C0;
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

__attribute__((alias("__imp__sub_823526D0"))) PPC_WEAK_FUNC(sub_823526D0);
PPC_FUNC_IMPL(__imp__sub_823526D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x821c0630
	ctx.lr = 0x823526E8;
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

__attribute__((alias("__imp__sub_823526F8"))) PPC_WEAK_FUNC(sub_823526F8);
PPC_FUNC_IMPL(__imp__sub_823526F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82350110
	ctx.lr = 0x82352710;
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

__attribute__((alias("__imp__sub_82352720"))) PPC_WEAK_FUNC(sub_82352720);
PPC_FUNC_IMPL(__imp__sub_82352720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x821c0630
	ctx.lr = 0x82352738;
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

__attribute__((alias("__imp__sub_82352748"))) PPC_WEAK_FUNC(sub_82352748);
PPC_FUNC_IMPL(__imp__sub_82352748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	ctx.lr = 0x82352760;
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

__attribute__((alias("__imp__sub_82352770"))) PPC_WEAK_FUNC(sub_82352770);
PPC_FUNC_IMPL(__imp__sub_82352770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,15920(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 15920);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x82352780;
	__savegprlr_17(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// stw r4,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r4.u32);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// stw r5,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r5.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8234ecb8
	ctx.lr = 0x823527A4;
	sub_8234ECB8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352bf0
	if (ctx.cr6.eq) goto loc_82352BF0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r4,0(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x823527BC;
	sub_8235D3C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// bl 0x82350328
	ctx.lr = 0x823527D0;
	sub_82350328(ctx, base);
	// clrlwi. r24,r3,24
	ctx.r24.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82352828
	if (!ctx.cr0.eq) goto loc_82352828;
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,15848
	ctx.r9.s64 = ctx.r11.s64 + 15848;
	// addi r7,r10,15812
	ctx.r7.s64 = ctx.r10.s64 + 15812;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,497
	ctx.r8.s64 = 497;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8235280C;
	sub_82372320(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82352814;
	sub_821C0630(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8235281C;
	sub_821C0630(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821c0630
	ctx.lr = 0x82352824;
	sub_821C0630(ctx, base);
	// b 0x82352c00
	goto loc_82352C00;
loc_82352828:
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// bl 0x8234eac8
	ctx.lr = 0x82352830;
	sub_8234EAC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8236d968
	ctx.lr = 0x82352838;
	sub_8236D968(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lhz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82358880
	ctx.lr = 0x82352858;
	sub_82358880(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236be50
	ctx.lr = 0x82352860;
	sub_8236BE50(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// addi r21,r11,13260
	ctx.r21.s64 = ctx.r11.s64 + 13260;
	// addi r20,r10,13244
	ctx.r20.s64 = ctx.r10.s64 + 13244;
	// addi r19,r9,15812
	ctx.r19.s64 = ctx.r9.s64 + 15812;
	// ble cr6,0x823528b0
	if (!ctx.cr6.gt) goto loc_823528B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,15764
	ctx.r9.s64 = ctx.r11.s64 + 15764;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r10,-25772
	ctx.r4.s64 = ctx.r10.s64 + -25772;
	// li r8,515
	ctx.r8.s64 = 515;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823528B0;
	sub_82372320(ctx, base);
loc_823528B0:
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// ble cr6,0x82352918
	if (!ctx.cr6.gt) goto loc_82352918;
loc_823528B8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823528D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82357ed8
	ctx.lr = 0x823528EC;
	sub_82357ED8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x823528b8
	if (ctx.cr6.gt) goto loc_823528B8;
loc_82352918:
	// bl 0x821c4d90
	ctx.lr = 0x8235291C;
	sub_821C4D90(ctx, base);
	// bl 0x82371718
	ctx.lr = 0x82352920;
	sub_82371718(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821c4d90
	ctx.lr = 0x82352938;
	sub_821C4D90(ctx, base);
	// bl 0x82371718
	ctx.lr = 0x8235293C;
	sub_82371718(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82352954:
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// bgt cr6,0x82352b0c
	if (ctx.cr6.gt) goto loc_82352B0C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823529c0
	if (ctx.cr6.eq) goto loc_823529C0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8235299c
	if (ctx.cr6.eq) goto loc_8235299C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8235297C:
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
	// bne 0x8235297c
	if (!ctx.cr0.eq) goto loc_8235297C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8235299C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823529B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823529c4
	if (!ctx.cr0.eq) goto loc_823529C4;
loc_823529C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823529C4:
	// li r3,36
	ctx.r3.s64 = 36;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8236a338
	ctx.lr = 0x823529D0;
	sub_8236A338(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823529f0
	if (ctx.cr0.eq) goto loc_823529F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b188
	ctx.lr = 0x823529E8;
	sub_8236B188(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x823529f4
	goto loc_823529F4;
loc_823529F0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823529F4:
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82352a24
	if (ctx.cr6.eq) goto loc_82352A24;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82352A04:
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
	// bne 0x82352a04
	if (!ctx.cr0.eq) goto loc_82352A04;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82352A24:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82352a54
	if (ctx.cr6.eq) goto loc_82352A54;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82352A34:
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
	// bne 0x82352a34
	if (!ctx.cr0.eq) goto loc_82352A34;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82352A54:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r26,2
	ctx.xer.ca = ctx.r26.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r26.s64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82352ae8
	if (ctx.cr0.eq) goto loc_82352AE8;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82352ac4
	if (ctx.cr6.eq) goto loc_82352AC4;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82352AA4:
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
	// bne 0x82352aa4
	if (!ctx.cr0.eq) goto loc_82352AA4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82352AC4:
	// lwzx r3,r30,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82352aec
	if (!ctx.cr0.eq) goto loc_82352AEC;
loc_82352AE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82352AEC:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82352AF8;
	sub_821C0630(ctx, base);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82352954
	if (!ctx.cr0.eq) goto loc_82352954;
loc_82352B0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82352b90
	if (ctx.cr6.eq) goto loc_82352B90;
loc_82352B18:
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bgt cr6,0x82352b88
	if (ctx.cr6.gt) goto loc_82352B88;
	// subfic r11,r28,2
	ctx.xer.ca = ctx.r28.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r28.s64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82352b7c
	if (ctx.cr6.lt) goto loc_82352B7C;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwzx r4,r30,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwzx r3,r30,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82357ed8
	ctx.lr = 0x82352B68;
	sub_82357ED8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82352B7C:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82352b18
	goto loc_82352B18;
loc_82352B88:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82352bb8
	if (!ctx.cr6.eq) goto loc_82352BB8;
loc_82352B90:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,15736
	ctx.r9.s64 = ctx.r11.s64 + 15736;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r10,12188
	ctx.r4.s64 = ctx.r10.s64 + 12188;
	// li r8,566
	ctx.r8.s64 = 566;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82352BB8;
	sub_82372320(ctx, base);
loc_82352BB8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82352BF0;
	sub_821C0630(ctx, base);
loc_82352BF0:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82352BF8;
	sub_821C0630(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821c0630
	ctx.lr = 0x82352C00;
	sub_821C0630(ctx, base);
loc_82352C00:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821c0630
	ctx.lr = 0x82352C08;
	sub_821C0630(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352778"))) PPC_WEAK_FUNC(sub_82352778);
PPC_FUNC_IMPL(__imp__sub_82352778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x82352780;
	__savegprlr_17(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// stw r4,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r4.u32);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// stw r5,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r5.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8234ecb8
	ctx.lr = 0x823527A4;
	sub_8234ECB8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352bf0
	if (ctx.cr6.eq) goto loc_82352BF0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r4,0(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x823527BC;
	sub_8235D3C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// bl 0x82350328
	ctx.lr = 0x823527D0;
	sub_82350328(ctx, base);
	// clrlwi. r24,r3,24
	ctx.r24.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82352828
	if (!ctx.cr0.eq) goto loc_82352828;
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,15848
	ctx.r9.s64 = ctx.r11.s64 + 15848;
	// addi r7,r10,15812
	ctx.r7.s64 = ctx.r10.s64 + 15812;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,497
	ctx.r8.s64 = 497;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8235280C;
	sub_82372320(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82352814;
	sub_821C0630(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8235281C;
	sub_821C0630(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821c0630
	ctx.lr = 0x82352824;
	sub_821C0630(ctx, base);
	// b 0x82352c00
	goto loc_82352C00;
loc_82352828:
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// bl 0x8234eac8
	ctx.lr = 0x82352830;
	sub_8234EAC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8236d968
	ctx.lr = 0x82352838;
	sub_8236D968(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lhz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82358880
	ctx.lr = 0x82352858;
	sub_82358880(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236be50
	ctx.lr = 0x82352860;
	sub_8236BE50(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// addi r21,r11,13260
	ctx.r21.s64 = ctx.r11.s64 + 13260;
	// addi r20,r10,13244
	ctx.r20.s64 = ctx.r10.s64 + 13244;
	// addi r19,r9,15812
	ctx.r19.s64 = ctx.r9.s64 + 15812;
	// ble cr6,0x823528b0
	if (!ctx.cr6.gt) goto loc_823528B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,15764
	ctx.r9.s64 = ctx.r11.s64 + 15764;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r10,-25772
	ctx.r4.s64 = ctx.r10.s64 + -25772;
	// li r8,515
	ctx.r8.s64 = 515;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823528B0;
	sub_82372320(ctx, base);
loc_823528B0:
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// ble cr6,0x82352918
	if (!ctx.cr6.gt) goto loc_82352918;
loc_823528B8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823528D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82357ed8
	ctx.lr = 0x823528EC;
	sub_82357ED8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x823528b8
	if (ctx.cr6.gt) goto loc_823528B8;
loc_82352918:
	// bl 0x821c4d90
	ctx.lr = 0x8235291C;
	sub_821C4D90(ctx, base);
	// bl 0x82371718
	ctx.lr = 0x82352920;
	sub_82371718(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821c4d90
	ctx.lr = 0x82352938;
	sub_821C4D90(ctx, base);
	// bl 0x82371718
	ctx.lr = 0x8235293C;
	sub_82371718(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82352954:
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// bgt cr6,0x82352b0c
	if (ctx.cr6.gt) goto loc_82352B0C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823529c0
	if (ctx.cr6.eq) goto loc_823529C0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8235299c
	if (ctx.cr6.eq) goto loc_8235299C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8235297C:
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
	// bne 0x8235297c
	if (!ctx.cr0.eq) goto loc_8235297C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8235299C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823529B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823529c4
	if (!ctx.cr0.eq) goto loc_823529C4;
loc_823529C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823529C4:
	// li r3,36
	ctx.r3.s64 = 36;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8236a338
	ctx.lr = 0x823529D0;
	sub_8236A338(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823529f0
	if (ctx.cr0.eq) goto loc_823529F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b188
	ctx.lr = 0x823529E8;
	sub_8236B188(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x823529f4
	goto loc_823529F4;
loc_823529F0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823529F4:
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82352a24
	if (ctx.cr6.eq) goto loc_82352A24;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82352A04:
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
	// bne 0x82352a04
	if (!ctx.cr0.eq) goto loc_82352A04;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82352A24:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82352a54
	if (ctx.cr6.eq) goto loc_82352A54;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82352A34:
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
	// bne 0x82352a34
	if (!ctx.cr0.eq) goto loc_82352A34;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82352A54:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r26,2
	ctx.xer.ca = ctx.r26.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r26.s64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82352ae8
	if (ctx.cr0.eq) goto loc_82352AE8;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82352ac4
	if (ctx.cr6.eq) goto loc_82352AC4;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82352AA4:
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
	// bne 0x82352aa4
	if (!ctx.cr0.eq) goto loc_82352AA4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82352AC4:
	// lwzx r3,r30,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82352aec
	if (!ctx.cr0.eq) goto loc_82352AEC;
loc_82352AE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82352AEC:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82352AF8;
	sub_821C0630(ctx, base);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82352954
	if (!ctx.cr0.eq) goto loc_82352954;
loc_82352B0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82352b90
	if (ctx.cr6.eq) goto loc_82352B90;
loc_82352B18:
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bgt cr6,0x82352b88
	if (ctx.cr6.gt) goto loc_82352B88;
	// subfic r11,r28,2
	ctx.xer.ca = ctx.r28.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r28.s64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82352b7c
	if (ctx.cr6.lt) goto loc_82352B7C;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwzx r4,r30,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwzx r3,r30,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82357ed8
	ctx.lr = 0x82352B68;
	sub_82357ED8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82352B7C:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82352b18
	goto loc_82352B18;
loc_82352B88:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82352bb8
	if (!ctx.cr6.eq) goto loc_82352BB8;
loc_82352B90:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,15736
	ctx.r9.s64 = ctx.r11.s64 + 15736;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r10,12188
	ctx.r4.s64 = ctx.r10.s64 + 12188;
	// li r8,566
	ctx.r8.s64 = 566;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82352BB8;
	sub_82372320(ctx, base);
loc_82352BB8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82352BF0;
	sub_821C0630(ctx, base);
loc_82352BF0:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82352BF8;
	sub_821C0630(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821c0630
	ctx.lr = 0x82352C00;
	sub_821C0630(ctx, base);
loc_82352C00:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821c0630
	ctx.lr = 0x82352C08;
	sub_821C0630(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352C10"))) PPC_WEAK_FUNC(sub_82352C10);
PPC_FUNC_IMPL(__imp__sub_82352C10) {
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
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x821c0630
	ctx.lr = 0x82352C28;
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

__attribute__((alias("__imp__sub_82352C38"))) PPC_WEAK_FUNC(sub_82352C38);
PPC_FUNC_IMPL(__imp__sub_82352C38) {
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
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x821c0630
	ctx.lr = 0x82352C50;
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

__attribute__((alias("__imp__sub_82352C60"))) PPC_WEAK_FUNC(sub_82352C60);
PPC_FUNC_IMPL(__imp__sub_82352C60) {
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82352C78;
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

__attribute__((alias("__imp__sub_82352C88"))) PPC_WEAK_FUNC(sub_82352C88);
PPC_FUNC_IMPL(__imp__sub_82352C88) {
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
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82352CA0;
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

__attribute__((alias("__imp__sub_82352CB0"))) PPC_WEAK_FUNC(sub_82352CB0);
PPC_FUNC_IMPL(__imp__sub_82352CB0) {
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
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82350110
	ctx.lr = 0x82352CC8;
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

__attribute__((alias("__imp__sub_82352CD8"))) PPC_WEAK_FUNC(sub_82352CD8);
PPC_FUNC_IMPL(__imp__sub_82352CD8) {
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
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82352CF0;
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

__attribute__((alias("__imp__sub_82352D00"))) PPC_WEAK_FUNC(sub_82352D00);
PPC_FUNC_IMPL(__imp__sub_82352D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,16176(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16176);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82352D10;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82352d74
	if (!ctx.cr6.gt) goto loc_82352D74;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82352D38:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82352d60
	if (!ctx.cr6.eq) goto loc_82352D60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82351738
	ctx.lr = 0x82352D58;
	sub_82351738(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82352D60:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82352d38
	if (ctx.cr6.lt) goto loc_82352D38;
loc_82352D74:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x82352D7C;
	sub_821C0630(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352D08"))) PPC_WEAK_FUNC(sub_82352D08);
PPC_FUNC_IMPL(__imp__sub_82352D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82352D10;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82352d74
	if (!ctx.cr6.gt) goto loc_82352D74;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82352D38:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82352d60
	if (!ctx.cr6.eq) goto loc_82352D60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82351738
	ctx.lr = 0x82352D58;
	sub_82351738(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82352D60:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82352d38
	if (ctx.cr6.lt) goto loc_82352D38;
loc_82352D74:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x82352D7C;
	sub_821C0630(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352D84"))) PPC_WEAK_FUNC(sub_82352D84);
PPC_FUNC_IMPL(__imp__sub_82352D84) {
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
	ctx.lr = 0x82352D9C;
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

__attribute__((alias("__imp__sub_82352DAC"))) PPC_WEAK_FUNC(sub_82352DAC);
PPC_FUNC_IMPL(__imp__sub_82352DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352DB0"))) PPC_WEAK_FUNC(sub_82352DB0);
PPC_FUNC_IMPL(__imp__sub_82352DB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82351798
	sub_82351798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352DB4"))) PPC_WEAK_FUNC(sub_82352DB4);
PPC_FUNC_IMPL(__imp__sub_82352DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352DB8"))) PPC_WEAK_FUNC(sub_82352DB8);
PPC_FUNC_IMPL(__imp__sub_82352DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,16248(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16248);
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
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
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82359b98
	ctx.lr = 0x82352E10;
	sub_82359B98(ctx, base);
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

__attribute__((alias("__imp__sub_82352DC0"))) PPC_WEAK_FUNC(sub_82352DC0);
PPC_FUNC_IMPL(__imp__sub_82352DC0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
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
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82359b98
	ctx.lr = 0x82352E10;
	sub_82359B98(ctx, base);
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

__attribute__((alias("__imp__sub_82352E2C"))) PPC_WEAK_FUNC(sub_82352E2C);
PPC_FUNC_IMPL(__imp__sub_82352E2C) {
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
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82352e5c
	if (ctx.cr0.eq) goto loc_82352E5C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82359b58
	ctx.lr = 0x82352E5C;
	sub_82359B58(ctx, base);
loc_82352E5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82352E6C"))) PPC_WEAK_FUNC(sub_82352E6C);
PPC_FUNC_IMPL(__imp__sub_82352E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352E70"))) PPC_WEAK_FUNC(sub_82352E70);
PPC_FUNC_IMPL(__imp__sub_82352E70) {
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
	// bl 0x82351a88
	ctx.lr = 0x82352E90;
	sub_82351A88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82352ea0
	if (ctx.cr0.eq) goto loc_82352EA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82352EA0;
	sub_8236A3F0(ctx, base);
loc_82352EA0:
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

__attribute__((alias("__imp__sub_82352EBC"))) PPC_WEAK_FUNC(sub_82352EBC);
PPC_FUNC_IMPL(__imp__sub_82352EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352EC0"))) PPC_WEAK_FUNC(sub_82352EC0);
PPC_FUNC_IMPL(__imp__sub_82352EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,16408(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16408);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e434
	ctx.lr = 0x82352ED0;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// addi r31,r1,-368
	ctx.r31.s64 = ctx.r1.s64 + -368;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// clrlwi. r16,r5,24
	ctx.r16.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq 0x82352f00
	if (ctx.cr0.eq) goto loc_82352F00;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82352F00:
	// addi r27,r21,20
	ctx.r27.s64 = ctx.r21.s64 + 20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ce0f8
	ctx.lr = 0x82352F0C;
	sub_820CE0F8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82352fb0
	if (ctx.cr0.eq) goto loc_82352FB0;
	// addi r26,r21,100
	ctx.r26.s64 = ctx.r21.s64 + 100;
loc_82352F1C:
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x820ce088
	ctx.lr = 0x82352F2C;
	sub_820CE088(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82359700
	ctx.lr = 0x82352F38;
	sub_82359700(ctx, base);
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82352f60
	if (!ctx.cr0.eq) goto loc_82352F60;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82352F60:
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363e10
	ctx.lr = 0x82352F6C;
	sub_82363E10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82352f9c
	if (ctx.cr6.eq) goto loc_82352F9C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82352f9c
	if (ctx.cr6.eq) goto loc_82352F9C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235d660
	ctx.lr = 0x82352F88;
	sub_8235D660(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8235b6b0
	ctx.lr = 0x82352F90;
	sub_8235B6B0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82358ab0
	ctx.lr = 0x82352F9C;
	sub_82358AB0(ctx, base);
loc_82352F9C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82352FA4;
	sub_821C0630(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352f1c
	if (!ctx.cr6.eq) goto loc_82352F1C;
loc_82352FB0:
	// lwz r18,96(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r17,84(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82353584
	if (ctx.cr6.eq) goto loc_82353584;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
loc_82352FCC:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82353584
	if (ctx.cr6.eq) goto loc_82353584;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82358d18
	ctx.lr = 0x82352FDC;
	sub_82358D18(ctx, base);
	// lwz r11,88(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// lwzx r23,r11,r20
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r23,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r23.u32);
	// beq cr6,0x82353014
	if (ctx.cr6.eq) goto loc_82353014;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
loc_82352FF4:
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
	// bne 0x82352ff4
	if (!ctx.cr0.eq) goto loc_82352FF4;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_82353014:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8235f848
	ctx.lr = 0x82353020;
	sub_8235F848(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8236be58
	ctx.lr = 0x82353028;
	sub_8236BE58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x821c0630
	ctx.lr = 0x8235303C;
	sub_821C0630(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x823530dc
	if (ctx.cr0.eq) goto loc_823530DC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8235d660
	ctx.lr = 0x8235304C;
	sub_8235D660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r23.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82353080
	if (ctx.cr6.eq) goto loc_82353080;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
loc_82353060:
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
	// bne 0x82353060
	if (!ctx.cr0.eq) goto loc_82353060;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_82353080:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82353088;
	sub_821C0630(ctx, base);
	// stw r23,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r23.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823530b8
	if (ctx.cr6.eq) goto loc_823530B8;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
loc_82353098:
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
	// bne 0x82353098
	if (!ctx.cr0.eq) goto loc_82353098;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_823530B8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8235fe50
	ctx.lr = 0x823530C0;
	sub_8235FE50(ctx, base);
	// bl 0x82363e10
	ctx.lr = 0x823530C4;
	sub_82363E10(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823530d4
	if (ctx.cr6.eq) goto loc_823530D4;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8235356c
	if (ctx.cr6.gt) goto loc_8235356C;
loc_823530D4:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x823530DC;
	sub_821C0630(ctx, base);
loc_823530DC:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x823531bc
	if (ctx.cr6.eq) goto loc_823531BC;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
loc_823530EC:
	// lwz r11,76(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 76);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// beq cr6,0x82353124
	if (ctx.cr6.eq) goto loc_82353124;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82353104:
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
	// bne 0x82353104
	if (!ctx.cr0.eq) goto loc_82353104;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82353124:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234eac8
	ctx.lr = 0x8235312C;
	sub_8234EAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8235cf78
	ctx.lr = 0x82353138;
	sub_8235CF78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x821c0630
	ctx.lr = 0x82353154;
	sub_821C0630(ctx, base);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x823531a8
	if (ctx.cr0.eq) goto loc_823531A8;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8235318c
	if (ctx.cr6.eq) goto loc_8235318C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8235316C:
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
	// bne 0x8235316c
	if (!ctx.cr0.eq) goto loc_8235316C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8235318C:
	// lwz r3,72(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 72);
	// addi r5,r31,160
	ctx.r5.s64 = ctx.r31.s64 + 160;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823531A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823531A8:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x823531B0;
	sub_821C0630(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x823530ec
	if (!ctx.cr0.eq) goto loc_823530EC;
loc_823531BC:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353548
	if (ctx.cr6.eq) goto loc_82353548;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x823531D0;
	sub_8236A338(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823531f0
	if (ctx.cr0.eq) goto loc_823531F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8235d0f0
	ctx.lr = 0x823531E8;
	sub_8235D0F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823531f4
	goto loc_823531F4;
loc_823531F0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_823531F4:
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// beq cr6,0x82353228
	if (ctx.cr6.eq) goto loc_82353228;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
loc_82353208:
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
	// bne 0x82353208
	if (!ctx.cr0.eq) goto loc_82353208;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82353228:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8235d3c8
	ctx.lr = 0x82353230;
	sub_8235D3C8(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82352dc0
	ctx.lr = 0x8235323C;
	sub_82352DC0(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823534d0
	if (ctx.cr6.eq) goto loc_823534D0;
loc_8235324C:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82351538
	ctx.lr = 0x82353254;
	sub_82351538(ctx, base);
	// lwz r24,0(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r24,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r24.u32);
	// beq cr6,0x82353288
	if (ctx.cr6.eq) goto loc_82353288;
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
loc_82353268:
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
	// bne 0x82353268
	if (!ctx.cr0.eq) goto loc_82353268;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_82353288:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r25,20(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8235329c
	goto loc_8235329C;
loc_82353298:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8235329C:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823532cc
	if (ctx.cr6.eq) goto loc_823532CC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823532AC:
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
	// bne 0x823532ac
	if (!ctx.cr0.eq) goto loc_823532AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823532CC:
	// stw r23,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r23.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823532fc
	if (ctx.cr6.eq) goto loc_823532FC;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
loc_823532DC:
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
	// bne 0x823532dc
	if (!ctx.cr0.eq) goto loc_823532DC;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_823532FC:
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8234ff80
	ctx.lr = 0x8235330C;
	sub_8234FF80(ctx, base);
	// stw r22,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r22.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353498
	if (ctx.cr0.eq) goto loc_82353498;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r21,100
	ctx.r3.s64 = ctx.r21.s64 + 100;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// bl 0x82359700
	ctx.lr = 0x82353328;
	sub_82359700(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82353340
	if (ctx.cr0.eq) goto loc_82353340;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823689c8
	ctx.lr = 0x82353338;
	sub_823689C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82353344
	goto loc_82353344;
loc_82353340:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82353344:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823533b0
	if (ctx.cr0.eq) goto loc_823533B0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234eac8
	ctx.lr = 0x82353354;
	sub_8234EAC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235cf78
	ctx.lr = 0x82353364;
	sub_8235CF78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r15,r11,27,31,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x821c0630
	ctx.lr = 0x82353380;
	sub_821C0630(ctx, base);
	// cmplwi r15,0
	ctx.cr0.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq 0x823533b0
	if (ctx.cr0.eq) goto loc_823533B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8236d968
	ctx.lr = 0x82353394;
	sub_8236D968(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x821c06d8
	ctx.lr = 0x823533A4;
	sub_821C06D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8234f148
	ctx.lr = 0x823533B0;
	sub_8234F148(ctx, base);
loc_823533B0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823533c4
	if (!ctx.cr0.eq) goto loc_823533C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x821c06d8
	ctx.lr = 0x823533C4;
	sub_821C06D8(ctx, base);
loc_823533C4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,9952
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9952, ctx.xer);
	// ble cr6,0x82353498
	if (!ctx.cr6.gt) goto loc_82353498;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82350ee8
	ctx.lr = 0x823533E0;
	sub_82350EE8(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353434
	if (ctx.cr0.eq) goto loc_82353434;
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82353418
	if (ctx.cr6.eq) goto loc_82353418;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
loc_823533F8:
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
	// bne 0x823533f8
	if (!ctx.cr0.eq) goto loc_823533F8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_82353418:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82353434:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x8235343C;
	sub_8236A338(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8235345c
	if (ctx.cr0.eq) goto loc_8235345C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8235d0f0
	ctx.lr = 0x82353454;
	sub_8235D0F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82353460
	goto loc_82353460;
loc_8235345C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82353460:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82350190
	ctx.lr = 0x82353468;
	sub_82350190(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// lwz r26,88(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8235d3c8
	ctx.lr = 0x82353478;
	sub_8235D3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823689c8
	ctx.lr = 0x82353484;
	sub_823689C8(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x821c0630
	ctx.lr = 0x8235348C;
	sub_821C0630(ctx, base);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// b 0x8235349c
	goto loc_8235349C;
loc_82353498:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8235349C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823534A4;
	sub_821C0630(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82353298
	if (!ctx.cr6.eq) goto loc_82353298;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x823534C4;
	sub_821C0630(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235324c
	if (!ctx.cr6.eq) goto loc_8235324C;
loc_823534D0:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353524
	if (ctx.cr0.eq) goto loc_82353524;
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82353508
	if (ctx.cr6.eq) goto loc_82353508;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
loc_823534E8:
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
	// bne 0x823534e8
	if (!ctx.cr0.eq) goto loc_823534E8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_82353508:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82353524:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x8236a3f0
	ctx.lr = 0x8235352C;
	sub_8236A3F0(ctx, base);
	// stw r22,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r22.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r22.u32);
	// stw r22,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r22.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x82353540;
	sub_821C0630(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82353548;
	sub_821C0630(ctx, base);
loc_82353548:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82353550;
	sub_821C0630(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82351798
	ctx.lr = 0x82353558;
	sub_82351798(ctx, base);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x82352fcc
	if (ctx.cr6.lt) goto loc_82352FCC;
	// b 0x82353584
	goto loc_82353584;
loc_8235356C:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82353574;
	sub_821C0630(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x8235357C;
	sub_821C0630(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82351798
	ctx.lr = 0x82353584;
	sub_82351798(ctx, base);
loc_82353584:
	// addi r1,r31,368
	ctx.r1.s64 = ctx.r31.s64 + 368;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x8233e484
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352EC8"))) PPC_WEAK_FUNC(sub_82352EC8);
PPC_FUNC_IMPL(__imp__sub_82352EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e434
	ctx.lr = 0x82352ED0;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// addi r31,r1,-368
	ctx.r31.s64 = ctx.r1.s64 + -368;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// clrlwi. r16,r5,24
	ctx.r16.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq 0x82352f00
	if (ctx.cr0.eq) goto loc_82352F00;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82352F00:
	// addi r27,r21,20
	ctx.r27.s64 = ctx.r21.s64 + 20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ce0f8
	ctx.lr = 0x82352F0C;
	sub_820CE0F8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82352fb0
	if (ctx.cr0.eq) goto loc_82352FB0;
	// addi r26,r21,100
	ctx.r26.s64 = ctx.r21.s64 + 100;
loc_82352F1C:
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x820ce088
	ctx.lr = 0x82352F2C;
	sub_820CE088(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82359700
	ctx.lr = 0x82352F38;
	sub_82359700(ctx, base);
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82352f60
	if (!ctx.cr0.eq) goto loc_82352F60;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82352F60:
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363e10
	ctx.lr = 0x82352F6C;
	sub_82363E10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82352f9c
	if (ctx.cr6.eq) goto loc_82352F9C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82352f9c
	if (ctx.cr6.eq) goto loc_82352F9C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235d660
	ctx.lr = 0x82352F88;
	sub_8235D660(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8235b6b0
	ctx.lr = 0x82352F90;
	sub_8235B6B0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82358ab0
	ctx.lr = 0x82352F9C;
	sub_82358AB0(ctx, base);
loc_82352F9C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82352FA4;
	sub_821C0630(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352f1c
	if (!ctx.cr6.eq) goto loc_82352F1C;
loc_82352FB0:
	// lwz r18,96(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r17,84(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82353584
	if (ctx.cr6.eq) goto loc_82353584;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
loc_82352FCC:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82353584
	if (ctx.cr6.eq) goto loc_82353584;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82358d18
	ctx.lr = 0x82352FDC;
	sub_82358D18(ctx, base);
	// lwz r11,88(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// lwzx r23,r11,r20
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r23,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r23.u32);
	// beq cr6,0x82353014
	if (ctx.cr6.eq) goto loc_82353014;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
loc_82352FF4:
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
	// bne 0x82352ff4
	if (!ctx.cr0.eq) goto loc_82352FF4;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_82353014:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8235f848
	ctx.lr = 0x82353020;
	sub_8235F848(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8236be58
	ctx.lr = 0x82353028;
	sub_8236BE58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x821c0630
	ctx.lr = 0x8235303C;
	sub_821C0630(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x823530dc
	if (ctx.cr0.eq) goto loc_823530DC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8235d660
	ctx.lr = 0x8235304C;
	sub_8235D660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r23.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82353080
	if (ctx.cr6.eq) goto loc_82353080;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
loc_82353060:
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
	// bne 0x82353060
	if (!ctx.cr0.eq) goto loc_82353060;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_82353080:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82353088;
	sub_821C0630(ctx, base);
	// stw r23,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r23.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823530b8
	if (ctx.cr6.eq) goto loc_823530B8;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
loc_82353098:
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
	// bne 0x82353098
	if (!ctx.cr0.eq) goto loc_82353098;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_823530B8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8235fe50
	ctx.lr = 0x823530C0;
	sub_8235FE50(ctx, base);
	// bl 0x82363e10
	ctx.lr = 0x823530C4;
	sub_82363E10(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823530d4
	if (ctx.cr6.eq) goto loc_823530D4;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8235356c
	if (ctx.cr6.gt) goto loc_8235356C;
loc_823530D4:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x823530DC;
	sub_821C0630(ctx, base);
loc_823530DC:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x823531bc
	if (ctx.cr6.eq) goto loc_823531BC;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
loc_823530EC:
	// lwz r11,76(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 76);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// beq cr6,0x82353124
	if (ctx.cr6.eq) goto loc_82353124;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82353104:
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
	// bne 0x82353104
	if (!ctx.cr0.eq) goto loc_82353104;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82353124:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234eac8
	ctx.lr = 0x8235312C;
	sub_8234EAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8235cf78
	ctx.lr = 0x82353138;
	sub_8235CF78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x821c0630
	ctx.lr = 0x82353154;
	sub_821C0630(ctx, base);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x823531a8
	if (ctx.cr0.eq) goto loc_823531A8;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8235318c
	if (ctx.cr6.eq) goto loc_8235318C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8235316C:
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
	// bne 0x8235316c
	if (!ctx.cr0.eq) goto loc_8235316C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8235318C:
	// lwz r3,72(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 72);
	// addi r5,r31,160
	ctx.r5.s64 = ctx.r31.s64 + 160;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823531A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823531A8:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x823531B0;
	sub_821C0630(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x823530ec
	if (!ctx.cr0.eq) goto loc_823530EC;
loc_823531BC:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353548
	if (ctx.cr6.eq) goto loc_82353548;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x823531D0;
	sub_8236A338(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823531f0
	if (ctx.cr0.eq) goto loc_823531F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8235d0f0
	ctx.lr = 0x823531E8;
	sub_8235D0F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823531f4
	goto loc_823531F4;
loc_823531F0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_823531F4:
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// beq cr6,0x82353228
	if (ctx.cr6.eq) goto loc_82353228;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
loc_82353208:
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
	// bne 0x82353208
	if (!ctx.cr0.eq) goto loc_82353208;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82353228:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8235d3c8
	ctx.lr = 0x82353230;
	sub_8235D3C8(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82352dc0
	ctx.lr = 0x8235323C;
	sub_82352DC0(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823534d0
	if (ctx.cr6.eq) goto loc_823534D0;
loc_8235324C:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82351538
	ctx.lr = 0x82353254;
	sub_82351538(ctx, base);
	// lwz r24,0(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r24,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r24.u32);
	// beq cr6,0x82353288
	if (ctx.cr6.eq) goto loc_82353288;
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
loc_82353268:
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
	// bne 0x82353268
	if (!ctx.cr0.eq) goto loc_82353268;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_82353288:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r25,20(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8235329c
	goto loc_8235329C;
loc_82353298:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8235329C:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823532cc
	if (ctx.cr6.eq) goto loc_823532CC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823532AC:
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
	// bne 0x823532ac
	if (!ctx.cr0.eq) goto loc_823532AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823532CC:
	// stw r23,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r23.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823532fc
	if (ctx.cr6.eq) goto loc_823532FC;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
loc_823532DC:
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
	// bne 0x823532dc
	if (!ctx.cr0.eq) goto loc_823532DC;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_823532FC:
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8234ff80
	ctx.lr = 0x8235330C;
	sub_8234FF80(ctx, base);
	// stw r22,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r22.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353498
	if (ctx.cr0.eq) goto loc_82353498;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r21,100
	ctx.r3.s64 = ctx.r21.s64 + 100;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// bl 0x82359700
	ctx.lr = 0x82353328;
	sub_82359700(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82353340
	if (ctx.cr0.eq) goto loc_82353340;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823689c8
	ctx.lr = 0x82353338;
	sub_823689C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82353344
	goto loc_82353344;
loc_82353340:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82353344:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823533b0
	if (ctx.cr0.eq) goto loc_823533B0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234eac8
	ctx.lr = 0x82353354;
	sub_8234EAC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235cf78
	ctx.lr = 0x82353364;
	sub_8235CF78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r15,r11,27,31,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x821c0630
	ctx.lr = 0x82353380;
	sub_821C0630(ctx, base);
	// cmplwi r15,0
	ctx.cr0.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq 0x823533b0
	if (ctx.cr0.eq) goto loc_823533B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8236d968
	ctx.lr = 0x82353394;
	sub_8236D968(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x821c06d8
	ctx.lr = 0x823533A4;
	sub_821C06D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8234f148
	ctx.lr = 0x823533B0;
	sub_8234F148(ctx, base);
loc_823533B0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823533c4
	if (!ctx.cr0.eq) goto loc_823533C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x821c06d8
	ctx.lr = 0x823533C4;
	sub_821C06D8(ctx, base);
loc_823533C4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,9952
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9952, ctx.xer);
	// ble cr6,0x82353498
	if (!ctx.cr6.gt) goto loc_82353498;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82350ee8
	ctx.lr = 0x823533E0;
	sub_82350EE8(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353434
	if (ctx.cr0.eq) goto loc_82353434;
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82353418
	if (ctx.cr6.eq) goto loc_82353418;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
loc_823533F8:
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
	// bne 0x823533f8
	if (!ctx.cr0.eq) goto loc_823533F8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_82353418:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82353434:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x8235343C;
	sub_8236A338(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8235345c
	if (ctx.cr0.eq) goto loc_8235345C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8235d0f0
	ctx.lr = 0x82353454;
	sub_8235D0F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82353460
	goto loc_82353460;
loc_8235345C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82353460:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82350190
	ctx.lr = 0x82353468;
	sub_82350190(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// lwz r26,88(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8235d3c8
	ctx.lr = 0x82353478;
	sub_8235D3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823689c8
	ctx.lr = 0x82353484;
	sub_823689C8(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x821c0630
	ctx.lr = 0x8235348C;
	sub_821C0630(ctx, base);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// b 0x8235349c
	goto loc_8235349C;
loc_82353498:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8235349C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823534A4;
	sub_821C0630(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82353298
	if (!ctx.cr6.eq) goto loc_82353298;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x823534C4;
	sub_821C0630(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235324c
	if (!ctx.cr6.eq) goto loc_8235324C;
loc_823534D0:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353524
	if (ctx.cr0.eq) goto loc_82353524;
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82353508
	if (ctx.cr6.eq) goto loc_82353508;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
loc_823534E8:
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
	// bne 0x823534e8
	if (!ctx.cr0.eq) goto loc_823534E8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_82353508:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82353524:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x8236a3f0
	ctx.lr = 0x8235352C;
	sub_8236A3F0(ctx, base);
	// stw r22,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r22.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r22.u32);
	// stw r22,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r22.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x82353540;
	sub_821C0630(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82353548;
	sub_821C0630(ctx, base);
loc_82353548:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82353550;
	sub_821C0630(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82351798
	ctx.lr = 0x82353558;
	sub_82351798(ctx, base);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x82352fcc
	if (ctx.cr6.lt) goto loc_82352FCC;
	// b 0x82353584
	goto loc_82353584;
loc_8235356C:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82353574;
	sub_821C0630(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x8235357C;
	sub_821C0630(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82351798
	ctx.lr = 0x82353584;
	sub_82351798(ctx, base);
loc_82353584:
	// addi r1,r31,368
	ctx.r1.s64 = ctx.r31.s64 + 368;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x8233e484
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353590"))) PPC_WEAK_FUNC(sub_82353590);
PPC_FUNC_IMPL(__imp__sub_82353590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
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
	// bl 0x821c0630
	ctx.lr = 0x823535A8;
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

__attribute__((alias("__imp__sub_823535B8"))) PPC_WEAK_FUNC(sub_823535B8);
PPC_FUNC_IMPL(__imp__sub_823535B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82352db0
	ctx.lr = 0x823535D0;
	sub_82352DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823535E0"))) PPC_WEAK_FUNC(sub_823535E0);
PPC_FUNC_IMPL(__imp__sub_823535E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
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
	ctx.lr = 0x823535F8;
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

__attribute__((alias("__imp__sub_82353608"))) PPC_WEAK_FUNC(sub_82353608);
PPC_FUNC_IMPL(__imp__sub_82353608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
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
	// bl 0x821c0630
	ctx.lr = 0x82353620;
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

__attribute__((alias("__imp__sub_82353630"))) PPC_WEAK_FUNC(sub_82353630);
PPC_FUNC_IMPL(__imp__sub_82353630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
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
	ctx.lr = 0x82353648;
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

__attribute__((alias("__imp__sub_82353658"))) PPC_WEAK_FUNC(sub_82353658);
PPC_FUNC_IMPL(__imp__sub_82353658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
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
	// bl 0x821c0630
	ctx.lr = 0x82353670;
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

__attribute__((alias("__imp__sub_82353680"))) PPC_WEAK_FUNC(sub_82353680);
PPC_FUNC_IMPL(__imp__sub_82353680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82350110
	ctx.lr = 0x82353698;
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

__attribute__((alias("__imp__sub_823536A8"))) PPC_WEAK_FUNC(sub_823536A8);
PPC_FUNC_IMPL(__imp__sub_823536A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
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
	// bl 0x821c0630
	ctx.lr = 0x823536C0;
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

__attribute__((alias("__imp__sub_823536D0"))) PPC_WEAK_FUNC(sub_823536D0);
PPC_FUNC_IMPL(__imp__sub_823536D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
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
	ctx.lr = 0x823536E8;
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

__attribute__((alias("__imp__sub_823536F8"))) PPC_WEAK_FUNC(sub_823536F8);
PPC_FUNC_IMPL(__imp__sub_823536F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
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
	// bl 0x82359b58
	ctx.lr = 0x82353710;
	sub_82359B58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353720"))) PPC_WEAK_FUNC(sub_82353720);
PPC_FUNC_IMPL(__imp__sub_82353720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
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
	ctx.lr = 0x82353738;
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

__attribute__((alias("__imp__sub_82353748"))) PPC_WEAK_FUNC(sub_82353748);
PPC_FUNC_IMPL(__imp__sub_82353748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
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
	// bl 0x821c0630
	ctx.lr = 0x82353760;
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

__attribute__((alias("__imp__sub_82353770"))) PPC_WEAK_FUNC(sub_82353770);
PPC_FUNC_IMPL(__imp__sub_82353770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82350110
	ctx.lr = 0x82353788;
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

__attribute__((alias("__imp__sub_82353798"))) PPC_WEAK_FUNC(sub_82353798);
PPC_FUNC_IMPL(__imp__sub_82353798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x821c0630
	ctx.lr = 0x823537B0;
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

__attribute__((alias("__imp__sub_823537C0"))) PPC_WEAK_FUNC(sub_823537C0);
PPC_FUNC_IMPL(__imp__sub_823537C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,16992(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16992);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x823537D0;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r4,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r4.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r26,r3,76
	ctx.r26.s64 = ctx.r3.s64 + 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82353824
	if (ctx.cr6.eq) goto loc_82353824;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
loc_82353808:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82353918
	if (ctx.cr6.eq) goto loc_82353918;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82353808
	if (ctx.cr6.lt) goto loc_82353808;
loc_82353824:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82353828:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353b00
	if (ctx.cr0.eq) goto loc_82353B00;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82351738
	ctx.lr = 0x82353838;
	sub_82351738(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x8234ecb8
	ctx.lr = 0x82353844;
	sub_8234ECB8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353898
	if (ctx.cr6.eq) goto loc_82353898;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r25,100
	ctx.r3.s64 = ctx.r25.s64 + 100;
	// bl 0x82359588
	ctx.lr = 0x8235385C;
	sub_82359588(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82353898
	if (!ctx.cr0.eq) goto loc_82353898;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,16888
	ctx.r9.s64 = ctx.r11.s64 + 16888;
	// addi r7,r10,16864
	ctx.r7.s64 = ctx.r10.s64 + 16864;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,733
	ctx.r8.s64 = 733;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82353898;
	sub_82372320(ctx, base);
loc_82353898:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8234eac8
	ctx.lr = 0x823538A4;
	sub_8234EAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8235cf78
	ctx.lr = 0x823538B0;
	sub_8235CF78(ctx, base);
	// lwz r30,84(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82353928
	if (ctx.cr6.eq) goto loc_82353928;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823538C4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x8234eac8
	ctx.lr = 0x823538D0;
	sub_8234EAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8235cf78
	ctx.lr = 0x823538DC;
	sub_8235CF78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r23,r11,27,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x821c0630
	ctx.lr = 0x823538FC;
	sub_821C0630(ctx, base);
	// cmplwi r23,0
	ctx.cr0.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne 0x82353924
	if (!ctx.cr0.eq) goto loc_82353924;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x823538c4
	if (ctx.cr6.lt) goto loc_823538C4;
	// b 0x82353928
	goto loc_82353928;
loc_82353918:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82353828
	goto loc_82353828;
loc_82353924:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82353928:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823539b0
	if (ctx.cr0.eq) goto loc_823539B0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82353964
	if (ctx.cr6.eq) goto loc_82353964;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82353944:
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
	// bne 0x82353944
	if (!ctx.cr0.eq) goto loc_82353944;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82353964:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r25,88
	ctx.r3.s64 = ctx.r25.s64 + 88;
	// bl 0x82352d08
	ctx.lr = 0x82353970;
	sub_82352D08(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x823539a4
	if (ctx.cr6.eq) goto loc_823539A4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82353984:
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
	// bne 0x82353984
	if (!ctx.cr0.eq) goto loc_82353984;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823539A4:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r25,44
	ctx.r3.s64 = ctx.r25.s64 + 44;
	// bl 0x82359350
	ctx.lr = 0x823539B0;
	sub_82359350(ctx, base);
loc_823539B0:
	// lwz r29,132(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82353a20
	if (ctx.cr6.eq) goto loc_82353A20;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823539C0:
	// lwz r10,124(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x823539fc
	if (ctx.cr6.eq) goto loc_823539FC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823539DC:
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
	// bne 0x823539dc
	if (!ctx.cr0.eq) goto loc_823539DC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823539FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x823539c0
	if (!ctx.cr0.eq) goto loc_823539C0;
loc_82353A20:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82353a54
	if (ctx.cr6.eq) goto loc_82353A54;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82353A34:
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
	// bne 0x82353a34
	if (!ctx.cr0.eq) goto loc_82353A34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82353A54:
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823508a8
	ctx.lr = 0x82353A64;
	sub_823508A8(ctx, base);
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353ae8
	if (ctx.cr6.eq) goto loc_82353AE8;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82353A78:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82353adc
	if (ctx.cr6.eq) goto loc_82353ADC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82353ac4
	if (ctx.cr6.eq) goto loc_82353AC4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82353AA4:
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
	// bne 0x82353aa4
	if (!ctx.cr0.eq) goto loc_82353AA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82353AC4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82353ADC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82353a78
	if (!ctx.cr0.eq) goto loc_82353A78;
loc_82353AE8:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82353AF0;
	sub_821C0630(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x82353AF8;
	sub_821C0630(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82353B00;
	sub_821C0630(ctx, base);
loc_82353B00:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821c0630
	ctx.lr = 0x82353B08;
	sub_821C0630(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823537C8"))) PPC_WEAK_FUNC(sub_823537C8);
PPC_FUNC_IMPL(__imp__sub_823537C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x823537D0;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r4,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r4.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r26,r3,76
	ctx.r26.s64 = ctx.r3.s64 + 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82353824
	if (ctx.cr6.eq) goto loc_82353824;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
loc_82353808:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82353918
	if (ctx.cr6.eq) goto loc_82353918;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82353808
	if (ctx.cr6.lt) goto loc_82353808;
loc_82353824:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82353828:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353b00
	if (ctx.cr0.eq) goto loc_82353B00;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82351738
	ctx.lr = 0x82353838;
	sub_82351738(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x8234ecb8
	ctx.lr = 0x82353844;
	sub_8234ECB8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353898
	if (ctx.cr6.eq) goto loc_82353898;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r25,100
	ctx.r3.s64 = ctx.r25.s64 + 100;
	// bl 0x82359588
	ctx.lr = 0x8235385C;
	sub_82359588(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82353898
	if (!ctx.cr0.eq) goto loc_82353898;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,16888
	ctx.r9.s64 = ctx.r11.s64 + 16888;
	// addi r7,r10,16864
	ctx.r7.s64 = ctx.r10.s64 + 16864;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,733
	ctx.r8.s64 = 733;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82353898;
	sub_82372320(ctx, base);
loc_82353898:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8234eac8
	ctx.lr = 0x823538A4;
	sub_8234EAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8235cf78
	ctx.lr = 0x823538B0;
	sub_8235CF78(ctx, base);
	// lwz r30,84(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82353928
	if (ctx.cr6.eq) goto loc_82353928;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823538C4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x8234eac8
	ctx.lr = 0x823538D0;
	sub_8234EAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8235cf78
	ctx.lr = 0x823538DC;
	sub_8235CF78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r23,r11,27,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x821c0630
	ctx.lr = 0x823538FC;
	sub_821C0630(ctx, base);
	// cmplwi r23,0
	ctx.cr0.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne 0x82353924
	if (!ctx.cr0.eq) goto loc_82353924;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x823538c4
	if (ctx.cr6.lt) goto loc_823538C4;
	// b 0x82353928
	goto loc_82353928;
loc_82353918:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82353828
	goto loc_82353828;
loc_82353924:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82353928:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823539b0
	if (ctx.cr0.eq) goto loc_823539B0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82353964
	if (ctx.cr6.eq) goto loc_82353964;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82353944:
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
	// bne 0x82353944
	if (!ctx.cr0.eq) goto loc_82353944;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82353964:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r25,88
	ctx.r3.s64 = ctx.r25.s64 + 88;
	// bl 0x82352d08
	ctx.lr = 0x82353970;
	sub_82352D08(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x823539a4
	if (ctx.cr6.eq) goto loc_823539A4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82353984:
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
	// bne 0x82353984
	if (!ctx.cr0.eq) goto loc_82353984;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823539A4:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r25,44
	ctx.r3.s64 = ctx.r25.s64 + 44;
	// bl 0x82359350
	ctx.lr = 0x823539B0;
	sub_82359350(ctx, base);
loc_823539B0:
	// lwz r29,132(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82353a20
	if (ctx.cr6.eq) goto loc_82353A20;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823539C0:
	// lwz r10,124(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x823539fc
	if (ctx.cr6.eq) goto loc_823539FC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823539DC:
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
	// bne 0x823539dc
	if (!ctx.cr0.eq) goto loc_823539DC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823539FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x823539c0
	if (!ctx.cr0.eq) goto loc_823539C0;
loc_82353A20:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82353a54
	if (ctx.cr6.eq) goto loc_82353A54;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82353A34:
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
	// bne 0x82353a34
	if (!ctx.cr0.eq) goto loc_82353A34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82353A54:
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823508a8
	ctx.lr = 0x82353A64;
	sub_823508A8(ctx, base);
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353ae8
	if (ctx.cr6.eq) goto loc_82353AE8;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82353A78:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82353adc
	if (ctx.cr6.eq) goto loc_82353ADC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82353ac4
	if (ctx.cr6.eq) goto loc_82353AC4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82353AA4:
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
	// bne 0x82353aa4
	if (!ctx.cr0.eq) goto loc_82353AA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82353AC4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82353ADC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82353a78
	if (!ctx.cr0.eq) goto loc_82353A78;
loc_82353AE8:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82353AF0;
	sub_821C0630(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x82353AF8;
	sub_821C0630(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82353B00;
	sub_821C0630(ctx, base);
loc_82353B00:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821c0630
	ctx.lr = 0x82353B08;
	sub_821C0630(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353B10"))) PPC_WEAK_FUNC(sub_82353B10);
PPC_FUNC_IMPL(__imp__sub_82353B10) {
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
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x821c0630
	ctx.lr = 0x82353B28;
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

__attribute__((alias("__imp__sub_82353B38"))) PPC_WEAK_FUNC(sub_82353B38);
PPC_FUNC_IMPL(__imp__sub_82353B38) {
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82353B50;
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

__attribute__((alias("__imp__sub_82353B60"))) PPC_WEAK_FUNC(sub_82353B60);
PPC_FUNC_IMPL(__imp__sub_82353B60) {
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
	// bl 0x821c0630
	ctx.lr = 0x82353B78;
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

__attribute__((alias("__imp__sub_82353B88"))) PPC_WEAK_FUNC(sub_82353B88);
PPC_FUNC_IMPL(__imp__sub_82353B88) {
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
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82353BA0;
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

__attribute__((alias("__imp__sub_82353BB0"))) PPC_WEAK_FUNC(sub_82353BB0);
PPC_FUNC_IMPL(__imp__sub_82353BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82353bd8
	if (ctx.cr6.lt) goto loc_82353BD8;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
loc_82353BD8:
	// b 0x82352ec8
	sub_82352EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353BDC"))) PPC_WEAK_FUNC(sub_82353BDC);
PPC_FUNC_IMPL(__imp__sub_82353BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353BE0"))) PPC_WEAK_FUNC(sub_82353BE0);
PPC_FUNC_IMPL(__imp__sub_82353BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,17208(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 17208);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82353BF0;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353cb8
	if (ctx.cr6.eq) goto loc_82353CB8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82353C18:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8234eac8
	ctx.lr = 0x82353C24;
	sub_8234EAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8235cf78
	ctx.lr = 0x82353C30;
	sub_8235CF78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x821c0630
	ctx.lr = 0x82353C50;
	sub_821C0630(ctx, base);
	// cmplwi r26,0
	ctx.cr0.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq 0x82353ca4
	if (ctx.cr0.eq) goto loc_82353CA4;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82353c90
	if (ctx.cr6.eq) goto loc_82353C90;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82353C70:
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
	// bne 0x82353c70
	if (!ctx.cr0.eq) goto loc_82353C70;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82353C90:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// bl 0x823537c8
	ctx.lr = 0x82353C9C;
	sub_823537C8(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82353CA4:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82353c18
	if (ctx.cr6.lt) goto loc_82353C18;
loc_82353CB8:
	// addi r11,r30,-12
	ctx.r11.s64 = ctx.r30.s64 + -12;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 & ctx.r30.u64;
	// bl 0x8235fd60
	ctx.lr = 0x82353CD0;
	sub_8235FD60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x82353CD8;
	sub_821C0630(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353BE8"))) PPC_WEAK_FUNC(sub_82353BE8);
PPC_FUNC_IMPL(__imp__sub_82353BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82353BF0;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353cb8
	if (ctx.cr6.eq) goto loc_82353CB8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82353C18:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8234eac8
	ctx.lr = 0x82353C24;
	sub_8234EAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8235cf78
	ctx.lr = 0x82353C30;
	sub_8235CF78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x821c0630
	ctx.lr = 0x82353C50;
	sub_821C0630(ctx, base);
	// cmplwi r26,0
	ctx.cr0.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq 0x82353ca4
	if (ctx.cr0.eq) goto loc_82353CA4;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82353c90
	if (ctx.cr6.eq) goto loc_82353C90;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82353C70:
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
	// bne 0x82353c70
	if (!ctx.cr0.eq) goto loc_82353C70;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82353C90:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// bl 0x823537c8
	ctx.lr = 0x82353C9C;
	sub_823537C8(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82353CA4:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82353c18
	if (ctx.cr6.lt) goto loc_82353C18;
loc_82353CB8:
	// addi r11,r30,-12
	ctx.r11.s64 = ctx.r30.s64 + -12;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 & ctx.r30.u64;
	// bl 0x8235fd60
	ctx.lr = 0x82353CD0;
	sub_8235FD60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x82353CD8;
	sub_821C0630(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353CE0"))) PPC_WEAK_FUNC(sub_82353CE0);
PPC_FUNC_IMPL(__imp__sub_82353CE0) {
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
	ctx.lr = 0x82353CF8;
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

__attribute__((alias("__imp__sub_82353D08"))) PPC_WEAK_FUNC(sub_82353D08);
PPC_FUNC_IMPL(__imp__sub_82353D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,17400(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 17400);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82353D18;
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
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x82353D38;
	sub_8235D3C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// bl 0x821c07f0
	ctx.lr = 0x82353D4C;
	sub_821C07F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353de8
	if (ctx.cr0.eq) goto loc_82353DE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823503b8
	ctx.lr = 0x82353D64;
	sub_823503B8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353da8
	if (ctx.cr6.eq) goto loc_82353DA8;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82353D78:
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
	// bne 0x82353d78
	if (!ctx.cr0.eq) goto loc_82353D78;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823537c8
	ctx.lr = 0x82353DA4;
	sub_823537C8(ctx, base);
	// b 0x82353ddc
	goto loc_82353DDC;
loc_82353DA8:
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,17320
	ctx.r9.s64 = ctx.r11.s64 + 17320;
	// addi r7,r10,17292
	ctx.r7.s64 = ctx.r10.s64 + 17292;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,446
	ctx.r8.s64 = 446;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82353DDC;
	sub_82372320(ctx, base);
loc_82353DDC:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82353DE4;
	sub_821C0630(ctx, base);
	// b 0x82353e1c
	goto loc_82353E1C;
loc_82353DE8:
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,17272
	ctx.r9.s64 = ctx.r11.s64 + 17272;
	// addi r7,r10,17292
	ctx.r7.s64 = ctx.r10.s64 + 17292;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,451
	ctx.r8.s64 = 451;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82353E1C;
	sub_82372320(ctx, base);
loc_82353E1C:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82353E24;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82353E2C;
	sub_821C0630(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353D10"))) PPC_WEAK_FUNC(sub_82353D10);
PPC_FUNC_IMPL(__imp__sub_82353D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82353D18;
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
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x82353D38;
	sub_8235D3C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// bl 0x821c07f0
	ctx.lr = 0x82353D4C;
	sub_821C07F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353de8
	if (ctx.cr0.eq) goto loc_82353DE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823503b8
	ctx.lr = 0x82353D64;
	sub_823503B8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353da8
	if (ctx.cr6.eq) goto loc_82353DA8;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82353D78:
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
	// bne 0x82353d78
	if (!ctx.cr0.eq) goto loc_82353D78;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823537c8
	ctx.lr = 0x82353DA4;
	sub_823537C8(ctx, base);
	// b 0x82353ddc
	goto loc_82353DDC;
loc_82353DA8:
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,17320
	ctx.r9.s64 = ctx.r11.s64 + 17320;
	// addi r7,r10,17292
	ctx.r7.s64 = ctx.r10.s64 + 17292;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,446
	ctx.r8.s64 = 446;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82353DDC;
	sub_82372320(ctx, base);
loc_82353DDC:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82353DE4;
	sub_821C0630(ctx, base);
	// b 0x82353e1c
	goto loc_82353E1C;
loc_82353DE8:
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,17272
	ctx.r9.s64 = ctx.r11.s64 + 17272;
	// addi r7,r10,17292
	ctx.r7.s64 = ctx.r10.s64 + 17292;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,451
	ctx.r8.s64 = 451;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82353E1C;
	sub_82372320(ctx, base);
loc_82353E1C:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82353E24;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82353E2C;
	sub_821C0630(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353E34"))) PPC_WEAK_FUNC(sub_82353E34);
PPC_FUNC_IMPL(__imp__sub_82353E34) {
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
	ctx.lr = 0x82353E4C;
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

__attribute__((alias("__imp__sub_82353E5C"))) PPC_WEAK_FUNC(sub_82353E5C);
PPC_FUNC_IMPL(__imp__sub_82353E5C) {
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
	// bl 0x821c0630
	ctx.lr = 0x82353E74;
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

__attribute__((alias("__imp__sub_82353E84"))) PPC_WEAK_FUNC(sub_82353E84);
PPC_FUNC_IMPL(__imp__sub_82353E84) {
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
	// bl 0x821c0630
	ctx.lr = 0x82353E9C;
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

__attribute__((alias("__imp__sub_82353EAC"))) PPC_WEAK_FUNC(sub_82353EAC);
PPC_FUNC_IMPL(__imp__sub_82353EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353EB0"))) PPC_WEAK_FUNC(sub_82353EB0);
PPC_FUNC_IMPL(__imp__sub_82353EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,17632(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 17632);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82353EC0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235cf78
	ctx.lr = 0x82353ED8;
	sub_8235CF78(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8235d3c8
	ctx.lr = 0x82353EE4;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// bl 0x8236a958
	ctx.lr = 0x82353EFC;
	sub_8236A958(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82353f44
	if (!ctx.cr0.eq) goto loc_82353F44;
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,17596
	ctx.r9.s64 = ctx.r11.s64 + 17596;
	// addi r7,r10,17564
	ctx.r7.s64 = ctx.r10.s64 + 17564;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,275
	ctx.r8.s64 = 275;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82353F38;
	sub_82372320(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82353F40;
	sub_821C0630(ctx, base);
	// b 0x82354054
	goto loc_82354054;
loc_82353F44:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353fd4
	if (ctx.cr6.eq) goto loc_82353FD4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82353f90
	if (ctx.cr6.eq) goto loc_82353F90;
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,17512
	ctx.r9.s64 = ctx.r11.s64 + 17512;
	// addi r7,r10,17564
	ctx.r7.s64 = ctx.r10.s64 + 17564;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,314
	ctx.r8.s64 = 314;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82353F8C;
	sub_82372320(ctx, base);
	// b 0x8235404c
	goto loc_8235404C;
loc_82353F90:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82353fc4
	if (ctx.cr6.eq) goto loc_82353FC4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82353FA4:
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
	// bne 0x82353fa4
	if (!ctx.cr0.eq) goto loc_82353FA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82353FC4:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82353d10
	ctx.lr = 0x82353FD0;
	sub_82353D10(ctx, base);
	// b 0x8235404c
	goto loc_8235404C;
loc_82353FD4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235cfb0
	ctx.lr = 0x82353FE0;
	sub_8235CFB0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq 0x82354028
	if (ctx.cr0.eq) goto loc_82354028;
	// lwz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82354004:
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82354024
	if (ctx.cr6.eq) goto loc_82354024;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82354004
	if (ctx.cr6.lt) goto loc_82354004;
	// b 0x82354028
	goto loc_82354028;
loc_82354024:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82354028:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82354038
	if (!ctx.cr0.eq) goto loc_82354038;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// bl 0x8235fa68
	ctx.lr = 0x82354038;
	sub_8235FA68(ctx, base);
loc_82354038:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82351e80
	ctx.lr = 0x82354044;
	sub_82351E80(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x8235404C;
	sub_821C0630(ctx, base);
loc_8235404C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82354054;
	sub_821C0630(ctx, base);
loc_82354054:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x8235405C;
	sub_821C0630(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353EB8"))) PPC_WEAK_FUNC(sub_82353EB8);
PPC_FUNC_IMPL(__imp__sub_82353EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82353EC0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235cf78
	ctx.lr = 0x82353ED8;
	sub_8235CF78(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8235d3c8
	ctx.lr = 0x82353EE4;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// bl 0x8236a958
	ctx.lr = 0x82353EFC;
	sub_8236A958(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82353f44
	if (!ctx.cr0.eq) goto loc_82353F44;
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,17596
	ctx.r9.s64 = ctx.r11.s64 + 17596;
	// addi r7,r10,17564
	ctx.r7.s64 = ctx.r10.s64 + 17564;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,275
	ctx.r8.s64 = 275;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82353F38;
	sub_82372320(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82353F40;
	sub_821C0630(ctx, base);
	// b 0x82354054
	goto loc_82354054;
loc_82353F44:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353fd4
	if (ctx.cr6.eq) goto loc_82353FD4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82353f90
	if (ctx.cr6.eq) goto loc_82353F90;
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,17512
	ctx.r9.s64 = ctx.r11.s64 + 17512;
	// addi r7,r10,17564
	ctx.r7.s64 = ctx.r10.s64 + 17564;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,314
	ctx.r8.s64 = 314;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82353F8C;
	sub_82372320(ctx, base);
	// b 0x8235404c
	goto loc_8235404C;
loc_82353F90:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82353fc4
	if (ctx.cr6.eq) goto loc_82353FC4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82353FA4:
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
	// bne 0x82353fa4
	if (!ctx.cr0.eq) goto loc_82353FA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82353FC4:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82353d10
	ctx.lr = 0x82353FD0;
	sub_82353D10(ctx, base);
	// b 0x8235404c
	goto loc_8235404C;
loc_82353FD4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235cfb0
	ctx.lr = 0x82353FE0;
	sub_8235CFB0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq 0x82354028
	if (ctx.cr0.eq) goto loc_82354028;
	// lwz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82354004:
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82354024
	if (ctx.cr6.eq) goto loc_82354024;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82354004
	if (ctx.cr6.lt) goto loc_82354004;
	// b 0x82354028
	goto loc_82354028;
loc_82354024:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82354028:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82354038
	if (!ctx.cr0.eq) goto loc_82354038;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// bl 0x8235fa68
	ctx.lr = 0x82354038;
	sub_8235FA68(ctx, base);
loc_82354038:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82351e80
	ctx.lr = 0x82354044;
	sub_82351E80(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x8235404C;
	sub_821C0630(ctx, base);
loc_8235404C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82354054;
	sub_821C0630(ctx, base);
loc_82354054:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x8235405C;
	sub_821C0630(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354064"))) PPC_WEAK_FUNC(sub_82354064);
PPC_FUNC_IMPL(__imp__sub_82354064) {
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
	ctx.lr = 0x8235407C;
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

__attribute__((alias("__imp__sub_8235408C"))) PPC_WEAK_FUNC(sub_8235408C);
PPC_FUNC_IMPL(__imp__sub_8235408C) {
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
	// bl 0x821c0630
	ctx.lr = 0x823540A4;
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

__attribute__((alias("__imp__sub_823540B4"))) PPC_WEAK_FUNC(sub_823540B4);
PPC_FUNC_IMPL(__imp__sub_823540B4) {
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
	// bl 0x821c0630
	ctx.lr = 0x823540CC;
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

__attribute__((alias("__imp__sub_823540DC"))) PPC_WEAK_FUNC(sub_823540DC);
PPC_FUNC_IMPL(__imp__sub_823540DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823540E0"))) PPC_WEAK_FUNC(sub_823540E0);
PPC_FUNC_IMPL(__imp__sub_823540E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,17840(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 17840);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823540F0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235cf78
	ctx.lr = 0x82354108;
	sub_8235CF78(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8235cfe8
	ctx.lr = 0x82354110;
	sub_8235CFE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82354174
	if (ctx.cr6.eq) goto loc_82354174;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82354158
	if (ctx.cr6.eq) goto loc_82354158;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82354134
	if (ctx.cr6.eq) goto loc_82354134;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82354144
	goto loc_82354144;
loc_82354134:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x82350480
	ctx.lr = 0x82354140;
	sub_82350480(ctx, base);
loc_82354140:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82354144:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8235414C;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82354150:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82354158:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x82353eb8
	ctx.lr = 0x82354164;
	sub_82353EB8(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8235416C;
	sub_821C0630(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82354150
	goto loc_82354150;
loc_82354174:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8235d3c8
	ctx.lr = 0x82354180;
	sub_8235D3C8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c07f0
	ctx.lr = 0x8235418C;
	sub_821C07F0(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82354194;
	sub_821C0630(ctx, base);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823503b8
	ctx.lr = 0x823541A8;
	sub_823503B8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354224
	if (ctx.cr6.eq) goto loc_82354224;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// beq cr6,0x823541e8
	if (ctx.cr6.eq) goto loc_823541E8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_823541C8:
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
	// bne 0x823541c8
	if (!ctx.cr0.eq) goto loc_823541C8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_823541E8:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823541F0:
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
	// bne 0x823541f0
	if (!ctx.cr0.eq) goto loc_823541F0;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82352778
	ctx.lr = 0x82354220;
	sub_82352778(ctx, base);
	// b 0x82354258
	goto loc_82354258;
loc_82354224:
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,17788
	ctx.r9.s64 = ctx.r11.s64 + 17788;
	// addi r7,r10,17768
	ctx.r7.s64 = ctx.r10.s64 + 17768;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,241
	ctx.r8.s64 = 241;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82354258;
	sub_82372320(ctx, base);
loc_82354258:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82354260;
	sub_821C0630(ctx, base);
	// b 0x82354140
	goto loc_82354140;
}

__attribute__((alias("__imp__sub_823540E8"))) PPC_WEAK_FUNC(sub_823540E8);
PPC_FUNC_IMPL(__imp__sub_823540E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823540F0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235cf78
	ctx.lr = 0x82354108;
	sub_8235CF78(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8235cfe8
	ctx.lr = 0x82354110;
	sub_8235CFE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82354174
	if (ctx.cr6.eq) goto loc_82354174;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82354158
	if (ctx.cr6.eq) goto loc_82354158;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82354134
	if (ctx.cr6.eq) goto loc_82354134;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82354144
	goto loc_82354144;
loc_82354134:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x82350480
	ctx.lr = 0x82354140;
	sub_82350480(ctx, base);
loc_82354140:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82354144:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8235414C;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82354150:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82354158:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x82353eb8
	ctx.lr = 0x82354164;
	sub_82353EB8(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8235416C;
	sub_821C0630(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82354150
	goto loc_82354150;
loc_82354174:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8235d3c8
	ctx.lr = 0x82354180;
	sub_8235D3C8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c07f0
	ctx.lr = 0x8235418C;
	sub_821C07F0(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82354194;
	sub_821C0630(ctx, base);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823503b8
	ctx.lr = 0x823541A8;
	sub_823503B8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354224
	if (ctx.cr6.eq) goto loc_82354224;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// beq cr6,0x823541e8
	if (ctx.cr6.eq) goto loc_823541E8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_823541C8:
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
	// bne 0x823541c8
	if (!ctx.cr0.eq) goto loc_823541C8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_823541E8:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823541F0:
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
	// bne 0x823541f0
	if (!ctx.cr0.eq) goto loc_823541F0;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82352778
	ctx.lr = 0x82354220;
	sub_82352778(ctx, base);
	// b 0x82354258
	goto loc_82354258;
loc_82354224:
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
	// addi r6,r8,13244
	ctx.r6.s64 = ctx.r8.s64 + 13244;
	// addi r9,r11,17788
	ctx.r9.s64 = ctx.r11.s64 + 17788;
	// addi r7,r10,17768
	ctx.r7.s64 = ctx.r10.s64 + 17768;
	// addi r5,r5,13260
	ctx.r5.s64 = ctx.r5.s64 + 13260;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,241
	ctx.r8.s64 = 241;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82354258;
	sub_82372320(ctx, base);
loc_82354258:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82354260;
	sub_821C0630(ctx, base);
	// b 0x82354140
	goto loc_82354140;
}

__attribute__((alias("__imp__sub_82354264"))) PPC_WEAK_FUNC(sub_82354264);
PPC_FUNC_IMPL(__imp__sub_82354264) {
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
	// bl 0x821c0630
	ctx.lr = 0x8235427C;
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

__attribute__((alias("__imp__sub_8235428C"))) PPC_WEAK_FUNC(sub_8235428C);
PPC_FUNC_IMPL(__imp__sub_8235428C) {
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
	ctx.lr = 0x823542A4;
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

__attribute__((alias("__imp__sub_823542B4"))) PPC_WEAK_FUNC(sub_823542B4);
PPC_FUNC_IMPL(__imp__sub_823542B4) {
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
	// bl 0x821c0630
	ctx.lr = 0x823542CC;
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

__attribute__((alias("__imp__sub_823542DC"))) PPC_WEAK_FUNC(sub_823542DC);
PPC_FUNC_IMPL(__imp__sub_823542DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823542E0"))) PPC_WEAK_FUNC(sub_823542E0);
PPC_FUNC_IMPL(__imp__sub_823542E0) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354344
	if (ctx.cr6.eq) goto loc_82354344;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82354344
	if (ctx.cr6.eq) goto loc_82354344;
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
	// addi r6,r8,18088
	ctx.r6.s64 = ctx.r8.s64 + 18088;
	// addi r9,r11,18024
	ctx.r9.s64 = ctx.r11.s64 + 18024;
	// addi r7,r10,17992
	ctx.r7.s64 = ctx.r10.s64 + 17992;
	// addi r5,r5,17968
	ctx.r5.s64 = ctx.r5.s64 + 17968;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,159
	ctx.r8.s64 = 159;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82354344;
	sub_82372320(ctx, base);
loc_82354344:
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82354360"))) PPC_WEAK_FUNC(sub_82354360);
PPC_FUNC_IMPL(__imp__sub_82354360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354368"))) PPC_WEAK_FUNC(sub_82354368);
PPC_FUNC_IMPL(__imp__sub_82354368) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354370"))) PPC_WEAK_FUNC(sub_82354370);
PPC_FUNC_IMPL(__imp__sub_82354370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,18136(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18136);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82354380;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x8235439C;
	sub_8236A338(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823543bc
	if (ctx.cr0.eq) goto loc_823543BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8235d0f0
	ctx.lr = 0x823543B4;
	sub_8235D0F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823543c0
	goto loc_823543C0;
loc_823543BC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823543C0:
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823543f0
	if (ctx.cr6.eq) goto loc_823543F0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823543D0:
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
	// bne 0x823543d0
	if (!ctx.cr0.eq) goto loc_823543D0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823543F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8235d3c8
	ctx.lr = 0x823543FC;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8236b3c0
	ctx.lr = 0x82354414;
	sub_8236B3C0(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r27,84(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234e920
	ctx.lr = 0x82354420;
	sub_8234E920(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b4a0
	ctx.lr = 0x82354430;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236b048
	ctx.lr = 0x82354440;
	sub_8236B048(ctx, base);
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82354474
	if (ctx.cr6.eq) goto loc_82354474;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82354454:
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
	// bne 0x82354454
	if (!ctx.cr0.eq) goto loc_82354454;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82354474:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235448C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 + 92;
loc_82354498:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823544b8
	if (ctx.cr6.eq) goto loc_823544B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82354498
	if (ctx.cr6.lt) goto loc_82354498;
	// b 0x823544cc
	goto loc_823544CC;
loc_823544B8:
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82350190
	ctx.lr = 0x823544CC;
	sub_82350190(ctx, base);
loc_823544CC:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823544D4;
	sub_821C0630(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x823544DC;
	sub_821C0630(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x823544E4;
	sub_821C0630(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354378"))) PPC_WEAK_FUNC(sub_82354378);
PPC_FUNC_IMPL(__imp__sub_82354378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82354380;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x8235439C;
	sub_8236A338(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823543bc
	if (ctx.cr0.eq) goto loc_823543BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8235d0f0
	ctx.lr = 0x823543B4;
	sub_8235D0F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823543c0
	goto loc_823543C0;
loc_823543BC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823543C0:
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823543f0
	if (ctx.cr6.eq) goto loc_823543F0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823543D0:
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
	// bne 0x823543d0
	if (!ctx.cr0.eq) goto loc_823543D0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823543F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8235d3c8
	ctx.lr = 0x823543FC;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8236b3c0
	ctx.lr = 0x82354414;
	sub_8236B3C0(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r27,84(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234e920
	ctx.lr = 0x82354420;
	sub_8234E920(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b4a0
	ctx.lr = 0x82354430;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236b048
	ctx.lr = 0x82354440;
	sub_8236B048(ctx, base);
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82354474
	if (ctx.cr6.eq) goto loc_82354474;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82354454:
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
	// bne 0x82354454
	if (!ctx.cr0.eq) goto loc_82354454;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82354474:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235448C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 + 92;
loc_82354498:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823544b8
	if (ctx.cr6.eq) goto loc_823544B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82354498
	if (ctx.cr6.lt) goto loc_82354498;
	// b 0x823544cc
	goto loc_823544CC;
loc_823544B8:
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82350190
	ctx.lr = 0x823544CC;
	sub_82350190(ctx, base);
loc_823544CC:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823544D4;
	sub_821C0630(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x823544DC;
	sub_821C0630(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x823544E4;
	sub_821C0630(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823544EC"))) PPC_WEAK_FUNC(sub_823544EC);
PPC_FUNC_IMPL(__imp__sub_823544EC) {
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
	ctx.lr = 0x82354504;
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

__attribute__((alias("__imp__sub_82354514"))) PPC_WEAK_FUNC(sub_82354514);
PPC_FUNC_IMPL(__imp__sub_82354514) {
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
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82350110
	ctx.lr = 0x8235452C;
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

__attribute__((alias("__imp__sub_8235453C"))) PPC_WEAK_FUNC(sub_8235453C);
PPC_FUNC_IMPL(__imp__sub_8235453C) {
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
	ctx.lr = 0x82354554;
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

__attribute__((alias("__imp__sub_82354564"))) PPC_WEAK_FUNC(sub_82354564);
PPC_FUNC_IMPL(__imp__sub_82354564) {
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
	// bl 0x821c0630
	ctx.lr = 0x8235457C;
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

__attribute__((alias("__imp__sub_8235458C"))) PPC_WEAK_FUNC(sub_8235458C);
PPC_FUNC_IMPL(__imp__sub_8235458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354590"))) PPC_WEAK_FUNC(sub_82354590);
PPC_FUNC_IMPL(__imp__sub_82354590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82354598;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r30,r4,92
	ctx.r30.s64 = ctx.r4.s64 + 92;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_823545B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823545d4
	if (ctx.cr6.eq) goto loc_823545D4;
	// bl 0x8234e920
	ctx.lr = 0x823545C4;
	sub_8234E920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823545f4
	if (ctx.cr6.eq) goto loc_823545F4;
loc_823545D4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x823545b4
	if (ctx.cr6.lt) goto loc_823545B4;
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
loc_823545E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_823545F4:
	// addi r11,r31,23
	ctx.r11.s64 = ctx.r31.s64 + 23;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823545e8
	if (ctx.cr6.eq) goto loc_823545E8;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82354610:
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
	// bne 0x82354610
	if (!ctx.cr0.eq) goto loc_82354610;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823545e8
	goto loc_823545E8;
}

__attribute__((alias("__imp__sub_82354634"))) PPC_WEAK_FUNC(sub_82354634);
PPC_FUNC_IMPL(__imp__sub_82354634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354638"))) PPC_WEAK_FUNC(sub_82354638);
PPC_FUNC_IMPL(__imp__sub_82354638) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,124(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8235464C:
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
	// bne 0x8235464c
	if (!ctx.cr0.eq) goto loc_8235464C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354670"))) PPC_WEAK_FUNC(sub_82354670);
PPC_FUNC_IMPL(__imp__sub_82354670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,18296(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18296);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82354680;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r5.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x821c29b8
	ctx.lr = 0x823546AC;
	sub_821C29B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823547a4
	if (ctx.cr0.eq) goto loc_823547A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// bl 0x82350328
	ctx.lr = 0x823546C8;
	sub_82350328(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r27,r30,92
	ctx.r27.s64 = ctx.r30.s64 + 92;
loc_823546D4:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// beq cr6,0x82354708
	if (ctx.cr6.eq) goto loc_82354708;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823546E8:
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
	// bne 0x823546e8
	if (!ctx.cr0.eq) goto loc_823546E8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82354708:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82354748
	if (ctx.cr6.eq) goto loc_82354748;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e900
	ctx.lr = 0x8235471C;
	sub_8234E900(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354748
	if (ctx.cr0.eq) goto loc_82354748;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8234ecb8
	ctx.lr = 0x82354730;
	sub_8234ECB8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8235474c
	if (ctx.cr6.eq) goto loc_8235474C;
loc_82354748:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235474C:
	// clrlwi. r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82354764
	if (ctx.cr0.eq) goto loc_82354764;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// rlwinm r28,r28,0,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x821c0630
	ctx.lr = 0x82354764;
	sub_821C0630(ctx, base);
loc_82354764:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82354788
	if (!ctx.cr0.eq) goto loc_82354788;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82354774;
	sub_821C0630(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// blt cr6,0x823546d4
	if (ctx.cr6.lt) goto loc_823546D4;
	// b 0x823547a4
	goto loc_823547A4;
loc_82354788:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235479c
	if (ctx.cr0.eq) goto loc_8235479C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// bl 0x8234ed18
	ctx.lr = 0x8235479C;
	sub_8234ED18(ctx, base);
loc_8235479C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823547A4;
	sub_821C0630(ctx, base);
loc_823547A4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821c0630
	ctx.lr = 0x823547AC;
	sub_821C0630(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c0630
	ctx.lr = 0x823547B4;
	sub_821C0630(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354678"))) PPC_WEAK_FUNC(sub_82354678);
PPC_FUNC_IMPL(__imp__sub_82354678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82354680;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r5.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x821c29b8
	ctx.lr = 0x823546AC;
	sub_821C29B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823547a4
	if (ctx.cr0.eq) goto loc_823547A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// bl 0x82350328
	ctx.lr = 0x823546C8;
	sub_82350328(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r27,r30,92
	ctx.r27.s64 = ctx.r30.s64 + 92;
loc_823546D4:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// beq cr6,0x82354708
	if (ctx.cr6.eq) goto loc_82354708;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823546E8:
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
	// bne 0x823546e8
	if (!ctx.cr0.eq) goto loc_823546E8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82354708:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82354748
	if (ctx.cr6.eq) goto loc_82354748;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e900
	ctx.lr = 0x8235471C;
	sub_8234E900(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354748
	if (ctx.cr0.eq) goto loc_82354748;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8234ecb8
	ctx.lr = 0x82354730;
	sub_8234ECB8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8235474c
	if (ctx.cr6.eq) goto loc_8235474C;
loc_82354748:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235474C:
	// clrlwi. r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82354764
	if (ctx.cr0.eq) goto loc_82354764;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// rlwinm r28,r28,0,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x821c0630
	ctx.lr = 0x82354764;
	sub_821C0630(ctx, base);
loc_82354764:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82354788
	if (!ctx.cr0.eq) goto loc_82354788;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82354774;
	sub_821C0630(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// blt cr6,0x823546d4
	if (ctx.cr6.lt) goto loc_823546D4;
	// b 0x823547a4
	goto loc_823547A4;
loc_82354788:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235479c
	if (ctx.cr0.eq) goto loc_8235479C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// bl 0x8234ed18
	ctx.lr = 0x8235479C;
	sub_8234ED18(ctx, base);
loc_8235479C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823547A4;
	sub_821C0630(ctx, base);
loc_823547A4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821c0630
	ctx.lr = 0x823547AC;
	sub_821C0630(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c0630
	ctx.lr = 0x823547B4;
	sub_821C0630(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823547BC"))) PPC_WEAK_FUNC(sub_823547BC);
PPC_FUNC_IMPL(__imp__sub_823547BC) {
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
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x821c0630
	ctx.lr = 0x823547D4;
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

__attribute__((alias("__imp__sub_823547E4"))) PPC_WEAK_FUNC(sub_823547E4);
PPC_FUNC_IMPL(__imp__sub_823547E4) {
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
	// bl 0x821c0630
	ctx.lr = 0x823547FC;
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

__attribute__((alias("__imp__sub_8235480C"))) PPC_WEAK_FUNC(sub_8235480C);
PPC_FUNC_IMPL(__imp__sub_8235480C) {
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82354824;
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

__attribute__((alias("__imp__sub_82354834"))) PPC_WEAK_FUNC(sub_82354834);
PPC_FUNC_IMPL(__imp__sub_82354834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354838"))) PPC_WEAK_FUNC(sub_82354838);
PPC_FUNC_IMPL(__imp__sub_82354838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82354840;
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
	ctx.lr = 0x82354858;
	sub_8236A338(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354898
	if (ctx.cr0.eq) goto loc_82354898;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8235489c
	if (ctx.cr6.eq) goto loc_8235489C;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_82354874:
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
	// bne 0x82354874
	if (!ctx.cr0.eq) goto loc_82354874;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8235489c
	goto loc_8235489C;
loc_82354898:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235489C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823548d0
	if (ctx.cr6.eq) goto loc_823548D0;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823548c4
	if (ctx.cr6.eq) goto loc_823548C4;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x823548c8
	goto loc_823548C8;
loc_823548C4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_823548C8:
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x823548fc
	goto loc_823548FC;
loc_823548D0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823548f4
	if (ctx.cr6.eq) goto loc_823548F4;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x823548f8
	goto loc_823548F8;
loc_823548F4:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_823548F8:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_823548FC:
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

__attribute__((alias("__imp__sub_82354910"))) PPC_WEAK_FUNC(sub_82354910);
PPC_FUNC_IMPL(__imp__sub_82354910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,18528(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18528);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82354920;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// li r23,0
	ctx.r23.s64 = 0;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// stw r23,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r23.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82354c50
	if (ctx.cr6.lt) goto loc_82354C50;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lfs f12,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fsubs f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823549ac
	if (!ctx.cr6.eq) goto loc_823549AC;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,18088
	ctx.r6.s64 = ctx.r8.s64 + 18088;
	// addi r9,r11,18432
	ctx.r9.s64 = ctx.r11.s64 + 18432;
	// addi r7,r10,18416
	ctx.r7.s64 = ctx.r10.s64 + 18416;
	// addi r5,r5,17968
	ctx.r5.s64 = ctx.r5.s64 + 17968;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,189
	ctx.r8.s64 = 189;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x823549AC;
	sub_82372320(ctx, base);
loc_823549AC:
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r25,r27,92
	ctx.r25.s64 = ctx.r27.s64 + 92;
loc_823549B4:
	// lwz r11,120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354c50
	if (ctx.cr6.eq) goto loc_82354C50;
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// beq cr6,0x823549f4
	if (ctx.cr6.eq) goto loc_823549F4;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_823549D4:
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
	// bne 0x823549d4
	if (!ctx.cr0.eq) goto loc_823549D4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_823549F4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82354a1c
	if (ctx.cr6.eq) goto loc_82354A1C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8234ecb8
	ctx.lr = 0x82354A08;
	sub_8234ECB8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82354a20
	if (!ctx.cr6.eq) goto loc_82354A20;
loc_82354A1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82354A20:
	// clrlwi. r10,r23,31
	ctx.r10.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82354a38
	if (ctx.cr0.eq) goto loc_82354A38;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// rlwinm r23,r23,0,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x821c0630
	ctx.lr = 0x82354A38;
	sub_821C0630(ctx, base);
loc_82354A38:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354c38
	if (ctx.cr0.eq) goto loc_82354C38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367a18
	ctx.lr = 0x82354A48;
	sub_82367A18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8235b2a0
	ctx.lr = 0x82354A50;
	sub_8235B2A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82357e48
	ctx.lr = 0x82354A5C;
	sub_82357E48(ctx, base);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82354a8c
	if (ctx.cr6.eq) goto loc_82354A8C;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82354A6C:
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
	// bne 0x82354a6c
	if (!ctx.cr0.eq) goto loc_82354A6C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82354A8C:
	// lwz r3,120(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82354AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354c38
	if (ctx.cr0.eq) goto loc_82354C38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235b2e0
	ctx.lr = 0x82354AB8;
	sub_8235B2E0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82354AC0;
	sub_8236A338(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82354ae0
	if (ctx.cr0.eq) goto loc_82354AE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8235d0f0
	ctx.lr = 0x82354AD8;
	sub_8235D0F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82354ae4
	goto loc_82354AE4;
loc_82354AE0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82354AE4:
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82354b14
	if (ctx.cr6.eq) goto loc_82354B14;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82354AF4:
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
	// bne 0x82354af4
	if (!ctx.cr0.eq) goto loc_82354AF4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82354B14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235d3c8
	ctx.lr = 0x82354B20;
	sub_8235D3C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r22,88(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8234e920
	ctx.lr = 0x82354B2C;
	sub_8234E920(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b4a0
	ctx.lr = 0x82354B3C;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8236b048
	ctx.lr = 0x82354B4C;
	sub_8236B048(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82354b80
	if (ctx.cr6.eq) goto loc_82354B80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82354B60:
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
	// bne 0x82354b60
	if (!ctx.cr0.eq) goto loc_82354B60;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82354B80:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235b3c8
	ctx.lr = 0x82354B8C;
	sub_8235B3C8(ctx, base);
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82354bc0
	if (ctx.cr6.eq) goto loc_82354BC0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82354BA0:
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
	// bne 0x82354ba0
	if (!ctx.cr0.eq) goto loc_82354BA0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82354BC0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82354BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234e900
	ctx.lr = 0x82354BE4;
	sub_8234E900(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354c28
	if (ctx.cr0.eq) goto loc_82354C28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8234ecb8
	ctx.lr = 0x82354BF8;
	sub_8234ECB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234efb8
	ctx.lr = 0x82354C08;
	sub_8234EFB8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82357ed8
	ctx.lr = 0x82354C14;
	sub_82357ED8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8234f050
	ctx.lr = 0x82354C20;
	sub_8234F050(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82354C28;
	sub_821C0630(ctx, base);
loc_82354C28:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82354C30;
	sub_821C0630(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82354C38;
	sub_821C0630(ctx, base);
loc_82354C38:
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x821c0630
	ctx.lr = 0x82354C40;
	sub_821C0630(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// blt cr6,0x823549b4
	if (ctx.cr6.lt) goto loc_823549B4;
loc_82354C50:
	// addi r26,r27,12
	ctx.r26.s64 = ctx.r27.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820ce0f8
	ctx.lr = 0x82354C5C;
	sub_820CE0F8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82354d5c
	if (ctx.cr0.eq) goto loc_82354D5C;
	// addi r24,r27,92
	ctx.r24.s64 = ctx.r27.s64 + 92;
loc_82354C6C:
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820ce088
	ctx.lr = 0x82354C7C;
	sub_820CE088(ctx, base);
	// lwz r25,96(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82354C8C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r4.u32);
	// beq cr6,0x82354cc0
	if (ctx.cr6.eq) goto loc_82354CC0;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
loc_82354CA0:
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
	// bne 0x82354ca0
	if (!ctx.cr0.eq) goto loc_82354CA0;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82354CC0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82354ce4
	if (ctx.cr6.eq) goto loc_82354CE4;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8234ecb8
	ctx.lr = 0x82354CD0;
	sub_8234ECB8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r23,r23,2
	ctx.r23.u64 = ctx.r23.u64 | 2;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82354ce8
	if (ctx.cr6.eq) goto loc_82354CE8;
loc_82354CE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82354CE8:
	// rlwinm. r10,r23,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82354d00
	if (ctx.cr0.eq) goto loc_82354D00;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// rlwinm r23,r23,0,31,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x821c0630
	ctx.lr = 0x82354D00;
	sub_821C0630(ctx, base);
loc_82354D00:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82354d24
	if (!ctx.cr0.eq) goto loc_82354D24;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82354D10;
	sub_821C0630(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// blt cr6,0x82354c8c
	if (ctx.cr6.lt) goto loc_82354C8C;
	// b 0x82354d30
	goto loc_82354D30;
loc_82354D24:
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82354D30;
	sub_821C0630(ctx, base);
loc_82354D30:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82354d48
	if (!ctx.cr0.eq) goto loc_82354D48;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8234f050
	ctx.lr = 0x82354D48;
	sub_8234F050(ctx, base);
loc_82354D48:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82354D50;
	sub_821C0630(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82354c6c
	if (!ctx.cr6.eq) goto loc_82354C6C;
loc_82354D5C:
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354918"))) PPC_WEAK_FUNC(sub_82354918);
PPC_FUNC_IMPL(__imp__sub_82354918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82354920;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// li r23,0
	ctx.r23.s64 = 0;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// stw r23,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r23.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82354c50
	if (ctx.cr6.lt) goto loc_82354C50;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lfs f12,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fsubs f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823549ac
	if (!ctx.cr6.eq) goto loc_823549AC;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,18088
	ctx.r6.s64 = ctx.r8.s64 + 18088;
	// addi r9,r11,18432
	ctx.r9.s64 = ctx.r11.s64 + 18432;
	// addi r7,r10,18416
	ctx.r7.s64 = ctx.r10.s64 + 18416;
	// addi r5,r5,17968
	ctx.r5.s64 = ctx.r5.s64 + 17968;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,189
	ctx.r8.s64 = 189;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x823549AC;
	sub_82372320(ctx, base);
loc_823549AC:
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r25,r27,92
	ctx.r25.s64 = ctx.r27.s64 + 92;
loc_823549B4:
	// lwz r11,120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354c50
	if (ctx.cr6.eq) goto loc_82354C50;
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// beq cr6,0x823549f4
	if (ctx.cr6.eq) goto loc_823549F4;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_823549D4:
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
	// bne 0x823549d4
	if (!ctx.cr0.eq) goto loc_823549D4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_823549F4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82354a1c
	if (ctx.cr6.eq) goto loc_82354A1C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8234ecb8
	ctx.lr = 0x82354A08;
	sub_8234ECB8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82354a20
	if (!ctx.cr6.eq) goto loc_82354A20;
loc_82354A1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82354A20:
	// clrlwi. r10,r23,31
	ctx.r10.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82354a38
	if (ctx.cr0.eq) goto loc_82354A38;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// rlwinm r23,r23,0,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x821c0630
	ctx.lr = 0x82354A38;
	sub_821C0630(ctx, base);
loc_82354A38:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354c38
	if (ctx.cr0.eq) goto loc_82354C38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367a18
	ctx.lr = 0x82354A48;
	sub_82367A18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8235b2a0
	ctx.lr = 0x82354A50;
	sub_8235B2A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82357e48
	ctx.lr = 0x82354A5C;
	sub_82357E48(ctx, base);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82354a8c
	if (ctx.cr6.eq) goto loc_82354A8C;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82354A6C:
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
	// bne 0x82354a6c
	if (!ctx.cr0.eq) goto loc_82354A6C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82354A8C:
	// lwz r3,120(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82354AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354c38
	if (ctx.cr0.eq) goto loc_82354C38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235b2e0
	ctx.lr = 0x82354AB8;
	sub_8235B2E0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82354AC0;
	sub_8236A338(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82354ae0
	if (ctx.cr0.eq) goto loc_82354AE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8235d0f0
	ctx.lr = 0x82354AD8;
	sub_8235D0F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82354ae4
	goto loc_82354AE4;
loc_82354AE0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82354AE4:
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82354b14
	if (ctx.cr6.eq) goto loc_82354B14;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82354AF4:
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
	// bne 0x82354af4
	if (!ctx.cr0.eq) goto loc_82354AF4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82354B14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235d3c8
	ctx.lr = 0x82354B20;
	sub_8235D3C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r22,88(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8234e920
	ctx.lr = 0x82354B2C;
	sub_8234E920(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b4a0
	ctx.lr = 0x82354B3C;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8236b048
	ctx.lr = 0x82354B4C;
	sub_8236B048(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82354b80
	if (ctx.cr6.eq) goto loc_82354B80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82354B60:
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
	// bne 0x82354b60
	if (!ctx.cr0.eq) goto loc_82354B60;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82354B80:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235b3c8
	ctx.lr = 0x82354B8C;
	sub_8235B3C8(ctx, base);
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82354bc0
	if (ctx.cr6.eq) goto loc_82354BC0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82354BA0:
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
	// bne 0x82354ba0
	if (!ctx.cr0.eq) goto loc_82354BA0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82354BC0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82354BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234e900
	ctx.lr = 0x82354BE4;
	sub_8234E900(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354c28
	if (ctx.cr0.eq) goto loc_82354C28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8234ecb8
	ctx.lr = 0x82354BF8;
	sub_8234ECB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234efb8
	ctx.lr = 0x82354C08;
	sub_8234EFB8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82357ed8
	ctx.lr = 0x82354C14;
	sub_82357ED8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8234f050
	ctx.lr = 0x82354C20;
	sub_8234F050(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82354C28;
	sub_821C0630(ctx, base);
loc_82354C28:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82354C30;
	sub_821C0630(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82354C38;
	sub_821C0630(ctx, base);
loc_82354C38:
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x821c0630
	ctx.lr = 0x82354C40;
	sub_821C0630(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// blt cr6,0x823549b4
	if (ctx.cr6.lt) goto loc_823549B4;
loc_82354C50:
	// addi r26,r27,12
	ctx.r26.s64 = ctx.r27.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820ce0f8
	ctx.lr = 0x82354C5C;
	sub_820CE0F8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82354d5c
	if (ctx.cr0.eq) goto loc_82354D5C;
	// addi r24,r27,92
	ctx.r24.s64 = ctx.r27.s64 + 92;
loc_82354C6C:
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820ce088
	ctx.lr = 0x82354C7C;
	sub_820CE088(ctx, base);
	// lwz r25,96(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82354C8C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r4.u32);
	// beq cr6,0x82354cc0
	if (ctx.cr6.eq) goto loc_82354CC0;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
loc_82354CA0:
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
	// bne 0x82354ca0
	if (!ctx.cr0.eq) goto loc_82354CA0;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82354CC0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82354ce4
	if (ctx.cr6.eq) goto loc_82354CE4;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8234ecb8
	ctx.lr = 0x82354CD0;
	sub_8234ECB8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r23,r23,2
	ctx.r23.u64 = ctx.r23.u64 | 2;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82354ce8
	if (ctx.cr6.eq) goto loc_82354CE8;
loc_82354CE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82354CE8:
	// rlwinm. r10,r23,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82354d00
	if (ctx.cr0.eq) goto loc_82354D00;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// rlwinm r23,r23,0,31,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x821c0630
	ctx.lr = 0x82354D00;
	sub_821C0630(ctx, base);
loc_82354D00:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82354d24
	if (!ctx.cr0.eq) goto loc_82354D24;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82354D10;
	sub_821C0630(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// blt cr6,0x82354c8c
	if (ctx.cr6.lt) goto loc_82354C8C;
	// b 0x82354d30
	goto loc_82354D30;
loc_82354D24:
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82354D30;
	sub_821C0630(ctx, base);
loc_82354D30:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82354d48
	if (!ctx.cr0.eq) goto loc_82354D48;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8234f050
	ctx.lr = 0x82354D48;
	sub_8234F050(ctx, base);
loc_82354D48:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82354D50;
	sub_821C0630(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82354c6c
	if (!ctx.cr6.eq) goto loc_82354C6C;
loc_82354D5C:
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354D6C"))) PPC_WEAK_FUNC(sub_82354D6C);
PPC_FUNC_IMPL(__imp__sub_82354D6C) {
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
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x821c0630
	ctx.lr = 0x82354D84;
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

__attribute__((alias("__imp__sub_82354D94"))) PPC_WEAK_FUNC(sub_82354D94);
PPC_FUNC_IMPL(__imp__sub_82354D94) {
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
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82350110
	ctx.lr = 0x82354DAC;
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

__attribute__((alias("__imp__sub_82354DBC"))) PPC_WEAK_FUNC(sub_82354DBC);
PPC_FUNC_IMPL(__imp__sub_82354DBC) {
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
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82354DD4;
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

__attribute__((alias("__imp__sub_82354DE4"))) PPC_WEAK_FUNC(sub_82354DE4);
PPC_FUNC_IMPL(__imp__sub_82354DE4) {
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
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82354DFC;
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

__attribute__((alias("__imp__sub_82354E0C"))) PPC_WEAK_FUNC(sub_82354E0C);
PPC_FUNC_IMPL(__imp__sub_82354E0C) {
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82354E24;
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

__attribute__((alias("__imp__sub_82354E34"))) PPC_WEAK_FUNC(sub_82354E34);
PPC_FUNC_IMPL(__imp__sub_82354E34) {
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
	// bl 0x821c0630
	ctx.lr = 0x82354E4C;
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

__attribute__((alias("__imp__sub_82354E5C"))) PPC_WEAK_FUNC(sub_82354E5C);
PPC_FUNC_IMPL(__imp__sub_82354E5C) {
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
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82354E74;
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

__attribute__((alias("__imp__sub_82354E84"))) PPC_WEAK_FUNC(sub_82354E84);
PPC_FUNC_IMPL(__imp__sub_82354E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354E88"))) PPC_WEAK_FUNC(sub_82354E88);
PPC_FUNC_IMPL(__imp__sub_82354E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,18960(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18960);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82354E98;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r4.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x82354EB8;
	sub_8235D3C8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// addi r4,r31,82
	ctx.r4.s64 = ctx.r31.s64 + 82;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82350328
	ctx.lr = 0x82354ED4;
	sub_82350328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823551b0
	if (ctx.cr0.eq) goto loc_823551B0;
	// addi r25,r28,12
	ctx.r25.s64 = ctx.r28.s64 + 12;
loc_82354EE0:
	// lhz r30,82(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82356918
	ctx.lr = 0x82354EF4;
	sub_82356918(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355128
	if (ctx.cr6.eq) goto loc_82355128;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82354f34
	if (ctx.cr6.eq) goto loc_82354F34;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82354F14:
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
	// bne 0x82354f14
	if (!ctx.cr0.eq) goto loc_82354F14;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82354F34:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bl 0x8234fe00
	ctx.lr = 0x82354F44;
	sub_8234FE00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823550f0
	if (ctx.cr0.eq) goto loc_823550F0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82354fb0
	if (!ctx.cr6.eq) goto loc_82354FB0;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82354F5C;
	sub_8236A338(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82354f7c
	if (ctx.cr0.eq) goto loc_82354F7C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x8235d0f0
	ctx.lr = 0x82354F74;
	sub_8235D0F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82354f80
	goto loc_82354F80;
loc_82354F7C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82354F80:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82350190
	ctx.lr = 0x82354F88;
	sub_82350190(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8235d3c8
	ctx.lr = 0x82354F98;
	sub_8235D3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823689c8
	ctx.lr = 0x82354FA4;
	sub_823689C8(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x821c0630
	ctx.lr = 0x82354FAC;
	sub_821C0630(ctx, base);
	// lwz r26,92(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
loc_82354FB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8234f148
	ctx.lr = 0x82354FBC;
	sub_8234F148(ctx, base);
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// bl 0x8236b4a0
	ctx.lr = 0x82354FD0;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236b048
	ctx.lr = 0x82354FE0;
	sub_8236B048(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82355014
	if (ctx.cr6.eq) goto loc_82355014;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82354FF4:
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
	// bne 0x82354ff4
	if (!ctx.cr0.eq) goto loc_82354FF4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82355014:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// beq cr6,0x82355048
	if (ctx.cr6.eq) goto loc_82355048;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82355028:
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
	// bne 0x82355028
	if (!ctx.cr0.eq) goto loc_82355028;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82355048:
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82354678
	ctx.lr = 0x82355058;
	sub_82354678(ctx, base);
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823550d0
	if (ctx.cr6.eq) goto loc_823550D0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8235506C:
	// lwz r10,80(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// beq cr6,0x823550a8
	if (ctx.cr6.eq) goto loc_823550A8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82355088:
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
	// bne 0x82355088
	if (!ctx.cr0.eq) goto loc_82355088;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823550A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823550BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235506c
	if (ctx.cr6.lt) goto loc_8235506C;
loc_823550D0:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823550D8;
	sub_821C0630(ctx, base);
	// addi r4,r31,82
	ctx.r4.s64 = ctx.r31.s64 + 82;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82350328
	ctx.lr = 0x823550E4;
	sub_82350328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82354ee0
	if (!ctx.cr0.eq) goto loc_82354EE0;
	// b 0x82355164
	goto loc_82355164;
loc_823550F0:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,18088
	ctx.r6.s64 = ctx.r8.s64 + 18088;
	// addi r9,r11,18848
	ctx.r9.s64 = ctx.r11.s64 + 18848;
	// addi r7,r10,18824
	ctx.r7.s64 = ctx.r10.s64 + 18824;
	// addi r5,r5,17968
	ctx.r5.s64 = ctx.r5.s64 + 17968;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,425
	ctx.r8.s64 = 425;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82355124;
	sub_82372320(ctx, base);
	// b 0x8235515c
	goto loc_8235515C;
loc_82355128:
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
	// addi r6,r8,18088
	ctx.r6.s64 = ctx.r8.s64 + 18088;
	// addi r9,r11,18752
	ctx.r9.s64 = ctx.r11.s64 + 18752;
	// addi r7,r10,18824
	ctx.r7.s64 = ctx.r10.s64 + 18824;
	// addi r5,r5,17968
	ctx.r5.s64 = ctx.r5.s64 + 17968;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,431
	ctx.r8.s64 = 431;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8235515C;
	sub_82372320(ctx, base);
loc_8235515C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82355164;
	sub_821C0630(ctx, base);
loc_82355164:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823551b0
	if (ctx.cr6.eq) goto loc_823551B0;
	// lwz r3,124(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
loc_82355178:
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
	// bne 0x82355178
	if (!ctx.cr0.eq) goto loc_82355178;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823551B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823551B0:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x823551B8;
	sub_821C0630(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x823551C0;
	sub_821C0630(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x823551C8;
	sub_821C0630(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821c0630
	ctx.lr = 0x823551D0;
	sub_821C0630(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354E90"))) PPC_WEAK_FUNC(sub_82354E90);
PPC_FUNC_IMPL(__imp__sub_82354E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82354E98;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r4.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x82354EB8;
	sub_8235D3C8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// addi r4,r31,82
	ctx.r4.s64 = ctx.r31.s64 + 82;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82350328
	ctx.lr = 0x82354ED4;
	sub_82350328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823551b0
	if (ctx.cr0.eq) goto loc_823551B0;
	// addi r25,r28,12
	ctx.r25.s64 = ctx.r28.s64 + 12;
loc_82354EE0:
	// lhz r30,82(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82356918
	ctx.lr = 0x82354EF4;
	sub_82356918(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355128
	if (ctx.cr6.eq) goto loc_82355128;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82354f34
	if (ctx.cr6.eq) goto loc_82354F34;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82354F14:
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
	// bne 0x82354f14
	if (!ctx.cr0.eq) goto loc_82354F14;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82354F34:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bl 0x8234fe00
	ctx.lr = 0x82354F44;
	sub_8234FE00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823550f0
	if (ctx.cr0.eq) goto loc_823550F0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82354fb0
	if (!ctx.cr6.eq) goto loc_82354FB0;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82354F5C;
	sub_8236A338(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82354f7c
	if (ctx.cr0.eq) goto loc_82354F7C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x8235d0f0
	ctx.lr = 0x82354F74;
	sub_8235D0F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82354f80
	goto loc_82354F80;
loc_82354F7C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82354F80:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82350190
	ctx.lr = 0x82354F88;
	sub_82350190(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8235d3c8
	ctx.lr = 0x82354F98;
	sub_8235D3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823689c8
	ctx.lr = 0x82354FA4;
	sub_823689C8(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x821c0630
	ctx.lr = 0x82354FAC;
	sub_821C0630(ctx, base);
	// lwz r26,92(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
loc_82354FB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8234f148
	ctx.lr = 0x82354FBC;
	sub_8234F148(ctx, base);
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// bl 0x8236b4a0
	ctx.lr = 0x82354FD0;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236b048
	ctx.lr = 0x82354FE0;
	sub_8236B048(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82355014
	if (ctx.cr6.eq) goto loc_82355014;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82354FF4:
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
	// bne 0x82354ff4
	if (!ctx.cr0.eq) goto loc_82354FF4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82355014:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// beq cr6,0x82355048
	if (ctx.cr6.eq) goto loc_82355048;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82355028:
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
	// bne 0x82355028
	if (!ctx.cr0.eq) goto loc_82355028;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82355048:
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82354678
	ctx.lr = 0x82355058;
	sub_82354678(ctx, base);
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823550d0
	if (ctx.cr6.eq) goto loc_823550D0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8235506C:
	// lwz r10,80(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// beq cr6,0x823550a8
	if (ctx.cr6.eq) goto loc_823550A8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82355088:
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
	// bne 0x82355088
	if (!ctx.cr0.eq) goto loc_82355088;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823550A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823550BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235506c
	if (ctx.cr6.lt) goto loc_8235506C;
loc_823550D0:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x823550D8;
	sub_821C0630(ctx, base);
	// addi r4,r31,82
	ctx.r4.s64 = ctx.r31.s64 + 82;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82350328
	ctx.lr = 0x823550E4;
	sub_82350328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82354ee0
	if (!ctx.cr0.eq) goto loc_82354EE0;
	// b 0x82355164
	goto loc_82355164;
loc_823550F0:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,18088
	ctx.r6.s64 = ctx.r8.s64 + 18088;
	// addi r9,r11,18848
	ctx.r9.s64 = ctx.r11.s64 + 18848;
	// addi r7,r10,18824
	ctx.r7.s64 = ctx.r10.s64 + 18824;
	// addi r5,r5,17968
	ctx.r5.s64 = ctx.r5.s64 + 17968;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,425
	ctx.r8.s64 = 425;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82355124;
	sub_82372320(ctx, base);
	// b 0x8235515c
	goto loc_8235515C;
loc_82355128:
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
	// addi r6,r8,18088
	ctx.r6.s64 = ctx.r8.s64 + 18088;
	// addi r9,r11,18752
	ctx.r9.s64 = ctx.r11.s64 + 18752;
	// addi r7,r10,18824
	ctx.r7.s64 = ctx.r10.s64 + 18824;
	// addi r5,r5,17968
	ctx.r5.s64 = ctx.r5.s64 + 17968;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,431
	ctx.r8.s64 = 431;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8235515C;
	sub_82372320(ctx, base);
loc_8235515C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82355164;
	sub_821C0630(ctx, base);
loc_82355164:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823551b0
	if (ctx.cr6.eq) goto loc_823551B0;
	// lwz r3,124(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
loc_82355178:
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
	// bne 0x82355178
	if (!ctx.cr0.eq) goto loc_82355178;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823551B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823551B0:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x823551B8;
	sub_821C0630(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x823551C0;
	sub_821C0630(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x823551C8;
	sub_821C0630(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821c0630
	ctx.lr = 0x823551D0;
	sub_821C0630(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823551D8"))) PPC_WEAK_FUNC(sub_823551D8);
PPC_FUNC_IMPL(__imp__sub_823551D8) {
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
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x821c0630
	ctx.lr = 0x823551F0;
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

__attribute__((alias("__imp__sub_82355200"))) PPC_WEAK_FUNC(sub_82355200);
PPC_FUNC_IMPL(__imp__sub_82355200) {
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
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82355218;
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

__attribute__((alias("__imp__sub_82355228"))) PPC_WEAK_FUNC(sub_82355228);
PPC_FUNC_IMPL(__imp__sub_82355228) {
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
	// bl 0x821c0630
	ctx.lr = 0x82355240;
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

__attribute__((alias("__imp__sub_82355250"))) PPC_WEAK_FUNC(sub_82355250);
PPC_FUNC_IMPL(__imp__sub_82355250) {
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
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82355268;
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

__attribute__((alias("__imp__sub_82355278"))) PPC_WEAK_FUNC(sub_82355278);
PPC_FUNC_IMPL(__imp__sub_82355278) {
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82355290;
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

__attribute__((alias("__imp__sub_823552A0"))) PPC_WEAK_FUNC(sub_823552A0);
PPC_FUNC_IMPL(__imp__sub_823552A0) {
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
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82350110
	ctx.lr = 0x823552B8;
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

__attribute__((alias("__imp__sub_823552C8"))) PPC_WEAK_FUNC(sub_823552C8);
PPC_FUNC_IMPL(__imp__sub_823552C8) {
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
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x821c0630
	ctx.lr = 0x823552E0;
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

__attribute__((alias("__imp__sub_823552F0"))) PPC_WEAK_FUNC(sub_823552F0);
PPC_FUNC_IMPL(__imp__sub_823552F0) {
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
	// beq 0x82355380
	if (ctx.cr0.eq) goto loc_82355380;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82355334
	if (!ctx.cr6.eq) goto loc_82355334;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82355340
	goto loc_82355340;
loc_82355334:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82355340:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82355358
	if (!ctx.cr6.eq) goto loc_82355358;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82355364
	goto loc_82355364;
loc_82355358:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82355364:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0630
	ctx.lr = 0x8235536C;
	sub_821C0630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82355374;
	sub_8236A3F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82355380:
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

__attribute__((alias("__imp__sub_82355398"))) PPC_WEAK_FUNC(sub_82355398);
PPC_FUNC_IMPL(__imp__sub_82355398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,19248(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 19248);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823553A8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x823553C4;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823553e4
	if (ctx.cr0.eq) goto loc_823553E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8235d0f0
	ctx.lr = 0x823553DC;
	sub_8235D0F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x823553e8
	goto loc_823553E8;
loc_823553E4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823553E8:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82355418
	if (ctx.cr6.eq) goto loc_82355418;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_823553F8:
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
	// bne 0x823553f8
	if (!ctx.cr0.eq) goto loc_823553F8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82355418:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8235d3c8
	ctx.lr = 0x82355424;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b3c0
	ctx.lr = 0x8235543C;
	sub_8236B3C0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lbz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8236b3c0
	ctx.lr = 0x82355454;
	sub_8236B3C0(ctx, base);
	// lbz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8234e918
	ctx.lr = 0x82355460;
	sub_8234E918(ctx, base);
	// lbz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r11.u8);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82354838
	ctx.lr = 0x8235547C;
	sub_82354838(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x823554b4
	if (ctx.cr6.eq) goto loc_823554B4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82355494:
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
	// bne 0x82355494
	if (!ctx.cr0.eq) goto loc_82355494;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823554B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823554C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// beq cr6,0x823554fc
	if (ctx.cr6.eq) goto loc_823554FC;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_823554DC:
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
	// bne 0x823554dc
	if (!ctx.cr0.eq) goto loc_823554DC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_823554FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82355514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x8235551C;
	sub_821C0630(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82355524;
	sub_821C0630(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x8235552C;
	sub_821C0630(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823553A0"))) PPC_WEAK_FUNC(sub_823553A0);
PPC_FUNC_IMPL(__imp__sub_823553A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823553A8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x823553C4;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823553e4
	if (ctx.cr0.eq) goto loc_823553E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8235d0f0
	ctx.lr = 0x823553DC;
	sub_8235D0F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x823553e8
	goto loc_823553E8;
loc_823553E4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823553E8:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82355418
	if (ctx.cr6.eq) goto loc_82355418;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_823553F8:
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
	// bne 0x823553f8
	if (!ctx.cr0.eq) goto loc_823553F8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82355418:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8235d3c8
	ctx.lr = 0x82355424;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b3c0
	ctx.lr = 0x8235543C;
	sub_8236B3C0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lbz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8236b3c0
	ctx.lr = 0x82355454;
	sub_8236B3C0(ctx, base);
	// lbz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8234e918
	ctx.lr = 0x82355460;
	sub_8234E918(ctx, base);
	// lbz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r11.u8);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82354838
	ctx.lr = 0x8235547C;
	sub_82354838(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x823554b4
	if (ctx.cr6.eq) goto loc_823554B4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82355494:
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
	// bne 0x82355494
	if (!ctx.cr0.eq) goto loc_82355494;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823554B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823554C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// beq cr6,0x823554fc
	if (ctx.cr6.eq) goto loc_823554FC;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_823554DC:
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
	// bne 0x823554dc
	if (!ctx.cr0.eq) goto loc_823554DC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_823554FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82355514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x8235551C;
	sub_821C0630(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x82355524;
	sub_821C0630(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x8235552C;
	sub_821C0630(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82355534"))) PPC_WEAK_FUNC(sub_82355534);
PPC_FUNC_IMPL(__imp__sub_82355534) {
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
	ctx.lr = 0x8235554C;
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

