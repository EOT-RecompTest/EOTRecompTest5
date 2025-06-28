#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8223F42C"))) PPC_WEAK_FUNC(sub_8223F42C);
PPC_FUNC_IMPL(__imp__sub_8223F42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F430"))) PPC_WEAK_FUNC(sub_8223F430);
PPC_FUNC_IMPL(__imp__sub_8223F430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8223F438;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,416(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8223f4a4
	if (ctx.cr6.eq) goto loc_8223F4A4;
	// mulli r11,r29,36
	ctx.r11.s64 = ctx.r29.s64 * 36;
	// lwz r27,420(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r26,r11,24460
	ctx.r26.s64 = ctx.r11.s64 + 24460;
loc_8223F460:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223f494
	if (ctx.cr6.eq) goto loc_8223F494;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f2c8
	ctx.lr = 0x8223F494;
	sub_8223F2C8(ctx, base);
loc_8223F494:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223f460
	if (ctx.cr0.eq) goto loc_8223F460;
loc_8223F4A4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// li r8,1406
	ctx.r8.s64 = 1406;
	// ori r9,r9,78
	ctx.r9.u64 = ctx.r9.u64 | 78;
	// stw r10,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
	// li r11,1403
	ctx.r11.s64 = 1403;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230670
	ctx.lr = 0x8223F4E8;
	sub_82230670(ctx, base);
	// mulli r11,r29,36
	ctx.r11.s64 = ctx.r29.s64 * 36;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,24472(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24472);
	// stw r10,24468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24468, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223F500"))) PPC_WEAK_FUNC(sub_8223F500);
PPC_FUNC_IMPL(__imp__sub_8223F500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x8223F508;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8223f52c
	if (ctx.cr6.eq) goto loc_8223F52C;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
loc_8223F52C:
	// lwz r11,412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223f548
	if (ctx.cr6.eq) goto loc_8223F548;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223f430
	ctx.lr = 0x8223F548;
	sub_8223F430(ctx, base);
loc_8223F548:
	// mulli r11,r27,36
	ctx.r11.s64 = ctx.r27.s64 * 36;
	// add r23,r11,r31
	ctx.r23.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,34174
	ctx.r9.u64 = ctx.r11.u64 | 34174;
	// ori r8,r10,77
	ctx.r8.u64 = ctx.r10.u64 | 77;
	// lwz r11,24472(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24472);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r7,24476(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24476);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,24460(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24460);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r30,r23,24460
	ctx.r30.s64 = ctx.r23.s64 + 24460;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82230670
	ctx.lr = 0x8223F5A4;
	sub_82230670(ctx, base);
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r22,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r22.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x8223f5c0
	if (ctx.cr0.eq) goto loc_8223F5C0;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_8223F5C0:
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// li r25,1403
	ctx.r25.s64 = 1403;
loc_8223F5C8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x8223f708
	if (!ctx.cr6.eq) goto loc_8223F708;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223f650
	if (ctx.cr6.eq) goto loc_8223F650;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223f628
	if (ctx.cr0.eq) goto loc_8223F628;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r11.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r27,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r27.u32);
	// stw r10,412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 412, ctx.r10.u32);
	// b 0x8223f708
	goto loc_8223F708;
loc_8223F628:
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223f638
	if (ctx.cr0.eq) goto loc_8223F638;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8223f708
	if (ctx.cr6.eq) goto loc_8223F708;
loc_8223F638:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223f2c8
	ctx.lr = 0x8223F64C;
	sub_8223F2C8(ctx, base);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_8223F650:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223f708
	if (ctx.cr0.eq) goto loc_8223F708;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r11,r27,25
	ctx.r11.s64 = ctx.r27.s64 + 25;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// ori r8,r9,15616
	ctx.r8.u64 = ctx.r9.u64 | 15616;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r7,20(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82230670
	ctx.lr = 0x8223F6BC;
	sub_82230670(ctx, base);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r9,r9,8
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// oris r9,r9,33024
	ctx.r9.u64 = ctx.r9.u64 | 2164260864;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230788
	ctx.lr = 0x8223F6F8;
	sub_82230788(ctx, base);
	// lwz r11,11540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11540);
	// stw r26,11504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11504, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11540, ctx.r11.u32);
loc_8223F708:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223f5c8
	if (ctx.cr0.eq) goto loc_8223F5C8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8223f750
	if (!ctx.cr6.eq) goto loc_8223F750;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// li r10,1406
	ctx.r10.s64 = 1406;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// ori r11,r11,78
	ctx.r11.u64 = ctx.r11.u64 | 78;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230670
	ctx.lr = 0x8223F748;
	sub_82230670(ctx, base);
	// lwz r11,24472(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24472);
	// stw r11,24468(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24468, ctx.r11.u32);
loc_8223F750:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8223f75c
	if (ctx.cr6.eq) goto loc_8223F75C;
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
loc_8223F75C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223F764"))) PPC_WEAK_FUNC(sub_8223F764);
PPC_FUNC_IMPL(__imp__sub_8223F764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F768"))) PPC_WEAK_FUNC(sub_8223F768);
PPC_FUNC_IMPL(__imp__sub_8223F768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x8223F770;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// addi r23,r3,400
	ctx.r23.s64 = ctx.r3.s64 + 400;
	// addi r22,r4,24472
	ctx.r22.s64 = ctx.r4.s64 + 24472;
loc_8223F788:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8223F79C:
	// addi r29,r31,-12
	ctx.r29.s64 = ctx.r31.s64 + -12;
loc_8223F7A0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8223f800
	if (ctx.cr6.eq) goto loc_8223F800;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8223F7B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// and r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ctx.r9.u64;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223f800
	if (ctx.cr0.eq) goto loc_8223F800;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8223f7f0
	if (!ctx.cr6.eq) goto loc_8223F7F0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_8223F7F0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8223f7b8
	if (!ctx.cr6.eq) goto loc_8223F7B8;
loc_8223F800:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223f860
	if (ctx.cr0.eq) goto loc_8223F860;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8223f830
	if (ctx.cr6.gt) goto loc_8223F830;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,20,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8223f860
	if (!ctx.cr6.lt) goto loc_8223F860;
loc_8223F830:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8223f500
	ctx.lr = 0x8223F84C;
	sub_8223F500(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
	// b 0x8223f7a0
	goto loc_8223F7A0;
loc_8223F860:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x8223f79c
	if (ctx.cr6.lt) goto loc_8223F79C;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223f884
	if (ctx.cr0.eq) goto loc_8223F884;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223f788
	if (!ctx.cr0.eq) goto loc_8223F788;
loc_8223F884:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223F88C"))) PPC_WEAK_FUNC(sub_8223F88C);
PPC_FUNC_IMPL(__imp__sub_8223F88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F890"))) PPC_WEAK_FUNC(sub_8223F890);
PPC_FUNC_IMPL(__imp__sub_8223F890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x8223F898;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// bl 0x82388ae4
	ctx.lr = 0x8223F8A8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8223f8bc
	if (!ctx.cr6.eq) goto loc_8223F8BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// b 0x8223f8c4
	goto loc_8223F8C4;
loc_8223F8BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
loc_8223F8C4:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r10,24568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24568);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8223f8ec
	if (!ctx.cr6.gt) goto loc_8223F8EC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8223F8E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8223f8e0
	if (ctx.cr6.lt) goto loc_8223F8E0;
loc_8223F8EC:
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r28,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r28.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r26,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r26.u32);
	// stw r26,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r26.u32);
	// stw r26,420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 420, ctx.r26.u32);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// rlwinm. r24,r11,21,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r28,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r28.u32);
	// beq 0x8223f91c
	if (ctx.cr0.eq) goto loc_8223F91C;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r11.u32);
loc_8223F91C:
	// lwz r21,392(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// std r28,400(r30)
	PPC_STORE_U64(ctx.r30.u32 + 400, ctx.r28.u64);
	// ori r11,r11,22528
	ctx.r11.u64 = ctx.r11.u64 | 22528;
	// stw r28,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r28.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// ori r9,r9,48879
	ctx.r9.u64 = ctx.r9.u64 | 48879;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r23,r30,400
	ctx.r23.s64 = ctx.r30.s64 + 400;
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82230670
	ctx.lr = 0x8223F984;
	sub_82230670(ctx, base);
	// lwz r11,11088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11088);
	// sync 
	// lis r20,32712
	ctx.r20.s64 = 2143813632;
	// stw r11,1812(r20)
	PPC_MM_STORE_U32(ctx.r20.u32 + 1812, ctx.r11.u32);
	// eieio 
	// sync 
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223f768
	ctx.lr = 0x8223F9AC;
	sub_8223F768(ctx, base);
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x8237ac88
	ctx.lr = 0x8223F9C0;
	sub_8237AC88(ctx, base);
loc_8223F9C0:
	// lwz r11,16960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16960);
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 & ctx.r24.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8223f9e4
	if (!ctx.cr6.eq) goto loc_8223F9E4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8223fb50
	if (ctx.cr6.eq) goto loc_8223FB50;
loc_8223F9E4:
	// lwz r4,24568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24568);
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223fa30
	if (ctx.cr6.eq) goto loc_8223FA30;
	// lwz r6,11024(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// li r11,100
	ctx.r11.s64 = 100;
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// addi r9,r31,24448
	ctx.r9.s64 = ctx.r31.s64 + 24448;
loc_8223FA0C:
	// lwzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzu r7,36(r9)
	ea = 36 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// rlwinm r7,r7,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// blt cr6,0x8223fa0c
	if (ctx.cr6.lt) goto loc_8223FA0C;
loc_8223FA30:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// rlwinm r11,r11,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8223fae4
	if (!ctx.cr6.lt) goto loc_8223FAE4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223fae4
	if (ctx.cr6.eq) goto loc_8223FAE4;
	// addi r11,r31,24464
	ctx.r11.s64 = ctx.r31.s64 + 24464;
loc_8223FA50:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8223fab4
	if (ctx.cr6.eq) goto loc_8223FAB4;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_8223FA6C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// and r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 & ctx.r7.u64;
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223fab4
	if (ctx.cr0.eq) goto loc_8223FAB4;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8223faa4
	if (!ctx.cr6.eq) goto loc_8223FAA4;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_8223FAA4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8223fa6c
	if (!ctx.cr6.eq) goto loc_8223FA6C;
loc_8223FAB4:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x8223fadc
	if (ctx.cr0.gt) goto loc_8223FADC;
	// lwz r10,24568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24568);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8223fa50
	if (ctx.cr6.lt) goto loc_8223FA50;
	// b 0x8223fae4
	goto loc_8223FAE4;
loc_8223FADC:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8223fb2c
	if (!ctx.cr6.eq) goto loc_8223FB2C;
loc_8223FAE4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82247340
	ctx.lr = 0x8223FAEC;
	sub_82247340(ctx, base);
	// addi r29,r31,24444
	ctx.r29.s64 = ctx.r31.s64 + 24444;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82388a84
	ctx.lr = 0x8223FB08;
	__imp__KeWaitForSingleObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82388a74
	ctx.lr = 0x8223FB10;
	__imp__KeResetEvent(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82247340
	ctx.lr = 0x8223FB18;
	sub_82247340(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x8223fb48
	goto loc_8223FB48;
loc_8223FB2C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223f500
	ctx.lr = 0x8223FB40;
	sub_8223F500(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_8223FB48:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8223f9c0
	if (!ctx.cr6.eq) goto loc_8223F9C0;
loc_8223FB50:
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223fb6c
	if (ctx.cr6.eq) goto loc_8223FB6C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223f430
	ctx.lr = 0x8223FB6C;
	sub_8223F430(ctx, base);
loc_8223FB6C:
	// addi r11,r30,432
	ctx.r11.s64 = ctx.r30.s64 + 432;
	// lwz r10,460(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_8223FB78:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8223FB8C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r11
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r11.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r6
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r6.s64, ctx.xer);
	// bne cr6,0x8223fbb0
	if (!ctx.cr6.eq) goto loc_8223FBB0;
	// stdcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r11.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r9.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8223fb8c
	if (!ctx.cr0.eq) goto loc_8223FB8C;
	// b 0x8223fbb8
	goto loc_8223FBB8;
loc_8223FBB0:
	// stdcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r11.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8223FBB8:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r6
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r6.s64, ctx.xer);
	// bne cr6,0x8223fb78
	if (!ctx.cr6.eq) goto loc_8223FB78;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223fc30
	if (ctx.cr0.eq) goto loc_8223FC30;
	// lwz r10,4396(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4396);
	// addi r11,r31,11512
	ctx.r11.s64 = ctx.r31.s64 + 11512;
	// stw r10,11520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11520, ctx.r10.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,11524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11524);
	// lwz r9,11520(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11520);
	// stw r11,11516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11516, ctx.r11.u32);
	// lwz r8,11024(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// lwz r8,112(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r10,11528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11528, ctx.r10.u32);
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,11532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11532, ctx.r10.u32);
	// lwz r10,16948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16948);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// stw r9,11524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11524, ctx.r9.u32);
	// stw r10,11512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11512, ctx.r10.u32);
	// stw r11,11536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11536, ctx.r11.u32);
loc_8223FC30:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// rlwinm r5,r11,31,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7F;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x8223fc48
	if (ctx.cr6.lt) goto loc_8223FC48;
	// cmplwi cr6,r5,112
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 112, ctx.xer);
	// ble cr6,0x8223fc60
	if (!ctx.cr6.gt) goto loc_8223FC60;
loc_8223FC48:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// cmplwi cr6,r21,16
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 16, ctx.xer);
	// blt cr6,0x8223fc5c
	if (ctx.cr6.lt) goto loc_8223FC5C;
	// cmplwi cr6,r21,112
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 112, ctx.xer);
	// ble cr6,0x8223fc60
	if (!ctx.cr6.gt) goto loc_8223FC60;
loc_8223FC5C:
	// li r5,64
	ctx.r5.s64 = 64;
loc_8223FC60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223f1e8
	ctx.lr = 0x8223FC6C;
	sub_8223F1E8(ctx, base);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223fc90
	if (ctx.cr6.eq) goto loc_8223FC90;
	// lwz r11,11088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11088);
	// sync 
	// stw r11,1812(r20)
	PPC_MM_STORE_U32(ctx.r20.u32 + 1812, ctx.r11.u32);
	// eieio 
	// sync 
	// stw r28,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r28.u32);
loc_8223FC90:
	// lwz r11,24568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24568);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223fcd4
	if (!ctx.cr6.gt) goto loc_8223FCD4;
	// addi r11,r31,24492
	ctx.r11.s64 = ctx.r31.s64 + 24492;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8223FCA8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223fcbc
	if (ctx.cr6.eq) goto loc_8223FCBC;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_8223FCBC:
	// lwz r8,24568(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24568);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8223fca8
	if (ctx.cr6.lt) goto loc_8223FCA8;
loc_8223FCD4:
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwsync 
	// addi r11,r31,24576
	ctx.r11.s64 = ctx.r31.s64 + 24576;
loc_8223FCE4:
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
	// bne 0x8223fce4
	if (!ctx.cr0.eq) goto loc_8223FCE4;
	// addi r3,r19,16
	ctx.r3.s64 = ctx.r19.s64 + 16;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223FD0C"))) PPC_WEAK_FUNC(sub_8223FD0C);
PPC_FUNC_IMPL(__imp__sub_8223FD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223FD10"))) PPC_WEAK_FUNC(sub_8223FD10);
PPC_FUNC_IMPL(__imp__sub_8223FD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// addi r9,r9,-25344
	ctx.r9.s64 = ctx.r9.s64 + -25344;
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// fadds f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r7,r7,-25328
	ctx.r7.s64 = ctx.r7.s64 + -25328;
	// lfs f12,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r6,-25312
	ctx.r11.s64 = ctx.r6.s64 + -25312;
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v61,r0,r7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r11
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f13,f12,f11,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f10,f0,f13
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v59,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// vmulfp128 v59,v59,v63
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v63.f32)));
	// vspltw128 v58,v59,3
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0x0));
	// vmsum4fp128 v62,v59,v62
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v63,v58,v63
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// vmulfp128 v62,v59,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v63,v62,v63
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vmsum4fp128 v62,v62,v61
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// stvx128 v62,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// vmsum4fp128 v63,v63,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223FDEC"))) PPC_WEAK_FUNC(sub_8223FDEC);
PPC_FUNC_IMPL(__imp__sub_8223FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223FDF0"))) PPC_WEAK_FUNC(sub_8223FDF0);
PPC_FUNC_IMPL(__imp__sub_8223FDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f1,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// vspltisw128 v59,-1
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// vspltisw128 v58,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// vspltisw128 v57,-9
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_set1_epi32(int(0xFFFFFFF7)));
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stfs f2,-16(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r10,r10,-14416
	ctx.r10.s64 = ctx.r10.s64 + -14416;
	// vslw128 v56,v59,v59
	ctx.v56.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v56.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v56.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v56.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// vupkd3d128 v63,v58,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v58.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v58.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v63 = vTemp;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,-14432
	ctx.r11.s64 = ctx.r8.s64 + -14432;
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// vslw128 v3,v59,v57
	ctx.v3.u32[0] = ctx.v59.u32[0] << (ctx.v57.u8[0] & 0x1F);
	ctx.v3.u32[1] = ctx.v59.u32[1] << (ctx.v57.u8[4] & 0x1F);
	ctx.v3.u32[2] = ctx.v59.u32[2] << (ctx.v57.u8[8] & 0x1F);
	ctx.v3.u32[3] = ctx.v59.u32[3] << (ctx.v57.u8[12] & 0x1F);
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r8,-14384
	ctx.r10.s64 = ctx.r8.s64 + -14384;
	// addi r8,r6,-14400
	ctx.r8.s64 = ctx.r6.s64 + -14400;
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// vspltw128 v30,v62,1
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xAA));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// vspltw128 v31,v62,0
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// vspltw128 v28,v62,2
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x55));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// vspltw128 v26,v62,3
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x0));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v55,v63,3
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltisw128 v54,1
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_set1_epi32(int(0x1)));
	// vspltw128 v12,v61,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvx128 v60,r0,r10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v4,v61,1
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v7,v61,2
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x55));
	// vor128 v13,v55,v55
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v55.u8));
	// vspltw128 v11,v61,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v2,v63,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v1,v63,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v29,v63,2
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v27,v63,3
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// lvx128 v63,r0,r7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v8,v60,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xAA));
	// vcmpeqfp128 v9,v63,v58
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v58.f32)));
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vandc128 v61,v62,v56
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vor128 v0,v61,v61
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vlogefp128 v61,v61
	ctx.v61.f32[0] = log2f(ctx.v61.f32[0]);
	ctx.v61.f32[1] = log2f(ctx.v61.f32[1]);
	ctx.v61.f32[2] = log2f(ctx.v61.f32[2]);
	ctx.v61.f32[3] = log2f(ctx.v61.f32[3]);
	// vspltw128 v5,v60,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// vspltw128 v10,v60,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x55));
	// vspltw128 v6,v60,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x0));
	// vcfpsxws128 v60,v63,0
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_vctsxs(_mm_load_ps(ctx.v63.f32)));
	// vsel v3,v0,v13,v3
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsubfp128 v0,v3,v55
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v55.f32)));
	// vrfim128 v61,v61
	_mm_store_ps(ctx.v61.f32, _mm_round_ps(_mm_load_ps(ctx.v61.f32), _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC));
	// vand128 v60,v60,v54
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v54.u8)));
	// vmulfp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v1,v0,v1,v2
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v31,v0,v30,v31
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v30.f32)), _mm_load_ps(ctx.v31.f32)));
	// vmulfp128 v2,v0,v63
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v3,v61,v63
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v1,v13,v29,v1
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v29.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v31,v13,v28,v31
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v28.f32)), _mm_load_ps(ctx.v31.f32)));
	// vmulfp128 v30,v13,v13
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v0,v27,v1
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v27.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v0,v0,v26,v31
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v26.f32)), _mm_load_ps(ctx.v31.f32)));
	// vmaddfp v0,v30,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v2,v0,v3
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v3.f32)));
	// vrfim128 v61,v0
	_mm_store_ps(ctx.v61.f32, _mm_round_ps(_mm_load_ps(ctx.v0.f32), _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC));
	// vsubfp128 v0,v0,v61
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v61.f32)));
	// vexptefp128 v61,v61
	ctx.v61.f32[0] = exp2f(ctx.v61.f32[0]);
	ctx.v61.f32[1] = exp2f(ctx.v61.f32[1]);
	ctx.v61.f32[2] = exp2f(ctx.v61.f32[2]);
	ctx.v61.f32[3] = exp2f(ctx.v61.f32[3]);
	// vmulfp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v5,v0,v8,v5
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v4,v0,v4,v12
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v8,v0,v13
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v13,v7,v4
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v4.f32)));
	// vslw128 v60,v60,v59
	ctx.v60.u32[0] = ctx.v60.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v60.u32[1] = ctx.v60.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v60.u32[2] = ctx.v60.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v60.u32[3] = ctx.v60.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vmaddfp v4,v13,v10,v5
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v5.f32)));
	// vslw128 v59,v59,v57
	ctx.v59.u32[0] = ctx.v59.u32[0] << (ctx.v57.u8[0] & 0x1F);
	ctx.v59.u32[1] = ctx.v59.u32[1] << (ctx.v57.u8[4] & 0x1F);
	ctx.v59.u32[2] = ctx.v59.u32[2] << (ctx.v57.u8[8] & 0x1F);
	ctx.v59.u32[3] = ctx.v59.u32[3] << (ctx.v57.u8[12] & 0x1F);
	// vcmpgtfp128 v57,v58,v63
	_mm_store_ps(ctx.v57.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v63.f32)));
	// vand128 v56,v62,v56
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// vcmpeqfp128 v53,v62,v58
	_mm_store_ps(ctx.v53.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v58.f32)));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vmulfp128 v7,v13,v13
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vsrw128 v10,v59,v54
	ctx.v10.u32[0] = ctx.v59.u32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v10.u32[1] = ctx.v59.u32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v10.u32[2] = ctx.v59.u32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v10.u32[3] = ctx.v59.u32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vcmpgtfp128 v62,v58,v62
	_mm_store_ps(ctx.v62.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v62.f32)));
	// vand128 v60,v56,v60
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v60.u8)));
	// vrfiz128 v56,v63
	_mm_store_ps(ctx.v56.f32, _mm_round_ps(_mm_load_ps(ctx.v63.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vmaddfp v5,v8,v11,v0
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vor128 v11,v58,v60
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v60.u8)));
	// vmaddfp v8,v8,v6,v4
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v4.f32)));
	// vor128 v0,v55,v55
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v55.u8));
	// vandc128 v13,v53,v57
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v53.u8)));
	// vor128 v59,v53,v9
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// vcmpeqfp128 v63,v63,v56
	_mm_store_ps(ctx.v63.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v56.f32)));
	// vsel v13,v10,v11,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmaddfp v11,v7,v8,v5
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v5.f32)));
	// vsel v8,v13,v0,v9
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vandc128 v63,v62,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vor128 v7,v63,v59
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// vrefp v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v6,v11,v0,v12
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v11,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v61,v12
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v12.f32)));
	// vor128 v0,v63,v60
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v60.u8)));
	// vsel v13,v0,v8,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223FFD0"))) PPC_WEAK_FUNC(sub_8223FFD0);
PPC_FUNC_IMPL(__imp__sub_8223FFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8223FFD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm. r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ble 0x82240010
	if (!ctx.cr0.gt) goto loc_82240010;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// subf r8,r8,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r8.s64;
loc_8223FFF8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8223fff8
	if (ctx.cr6.lt) goto loc_8223FFF8;
loc_82240010:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82240034
	if (!ctx.cr6.gt) goto loc_82240034;
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82240034
	if (ctx.cr0.eq) goto loc_82240034;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8224002C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8224002c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224002C;
loc_82240034:
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
	// stwx r28,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r28.u32);
	// beq cr6,0x8224009c
	if (ctx.cr6.eq) goto loc_8224009C;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// stwx r31,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r31.u32);
loc_8224009C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822400c8
	if (!ctx.cr6.gt) goto loc_822400C8;
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_822400AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822400c0
	if (!ctx.cr6.eq) goto loc_822400C0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822400C0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822400ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822400AC;
loc_822400C8:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// subf r30,r4,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r29,16
	ctx.r29.s64 = 16;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfd f10,712(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 712);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
loc_822400F0:
	// li r7,512
	ctx.r7.s64 = 512;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822401b4
	if (!ctx.cr6.gt) goto loc_822401B4;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
loc_8224010C:
	// lfsu f0,64(r11)
	ctx.fpscr.disableFlushMode();
	ea = 64 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8224010c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224010C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82240120:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 7;
	// slw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// ble cr6,0x8224016c
	if (!ctx.cr6.gt) goto loc_8224016C;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadd f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 + ctx.f10.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f0.u64);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// b 0x82240190
	goto loc_82240190;
loc_8224016C:
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsub f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 - ctx.f10.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f0.u64);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
loc_82240190:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// subfic r10,r10,2
	ctx.xer.ca = ctx.r10.u32 <= 2;
	ctx.r10.s64 = 2 - ctx.r10.s64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82240120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82240120;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822402a4
	if (!ctx.cr6.gt) goto loc_822402A4;
loc_822401B4:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82240278
	if (!ctx.cr6.gt) goto loc_82240278;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_822401D0:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x82240234
	if (!ctx.cr6.gt) goto loc_82240234;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lwax r6,r11,r6
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32));
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// b 0x82240238
	goto loc_82240238;
loc_82240234:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82240238:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bge cr6,0x8224026c
	if (!ctx.cr6.lt) goto loc_8224026C;
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// sraw r10,r4,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8224026c
	if (ctx.cr6.lt) goto loc_8224026C;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8224026c
	if (!ctx.cr6.lt) goto loc_8224026C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8224026C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822401d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822401D0;
loc_82240278:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// sraw r8,r4,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r8.s64 = ctx.r4.s32 >> temp.u32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf. r7,r8,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bgt 0x822401b4
	if (ctx.cr0.gt) goto loc_822401B4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
loc_822402A4:
	// bge cr6,0x822403c0
	if (!ctx.cr6.lt) goto loc_822403C0;
loc_822402A8:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82240398
	if (!ctx.cr6.gt) goto loc_82240398;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_822402C4:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x82240330
	if (!ctx.cr6.gt) goto loc_82240330;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r27,r1,32
	ctx.r27.s64 = ctx.r1.s64 + 32;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// lfd f9,72(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f9,f8
	ctx.f9.f64 = double(float(ctx.f8.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// b 0x82240334
	goto loc_82240334;
loc_82240330:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82240334:
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// sraw r9,r4,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8224038c
	if (ctx.cr6.gt) goto loc_8224038C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82240368
	if (!ctx.cr6.eq) goto loc_82240368;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8224037c
	if (ctx.cr6.gt) goto loc_8224037C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_82240368:
	// ble cr6,0x8224038c
	if (!ctx.cr6.gt) goto loc_8224038C;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -256, ctx.xer);
	// ble cr6,0x8224038c
	if (!ctx.cr6.gt) goto loc_8224038C;
loc_8224037C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8224038c
	if (!ctx.cr6.lt) goto loc_8224038C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_8224038C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822402c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822402C4;
loc_82240398:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sraw r9,r4,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// add. r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// blt 0x822402a8
	if (ctx.cr0.lt) goto loc_822402A8;
loc_822403C0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822403f8
	if (!ctx.cr6.gt) goto loc_822403F8;
	// addi r10,r3,-64
	ctx.r10.s64 = ctx.r3.s64 + -64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822403D4:
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subfic r9,r9,2
	ctx.xer.ca = ctx.r9.u32 <= 2;
	ctx.r9.s64 = 2 - ctx.r9.s64;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// stwu r9,64(r10)
	ea = 64 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822403d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822403D4;
loc_822403F8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x822400f0
	if (!ctx.cr0.eq) goto loc_822400F0;
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224040C"))) PPC_WEAK_FUNC(sub_8224040C);
PPC_FUNC_IMPL(__imp__sub_8224040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240410"))) PPC_WEAK_FUNC(sub_82240410);
PPC_FUNC_IMPL(__imp__sub_82240410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f12,644(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8224046c
	if (!ctx.cr6.lt) goto loc_8224046C;
	// lfs f0,648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f0,f7,f0,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f0,f0,f7,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f0,f0,f7,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fmadds f0,f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f1,f0,f7,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f8.f64));
	// blr 
	return;
loc_8224046C:
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// vspltisw128 v61,1
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x1)));
	// addi r8,r8,-14400
	ctx.r8.s64 = ctx.r8.s64 + -14400;
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r10,r10,-14384
	ctx.r10.s64 = ctx.r10.s64 + -14384;
	// fdivs f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// vcsxwfp128 v9,v61,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stfs f0,-12(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// vspltw128 v11,v63,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// vspltw128 v2,v63,1
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// vspltw128 v3,v63,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v5,v63,3
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// lvx128 v63,r0,r7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// vspltw128 v1,v62,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v31,v62,1
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xAA));
	// lfs f13,680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 680);
	ctx.f13.f64 = double(temp.f32);
	// vspltw128 v4,v62,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x55));
	// lfs f0,676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v6,v62,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x0));
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrfim128 v61,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v61.f32, _mm_round_ps(_mm_load_ps(ctx.v62.f32), _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC));
	// fmsubs f0,f7,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 - ctx.f13.f64));
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v63.f32))));
	// lfs f12,684(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	ctx.f12.f64 = double(temp.f32);
	// vsubfp128 v13,v62,v61
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32)));
	// fmadds f12,f0,f7,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f12.f64));
	// vmulfp128 v8,v63,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v9.f32)));
	// lfs f0,688(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,692(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	ctx.f13.f64 = double(temp.f32);
	// vor128 v10,v63,v63
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// lfs f11,696(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 696);
	ctx.f11.f64 = double(temp.f32);
	// vexptefp128 v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v61.f32[0] = exp2f(ctx.v61.f32[0]);
	ctx.v61.f32[1] = exp2f(ctx.v61.f32[1]);
	ctx.v61.f32[2] = exp2f(ctx.v61.f32[2]);
	ctx.v61.f32[3] = exp2f(ctx.v61.f32[3]);
	// lfs f10,700(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fmsubs f0,f12,f7,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 - ctx.f0.f64));
	// vmulfp128 v7,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v13,v13
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v2,v13,v2,v11
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v1,v13,v31,v1
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v1.f32)));
	// vcmpeqfp128 v62,v0,v0
	_mm_store_ps(ctx.v62.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// fmadds f0,f0,f7,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f13.f64));
	// vnmsubfp v9,v8,v7,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v13,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v8,v12,v3,v2
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v7,v12,v4,v1
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v12,v12,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// fmsubs f0,f0,f7,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 - ctx.f11.f64));
	// vmaddfp v0,v0,v9,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v60,v9,v9
	_mm_store_ps(ctx.v60.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v8,v13,v5,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v9,v13,v6,v7
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v7.f32)));
	// fmadds f0,f0,f7,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f10.f64));
	// vmulfp128 v0,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vxor128 v13,v60,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vmaddfp v12,v12,v9,v8
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v8.f32)));
	// fmadds f0,f0,f7,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f9.f64));
	// vsel v13,v0,v10,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// fmadds f0,f0,f7,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f8.f64));
	// vrefp v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// vnmsubfp v8,v12,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v12,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v61,v12
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822405D0"))) PPC_WEAK_FUNC(sub_822405D0);
PPC_FUNC_IMPL(__imp__sub_822405D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r31,r11,31376
	ctx.r31.s64 = ctx.r11.s64 + 31376;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82240640
	if (!ctx.cr6.lt) goto loc_82240640;
	// lfs f2,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// fabs f1,f1
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// bl 0x8223fdf0
	ctx.lr = 0x82240614;
	sub_8223FDF0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f2,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8223fdf0
	ctx.lr = 0x82240624;
	sub_8223FDF0(ctx, base);
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,640(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f30,f0,f12
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82240694
	goto loc_82240694;
loc_82240640:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f30,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82240690
	if (!ctx.cr6.lt) goto loc_82240690;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8223fdf0
	ctx.lr = 0x8224065C;
	sub_8223FDF0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f2,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// fabs f1,f31
	ctx.f1.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// bl 0x8223fdf0
	ctx.lr = 0x8224066C;
	sub_8223FDF0(ctx, base);
	// fmuls f11,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lfs f0,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f31
	ctx.f10.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f29,f0,f11
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 - ctx.f11.f64));
	// fnmsubs f0,f10,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x82240694
	goto loc_82240694;
loc_82240690:
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
loc_82240694:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822406B4"))) PPC_WEAK_FUNC(sub_822406B4);
PPC_FUNC_IMPL(__imp__sub_822406B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822406B8"))) PPC_WEAK_FUNC(sub_822406B8);
PPC_FUNC_IMPL(__imp__sub_822406B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x822406C0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8233fa14
	ctx.lr = 0x822406C8;
	__savefpr_19(ctx, base);
	// li r12,-176
	ctx.r12.s64 = -176;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f20,f1
	ctx.fpscr.disableFlushMode();
	ctx.f20.f64 = ctx.f1.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// rlwinm r31,r4,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfs f21,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f21.f64 = double(temp.f32);
	// lfs f22,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f22.f64 = double(temp.f32);
	// beq cr6,0x82240aa8
	if (ctx.cr6.eq) goto loc_82240AA8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822409a0
	if (ctx.cr6.eq) goto loc_822409A0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82240928
	if (ctx.cr6.eq) goto loc_82240928;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x822408c8
	if (ctx.cr6.eq) goto loc_822408C8;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8224081c
	if (ctx.cr6.eq) goto loc_8224081C;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8224078c
	if (ctx.cr6.eq) goto loc_8224078C;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x8224078c
	if (!ctx.cr6.eq) goto loc_8224078C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82240754
	if (ctx.cr6.eq) goto loc_82240754;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82240754
	if (ctx.cr0.eq) goto loc_82240754;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8224074C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8224074c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224074C;
loc_82240754:
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82240b98
	if (!ctx.cr6.lt) goto loc_82240B98;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82240778:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsu f22,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f22.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82240778
	if (ctx.cr6.lt) goto loc_82240778;
	// b 0x82240b98
	goto loc_82240B98;
loc_8224078C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82240b98
	if (ctx.cr6.eq) goto loc_82240B98;
	// rlwinm r10,r31,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_822407A4:
	// addi r8,r10,-16
	ctx.r8.s64 = ctx.r10.s64 + -16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822407d0
	if (ctx.cr6.lt) goto loc_822407D0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822407d0
	if (!ctx.cr6.lt) goto loc_822407D0;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x822407f8
	goto loc_822407F8;
loc_822407D0:
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82240808
	if (!ctx.cr6.lt) goto loc_82240808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82240808
	if (ctx.cr6.lt) goto loc_82240808;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_822407F8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x8224080c
	goto loc_8224080C;
loc_82240808:
	// stfs f21,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_8224080C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x822407a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822407A4;
	// b 0x82240b98
	goto loc_82240B98;
loc_8224081C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82240b98
	if (ctx.cr6.eq) goto loc_82240B98;
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f29.f64 = double(temp.f32);
	// fdivs f28,f22,f31
	ctx.f28.f64 = double(float(ctx.f22.f64 / ctx.f31.f64));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r30,r28,-4
	ctx.r30.s64 = ctx.r28.s64 + -4;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82240850:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fmuls f31,f0,f20
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fcmpu cr6,f31,f21
	ctx.cr6.compare(ctx.f31.f64, ctx.f21.f64);
	// bne cr6,0x8224087c
	if (!ctx.cr6.eq) goto loc_8224087C;
	// fmr f30,f22
	ctx.f30.f64 = ctx.f22.f64;
	// b 0x8224088c
	goto loc_8224088C;
loc_8224087C:
	// fmuls f30,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8223fd10
	ctx.lr = 0x82240888;
	sub_8223FD10(ctx, base);
	// fdivs f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 / ctx.f30.f64));
loc_8224088C:
	// fmuls f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bne cr6,0x822408a0
	if (!ctx.cr6.eq) goto loc_822408A0;
	// fmr f0,f22
	ctx.f0.f64 = ctx.f22.f64;
	// b 0x822408b0
	goto loc_822408B0;
loc_822408A0:
	// fmuls f31,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8223fd10
	ctx.lr = 0x822408AC;
	sub_8223FD10(ctx, base);
	// fdivs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f31.f64));
loc_822408B0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfsu f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82240850
	if (ctx.cr6.lt) goto loc_82240850;
	// b 0x82240b98
	goto loc_82240B98;
loc_822408C8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82240b98
	if (ctx.cr6.eq) goto loc_82240B98;
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_822408F4:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmuls f1,f0,f20
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// bl 0x822405d0
	ctx.lr = 0x82240914;
	sub_822405D0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x822408f4
	if (ctx.cr6.lt) goto loc_822408F4;
	// b 0x82240b98
	goto loc_82240B98;
loc_82240928:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82240b98
	if (ctx.cr6.eq) goto loc_82240B98;
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f29.f64 = double(temp.f32);
	// fdivs f31,f22,f31
	ctx.f31.f64 = double(float(ctx.f22.f64 / ctx.f31.f64));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8224095C:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f0,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x8223fdf0
	ctx.lr = 0x8224098C;
	sub_8223FDF0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8224095c
	if (ctx.cr6.lt) goto loc_8224095C;
	// b 0x82240b98
	goto loc_82240B98;
loc_822409A0:
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x82240b98
	if (ctx.cr6.eq) goto loc_82240B98;
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x1)));
	// lfs f27,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f27.f64 = double(temp.f32);
	// stfs f21,84(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fdivs f28,f22,f30
	ctx.f28.f64 = double(float(ctx.f22.f64 / ctx.f30.f64));
	// stfs f21,88(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// stfs f21,92(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vcsxwfp128 v127,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
loc_822409E8:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// vor128 v11,v127,v127
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// frsp f6,f0
	ctx.f6.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f6,f30
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f30.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fnmsubs f0,f0,f0,f22
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f22.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v63.f32))));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vor128 v10,v63,v63
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmulfp128 v13,v63,v127
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v127.f32)));
	// vcmpeqfp128 v62,v0,v0
	_mm_store_ps(ctx.v62.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v11,v13,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v61,v11,v11
	_mm_store_ps(ctx.v61.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v63,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vxor128 v13,v61,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vsel v13,v0,v10,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82240410
	ctx.lr = 0x82240A58;
	sub_82240410(ctx, base);
	// fmr f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82240410
	ctx.lr = 0x82240A64;
	sub_82240410(ctx, base);
	// fsubs f0,f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f30.f64));
	// fdivs f29,f5,f1
	ctx.f29.f64 = double(float(ctx.f5.f64 / ctx.f1.f64));
	// fmuls f0,f0,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bne cr6,0x82240a80
	if (!ctx.cr6.eq) goto loc_82240A80;
	// fmr f0,f22
	ctx.f0.f64 = ctx.f22.f64;
	// b 0x82240a90
	goto loc_82240A90;
loc_82240A80:
	// fmuls f26,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x8223fd10
	ctx.lr = 0x82240A8C;
	sub_8223FD10(ctx, base);
	// fdivs f0,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f26.f64));
loc_82240A90:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fmuls f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfsu f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x822409e8
	if (ctx.cr6.lt) goto loc_822409E8;
	// b 0x82240b98
	goto loc_82240B98;
loc_82240AA8:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82240b98
	if (ctx.cr6.eq) goto loc_82240B98;
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	ctx.f28.f64 = double(temp.f32);
	// addi r30,r28,-4
	ctx.r30.s64 = ctx.r28.s64 + -4;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfs f27,632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f26.f64 = double(temp.f32);
	// lfs f30,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f30.f64 = double(temp.f32);
	// lfs f25,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f24.f64 = double(temp.f32);
	// lfs f29,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f29.f64 = double(temp.f32);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f23,f13,f0
	ctx.f23.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82240AF0:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f23.f64));
	// fmuls f31,f0,f20
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fabs f0,f31
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// bge cr6,0x82240b44
	if (!ctx.cr6.lt) goto loc_82240B44;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fabs f1,f31
	ctx.f1.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// bl 0x8223fdf0
	ctx.lr = 0x82240B24;
	sub_8223FDF0(ctx, base);
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = ctx.f1.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8223fdf0
	ctx.lr = 0x82240B34;
	sub_8223FDF0(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fmsubs f0,f19,f27,f0
	ctx.f0.f64 = double(float(ctx.f19.f64 * ctx.f27.f64 - ctx.f0.f64));
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// b 0x82240b88
	goto loc_82240B88;
loc_82240B44:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82240b84
	if (!ctx.cr6.lt) goto loc_82240B84;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8223fdf0
	ctx.lr = 0x82240B5C;
	sub_8223FDF0(ctx, base);
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = ctx.f1.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fabs f1,f31
	ctx.f1.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// bl 0x8223fdf0
	ctx.lr = 0x82240B6C;
	sub_8223FDF0(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fabs f13,f31
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fmsubs f0,f19,f28,f0
	ctx.f0.f64 = double(float(ctx.f19.f64 * ctx.f28.f64 - ctx.f0.f64));
	// fnmsubs f0,f13,f26,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f26.f64 - ctx.f0.f64)));
	// fadds f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// b 0x82240b88
	goto loc_82240B88;
loc_82240B84:
	// fmr f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f21.f64;
loc_82240B88:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfsu f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82240af0
	if (ctx.cr6.lt) goto loc_82240AF0;
loc_82240B98:
	// stfs f21,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
loc_82240BA4:
	// fmr f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f21.f64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82240be0
	if (ctx.cr6.eq) goto loc_82240BE0;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82240BB8:
	// lfsu f13,64(r10)
	ctx.fpscr.disableFlushMode();
	ea = 64 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82240bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82240BB8;
	// fdivs f0,f22,f0
	ctx.f0.f64 = double(float(ctx.f22.f64 / ctx.f0.f64));
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82240BD0:
	// lfs f13,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f13,64(r10)
	temp.f32 = float(ctx.f13.f64);
	ea = 64 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82240bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82240BD0;
loc_82240BE0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82240ba4
	if (!ctx.cr0.eq) goto loc_82240BA4;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// li r0,-176
	ctx.r0.s64 = -176;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8233fa60
	ctx.lr = 0x82240C00;
	__restfpr_19(ctx, base);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82240C04"))) PPC_WEAK_FUNC(sub_82240C04);
PPC_FUNC_IMPL(__imp__sub_82240C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240C08"))) PPC_WEAK_FUNC(sub_82240C08);
PPC_FUNC_IMPL(__imp__sub_82240C08) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82240c44
	if (!ctx.cr6.eq) goto loc_82240C44;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82240C44:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82240c60
	if (!ctx.cr6.lt) goto loc_82240C60;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_82240C60:
	// lfs f11,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82240c70
	if (!ctx.cr6.gt) goto loc_82240C70;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82240C70:
	// lfs f12,1080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f0,f12,f13
	ctx.f13.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// fmadds f10,f13,f0,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// beq cr6,0x82240d10
	if (ctx.cr6.eq) goto loc_82240D10;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82240d10
	if (ctx.cr6.eq) goto loc_82240D10;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82240ca0
	if (!ctx.cr6.lt) goto loc_82240CA0;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_82240CA0:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82240cac
	if (!ctx.cr6.gt) goto loc_82240CAC;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82240CAC:
	// lfs f13,1084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f0,f12,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f13,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,1088(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1088);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// fnmsubs f13,f8,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// ble cr6,0x82240cd4
	if (!ctx.cr6.gt) goto loc_82240CD4;
	// lfd f0,1096(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1096);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82240cd8
	if (ctx.cr6.lt) goto loc_82240CD8;
loc_82240CD4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82240CD8:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82240ce4
	if (!ctx.cr6.lt) goto loc_82240CE4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82240CE4:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82240cf0
	if (!ctx.cr6.lt) goto loc_82240CF0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82240CF0:
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82240d04
	if (ctx.cr6.lt) goto loc_82240D04;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82240D04:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// b 0x82240d4c
	goto loc_82240D4C;
loc_82240D10:
	// lfd f0,1104(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1104);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82240d28
	if (!ctx.cr6.gt) goto loc_82240D28;
	// lfd f0,1112(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1112);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82240d2c
	if (ctx.cr6.lt) goto loc_82240D2C;
loc_82240D28:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82240D2C:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82240d38
	if (!ctx.cr6.lt) goto loc_82240D38;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82240D38:
	// fdivs f0,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82240d48
	if (ctx.cr6.lt) goto loc_82240D48;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82240D48:
	// fmuls f13,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
loc_82240D4C:
	// lfs f0,196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,31
	ctx.r10.s64 = 2031616;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,1120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lfs f10,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f10
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r9,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r9.u32);
	// ble cr6,0x82240d88
	if (!ctx.cr6.gt) goto loc_82240D88;
	// stw r10,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r10.u32);
loc_82240D88:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82240dc8
	if (!ctx.cr6.eq) goto loc_82240DC8;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82240da8
	if (!ctx.cr6.lt) goto loc_82240DA8;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_82240DA8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82240db4
	if (!ctx.cr6.gt) goto loc_82240DB4;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82240DB4:
	// lfs f13,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f0,f13,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82240e34
	goto loc_82240E34;
loc_82240DC8:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82240e00
	if (!ctx.cr6.eq) goto loc_82240E00;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82240de0
	if (!ctx.cr6.lt) goto loc_82240DE0;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_82240DE0:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82240dec
	if (!ctx.cr6.gt) goto loc_82240DEC;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82240DEC:
	// lfs f13,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f2,f13,f0,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f10.f64));
	// b 0x82240e40
	goto loc_82240E40;
loc_82240E00:
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bne cr6,0x82240e3c
	if (!ctx.cr6.eq) goto loc_82240E3C;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82240e18
	if (!ctx.cr6.lt) goto loc_82240E18;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_82240E18:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82240e24
	if (!ctx.cr6.gt) goto loc_82240E24;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82240E24:
	// lfs f13,424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,740(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f0,f13,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
loc_82240E34:
	// fmadds f2,f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x82240e40
	goto loc_82240E40;
loc_82240E3C:
	// lfs f2,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
loc_82240E40:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r3,7
	ctx.r3.s64 = 7;
	// bne cr6,0x82240e50
	if (!ctx.cr6.eq) goto loc_82240E50;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82240E50:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822406b8
	ctx.lr = 0x82240E5C;
	sub_822406B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8223ffd0
	ctx.lr = 0x82240E6C;
	sub_8223FFD0(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

__attribute__((alias("__imp__sub_82240E84"))) PPC_WEAK_FUNC(sub_82240E84);
PPC_FUNC_IMPL(__imp__sub_82240E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240E88"))) PPC_WEAK_FUNC(sub_82240E88);
PPC_FUNC_IMPL(__imp__sub_82240E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82240E90;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r9,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// bl 0x82388e74
	ctx.lr = 0x82240EC8;
	__imp__VdQueryVideoMode(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82240ef0
	if (!ctx.cr6.eq) goto loc_82240EF0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82240ef0
	if (!ctx.cr6.eq) goto loc_82240EF0;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82240EF0:
	// lwz r19,404(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// rlwinm r17,r31,16,16,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// lwz r16,21944(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + 21944);
	// clrlwi r15,r31,16
	ctx.r15.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r14,21940(r25)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r25.u32 + 21940);
	// rlwinm r27,r30,16,16,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// clrlwi r24,r30,16
	ctx.r24.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r23,r29,16,16,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// clrlwi r22,r29,16
	ctx.r22.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r21,r26,16,16,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// clrlwi r20,r26,16
	ctx.r20.u64 = ctx.r26.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82240f4c
	if (!ctx.cr6.eq) goto loc_82240F4C;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82240f38
	if (!ctx.cr6.eq) goto loc_82240F38;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82240f48
	goto loc_82240F48;
loc_82240F38:
	// subfc r11,r21,r27
	ctx.xer.ca = ctx.r27.u32 >= ctx.r21.u32;
	ctx.r11.s64 = ctx.r27.s64 - ctx.r21.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
loc_82240F48:
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_82240F4C:
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82240f94
	if (!ctx.cr6.eq) goto loc_82240F94;
	// divwu r11,r20,r9
	ctx.r11.u32 = ctx.r20.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82240f80
	if (!ctx.cr6.eq) goto loc_82240F80;
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x82240f90
	goto loc_82240F90;
loc_82240F80:
	// subfc r11,r11,r24
	ctx.xer.ca = ctx.r24.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r24.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
loc_82240F90:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82240F94:
	// clrldi r11,r21,32
	ctx.r11.u64 = ctx.r21.u64 & 0xFFFFFFFF;
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f11,208(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// lfd f10,1136(r30)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1136);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f29,f11
	ctx.cr6.compare(ctx.f29.f64, ctx.f11.f64);
	// blt cr6,0x82240fe4
	if (ctx.cr6.lt) goto loc_82240FE4;
	// fcmpu cr6,f29,f10
	ctx.cr6.compare(ctx.f29.f64, ctx.f10.f64);
	// bgt cr6,0x82240fe4
	if (ctx.cr6.gt) goto loc_82240FE4;
	// fmr f29,f11
	ctx.f29.f64 = ctx.f11.f64;
loc_82240FE4:
	// clrldi r11,r20,32
	ctx.r11.u64 = ctx.r20.u64 & 0xFFFFFFFF;
	// lwz r10,13976(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13976);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lfs f30,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f30.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// clrldi r11,r24,32
	ctx.r11.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfs f12,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// frsp f13,f8
	ctx.f13.f64 = double(float(ctx.f8.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fdivs f31,f9,f13
	ctx.f31.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// beq 0x82241080
	if (ctx.cr0.eq) goto loc_82241080;
	// lfs f13,1132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// lfs f0,1144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r10,r11,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82241080:
	// fcmpu cr6,f31,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// blt cr6,0x82241098
	if (ctx.cr6.lt) goto loc_82241098;
	// fcmpu cr6,f31,f10
	ctx.cr6.compare(ctx.f31.f64, ctx.f10.f64);
	// bgt cr6,0x82241098
	if (ctx.cr6.gt) goto loc_82241098;
	// fmr f31,f11
	ctx.f31.f64 = ctx.f11.f64;
	// b 0x822410d0
	goto loc_822410D0;
loc_82241098:
	// lfs f13,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x822410b8
	if (ctx.cr6.lt) goto loc_822410B8;
	// lfd f0,1152(r30)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1152);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x822410b8
	if (ctx.cr6.gt) goto loc_822410B8;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// b 0x822410d0
	goto loc_822410D0;
loc_822410B8:
	// fcmpu cr6,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// blt cr6,0x822410d0
	if (ctx.cr6.lt) goto loc_822410D0;
	// lfd f0,1096(r30)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1096);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x822410d0
	if (ctx.cr6.gt) goto loc_822410D0;
	// fmr f31,f12
	ctx.f31.f64 = ctx.f12.f64;
loc_822410D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// twllei r9,0
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// divwu r11,r10,r9
	ctx.r11.u32 = ctx.r10.u32 / ctx.r9.u32;
	// rlwinm r26,r11,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r26,10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 10, ctx.xer);
	// ble cr6,0x822410f8
	if (!ctx.cr6.gt) goto loc_822410F8;
	// li r26,10
	ctx.r26.s64 = 10;
loc_822410F8:
	// li r11,7680
	ctx.r11.s64 = 7680;
	// twllei r27,0
	// divwu r11,r11,r27
	ctx.r11.u32 = ctx.r11.u32 / ctx.r27.u32;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// li r11,6
	ctx.r11.s64 = 6;
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// bgt cr6,0x82241118
	if (ctx.cr6.gt) goto loc_82241118;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82241118:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8224116c
	if (!ctx.cr6.lt) goto loc_8224116C;
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// ble cr6,0x8224117c
	if (!ctx.cr6.gt) goto loc_8224117C;
	// li r29,6
	ctx.r29.s64 = 6;
	// b 0x8224117c
	goto loc_8224117C;
loc_8224116C:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8224117C:
	// lwz r31,420(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82241190;
	sub_8233EAF0(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r6,396(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r31,652
	ctx.r29.s64 = ctx.r31.s64 + 652;
	// bl 0x82240c08
	ctx.lr = 0x822411B8;
	sub_82240C08(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,412(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82240c08
	ctx.lr = 0x822411D8;
	sub_82240C08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r11.u32);
	// addi r9,r27,3
	ctx.r9.s64 = ctx.r27.s64 + 3;
	// stw r10,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r10.u32);
	// clrlwi r10,r18,16
	ctx.r10.u64 = ctx.r18.u32 & 0xFFFF;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// rlwinm r5,r27,16,4,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFF0000;
	// clrlwi r4,r24,20
	ctx.r4.u64 = ctx.r24.u32 & 0xFFF;
	// subf r8,r20,r14
	ctx.r8.s64 = ctx.r14.s64 - ctx.r20.s64;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// subf r27,r22,r8
	ctx.r27.s64 = ctx.r8.s64 - ctx.r22.s64;
	// clrlwi r4,r10,22
	ctx.r4.u64 = ctx.r10.u32 & 0x3FF;
	// clrlwi r29,r15,20
	ctx.r29.u64 = ctx.r15.u32 & 0xFFF;
	// rlwinm r3,r17,16,4,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 16) & 0xFFF0000;
	// rlwinm r9,r18,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 16) & 0xFFFF;
	// or r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 | ctx.r29.u64;
	// subf r6,r21,r16
	ctx.r6.s64 = ctx.r16.s64 - ctx.r21.s64;
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// subf r6,r23,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r23.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r26,r9,0,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,648(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// lwz r8,652(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// clrlwi r25,r22,20
	ctx.r25.u64 = ctx.r22.u32 & 0xFFF;
	// stw r5,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r5.u32);
	// clrlwi r27,r27,20
	ctx.r27.u64 = ctx.r27.u32 & 0xFFF;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r4,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r4.u32);
	// clrlwi r5,r23,20
	ctx.r5.u64 = ctx.r23.u32 & 0xFFF;
	// stw r7,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r7.u32);
	// rlwimi r29,r8,8,20,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xF00) | (ctx.r29.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r3,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r3.u32);
	// clrlwi r6,r6,20
	ctx.r6.u64 = ctx.r6.u32 & 0xFFF;
	// stw r11,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r11.u32);
	// andi. r8,r29,3847
	ctx.r8.u64 = ctx.r29.u64 & 3847;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r11.u32);
	// stw r8,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r8.u32);
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// stw r26,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r26.u32);
	// lis r4,256
	ctx.r4.s64 = 16777216;
	// stw r26,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r26.u32);
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r25,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r25.u32);
	// stw r27,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r27.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r5,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r5.u32);
	// stw r6,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r6.u32);
	// slw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// clrlwi r8,r8,6
	ctx.r8.u64 = ctx.r8.u32 & 0x3FFFFFF;
	// lwz r7,1300(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	// stw r8,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r8.u32);
	// rlwinm r8,r7,5,6,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x3FFFFE0;
	// stw r8,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r8.u32);
	// stw r11,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r11.u32);
	// lfs f12,1148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1148);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r4.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1160);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,1300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f11,f10,f12,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmadds f11,f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fctidz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,9,12,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFE00;
	// stw r11,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r11.u32);
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// beq cr6,0x82241398
	if (ctx.cr6.eq) goto loc_82241398;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f12,1168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1168);
	ctx.f12.f64 = double(temp.f32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfs f11,1164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1164);
	ctx.f11.f64 = double(temp.f32);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f12,f9,f12,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f11,f9,f11,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmadds f12,f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fmadds f0,f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,9,13,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7FE00;
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
	// rlwinm r11,r10,9,13,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x7FE00;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// b 0x822413d8
	goto loc_822413D8;
loc_82241398:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f12,f10,f12,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,9,13,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7FE00;
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
loc_822413D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822413F0"))) PPC_WEAK_FUNC(sub_822413F0);
PPC_FUNC_IMPL(__imp__sub_822413F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x822413F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x82241464
	if (!ctx.cr6.eq) goto loc_82241464;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82241464
	if (!ctx.cr6.eq) goto loc_82241464;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82241464
	if (!ctx.cr6.eq) goto loc_82241464;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82241464
	if (!ctx.cr6.eq) goto loc_82241464;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
loc_82241464:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r29,r9,r7
	ctx.r29.s64 = ctx.r7.s64 - ctx.r9.s64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x82241488
	if (!ctx.cr6.eq) goto loc_82241488;
	// lwz r28,21936(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21936);
loc_82241488:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822414d0
	if (!ctx.cr6.eq) goto loc_822414D0;
	// lwz r11,13976(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13976);
	// mullw r9,r28,r29
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// divwu r30,r9,r10
	ctx.r30.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	// bne 0x822414cc
	if (!ctx.cr0.eq) goto loc_822414CC;
	// bl 0x82388e94
	ctx.lr = 0x822414B0;
	__imp__VdQueryVideoFlags(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822414cc
	if (!ctx.cr0.eq) goto loc_822414CC;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x822414cc
	if (ctx.cr6.gt) goto loc_822414CC;
	// lwz r11,21940(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21940);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822414d0
	if (!ctx.cr6.gt) goto loc_822414D0;
loc_822414CC:
	// lwz r30,21940(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21940);
loc_822414D0:
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x822414E0;
	sub_8233E4E0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r28.u32);
	// stw r30,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241514"))) PPC_WEAK_FUNC(sub_82241514);
PPC_FUNC_IMPL(__imp__sub_82241514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241518"))) PPC_WEAK_FUNC(sub_82241518);
PPC_FUNC_IMPL(__imp__sub_82241518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82241520;
	__savegprlr_25(ctx, base);
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822413f0
	ctx.lr = 0x82241538;
	sub_822413F0(ctx, base);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,21944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21944);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r8,21936(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21936);
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subf r9,r9,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// beq cr6,0x82241598
	if (ctx.cr6.eq) goto loc_82241598;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8224157c
	if (ctx.cr6.lt) goto loc_8224157C;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8224157c
	if (ctx.cr6.gt) goto loc_8224157C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8224157C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82241598
	if (ctx.cr6.lt) goto loc_82241598;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82241598
	if (ctx.cr6.gt) goto loc_82241598;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
loc_82241598:
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r6,21940(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21940);
	// rlwimi r30,r29,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r28,r10,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r5,r9,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// rlwimi r4,r7,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// clrlwi r29,r8,16
	ctx.r29.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r8,r6,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// or r7,r29,r28
	ctx.r7.u64 = ctx.r29.u64 | ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// bl 0x82240e88
	ctx.lr = 0x82241614;
	sub_82240E88(ctx, base);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,800
	ctx.r4.s64 = 800;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82388cf4
	ctx.lr = 0x82241624;
	__imp__RtlFillMemoryUlong(ctx, base);
	// li r4,220
	ctx.r4.s64 = 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fc30
	ctx.lr = 0x82241630;
	sub_8222FC30(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,200
	ctx.r7.s64 = 200;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// subf r4,r9,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r4,r6,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// rlwimi r25,r11,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// or r6,r29,r28
	ctx.r6.u64 = ctx.r29.u64 | ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82388f14
	ctx.lr = 0x82241698;
	__imp__VdInitializeScalerCommandBuffer(ctx, base);
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x822416AC;
	sub_8233E4E0(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82231210
	ctx.lr = 0x822416BC;
	sub_82231210(ctx, base);
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822416C4"))) PPC_WEAK_FUNC(sub_822416C4);
PPC_FUNC_IMPL(__imp__sub_822416C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822416C8"))) PPC_WEAK_FUNC(sub_822416C8);
PPC_FUNC_IMPL(__imp__sub_822416C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x822416D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bne cr6,0x82241728
	if (!ctx.cr6.eq) goto loc_82241728;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x82241734
	goto loc_82241734;
loc_82241728:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82241734:
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// lwz r11,15216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15216);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// beq cr6,0x82241784
	if (ctx.cr6.eq) goto loc_82241784;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r10,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x2;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x8224178c
	goto loc_8224178C;
loc_82241784:
	// lwz r30,13932(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13932);
	// lwz r29,13936(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13936);
loc_8224178C:
	// addi r28,r31,14112
	ctx.r28.s64 = ctx.r31.s64 + 14112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x8233e4e0
	ctx.lr = 0x822417A0;
	sub_8233E4E0(ctx, base);
	// lbz r11,11070(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r11,11070(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11070, ctx.r11.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822413f0
	ctx.lr = 0x822417C4;
	sub_822413F0(ctx, base);
	// lwz r11,21936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21936);
	// lwz r10,21940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21940);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r30,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r30.u16);
	// li r5,56
	ctx.r5.s64 = 56;
	// sth r29,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, ctx.r29.u16);
	// sth r11,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r11.u16);
	// sth r10,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r10.u16);
	// bl 0x8233e4e0
	ctx.lr = 0x822417EC;
	sub_8233E4E0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82388ef4
	ctx.lr = 0x822417F8;
	__imp__VdCallGraphicsNotificationRoutines(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241800"))) PPC_WEAK_FUNC(sub_82241800);
PPC_FUNC_IMPL(__imp__sub_82241800) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,23716(r10)
	PPC_STORE_U8(ctx.r10.u32 + 23716, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241814"))) PPC_WEAK_FUNC(sub_82241814);
PPC_FUNC_IMPL(__imp__sub_82241814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241818"))) PPC_WEAK_FUNC(sub_82241818);
PPC_FUNC_IMPL(__imp__sub_82241818) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,23716(r10)
	PPC_STORE_U8(ctx.r10.u32 + 23716, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224182C"))) PPC_WEAK_FUNC(sub_8224182C);
PPC_FUNC_IMPL(__imp__sub_8224182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241830"))) PPC_WEAK_FUNC(sub_82241830);
PPC_FUNC_IMPL(__imp__sub_82241830) {
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
	// bl 0x8233d168
	ctx.lr = 0x82241840;
	sub_8233D168(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241864"))) PPC_WEAK_FUNC(sub_82241864);
PPC_FUNC_IMPL(__imp__sub_82241864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241868"))) PPC_WEAK_FUNC(sub_82241868);
PPC_FUNC_IMPL(__imp__sub_82241868) {
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
	// bl 0x8233d168
	ctx.lr = 0x82241880;
	sub_8233D168(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32728
	ctx.r11.u64 = ctx.r11.u64 | 32728;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8224189c
	if (!ctx.cr6.lt) goto loc_8224189C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d168
	ctx.lr = 0x82241898;
	sub_8233D168(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
loc_8224189C:
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-12836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12836, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822418BC"))) PPC_WEAK_FUNC(sub_822418BC);
PPC_FUNC_IMPL(__imp__sub_822418BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822418C0"))) PPC_WEAK_FUNC(sub_822418C0);
PPC_FUNC_IMPL(__imp__sub_822418C0) {
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
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r31,23717
	ctx.r11.s64 = ctx.r31.s64 + 23717;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x8233c048
	ctx.lr = 0x822418E8;
	sub_8233C048(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,23717(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23717, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82241908"))) PPC_WEAK_FUNC(sub_82241908);
PPC_FUNC_IMPL(__imp__sub_82241908) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-17345(r10)
	PPC_STORE_U8(ctx.r10.u32 + -17345, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224191C"))) PPC_WEAK_FUNC(sub_8224191C);
PPC_FUNC_IMPL(__imp__sub_8224191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241920"))) PPC_WEAK_FUNC(sub_82241920);
PPC_FUNC_IMPL(__imp__sub_82241920) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-17346(r10)
	PPC_STORE_U8(ctx.r10.u32 + -17346, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241934"))) PPC_WEAK_FUNC(sub_82241934);
PPC_FUNC_IMPL(__imp__sub_82241934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241938"))) PPC_WEAK_FUNC(sub_82241938);
PPC_FUNC_IMPL(__imp__sub_82241938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82241940;
	__savegprlr_25(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-14368
	ctx.r9.s64 = ctx.r10.s64 + -14368;
	// addi r29,r11,6
	ctx.r29.s64 = ctx.r11.s64 + 6;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r10,-14368(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lis r27,-32038
	ctx.r27.s64 = -2099642368;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r5,54
	ctx.r5.s64 = 54;
	// lhz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,90
	ctx.r3.s64 = ctx.r1.s64 + 90;
	// ori r27,r27,7
	ctx.r27.u64 = ctx.r27.u64 | 7;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// bl 0x8233eaf0
	ctx.lr = 0x8224198C;
	sub_8233EAF0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-14356
	ctx.r9.s64 = ctx.r11.s64 + -14356;
	// addi r10,r10,6144
	ctx.r10.s64 = ctx.r10.s64 + 6144;
	// li r5,51
	ctx.r5.s64 = 51;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-14356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14356);
	// addi r3,r1,161
	ctx.r3.s64 = ctx.r1.s64 + 161;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// stb r9,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r9.u8);
	// bl 0x8233eaf0
	ctx.lr = 0x822419D0;
	sub_8233EAF0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-14340
	ctx.r9.s64 = ctx.r11.s64 + -14340;
	// addi r10,r10,6168
	ctx.r10.s64 = ctx.r10.s64 + 6168;
	// li r5,54
	ctx.r5.s64 = 54;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-14340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14340);
	// addi r3,r1,226
	ctx.r3.s64 = ctx.r1.s64 + 226;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lhz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// sth r9,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r9.u16);
	// bl 0x8233eaf0
	ctx.lr = 0x82241A0C;
	sub_8233EAF0(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,19
	ctx.r11.s64 = 19;
	// addi r8,r9,6192
	ctx.r8.s64 = ctx.r9.s64 + 6192;
	// addi r10,r10,-14328
	ctx.r10.s64 = ctx.r10.s64 + -14328;
	// addi r9,r1,283
	ctx.r9.s64 = ctx.r1.s64 + 283;
	// stw r8,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82241A30:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82241a30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241A30;
	// li r5,45
	ctx.r5.s64 = 45;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,303
	ctx.r3.s64 = ctx.r1.s64 + 303;
	// bl 0x8233eaf0
	ctx.lr = 0x82241A4C;
	sub_8233EAF0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-14308
	ctx.r4.s64 = ctx.r11.s64 + -14308;
	// addi r11,r10,6248
	ctx.r11.s64 = ctx.r10.s64 + 6248;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// li r5,27
	ctx.r5.s64 = 27;
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x82241A6C;
	sub_8233E4E0(ctx, base);
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,379
	ctx.r3.s64 = ctx.r1.s64 + 379;
	// bl 0x8233eaf0
	ctx.lr = 0x82241A7C;
	sub_8233EAF0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-14280
	ctx.r4.s64 = ctx.r11.s64 + -14280;
	// addi r11,r10,6336
	ctx.r11.s64 = ctx.r10.s64 + 6336;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x82241A9C;
	sub_8233E4E0(ctx, base);
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,445
	ctx.r3.s64 = ctx.r1.s64 + 445;
	// bl 0x8233eaf0
	ctx.lr = 0x82241AAC;
	sub_8233EAF0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-14252
	ctx.r9.s64 = ctx.r11.s64 + -14252;
	// addi r10,r10,6432
	ctx.r10.s64 = ctx.r10.s64 + 6432;
	// li r5,49
	ctx.r5.s64 = 49;
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-14252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14252);
	// addi r3,r1,503
	ctx.r3.s64 = ctx.r1.s64 + 503;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// lbz r9,14(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stw r11,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
	// stw r10,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r10.u32);
	// stw r8,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r8.u32);
	// sth r7,500(r1)
	PPC_STORE_U16(ctx.r1.u32 + 500, ctx.r7.u16);
	// stb r9,502(r1)
	PPC_STORE_U8(ctx.r1.u32 + 502, ctx.r9.u8);
	// bl 0x8233eaf0
	ctx.lr = 0x82241AF8;
	sub_8233EAF0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-14236
	ctx.r9.s64 = ctx.r11.s64 + -14236;
	// addi r10,r10,6408
	ctx.r10.s64 = ctx.r10.s64 + 6408;
	// li r5,51
	ctx.r5.s64 = 51;
	// stw r10,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-14236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14236);
	// addi r3,r1,569
	ctx.r3.s64 = ctx.r1.s64 + 569;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stw r11,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r11.u32);
	// stw r10,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r10.u32);
	// stw r8,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r8.u32);
	// stb r9,568(r1)
	PPC_STORE_U8(ctx.r1.u32 + 568, ctx.r9.u8);
	// bl 0x8233eaf0
	ctx.lr = 0x82241B3C;
	sub_8233EAF0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,6432
	ctx.r11.s64 = ctx.r11.s64 + 6432;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r11,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r11.u32);
loc_82241B50:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82241B54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82241b54
	if (!ctx.cr6.eq) goto loc_82241B54;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8233dc60
	ctx.lr = 0x82241B80;
	sub_8233DC60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82241bb8
	if (ctx.cr0.eq) goto loc_82241BB8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// blt cr6,0x82241b50
	if (ctx.cr6.lt) goto loc_82241B50;
loc_82241B98:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-14212
	ctx.r4.s64 = ctx.r11.s64 + -14212;
loc_82241BA0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8233c048
	ctx.lr = 0x82241BAC;
	sub_8233C048(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82241BB8:
	// mulli r10,r28,68
	ctx.r10.s64 = ctx.r28.s64 * 68;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r27,730
	ctx.r27.s64 = 47841280;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82241b98
	if (ctx.cr0.eq) goto loc_82241B98;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-14220
	ctx.r4.s64 = ctx.r11.s64 + -14220;
	// b 0x82241ba0
	goto loc_82241BA0;
}

__attribute__((alias("__imp__sub_82241BEC"))) PPC_WEAK_FUNC(sub_82241BEC);
PPC_FUNC_IMPL(__imp__sub_82241BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241BF0"))) PPC_WEAK_FUNC(sub_82241BF0);
PPC_FUNC_IMPL(__imp__sub_82241BF0) {
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
	// addi r31,r3,23756
	ctx.r31.s64 = ctx.r3.s64 + 23756;
	// lwz r3,24348(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241c38
	if (ctx.cr6.eq) goto loc_82241C38;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82241c30
	if (!ctx.cr0.eq) goto loc_82241C30;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823887f4
	ctx.lr = 0x82241C2C;
	__imp__MmFreePhysicalMemory(ctx, base);
	// b 0x82241c38
	goto loc_82241C38;
loc_82241C30:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x82082d58
	ctx.lr = 0x82241C38;
	sub_82082D58(ctx, base);
loc_82241C38:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241c70
	if (ctx.cr6.eq) goto loc_82241C70;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82241c64
	if (ctx.cr6.lt) goto loc_82241C64;
	// bne cr6,0x82241c70
	if (!ctx.cr6.eq) goto loc_82241C70;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x82082d58
	ctx.lr = 0x82241C60;
	sub_82082D58(ctx, base);
	// b 0x82241c70
	goto loc_82241C70;
loc_82241C64:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823887f4
	ctx.lr = 0x82241C70;
	__imp__MmFreePhysicalMemory(ctx, base);
loc_82241C70:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241cac
	if (ctx.cr6.eq) goto loc_82241CAC;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82241ca0
	if (ctx.cr6.lt) goto loc_82241CA0;
	// bne cr6,0x82241cac
	if (!ctx.cr6.eq) goto loc_82241CAC;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x82082d58
	ctx.lr = 0x82241C9C;
	sub_82082D58(ctx, base);
	// b 0x82241cac
	goto loc_82241CAC;
loc_82241CA0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823887f4
	ctx.lr = 0x82241CAC;
	__imp__MmFreePhysicalMemory(ctx, base);
loc_82241CAC:
	// li r5,620
	ctx.r5.s64 = 620;
	// lwz r30,616(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82241CC0;
	sub_8233EAF0(ctx, base);
	// li r11,41
	ctx.r11.s64 = 41;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82241CD8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82241cd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241CD8;
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

__attribute__((alias("__imp__sub_82241CF8"))) PPC_WEAK_FUNC(sub_82241CF8);
PPC_FUNC_IMPL(__imp__sub_82241CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x82241D00;
	__savegprlr_18(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24360);
	// addi r31,r3,23756
	ctx.r31.s64 = ctx.r3.s64 + 23756;
	// stw r5,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r5.u32);
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r31,372
	ctx.r10.s64 = ctx.r31.s64 + 372;
	// stw r11,24360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24360, ctx.r11.u32);
	// srawi. r7,r11,29
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 29;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r6,36(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// addi r9,r31,368
	ctx.r9.s64 = ctx.r31.s64 + 368;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r11,r11,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x2;
	// clrlwi r8,r6,19
	ctx.r8.u64 = ctx.r6.u32 & 0x1FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r6,19,19,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x1FFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r6,r8,31
	ctx.r6.s64 = ctx.r8.s64 + 31;
	// sth r8,24124(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24124, ctx.r8.u16);
	// addi r5,r11,31
	ctx.r5.s64 = ctx.r11.s64 + 31;
	// sth r11,24126(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24126, ctx.r11.u16);
	// rlwinm r6,r6,0,16,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFE0;
	// rlwinm r8,r5,0,16,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFE0;
	// sth r6,24128(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24128, ctx.r6.u16);
	// sth r8,24130(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24130, ctx.r8.u16);
	// bne 0x82241ee0
	if (!ctx.cr0.eq) goto loc_82241EE0;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r7,r9,31376
	ctx.r7.s64 = ctx.r9.s64 + 31376;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r6,r31,408
	ctx.r6.s64 = ctx.r31.s64 + 408;
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfs f0,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,772(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 772);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f12,196(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r9,27192
	ctx.r9.s64 = ctx.r9.s64 + 27192;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r31,424
	ctx.r5.s64 = ctx.r31.s64 + 424;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r31,440
	ctx.r4.s64 = ctx.r31.s64 + 440;
	// lfs f12,56(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r9,32
	ctx.r29.s64 = ctx.r9.s64 + 32;
	// lfs f11,44(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r28,32
	ctx.r28.s64 = 32;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r30,-32249
	ctx.r30.s64 = -2113470464;
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r27,r30,-13840
	ctx.r27.s64 = ctx.r30.s64 + -13840;
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stvrx128 v63,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r30,r31,472
	ctx.r30.s64 = ctx.r31.s64 + 472;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r26,r8,-13856
	ctx.r26.s64 = ctx.r8.s64 + -13856;
	// lvrx128 v63,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v63,v62,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvlx128 v63,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r25,r8,-13872
	ctx.r25.s64 = ctx.r8.s64 + -13872;
	// lvrx128 v62,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// lis r24,-32249
	ctx.r24.s64 = -2113470464;
	// stvrx128 v63,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lvlx128 v63,r9,r28
	temp.u32 = ctx.r9.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r31,488
	ctx.r9.s64 = ctx.r31.s64 + 488;
	// lvrx128 v62,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// li r8,12
	ctx.r8.s64 = 12;
	// stvrx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r3,r24,-13888
	ctx.r3.s64 = ctx.r24.s64 + -13888;
	// lvx128 v63,r0,r27
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,48
	ctx.r7.s64 = 48;
	// stvlx128 v63,r0,r30
	ea = ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r6,r31,520
	ctx.r6.s64 = ctx.r31.s64 + 520;
	// stvrx128 v63,r30,r11
	ea = ctx.r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r4,r4,-13904
	ctx.r4.s64 = ctx.r4.s64 + -13904;
	// lvx128 v63,r0,r26
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r9,r31,504
	ctx.r9.s64 = ctx.r31.s64 + 504;
	// lvx128 v62,r0,r25
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v62,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// lvx128 v63,r0,r5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvrx128 v62,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r9,r31,536
	ctx.r9.s64 = ctx.r31.s64 + 536;
	// lvx128 v62,r0,r3
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v62,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// addi r5,r31,552
	ctx.r5.s64 = ctx.r31.s64 + 552;
	// stvrx128 v62,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,27,5,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFE0;
	// b 0x82242064
	goto loc_82242064;
loc_82241EE0:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8224206c
	if (!ctx.cr6.eq) goto loc_8224206C;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r23,r1,80
	ctx.r23.s64 = ctx.r1.s64 + 80;
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// lfs f0,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,196(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r31,408
	ctx.r6.s64 = ctx.r31.s64 + 408;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r9,r9,-7476
	ctx.r9.s64 = ctx.r9.s64 + -7476;
	// lfs f12,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r31,424
	ctx.r5.s64 = ctx.r31.s64 + 424;
	// lfs f11,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// addi r29,r9,16
	ctx.r29.s64 = ctx.r9.s64 + 16;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r31,440
	ctx.r4.s64 = ctx.r31.s64 + 440;
	// lfs f13,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r9,32
	ctx.r28.s64 = ctx.r9.s64 + 32;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r27,32
	ctx.r27.s64 = 32;
	// fmuls f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// addi r26,r8,-13840
	ctx.r26.s64 = ctx.r8.s64 + -13840;
	// addi r30,r31,472
	ctx.r30.s64 = ctx.r31.s64 + 472;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r25,-32249
	ctx.r25.s64 = -2113470464;
	// addi r24,r8,-13856
	ctx.r24.s64 = ctx.r8.s64 + -13856;
	// addi r25,r25,-13872
	ctx.r25.s64 = ctx.r25.s64 + -13872;
	// lis r22,-32249
	ctx.r22.s64 = -2113470464;
	// li r8,3
	ctx.r8.s64 = 3;
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lvx128 v63,r0,r7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r22,r22,-13888
	ctx.r22.s64 = ctx.r22.s64 + -13888;
	// stvrx128 v63,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r6,r31,520
	ctx.r6.s64 = ctx.r31.s64 + 520;
	// lvrx128 v62,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lis r21,-32249
	ctx.r21.s64 = -2113470464;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r5,r31,536
	ctx.r5.s64 = ctx.r31.s64 + 536;
	// lvlx128 v63,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvlx128 v63,r9,r27
	temp.u32 = ctx.r9.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r31,488
	ctx.r9.s64 = ctx.r31.s64 + 488;
	// lvrx128 v62,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r26
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r30
	ea = ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r30,r11
	ea = ctx.r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r24
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r9,r31,504
	ctx.r9.s64 = ctx.r31.s64 + 504;
	// lvx128 v62,r0,r25
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r23
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v62,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r9,r21,-13904
	ctx.r9.s64 = ctx.r21.s64 + -13904;
	// lvx128 v62,r0,r22
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v62,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// addi r4,r31,552
	ctx.r4.s64 = ctx.r31.s64 + 552;
	// stvrx128 v62,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,23,9,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFE;
loc_82242064:
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// b 0x822421bc
	goto loc_822421BC;
loc_8224206C:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x822421b4
	if (!ctx.cr6.eq) goto loc_822421B4;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r10,-7380
	ctx.r10.s64 = ctx.r10.s64 + -7380;
	// addi r8,r31,424
	ctx.r8.s64 = ctx.r31.s64 + 424;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// addi r6,r31,440
	ctx.r6.s64 = ctx.r31.s64 + 440;
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// lvrx128 v63,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// li r27,32
	ctx.r27.s64 = 32;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r31,456
	ctx.r5.s64 = ctx.r31.s64 + 456;
	// vor128 v63,v62,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// lis r30,-32249
	ctx.r30.s64 = -2113470464;
	// addi r26,r3,-13840
	ctx.r26.s64 = ctx.r3.s64 + -13840;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// stvlx128 v63,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r25,r30,-13920
	ctx.r25.s64 = ctx.r30.s64 + -13920;
	// stvrx128 v63,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r31,488
	ctx.r30.s64 = ctx.r31.s64 + 488;
	// addi r24,r8,-13936
	ctx.r24.s64 = ctx.r8.s64 + -13936;
	// addi r29,r31,504
	ctx.r29.s64 = ctx.r31.s64 + 504;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r28,r31,520
	ctx.r28.s64 = ctx.r31.s64 + 520;
	// addi r23,r8,-13952
	ctx.r23.s64 = ctx.r8.s64 + -13952;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// addi r22,r8,-13968
	ctx.r22.s64 = ctx.r8.s64 + -13968;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// addi r19,r8,-13984
	ctx.r19.s64 = ctx.r8.s64 + -13984;
	// li r8,3
	ctx.r8.s64 = 3;
	// lvrx128 v63,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// vor128 v63,v62,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r18,r7,-14000
	ctx.r18.s64 = ctx.r7.s64 + -14000;
	// stvrx128 v63,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// li r7,6
	ctx.r7.s64 = 6;
	// lvlx128 v62,r10,r27
	temp.u32 = ctx.r10.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r31,552
	ctx.r10.s64 = ctx.r31.s64 + 552;
	// lvrx128 v63,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v63,v62,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r26
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r25
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r30
	ea = ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r30,r11
	ea = ctx.r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r24
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r29
	ea = ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r29,r11
	ea = ctx.r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r23
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r28
	ea = ctx.r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r28,r11
	ea = ctx.r28.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r22
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r11,r31,408
	ctx.r11.s64 = ctx.r31.s64 + 408;
	// lvx128 v63,r0,r19
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// stvlx128 v63,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r11,r20
	ea = ctx.r11.u32 + ctx.r20.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r11,r31,536
	ctx.r11.s64 = ctx.r31.s64 + 536;
	// lvx128 v63,r0,r18
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r11,r20
	ea = ctx.r11.u32 + ctx.r20.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r6,r11,-80
	ctx.r6.s64 = ctx.r11.s64 + -80;
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// divwu r9,r6,r10
	ctx.r9.u32 = ctx.r6.u32 / ctx.r10.u32;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x82242064
	goto loc_82242064;
loc_822421B4:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822421BC:
	// lwz r9,376(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r5,260
	ctx.r5.s64 = 260;
	// lwz r4,532(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r10,-12836(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12836);
	// addi r11,r11,511
	ctx.r11.s64 = ctx.r11.s64 + 511;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r9,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r9.u32);
	// rlwinm r11,r11,23,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFFFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// rldicr r30,r10,20,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 20) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r25,r11,9,0,22
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// bl 0x8233c048
	ctx.lr = 0x822421FC;
	sub_8233C048(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stb r26,371(r1)
	PPC_STORE_U8(ctx.r1.u32 + 371, ctx.r26.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8224220C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8224220c
	if (!ctx.cr6.eq) goto loc_8224220C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8224225c
	if (ctx.cr6.lt) goto loc_8224225C;
loc_82242240:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x8224225c
	if (ctx.cr6.eq) goto loc_8224225C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82242240
	if (!ctx.cr6.lt) goto loc_82242240;
loc_8224225C:
	// stb r26,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r26.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8224a3a0
	ctx.lr = 0x82242274;
	sub_8224A3A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822422a8
	if (ctx.cr0.eq) goto loc_822422A8;
	// lis r10,640
	ctx.r10.s64 = 41943040;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x822422a8
	if (!ctx.cr6.lt) goto loc_822422A8;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x822422a4
	if (!ctx.cr6.gt) goto loc_822422A4;
	// lis r10,-640
	ctx.r10.s64 = -41943040;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822422a8
	goto loc_822422A8;
loc_822422A4:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_822422A8:
	// addi r11,r25,2048
	ctx.r11.s64 = ctx.r25.s64 + 2048;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r30
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, ctx.xer);
	// ble cr6,0x822422c4
	if (!ctx.cr6.gt) goto loc_822422C4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82242430
	goto loc_82242430;
loc_822422C4:
	// lis r11,-17
	ctx.r11.s64 = -1114112;
	// lwz r9,596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// oris r8,r10,65520
	ctx.r8.u64 = ctx.r10.u64 | 4293918720;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// divdu r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 / ctx.r8.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwimi r9,r11,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// rlwinm r11,r9,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3F;
	// stw r9,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
loc_82242310:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8224232c
	if (ctx.cr6.eq) goto loc_8224232C;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82242330
	if (ctx.cr6.eq) goto loc_82242330;
loc_8224232C:
	// lwz r29,616(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
loc_82242330:
	// li r8,4096
	ctx.r8.s64 = 4096;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x823887d4
	ctx.lr = 0x82242350;
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82242384
	if (!ctx.cr0.eq) goto loc_82242384;
	// lis r4,-18048
	ctx.r4.s64 = -1182793728;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82082c78
	ctx.lr = 0x82242364;
	sub_82082C78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82242374
	if (ctx.cr0.eq) goto loc_82242374;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82242384
	goto loc_82242384;
loc_82242374:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82242384
	if (ctx.cr6.eq) goto loc_82242384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82242384:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// beq cr6,0x82242428
	if (ctx.cr6.eq) goto loc_82242428;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822423a8
	if (!ctx.cr6.eq) goto loc_822423A8;
	// rlwimi r11,r30,30,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x822423ac
	goto loc_822423AC;
loc_822423A8:
	// rlwimi r11,r30,28,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 28) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
loc_822423AC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x82242310
	if (ctx.cr6.lt) goto loc_82242310;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1536
	ctx.r4.s64 = 1536;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823887d4
	ctx.lr = 0x822423D8;
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r3.u32);
	// beq 0x822423f0
	if (ctx.cr0.eq) goto loc_822423F0;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// b 0x82242410
	goto loc_82242410;
loc_822423F0:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// li r3,1536
	ctx.r3.s64 = 1536;
	// bl 0x82082c78
	ctx.lr = 0x822423FC;
	sub_82082C78(ctx, base);
	// stw r3,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82242428
	if (ctx.cr0.eq) goto loc_82242428;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
loc_82242410:
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 608);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 608, ctx.r11.u8);
	// b 0x82242430
	goto loc_82242430;
loc_82242428:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82242430:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82242438"))) PPC_WEAK_FUNC(sub_82242438);
PPC_FUNC_IMPL(__imp__sub_82242438) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r8,596(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// addi r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 + 172;
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// rlwinm r9,r8,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3F;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r8,r8,12,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x3F;
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82242474
	if (!ctx.cr6.eq) goto loc_82242474;
	// lwz r9,384(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// b 0x82242478
	goto loc_82242478;
loc_82242474:
	// lis r9,-16
	ctx.r9.s64 = -1048576;
loc_82242478:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82242490
	if (ctx.cr6.lt) goto loc_82242490;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82242490:
	// addi r10,r8,46
	ctx.r10.s64 = ctx.r8.s64 + 46;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r10,596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// rlwinm r11,r10,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F;
	// rlwinm r9,r10,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// twllei r9,0
	// divwu r8,r11,r9
	ctx.r8.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwimi r10,r11,20,6,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x3F00000) | (ctx.r10.u64 & 0xFFFFFFFFFC0FFFFF);
	// rlwinm. r11,r10,0,6,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r10.u32);
	// bne 0x822424e4
	if (!ctx.cr0.eq) goto loc_822424E4;
	// lbz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 608);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r10,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r10.u32);
	// stb r11,608(r3)
	PPC_STORE_U8(ctx.r3.u32 + 608, ctx.r11.u8);
	// blr 
	return;
loc_822424E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822424F0"))) PPC_WEAK_FUNC(sub_822424F0);
PPC_FUNC_IMPL(__imp__sub_822424F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x822424F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24364(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24364);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,23756
	ctx.r30.s64 = ctx.r3.s64 + 23756;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242524
	if (ctx.cr0.eq) goto loc_82242524;
loc_82242514:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82242860
	ctx.lr = 0x8224251C;
	sub_82242860(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82242854
	goto loc_82242854;
loc_82242524:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r4,r11,23720
	ctx.r4.s64 = ctx.r11.s64 + 23720;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233c048
	ctx.lr = 0x82242538;
	sub_8233C048(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stb r25,371(r1)
	PPC_STORE_U8(ctx.r1.u32 + 371, ctx.r25.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82242548:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82242548
	if (!ctx.cr6.eq) goto loc_82242548;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82242598
	if (ctx.cr6.lt) goto loc_82242598;
loc_8224257C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82242598
	if (ctx.cr6.eq) goto loc_82242598;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8224257c
	if (!ctx.cr6.lt) goto loc_8224257C;
loc_82242598:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x82242514
	if (!ctx.cr6.eq) goto loc_82242514;
	// stb r25,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r25.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82388814
	ctx.lr = 0x822425B4;
	__imp__RtlInitAnsiString(ctx, base);
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,-11676
	ctx.r3.s64 = ctx.r11.s64 + -11676;
	// bl 0x82388a44
	ctx.lr = 0x822425C4;
	__imp__ObCreateSymbolicLink(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82242514
	if (ctx.cr0.lt) goto loc_82242514;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r5,r11,-14204
	ctx.r5.s64 = ctx.r11.s64 + -14204;
	// addi r4,r10,-14196
	ctx.r4.s64 = ctx.r10.s64 + -14196;
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82388e04
	ctx.lr = 0x822425E8;
	__imp__sprintf(ctx, base);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82241cf8
	ctx.lr = 0x822425F8;
	sub_82241CF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82242514
	if (ctx.cr0.lt) goto loc_82242514;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233c048
	ctx.lr = 0x82242610;
	sub_8233C048(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stb r25,371(r1)
	PPC_STORE_U8(ctx.r1.u32 + 371, ctx.r25.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8224261C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8224261c
	if (!ctx.cr6.eq) goto loc_8224261C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8224267c
	if (ctx.cr6.lt) goto loc_8224267C;
loc_82242654:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,46
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 46, ctx.xer);
	// beq cr6,0x8224267c
	if (ctx.cr6.eq) goto loc_8224267C;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x8224267c
	if (ctx.cr6.eq) goto loc_8224267C;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82242654
	if (!ctx.cr6.lt) goto loc_82242654;
loc_8224267C:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x8224268c
	if (ctx.cr6.eq) goto loc_8224268C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8224268C:
	// lwz r10,596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// rlwinm. r10,r10,0,12,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r27,r11,-14188
	ctx.r27.s64 = ctx.r11.s64 + -14188;
	// beq 0x82242770
	if (ctx.cr0.eq) goto loc_82242770;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
loc_822426AC:
	// lbz r11,-17346(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + -17346);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82242514
	if (!ctx.cr0.eq) goto loc_82242514;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82388e04
	ctx.lr = 0x822426D8;
	__imp__sprintf(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,26624
	ctx.r8.s64 = 1744830464;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82249ab8
	ctx.lr = 0x822426F8;
	sub_82249AB8(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82242514
	if (ctx.cr6.eq) goto loc_82242514;
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82242738
	if (!ctx.cr6.eq) goto loc_82242738;
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224272c
	if (ctx.cr6.eq) goto loc_8224272C;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// b 0x82242740
	goto loc_82242740;
loc_8224272C:
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// b 0x82242740
	goto loc_82242740;
loc_82242738:
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r11,r11,65520
	ctx.r11.u64 = ctx.r11.u64 | 4293918720;
loc_82242740:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82249dc8
	ctx.lr = 0x82242754;
	sub_82249DC8(ctx, base);
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x8237ac98
	ctx.lr = 0x8224275C;
	sub_8237AC98(ctx, base);
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822426ac
	if (ctx.cr6.lt) goto loc_822426AC;
loc_82242770:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82242780:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82388e04
	ctx.lr = 0x82242794;
	__imp__sprintf(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8224a4b0
	ctx.lr = 0x822427A0;
	sub_8224A4B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82242780
	if (!ctx.cr0.eq) goto loc_82242780;
	// stw r25,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r25.u32);
	// addi r31,r30,348
	ctx.r31.s64 = ctx.r30.s64 + 348;
	// stw r25,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r25.u32);
	// bl 0x82246e60
	ctx.lr = 0x822427D0;
	sub_82246E60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r3.u32);
	// beq 0x82242514
	if (ctx.cr0.eq) goto loc_82242514;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r25.u32);
	// stw r25,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r25.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x822427F4;
	sub_8233EAF0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8224a0b8
	ctx.lr = 0x8224280C;
	sub_8224A0B8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// bl 0x82247250
	ctx.lr = 0x82242818;
	sub_82247250(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82388e84
	ctx.lr = 0x82242820;
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// lbz r10,600(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 600);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 380, ctx.r11.u32);
	// lwz r9,596(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// stw r25,584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 584, ctx.r25.u32);
	// rlwinm r9,r9,0,12,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0FFFFF;
	// stw r9,596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 596, ctx.r9.u32);
	// lbz r11,389(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 389);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwimi r10,r11,2,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stb r10,600(r30)
	PPC_STORE_U8(ctx.r30.u32 + 600, ctx.r10.u8);
loc_82242854:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224285C"))) PPC_WEAK_FUNC(sub_8224285C);
PPC_FUNC_IMPL(__imp__sub_8224285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242860"))) PPC_WEAK_FUNC(sub_82242860);
PPC_FUNC_IMPL(__imp__sub_82242860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82242868;
	__savegprlr_23(ctx, base);
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24364(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24364);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r3,23756
	ctx.r31.s64 = ctx.r3.s64 + 23756;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82242c18
	if (ctx.cr0.eq) goto loc_82242C18;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242bf0
	if (ctx.cr6.eq) goto loc_82242BF0;
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r28,-1
	ctx.r28.s64 = -1;
	// beq 0x822429e0
	if (ctx.cr0.eq) goto loc_822429E0;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822428ac
	if (ctx.cr0.eq) goto loc_822428AC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82247250
	ctx.lr = 0x822428AC;
	sub_82247250(ctx, base);
loc_822428AC:
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,588(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// bl 0x82388ae4
	ctx.lr = 0x822428B8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822428cc
	if (!ctx.cr6.eq) goto loc_822428CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// b 0x822428d4
	goto loc_822428D4;
loc_822428CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
loc_822428D4:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822428f0
	if (ctx.cr6.eq) goto loc_822428F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82231310
	ctx.lr = 0x822428F0;
	sub_82231310(ctx, base);
loc_822428F0:
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r10,r10,-24064
	ctx.r10.s64 = ctx.r10.s64 + -24064;
	// addi r30,r11,-7244
	ctx.r30.s64 = ctx.r11.s64 + -7244;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82242908:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82242908
	if (!ctx.cr0.eq) goto loc_82242908;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,6144
	ctx.r10.s64 = 6144;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// blt cr6,0x82242940
	if (ctx.cr6.lt) goto loc_82242940;
	// li r10,14
	ctx.r10.s64 = 14;
loc_82242940:
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// lwz r6,596(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// lhz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r5,380(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r6,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0x3F;
	// rlwinm r4,r4,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x4;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-25768
	ctx.r7.s64 = -1688731648;
	// lwzx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r24,r6,4,30,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x3;
	// ori r25,r7,59162
	ctx.r25.u64 = ctx.r7.u64 | 59162;
	// stw r5,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r5.u32);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// stw r27,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r27.u32);
	// rlwinm r23,r9,9,0,22
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r7,r31,348
	ctx.r7.s64 = ctx.r31.s64 + 348;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bl 0x8224a0b8
	ctx.lr = 0x822429B0;
	sub_8224A0B8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82242438
	ctx.lr = 0x822429BC;
	sub_82242438(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x82247250
	ctx.lr = 0x822429C8;
	sub_82247250(ctx, base);
	// b 0x822429d4
	goto loc_822429D4;
loc_822429CC:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82247328
	ctx.lr = 0x822429D4;
	sub_82247328(ctx, base);
loc_822429D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,6144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6144, ctx.xer);
	// bne cr6,0x822429cc
	if (!ctx.cr6.eq) goto loc_822429CC;
loc_822429E0:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// rlwinm. r11,r11,0,12,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242a58
	if (ctx.cr0.eq) goto loc_82242A58;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
loc_822429F8:
	// lbz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 608);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242a28
	if (!ctx.cr0.eq) goto loc_82242A28;
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// rlwinm r11,r11,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82242a28
	if (ctx.cr6.lt) goto loc_82242A28;
	// ble cr6,0x82242a20
	if (!ctx.cr6.gt) goto loc_82242A20;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x82242a2c
	goto loc_82242A2C;
loc_82242A20:
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// b 0x82242a2c
	goto loc_82242A2C;
loc_82242A28:
	// lwz r4,168(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
loc_82242A2C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x82249dc8
	ctx.lr = 0x82242A3C;
	sub_82249DC8(ctx, base);
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x8237ac98
	ctx.lr = 0x82242A44;
	sub_8237AC98(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822429f8
	if (ctx.cr6.lt) goto loc_822429F8;
loc_82242A58:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82388e84
	ctx.lr = 0x82242A60;
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// srawi. r11,r11,29
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 29;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242a78
	if (!ctx.cr0.eq) goto loc_82242A78;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8884
	ctx.r10.u64 = ctx.r10.u64 | 8884;
	// b 0x82242a9c
	goto loc_82242A9C;
loc_82242A78:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82242a8c
	if (!ctx.cr6.eq) goto loc_82242A8C;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8885
	ctx.r10.u64 = ctx.r10.u64 | 8885;
	// b 0x82242a9c
	goto loc_82242A9C;
loc_82242A8C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82242aa0
	if (!ctx.cr6.eq) goto loc_82242AA0;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8886
	ctx.r10.u64 = ctx.r10.u64 | 8886;
loc_82242A9C:
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_82242AA0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// beq cr6,0x82242ae0
	if (ctx.cr6.eq) goto loc_82242AE0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82242ae0
	if (ctx.cr6.eq) goto loc_82242AE0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82242b00
	if (!ctx.cr6.eq) goto loc_82242B00;
	// li r10,400
	ctx.r10.s64 = 400;
	// li r11,224
	ctx.r11.s64 = 224;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// b 0x82242b00
	goto loc_82242B00;
loc_82242AE0:
	// lhz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 368);
	// lhz r10,370(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 370);
	// lhz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 168);
	// lhz r8,170(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 170);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
loc_82242B00:
	// bl 0x82388dc4
	ctx.lr = 0x82242B04;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// rlwinm. r8,r11,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// beq 0x82242b28
	if (ctx.cr0.eq) goto loc_82242B28;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
loc_82242B28:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82242b38
	if (ctx.cr0.eq) goto loc_82242B38;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
loc_82242B38:
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242b48
	if (ctx.cr0.eq) goto loc_82242B48;
	// lwz r4,592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// b 0x82242b4c
	goto loc_82242B4C;
loc_82242B48:
	// addi r4,r26,15392
	ctx.r4.s64 = ctx.r26.s64 + 15392;
loc_82242B4C:
	// lbz r11,101(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82242b70
	if (!ctx.cr6.eq) goto loc_82242B70;
	// ori r11,r9,4
	ctx.r11.u64 = ctx.r9.u64 | 4;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// bl 0x8223b318
	ctx.lr = 0x82242B6C;
	sub_8223B318(ctx, base);
	// b 0x82242b74
	goto loc_82242B74;
loc_82242B70:
	// bl 0x8223b280
	ctx.lr = 0x82242B74;
	sub_8223B280(ctx, base);
loc_82242B74:
	// lwz r30,596(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// li r5,56
	ctx.r5.s64 = 56;
	// rlwinm. r11,r30,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r26,14112
	ctx.r4.s64 = ctx.r26.s64 + 14112;
	// bne 0x82242b90
	if (!ctx.cr0.eq) goto loc_82242B90;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_82242B90:
	// bl 0x8233e4e0
	ctx.lr = 0x82242B94;
	sub_8233E4E0(ctx, base);
	// lbz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 608);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242bb0
	if (ctx.cr0.eq) goto loc_82242BB0;
	// rlwinm r10,r30,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0x3F;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// b 0x82242bb8
	goto loc_82242BB8;
loc_82242BB0:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
loc_82242BB8:
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r7,r31,348
	ctx.r7.s64 = ctx.r31.s64 + 348;
	// stw r27,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r27.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8224a0b8
	ctx.lr = 0x82242BDC;
	sub_8224A0B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x82247250
	ctx.lr = 0x82242BE8;
	sub_82247250(ctx, base);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x82246e18
	ctx.lr = 0x82242BF0;
	sub_82246E18(ctx, base);
loc_82242BF0:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
loc_82242BF8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82242c18
	if (ctx.cr6.eq) goto loc_82242C18;
	// bl 0x82246e18
	ctx.lr = 0x82242C08;
	sub_82246E18(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,41
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 41, ctx.xer);
	// blt cr6,0x82242bf8
	if (ctx.cr6.lt) goto loc_82242BF8;
loc_82242C18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242c3c
	if (ctx.cr6.eq) goto loc_82242C3C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242c68
	if (ctx.cr6.eq) goto loc_82242C68;
	// b 0x82242c54
	goto loc_82242C54;
loc_82242C3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1912);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242c68
	if (ctx.cr6.eq) goto loc_82242C68;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82242C54:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,-14180
	ctx.r4.s64 = ctx.r10.s64 + -14180;
	// bctrl 
	ctx.lr = 0x82242C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242C68:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82241bf0
	ctx.lr = 0x82242C70;
	sub_82241BF0(ctx, base);
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r3,r11,-11676
	ctx.r3.s64 = ctx.r11.s64 + -11676;
	// bl 0x82388a54
	ctx.lr = 0x82242C7C;
	__imp__ObDeleteSymbolicLink(ctx, base);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// addi r6,r8,-17345
	ctx.r6.s64 = ctx.r8.s64 + -17345;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stb r27,-17345(r8)
	PPC_STORE_U8(ctx.r8.u32 + -17345, ctx.r27.u8);
	// stb r27,23717(r7)
	PPC_STORE_U8(ctx.r7.u32 + 23717, ctx.r27.u8);
	// stb r27,-1(r6)
	PPC_STORE_U8(ctx.r6.u32 + -1, ctx.r27.u8);
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82242CA8"))) PPC_WEAK_FUNC(sub_82242CA8);
PPC_FUNC_IMPL(__imp__sub_82242CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82242CB0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,23756
	ctx.r30.s64 = ctx.r3.s64 + 23756;
	// bl 0x822389e8
	ctx.lr = 0x82242CD0;
	sub_822389E8(ctx, base);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82242df0
	if (ctx.cr6.eq) goto loc_82242DF0;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82242cfc
	if (ctx.cr6.eq) goto loc_82242CFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// bl 0x82239148
	ctx.lr = 0x82242CF8;
	sub_82239148(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
loc_82242CFC:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82242d2c
	if (ctx.cr6.eq) goto loc_82242D2C;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82242D20;
	sub_822394D8(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82242D2C:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82242d64
	if (ctx.cr6.eq) goto loc_82242D64;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82242D50;
	sub_822394D8(ctx, base);
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,4095
	ctx.r12.u64 = ctx.r12.u64 | 4095;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82242D64:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82242dac
	if (ctx.cr6.eq) goto loc_82242DAC;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82242D94;
	sub_822394D8(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82242DAC:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82242df0
	if (ctx.cr6.eq) goto loc_82242DF0;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82242DD8;
	sub_822394D8(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,21,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82242DF0:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82242e40
	if (ctx.cr6.eq) goto loc_82242E40;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82242e40
	if (ctx.cr6.eq) goto loc_82242E40;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82242E28;
	sub_822394D8(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_82242E40:
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82242e78
	if (ctx.cr6.eq) goto loc_82242E78;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82242e78
	if (ctx.cr6.eq) goto loc_82242E78;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82242E6C;
	sub_822394D8(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_82242E78:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 604);
	// addi r24,r11,18956
	ctx.r24.s64 = ctx.r11.s64 + 18956;
	// srawi. r11,r10,29
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 29;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242ea0
	if (!ctx.cr0.eq) goto loc_82242EA0;
	// lis r25,1792
	ctx.r25.s64 = 117440512;
	// addi r26,r24,1476
	ctx.r26.s64 = ctx.r24.s64 + 1476;
	// li r29,525
	ctx.r29.s64 = 525;
	// ori r25,r25,21
	ctx.r25.u64 = ctx.r25.u64 | 21;
	// b 0x82242ee4
	goto loc_82242EE4;
loc_82242EA0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82242ebc
	if (!ctx.cr6.eq) goto loc_82242EBC;
	// lis r25,1792
	ctx.r25.s64 = 117440512;
	// addi r26,r24,3612
	ctx.r26.s64 = ctx.r24.s64 + 3612;
	// li r29,933
	ctx.r29.s64 = 933;
	// ori r25,r25,19
	ctx.r25.u64 = ctx.r25.u64 | 19;
	// b 0x82242ee4
	goto loc_82242EE4;
loc_82242EBC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82242ed8
	if (!ctx.cr6.eq) goto loc_82242ED8;
	// lis r25,1792
	ctx.r25.s64 = 117440512;
	// addi r26,r24,7348
	ctx.r26.s64 = ctx.r24.s64 + 7348;
	// li r29,210
	ctx.r29.s64 = 210;
	// ori r25,r25,15
	ctx.r25.u64 = ctx.r25.u64 | 15;
	// b 0x82242ee4
	goto loc_82242EE4;
loc_82242ED8:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82242EE4:
	// addi r4,r29,5
	ctx.r4.s64 = ctx.r29.s64 + 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fc30
	ctx.lr = 0x82242EF0;
	sub_8222FC30(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,768
	ctx.r10.s64 = 768;
	// ori r9,r11,15104
	ctx.r9.u64 = ctx.r11.u64 | 15104;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// li r22,0
	ctx.r22.s64 = 0;
	// rlwimi r9,r11,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r29,18
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFF;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwu r10,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r29.u32 = ea;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x82242F48;
	sub_8233E4E0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r3,r27,r29
	ctx.r3.u64 = ctx.r27.u64 + ctx.r29.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82242f64
	if (!ctx.cr6.gt) goto loc_82242F64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82242F64;
	sub_82231210(ctx, base);
loc_82242F64:
	// lis r11,-16368
	ctx.r11.s64 = -1072693248;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// li r9,15
	ctx.r9.s64 = 15;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwu r9,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r29.u32 = ea;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x82242F94;
	sub_8233E4E0(ctx, base);
	// addi r11,r29,60
	ctx.r11.s64 = ctx.r29.s64 + 60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// oris r9,r25,4096
	ctx.r9.u64 = ctx.r25.u64 | 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82242fd0
	if (!ctx.cr6.gt) goto loc_82242FD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82242FD0;
	sub_82231210(ctx, base);
loc_82242FD0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// li r29,8978
	ctx.r29.s64 = 8978;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r10,r6,8708
	ctx.r10.u64 = ctx.r6.u64 | 8708;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r27,0
	ctx.r27.s64 = 0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// ori r11,r27,65535
	ctx.r11.u64 = ctx.r27.u64 | 65535;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// li r26,8205
	ctx.r26.s64 = 8205;
	// li r25,8704
	ctx.r25.s64 = 8704;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// ble cr6,0x82243078
	if (!ctx.cr6.gt) goto loc_82243078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82243078;
	sub_82231210(ctx, base);
loc_82243078:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r11,r11,18432
	ctx.r11.u64 = ctx.r11.u64 | 18432;
	// addi r29,r30,392
	ctx.r29.s64 = ctx.r30.s64 + 392;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lhz r10,372(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 372);
	// rlwinm r11,r11,0,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FC;
	// rlwinm r10,r10,17,0,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFC00000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// ori r11,r11,18434
	ctx.r11.u64 = ctx.r11.u64 | 18434;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwimi r11,r9,24,1,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0x7FF80000) | (ctx.r11.u64 & 0xFFFFFFFF8007FFFF);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// lwz r8,604(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 604);
	// lwz r10,584(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// rlwinm r10,r10,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4;
	// rlwinm r27,r11,2,30,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lwzx r25,r10,r30
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// clrlwi r23,r27,31
	ctx.r23.u64 = ctx.r27.u32 & 0x1;
	// rlwinm r10,r27,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x1;
	// mulli r11,r23,56
	ctx.r11.s64 = ctx.r23.s64 * 56;
	// addi r11,r11,527
	ctx.r11.s64 = ctx.r11.s64 + 527;
	// mulli r9,r10,1536
	ctx.r9.s64 = ctx.r10.s64 * 1536;
	// rlwinm r10,r11,0,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// srawi. r11,r8,29
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 29;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r10,r25
	ctx.r28.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bne 0x82243144
	if (!ctx.cr0.eq) goto loc_82243144;
loc_82243130:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// andi. r9,r9,49400
	ctx.r9.u64 = ctx.r9.u64 & 49400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// oris r9,r9,19200
	ctx.r9.u64 = ctx.r9.u64 | 1258291200;
	// ori r9,r9,1536
	ctx.r9.u64 = ctx.r9.u64 | 1536;
	// b 0x82243164
	goto loc_82243164;
loc_82243144:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82243130
	if (ctx.cr6.eq) goto loc_82243130;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822431a0
	if (!ctx.cr6.eq) goto loc_822431A0;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// andi. r9,r9,49400
	ctx.r9.u64 = ctx.r9.u64 & 49400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// oris r9,r9,19200
	ctx.r9.u64 = ctx.r9.u64 | 1258291200;
	// ori r9,r9,2560
	ctx.r9.u64 = ctx.r9.u64 | 2560;
loc_82243164:
	// rlwinm r11,r28,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0xFFF;
	// lwz r8,388(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// rlwinm r10,r28,0,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1FFFFFFC;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// lis r7,16384
	ctx.r7.s64 = 1073741824;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,75
	ctx.r10.s64 = 75;
	// rlwimi r7,r11,30,2,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x3FFFFFFF) | (ctx.r7.u64 & 0xFFFFFFFFC0000000);
	// lis r11,19200
	ctx.r11.s64 = 1258291200;
	// rlwimi r8,r10,24,0,8
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF800000) | (ctx.r8.u64 & 0xFFFFFFFF007FFFFF);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
loc_822431A0:
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fc30
	ctx.lr = 0x822431AC;
	sub_8222FC30(ctx, base);
	// lis r11,47
	ctx.r11.s64 = 3080192;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// li r5,192
	ctx.r5.s64 = 192;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x822431CC;
	sub_8233E4E0(ctx, base);
	// addi r11,r29,192
	ctx.r11.s64 = ctx.r29.s64 + 192;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lbz r11,608(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 608);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822431ec
	if (ctx.cr0.eq) goto loc_822431EC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// bl 0x82247250
	ctx.lr = 0x822431EC;
	sub_82247250(ctx, base);
loc_822431EC:
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// rotlwi r11,r11,9
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 9);
	// addi r7,r10,-7244
	ctx.r7.s64 = ctx.r10.s64 + -7244;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82243200:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82243200
	if (!ctx.cr0.eq) goto loc_82243200;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,6144
	ctx.r8.s64 = 6144;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divwu r11,r11,r8
	ctx.r11.u32 = ctx.r11.u32 / ctx.r8.u32;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// blt cr6,0x8224323c
	if (ctx.cr6.lt) goto loc_8224323C;
	// li r24,14
	ctx.r24.s64 = 14;
loc_8224323C:
	// lwz r11,584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// lis r9,-25768
	ctx.r9.s64 = -1688731648;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// rlwinm r10,r28,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0xFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r8,596(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// ori r7,r9,59162
	ctx.r7.u64 = ctx.r9.u64 | 59162;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r11,r11,2,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r8,r8,4,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x3;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r28,3
	ctx.r10.u64 = ctx.r28.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,10392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10392, ctx.r10.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// ble cr6,0x822432a8
	if (!ctx.cr6.gt) goto loc_822432A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x822432A8;
	sub_82231210(ctx, base);
loc_822432A8:
	// li r11,8198
	ctx.r11.s64 = 8198;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13888);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r11,13888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13888, ctx.r11.u32);
	// lwz r29,376(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
loc_822432D0:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822432e8
	if (!ctx.cr6.gt) goto loc_822432E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x822432E8;
	sub_82231210(ctx, base);
loc_822432E8:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r29,65535
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 65535, ctx.xer);
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ble cr6,0x8224330c
	if (!ctx.cr6.gt) goto loc_8224330C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
loc_8224330C:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// li r8,129
	ctx.r8.s64 = 129;
	// ori r9,r9,13825
	ctx.r9.u64 = ctx.r9.u64 | 13825;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// subf. r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x8224333c
	if (ctx.cr0.eq) goto loc_8224333C;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// b 0x822432d0
	goto loc_822432D0;
loc_8224333C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r22,10392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10392, ctx.r22.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82243354
	if (!ctx.cr6.gt) goto loc_82243354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82243354;
	sub_82231210(ctx, base);
loc_82243354:
	// li r11,8198
	ctx.r11.s64 = 8198;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// lwz r10,13888(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13888);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r10,13888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13888, ctx.r10.u32);
	// ble cr6,0x82243390
	if (!ctx.cr6.gt) goto loc_82243390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x8224338C;
	sub_82231210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82243390:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r10,r10,17920
	ctx.r10.u64 = ctx.r10.u64 | 17920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r11,r11,65024
	ctx.r11.u64 = ctx.r11.u64 | 4261412864;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r29,11036(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// lwz r26,588(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 588);
	// stw r29,11056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11056, ctx.r29.u32);
	// bl 0x82231210
	ctx.lr = 0x822433F8;
	sub_82231210(ctx, base);
	// stw r29,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822389e8
	ctx.lr = 0x82243410;
	sub_822389E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822389e8
	ctx.lr = 0x82243424;
	sub_822389E8(ctx, base);
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// clrlwi r28,r27,30
	ctx.r28.u64 = ctx.r27.u32 & 0x3;
	// rlwimi r11,r27,28,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 28) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// addi r29,r25,16
	ctx.r29.s64 = ctx.r25.s64 + 16;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r11,596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 596, ctx.r11.u32);
	// beq cr6,0x82243454
	if (ctx.cr6.eq) goto loc_82243454;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r4,r31,14112
	ctx.r4.s64 = ctx.r31.s64 + 14112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82243450;
	sub_8233E4E0(ctx, base);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
loc_82243454:
	// subf r11,r25,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r25.s64;
	// rlwinm. r10,r27,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,511
	ctx.r11.s64 = ctx.r11.s64 + 511;
	// rlwinm r11,r11,0,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// beq 0x822434a4
	if (ctx.cr0.eq) goto loc_822434A4;
	// lbz r11,600(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 600);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// beq 0x8224348c
	if (ctx.cr0.eq) goto loc_8224348C;
	// bl 0x8223b318
	ctx.lr = 0x82243488;
	sub_8223B318(ctx, base);
	// b 0x82243490
	goto loc_82243490;
loc_8224348C:
	// bl 0x8223b280
	ctx.lr = 0x82243490;
	sub_8223B280(ctx, base);
loc_82243490:
	// li r5,1536
	ctx.r5.s64 = 1536;
	// lwz r4,592(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x822434A0;
	sub_8233E4E0(ctx, base);
	// addi r31,r31,1536
	ctx.r31.s64 = ctx.r31.s64 + 1536;
loc_822434A4:
	// lwz r8,584(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// mulli r10,r24,12
	ctx.r10.s64 = ctx.r24.s64 * 12;
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lwz r7,596(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// lhz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lbz r6,608(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 608);
	// rlwinm r8,r8,2,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r28,26,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 26) & 0xFC000000;
	// rlwinm r29,r11,9,0,22
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// rlwinm. r6,r6,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// clrlwi r11,r10,2
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// subf r10,r8,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r8.s64;
	// stw r11,596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 596, ctx.r11.u32);
	// rlwinm r11,r10,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
	// beq 0x82243588
	if (ctx.cr0.eq) goto loc_82243588;
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// stw r22,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r22.u32);
	// stw r11,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r11.u32);
	// bl 0x82388ae4
	ctx.lr = 0x82243504;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82243518
	if (!ctx.cr6.eq) goto loc_82243518;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// b 0x82243520
	goto loc_82243520;
loc_82243518:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
loc_82243520:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8224353c
	if (ctx.cr6.eq) goto loc_8224353C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82231310
	ctx.lr = 0x8224353C;
	sub_82231310(ctx, base);
loc_8224353C:
	// lwz r10,596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// addi r7,r30,348
	ctx.r7.s64 = ctx.r30.s64 + 348;
	// lwz r11,584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r11,r11,2,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x8224a0b8
	ctx.lr = 0x82243570;
	sub_8224A0B8(ctx, base);
	// lbz r11,608(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 608);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,608(r30)
	PPC_STORE_U8(ctx.r30.u32 + 608, ctx.r11.u8);
	// bl 0x82242438
	ctx.lr = 0x82243588;
	sub_82242438(ctx, base);
loc_82243588:
	// lbz r10,608(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 608);
	// lwz r11,584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,608(r30)
	PPC_STORE_U8(ctx.r30.u32 + 608, ctx.r10.u8);
	// stw r11,584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 584, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822435A8"))) PPC_WEAK_FUNC(sub_822435A8);
PPC_FUNC_IMPL(__imp__sub_822435A8) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lbz r11,23717(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23717);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224367c
	if (ctx.cr0.eq) goto loc_8224367C;
	// lbz r11,24364(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24364);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243650
	if (!ctx.cr0.eq) goto loc_82243650;
	// bl 0x822424f0
	ctx.lr = 0x822435D4;
	sub_822424F0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r5,r9,-14160
	ctx.r5.s64 = ctx.r9.s64 + -14160;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r4,r8,-14128
	ctx.r4.s64 = ctx.r8.s64 + -14128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388e04
	ctx.lr = 0x82243600;
	__imp__sprintf(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82243624
	if (ctx.cr6.eq) goto loc_82243624;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224367c
	if (ctx.cr6.eq) goto loc_8224367C;
	// b 0x8224363c
	goto loc_8224363C;
loc_82243624:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1912);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224367c
	if (ctx.cr6.eq) goto loc_8224367C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_8224363C:
	// li r3,27
	ctx.r3.s64 = 27;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8224364C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8224367c
	goto loc_8224367C;
loc_82243650:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17345
	ctx.r11.s64 = ctx.r11.s64 + -17345;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8224366c
	if (ctx.cr0.eq) goto loc_8224366C;
	// bl 0x82242860
	ctx.lr = 0x82243668;
	sub_82242860(ctx, base);
	// b 0x8224367c
	goto loc_8224367C;
loc_8224366C:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224367c
	if (ctx.cr0.eq) goto loc_8224367C;
	// bl 0x82242ca8
	ctx.lr = 0x8224367C;
	sub_82242CA8(ctx, base);
loc_8224367C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224368C"))) PPC_WEAK_FUNC(sub_8224368C);
PPC_FUNC_IMPL(__imp__sub_8224368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243690"))) PPC_WEAK_FUNC(sub_82243690);
PPC_FUNC_IMPL(__imp__sub_82243690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82243698;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r31,r4,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// subf r10,r31,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r31.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// subf r11,r9,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r9.s64;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// subf r27,r28,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r28.s64;
	// bl 0x8222fc30
	ctx.lr = 0x822436DC;
	sub_8222FC30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82243760
	if (ctx.cr0.eq) goto loc_82243760;
	// addi r11,r31,4096
	ctx.r11.s64 = ctx.r31.s64 + 4096;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// beq cr6,0x82243720
	if (ctx.cr6.eq) goto loc_82243720;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8233eaf0
	ctx.lr = 0x8224371C;
	sub_8233EAF0(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
loc_82243720:
	// rlwinm r30,r29,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x82243734;
	sub_8233E4E0(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82243758
	if (ctx.cr6.eq) goto loc_82243758;
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8233eaf0
	ctx.lr = 0x82243754;
	sub_8233EAF0(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
loc_82243758:
	// stw r31,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82243760:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243768"))) PPC_WEAK_FUNC(sub_82243768);
PPC_FUNC_IMPL(__imp__sub_82243768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82243770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82243798
	if (!ctx.cr6.gt) goto loc_82243798;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231210
	ctx.lr = 0x82243798;
	sub_82231210(ctx, base);
loc_82243798:
	// lwz r11,13068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13068);
	// addi r10,r29,3072
	ctx.r10.s64 = ctx.r29.s64 + 3072;
	// oris r11,r11,49158
	ctx.r11.u64 = ctx.r11.u64 | 3221618688;
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// ori r11,r11,22016
	ctx.r11.u64 = ctx.r11.u64 | 22016;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r9,0,3,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFF000;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r9,0,3,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFF000;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243828"))) PPC_WEAK_FUNC(sub_82243828);
PPC_FUNC_IMPL(__imp__sub_82243828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82243830;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,22144
	ctx.r3.s64 = ctx.r3.s64 + 22144;
	// bl 0x8233eaf0
	ctx.lr = 0x82243848;
	sub_8233EAF0(ctx, base);
	// addi r30,r31,22200
	ctx.r30.s64 = ctx.r31.s64 + 22200;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x8224385C;
	sub_8233EAF0(ctx, base);
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r29,r11,262
	ctx.r29.u64 = ctx.r11.u64 | 262;
	// lwz r11,22072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22072);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x822438a8
	if (ctx.cr6.eq) goto loc_822438A8;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82243880;
	sub_8233EAF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,23736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23736, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b458
	ctx.lr = 0x82243894;
	sub_8223B458(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234750
	ctx.lr = 0x822438A0;
	sub_82234750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x822438A8;
	sub_82231210(ctx, base);
loc_822438A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822438B4"))) PPC_WEAK_FUNC(sub_822438B4);
PPC_FUNC_IMPL(__imp__sub_822438B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822438B8"))) PPC_WEAK_FUNC(sub_822438B8);
PPC_FUNC_IMPL(__imp__sub_822438B8) {
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
	// lwz r4,22072(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22072);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82234750
	ctx.lr = 0x822438D4;
	sub_82234750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,22088(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22088);
	// lwz r5,22080(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22080);
	// lwz r4,22076(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22076);
	// bl 0x82241518
	ctx.lr = 0x822438E8;
	sub_82241518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,22092(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22092);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,22072(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22072);
	// bl 0x822347f8
	ctx.lr = 0x822438FC;
	sub_822347F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82243904;
	sub_82231210(ctx, base);
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

__attribute__((alias("__imp__sub_82243918"))) PPC_WEAK_FUNC(sub_82243918);
PPC_FUNC_IMPL(__imp__sub_82243918) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82247340
	ctx.lr = 0x82243934;
	sub_82247340(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,22068(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22068);
	// sradi r11,r11,10
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 10;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
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

__attribute__((alias("__imp__sub_8224395C"))) PPC_WEAK_FUNC(sub_8224395C);
PPC_FUNC_IMPL(__imp__sub_8224395C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243960"))) PPC_WEAK_FUNC(sub_82243960);
PPC_FUNC_IMPL(__imp__sub_82243960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82243968;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82243988
	if (!ctx.cr6.gt) goto loc_82243988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82243988;
	sub_82231210(ctx, base);
loc_82243988:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// ori r6,r6,8708
	ctx.r6.u64 = ctx.r6.u64 | 8708;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r29,8978
	ctx.r29.s64 = 8978;
	// li r11,8205
	ctx.r11.s64 = 8205;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// ble cr6,0x82243a28
	if (!ctx.cr6.gt) goto loc_82243A28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82243A28;
	sub_82231210(ctx, base);
loc_82243A28:
	// li r11,8452
	ctx.r11.s64 = 8452;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,8706
	ctx.r11.s64 = 8706;
	// li r9,8705
	ctx.r9.s64 = 8705;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r7,8962
	ctx.r7.s64 = 8962;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,8712
	ctx.r30.s64 = 8712;
	// li r29,4
	ctx.r29.s64 = 4;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r28,8707
	ctx.r28.s64 = 8707;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r27,8578
	ctx.r27.s64 = 8578;
	// li r26,-1
	ctx.r26.s64 = -1;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243AB4"))) PPC_WEAK_FUNC(sub_82243AB4);
PPC_FUNC_IMPL(__imp__sub_82243AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243AB8"))) PPC_WEAK_FUNC(sub_82243AB8);
PPC_FUNC_IMPL(__imp__sub_82243AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x82243AC0;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
	// addi r8,r7,7
	ctx.r8.s64 = ctx.r7.s64 + 7;
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// addi r7,r25,7
	ctx.r7.s64 = ctx.r25.s64 + 7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r29,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r29.u32);
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// rlwinm r20,r8,0,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r19,r7,0,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82243B20:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82243b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82243B20;
	// lis r5,10280
	ctx.r5.s64 = 673710080;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,688
	ctx.r8.s64 = ctx.r1.s64 + 688;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,262
	ctx.r5.u64 = ctx.r5.u64 | 262;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82237148
	ctx.lr = 0x82243B50;
	sub_82237148(ctx, base);
	// lwz r21,12808(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82243b64
	if (ctx.cr6.eq) goto loc_82243B64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8222f080
	ctx.lr = 0x82243B64;
	sub_8222F080(ctx, base);
loc_82243B64:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222d188
	ctx.lr = 0x82243B70;
	sub_8222D188(ctx, base);
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
	// addi r28,r31,12792
	ctx.r28.s64 = ctx.r31.s64 + 12792;
loc_82243B80:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82243b94
	if (ctx.cr6.eq) goto loc_82243B94;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8222f080
	ctx.lr = 0x82243B94;
	sub_8222F080(ctx, base);
loc_82243B94:
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// stwu r8,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cdf8
	ctx.lr = 0x82243BA8;
	sub_8222CDF8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82243b80
	if (ctx.cr6.lt) goto loc_82243B80;
	// lwz r11,10688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10688);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// rldicr r18,r10,35,63
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10688, ctx.r11.u32);
	// clrlwi r17,r9,31
	ctx.r17.u64 = ctx.r9.u32 & 0x1;
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// or r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 | ctx.r18.u64;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82243d00
	if (ctx.cr6.eq) goto loc_82243D00;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82243c0c
	if (ctx.cr6.eq) goto loc_82243C0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// bl 0x82239148
	ctx.lr = 0x82243C08;
	sub_82239148(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
loc_82243C0C:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82243c3c
	if (ctx.cr6.eq) goto loc_82243C3C;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82243C30;
	sub_822394D8(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82243C3C:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82243c74
	if (ctx.cr6.eq) goto loc_82243C74;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82243C60;
	sub_822394D8(ctx, base);
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,4095
	ctx.r12.u64 = ctx.r12.u64 | 4095;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82243C74:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82243cbc
	if (ctx.cr6.eq) goto loc_82243CBC;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82243CA4;
	sub_822394D8(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82243CBC:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82243d00
	if (ctx.cr6.eq) goto loc_82243D00;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82243CE8;
	sub_822394D8(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,21,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82243D00:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82243d50
	if (ctx.cr6.eq) goto loc_82243D50;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82243d50
	if (ctx.cr6.eq) goto loc_82243D50;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82243D38;
	sub_822394D8(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_82243D50:
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82243d88
	if (ctx.cr6.eq) goto loc_82243D88;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82243d88
	if (ctx.cr6.eq) goto loc_82243D88;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82243D7C;
	sub_822394D8(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_82243D88:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82243da4
	if (!ctx.cr6.gt) goto loc_82243DA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82243DA0;
	sub_82231210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82243DA4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// li r4,27
	ctx.r4.s64 = 27;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8222fc30
	ctx.lr = 0x82243DC8;
	sub_8222FC30(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,17048
	ctx.r28.s64 = ctx.r11.s64 + 17048;
	// bne 0x82243de0
	if (!ctx.cr0.eq) goto loc_82243DE0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82243e1c
	goto loc_82243E1C;
loc_82243DE0:
	// lis r11,-16359
	ctx.r11.s64 = -1072103424;
	// li r9,24
	ctx.r9.s64 = 24;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// addi r4,r28,-96
	ctx.r4.s64 = ctx.r28.s64 + -96;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x82243E10;
	sub_8233E4E0(ctx, base);
	// addi r10,r30,96
	ctx.r10.s64 = ctx.r30.s64 + 96;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82243E1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243e38
	if (ctx.cr0.eq) goto loc_82243E38;
	// addi r5,r28,-160
	ctx.r5.s64 = ctx.r28.s64 + -160;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243690
	ctx.lr = 0x82243E38;
	sub_82243690(ctx, base);
loc_82243E38:
	// li r4,432
	ctx.r4.s64 = 432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fc30
	ctx.lr = 0x82243E44;
	sub_8222FC30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82243e54
	if (!ctx.cr0.eq) goto loc_82243E54;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82243e90
	goto loc_82243E90;
loc_82243E54:
	// lis r11,-15954
	ctx.r11.s64 = -1045561344;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// li r9,429
	ctx.r9.s64 = 429;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r4,r28,192
	ctx.r4.s64 = ctx.r28.s64 + 192;
	// li r5,1716
	ctx.r5.s64 = 1716;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x82243E84;
	sub_8233E4E0(ctx, base);
	// addi r10,r30,1716
	ctx.r10.s64 = ctx.r30.s64 + 1716;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82243E90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243eac
	if (ctx.cr0.eq) goto loc_82243EAC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,500
	ctx.r4.s64 = 500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243690
	ctx.lr = 0x82243EAC;
	sub_82243690(ctx, base);
loc_82243EAC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82243ec8
	if (!ctx.cr6.gt) goto loc_82243EC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82243EC4;
	sub_82231210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82243EC8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,2048
	ctx.r9.u64 = ctx.r9.u64 | 2048;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82243960
	ctx.lr = 0x82243EF4;
	sub_82243960(ctx, base);
	// rlwinm r11,r24,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// clrldi r10,r25,32
	ctx.r10.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// addi r11,r10,31376
	ctx.r11.s64 = ctx.r10.s64 + 31376;
	// fcfid f6,f0
	ctx.f6.f64 = double(ctx.f0.s64);
	// addi r10,r1,292
	ctx.r10.s64 = ctx.r1.s64 + 292;
	// lfs f31,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// stfs f31,288(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// lfs f13,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// lfs f7,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f7.f64 = double(temp.f32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// lfs f11,1400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1400);
	ctx.f11.f64 = double(temp.f32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// lfs f10,1404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1404);
	ctx.f10.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f9,504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,352(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f13,356(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// lfs f12,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,360(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f12,364(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// lfs f13,1408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmsubs f3,f4,f8,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 - ctx.f0.f64));
	// lfs f8,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmuls f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,304(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f11,312(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f10,316(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f31,320(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f31,324(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f9,328(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f8,332(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f31,336(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f31,340(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f6,308(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f31,368(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f31,372(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f31,384(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f31,388(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lfs f11,1416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f30,f0,f1
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f9,1424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1424);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1428);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1432(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1432);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,1440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1440);
	ctx.f5.f64 = double(temp.f32);
	// stfs f2,180(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f4,208(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f2,212(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f1,376(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f30,380(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stfs f3,344(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f3,348(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f31,392(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f31,396(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stfs f0,400(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f13,404(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f12,408(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f11,412(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f0,416(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f10,420(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f9,424(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f8,428(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f0,432(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f7,436(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f6,440(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f5,444(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x82244084;
	sub_8233EAF0(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82244164
	if (ctx.cr6.eq) goto loc_82244164;
	// addi r27,r22,-4
	ctx.r27.s64 = ctx.r22.s64 + -4;
	// addi r28,r1,436
	ctx.r28.s64 = ctx.r1.s64 + 436;
loc_82244098:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// stfs f31,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfsu f0,16(r28)
	temp.f32 = float(ctx.f0.f64);
	ea = 16 + ctx.r28.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_822440C4:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822440c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822440C4;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// ori r9,r9,74
	ctx.r9.u64 = ctx.r9.u64 | 74;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82236e50
	ctx.lr = 0x8224411C;
	sub_82236E50(ctx, base);
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r10,73
	ctx.r10.s64 = 73;
	// lwz r8,264(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r7,256(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// lwzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// rlwimi r9,r10,11,13,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x7FC00) | (ctx.r9.u64 & 0xFFFFFFFFFFF803FF);
	// rlwinm r10,r8,0,13,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF87FFFF;
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// rlwimi r11,r7,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243768
	ctx.lr = 0x82244158;
	sub_82243768(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82244098
	if (ctx.cr6.lt) goto loc_82244098;
loc_82244164:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8224417c
	if (!ctx.cr6.gt) goto loc_8224417C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x8224417C;
	sub_82231210(ctx, base);
loc_8224417C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r11,r11,20480
	ctx.r11.u64 = ctx.r11.u64 | 20480;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stwu r29,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r8.u32 = ea;
	// stwu r29,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r8.u32 = ea;
	// stwu r29,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r8.u32 = ea;
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// bl 0x82243690
	ctx.lr = 0x822441BC;
	sub_82243690(ctx, base);
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243690
	ctx.lr = 0x822441D0;
	sub_82243690(ctx, base);
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822441e4
	if (!ctx.cr0.eq) goto loc_822441E4;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822441ec
	if (ctx.cr0.eq) goto loc_822441EC;
loc_822441E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232040
	ctx.lr = 0x822441EC;
	sub_82232040(ctx, base);
loc_822441EC:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82244204
	if (!ctx.cr6.gt) goto loc_82244204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82244204;
	sub_82231210(ctx, base);
loc_82244204:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r11,r11,13824
	ctx.r11.u64 = ctx.r11.u64 | 13824;
	// ori r8,r10,136
	ctx.r8.u64 = ctx.r10.u64 | 136;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,616
	ctx.r11.s64 = ctx.r1.s64 + 616;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_82244230:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82244230
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82244230;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r9,262
	ctx.r9.u64 = ctx.r9.u64 | 262;
	// lwz r5,22080(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22080);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,22076(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22076);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82236e50
	ctx.lr = 0x82244288;
	sub_82236E50(ctx, base);
	// lwz r11,22084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22084);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822442a0
	if (!ctx.cr6.lt) goto loc_822442A0;
	// addis r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -1073741824;
	// b 0x822442a4
	goto loc_822442A4;
loc_822442A0:
	// addis r11,r11,-16640
	ctx.r11.s64 = ctx.r11.s64 + -1090519040;
loc_822442A4:
	// lwz r10,656(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r11,r10,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r19,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r6,r1,624
	ctx.r6.s64 = ctx.r1.s64 + 624;
	// stw r11,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r11.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227e30
	ctx.lr = 0x822442E4;
	sub_82227E30(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222d188
	ctx.lr = 0x822442F0;
	sub_8222D188(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82244300
	if (ctx.cr6.eq) goto loc_82244300;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8222f0f8
	ctx.lr = 0x82244300;
	sub_8222F0F8(ctx, base);
loc_82244300:
	// addi r28,r1,608
	ctx.r28.s64 = ctx.r1.s64 + 608;
loc_82244304:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8222cdf8
	ctx.lr = 0x82244318;
	sub_8222CDF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82244328
	if (ctx.cr6.eq) goto loc_82244328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222f0f8
	ctx.lr = 0x82244328;
	sub_8222F0F8(ctx, base);
loc_82244328:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x82244304
	if (ctx.cr6.lt) goto loc_82244304;
	// lwz r11,10688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10688);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r17,r11,0,0,30
	ctx.r17.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFE) | (ctx.r17.u64 & 0xFFFFFFFF00000001);
	// stw r17,10688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10688, ctx.r17.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// or r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 | ctx.r18.u64;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// bl 0x82231720
	ctx.lr = 0x82244358;
	sub_82231720(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224436C"))) PPC_WEAK_FUNC(sub_8224436C);
PPC_FUNC_IMPL(__imp__sub_8224436C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244370"))) PPC_WEAK_FUNC(sub_82244370);
PPC_FUNC_IMPL(__imp__sub_82244370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x82244378;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8233fa34
	ctx.lr = 0x82244380;
	__savefpr_27(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,328
	ctx.r10.s64 = ctx.r1.s64 + 328;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_822443B8:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822443b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822443B8;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// ori r9,r9,74
	ctx.r9.u64 = ctx.r9.u64 | 74;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82236e50
	ctx.lr = 0x82244410;
	sub_82236E50(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,384(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// li r5,112
	ctx.r5.s64 = 112;
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// clrlwi r11,r9,20
	ctx.r11.u64 = ctx.r9.u32 & 0xFFF;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822389e8
	ctx.lr = 0x82244440;
	sub_822389E8(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f760
	ctx.lr = 0x8224444C;
	sub_8222F760(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82244468
	if (!ctx.cr6.gt) goto loc_82244468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82244464;
	sub_82231210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82244468:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// li r4,309
	ctx.r4.s64 = 309;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8222fc30
	ctx.lr = 0x8224448C;
	sub_8222FC30(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,16420
	ctx.r28.s64 = ctx.r11.s64 + 16420;
	// bne 0x822444a4
	if (!ctx.cr0.eq) goto loc_822444A4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x822444e0
	goto loc_822444E0;
loc_822444A4:
	// lis r11,-16077
	ctx.r11.s64 = -1053622272;
	// li r9,306
	ctx.r9.s64 = 306;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// addi r4,r28,2788
	ctx.r4.s64 = ctx.r28.s64 + 2788;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r5,1224
	ctx.r5.s64 = 1224;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwu r9,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r29.u32 = ea;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x822444D4;
	sub_8233E4E0(ctx, base);
	// addi r10,r29,1224
	ctx.r10.s64 = ctx.r29.s64 + 1224;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_822444E0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822444fc
	if (ctx.cr0.eq) goto loc_822444FC;
	// addi r5,r28,2596
	ctx.r5.s64 = ctx.r28.s64 + 2596;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,244
	ctx.r4.s64 = 244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243690
	ctx.lr = 0x822444FC;
	sub_82243690(ctx, base);
loc_822444FC:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fc30
	ctx.lr = 0x82244508;
	sub_8222FC30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82244548
	if (ctx.cr0.eq) goto loc_82244548;
	// lis r11,-16374
	ctx.r11.s64 = -1073086464;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// li r9,9
	ctx.r9.s64 = 9;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwu r9,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r29.u32 = ea;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x82244540;
	sub_8233E4E0(ctx, base);
	// addi r11,r29,36
	ctx.r11.s64 = ctx.r29.s64 + 36;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82244548:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82244564
	if (!ctx.cr6.gt) goto loc_82244564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82244560;
	sub_82231210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82244564:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,5888
	ctx.r9.s64 = 385875968;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,15
	ctx.r9.u64 = ctx.r9.u64 | 15;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82243960
	ctx.lr = 0x82244590;
	sub_82243960(ctx, base);
	// addi r5,r24,28
	ctx.r5.s64 = ctx.r24.s64 + 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243768
	ctx.lr = 0x822445A0;
	sub_82243768(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822445b8
	if (!ctx.cr6.gt) goto loc_822445B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x822445B8;
	sub_82231210(ctx, base);
loc_822445B8:
	// lwz r24,620(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lfs f11,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r9,31376
	ctx.r9.s64 = ctx.r9.s64 + 31376;
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfs f29,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// std r24,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r24.u64);
	// ori r10,r10,20480
	ctx.r10.u64 = ctx.r10.u64 | 20480;
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfs f12,208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f9,f11,f5
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f5.f64));
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// fdivs f7,f0,f4
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lfs f10,148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lfs f6,1312(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1312);
	ctx.f6.f64 = double(temp.f32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lfs f8,196(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// fdivs f30,f11,f3
	ctx.f30.f64 = double(float(ctx.f11.f64 / ctx.f3.f64));
	// stfs f5,192(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f10,216(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fsubs f28,f7,f13
	ctx.f28.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f10,220(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lfs f10,1160(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1160);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// lfs f9,504(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 504);
	ctx.f9.f64 = double(temp.f32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f4,196(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f27,f11
	ctx.f27.f64 = double(ctx.f11.s64);
	// lfs f7,1316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1316);
	ctx.f7.f64 = double(temp.f32);
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// lfs f11,1320(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1320);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fdivs f31,f13,f30
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f30.f64));
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f3,224(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f3,f1,f13
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f2,228(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lfs f12,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f28,f13
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// lfs f9,1328(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1328);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// frsp f29,f27
	ctx.f29.f64 = double(float(ctx.f27.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f8,188(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f1,200(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f28,204(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f30,232(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f7,256(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f11,260(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fdivs f5,f13,f29
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f29.f64));
	// stfs f29,240(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmuls f6,f29,f6
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f6.f64));
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfs f10,1324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1324);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,1332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1332);
	ctx.f8.f64 = double(temp.f32);
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f7,1336(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1336);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f13,1340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1340);
	ctx.f13.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f10,264(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fctidz f10,f2
	ctx.f10.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f2.f64));
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// fctidz f0,f3
	ctx.f0.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f3.f64));
	// stfs f6,252(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f11,272(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stfs f9,276(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f8,280(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f12,284(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f7,288(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f5,244(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f4,248(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f11,296(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f12,300(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// stfd f10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f10.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mullw r28,r11,r10
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82243690
	ctx.lr = 0x8224477C;
	sub_82243690(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82244894
	if (ctx.cr6.eq) goto loc_82244894;
loc_82244788:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// add r11,r10,r23
	ctx.r11.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x822447a4
	if (ctx.cr6.eq) goto loc_822447A4;
	// li r9,16384
	ctx.r9.s64 = 16384;
loc_822447A4:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r10,255
	ctx.r9.s64 = ctx.r10.s64 + 255;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// mulli r29,r9,42
	ctx.r29.s64 = ctx.r9.s64 * 42;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x822447c4
	if (!ctx.cr6.lt) goto loc_822447C4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_822447C4:
	// clrldi r7,r27,32
	ctx.r7.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// rlwinm r11,r11,0,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFC;
	// addi r6,r9,512
	ctx.r6.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r6,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// andi. r10,r8,49400
	ctx.r10.u64 = ctx.r8.u64 & 49400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r9,r9,9
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFF;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// oris r10,r10,19200
	ctx.r10.u64 = ctx.r10.u64 | 1258291200;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r8,19200
	ctx.r8.s64 = 1258291200;
	// ori r10,r10,2561
	ctx.r10.u64 = ctx.r10.u64 | 2561;
	// oris r11,r9,19200
	ctx.r11.u64 = ctx.r9.u64 | 1258291200;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82243690
	ctx.lr = 0x82244840;
	sub_82243690(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82244858
	if (!ctx.cr6.gt) goto loc_82244858;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82244858;
	sub_82231210(ctx, base);
loc_82244858:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mullw r10,r29,r24
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r24.s32);
	// ori r11,r11,13824
	ctx.r11.u64 = ctx.r11.u64 | 13824;
	// li r9,129
	ctx.r9.s64 = 129;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// subf r28,r29,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r29.s64;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// add r27,r29,r27
	ctx.r27.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// blt cr6,0x82244788
	if (ctx.cr6.lt) goto loc_82244788;
loc_82244894:
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f880
	ctx.lr = 0x822448A0;
	sub_8222F880(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822389e8
	ctx.lr = 0x822448B4;
	sub_822389E8(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8233fa80
	ctx.lr = 0x822448C0;
	__restfpr_27(ctx, base);
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822448C4"))) PPC_WEAK_FUNC(sub_822448C4);
PPC_FUNC_IMPL(__imp__sub_822448C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822448C8"))) PPC_WEAK_FUNC(sub_822448C8);
PPC_FUNC_IMPL(__imp__sub_822448C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e438
	ctx.lr = 0x822448D0;
	__savegprlr_16(ctx, base);
	// stwu r1,-3408(r1)
	ea = -3408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,23740(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23740);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// stw r11,23740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23740, ctx.r11.u32);
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82244934
	if (ctx.cr0.eq) goto loc_82244934;
	// addi r30,r3,22200
	ctx.r30.s64 = ctx.r3.s64 + 22200;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82244914;
	sub_8233EAF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,23736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23736, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b458
	ctx.lr = 0x82244928;
	sub_8223B458(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82244930;
	sub_82231210(ctx, base);
	// b 0x82244c94
	goto loc_82244C94;
loc_82244934:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r30,r11,-16384
	ctx.r30.s64 = ctx.r11.s64 + -1073741824;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82244c84
	if (!ctx.cr6.eq) goto loc_82244C84;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82244c84
	if (ctx.cr6.gt) goto loc_82244C84;
	// lwz r26,22076(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22076);
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82244c7c
	if (ctx.cr6.gt) goto loc_82244C7C;
	// lwz r27,22080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22080);
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82244c7c
	if (ctx.cr6.gt) goto loc_82244C7C;
	// addi r23,r7,4096
	ctx.r23.s64 = ctx.r7.s64 + 4096;
	// cmplwi cr6,r23,16384
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16384, ctx.xer);
	// blt cr6,0x822449a4
	if (ctx.cr6.lt) goto loc_822449A4;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
loc_822449A4:
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8233eaf0
	ctx.lr = 0x822449B8;
	sub_8233EAF0(ctx, base);
	// lwz r11,22100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22100);
	// lwz r10,22096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22096);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,22144
	ctx.r3.s64 = ctx.r31.s64 + 22144;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
loc_82244A30:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82244a50
	if (!ctx.cr0.eq) goto loc_82244A50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82244a30
	if (!ctx.cr6.eq) goto loc_82244A30;
loc_82244A50:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82244a78
	if (ctx.cr0.eq) goto loc_82244A78;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x8233e4e0
	ctx.lr = 0x82244A64;
	sub_8233E4E0(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241518
	ctx.lr = 0x82244A78;
	sub_82241518(ctx, base);
loc_82244A78:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82244a90
	if (ctx.cr0.eq) goto loc_82244A90;
	// addi r26,r30,36
	ctx.r26.s64 = ctx.r30.s64 + 36;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82244b34
	goto loc_82244B34;
loc_82244A90:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244b2c
	if (ctx.cr0.eq) goto loc_82244B2C;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r10,r30,36
	ctx.r10.s64 = ctx.r30.s64 + 36;
	// addi r8,r1,1728
	ctx.r8.s64 = ctx.r1.s64 + 1728;
	// addi r7,r1,1730
	ctx.r7.s64 = ctx.r1.s64 + 1730;
	// addi r6,r1,2240
	ctx.r6.s64 = ctx.r1.s64 + 2240;
	// addi r9,r1,1726
	ctx.r9.s64 = ctx.r1.s64 + 1726;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,2242
	ctx.r5.s64 = ctx.r1.s64 + 2242;
	// addi r11,r10,512
	ctx.r11.s64 = ctx.r10.s64 + 512;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r26,r1,1728
	ctx.r26.s64 = ctx.r1.s64 + 1728;
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
loc_82244AD4:
	// lhz r17,512(r11)
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r11.u32 + 512);
	// lhz r18,0(r11)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r28,2(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// lhz r3,514(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 514);
	// lhz r16,-512(r11)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r11.u32 + -512);
	// add r29,r28,r18
	ctx.r29.u64 = ctx.r28.u64 + ctx.r18.u64;
	// lhz r5,-510(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + -510);
	// add r3,r3,r17
	ctx.r3.u64 = ctx.r3.u64 + ctx.r17.u64;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// sthx r18,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r18.u16);
	// add r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 + ctx.r16.u64;
	// sthx r17,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r17.u16);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sthx r4,r7,r11
	PPC_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r4.u16);
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r16,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r16.u16);
	// sthx r3,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sthu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82244ad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82244AD4;
	// b 0x82244b34
	goto loc_82244B34;
loc_82244B2C:
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_82244B34:
	// lwz r11,23736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23736);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82244b7c
	if (!ctx.cr6.eq) goto loc_82244B7C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82244bb8
	if (ctx.cr6.eq) goto loc_82244BB8;
	// addi r10,r31,22200
	ctx.r10.s64 = ctx.r31.s64 + 22200;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r8,r26,1536
	ctx.r8.s64 = ctx.r26.s64 + 1536;
loc_82244B54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82244b74
	if (!ctx.cr0.eq) goto loc_82244B74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82244b54
	if (!ctx.cr6.eq) goto loc_82244B54;
loc_82244B74:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82244bb8
	if (ctx.cr0.eq) goto loc_82244BB8;
loc_82244B7C:
	// stw r25,23736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23736, ctx.r25.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82244ba0
	if (ctx.cr6.eq) goto loc_82244BA0;
	// addi r3,r31,22200
	ctx.r3.s64 = ctx.r31.s64 + 22200;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82244B98;
	sub_8233E4E0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// b 0x82244ba4
	goto loc_82244BA4;
loc_82244BA0:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_82244BA4:
	// lis r4,10280
	ctx.r4.s64 = 673710080;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r4,262
	ctx.r4.u64 = ctx.r4.u64 | 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822347f8
	ctx.lr = 0x82244BB8;
	sub_822347F8(ctx, base);
loc_82244BB8:
	// lwz r11,21928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21928);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r10,21928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21928, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// srawi r29,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 31;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82243ab8
	ctx.lr = 0x82244BE4;
	sub_82243AB8(ctx, base);
	// lwz r11,21928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21928);
	// rlwimi r11,r29,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,21928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21928, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82244c04
	if (ctx.cr0.eq) goto loc_82244C04;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82244C04:
	// lwz r9,22084(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22084);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// stw r5,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// beq 0x82244c44
	if (ctx.cr0.eq) goto loc_82244C44;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// b 0x82244c50
	goto loc_82244C50;
loc_82244C44:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244c5c
	if (ctx.cr0.eq) goto loc_82244C5C;
	// addi r4,r1,1728
	ctx.r4.s64 = ctx.r1.s64 + 1728;
loc_82244C50:
	// li r5,1536
	ctx.r5.s64 = 1536;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8233e4e0
	ctx.lr = 0x82244C5C;
	sub_8233E4E0(ctx, base);
loc_82244C5C:
	// cmplwi cr6,r21,1560
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1560, ctx.xer);
	// li r5,1560
	ctx.r5.s64 = 1560;
	// bgt cr6,0x82244c6c
	if (ctx.cr6.gt) goto loc_82244C6C;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_82244C6C:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82244C78;
	sub_8233E4E0(ctx, base);
	// b 0x82244c88
	goto loc_82244C88;
loc_82244C7C:
	// li r20,7
	ctx.r20.s64 = 7;
	// b 0x82244c88
	goto loc_82244C88;
loc_82244C84:
	// li r20,6
	ctx.r20.s64 = 6;
loc_82244C88:
	// addi r4,r30,1572
	ctx.r4.s64 = ctx.r30.s64 + 1572;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223b9b8
	ctx.lr = 0x82244C94;
	sub_8223B9B8(ctx, base);
loc_82244C94:
	// lwz r11,23740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23740);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,23740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23740, ctx.r11.u32);
	// addi r1,r1,3408
	ctx.r1.s64 = ctx.r1.s64 + 3408;
	// b 0x8233e488
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244CAC"))) PPC_WEAK_FUNC(sub_82244CAC);
PPC_FUNC_IMPL(__imp__sub_82244CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244CB0"))) PPC_WEAK_FUNC(sub_82244CB0);
PPC_FUNC_IMPL(__imp__sub_82244CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// lwz r10,22072(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22072);
	// lwz r8,22076(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lis r9,21
	ctx.r9.s64 = 1376256;
	// ori r11,r11,310
	ctx.r11.u64 = ctx.r11.u64 | 310;
	// lwz r7,22080(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22080);
	// ori r6,r9,6144
	ctx.r6.u64 = ctx.r9.u64 | 6144;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ble cr6,0x82244cf0
	if (!ctx.cr6.gt) goto loc_82244CF0;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82244d04
	goto loc_82244D04;
loc_82244CF0:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r10,r10,59648
	ctx.r10.u64 = ctx.r10.u64 | 59648;
	// subfc r10,r7,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
loc_82244D04:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82244d34
	if (!ctx.cr6.eq) goto loc_82244D34;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// subfe r9,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r8,-14116
	ctx.r9.s64 = ctx.r8.s64 + -14116;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82244d64
	goto loc_82244D64;
loc_82244D34:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r8,r8,-14116
	ctx.r8.s64 = ctx.r8.s64 + -14116;
	// mulli r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 * 3;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
loc_82244D64:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f12,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,12
	ctx.r10.s64 = 12;
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// lfs f0,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfiwx f12,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.f12.u32);
	// fmuls f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82244DBC"))) PPC_WEAK_FUNC(sub_82244DBC);
PPC_FUNC_IMPL(__imp__sub_82244DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244DC0"))) PPC_WEAK_FUNC(sub_82244DC0);
PPC_FUNC_IMPL(__imp__sub_82244DC0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82388ae4
	ctx.lr = 0x82244DDC;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82244df0
	if (!ctx.cr6.eq) goto loc_82244DF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// b 0x82244df8
	goto loc_82244DF8;
loc_82244DF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
loc_82244DF8:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82247340
	ctx.lr = 0x82244E08;
	sub_82247340(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// sradi r10,r10,10
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 10;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,1912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1912);
	// lwz r10,22068(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22068);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82244e44
	if (ctx.cr6.eq) goto loc_82244E44;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,93
	ctx.r3.s64 = 93;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82244E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82244E44:
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

__attribute__((alias("__imp__sub_82244E5C"))) PPC_WEAK_FUNC(sub_82244E5C);
PPC_FUNC_IMPL(__imp__sub_82244E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244E60"))) PPC_WEAK_FUNC(sub_82244E60);
PPC_FUNC_IMPL(__imp__sub_82244E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82244E68;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r17,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r17.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82244EAC;
	sub_8233EAF0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,216
	ctx.r10.s64 = ctx.r1.s64 + 216;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82244EBC:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82244ebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82244EBC;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82236e50
	ctx.lr = 0x82244F10;
	sub_82236E50(ctx, base);
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// lwz r8,264(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// li r11,9
	ctx.r11.s64 = 9;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r8,r10,21,9,10
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0x600000) | (ctx.r8.u64 & 0xFFFFFFFFFF9FFFFF);
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stw r8,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// rlwimi r9,r11,11,16,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 11) & 0xFC00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF03FF);
	// addis r11,r31,-16384
	ctx.r11.s64 = ctx.r31.s64 + -1073741824;
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// blt cr6,0x82244f44
	if (ctx.cr6.lt) goto loc_82244F44;
	// addis r11,r31,-16640
	ctx.r11.s64 = ctx.r31.s64 + -1090519040;
loc_82244F44:
	// lwz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// rlwimi r11,r10,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stw r14,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r14.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82244f6c
	if (!ctx.cr6.eq) goto loc_82244F6C;
	// li r11,27
	ctx.r11.s64 = 27;
	// rlwimi r14,r11,1,26,31
	ctx.r14.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x3F) | (ctx.r14.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r14,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r14.u32);
loc_82244F6C:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82244F7C;
	sub_8233E4E0(ctx, base);
	// lwz r19,304(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82244f8c
	if (!ctx.cr6.eq) goto loc_82244F8C;
	// lwz r19,22096(r23)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r23.u32 + 22096);
loc_82244F8C:
	// lwz r20,308(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82244f9c
	if (!ctx.cr6.eq) goto loc_82244F9C;
	// lwz r20,22100(r23)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r23.u32 + 22100);
loc_82244F9C:
	// lwz r24,296(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r25,288(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpw cr6,r24,r25
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82244fb4
	if (!ctx.cr6.eq) goto loc_82244FB4;
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_82244FB4:
	// lwz r26,300(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r27,292(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82244fcc
	if (!ctx.cr6.eq) goto loc_82244FCC;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82244FCC:
	// lwz r11,22096(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 22096);
	// clrldi r10,r20,32
	ctx.r10.u64 = ctx.r20.u64 & 0xFFFFFFFF;
	// lwz r9,22100(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 22100);
	// clrldi r8,r19,32
	ctx.r8.u64 = ctx.r19.u64 & 0xFFFFFFFF;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r18,r11,31376
	ctx.r18.s64 = ctx.r11.s64 + 31376;
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfs f0,36(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f12,876(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 876);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fdivs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8224504c
	if (!ctx.cr6.lt) goto loc_8224504C;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// b 0x82245050
	goto loc_82245050;
loc_8224504C:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
loc_82245050:
	// fsubs f13,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82245064
	if (!ctx.cr6.lt) goto loc_82245064;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// b 0x82245068
	goto loc_82245068;
loc_82245064:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_82245068:
	// subf r31,r25,r24
	ctx.r31.s64 = ctx.r24.s64 - ctx.r25.s64;
	// subf r28,r27,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r27.s64;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// bl 0x8233ea10
	ctx.lr = 0x8224508C;
	sub_8233EA10(ctx, base);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// bl 0x8233ea10
	ctx.lr = 0x822450B8;
	sub_8233EA10(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,21932(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21932);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// andi. r9,r10,9
	ctx.r9.u64 = ctx.r10.u64 & 9;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r9,19
	ctx.r8.s64 = ctx.r9.s64 + 19;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// divw r10,r9,r11
	ctx.r10.s32 = ctx.r9.s32 / ctx.r11.s32;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// twlgei r11,-1
	// bgt cr6,0x82245120
	if (ctx.cr6.gt) goto loc_82245120;
	// li r10,24
	ctx.r10.s64 = 24;
loc_82245120:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// twllei r8,0
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// divw r11,r9,r8
	ctx.r11.s32 = ctx.r9.s32 / ctx.r8.s32;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// twlgei r9,-1
	// bgt cr6,0x82245154
	if (ctx.cr6.gt) goto loc_82245154;
	// li r11,24
	ctx.r11.s64 = 24;
loc_82245154:
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// divw r7,r7,r10
	ctx.r7.s32 = ctx.r7.s32 / ctx.r10.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addze r22,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r22.s64 = temp.s64;
	// mullw r30,r7,r10
	ctx.r30.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// andc r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// divw r7,r6,r11
	ctx.r7.s32 = ctx.r6.s32 / ctx.r11.s32;
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r10,0
	// twllei r11,0
	// addze r21,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r21.s64 = temp.s64;
	// twlgei r9,-1
	// twlgei r8,-1
	// mullw r29,r7,r11
	ctx.r29.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x822451d0
	if (!ctx.cr6.gt) goto loc_822451D0;
	// rotlwi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// divw r8,r31,r10
	ctx.r8.s32 = ctx.r31.s32 / ctx.r10.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	// mullw r30,r8,r10
	ctx.r30.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twlgei r10,-1
loc_822451D0:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x822451f4
	if (!ctx.cr6.gt) goto loc_822451F4;
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// divw r9,r28,r11
	ctx.r9.s32 = ctx.r28.s32 / ctx.r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	// mullw r29,r9,r11
	ctx.r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
loc_822451F4:
	// lwz r10,22096(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 22096);
	// mullw r11,r30,r19
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r19.s32);
	// lwz r9,22100(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 22100);
	// lwz r8,22108(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 22108);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// divwu r11,r11,r31
	ctx.r11.u32 = ctx.r11.u32 / ctx.r31.u32;
	// mullw r10,r29,r20
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r20.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// twllei r31,0
	// twllei r28,0
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// divwu r11,r10,r28
	ctx.r11.u32 = ctx.r10.u32 / ctx.r28.u32;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// add r10,r25,r24
	ctx.r10.u64 = ctx.r25.u64 + ctx.r24.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r9,r27,r26
	ctx.r9.u64 = ctx.r27.u64 + ctx.r26.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// subf r20,r10,r11
	ctx.r20.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// subf r19,r10,r11
	ctx.r19.s64 = ctx.r11.s64 - ctx.r10.s64;
	// fdivs f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// beq cr6,0x822452b0
	if (ctx.cr6.eq) goto loc_822452B0;
	// lfs f0,504(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,632(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 632);
	ctx.f13.f64 = double(temp.f32);
	// b 0x822452b8
	goto loc_822452B8;
loc_822452B0:
	// lfs f0,208(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
loc_822452B8:
	// divw r8,r30,r22
	ctx.r8.s32 = ctx.r30.s32 / ctx.r22.s32;
	// fmuls f13,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// divw r7,r29,r21
	ctx.r7.s32 = ctx.r29.s32 / ctx.r21.s32;
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// li r11,42
	ctx.r11.s64 = 42;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// fdivs f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// divwu r9,r6,r11
	ctx.r9.u32 = ctx.r6.u32 / ctx.r11.u32;
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// rotlwi r11,r29,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// addi r9,r9,1024
	ctx.r9.s64 = ctx.r9.s64 + 1024;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r6,6
	ctx.r10.s64 = ctx.r6.s64 * 6;
	// andc r9,r22,r5
	ctx.r9.u64 = ctx.r22.u64 & ~ctx.r5.u64;
	// andc r6,r21,r4
	ctx.r6.u64 = ctx.r21.u64 & ~ctx.r4.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r22,0
	// twllei r21,0
	// twlgei r9,-1
	// twlgei r6,-1
	// rlwinm r26,r8,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r7,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r31,16384
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16384, ctx.xer);
	// bgt cr6,0x82245324
	if (ctx.cr6.gt) goto loc_82245324;
	// li r31,16384
	ctx.r31.s64 = 16384;
loc_82245324:
	// stw r17,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r17.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lwz r11,1912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1912);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224536c
	if (ctx.cr6.eq) goto loc_8224536C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r3,92
	ctx.r3.s64 = 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x82245370
	goto loc_82245370;
loc_8224536C:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_82245370:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224554c
	if (ctx.cr6.eq) goto loc_8224554C;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// lwz r28,180(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// clrlwi r9,r10,18
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFF;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// addi r24,r9,1
	ctx.r24.s64 = ctx.r9.s64 + 1;
	// beq cr6,0x822453bc
	if (ctx.cr6.eq) goto loc_822453BC;
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r10,r10,310
	ctx.r10.u64 = ctx.r10.u64 | 310;
	// subf r10,r15,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r15.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822453BC:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lis r8,20585
	ctx.r8.s64 = 1349058560;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r9,r8,30806
	ctx.r9.u64 = ctx.r8.u64 | 30806;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r17,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
	// lwz r9,21932(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21932);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
	// stw r25,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r25.u32);
	// stfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f30,28(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f29,32(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// beq cr6,0x8224540c
	if (ctx.cr6.eq) goto loc_8224540C;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8224540C;
	sub_8233E4E0(ctx, base);
loc_8224540C:
	// addi r4,r27,4096
	ctx.r4.s64 = ctx.r27.s64 + 4096;
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// blt cr6,0x82245424
	if (ctx.cr6.lt) goto loc_82245424;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_82245424:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// extsw r10,r19
	ctx.r10.s64 = ctx.r19.s32;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// extsw r11,r21
	ctx.r11.s64 = ctx.r21.s32;
	// extsw r9,r20
	ctx.r9.s64 = ctx.r20.s32;
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// extsw r11,r22
	ctx.r11.s64 = ctx.r22.s32;
	// lfd f11,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfd f10,192(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// lfd f9,200(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// mullw r11,r29,r30
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,21
	ctx.r10.s64 = 1376256;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// ori r10,r10,6144
	ctx.r10.u64 = ctx.r10.u64 | 6144;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ble cr6,0x822454d0
	if (!ctx.cr6.gt) goto loc_822454D0;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x822454ec
	goto loc_822454EC;
loc_822454D0:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r10,r10,59648
	ctx.r10.u64 = ctx.r10.u64 | 59648;
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
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
loc_822454EC:
	// clrlwi r11,r14,26
	ctx.r11.u64 = ctx.r14.u32 & 0x3F;
	// lwz r10,21932(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21932);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r11,r11,-54
	ctx.r11.s64 = ctx.r11.s64 + -54;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r3,r8,-14068
	ctx.r3.s64 = ctx.r8.s64 + -14068;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82244370
	ctx.lr = 0x8224554C;
	sub_82244370(ctx, base);
loc_8224554C:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82245564"))) PPC_WEAK_FUNC(sub_82245564);
PPC_FUNC_IMPL(__imp__sub_82245564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245568"))) PPC_WEAK_FUNC(sub_82245568);
PPC_FUNC_IMPL(__imp__sub_82245568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82245570;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,276(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r7,22072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22072, ctx.r7.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r8,22076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22076, ctx.r8.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r9,22080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22080, ctx.r9.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r6,22084(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22084, ctx.r6.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// stw r10,22088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22088, ctx.r10.u32);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r25,22092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22092, ctx.r25.u32);
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822455bc
	if (ctx.cr0.eq) goto loc_822455BC;
	// addi r3,r3,22096
	ctx.r3.s64 = ctx.r3.s64 + 22096;
	// bl 0x82388e74
	ctx.lr = 0x822455BC;
	__imp__VdQueryVideoMode(ctx, base);
loc_822455BC:
	// lwz r11,21928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21928);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224568c
	if (ctx.cr0.eq) goto loc_8224568C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82245604
	if (!ctx.cr6.eq) goto loc_82245604;
	// lbz r11,11069(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82245604
	if (!ctx.cr0.eq) goto loc_82245604;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244e60
	ctx.lr = 0x822455FC;
	sub_82244E60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82245654
	goto loc_82245654;
loc_82245604:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233eaf0
	ctx.lr = 0x82245614;
	sub_8233EAF0(ctx, base);
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// lwz r11,1912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1912);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245650
	if (ctx.cr6.eq) goto loc_82245650;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,92
	ctx.r3.s64 = 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82245650:
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82245654:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82245670
	if (!ctx.cr6.gt) goto loc_82245670;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x8224566C;
	sub_82231210(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82245670:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r11,19904
	ctx.r6.s64 = ctx.r11.s64 + 19904;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231408
	ctx.lr = 0x82245688;
	sub_82231408(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_8224568C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82245694"))) PPC_WEAK_FUNC(sub_82245694);
PPC_FUNC_IMPL(__imp__sub_82245694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245698"))) PPC_WEAK_FUNC(sub_82245698);
PPC_FUNC_IMPL(__imp__sub_82245698) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,11071(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11071);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,11071(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11071, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822456A8"))) PPC_WEAK_FUNC(sub_822456A8);
PPC_FUNC_IMPL(__imp__sub_822456A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x822456B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22052(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22052);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,16952(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16952);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822456d0
	if (!ctx.cr6.eq) goto loc_822456D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822456fc
	goto loc_822456FC;
loc_822456D0:
	// bl 0x82388ae4
	ctx.lr = 0x822456D4;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822456f8
	if (ctx.cr6.eq) goto loc_822456F8;
	// lwz r11,22040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22040);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82245704
	if (ctx.cr6.eq) goto loc_82245704;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822456f8
	if (!ctx.cr6.eq) goto loc_822456F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,22040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 22040, ctx.r11.u32);
loc_822456F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822456FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82245704:
	// lwz r10,22048(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22048);
	// lwz r11,22044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22044);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822456f8
	if (ctx.cr6.eq) goto loc_822456F8;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,22032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22032);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245738
	if (ctx.cr6.eq) goto loc_82245738;
	// bl 0x822317a0
	ctx.lr = 0x82245730;
	sub_822317A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822456f8
	if (!ctx.cr0.eq) goto loc_822456F8;
loc_82245738:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,24552
	ctx.r31.s64 = ctx.r11.s64 + 24552;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r31,-552
	ctx.r4.s64 = ctx.r31.s64 + -552;
	// bl 0x8233e4e0
	ctx.lr = 0x82245750;
	sub_8233E4E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,22032(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22032);
	// stw r11,-556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -556, ctx.r11.u32);
	// lwz r11,22044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22044);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r28,12(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822457b0
	if (ctx.cr6.eq) goto loc_822457B0;
	// bl 0x82388ae4
	ctx.lr = 0x82245778;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8224578c
	if (!ctx.cr6.eq) goto loc_8224578C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// b 0x82245794
	goto loc_82245794;
loc_8224578C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
loc_82245794:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822457b0
	if (ctx.cr6.eq) goto loc_822457B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82231310
	ctx.lr = 0x822457B0;
	sub_82231310(ctx, base);
loc_822457B0:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r31,-552
	ctx.r3.s64 = ctx.r31.s64 + -552;
	// li r5,480
	ctx.r5.s64 = 480;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x822457C4;
	sub_8233E4E0(ctx, base);
	// addi r4,r29,480
	ctx.r4.s64 = ctx.r29.s64 + 480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223b9b8
	ctx.lr = 0x822457D0;
	sub_8223B9B8(ctx, base);
	// lwz r11,22044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22044);
	// lwz r10,22036(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22036);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82245800
	if (!ctx.cr6.eq) goto loc_82245800;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82245804
	goto loc_82245804;
loc_82245800:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82245804:
	// lwz r10,16952(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16952);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,22044(r30)
	PPC_STORE_U32(ctx.r30.u32 + 22044, ctx.r11.u32);
	// stw r10,22052(r30)
	PPC_STORE_U32(ctx.r30.u32 + 22052, ctx.r10.u32);
	// b 0x822456fc
	goto loc_822456FC;
}

__attribute__((alias("__imp__sub_82245818"))) PPC_WEAK_FUNC(sub_82245818);
PPC_FUNC_IMPL(__imp__sub_82245818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8224584c
	if (!ctx.cr6.eq) goto loc_8224584C;
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8224586c
	goto loc_8224586C;
loc_8224584C:
	// bl 0x823413b0
	ctx.lr = 0x82245850;
	sub_823413B0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,31376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 31376);
	// fmul f31,f1,f0
	ctx.f31.f64 = ctx.f1.f64 * ctx.f0.f64;
	// bl 0x823413b0
	ctx.lr = 0x82245864;
	sub_823413B0(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 / ctx.f1.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
loc_8224586C:
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

__attribute__((alias("__imp__sub_82245884"))) PPC_WEAK_FUNC(sub_82245884);
PPC_FUNC_IMPL(__imp__sub_82245884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245888"))) PPC_WEAK_FUNC(sub_82245888);
PPC_FUNC_IMPL(__imp__sub_82245888) {
	PPC_FUNC_PROLOGUE();
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x82245898
	if (!ctx.cr6.lt) goto loc_82245898;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82245898:
	// cmpdi cr6,r4,0
	ctx.cr6.compare<int64_t>(ctx.r4.s64, 0, ctx.xer);
	// bne cr6,0x822458ac
	if (!ctx.cr6.eq) goto loc_822458AC;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_822458AC:
	// cmpd cr6,r3,r4
	ctx.cr6.compare<int64_t>(ctx.r3.s64, ctx.r4.s64, ctx.xer);
	// blt cr6,0x822458c0
	if (ctx.cr6.lt) goto loc_822458C0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
	// blr 
	return;
loc_822458C0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// tdllei r4,0
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// mulld r10,r3,r11
	ctx.r10.s64 = ctx.r3.s64 * ctx.r11.s64;
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r4
	ctx.r10.s64 = ctx.r10.s64 / ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r11.u64;
	// tdlgei r11,-1
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822458EC"))) PPC_WEAK_FUNC(sub_822458EC);
PPC_FUNC_IMPL(__imp__sub_822458EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822458F0"))) PPC_WEAK_FUNC(sub_822458F0);
PPC_FUNC_IMPL(__imp__sub_822458F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x822458F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,21976(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21976);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r7,21972(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21972);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// or r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 | ctx.r7.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82245924:
	// stdu r7,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x82245924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82245924;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// sradi r7,r11,32
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xFFFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s64 >> 32;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,22016(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22016);
	// ori r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 65535;
	// lwz r4,21968(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21968);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// lwz r3,16952(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16952);
	// lwz r31,22008(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22008);
	// lfs f0,21984(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21984);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r30,22012(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22012);
	// lwz r29,23744(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23744);
	// lfs f13,21980(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21980);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,11024(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11024);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwbrx r7,r27,r28
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32));
	// lwbrx r10,r10,r28
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32));
	// lwbrx r5,r8,r28
	ctx.r5.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32));
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82245a1c
	if (ctx.cr6.eq) goto loc_82245A1C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// stw r11,22016(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22016, ctx.r11.u32);
	// beq cr6,0x82245a1c
	if (ctx.cr6.eq) goto loc_82245A1C;
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// beq cr6,0x82245a1c
	if (ctx.cr6.eq) goto loc_82245A1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r8,r5
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r5.u64, ctx.xer);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bgt cr6,0x822459fc
	if (ctx.cr6.gt) goto loc_822459FC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_822459FC:
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x82245a08
	if (ctx.cr6.gt) goto loc_82245A08;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82245A08:
	// subf r4,r7,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subf r3,r8,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r8.s64;
	// bl 0x82245888
	ctx.lr = 0x82245A14;
	sub_82245888(ctx, base);
	// rlwimi r3,r6,0,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
loc_82245A1C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822456a8
	ctx.lr = 0x82245A24;
	sub_822456A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82245cfc
	if (ctx.cr0.eq) goto loc_82245CFC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,24552
	ctx.r9.s64 = ctx.r11.s64 + 24552;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,24552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24552);
	// ld r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 40);
	// ld r8,-552(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + -552);
	// ld r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 48);
	// ld r6,-544(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + -544);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r3,r11,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r11.s64;
	// bl 0x82245888
	ctx.lr = 0x82245A6C;
	sub_82245888(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwimi r11,r3,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x82245888
	ctx.lr = 0x82245A80;
	sub_82245888(ctx, base);
	// ld r11,160(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 160);
	// ld r10,-432(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -432);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r7,168(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 168);
	// ld r6,-424(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + -424);
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r3,r7,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r7.s64;
	// bl 0x82245888
	ctx.lr = 0x82245AA4;
	sub_82245888(ctx, base);
	// ld r5,-416(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + -416);
	// ld r31,176(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 176);
	// rlwimi r30,r3,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// subf r11,r5,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r5.s64;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x82245888
	ctx.lr = 0x82245AC8;
	sub_82245888(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// subf r3,r31,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r31.s64;
	// bl 0x82245888
	ctx.lr = 0x82245AD4;
	sub_82245888(ctx, base);
	// ld r11,480(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 480);
	// ld r10,-112(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -112);
	// rlwimi r6,r3,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// ld r7,472(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 472);
	// lis r5,0
	ctx.r5.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ld r11,-120(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + -120);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// ori r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 65535;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r5,r3,43689
	ctx.r5.u64 = ctx.r3.u64 | 43689;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82245b18
	if (!ctx.cr6.lt) goto loc_82245B18;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82245b48
	goto loc_82245B48;
loc_82245B18:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x82245b28
	if (!ctx.cr6.eq) goto loc_82245B28;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82245b48
	goto loc_82245B48;
loc_82245B28:
	// mulld r10,r11,r5
	ctx.r10.s64 = ctx.r11.s64 * ctx.r5.s64;
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 / ctx.r8.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	// tdlgei r10,-1
loc_82245B48:
	// ld r10,488(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 488);
	// ld r7,-104(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + -104);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwimi r11,r6,0,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x82245b6c
	if (!ctx.cr6.lt) goto loc_82245B6C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82245b9c
	goto loc_82245B9C;
loc_82245B6C:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x82245b7c
	if (!ctx.cr6.eq) goto loc_82245B7C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82245b9c
	goto loc_82245B9C;
loc_82245B7C:
	// mulld r7,r10,r5
	ctx.r7.s64 = ctx.r10.s64 * ctx.r5.s64;
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r7,r7,r8
	ctx.r7.s64 = ctx.r7.s64 / ctx.r8.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// andc r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// tdllei r8,0
	// tdlgei r7,-1
loc_82245B9C:
	// ld r7,272(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 272);
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// ld r6,-320(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + -320);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x82245bc0
	if (!ctx.cr6.lt) goto loc_82245BC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82245bf0
	goto loc_82245BF0;
loc_82245BC0:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x82245bd0
	if (!ctx.cr6.eq) goto loc_82245BD0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82245bf0
	goto loc_82245BF0;
loc_82245BD0:
	// mulld r10,r10,r5
	ctx.r10.s64 = ctx.r10.s64 * ctx.r5.s64;
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 / ctx.r8.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	// tdlgei r10,-1
loc_82245BF0:
	// ld r10,128(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 128);
	// ld r7,-464(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + -464);
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwimi r11,r6,0,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x82245c14
	if (!ctx.cr6.lt) goto loc_82245C14;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82245c44
	goto loc_82245C44;
loc_82245C14:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x82245c24
	if (!ctx.cr6.eq) goto loc_82245C24;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82245c44
	goto loc_82245C44;
loc_82245C24:
	// mulld r7,r10,r5
	ctx.r7.s64 = ctx.r10.s64 * ctx.r5.s64;
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r7,r7,r8
	ctx.r7.s64 = ctx.r7.s64 / ctx.r8.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// andc r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// tdllei r8,0
	// tdlgei r7,-1
loc_82245C44:
	// ld r7,496(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 496);
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// ld r6,-96(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + -96);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rldicr r11,r10,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82245c6c
	if (!ctx.cr6.lt) goto loc_82245C6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82245c9c
	goto loc_82245C9C;
loc_82245C6C:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x82245c7c
	if (!ctx.cr6.eq) goto loc_82245C7C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82245c9c
	goto loc_82245C9C;
loc_82245C7C:
	// mulld r10,r11,r5
	ctx.r10.s64 = ctx.r11.s64 * ctx.r5.s64;
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 / ctx.r8.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	// tdlgei r10,-1
loc_82245C9C:
	// ld r10,504(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 504);
	// ld r9,-88(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + -88);
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwimi r11,r7,0,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r10,r10,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x82245cc4
	if (!ctx.cr6.lt) goto loc_82245CC4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82245cf4
	goto loc_82245CF4;
loc_82245CC4:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x82245cd4
	if (!ctx.cr6.eq) goto loc_82245CD4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82245cf4
	goto loc_82245CF4;
loc_82245CD4:
	// mulld r9,r10,r5
	ctx.r9.s64 = ctx.r10.s64 * ctx.r5.s64;
	// rotldi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 1);
	// divd r9,r9,r8
	ctx.r9.s64 = ctx.r9.s64 / ctx.r8.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// andc r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	// tdlgei r9,-1
loc_82245CF4:
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x82245d1c
	goto loc_82245D1C;
loc_82245CFC:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r11,-1
	ctx.r11.s64 = -1;
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_82245D1C:
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r3,17459
	ctx.r3.s64 = 1144193024;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r3,r3,25703
	ctx.r3.u64 = ctx.r3.u64 | 25703;
	// bl 0x8237ada8
	ctx.lr = 0x82245D34;
	sub_8237ADA8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82245D3C"))) PPC_WEAK_FUNC(sub_82245D3C);
PPC_FUNC_IMPL(__imp__sub_82245D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245D40"))) PPC_WEAK_FUNC(sub_82245D40);
PPC_FUNC_IMPL(__imp__sub_82245D40) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r4,18
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 18, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x82246208
	if (ctx.cr6.gt) goto loc_82246208;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// rlwinm r0,r31,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,31328
	ctx.r12.s64 = ctx.r12.s64 + 31328;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32220
	ctx.r12.s64 = -2111569920;
	// addi r12,r12,23964
	ctx.r12.s64 = ctx.r12.s64 + 23964;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82245D9C;
	case 1:
		goto loc_82245DBC;
	case 2:
		goto loc_82245DE8;
	case 3:
		goto loc_82245E00;
	case 4:
		goto loc_82245E64;
	case 5:
		goto loc_82245E88;
	case 6:
		goto loc_82245ED8;
	case 7:
		goto loc_82245F78;
	case 8:
		goto loc_82246000;
	case 9:
		goto loc_82246060;
	case 10:
		goto loc_822460C0;
	case 11:
		goto loc_822460F4;
	case 12:
		goto loc_82246138;
	case 13:
		goto loc_82246164;
	case 14:
		goto loc_8224618C;
	case 15:
		goto loc_822461B4;
	case 16:
		goto loc_822461E8;
	case 17:
		goto loc_82245F68;
	case 18:
		goto loc_82245F78;
	default:
		__builtin_unreachable();
	}
loc_82245D9C:
	// lwz r11,21968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21968);
	// lfs f0,21984(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21984);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x8224620c
	goto loc_8224620C;
loc_82245DBC:
	// lwz r11,21968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246208
	if (ctx.cr6.eq) goto loc_82246208;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,21980(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21980);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x8224620c
	goto loc_8224620C;
loc_82245DE8:
	// lwz r11,16952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16952);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82245DF4:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x8224620c
	goto loc_8224620C;
loc_82245E00:
	// lwz r11,22008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22008);
	// lwz r9,21968(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21968);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
loc_82245E20:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r10,31376
	ctx.r11.s64 = ctx.r10.s64 + 31376;
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
loc_82245E38:
	// fdivs f13,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
loc_82245E3C:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82245e50
	if (!ctx.cr6.lt) goto loc_82245E50;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82245e5c
	goto loc_82245E5C;
loc_82245E50:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82245e5c
	if (ctx.cr6.gt) goto loc_82245E5C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82245E5C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x8224620c
	goto loc_8224620C;
loc_82245E64:
	// lwz r9,22012(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22012);
	// lwz r11,21968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21968);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// b 0x82245e20
	goto loc_82245E20;
loc_82245E88:
	// lwz r11,21968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21968);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,22012(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22012);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r8,22008(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22008);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82245e38
	goto loc_82245E38;
loc_82245ED8:
	// lwz r11,22016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22016);
	// lwz r8,11024(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// clrlwi r10,r7,29
	ctx.r10.u64 = ctx.r7.u32 & 0x7;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwbrx r31,r7,r8
	ctx.r31.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32));
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// lwbrx r30,r10,r8
	ctx.r30.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32));
	// lwbrx r10,r9,r8
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32));
	// beq cr6,0x82246208
	if (ctx.cr6.eq) goto loc_82246208;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// stw r11,22016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22016, ctx.r11.u32);
	// beq cr6,0x82246208
	if (ctx.cr6.eq) goto loc_82246208;
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x82246208
	if (ctx.cr6.eq) goto loc_82246208;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r10,r30
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r30.u64, ctx.xer);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bgt cr6,0x82245f4c
	if (ctx.cr6.gt) goto loc_82245F4C;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82245F4C:
	// cmpld cr6,r31,r10
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x82245f58
	if (ctx.cr6.gt) goto loc_82245F58;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82245F58:
	// subf r3,r10,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r10.s64;
	// bl 0x823413b0
	ctx.lr = 0x82245F60;
	sub_823413B0(ctx, base);
	// subf r3,r30,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r30.s64;
	// b 0x8224603c
	goto loc_8224603C;
loc_82245F68:
	// lwz r11,23744(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23744);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82245df4
	goto loc_82245DF4;
loc_82245F78:
	// bl 0x822456a8
	ctx.lr = 0x82245F7C;
	sub_822456A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246208
	if (ctx.cr0.eq) goto loc_82246208;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,24552
	ctx.r7.s64 = ctx.r11.s64 + 24552;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// lwz r9,24552(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24552);
	// ld r11,40(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 40);
	// ld r10,-552(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + -552);
	// ld r8,48(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 48);
	// ld r7,-544(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + -544);
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// subf r3,r8,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r8.s64;
	// bne cr6,0x82245fc4
	if (!ctx.cr6.eq) goto loc_82245FC4;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82245FC4:
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x82246208
	if (ctx.cr6.eq) goto loc_82246208;
	// bl 0x823413b0
	ctx.lr = 0x82245FD0;
	sub_823413B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x823413b0
	ctx.lr = 0x82245FDC;
	sub_823413B0(ctx, base);
	// fdiv f12,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f31.f64 / ctx.f1.f64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// b 0x82245e3c
	goto loc_82245E3C;
loc_82246000:
	// bl 0x822456a8
	ctx.lr = 0x82246004;
	sub_822456A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246208
	if (ctx.cr0.eq) goto loc_82246208;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,24552
	ctx.r11.s64 = ctx.r11.s64 + 24552;
	// ld r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 160);
	// ld r9,-432(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -432);
	// subf r31,r10,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// beq cr6,0x82246208
	if (ctx.cr6.eq) goto loc_82246208;
	// ld r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 168);
	// ld r11,-424(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -424);
loc_82246030:
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x823413b0
	ctx.lr = 0x82246038;
	sub_823413B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8224603C:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x823413b0
	ctx.lr = 0x82246044;
	sub_823413B0(ctx, base);
	// fdiv f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64 / ctx.f1.f64;
loc_82246048:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// frsp f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82245e3c
	goto loc_82245E3C;
loc_82246060:
	// bl 0x822456a8
	ctx.lr = 0x82246064;
	sub_822456A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246208
	if (ctx.cr0.eq) goto loc_82246208;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r31,r11,24552
	ctx.r31.s64 = ctx.r11.s64 + 24552;
	// ld r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 160);
	// ld r10,-432(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -432);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x82246208
	if (ctx.cr6.eq) goto loc_82246208;
	// bl 0x823413b0
	ctx.lr = 0x8224608C;
	sub_823413B0(ctx, base);
	// ld r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 168);
	// ld r10,-424(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -424);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x823413b0
	ctx.lr = 0x822460A0;
	sub_823413B0(ctx, base);
	// ld r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// ld r10,-416(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -416);
	// fsub f30,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64 - ctx.f1.f64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x823413b0
	ctx.lr = 0x822460B4;
	sub_823413B0(ctx, base);
	// fsub f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64 - ctx.f1.f64;
	// fdiv f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 / ctx.f31.f64;
	// b 0x82246048
	goto loc_82246048;
loc_822460C0:
	// bl 0x822456a8
	ctx.lr = 0x822460C4;
	sub_822456A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246208
	if (ctx.cr0.eq) goto loc_82246208;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,24552
	ctx.r11.s64 = ctx.r11.s64 + 24552;
	// ld r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 160);
	// ld r9,-432(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -432);
	// subf r31,r10,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// beq cr6,0x82246208
	if (ctx.cr6.eq) goto loc_82246208;
	// ld r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 176);
	// ld r11,-416(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -416);
	// b 0x82246030
	goto loc_82246030;
loc_822460F4:
	// bl 0x822456a8
	ctx.lr = 0x822460F8;
	sub_822456A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246208
	if (ctx.cr0.eq) goto loc_82246208;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r8,r11,24552
	ctx.r8.s64 = ctx.r11.s64 + 24552;
	// ld r11,480(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 480);
	// ld r10,-112(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -112);
	// ld r9,472(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 472);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ld r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 40);
	// ld r10,-552(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -552);
	// ld r8,-120(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + -120);
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_8224612C:
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82246130:
	// bl 0x82245818
	ctx.lr = 0x82246134;
	sub_82245818(ctx, base);
	// b 0x8224620c
	goto loc_8224620C;
loc_82246138:
	// bl 0x822456a8
	ctx.lr = 0x8224613C;
	sub_822456A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246208
	if (ctx.cr0.eq) goto loc_82246208;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r8,r11,24552
	ctx.r8.s64 = ctx.r11.s64 + 24552;
	// ld r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 40);
	// ld r10,-552(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -552);
	// ld r9,488(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 488);
	// ld r8,-104(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + -104);
loc_8224615C:
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
	// b 0x8224612c
	goto loc_8224612C;
loc_82246164:
	// bl 0x822456a8
	ctx.lr = 0x82246168;
	sub_822456A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246208
	if (ctx.cr0.eq) goto loc_82246208;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r8,r11,24552
	ctx.r8.s64 = ctx.r11.s64 + 24552;
	// ld r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 40);
	// ld r10,-552(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -552);
	// ld r9,272(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 272);
	// ld r8,-320(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + -320);
	// b 0x8224615c
	goto loc_8224615C;
loc_8224618C:
	// bl 0x822456a8
	ctx.lr = 0x82246190;
	sub_822456A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246208
	if (ctx.cr0.eq) goto loc_82246208;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r8,r11,24552
	ctx.r8.s64 = ctx.r11.s64 + 24552;
	// ld r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 40);
	// ld r10,-552(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -552);
	// ld r9,128(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 128);
	// ld r8,-464(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + -464);
	// b 0x8224615c
	goto loc_8224615C;
loc_822461B4:
	// bl 0x822456a8
	ctx.lr = 0x822461B8;
	sub_822456A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246208
	if (ctx.cr0.eq) goto loc_82246208;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r8,r11,24552
	ctx.r8.s64 = ctx.r11.s64 + 24552;
	// ld r11,496(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 496);
	// ld r10,-96(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -96);
loc_822461D0:
	// ld r9,40(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 40);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ld r8,-552(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + -552);
	// rldicr r3,r11,1,62
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// subf r4,r9,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r9.s64;
	// b 0x82246130
	goto loc_82246130;
loc_822461E8:
	// bl 0x822456a8
	ctx.lr = 0x822461EC;
	sub_822456A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246208
	if (ctx.cr0.eq) goto loc_82246208;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r8,r11,24552
	ctx.r8.s64 = ctx.r11.s64 + 24552;
	// ld r11,504(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 504);
	// ld r10,-88(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -88);
	// b 0x822461d0
	goto loc_822461D0;
loc_82246208:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
loc_8224620C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8224622C"))) PPC_WEAK_FUNC(sub_8224622C);
PPC_FUNC_IMPL(__imp__sub_8224622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246230"))) PPC_WEAK_FUNC(sub_82246230);
PPC_FUNC_IMPL(__imp__sub_82246230) {
	PPC_FUNC_PROLOGUE();
	// b 0x82231720
	sub_82231720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82246234"))) PPC_WEAK_FUNC(sub_82246234);
PPC_FUNC_IMPL(__imp__sub_82246234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246238"))) PPC_WEAK_FUNC(sub_82246238);
PPC_FUNC_IMPL(__imp__sub_82246238) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8237aec8
	ctx.lr = 0x82246254;
	sub_8237AEC8(ctx, base);
	// rlwinm. r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246264
	if (ctx.cr0.eq) goto loc_82246264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822458f0
	ctx.lr = 0x82246264;
	sub_822458F0(ctx, base);
loc_82246264:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233eaf0
	ctx.lr = 0x82246274;
	sub_8233EAF0(ctx, base);
	// lwz r8,16952(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16952);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r9,r9,25136
	ctx.r9.s64 = ctx.r9.s64 + 25136;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r3,20764
	ctx.r3.s64 = 20764;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r9,r7,14616
	ctx.r9.s64 = ctx.r7.s64 + 14616;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r10,1912(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1912);
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r4,-32220
	ctx.r4.s64 = -2111569920;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r6,14376
	ctx.r8.s64 = ctx.r6.s64 + 14376;
	// stb r11,11072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11072, ctx.r11.u8);
	// addi r7,r5,14520
	ctx.r7.s64 = ctx.r5.s64 + 14520;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r9,r4,18632
	ctx.r9.s64 = ctx.r4.s64 + 18632;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246310
	if (ctx.cr6.eq) goto loc_82246310;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,82
	ctx.r3.s64 = 82;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1912(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1912);
	// b 0x82246314
	goto loc_82246314;
loc_82246310:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246314:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82246360
	if (!ctx.cr6.eq) goto loc_82246360;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246340
	if (ctx.cr6.eq) goto loc_82246340;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246360
	if (ctx.cr6.eq) goto loc_82246360;
	// b 0x82246350
	goto loc_82246350;
loc_82246340:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246360
	if (ctx.cr6.eq) goto loc_82246360;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82246350:
	// li r3,46
	ctx.r3.s64 = 46;
	// lwz r4,16952(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16952);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82246360:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// lwz r9,21928(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21928);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r9,r11,30,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stb r10,11072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11072, ctx.r10.u8);
	// stw r8,21932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21932, ctx.r8.u32);
	// stw r9,21928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21928, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_822463A0"))) PPC_WEAK_FUNC(sub_822463A0);
PPC_FUNC_IMPL(__imp__sub_822463A0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822463c4
	if (!ctx.cr6.eq) goto loc_822463C4;
	// lis r3,-32038
	ctx.r3.s64 = -2099642368;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// b 0x82246430
	goto loc_82246430;
loc_822463C4:
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x82246410
	if (ctx.cr6.gt) goto loc_82246410;
	// beq cr6,0x822463fc
	if (ctx.cr6.eq) goto loc_822463FC;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x822463fc
	if (ctx.cr6.eq) goto loc_822463FC;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// ble cr6,0x8224642c
	if (!ctx.cr6.gt) goto loc_8224642C;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x822463fc
	if (!ctx.cr6.gt) goto loc_822463FC;
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// ble cr6,0x8224642c
	if (!ctx.cr6.gt) goto loc_8224642C;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// bgt cr6,0x8224642c
	if (ctx.cr6.gt) goto loc_8224642C;
loc_822463FC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-14212
	ctx.r4.s64 = ctx.r11.s64 + -14212;
	// bl 0x82388e04
	ctx.lr = 0x8224640C;
	__imp__sprintf(ctx, base);
	// b 0x8224642c
	goto loc_8224642C;
loc_82246410:
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// beq cr6,0x82246424
	if (ctx.cr6.eq) goto loc_82246424;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x8224642c
	if (!ctx.cr6.eq) goto loc_8224642C;
	// b 0x822463fc
	goto loc_822463FC;
loc_82246424:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82241938
	ctx.lr = 0x8224642C;
	sub_82241938(ctx, base);
loc_8224642C:
	// lis r3,730
	ctx.r3.s64 = 47841280;
loc_82246430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82246440"))) PPC_WEAK_FUNC(sub_82246440);
PPC_FUNC_IMPL(__imp__sub_82246440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82246448;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82246614
	if (ctx.cr6.eq) goto loc_82246614;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246614
	if (ctx.cr6.eq) goto loc_82246614;
	// ld r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11008);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82246614
	if (ctx.cr6.eq) goto loc_82246614;
	// cmplwi cr6,r3,224
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 224, ctx.xer);
	// bgt cr6,0x82246524
	if (ctx.cr6.gt) goto loc_82246524;
	// beq cr6,0x822465dc
	if (ctx.cr6.eq) goto loc_822465DC;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82246510
	if (ctx.cr6.lt) goto loc_82246510;
	// beq cr6,0x82246510
	if (ctx.cr6.eq) goto loc_82246510;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// beq cr6,0x822464e4
	if (ctx.cr6.eq) goto loc_822464E4;
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// beq cr6,0x822464b0
	if (ctx.cr6.eq) goto loc_822464B0;
	// cmplwi cr6,r3,34
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 34, ctx.xer);
	// bne cr6,0x82246614
	if (!ctx.cr6.eq) goto loc_82246614;
	// stw r4,23752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23752, ctx.r4.u32);
	// b 0x82246614
	goto loc_82246614;
loc_822464B0:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// slw r8,r10,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,26400(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26400);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,26400(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26400, ctx.r11.u32);
	// bne cr6,0x82246614
	if (!ctx.cr6.eq) goto loc_82246614;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,22024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22024, ctx.r10.u32);
	// stw r11,22016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22016, ctx.r11.u32);
	// stw r11,22020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22020, ctx.r11.u32);
	// b 0x82246614
	goto loc_82246614;
loc_822464E4:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,26400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26400);
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// stw r11,26400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26400, ctx.r11.u32);
	// bne cr6,0x82246614
	if (!ctx.cr6.eq) goto loc_82246614;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22024, ctx.r11.u32);
	// b 0x82246614
	goto loc_82246614;
loc_82246510:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22024, ctx.r11.u32);
	// stw r11,26400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26400, ctx.r11.u32);
	// b 0x82246614
	goto loc_82246614;
loc_82246524:
	// cmplwi cr6,r3,225
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 225, ctx.xer);
	// beq cr6,0x822465dc
	if (ctx.cr6.eq) goto loc_822465DC;
	// cmplwi cr6,r3,226
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 226, ctx.xer);
	// beq cr6,0x822465dc
	if (ctx.cr6.eq) goto loc_822465DC;
	// cmplwi cr6,r3,227
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 227, ctx.xer);
	// beq cr6,0x822465d0
	if (ctx.cr6.eq) goto loc_822465D0;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bne cr6,0x82246614
	if (!ctx.cr6.eq) goto loc_82246614;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r11,26400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26400);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246588
	if (ctx.cr0.eq) goto loc_82246588;
	// lwz r11,21968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21968);
	// lfs f13,21984(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 21984);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8237ad40
	ctx.lr = 0x82246588;
	sub_8237AD40(ctx, base);
loc_82246588:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// li r29,17
	ctx.r29.s64 = 17;
	// addi r11,r11,-11896
	ctx.r11.s64 = ctx.r11.s64 + -11896;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_82246598:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r10,26400(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26400);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822465c0
	if (ctx.cr0.eq) goto loc_822465C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,-4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x82245d40
	ctx.lr = 0x822465B8;
	sub_82245D40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8237ad40
	ctx.lr = 0x822465C0;
	sub_8237AD40(ctx, base);
loc_822465C0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82246598
	if (!ctx.cr0.eq) goto loc_82246598;
	// b 0x82246614
	goto loc_82246614;
loc_822465D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244cb0
	ctx.lr = 0x822465D8;
	sub_82244CB0(ctx, base);
	// b 0x82246614
	goto loc_82246614;
loc_822465DC:
	// lwz r11,21924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246614
	if (ctx.cr6.eq) goto loc_82246614;
	// bl 0x82247330
	ctx.lr = 0x822465EC;
	sub_82247330(ctx, base);
	// lwz r11,11016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11016);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82246614
	if (!ctx.cr6.eq) goto loc_82246614;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82246610
	if (!ctx.cr6.gt) goto loc_82246610;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82246610;
	sub_82231210(ctx, base);
loc_82246610:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_82246614:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224661C"))) PPC_WEAK_FUNC(sub_8224661C);
PPC_FUNC_IMPL(__imp__sub_8224661C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246620"))) PPC_WEAK_FUNC(sub_82246620);
PPC_FUNC_IMPL(__imp__sub_82246620) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246660
	if (ctx.cr6.eq) goto loc_82246660;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246688
	if (ctx.cr6.eq) goto loc_82246688;
	// b 0x82246674
	goto loc_82246674;
loc_82246660:
	// lwz r11,1912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246688
	if (ctx.cr6.eq) goto loc_82246688;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82246674:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// addi r4,r10,25504
	ctx.r4.s64 = ctx.r10.s64 + 25504;
	// bctrl 
	ctx.lr = 0x82246688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82246688:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r10,1912(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r11,22168
	ctx.r11.s64 = ctx.r11.s64 + 22168;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822466bc
	if (ctx.cr6.eq) goto loc_822466BC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,66
	ctx.r3.s64 = 66;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822466BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822466BC:
	// lwz r11,1912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822466e4
	if (ctx.cr6.eq) goto loc_822466E4;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r3,89
	ctx.r3.s64 = 89;
	// addi r4,r10,25664
	ctx.r4.s64 = ctx.r10.s64 + 25664;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822466E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822466E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,22016(r30)
	PPC_STORE_U32(ctx.r30.u32 + 22016, ctx.r11.u32);
	// stw r11,22020(r30)
	PPC_STORE_U32(ctx.r30.u32 + 22020, ctx.r11.u32);
	// stw r10,22024(r30)
	PPC_STORE_U32(ctx.r30.u32 + 22024, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82246710"))) PPC_WEAK_FUNC(sub_82246710);
PPC_FUNC_IMPL(__imp__sub_82246710) {
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
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,1912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82246754
	if (ctx.cr6.eq) goto loc_82246754;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
loc_82246754:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r10,r10,22168
	ctx.r10.s64 = ctx.r10.s64 + 22168;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82246788
	if (ctx.cr6.eq) goto loc_82246788;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,65
	ctx.r3.s64 = 65;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
loc_82246788:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822467ac
	if (ctx.cr6.eq) goto loc_822467AC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r3,90
	ctx.r3.s64 = 90;
	// addi r4,r10,25664
	ctx.r4.s64 = ctx.r10.s64 + 25664;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822467AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822467AC:
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

__attribute__((alias("__imp__sub_822467C4"))) PPC_WEAK_FUNC(sub_822467C4);
PPC_FUNC_IMPL(__imp__sub_822467C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822467C8"))) PPC_WEAK_FUNC(sub_822467C8);
PPC_FUNC_IMPL(__imp__sub_822467C8) {
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
	// lwz r11,22040(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22040);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82246888
	if (!ctx.cr6.eq) goto loc_82246888;
	// lwz r11,22048(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22048);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82246800
	if (!ctx.cr6.eq) goto loc_82246800;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82246804
	goto loc_82246804;
loc_82246800:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82246804:
	// lwz r10,22044(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22044);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82246888
	if (ctx.cr6.eq) goto loc_82246888;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82246820
	if (!ctx.cr6.eq) goto loc_82246820;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82246820:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82246838
	if (!ctx.cr6.gt) goto loc_82246838;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82246838;
	sub_82231210(ctx, base);
loc_82246838:
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r11,r11,22528
	ctx.r11.u64 = ctx.r11.u64 | 22528;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// ori r8,r9,48879
	ctx.r8.u64 = ctx.r9.u64 | 48879;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,22036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22036);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_82246888:
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

__attribute__((alias("__imp__sub_822468A0"))) PPC_WEAK_FUNC(sub_822468A0);
PPC_FUNC_IMPL(__imp__sub_822468A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x822468A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22028(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22028);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822468dc
	if (!ctx.cr6.eq) goto loc_822468DC;
	// lis r4,-23680
	ctx.r4.s64 = -1551892480;
	// li r3,1952
	ctx.r3.s64 = 1952;
	// bl 0x82082c78
	ctx.lr = 0x822468C8;
	sub_82082C78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822468d8
	if (!ctx.cr0.eq) goto loc_822468D8;
loc_822468D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82246970
	goto loc_82246970;
loc_822468D8:
	// stw r3,22028(r30)
	PPC_STORE_U32(ctx.r30.u32 + 22028, ctx.r3.u32);
loc_822468DC:
	// lwz r11,22032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82246900
	if (!ctx.cr6.eq) goto loc_82246900;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82082c78
	ctx.lr = 0x822468F4;
	sub_82082C78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822468d0
	if (ctx.cr0.eq) goto loc_822468D0;
	// stw r3,22032(r30)
	PPC_STORE_U32(ctx.r30.u32 + 22032, ctx.r3.u32);
loc_82246900:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82246908:
	// lwz r11,22032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22032);
	// lwz r10,22028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22028);
	// add. r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r29,r27,r10
	ctx.r29.u64 = ctx.r27.u64 + ctx.r10.u64;
	// bne 0x82246930
	if (!ctx.cr0.eq) goto loc_82246930;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82082c78
	ctx.lr = 0x82246928;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8224695c
	if (ctx.cr0.eq) goto loc_8224695C;
loc_82246930:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82246978
	if (ctx.cr6.eq) goto loc_82246978;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8224693C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r3,480
	ctx.r4.s64 = ctx.r3.s64 + 480;
	// bl 0x8223b9b8
	ctx.lr = 0x82246948;
	sub_8223B9B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8224695C:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r27,r27,480
	ctx.r27.s64 = ctx.r27.s64 + 480;
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 64, ctx.xer);
	// blt cr6,0x82246908
	if (ctx.cr6.lt) goto loc_82246908;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82246970:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82246978:
	// lis r4,-23936
	ctx.r4.s64 = -1568669696;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x82082c78
	ctx.lr = 0x82246984;
	sub_82082C78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne 0x8224693c
	if (!ctx.cr0.eq) goto loc_8224693C;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082d58
	ctx.lr = 0x8224699C;
	sub_82082D58(ctx, base);
	// b 0x8224695c
	goto loc_8224695C;
}

__attribute__((alias("__imp__sub_822469A0"))) PPC_WEAK_FUNC(sub_822469A0);
PPC_FUNC_IMPL(__imp__sub_822469A0) {
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
	// lwz r10,17112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r10,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246b4c
	if (ctx.cr0.eq) goto loc_82246B4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1912);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822469e4
	if (ctx.cr6.eq) goto loc_822469E4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x822469e8
	goto loc_822469E8;
loc_822469E4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822469E8:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822469F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,17116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17116, ctx.r3.u32);
loc_822469F8:
	// stw r30,17112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17112, ctx.r30.u32);
loc_822469FC:
	// lwz r11,21976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21976);
	// lwz r10,21972(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21972);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// beq cr6,0x82246a30
	if (ctx.cr6.eq) goto loc_82246A30;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,21968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21968, ctx.r11.u32);
loc_82246A30:
	// ld r8,21992(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 21992);
	// ld r10,22000(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 22000);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,22040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22040);
	// stw r8,22008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22008, ctx.r8.u32);
	// std r30,21992(r31)
	PPC_STORE_U64(ctx.r31.u32 + 21992, ctx.r30.u64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r9,21976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21976, ctx.r9.u32);
	// stw r7,21972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21972, ctx.r7.u32);
	// stw r10,22012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22012, ctx.r10.u32);
	// std r30,22000(r31)
	PPC_STORE_U64(ctx.r31.u32 + 22000, ctx.r30.u64);
	// bne cr6,0x82246bb8
	if (!ctx.cr6.eq) goto loc_82246BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822468a0
	ctx.lr = 0x82246A6C;
	sub_822468A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246bb0
	if (ctx.cr0.eq) goto loc_82246BB0;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233eaf0
	ctx.lr = 0x82246A84;
	sub_8233EAF0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,13
	ctx.r8.s64 = 13;
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r9,37
	ctx.r9.s64 = 37;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// bne 0x82246b14
	if (!ctx.cr0.eq) goto loc_82246B14;
	// lbz r11,11070(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82246b08
	if (ctx.cr6.eq) goto loc_82246B08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231720
	ctx.lr = 0x82246B00;
	sub_82231720(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388db4
	ctx.lr = 0x82246B08;
	__imp__VdEnableDisableClockGating(ctx, base);
loc_82246B08:
	// lbz r11,11070(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,11070(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11070, ctx.r11.u8);
loc_82246B14:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232510
	ctx.lr = 0x82246B20;
	sub_82232510(ctx, base);
	// lwz r11,22036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22036);
	// stw r30,22044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22044, ctx.r30.u32);
	// stw r30,22048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22048, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82246b40
	if (!ctx.cr6.eq) goto loc_82246B40;
	// lwz r11,22028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22028);
	// addi r11,r11,1920
	ctx.r11.s64 = ctx.r11.s64 + 1920;
	// stw r11,22036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22036, ctx.r11.u32);
loc_82246B40:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,22040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22040, ctx.r11.u32);
	// b 0x82246c2c
	goto loc_82246C2C;
loc_82246B4C:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822469fc
	if (ctx.cr0.eq) goto loc_822469FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1912);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246b70
	if (ctx.cr6.eq) goto loc_82246B70;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82246b74
	goto loc_82246B74;
loc_82246B70:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82246B74:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// rlwinm r4,r10,20,4,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFF00000;
	// addi r3,r9,-14020
	ctx.r3.s64 = ctx.r9.s64 + -14020;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,17116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17116, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822469f8
	if (ctx.cr0.lt) goto loc_822469F8;
	// lwz r11,17112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17112);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,10,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,17112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17112, ctx.r11.u32);
	// b 0x822469fc
	goto loc_822469FC;
loc_82246BB0:
	// stw r30,22040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22040, ctx.r30.u32);
	// b 0x82246c2c
	goto loc_82246C2C;
loc_82246BB8:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82246c2c
	if (!ctx.cr6.eq) goto loc_82246C2C;
	// lbz r11,11070(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82246bf8
	if (!ctx.cr0.eq) goto loc_82246BF8;
	// lbz r11,11070(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82246bec
	if (ctx.cr6.eq) goto loc_82246BEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231720
	ctx.lr = 0x82246BE4;
	sub_82231720(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388db4
	ctx.lr = 0x82246BEC;
	__imp__VdEnableDisableClockGating(ctx, base);
loc_82246BEC:
	// lbz r11,11070(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,11070(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11070, ctx.r11.u8);
loc_82246BF8:
	// lwz r11,22048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22048);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82246c08
	if (ctx.cr6.eq) goto loc_82246C08;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_82246C08:
	// lwz r11,22044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22044);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82246c2c
	if (ctx.cr6.eq) goto loc_82246C2C;
	// lwz r10,22032(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22032);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82232ba8
	ctx.lr = 0x82246C28;
	sub_82232BA8(ctx, base);
	// stw r30,22048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22048, ctx.r30.u32);
loc_82246C2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82246238
	ctx.lr = 0x82246C34;
	sub_82246238(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246c60
	if (ctx.cr6.eq) goto loc_82246C60;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246c60
	if (ctx.cr6.eq) goto loc_82246C60;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82246C60:
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

__attribute__((alias("__imp__sub_82246C78"))) PPC_WEAK_FUNC(sub_82246C78);
PPC_FUNC_IMPL(__imp__sub_82246C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82246C80;
	__savegprlr_28(ctx, base);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82388a14
	ctx.lr = 0x82246C94;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lwz r3,1612(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1612);
	// bl 0x82388aa4
	ctx.lr = 0x82246CA0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82246cb0
	if (ctx.cr6.eq) goto loc_82246CB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388f34
	ctx.lr = 0x82246CB0;
	__imp__VdRetrainEDRAMWorker(ctx, base);
loc_82246CB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388f24
	ctx.lr = 0x82246CD8;
	__imp__VdRetrainEDRAM(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246d44
	if (ctx.cr0.eq) goto loc_82246D44;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82246cf0
	if (!ctx.cr6.eq) goto loc_82246CF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231720
	ctx.lr = 0x82246CF0;
	sub_82231720(ctx, base);
loc_82246CF0:
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fc30
	ctx.lr = 0x82246CFC;
	sub_8222FC30(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388f24
	ctx.lr = 0x82246D20;
	__imp__VdRetrainEDRAM(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82231720
	ctx.lr = 0x82246D3C;
	sub_82231720(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82246cf0
	if (!ctx.cr6.eq) goto loc_82246CF0;
loc_82246D44:
	// lwz r3,1612(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1612);
	// bl 0x82388a64
	ctx.lr = 0x82246D4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x823889f4
	ctx.lr = 0x82246D50;
	__imp__KeLeaveCriticalRegion(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82246D5C"))) PPC_WEAK_FUNC(sub_82246D5C);
PPC_FUNC_IMPL(__imp__sub_82246D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246D60"))) PPC_WEAK_FUNC(sub_82246D60);
PPC_FUNC_IMPL(__imp__sub_82246D60) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,1468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82388f44
	ctx.lr = 0x82246D9C;
	__imp__KeSetCurrentProcessType(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388f44
	ctx.lr = 0x82246DB4;
	__imp__KeSetCurrentProcessType(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// not r8,r30
	ctx.r8.u64 = ~ctx.r30.u64;
	// addi r6,r11,24556
	ctx.r6.s64 = ctx.r11.s64 + 24556;
loc_82246DC0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82246dc0
	if (!ctx.cr0.eq) goto loc_82246DC0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82246dfc
	if (!ctx.cr6.eq) goto loc_82246DFC;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-16064
	ctx.r3.s64 = ctx.r11.s64 + -16064;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82388a94
	ctx.lr = 0x82246DFC;
	__imp__KeSetEvent(ctx, base);
loc_82246DFC:
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

__attribute__((alias("__imp__sub_82246E14"))) PPC_WEAK_FUNC(sub_82246E14);
PPC_FUNC_IMPL(__imp__sub_82246E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246E18"))) PPC_WEAK_FUNC(sub_82246E18);
PPC_FUNC_IMPL(__imp__sub_82246E18) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lwz r11,2120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82246e48
	if (ctx.cr0.lt) goto loc_82246E48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82246e50
	goto loc_82246E50;
loc_82246E48:
	// bl 0x8224b498
	ctx.lr = 0x82246E4C;
	sub_8224B498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246E50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82246E60"))) PPC_WEAK_FUNC(sub_82246E60);
PPC_FUNC_IMPL(__imp__sub_82246E60) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82246e9c
	if (ctx.cr6.eq) goto loc_82246E9C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8224b4f0
	ctx.lr = 0x82246E94;
	sub_8224B4F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82246ea0
	goto loc_82246EA0;
loc_82246E9C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82246EA0:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388754
	ctx.lr = 0x82246EB4;
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82246edc
	if (ctx.cr0.lt) goto loc_82246EDC;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x82246ed0
	if (ctx.cr6.eq) goto loc_82246ED0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246ED0:
	// bl 0x8224b480
	ctx.lr = 0x82246ED4;
	sub_8224B480(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82246ee4
	goto loc_82246EE4;
loc_82246EDC:
	// bl 0x8224b498
	ctx.lr = 0x82246EE0;
	sub_8224B498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246EE4:
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

__attribute__((alias("__imp__sub_82246EFC"))) PPC_WEAK_FUNC(sub_82246EFC);
PPC_FUNC_IMPL(__imp__sub_82246EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246F00"))) PPC_WEAK_FUNC(sub_82246F00);
PPC_FUNC_IMPL(__imp__sub_82246F00) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,1924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// bl 0x82388784
	ctx.lr = 0x82246F24;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82246f64
	if (ctx.cr0.lt) goto loc_82246F64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 15, ctx.xer);
	// bne cr6,0x82246f40
	if (!ctx.cr6.eq) goto loc_82246F40;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82246f4c
	goto loc_82246F4C;
loc_82246F40:
	// cmpwi cr6,r31,-15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -15, ctx.xer);
	// bne cr6,0x82246f4c
	if (!ctx.cr6.eq) goto loc_82246F4C;
	// li r4,-16
	ctx.r4.s64 = -16;
loc_82246F4C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388774
	ctx.lr = 0x82246F54;
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388764
	ctx.lr = 0x82246F5C;
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82246f6c
	goto loc_82246F6C;
loc_82246F64:
	// bl 0x8224b548
	ctx.lr = 0x82246F68;
	sub_8224B548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246F6C:
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

__attribute__((alias("__imp__sub_82246F80"))) PPC_WEAK_FUNC(sub_82246F80);
PPC_FUNC_IMPL(__imp__sub_82246F80) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// bl 0x82388784
	ctx.lr = 0x82246FA0;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82246fe0
	if (ctx.cr0.lt) goto loc_82246FE0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388794
	ctx.lr = 0x82246FB0;
	__imp__KeQueryBasePriorityThread(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bne cr6,0x82246fc4
	if (!ctx.cr6.eq) goto loc_82246FC4;
	// li r31,15
	ctx.r31.s64 = 15;
	// b 0x82246fd0
	goto loc_82246FD0;
loc_82246FC4:
	// cmpwi cr6,r31,-16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -16, ctx.xer);
	// bne cr6,0x82246fd0
	if (!ctx.cr6.eq) goto loc_82246FD0;
	// li r31,-15
	ctx.r31.s64 = -15;
loc_82246FD0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388764
	ctx.lr = 0x82246FD8;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82246fec
	goto loc_82246FEC;
loc_82246FE0:
	// bl 0x8224b548
	ctx.lr = 0x82246FE4;
	sub_8224B548(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82246FEC:
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

__attribute__((alias("__imp__sub_82247000"))) PPC_WEAK_FUNC(sub_82247000);
PPC_FUNC_IMPL(__imp__sub_82247000) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,1924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// bl 0x82388784
	ctx.lr = 0x82247024;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82247058
	if (ctx.cr0.lt) goto loc_82247058;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82247044
	if (ctx.cr0.eq) goto loc_82247044;
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// b 0x82247048
	goto loc_82247048;
loc_82247044:
	// li r11,259
	ctx.r11.s64 = 259;
loc_82247048:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82388764
	ctx.lr = 0x82247050;
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82247060
	goto loc_82247060;
loc_82247058:
	// bl 0x8224b548
	ctx.lr = 0x8224705C;
	sub_8224B548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82247060:
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

__attribute__((alias("__imp__sub_82247074"))) PPC_WEAK_FUNC(sub_82247074);
PPC_FUNC_IMPL(__imp__sub_82247074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247078"))) PPC_WEAK_FUNC(sub_82247078);
PPC_FUNC_IMPL(__imp__sub_82247078) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,10964(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10964);
	// stw r11,10964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10964, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224708C"))) PPC_WEAK_FUNC(sub_8224708C);
PPC_FUNC_IMPL(__imp__sub_8224708C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247090"))) PPC_WEAK_FUNC(sub_82247090);
PPC_FUNC_IMPL(__imp__sub_82247090) {
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
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bge cr6,0x822470ec
	if (!ctx.cr6.lt) goto loc_822470EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// bl 0x82388784
	ctx.lr = 0x822470C0;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8224711c
	if (ctx.cr0.lt) goto loc_8224711C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// slw r4,r11,r30
	ctx.r4.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// bl 0x823887a4
	ctx.lr = 0x822470DC;
	__imp__KeSetAffinityThread(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388764
	ctx.lr = 0x822470E8;
	__imp__ObDereferenceObject(ctx, base);
	// b 0x822470f4
	goto loc_822470F4;
loc_822470EC:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
loc_822470F4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8224711c
	if (ctx.cr6.lt) goto loc_8224711C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247114
	if (ctx.cr6.eq) goto loc_82247114;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r3,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r3.s64 = 31 - ctx.r11.s64;
	// b 0x82247128
	goto loc_82247128;
loc_82247114:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82247128
	goto loc_82247128;
loc_8224711C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224b548
	ctx.lr = 0x82247124;
	sub_8224B548(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82247128:
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

__attribute__((alias("__imp__sub_82247140"))) PPC_WEAK_FUNC(sub_82247140);
PPC_FUNC_IMPL(__imp__sub_82247140) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1912);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247180
	if (ctx.cr6.eq) goto loc_82247180;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224717C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82247184
	goto loc_82247184;
loc_82247180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82247184:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822471b8
	if (!ctx.cr6.eq) goto loc_822471B8;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lwz r10,10964(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10964);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822471b8
	if (ctx.cr6.eq) goto loc_822471B8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822471AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x822471bc
	if (ctx.cr6.eq) goto loc_822471BC;
loc_822471B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822471BC:
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

__attribute__((alias("__imp__sub_822471D0"))) PPC_WEAK_FUNC(sub_822471D0);
PPC_FUNC_IMPL(__imp__sub_822471D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224b4d0
	sub_8224B4D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822471D4"))) PPC_WEAK_FUNC(sub_822471D4);
PPC_FUNC_IMPL(__imp__sub_822471D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822471D8"))) PPC_WEAK_FUNC(sub_822471D8);
PPC_FUNC_IMPL(__imp__sub_822471D8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823887b4
	ctx.lr = 0x822471EC;
	__imp__NtSetEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822471fc
	if (ctx.cr0.lt) goto loc_822471FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82247204
	goto loc_82247204;
loc_822471FC:
	// bl 0x8224b498
	ctx.lr = 0x82247200;
	sub_8224B498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82247204:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247214"))) PPC_WEAK_FUNC(sub_82247214);
PPC_FUNC_IMPL(__imp__sub_82247214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247218"))) PPC_WEAK_FUNC(sub_82247218);
PPC_FUNC_IMPL(__imp__sub_82247218) {
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
	// bl 0x823887c4
	ctx.lr = 0x82247228;
	__imp__NtClearEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82247238
	if (ctx.cr0.lt) goto loc_82247238;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82247240
	goto loc_82247240;
loc_82247238:
	// bl 0x8224b498
	ctx.lr = 0x8224723C;
	sub_8224B498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82247240:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247250"))) PPC_WEAK_FUNC(sub_82247250);
PPC_FUNC_IMPL(__imp__sub_82247250) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8224b550
	sub_8224B550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247258"))) PPC_WEAK_FUNC(sub_82247258);
PPC_FUNC_IMPL(__imp__sub_82247258) {
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
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,-7232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82247284
	if (ctx.cr6.eq) goto loc_82247284;
	// rlwinm r5,r5,0,3,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
loc_82247284:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x822472a0
	if (ctx.cr6.eq) goto loc_822472A0;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x822472a8
	goto loc_822472A8;
loc_822472A0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_822472A8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823887d4
	ctx.lr = 0x822472B4;
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822472c4
	if (!ctx.cr0.eq) goto loc_822472C4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8224b5b8
	ctx.lr = 0x822472C4;
	sub_8224B5B8(ctx, base);
loc_822472C4:
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

__attribute__((alias("__imp__sub_822472DC"))) PPC_WEAK_FUNC(sub_822472DC);
PPC_FUNC_IMPL(__imp__sub_822472DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822472E0"))) PPC_WEAK_FUNC(sub_822472E0);
PPC_FUNC_IMPL(__imp__sub_822472E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823887e4
	__imp__MmSetAddressProtect(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822472EC"))) PPC_WEAK_FUNC(sub_822472EC);
PPC_FUNC_IMPL(__imp__sub_822472EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822472F0"))) PPC_WEAK_FUNC(sub_822472F0);
PPC_FUNC_IMPL(__imp__sub_822472F0) {
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
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// bl 0x8224b7a8
	ctx.lr = 0x82247304;
	sub_8224B7A8(ctx, base);
	// addi r11,r3,-192
	ctx.r11.s64 = ctx.r3.s64 + -192;
	// li r10,192
	ctx.r10.s64 = 192;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247328"))) PPC_WEAK_FUNC(sub_82247328);
PPC_FUNC_IMPL(__imp__sub_82247328) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8224b7a8
	sub_8224B7A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247330"))) PPC_WEAK_FUNC(sub_82247330);
PPC_FUNC_IMPL(__imp__sub_82247330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,332(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224733C"))) PPC_WEAK_FUNC(sub_8224733C);
PPC_FUNC_IMPL(__imp__sub_8224733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247340"))) PPC_WEAK_FUNC(sub_82247340);
PPC_FUNC_IMPL(__imp__sub_82247340) {
	PPC_FUNC_PROLOGUE();
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// rotlwi. r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82247350
	if (!ctx.cr0.eq) goto loc_82247350;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
loc_82247350:
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224735C"))) PPC_WEAK_FUNC(sub_8224735C);
PPC_FUNC_IMPL(__imp__sub_8224735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247360"))) PPC_WEAK_FUNC(sub_82247360);
PPC_FUNC_IMPL(__imp__sub_82247360) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8224739c
	if (ctx.cr6.eq) goto loc_8224739C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8224b4f0
	ctx.lr = 0x82247394;
	sub_8224B4F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822473a0
	goto loc_822473A0;
loc_8224739C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822473A0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388824
	ctx.lr = 0x822473B0;
	__imp__NtCreateSemaphore(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822473d8
	if (ctx.cr0.lt) goto loc_822473D8;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x822473cc
	if (ctx.cr6.eq) goto loc_822473CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822473CC:
	// bl 0x8224b5b8
	ctx.lr = 0x822473D0;
	sub_8224B5B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x822473e0
	goto loc_822473E0;
loc_822473D8:
	// bl 0x8224b548
	ctx.lr = 0x822473DC;
	sub_8224B548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822473E0:
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

__attribute__((alias("__imp__sub_822473F8"))) PPC_WEAK_FUNC(sub_822473F8);
PPC_FUNC_IMPL(__imp__sub_822473F8) {
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
	// bl 0x82388834
	ctx.lr = 0x82247408;
	__imp__NtReleaseSemaphore(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82247418
	if (ctx.cr0.lt) goto loc_82247418;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82247420
	goto loc_82247420;
loc_82247418:
	// bl 0x8224b548
	ctx.lr = 0x8224741C;
	sub_8224B548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82247420:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247430"))) PPC_WEAK_FUNC(sub_82247430);
PPC_FUNC_IMPL(__imp__sub_82247430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388814
	ctx.lr = 0x82247448;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82388844
	ctx.lr = 0x8224746C;
	__imp__NtQueryFullAttributesFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224747c
	if (ctx.cr0.lt) goto loc_8224747C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// b 0x82247484
	goto loc_82247484;
loc_8224747C:
	// bl 0x8224b498
	ctx.lr = 0x82247480;
	sub_8224B498(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82247484:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247494"))) PPC_WEAK_FUNC(sub_82247494);
PPC_FUNC_IMPL(__imp__sub_82247494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247498"))) PPC_WEAK_FUNC(sub_82247498);
PPC_FUNC_IMPL(__imp__sub_82247498) {
	PPC_FUNC_PROLOGUE();
	// b 0x82388854
	__imp__DbgBreakPoint(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224749C"))) PPC_WEAK_FUNC(sub_8224749C);
PPC_FUNC_IMPL(__imp__sub_8224749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822474A0"))) PPC_WEAK_FUNC(sub_822474A0);
PPC_FUNC_IMPL(__imp__sub_822474A0) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// li r3,251
	ctx.r3.s64 = 251;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82388464
	ctx.lr = 0x822474D4;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822474e4
	if (!ctx.cr0.lt) goto loc_822474E4;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82247504
	goto loc_82247504;
loc_822474E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82247500
	if (!ctx.cr6.eq) goto loc_82247500;
	// bl 0x8224b4d0
	ctx.lr = 0x822474F0;
	sub_8224B4D0(ctx, base);
	// li r11,1627
	ctx.r11.s64 = 1627;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x82247504
	goto loc_82247504;
loc_82247500:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82247504:
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

__attribute__((alias("__imp__sub_82247518"))) PPC_WEAK_FUNC(sub_82247518);
PPC_FUNC_IMPL(__imp__sub_82247518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x82388464
	ctx.lr = 0x8224755C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224756c
	if (!ctx.cr0.lt) goto loc_8224756C;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82247590
	goto loc_82247590;
loc_8224756C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8224758c
	if (!ctx.cr6.eq) goto loc_8224758C;
	// bl 0x8224b4d0
	ctx.lr = 0x82247578;
	sub_8224B4D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82247590
	goto loc_82247590;
loc_8224758C:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82247590:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822475A4"))) PPC_WEAK_FUNC(sub_822475A4);
PPC_FUNC_IMPL(__imp__sub_822475A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822475A8"))) PPC_WEAK_FUNC(sub_822475A8);
PPC_FUNC_IMPL(__imp__sub_822475A8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82247518
	sub_82247518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822475B0"))) PPC_WEAK_FUNC(sub_822475B0);
PPC_FUNC_IMPL(__imp__sub_822475B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0000000;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bne cr6,0x82247604
	if (!ctx.cr6.eq) goto loc_82247604;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82388864
	ctx.lr = 0x822475F4;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82247604
	if (!ctx.cr0.eq) goto loc_82247604;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82247654
	goto loc_82247654;
loc_82247604:
	// lis r4,11
	ctx.r4.s64 = 720896;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x82388464
	ctx.lr = 0x82247620;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82247630
	if (!ctx.cr0.lt) goto loc_82247630;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82247654
	goto loc_82247654;
loc_82247630:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82247650
	if (!ctx.cr6.eq) goto loc_82247650;
	// bl 0x8224b4d0
	ctx.lr = 0x8224763C;
	sub_8224B4D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82247654
	goto loc_82247654;
loc_82247650:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82247654:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247668"))) PPC_WEAK_FUNC(sub_82247668);
PPC_FUNC_IMPL(__imp__sub_82247668) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x822475b0
	sub_822475B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247670"))) PPC_WEAK_FUNC(sub_82247670);
PPC_FUNC_IMPL(__imp__sub_82247670) {
	PPC_FUNC_PROLOGUE();
	// b 0x82388474
	__imp__XamUserGetName(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247674"))) PPC_WEAK_FUNC(sub_82247674);
PPC_FUNC_IMPL(__imp__sub_82247674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247678"))) PPC_WEAK_FUNC(sub_82247678);
PPC_FUNC_IMPL(__imp__sub_82247678) {
	PPC_FUNC_PROLOGUE();
	// b 0x82388484
	__imp__XamUserGetSigninState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224767C"))) PPC_WEAK_FUNC(sub_8224767C);
PPC_FUNC_IMPL(__imp__sub_8224767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247680"))) PPC_WEAK_FUNC(sub_82247680);
PPC_FUNC_IMPL(__imp__sub_82247680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82247688;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mulli r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 * 52;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// beq cr6,0x822476cc
	if (ctx.cr6.eq) goto loc_822476CC;
	// addi r7,r7,-132
	ctx.r7.s64 = ctx.r7.s64 + -132;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_822476B8:
	// lwzu r6,136(r7)
	ea = 136 + ctx.r7.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// mulli r6,r6,28
	ctx.r6.s64 = ctx.r6.s64 * 28;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x822476b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822476B8;
loc_822476CC:
	// lwz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x822476e4
	if (!ctx.cr6.gt) goto loc_822476E4;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82247750
	goto loc_82247750;
loc_822476E4:
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x82388464
	ctx.lr = 0x8224771C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224772c
	if (!ctx.cr0.lt) goto loc_8224772C;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82247750
	goto loc_82247750;
loc_8224772C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8224774c
	if (!ctx.cr6.eq) goto loc_8224774C;
	// bl 0x8224b4d0
	ctx.lr = 0x82247738;
	sub_8224B4D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82247750
	goto loc_82247750;
loc_8224774C:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82247750:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247758"))) PPC_WEAK_FUNC(sub_82247758);
PPC_FUNC_IMPL(__imp__sub_82247758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82247760;
	__savegprlr_25(ctx, base);
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
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x8224b858
	ctx.lr = 0x82247784;
	sub_8224B858(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822477b0
	if (!ctx.cr0.eq) goto loc_822477B0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// clrldi r5,r30,32
	ctx.r5.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823884a4
	ctx.lr = 0x822477B0;
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_822477B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822477B8"))) PPC_WEAK_FUNC(sub_822477B8);
PPC_FUNC_IMPL(__imp__sub_822477B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x822477C0;
	__savegprlr_25(ctx, base);
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
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x8224b858
	ctx.lr = 0x822477E4;
	sub_8224B858(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82247810
	if (!ctx.cr0.eq) goto loc_82247810;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823884a4
	ctx.lr = 0x82247810;
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_82247810:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247818"))) PPC_WEAK_FUNC(sub_82247818);
PPC_FUNC_IMPL(__imp__sub_82247818) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// oris r6,r4,1
	ctx.r6.u64 = ctx.r4.u64 | 65536;
	// oris r5,r4,2
	ctx.r5.u64 = ctx.r4.u64 | 131072;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823884b4
	__imp__XamWriteGamerTile(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247830"))) PPC_WEAK_FUNC(sub_82247830);
PPC_FUNC_IMPL(__imp__sub_82247830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82247838;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x8224b858
	ctx.lr = 0x82247860;
	sub_8224B858(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822478ac
	if (!ctx.cr0.eq) goto loc_822478AC;
	// rldicl r11,r30,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 16) & 0xFFFF;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x82247888
	if (!ctx.cr6.eq) goto loc_82247888;
	// rlwinm. r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82247888
	if (ctx.cr0.eq) goto loc_82247888;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x822478ac
	goto loc_822478AC;
loc_82247888:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823884c4
	ctx.lr = 0x822478AC;
	__imp__XamUserCreateAchievementEnumerator(ctx, base);
loc_822478AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822478B4"))) PPC_WEAK_FUNC(sub_822478B4);
PPC_FUNC_IMPL(__imp__sub_822478B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822478B8"))) PPC_WEAK_FUNC(sub_822478B8);
PPC_FUNC_IMPL(__imp__sub_822478B8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x823884d4
	ctx.lr = 0x822478D0;
	__imp__XamUserGetXUID(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822478e0
	if (ctx.cr0.lt) goto loc_822478E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822478f8
	goto loc_822478F8;
loc_822478E0:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822478f8
	if (ctx.cr6.eq) goto loc_822478F8;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_822478F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247908"))) PPC_WEAK_FUNC(sub_82247908);
PPC_FUNC_IMPL(__imp__sub_82247908) {
	PPC_FUNC_PROLOGUE();
	// b 0x823884e4
	__imp__XamShowSigninUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224790C"))) PPC_WEAK_FUNC(sub_8224790C);
PPC_FUNC_IMPL(__imp__sub_8224790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247910"))) PPC_WEAK_FUNC(sub_82247910);
PPC_FUNC_IMPL(__imp__sub_82247910) {
	PPC_FUNC_PROLOGUE();
	// b 0x823884f4
	__imp__XamShowKeyboardUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247914"))) PPC_WEAK_FUNC(sub_82247914);
PPC_FUNC_IMPL(__imp__sub_82247914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247918"))) PPC_WEAK_FUNC(sub_82247918);
PPC_FUNC_IMPL(__imp__sub_82247918) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82388504
	__imp__XamShowGamerCardUIForXUID(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247920"))) PPC_WEAK_FUNC(sub_82247920);
PPC_FUNC_IMPL(__imp__sub_82247920) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x82388514
	__imp__XamShowMarketplaceUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247930"))) PPC_WEAK_FUNC(sub_82247930);
PPC_FUNC_IMPL(__imp__sub_82247930) {
	PPC_FUNC_PROLOGUE();
	// b 0x82388524
	__imp__XamShowDeviceSelectorUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247934"))) PPC_WEAK_FUNC(sub_82247934);
PPC_FUNC_IMPL(__imp__sub_82247934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247938"))) PPC_WEAK_FUNC(sub_82247938);
PPC_FUNC_IMPL(__imp__sub_82247938) {
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
	// bl 0x82388534
	ctx.lr = 0x82247948;
	__imp__XamShowDirtyDiscErrorUI(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82248678
	ctx.lr = 0x82247954;
	sub_82248678(ctx, base);
}

__attribute__((alias("__imp__sub_82247954"))) PPC_WEAK_FUNC(sub_82247954);
PPC_FUNC_IMPL(__imp__sub_82247954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247958"))) PPC_WEAK_FUNC(sub_82247958);
PPC_FUNC_IMPL(__imp__sub_82247958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82247960;
	__savegprlr_29(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x82247990
	if (!ctx.cr6.lt) goto loc_82247990;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82247af4
	if (ctx.cr6.eq) goto loc_82247AF4;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82247980:
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82247980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247980;
	// b 0x82247af4
	goto loc_82247AF4;
loc_82247990:
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// vspltisb v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x4)));
	// lvsl v13,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvsl v12,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// vslb v0,v12,v0
	ctx.v0.u8[0] = ctx.v12.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v0.u8[1] = ctx.v12.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v0.u8[2] = ctx.v12.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v0.u8[3] = ctx.v12.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v0.u8[4] = ctx.v12.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v0.u8[5] = ctx.v12.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v0.u8[6] = ctx.v12.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v0.u8[7] = ctx.v12.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v0.u8[8] = ctx.v12.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v0.u8[9] = ctx.v12.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v0.u8[10] = ctx.v12.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v0.u8[11] = ctx.v12.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v0.u8[12] = ctx.v12.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v0.u8[13] = ctx.v12.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v0.u8[14] = ctx.v12.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v0.u8[15] = ctx.v12.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vspltb v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_set1_epi8(char(0xF))));
	// beq 0x822479cc
	if (ctx.cr0.eq) goto loc_822479CC;
	// stvlx v0,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_822479CC:
	// rlwinm r11,r5,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822479dc
	if (!ctx.cr6.lt) goto loc_822479DC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822479DC:
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r6,1936(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1936);
	// beq cr6,0x822479fc
	if (ctx.cr6.eq) goto loc_822479FC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822479F0:
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x822479f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822479F0;
loc_822479FC:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi. r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r7,r11,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r11,r7,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// bne 0x82247a2c
	if (!ctx.cr0.eq) goto loc_82247A2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247ac8
	if (ctx.cr6.eq) goto loc_82247AC8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82247A1C:
	// dcbzl r0,r10
	memset(base + ((ctx.r10.u32) & ~127), 0, 128);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x82247a1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247A1C;
	// b 0x82247ac8
	goto loc_82247AC8;
loc_82247A2C:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// blt cr6,0x82247a3c
	if (ctx.cr6.lt) goto loc_82247A3C;
	// li r8,4
	ctx.r8.s64 = 4;
loc_82247A3C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82247a5c
	if (ctx.cr6.eq) goto loc_82247A5C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82247A4C:
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// dcbzl r8,r10
	memset(base + ((ctx.r8.u32 + ctx.r10.u32) & ~127), 0, 128);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82247a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247A4C;
loc_82247A5C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247ac8
	if (ctx.cr6.eq) goto loc_82247AC8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82247A6C:
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82247a80
	if (!ctx.cr6.lt) goto loc_82247A80;
	// li r8,512
	ctx.r8.s64 = 512;
	// dcbzl r8,r10
	memset(base + ((ctx.r8.u32 + ctx.r10.u32) & ~127), 0, 128);
loc_82247A80:
	// li r8,16
	ctx.r8.s64 = 16;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r31,64
	ctx.r31.s64 = 64;
	// li r30,80
	ctx.r30.s64 = 80;
	// stvx128 v0,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,96
	ctx.r29.s64 = 96;
	// li r8,112
	ctx.r8.s64 = 112;
	// stvx128 v0,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stvx128 v0,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x82247a6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247A6C;
loc_82247AC8:
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82247af0
	if (ctx.cr6.lt) goto loc_82247AF0;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82247AE0:
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bdnz 0x82247ae0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247AE0;
loc_82247AF0:
	// stvrx v0,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
loc_82247AF4:
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247AF8"))) PPC_WEAK_FUNC(sub_82247AF8);
PPC_FUNC_IMPL(__imp__sub_82247AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82247B00;
	__savegprlr_28(ctx, base);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r30,r5,25,7,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82247b30
	if (!ctx.cr6.eq) goto loc_82247B30;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82247bf0
	if (ctx.cr6.eq) goto loc_82247BF0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82247B20:
	// dcbzl r0,r10
	memset(base + ((ctx.r10.u32) & ~127), 0, 128);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x82247b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247B20;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82247B30:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// blt cr6,0x82247b40
	if (ctx.cr6.lt) goto loc_82247B40;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82247B40:
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// vspltisb v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x4)));
	// lvsl v13,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lvsl v12,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslb v11,v12,v0
	ctx.v11.u8[0] = ctx.v12.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v11.u8[1] = ctx.v12.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v11.u8[2] = ctx.v12.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v11.u8[3] = ctx.v12.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v11.u8[4] = ctx.v12.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v11.u8[5] = ctx.v12.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v11.u8[6] = ctx.v12.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v11.u8[7] = ctx.v12.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v11.u8[8] = ctx.v12.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v11.u8[9] = ctx.v12.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v11.u8[10] = ctx.v12.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v11.u8[11] = ctx.v12.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v11.u8[12] = ctx.v12.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v11.u8[13] = ctx.v12.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v11.u8[14] = ctx.v12.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v11.u8[15] = ctx.v12.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vor v10,v13,v11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vspltb v0,v10,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_set1_epi8(char(0xF))));
	// beq cr6,0x82247b80
	if (ctx.cr6.eq) goto loc_82247B80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
loc_82247B70:
	// dcbzl r10,r3
	memset(base + ((ctx.r10.u32 + ctx.r3.u32) & ~127), 0, 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// bdnz 0x82247b70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247B70;
loc_82247B80:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82247bf0
	if (ctx.cr6.eq) goto loc_82247BF0;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// li r31,-32
	ctx.r31.s64 = -32;
	// li r4,-16
	ctx.r4.s64 = -16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r9,80
	ctx.r9.s64 = 80;
loc_82247BB0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82247bc8
	if (!ctx.cr6.lt) goto loc_82247BC8;
	// addi r29,r11,-32
	ctx.r29.s64 = ctx.r11.s64 + -32;
	// li r28,128
	ctx.r28.s64 = 128;
	// dcbzl r28,r29
	memset(base + ((ctx.r28.u32 + ctx.r29.u32) & ~127), 0, 128);
loc_82247BC8:
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82247bb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247BB0;
loc_82247BF0:
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247BF4"))) PPC_WEAK_FUNC(sub_82247BF4);
PPC_FUNC_IMPL(__imp__sub_82247BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247BF8"))) PPC_WEAK_FUNC(sub_82247BF8);
PPC_FUNC_IMPL(__imp__sub_82247BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82247C00;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x82247cb8
	if (!ctx.cr6.lt) goto loc_82247CB8;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x82247c44
	if (ctx.cr6.lt) goto loc_82247C44;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82247c44
	if (!ctx.cr6.eq) goto loc_82247C44;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
loc_82247C44:
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82247c84
	if (!ctx.cr6.eq) goto loc_82247C84;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x82247c84
	if (ctx.cr6.lt) goto loc_82247C84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r29,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r28,r29,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x8233e968
	ctx.lr = 0x82247C6C;
	sub_8233E968(ctx, base);
	// rlwinm r11,r29,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82247C78:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bne 0x82247c78
	if (!ctx.cr0.eq) goto loc_82247C78;
loc_82247C84:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82247ee0
	if (ctx.cr6.eq) goto loc_82247EE0;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwz r10,1940(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1940);
loc_82247C98:
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// subf. r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x82247c98
	if (!ctx.cr0.eq) goto loc_82247C98;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82247CB8:
	// neg r11,r26
	ctx.r11.s64 = -ctx.r26.s64;
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1024, ctx.xer);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// blt cr6,0x82247cd8
	if (ctx.cr6.lt) goto loc_82247CD8;
	// li r9,1024
	ctx.r9.s64 = 1024;
loc_82247CD8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82247d00
	if (ctx.cr6.eq) goto loc_82247D00;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82247CF4:
	// dcbt r10,r4
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x82247cf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247CF4;
loc_82247D00:
	// li r27,15
	ctx.r27.s64 = 15;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247d2c
	if (ctx.cr6.eq) goto loc_82247D2C;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v62,r4,r27
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v63,r0,r26
	ea = ctx.r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
loc_82247D2C:
	// rlwinm r11,r29,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82247d3c
	if (!ctx.cr6.lt) goto loc_82247D3C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82247D3C:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// rlwinm r28,r10,0,0,24
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r28,128
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 128, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// blt cr6,0x82247d58
	if (ctx.cr6.lt) goto loc_82247D58;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82247D58:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82247d78
	if (ctx.cr6.eq) goto loc_82247D78;
	// addi r9,r31,127
	ctx.r9.s64 = ctx.r31.s64 + 127;
loc_82247D68:
	// dcbzl r11,r9
	memset(base + ((ctx.r11.u32 + ctx.r9.u32) & ~127), 0, 128);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82247d68
	if (ctx.cr6.lt) goto loc_82247D68;
loc_82247D78:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvsl v0,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82247db0
	if (ctx.cr6.eq) goto loc_82247DB0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82247D94:
	// lvx128 v63,r0,r30
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r30,r11
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// vperm128 v62,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v62,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bdnz 0x82247d94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247D94;
loc_82247DB0:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r30,28
	ctx.r10.u64 = ctx.r30.u32 & 0xF;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82247e64
	if (!ctx.cr6.eq) goto loc_82247E64;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// blt cr6,0x82247e88
	if (ctx.cr6.lt) goto loc_82247E88;
	// rlwinm r11,r29,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 25) & 0x1FFFFFF;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r10,96
	ctx.r10.s64 = 96;
	// li r11,112
	ctx.r11.s64 = 112;
loc_82247DF0:
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1024, ctx.xer);
	// ble cr6,0x82247e00
	if (!ctx.cr6.gt) goto loc_82247E00;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// dcbt r4,r30
loc_82247E00:
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 256, ctx.xer);
	// ble cr6,0x82247e10
	if (!ctx.cr6.gt) goto loc_82247E10;
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbzl r4,r31
	memset(base + ((ctx.r4.u32 + ctx.r31.u32) & ~127), 0, 128);
loc_82247E10:
	// lvx128 v61,r0,r30
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r29,r29,-128
	ctx.r29.s64 = ctx.r29.s64 + -128;
	// lvx128 v60,r30,r5
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r30,r6
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r30,r7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r30,r8
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r30,r9
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r30,r10
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r30,r11
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// stvx128 v61,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// bdnz 0x82247df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247DF0;
	// b 0x82247e88
	goto loc_82247E88;
loc_82247E64:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224c970
	ctx.lr = 0x82247E74;
	sub_8224C970(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// subf r29,r28,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r28.s64;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82247E88:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// blt cr6,0x82247ebc
	if (ctx.cr6.lt) goto loc_82247EBC;
	// rlwinm r10,r29,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82247E9C:
	// lvx128 v63,r0,r30
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// lvx128 v62,r30,r11
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// vperm128 v53,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v53,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bdnz 0x82247e9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247E9C;
loc_82247EBC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82247ee0
	if (ctx.cr6.eq) goto loc_82247EE0;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lvx128 v52,r0,r30
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,-1
	ctx.r10.s64 = -1;
	// lvsl v0,r30,r29
	temp.u32 = ctx.r30.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v51,r11,r10
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v50,v52,v51,v0
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvrx128 v50,r31,r29
	ea = ctx.r31.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v50.u8[i]);
loc_82247EE0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247EEC"))) PPC_WEAK_FUNC(sub_82247EEC);
PPC_FUNC_IMPL(__imp__sub_82247EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247EF0"))) PPC_WEAK_FUNC(sub_82247EF0);
PPC_FUNC_IMPL(__imp__sub_82247EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82388544
	__imp__XamInputGetCapabilities(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247EF4"))) PPC_WEAK_FUNC(sub_82247EF4);
PPC_FUNC_IMPL(__imp__sub_82247EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247EF8"))) PPC_WEAK_FUNC(sub_82247EF8);
PPC_FUNC_IMPL(__imp__sub_82247EF8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82388554
	__imp__XamInputGetState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247F04"))) PPC_WEAK_FUNC(sub_82247F04);
PPC_FUNC_IMPL(__imp__sub_82247F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247F08"))) PPC_WEAK_FUNC(sub_82247F08);
PPC_FUNC_IMPL(__imp__sub_82247F08) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,1856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1856);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82247f9c
	if (!ctx.cr6.eq) goto loc_82247F9C;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82247f9c
	if (!ctx.cr0.eq) goto loc_82247F9C;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,5611
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5611, ctx.xer);
	// bge cr6,0x82247f9c
	if (!ctx.cr6.lt) goto loc_82247F9C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82388544
	ctx.lr = 0x82247F64;
	__imp__XamInputGetCapabilities(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82247f9c
	if (!ctx.cr0.eq) goto loc_82247F9C;
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82247f9c
	if (!ctx.cr6.eq) goto loc_82247F9C;
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82247f9c
	if (ctx.cr0.eq) goto loc_82247F9C;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82247f9c
	if (ctx.cr0.eq) goto loc_82247F9C;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
loc_82247F9C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388564
	ctx.lr = 0x82247FB8;
	__imp__XamInputSetState(ctx, base);
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

__attribute__((alias("__imp__sub_82247FD0"))) PPC_WEAK_FUNC(sub_82247FD0);
PPC_FUNC_IMPL(__imp__sub_82247FD0) {
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
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8224803c
	if (!ctx.cr6.eq) goto loc_8224803C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82248018
	if (ctx.cr6.eq) goto loc_82248018;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82248018
	if (ctx.cr6.eq) goto loc_82248018;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82247250
	ctx.lr = 0x82248014;
	sub_82247250(ctx, base);
	// b 0x8224801c
	goto loc_8224801C;
loc_82248018:
	// li r3,258
	ctx.r3.s64 = 258;
loc_8224801C:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x8224802c
	if (!ctx.cr6.eq) goto loc_8224802C;
	// li r3,996
	ctx.r3.s64 = 996;
	// b 0x82248050
	goto loc_82248050;
loc_8224802C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224803c
	if (ctx.cr6.eq) goto loc_8224803C;
	// bl 0x822471d0
	ctx.lr = 0x82248038;
	sub_822471D0(ctx, base);
	// b 0x82248050
	goto loc_82248050;
loc_8224803C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8224804c
	if (ctx.cr6.eq) goto loc_8224804C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8224804C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82248050:
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

__attribute__((alias("__imp__sub_82248068"))) PPC_WEAK_FUNC(sub_82248068);
PPC_FUNC_IMPL(__imp__sub_82248068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,104
	ctx.r11.s64 = 104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388884
	ctx.lr = 0x8224808C;
	__imp__MmQueryStatistics(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822480E4"))) PPC_WEAK_FUNC(sub_822480E4);
PPC_FUNC_IMPL(__imp__sub_822480E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822480E8"))) PPC_WEAK_FUNC(sub_822480E8);
PPC_FUNC_IMPL(__imp__sub_822480E8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8224cc90
	ctx.lr = 0x8224810C;
	sub_8224CC90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82248120
	if (ctx.cr0.eq) goto loc_82248120;
	// bl 0x8224b5b8
	ctx.lr = 0x82248118;
	sub_8224B5B8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82248254
	goto loc_82248254;
loc_82248120:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82248164
	if (!ctx.cr6.eq) goto loc_82248164;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8233eaf0
	ctx.lr = 0x82248140;
	sub_8233EAF0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x8233eaf0
	ctx.lr = 0x82248154;
	sub_8233EAF0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8233eaf0
	ctx.lr = 0x82248164;
	sub_8233EAF0(ctx, base);
loc_82248164:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82388894
	ctx.lr = 0x8224816C;
	__imp__KeQuerySystemTime(ctx, base);
	// lhz r11,70(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 70);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82248250
	if (ctx.cr0.eq) goto loc_82248250;
	// lhz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 154);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82248250
	if (ctx.cr0.eq) goto loc_82248250;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8224ca30
	ctx.lr = 0x82248198;
	sub_8224CA30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82248250
	if (ctx.cr0.eq) goto loc_82248250;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x8224ca30
	ctx.lr = 0x822481B4;
	sub_8224CA30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82248250
	if (ctx.cr0.eq) goto loc_82248250;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ori r11,r11,38528
	ctx.r11.u64 = ctx.r11.u64 | 38528;
	// mulli r8,r8,60
	ctx.r8.s64 = ctx.r8.s64 * 60;
	// mulli r6,r6,60
	ctx.r6.s64 = ctx.r6.s64 * 60;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mulld r11,r10,r11
	ctx.r11.s64 = ctx.r10.s64 * ctx.r11.s64;
	// mulld r8,r8,r4
	ctx.r8.s64 = ctx.r8.s64 * ctx.r4.s64;
	// mulld r10,r6,r4
	ctx.r10.s64 = ctx.r6.s64 * ctx.r4.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bge cr6,0x82248238
	if (!ctx.cr6.lt) goto loc_82248238;
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x82248230
	if (ctx.cr6.lt) goto loc_82248230;
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x8224824c
	if (ctx.cr6.lt) goto loc_8224824C;
loc_82248230:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82248250
	goto loc_82248250;
loc_82248238:
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x8224824c
	if (ctx.cr6.lt) goto loc_8224824C;
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// blt cr6,0x82248250
	if (ctx.cr6.lt) goto loc_82248250;
loc_8224824C:
	// li r30,2
	ctx.r30.s64 = 2;
loc_82248250:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82248254:
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

__attribute__((alias("__imp__sub_8224826C"))) PPC_WEAK_FUNC(sub_8224826C);
PPC_FUNC_IMPL(__imp__sub_8224826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82248270"))) PPC_WEAK_FUNC(sub_82248270);
PPC_FUNC_IMPL(__imp__sub_82248270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388894
	ctx.lr = 0x8224828C;
	__imp__KeQuerySystemTime(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823888a4
	ctx.lr = 0x82248298;
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r9,110(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r5,106(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// sth r7,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r6.u16);
	// sth r5,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r5.u16);
	// sth r4,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r4.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822482EC"))) PPC_WEAK_FUNC(sub_822482EC);
PPC_FUNC_IMPL(__imp__sub_822482EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822482F0"))) PPC_WEAK_FUNC(sub_822482F0);
PPC_FUNC_IMPL(__imp__sub_822482F0) {
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
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823888b4
	ctx.lr = 0x8224831C;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224848c
	if (ctx.cr0.lt) goto loc_8224848C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bgt cr6,0x8224848c
	if (ctx.cr6.gt) goto loc_8224848C;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// bgt cr6,0x8224848c
	if (ctx.cr6.gt) goto loc_8224848C;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,2120
	ctx.r12.s64 = ctx.r12.s64 + 2120;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32219
	ctx.r12.s64 = -2111504384;
	// nop 
	// addi r12,r12,-31900
	ctx.r12.s64 = ctx.r12.s64 + -31900;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8224836C;
	case 1:
		goto loc_82248364;
	case 2:
		goto loc_8224848C;
	case 3:
		goto loc_82248374;
	case 4:
		goto loc_8224848C;
	case 5:
		goto loc_8224848C;
	case 6:
		goto loc_8224848C;
	case 7:
		goto loc_8224848C;
	case 8:
		goto loc_8224837C;
	case 9:
		goto loc_8224848C;
	case 10:
		goto loc_8224848C;
	case 11:
		goto loc_82248384;
	case 12:
		goto loc_8224848C;
	case 13:
		goto loc_8224846C;
	case 14:
		goto loc_8224838C;
	case 15:
		goto loc_82248394;
	case 16:
		goto loc_8224839C;
	case 17:
		goto loc_8224848C;
	case 18:
		goto loc_822483A4;
	case 19:
		goto loc_822483C4;
	case 20:
		goto loc_822483AC;
	case 21:
		goto loc_8224848C;
	case 22:
		goto loc_8224848C;
	case 23:
		goto loc_8224848C;
	case 24:
		goto loc_8224848C;
	case 25:
		goto loc_8224848C;
	case 26:
		goto loc_8224845C;
	case 27:
		goto loc_822483B4;
	case 28:
		goto loc_8224848C;
	case 29:
		goto loc_822483BC;
	case 30:
		goto loc_8224847C;
	case 31:
		goto loc_8224848C;
	case 32:
		goto loc_822483CC;
	case 33:
		goto loc_8224848C;
	case 34:
		goto loc_822483D4;
	case 35:
		goto loc_8224848C;
	case 36:
		goto loc_8224848C;
	case 37:
		goto loc_822483DC;
	case 38:
		goto loc_8224848C;
	case 39:
		goto loc_822483EC;
	case 40:
		goto loc_8224848C;
	case 41:
		goto loc_822483E4;
	case 42:
		goto loc_8224848C;
	case 43:
		goto loc_8224848C;
	case 44:
		goto loc_8224848C;
	case 45:
		goto loc_822483F4;
	case 46:
		goto loc_8224848C;
	case 47:
		goto loc_8224848C;
	case 48:
		goto loc_822483FC;
	case 49:
		goto loc_8224848C;
	case 50:
		goto loc_8224848C;
	case 51:
		goto loc_82248404;
	case 52:
		goto loc_8224848C;
	case 53:
		goto loc_8224848C;
	case 54:
		goto loc_8224848C;
	case 55:
		goto loc_8224848C;
	case 56:
		goto loc_8224848C;
	case 57:
		goto loc_8224848C;
	case 58:
		goto loc_8224848C;
	case 59:
		goto loc_8224848C;
	case 60:
		goto loc_8224848C;
	case 61:
		goto loc_8224848C;
	case 62:
		goto loc_8224848C;
	case 63:
		goto loc_8224848C;
	case 64:
		goto loc_8224848C;
	case 65:
		goto loc_8224848C;
	case 66:
		goto loc_8224840C;
	case 67:
		goto loc_8224848C;
	case 68:
		goto loc_8224848C;
	case 69:
		goto loc_82248414;
	case 70:
		goto loc_82248424;
	case 71:
		goto loc_8224841C;
	case 72:
		goto loc_8224848C;
	case 73:
		goto loc_8224848C;
	case 74:
		goto loc_8224848C;
	case 75:
		goto loc_8224848C;
	case 76:
		goto loc_8224848C;
	case 77:
		goto loc_8224842C;
	case 78:
		goto loc_8224848C;
	case 79:
		goto loc_82248434;
	case 80:
		goto loc_8224848C;
	case 81:
		goto loc_8224848C;
	case 82:
		goto loc_8224848C;
	case 83:
		goto loc_8224843C;
	case 84:
		goto loc_8224848C;
	case 85:
		goto loc_82248464;
	case 86:
		goto loc_82248444;
	case 87:
		goto loc_8224848C;
	case 88:
		goto loc_8224844C;
	case 89:
		goto loc_8224848C;
	case 90:
		goto loc_8224848C;
	case 91:
		goto loc_8224848C;
	case 92:
		goto loc_8224848C;
	case 93:
		goto loc_8224848C;
	case 94:
		goto loc_8224848C;
	case 95:
		goto loc_8224848C;
	case 96:
		goto loc_82248474;
	case 97:
		goto loc_8224848C;
	case 98:
		goto loc_82248484;
	case 99:
		goto loc_8224848C;
	case 100:
		goto loc_8224848C;
	case 101:
		goto loc_8224848C;
	case 102:
		goto loc_8224848C;
	case 103:
		goto loc_8224848C;
	case 104:
		goto loc_82248454;
	default:
		__builtin_unreachable();
	}
loc_82248364:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82248490
	goto loc_82248490;
loc_8224836C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82248490
	goto loc_82248490;
loc_82248374:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82248490
	goto loc_82248490;
loc_8224837C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82248490
	goto loc_82248490;
loc_82248384:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82248490
	goto loc_82248490;
loc_8224838C:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82248490
	goto loc_82248490;
loc_82248394:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82248490
	goto loc_82248490;
loc_8224839C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82248490
	goto loc_82248490;
loc_822483A4:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82248490
	goto loc_82248490;
loc_822483AC:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82248490
	goto loc_82248490;
loc_822483B4:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82248490
	goto loc_82248490;
loc_822483BC:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82248490
	goto loc_82248490;
loc_822483C4:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82248490
	goto loc_82248490;
loc_822483CC:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82248490
	goto loc_82248490;
loc_822483D4:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82248490
	goto loc_82248490;
loc_822483DC:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82248490
	goto loc_82248490;
loc_822483E4:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x82248490
	goto loc_82248490;
loc_822483EC:
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x82248490
	goto loc_82248490;
loc_822483F4:
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x82248490
	goto loc_82248490;
loc_822483FC:
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x82248490
	goto loc_82248490;
loc_82248404:
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x82248490
	goto loc_82248490;
loc_8224840C:
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82248490
	goto loc_82248490;
loc_82248414:
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x82248490
	goto loc_82248490;
loc_8224841C:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82248490
	goto loc_82248490;
loc_82248424:
	// li r11,25
	ctx.r11.s64 = 25;
	// b 0x82248490
	goto loc_82248490;
loc_8224842C:
	// li r11,26
	ctx.r11.s64 = 26;
	// b 0x82248490
	goto loc_82248490;
loc_82248434:
	// li r11,27
	ctx.r11.s64 = 27;
	// b 0x82248490
	goto loc_82248490;
loc_8224843C:
	// li r11,37
	ctx.r11.s64 = 37;
	// b 0x82248490
	goto loc_82248490;
loc_82248444:
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x82248490
	goto loc_82248490;
loc_8224844C:
	// li r11,29
	ctx.r11.s64 = 29;
	// b 0x82248490
	goto loc_82248490;
loc_82248454:
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x82248490
	goto loc_82248490;
loc_8224845C:
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x82248490
	goto loc_82248490;
loc_82248464:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82248490
	goto loc_82248490;
loc_8224846C:
	// li r11,33
	ctx.r11.s64 = 33;
	// b 0x82248490
	goto loc_82248490;
loc_82248474:
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x82248490
	goto loc_82248490;
loc_8224847C:
	// li r11,35
	ctx.r11.s64 = 35;
	// b 0x82248490
	goto loc_82248490;
loc_82248484:
	// li r11,36
	ctx.r11.s64 = 36;
	// b 0x82248490
	goto loc_82248490;
loc_8224848C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82248490:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822484a0
	if (ctx.cr0.eq) goto loc_822484A0;
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// ble cr6,0x822484dc
	if (!ctx.cr6.gt) goto loc_822484DC;
loc_822484A0:
	// bl 0x82388574
	ctx.lr = 0x822484A4;
	__imp__XGetGameRegion(ctx, base);
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822484c8
	if (!ctx.cr6.eq) goto loc_822484C8;
	// addi r11,r3,-257
	ctx.r11.s64 = ctx.r3.s64 + -257;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x822484dc
	goto loc_822484DC;
loc_822484C8:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
loc_822484DC:
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

__attribute__((alias("__imp__sub_822484F0"))) PPC_WEAK_FUNC(sub_822484F0);
PPC_FUNC_IMPL(__imp__sub_822484F0) {
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823888b4
	ctx.lr = 0x8224851C;
	__imp__ExGetXConfigSetting(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82248540
	if (ctx.cr6.eq) goto loc_82248540;
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// ble cr6,0x8224856c
	if (!ctx.cr6.gt) goto loc_8224856C;
loc_82248540:
	// bl 0x82388574
	ctx.lr = 0x82248544;
	__imp__XGetGameRegion(ctx, base);
	// rlwinm r11,r3,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82248568
	if (!ctx.cr6.eq) goto loc_82248568;
	// cmplwi cr6,r3,257
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 257, ctx.xer);
	// bne cr6,0x82248560
	if (!ctx.cr6.eq) goto loc_82248560;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8224856c
	goto loc_8224856C;
loc_82248560:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x8224856c
	goto loc_8224856C;
loc_82248568:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8224856C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224857C"))) PPC_WEAK_FUNC(sub_8224857C);
PPC_FUNC_IMPL(__imp__sub_8224857C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82248580"))) PPC_WEAK_FUNC(sub_82248580);
PPC_FUNC_IMPL(__imp__sub_82248580) {
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
	// bl 0x823888c4
	ctx.lr = 0x82248590;
	__imp__XexUnloadImage(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822485a4
	if (!ctx.cr0.lt) goto loc_822485A4;
	// bl 0x8224b548
	ctx.lr = 0x8224859C;
	sub_8224B548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822485a8
	goto loc_822485A8;
loc_822485A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822485A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822485B8"))) PPC_WEAK_FUNC(sub_822485B8);
PPC_FUNC_IMPL(__imp__sub_822485B8) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823888d4
	ctx.lr = 0x822485D4;
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248604
	if (ctx.cr0.lt) goto loc_82248604;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822485fc
	if (!ctx.cr6.eq) goto loc_822485FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r3,r3,611
	ctx.r3.u64 = ctx.r3.u64 | 611;
loc_822485FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82248610
	if (!ctx.cr6.lt) goto loc_82248610;
loc_82248604:
	// bl 0x8224b548
	ctx.lr = 0x82248608;
	sub_8224B548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82248614
	goto loc_82248614;
loc_82248610:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82248614:
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

__attribute__((alias("__imp__sub_82248628"))) PPC_WEAK_FUNC(sub_82248628);
PPC_FUNC_IMPL(__imp__sub_82248628) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x823888e4
	ctx.lr = 0x82248644;
	__imp__XexLoadImage(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82248658
	if (!ctx.cr0.lt) goto loc_82248658;
	// bl 0x8224b548
	ctx.lr = 0x82248650;
	sub_8224B548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224865c
	goto loc_8224865C;
loc_82248658:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8224865C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224866C"))) PPC_WEAK_FUNC(sub_8224866C);
PPC_FUNC_IMPL(__imp__sub_8224866C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82248670"))) PPC_WEAK_FUNC(sub_82248670);
PPC_FUNC_IMPL(__imp__sub_82248670) {
	PPC_FUNC_PROLOGUE();
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82388584
	__imp__XamNotifyCreateListener(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82248678"))) PPC_WEAK_FUNC(sub_82248678);
PPC_FUNC_IMPL(__imp__sub_82248678) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82248740
	if (ctx.cr6.eq) goto loc_82248740;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2268
	ctx.r10.s64 = ctx.r10.s64 + 2268;
loc_8224868C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822486b0
	if (ctx.cr0.eq) goto loc_822486B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8224868c
	if (ctx.cr6.eq) goto loc_8224868C;
loc_822486B0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822486c0
	if (!ctx.cr0.eq) goto loc_822486C0;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// b 0x8224873c
	goto loc_8224873C;
loc_822486C0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2248
	ctx.r10.s64 = ctx.r10.s64 + 2248;
loc_822486CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822486f0
	if (ctx.cr0.eq) goto loc_822486F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822486cc
	if (ctx.cr6.eq) goto loc_822486CC;
loc_822486F0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82248700
	if (!ctx.cr0.eq) goto loc_82248700;
	// ori r4,r4,256
	ctx.r4.u64 = ctx.r4.u64 | 256;
	// b 0x8224873c
	goto loc_8224873C;
loc_82248700:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2228
	ctx.r10.s64 = ctx.r10.s64 + 2228;
loc_8224870C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82248730
	if (ctx.cr0.eq) goto loc_82248730;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8224870c
	if (ctx.cr6.eq) goto loc_8224870C;
loc_82248730:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82248740
	if (!ctx.cr0.eq) goto loc_82248740;
	// oris r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 262144;
loc_8224873C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82248740:
	// b 0x82388594
	__imp__XamLoaderLaunchTitle(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82248744"))) PPC_WEAK_FUNC(sub_82248744);
PPC_FUNC_IMPL(__imp__sub_82248744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82248748"))) PPC_WEAK_FUNC(sub_82248748);
PPC_FUNC_IMPL(__imp__sub_82248748) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823885a4
	__imp__XamEnumerate(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82248760"))) PPC_WEAK_FUNC(sub_82248760);
PPC_FUNC_IMPL(__imp__sub_82248760) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,1792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1792);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224879c
	if (!ctx.cr6.eq) goto loc_8224879C;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,309
	ctx.r3.u64 = ctx.r3.u64 | 309;
	// b 0x822487c4
	goto loc_822487C4;
loc_8224879C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82388954
	ctx.lr = 0x822487AC;
	__imp__RtlImageXexHeaderField(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r11,r11,549
	ctx.r11.u64 = ctx.r11.u64 | 549;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_822487C4:
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

__attribute__((alias("__imp__sub_822487D8"))) PPC_WEAK_FUNC(sub_822487D8);
PPC_FUNC_IMPL(__imp__sub_822487D8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82248760
	ctx.lr = 0x822487F4;
	sub_82248760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248810
	if (ctx.cr0.lt) goto loc_82248810;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82248810:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82248828"))) PPC_WEAK_FUNC(sub_82248828);
PPC_FUNC_IMPL(__imp__sub_82248828) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r3,556
	ctx.r3.s64 = ctx.r3.s64 + 556;
	// bl 0x82388974
	ctx.lr = 0x82248868;
	__imp__XeCryptSha(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82388964
	ctx.lr = 0x82248878;
	__imp__XeKeysConsoleSignatureVerification(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82248890
	if (ctx.cr0.eq) goto loc_82248890;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82248894
	if (!ctx.cr6.eq) goto loc_82248894;
loc_82248890:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82248894:
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

__attribute__((alias("__imp__sub_822488A8"))) PPC_WEAK_FUNC(sub_822488A8);
PPC_FUNC_IMPL(__imp__sub_822488A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x822488B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r5,1023
	ctx.r5.s64 = 1023;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// addi r3,r1,177
	ctx.r3.s64 = ctx.r1.s64 + 177;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x822488DC;
	sub_8233EAF0(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// li r8,34
	ctx.r8.s64 = 34;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,2428
	ctx.r11.s64 = ctx.r11.s64 + 2428;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lis r4,-16368
	ctx.r4.s64 = -1072693248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823889b4
	ctx.lr = 0x82248920;
	__imp__NtCreateFile(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822489d0
	if (ctx.cr0.lt) goto loc_822489D0;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r30,556
	ctx.r3.s64 = ctx.r30.s64 + 556;
	// bl 0x82388974
	ctx.lr = 0x8224894C;
	__imp__XeCryptSha(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823889a4
	ctx.lr = 0x82248958;
	__imp__XeKeysConsolePrivateKeySign(ctx, base);
	// li r29,2048
	ctx.r29.s64 = 2048;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82388994
	ctx.lr = 0x82248984;
	__imp__NtReadFile(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822489c8
	if (ctx.cr0.lt) goto loc_822489C8;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,644
	ctx.r5.s64 = 644;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8224899C;
	sub_8233E4E0(ctx, base);
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82388984
	ctx.lr = 0x822489C4;
	__imp__NtWriteFile(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822489C8:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82388924
	ctx.lr = 0x822489D0;
	__imp__NtClose(ctx, base);
loc_822489D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822489DC"))) PPC_WEAK_FUNC(sub_822489DC);
PPC_FUNC_IMPL(__imp__sub_822489DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822489E0"))) PPC_WEAK_FUNC(sub_822489E0);
PPC_FUNC_IMPL(__imp__sub_822489E0) {
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
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,1023
	ctx.r5.s64 = 1023;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// addi r3,r1,145
	ctx.r3.s64 = ctx.r1.s64 + 145;
	// bl 0x8233eaf0
	ctx.lr = 0x82248A10;
	sub_8233EAF0(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8233eaf0
	ctx.lr = 0x82248A20;
	sub_8233EAF0(ctx, base);
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// li r5,644
	ctx.r5.s64 = 644;
	// addi r11,r11,-7200
	ctx.r11.s64 = ctx.r11.s64 + -7200;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x8233eaf0
	ctx.lr = 0x82248A38;
	sub_8233EAF0(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// li r8,34
	ctx.r8.s64 = 34;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,2428
	ctx.r11.s64 = ctx.r11.s64 + 2428;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lis r4,-16368
	ctx.r4.s64 = -1072693248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823889b4
	ctx.lr = 0x82248A7C;
	__imp__NtCreateFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248ab8
	if (ctx.cr0.lt) goto loc_82248AB8;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82388984
	ctx.lr = 0x82248AB0;
	__imp__NtWriteFile(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82388924
	ctx.lr = 0x82248AB8;
	__imp__NtClose(ctx, base);
loc_82248AB8:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
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

__attribute__((alias("__imp__sub_82248AD0"))) PPC_WEAK_FUNC(sub_82248AD0);
PPC_FUNC_IMPL(__imp__sub_82248AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82248AD8;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// addi r26,r11,2412
	ctx.r26.s64 = ctx.r11.s64 + 2412;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r26,-56
	ctx.r5.s64 = ctx.r26.s64 + -56;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x823889e4
	ctx.lr = 0x82248B0C;
	__imp___snprintf(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82388814
	ctx.lr = 0x82248B18;
	__imp__RtlInitAnsiString(ctx, base);
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82248B28;
	sub_8233EAF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r24,r31,24
	ctx.r24.s64 = ctx.r31.s64 + 24;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823889b4
	ctx.lr = 0x82248B70;
	__imp__NtCreateFile(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82248cd8
	if (ctx.cr0.lt) goto loc_82248CD8;
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r25,5
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 5, ctx.xer);
	// bge cr6,0x82248b88
	if (!ctx.cr6.lt) goto loc_82248B88;
	// li r25,5
	ctx.r25.s64 = 5;
loc_82248B88:
	// rlwinm r11,r25,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 12) & 0xFFFFF000;
	// lis r5,144
	ctx.r5.s64 = 9437184;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,12288
	ctx.r5.u64 = ctx.r5.u64 | 12288;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x823889d4
	ctx.lr = 0x82248BAC;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82248cd8
	if (ctx.cr0.lt) goto loc_82248CD8;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82388914
	ctx.lr = 0x82248BCC;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82248cd8
	if (ctx.cr0.lt) goto loc_82248CD8;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r4,64
	ctx.r4.s64 = 64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mulld r30,r11,r9
	ctx.r30.s64 = ctx.r11.s64 * ctx.r9.s64;
	// bl 0x823889e4
	ctx.lr = 0x82248C00;
	__imp___snprintf(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388814
	ctx.lr = 0x82248C0C;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stb r25,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r25.u8);
	// addi r9,r30,-4096
	ctx.r9.s64 = ctx.r30.s64 + -4096;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82248C48;
	sub_8233E4E0(ctx, base);
	// lwz r11,664(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 664);
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82248C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82248c98
	if (!ctx.cr0.lt) goto loc_82248C98;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82248C78;
	sub_8233EAF0(ctx, base);
	// lwz r11,664(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 664);
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82248C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82248cd8
	if (ctx.cr0.lt) goto loc_82248CD8;
loc_82248C98:
	// lwz r11,664(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 664);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82248cd0
	if (ctx.cr0.eq) goto loc_82248CD0;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r10,r10,-30240
	ctx.r10.s64 = ctx.r10.s64 + -30240;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82248CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82248CD0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82248d0c
	if (!ctx.cr6.lt) goto loc_82248D0C;
loc_82248CD8:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82248ce8
	if (ctx.cr6.eq) goto loc_82248CE8;
	// bl 0x82388924
	ctx.lr = 0x82248CE8;
	__imp__NtClose(ctx, base);
loc_82248CE8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248d0c
	if (ctx.cr6.eq) goto loc_82248D0C;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x823889c4
	ctx.lr = 0x82248D0C;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_82248D0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82248D18"))) PPC_WEAK_FUNC(sub_82248D18);
PPC_FUNC_IMPL(__imp__sub_82248D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82248D20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82388a14
	ctx.lr = 0x82248D34;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82248D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82248D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248de4
	if (ctx.cr0.lt) goto loc_82248DE4;
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82248D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248de4
	if (ctx.cr0.lt) goto loc_82248DE4;
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82248DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// li r5,36
	ctx.r5.s64 = 36;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82248DD0;
	sub_8233E4E0(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x822488a8
	ctx.lr = 0x82248DD8;
	sub_822488A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82388a04
	ctx.lr = 0x82248DE4;
	__imp__NtFlushBuffersFile(ctx, base);
loc_82248DE4:
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82248E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x823889f4
	ctx.lr = 0x82248E04;
	__imp__KeLeaveCriticalRegion(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82248E0C"))) PPC_WEAK_FUNC(sub_82248E0C);
PPC_FUNC_IMPL(__imp__sub_82248E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82248E10"))) PPC_WEAK_FUNC(sub_82248E10);
PPC_FUNC_IMPL(__imp__sub_82248E10) {
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
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388934
	ctx.lr = 0x82248E60;
	__imp__NtOpenFile(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82248eb0
	if (ctx.cr0.lt) goto loc_82248EB0;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82388914
	ctx.lr = 0x82248E80;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388924
	ctx.lr = 0x82248E8C;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82248eb0
	if (ctx.cr6.lt) goto loc_82248EB0;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82248eb0
	if (ctx.cr6.eq) goto loc_82248EB0;
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,335
	ctx.r31.u64 = ctx.r31.u64 | 335;
loc_82248EB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82248ECC"))) PPC_WEAK_FUNC(sub_82248ECC);
PPC_FUNC_IMPL(__imp__sub_82248ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82248ED0"))) PPC_WEAK_FUNC(sub_82248ED0);
PPC_FUNC_IMPL(__imp__sub_82248ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82248ED8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,41
	ctx.r5.s64 = 41;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82248F04;
	sub_8233EAF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r28,r11,2384
	ctx.r28.s64 = ctx.r11.s64 + 2384;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r5,r28,-28
	ctx.r5.s64 = ctx.r28.s64 + -28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823889e4
	ctx.lr = 0x82248F20;
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388814
	ctx.lr = 0x82248F2C;
	__imp__RtlInitAnsiString(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823889e4
	ctx.lr = 0x82248F40;
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82388814
	ctx.lr = 0x82248F4C;
	__imp__RtlInitAnsiString(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82248f88
	if (ctx.cr6.eq) goto loc_82248F88;
	// mulli r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 * 36;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,556
	ctx.r3.s64 = ctx.r11.s64 + 556;
	// bl 0x8233eaf0
	ctx.lr = 0x82248F6C;
	sub_8233EAF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82253668
	ctx.lr = 0x82248F78;
	sub_82253668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82248f88
	if (!ctx.cr0.lt) goto loc_82248F88;
loc_82248F80:
	// bl 0x82388a34
	ctx.lr = 0x82248F84;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82248fe0
	goto loc_82248FE0;
loc_82248F88:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82248e10
	ctx.lr = 0x82248F94;
	sub_82248E10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82248fdc
	if (!ctx.cr0.lt) goto loc_82248FDC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82253668
	ctx.lr = 0x82248FA8;
	sub_82253668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248f80
	if (ctx.cr0.lt) goto loc_82248F80;
	// mulli r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 * 36;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,556
	ctx.r3.s64 = ctx.r11.s64 + 556;
	// bl 0x8233eaf0
	ctx.lr = 0x82248FC8;
	sub_8233EAF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82248e10
	ctx.lr = 0x82248FD4;
	sub_82248E10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248f80
	if (ctx.cr0.lt) goto loc_82248F80;
loc_82248FDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82248FE0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82248FE8"))) PPC_WEAK_FUNC(sub_82248FE8);
PPC_FUNC_IMPL(__imp__sub_82248FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82248FF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x823889e4
	ctx.lr = 0x82249014;
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388814
	ctx.lr = 0x82249020;
	__imp__RtlInitAnsiString(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823889e4
	ctx.lr = 0x82249034;
	__imp___snprintf(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82388814
	ctx.lr = 0x82249040;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388a44
	ctx.lr = 0x8224904C;
	__imp__ObCreateSymbolicLink(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82249060"))) PPC_WEAK_FUNC(sub_82249060);
PPC_FUNC_IMPL(__imp__sub_82249060) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r10,-7208
	ctx.r31.s64 = ctx.r10.s64 + -7208;
	// addi r30,r11,2328
	ctx.r30.s64 = ctx.r11.s64 + 2328;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822490c0
	if (ctx.cr6.eq) goto loc_822490C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823889e4
	ctx.lr = 0x822490AC;
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388814
	ctx.lr = 0x822490B8;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388a54
	ctx.lr = 0x822490C0;
	__imp__ObDeleteSymbolicLink(ctx, base);
loc_822490C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822490fc
	if (ctx.cr6.eq) goto loc_822490FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823889e4
	ctx.lr = 0x822490E8;
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388814
	ctx.lr = 0x822490F4;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388a54
	ctx.lr = 0x822490FC;
	__imp__ObDeleteSymbolicLink(ctx, base);
loc_822490FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82249138
	if (ctx.cr6.eq) goto loc_82249138;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823889e4
	ctx.lr = 0x82249124;
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388814
	ctx.lr = 0x82249130;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388a54
	ctx.lr = 0x82249138;
	__imp__ObDeleteSymbolicLink(ctx, base);
loc_82249138:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82249150"))) PPC_WEAK_FUNC(sub_82249150);
PPC_FUNC_IMPL(__imp__sub_82249150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82249158;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r10,-7208
	ctx.r29.s64 = ctx.r10.s64 + -7208;
	// addi r28,r11,2328
	ctx.r28.s64 = ctx.r11.s64 + 2328;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r29,-4
	ctx.r7.s64 = ctx.r29.s64 + -4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248fe8
	ctx.lr = 0x8224918C;
	sub_82248FE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822491e0
	if (ctx.cr0.lt) goto loc_822491E0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x822491d8
	if (ctx.cr6.eq) goto loc_822491D8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248fe8
	ctx.lr = 0x822491B4;
	sub_82248FE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822491e0
	if (ctx.cr0.lt) goto loc_822491E0;
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r29,4
	ctx.r7.s64 = ctx.r29.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82248fe8
	ctx.lr = 0x822491D4;
	sub_82248FE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822491D8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x822491e4
	if (!ctx.cr6.lt) goto loc_822491E4;
loc_822491E0:
	// bl 0x82249060
	ctx.lr = 0x822491E4;
	sub_82249060(ctx, base);
loc_822491E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822491F0"))) PPC_WEAK_FUNC(sub_822491F0);
PPC_FUNC_IMPL(__imp__sub_822491F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x822491F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,11
	ctx.r3.s64 = 11;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82388864
	ctx.lr = 0x82249208;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82249280
	if (!ctx.cr0.eq) goto loc_82249280;
	// bl 0x82388a14
	ctx.lr = 0x82249214;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// addi r31,r11,1952
	ctx.r31.s64 = ctx.r11.s64 + 1952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388aa4
	ctx.lr = 0x82249224;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r9,1980
	ctx.r3.s64 = ctx.r9.s64 + 1980;
	// stw r11,-7200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7200, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r10,-7200
	ctx.r30.s64 = ctx.r10.s64 + -7200;
	// bl 0x82388a94
	ctx.lr = 0x82249248;
	__imp__KeSetEvent(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r11,1996
	ctx.r29.s64 = ctx.r11.s64 + 1996;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82388a84
	ctx.lr = 0x82249268;
	__imp__KeWaitForSingleObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82388a74
	ctx.lr = 0x82249270;
	__imp__KeResetEvent(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82388a64
	ctx.lr = 0x8224927C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x823889f4
	ctx.lr = 0x82249280;
	__imp__KeLeaveCriticalRegion(ctx, base);
loc_82249280:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224928C"))) PPC_WEAK_FUNC(sub_8224928C);
PPC_FUNC_IMPL(__imp__sub_8224928C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82249290"))) PPC_WEAK_FUNC(sub_82249290);
PPC_FUNC_IMPL(__imp__sub_82249290) {
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
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lwz r11,-7220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822492b4
	if (ctx.cr6.eq) goto loc_822492B4;
	// bl 0x822491f0
	ctx.lr = 0x822492B0;
	sub_822491F0(ctx, base);
	// b 0x822492bc
	goto loc_822492BC;
loc_822492B4:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,622
	ctx.r3.u64 = ctx.r3.u64 | 622;
loc_822492BC:
	// bl 0x82388a34
	ctx.lr = 0x822492C0;
	__imp__RtlNtStatusToDosError(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822492D0"))) PPC_WEAK_FUNC(sub_822492D0);
PPC_FUNC_IMPL(__imp__sub_822492D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x822492D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r31,r11,-7224
	ctx.r31.s64 = ctx.r11.s64 + -7224;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82249380
	if (ctx.cr6.eq) goto loc_82249380;
	// bl 0x82388a14
	ctx.lr = 0x822492F4;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82249318
	if (ctx.cr6.eq) goto loc_82249318;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,2012
	ctx.r3.s64 = ctx.r10.s64 + 2012;
	// bl 0x82388ab4
	ctx.lr = 0x82249318;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
loc_82249318:
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// addi r30,r11,1952
	ctx.r30.s64 = ctx.r11.s64 + 1952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388aa4
	ctx.lr = 0x82249328;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r9,1980
	ctx.r3.s64 = ctx.r9.s64 + 1980;
	// stw r11,-7200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7200, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82388a94
	ctx.lr = 0x82249348;
	__imp__KeSetEvent(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r11,1996
	ctx.r29.s64 = ctx.r11.s64 + 1996;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82388a84
	ctx.lr = 0x82249368;
	__imp__KeWaitForSingleObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82388a74
	ctx.lr = 0x82249370;
	__imp__KeResetEvent(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388a64
	ctx.lr = 0x82249378;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x823889f4
	ctx.lr = 0x8224937C;
	__imp__KeLeaveCriticalRegion(ctx, base);
	// b 0x82249390
	goto loc_82249390;
loc_82249380:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82249390
	if (ctx.cr6.eq) goto loc_82249390;
	// bl 0x82249060
	ctx.lr = 0x82249390;
	sub_82249060(ctx, base);
loc_82249390:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822493A0"))) PPC_WEAK_FUNC(sub_822493A0);
PPC_FUNC_IMPL(__imp__sub_822493A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x822493A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,664(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// addi r28,r11,-7224
	ctx.r28.s64 = ctx.r11.s64 + -7224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r25,r10,1996
	ctx.r25.s64 = ctx.r10.s64 + 1996;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822493e4
	if (ctx.cr6.eq) goto loc_822493E4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822493DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822495ac
	if (ctx.cr0.lt) goto loc_822495AC;
loc_822493E4:
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82248ad0
	ctx.lr = 0x822493FC;
	sub_82248AD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82249594
	if (ctx.cr0.lt) goto loc_82249594;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82249434
	if (ctx.cr6.eq) goto loc_82249434;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82248ad0
	ctx.lr = 0x82249428;
	sub_82248AD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8224952c
	if (ctx.cr0.lt) goto loc_8224952C;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82249434:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,2412
	ctx.r4.s64 = ctx.r11.s64 + 2412;
	// bl 0x82249150
	ctx.lr = 0x82249448;
	sub_82249150(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8224952c
	if (ctx.cr0.lt) goto loc_8224952C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r29,r10,2012
	ctx.r29.s64 = ctx.r10.s64 + 2012;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82388ab4
	ctx.lr = 0x8224946C;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82388a94
	ctx.lr = 0x82249488;
	__imp__KeSetEvent(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// addi r26,r11,1980
	ctx.r26.s64 = ctx.r11.s64 + 1980;
loc_82249490:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82388a84
	ctx.lr = 0x822494A8;
	__imp__KeWaitForSingleObject(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82248d18
	ctx.lr = 0x822494BC;
	sub_82248D18(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822494d8
	if (ctx.cr6.eq) goto loc_822494D8;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82248d18
	ctx.lr = 0x822494D8;
	sub_82248D18(ctx, base);
loc_822494D8:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x822494f4
	if (!ctx.cr6.eq) goto loc_822494F4;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82388a94
	ctx.lr = 0x822494F4;
	__imp__KeSetEvent(ctx, base);
loc_822494F4:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82249508
	if (ctx.cr6.eq) goto loc_82249508;
	// bl 0x823885b4
	ctx.lr = 0x82249500;
	__imp__XamTaskShouldExit(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82249490
	if (ctx.cr0.eq) goto loc_82249490;
loc_82249508:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82249528
	if (ctx.cr6.eq) goto loc_82249528;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82388ab4
	ctx.lr = 0x82249528;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
loc_82249528:
	// bl 0x82249060
	ctx.lr = 0x8224952C;
	sub_82249060(ctx, base);
loc_8224952C:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82388a24
	ctx.lr = 0x82249534;
	__imp__IoDismountVolume(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82388764
	ctx.lr = 0x8224953C;
	__imp__ObDereferenceObject(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823889c4
	ctx.lr = 0x82249554;
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82388924
	ctx.lr = 0x8224955C;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82249594
	if (ctx.cr6.eq) goto loc_82249594;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82388a24
	ctx.lr = 0x8224956C;
	__imp__IoDismountVolume(ctx, base);
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82388764
	ctx.lr = 0x82249574;
	__imp__ObDereferenceObject(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x823889c4
	ctx.lr = 0x8224958C;
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82388924
	ctx.lr = 0x82249594;
	__imp__NtClose(ctx, base);
loc_82249594:
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822495ac
	if (ctx.cr6.eq) goto loc_822495AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822495AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822495AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82388a94
	ctx.lr = 0x822495C8;
	__imp__KeSetEvent(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822495D4"))) PPC_WEAK_FUNC(sub_822495D4);
PPC_FUNC_IMPL(__imp__sub_822495D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822495D8"))) PPC_WEAK_FUNC(sub_822495D8);
PPC_FUNC_IMPL(__imp__sub_822495D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x822495E0;
	__savegprlr_18(ctx, base);
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,1023
	ctx.r5.s64 = 1023;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
	// addi r3,r1,161
	ctx.r3.s64 = ctx.r1.s64 + 161;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82249610;
	sub_8233EAF0(ctx, base);
	// lis r18,-32198
	ctx.r18.s64 = -2110128128;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// lwz r11,-7220(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7220);
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r26,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bne cr6,0x82249a58
	if (!ctx.cr6.eq) goto loc_82249A58;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,61440
	ctx.r11.u64 = ctx.r11.u64 | 61440;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82249a58
	if (ctx.cr6.gt) goto loc_82249A58;
	// clrlwi. r11,r21,23
	ctx.r11.u64 = ctx.r21.u32 & 0x1FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82249a58
	if (!ctx.cr0.eq) goto loc_82249A58;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82388864
	ctx.lr = 0x82249664;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// li r19,1
	ctx.r19.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82249674
	if (ctx.cr0.eq) goto loc_82249674;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
loc_82249674:
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// li r8,34
	ctx.r8.s64 = 34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,2428
	ctx.r11.s64 = ctx.r11.s64 + 2428;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lis r4,-16368
	ctx.r4.s64 = -1072693248;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823889b4
	ctx.lr = 0x822496B8;
	__imp__NtCreateFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822496c8
	if (!ctx.cr0.lt) goto loc_822496C8;
loc_822496C0:
	// bl 0x82388a34
	ctx.lr = 0x822496C4;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82249a5c
	goto loc_82249A5C;
loc_822496C8:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82388994
	ctx.lr = 0x822496F4;
	__imp__NtReadFile(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82388924
	ctx.lr = 0x82249700;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82249710
	if (!ctx.cr6.lt) goto loc_82249710;
loc_82249708:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822496c0
	goto loc_822496C0;
loc_82249710:
	// lis r11,19055
	ctx.r11.s64 = 1248788480;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// ori r31,r11,29544
	ctx.r31.u64 = ctx.r11.u64 | 29544;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82249740
	if (!ctx.cr6.eq) goto loc_82249740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82248828
	ctx.lr = 0x8224972C;
	sub_82248828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82249740
	if (ctx.cr0.eq) goto loc_82249740;
	// lwz r11,788(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82249758
	if (ctx.cr6.eq) goto loc_82249758;
loc_82249740:
	// addi r11,r1,796
	ctx.r11.s64 = ctx.r1.s64 + 796;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r19,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r19.u32);
	// ori r25,r25,15
	ctx.r25.u64 = ctx.r25.u64 | 15;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82249758:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x822497d0
	if (ctx.cr6.eq) goto loc_822497D0;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,717
	ctx.r11.s64 = ctx.r1.s64 + 717;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r7,240
	ctx.r7.s64 = 240;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82249774:
	// addi r8,r1,796
	ctx.r8.s64 = ctx.r1.s64 + 796;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x822497b0
	if (!ctx.cr6.eq) goto loc_822497B0;
	// lbz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subfc r9,r7,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r7.u32;
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// bge cr6,0x822497a4
	if (!ctx.cr6.lt) goto loc_822497A4;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// b 0x822497a8
	goto loc_822497A8;
loc_822497A4:
	// subfze r9,r30
	temp.u64 = ~ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r9.u64 = temp.u64;
loc_822497A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822497b8
	if (!ctx.cr6.eq) goto loc_822497B8;
loc_822497B0:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stwx r19,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r19.u32);
loc_822497B8:
	// stwx r24,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r24.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82249774
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82249774;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x82249854
	goto loc_82249854;
loc_822497D0:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r11,r1,796
	ctx.r11.s64 = ctx.r1.s64 + 796;
loc_822497D8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x822497f4
	if (ctx.cr6.eq) goto loc_822497F4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x822497d8
	if (ctx.cr6.lt) goto loc_822497D8;
loc_822497F4:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bne cr6,0x8224980c
	if (!ctx.cr6.eq) goto loc_8224980C;
	// lwz r11,792(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82249848
	goto loc_82249848;
loc_8224980C:
	// mulli r10,r29,36
	ctx.r10.s64 = ctx.r29.s64 * 36;
	// lbz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// addi r11,r1,716
	ctx.r11.s64 = ctx.r1.s64 + 716;
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,240
	ctx.r10.s64 = 240;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bge cr6,0x8224983c
	if (!ctx.cr6.lt) goto loc_8224983C;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82249840
	goto loc_82249840;
loc_8224983C:
	// subfze r11,r30
	temp.u64 = ~ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r11.u64 = temp.u64;
loc_82249840:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82249854
	if (!ctx.cr6.eq) goto loc_82249854;
loc_82249848:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u32);
loc_82249854:
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r29.u32);
	// addi r28,r1,796
	ctx.r28.s64 = ctx.r1.s64 + 796;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stwx r24,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r24.u32);
	// bl 0x822488a8
	ctx.lr = 0x8224986C;
	sub_822488A8(ctx, base);
	// clrlwi. r11,r25,28
	ctx.r11.u64 = ctx.r25.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822498b8
	if (ctx.cr0.eq) goto loc_822498B8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x822498ac
	if (ctx.cr6.eq) goto loc_822498AC;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8224988C:
	// slw r10,r19,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r11.u8 & 0x3F));
	// and. r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8224989c
	if (ctx.cr0.eq) goto loc_8224989C;
	// stw r19,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r19.u32);
loc_8224989C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8224988c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224988C;
	// b 0x822498b8
	goto loc_822498B8;
loc_822498AC:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r19,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u32);
loc_822498B8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82249904
	if (ctx.cr6.eq) goto loc_82249904;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_822498C8:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x822498f0
	if (!ctx.cr6.eq) goto loc_822498F0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82248ed0
	ctx.lr = 0x822498E8;
	sub_82248ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82249a5c
	if (!ctx.cr0.eq) goto loc_82249A5C;
loc_822498F0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x822498c8
	if (ctx.cr6.lt) goto loc_822498C8;
	// b 0x82249928
	goto loc_82249928;
loc_82249904:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82248ed0
	ctx.lr = 0x82249920;
	sub_82248ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82249a5c
	if (!ctx.cr0.eq) goto loc_82249A5C;
loc_82249928:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82388864
	ctx.lr = 0x82249930;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822499f8
	if (!ctx.cr0.eq) goto loc_822499F8;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// bl 0x82388a14
	ctx.lr = 0x82249944;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// addi r30,r11,1952
	ctx.r30.s64 = ctx.r11.s64 + 1952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388aa4
	ctx.lr = 0x82249954;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r31,r10,-7200
	ctx.r31.s64 = ctx.r10.s64 + -7200;
	// rlwinm r10,r20,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 20) & 0xFFFFF;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r5,644
	ctx.r5.s64 = 644;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// stw r22,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r22.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x82249988;
	sub_8233E4E0(ctx, base);
	// lis r11,520
	ctx.r11.s64 = 34078720;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r10,-27744
	ctx.r3.s64 = ctx.r10.s64 + -27744;
	// bl 0x823885d4
	ctx.lr = 0x822499AC;
	__imp__XamTaskSchedule(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822499e4
	if (ctx.cr0.lt) goto loc_822499E4;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x823885c4
	ctx.lr = 0x822499BC;
	__imp__XamTaskCloseHandle(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r11,1996
	ctx.r29.s64 = ctx.r11.s64 + 1996;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82388a84
	ctx.lr = 0x822499DC;
	__imp__KeWaitForSingleObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82388a74
	ctx.lr = 0x822499E4;
	__imp__KeResetEvent(ctx, base);
loc_822499E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82388a64
	ctx.lr = 0x822499F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x823889f4
	ctx.lr = 0x822499F4;
	__imp__KeLeaveCriticalRegion(ctx, base);
	// b 0x82249a10
	goto loc_82249A10;
loc_822499F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,2384
	ctx.r4.s64 = ctx.r11.s64 + 2384;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82249150
	ctx.lr = 0x82249A0C;
	sub_82249150(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82249A10:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82249a50
	if (ctx.cr6.lt) goto loc_82249A50;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_82249A20:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82249a40
	if (!ctx.cr6.eq) goto loc_82249A40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82249a20
	if (ctx.cr6.lt) goto loc_82249A20;
	// b 0x82249a44
	goto loc_82249A44;
loc_82249A40:
	// bl 0x822491f0
	ctx.lr = 0x82249A44;
	sub_822491F0(ctx, base);
loc_82249A44:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r19,-7220(r18)
	PPC_STORE_U32(ctx.r18.u32 + -7220, ctx.r19.u32);
	// b 0x82249708
	goto loc_82249708;
loc_82249A50:
	// bl 0x82249060
	ctx.lr = 0x82249A54;
	sub_82249060(ctx, base);
	// b 0x82249708
	goto loc_82249708;
loc_82249A58:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82249A5C:
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82249A64"))) PPC_WEAK_FUNC(sub_82249A64);
PPC_FUNC_IMPL(__imp__sub_82249A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82249A68"))) PPC_WEAK_FUNC(sub_82249A68);
PPC_FUNC_IMPL(__imp__sub_82249A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82249A70;
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
	// bl 0x822487d8
	ctx.lr = 0x82249A84;
	sub_822487D8(ctx, base);
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r7,r10,2048
	ctx.r7.s64 = ctx.r10.s64 + 2048;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// and r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ctx.r9.u64;
	// bl 0x822495d8
	ctx.lr = 0x82249AA8;
	sub_822495D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82249AB0"))) PPC_WEAK_FUNC(sub_82249AB0);
PPC_FUNC_IMPL(__imp__sub_82249AB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x822492d0
	sub_822492D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82249AB4"))) PPC_WEAK_FUNC(sub_82249AB4);
PPC_FUNC_IMPL(__imp__sub_82249AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82249AB8"))) PPC_WEAK_FUNC(sub_82249AB8);
PPC_FUNC_IMPL(__imp__sub_82249AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82249AC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x82249b38
	if (ctx.cr6.eq) goto loc_82249B38;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x82249b30
	if (ctx.cr6.eq) goto loc_82249B30;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// beq cr6,0x82249b28
	if (ctx.cr6.eq) goto loc_82249B28;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x82249b20
	if (ctx.cr6.eq) goto loc_82249B20;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bne cr6,0x82249b0c
	if (!ctx.cr6.eq) goto loc_82249B0C;
	// rlwinm. r11,r4,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,4
	ctx.r30.s64 = 4;
	// bne 0x82249b3c
	if (!ctx.cr0.eq) goto loc_82249B3C;
loc_82249B0C:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x8224b498
	ctx.lr = 0x82249B18;
	sub_8224B498(ctx, base);
loc_82249B18:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82249ca4
	goto loc_82249CA4;
loc_82249B20:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82249b3c
	goto loc_82249B3C;
loc_82249B28:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82249b3c
	goto loc_82249B3C;
loc_82249B30:
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x82249b3c
	goto loc_82249B3C;
loc_82249B38:
	// li r30,2
	ctx.r30.s64 = 2;
loc_82249B3C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82388814
	ctx.lr = 0x82249B48;
	__imp__RtlInitAnsiString(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82249b68
	if (!ctx.cr6.gt) goto loc_82249B68;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82249b6c
	if (ctx.cr6.eq) goto loc_82249B6C;
loc_82249B68:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82249B6C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwinm r9,r31,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8000000;
	// rlwimi r11,r31,28,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 28) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwinm r8,r31,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000000;
	// rlwinm r11,r11,31,3,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1C000000;
	// rlwinm r10,r31,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000000;
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// li r7,-3
	ctx.r7.s64 = -3;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// not r9,r31
	ctx.r9.u64 = ~ctx.r31.u64;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,7,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x20;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r8,r31,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// beq 0x82249bd4
	if (ctx.cr0.eq) goto loc_82249BD4;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// oris r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 65536;
loc_82249BD4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82249be0
	if (!ctx.cr6.eq) goto loc_82249BE0;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82249BE0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r6,-32199
	ctx.r6.s64 = -2110193664;
	// oris r4,r28,16
	ctx.r4.u64 = ctx.r28.u64 | 1048576;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// andi. r8,r31,32679
	ctx.r8.u64 = ctx.r31.u64 & 32679;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,2120(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2120);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82249c6c
	if (!ctx.cr0.lt) goto loc_82249C6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224b498
	ctx.lr = 0x82249C2C;
	sub_8224B498(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,53
	ctx.r11.u64 = ctx.r11.u64 | 53;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82249c44
	if (!ctx.cr6.eq) goto loc_82249C44;
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x82249c64
	goto loc_82249C64;
loc_82249C44:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,186
	ctx.r11.u64 = ctx.r11.u64 | 186;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82249b18
	if (!ctx.cr6.eq) goto loc_82249B18;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne cr6,0x82249c64
	if (!ctx.cr6.eq) goto loc_82249C64;
	// li r3,5
	ctx.r3.s64 = 5;
loc_82249C64:
	// bl 0x8224b5b8
	ctx.lr = 0x82249C68;
	sub_8224B5B8(ctx, base);
	// b 0x82249b18
	goto loc_82249B18;
loc_82249C6C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// bne cr6,0x82249c80
	if (!ctx.cr6.eq) goto loc_82249C80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82249c90
	if (ctx.cr6.eq) goto loc_82249C90;
loc_82249C80:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bne cr6,0x82249c98
	if (!ctx.cr6.eq) goto loc_82249C98;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82249c98
	if (!ctx.cr6.eq) goto loc_82249C98;
loc_82249C90:
	// li r3,183
	ctx.r3.s64 = 183;
	// b 0x82249c9c
	goto loc_82249C9C;
loc_82249C98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82249C9C:
	// bl 0x8224b5b8
	ctx.lr = 0x82249CA0;
	sub_8224B5B8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82249CA4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82249CAC"))) PPC_WEAK_FUNC(sub_82249CAC);
PPC_FUNC_IMPL(__imp__sub_82249CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82249CB0"))) PPC_WEAK_FUNC(sub_82249CB0);
PPC_FUNC_IMPL(__imp__sub_82249CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82388814
	ctx.lr = 0x82249CD0;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,2120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82249d44
	if (ctx.cr0.lt) goto loc_82249D44;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// std r10,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r10.u64);
	// std r9,12(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12, ctx.r9.u64);
	// std r8,20(r31)
	PPC_STORE_U64(ctx.r31.u32 + 20, ctx.r8.u64);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// b 0x82249d4c
	goto loc_82249D4C;
loc_82249D44:
	// bl 0x8224b498
	ctx.lr = 0x82249D48;
	sub_8224B498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82249D4C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82249D60"))) PPC_WEAK_FUNC(sub_82249D60);
PPC_FUNC_IMPL(__imp__sub_82249D60) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82253a68
	ctx.lr = 0x82249D7C;
	sub_82253A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82249db0
	if (ctx.cr0.eq) goto loc_82249DB0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82249d94
	if (ctx.cr6.eq) goto loc_82249D94;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82249D94:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82249db4
	if (!ctx.cr6.eq) goto loc_82249DB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224b5b8
	ctx.lr = 0x82249DA8;
	sub_8224B5B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82249db4
	goto loc_82249DB4;
loc_82249DB0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82249DB4:
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

__attribute__((alias("__imp__sub_82249DC8"))) PPC_WEAK_FUNC(sub_82249DC8);
PPC_FUNC_IMPL(__imp__sub_82249DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82249DD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82249df8
	if (ctx.cr6.eq) goto loc_82249DF8;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82249dfc
	goto loc_82249DFC;
loc_82249DF8:
	// extsw r30,r4
	ctx.r30.s64 = ctx.r4.s32;
loc_82249DFC:
	// lis r31,-32199
	ctx.r31.s64 = -2110193664;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x82249e88
	if (ctx.cr6.lt) goto loc_82249E88;
	// beq cr6,0x82249e54
	if (ctx.cr6.eq) goto loc_82249E54;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x82249e54
	if (!ctx.cr6.lt) goto loc_82249E54;
	// lwz r11,2120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82249e48
	if (!ctx.cr0.lt) goto loc_82249E48;
loc_82249E40:
	// bl 0x8224b498
	ctx.lr = 0x82249E44;
	sub_8224B498(ctx, base);
	// b 0x82249f2c
	goto loc_82249F2C;
loc_82249E48:
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
loc_82249E4C:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82249e8c
	goto loc_82249E8C;
loc_82249E54:
	// lwz r11,2120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82249e40
	if (ctx.cr0.lt) goto loc_82249E40;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82249e4c
	goto loc_82249E4C;
loc_82249E88:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82249E8C:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82249ea4
	if (!ctx.cr6.lt) goto loc_82249EA4;
	// li r3,131
	ctx.r3.s64 = 131;
loc_82249E9C:
	// bl 0x8224b480
	ctx.lr = 0x82249EA0;
	sub_8224B480(ctx, base);
	// b 0x82249f2c
	goto loc_82249F2C;
loc_82249EA4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82249ec0
	if (!ctx.cr6.eq) goto loc_82249EC0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82249ec0
	if (ctx.cr0.eq) goto loc_82249EC0;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82249e9c
	goto loc_82249E9C;
loc_82249EC0:
	// lwz r11,2120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82249f18
	if (ctx.cr0.lt) goto loc_82249F18;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82249efc
	if (ctx.cr6.eq) goto loc_82249EFC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82249EFC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82249f10
	if (!ctx.cr6.eq) goto loc_82249F10;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224b5b8
	ctx.lr = 0x82249F10;
	sub_8224B5B8(ctx, base);
loc_82249F10:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82249f30
	goto loc_82249F30;
loc_82249F18:
	// bl 0x8224b498
	ctx.lr = 0x82249F1C;
	sub_8224B498(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82249f2c
	if (ctx.cr6.eq) goto loc_82249F2C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82249F2C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82249F30:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82249F38"))) PPC_WEAK_FUNC(sub_82249F38);
PPC_FUNC_IMPL(__imp__sub_82249F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82249F40;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82249f68
	if (ctx.cr6.eq) goto loc_82249F68;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
loc_82249F68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8224a00c
	if (ctx.cr6.eq) goto loc_8224A00C;
	// li r6,259
	ctx.r6.s64 = 259;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,2120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addic r7,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 & ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82249fe8
	if (ctx.cr0.lt) goto loc_82249FE8;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// beq cr6,0x82249fe8
	if (ctx.cr6.eq) goto loc_82249FE8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82249fe0
	if (ctx.cr6.eq) goto loc_82249FE0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82249FE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224a0ac
	goto loc_8224A0AC;
loc_82249FE8:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8224a0a4
	if (!ctx.cr6.eq) goto loc_8224A0A4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8224a004
	if (ctx.cr6.eq) goto loc_8224A004;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_8224A004:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8224a0a4
	goto loc_8224A0A4;
loc_8224A00C:
	// lwz r11,2120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x8224a058
	if (!ctx.cr6.eq) goto loc_8224A058;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388ac4
	ctx.lr = 0x8224A04C;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224a070
	if (ctx.cr0.lt) goto loc_8224A070;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8224A058:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8224a070
	if (ctx.cr6.lt) goto loc_8224A070;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8224a0ac
	goto loc_8224A0AC;
loc_8224A070:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8224a08c
	if (!ctx.cr6.eq) goto loc_8224A08C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x8224a0ac
	goto loc_8224A0AC;
loc_8224A08C:
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8224a0a4
	if (!ctx.cr6.eq) goto loc_8224A0A4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8224A0A4:
	// bl 0x8224b498
	ctx.lr = 0x8224A0A8;
	sub_8224B498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224A0AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224A0B4"))) PPC_WEAK_FUNC(sub_8224A0B4);
PPC_FUNC_IMPL(__imp__sub_8224A0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A0B8"))) PPC_WEAK_FUNC(sub_8224A0B8);
PPC_FUNC_IMPL(__imp__sub_8224A0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8224A0C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8224a0e8
	if (ctx.cr6.eq) goto loc_8224A0E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8224A0E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8224a160
	if (ctx.cr6.eq) goto loc_8224A160;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,259
	ctx.r7.s64 = 259;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 & ctx.r31.u64;
	// bl 0x82388984
	ctx.lr = 0x8224A130;
	__imp__NtWriteFile(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224a1cc
	if (ctx.cr6.eq) goto loc_8224A1CC;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// beq cr6,0x8224a1cc
	if (ctx.cr6.eq) goto loc_8224A1CC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8224a158
	if (ctx.cr6.eq) goto loc_8224A158;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8224A158:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224a1d4
	goto loc_8224A1D4;
loc_8224A160:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82388984
	ctx.lr = 0x8224A174;
	__imp__NtWriteFile(ctx, base);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x8224a19c
	if (!ctx.cr6.eq) goto loc_8224A19C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388ac4
	ctx.lr = 0x8224A190;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224a1b4
	if (ctx.cr0.lt) goto loc_8224A1B4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8224A19C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8224a1b4
	if (ctx.cr6.lt) goto loc_8224A1B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8224a1d4
	goto loc_8224A1D4;
loc_8224A1B4:
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8224a1cc
	if (!ctx.cr6.eq) goto loc_8224A1CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8224A1CC:
	// bl 0x8224b498
	ctx.lr = 0x8224A1D0;
	sub_8224B498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224A1D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224A1DC"))) PPC_WEAK_FUNC(sub_8224A1DC);
PPC_FUNC_IMPL(__imp__sub_8224A1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A1E0"))) PPC_WEAK_FUNC(sub_8224A1E0);
PPC_FUNC_IMPL(__imp__sub_8224A1E0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82388ad4
	ctx.lr = 0x8224A1F4;
	__imp__NtResumeThread(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224a208
	if (!ctx.cr0.lt) goto loc_8224A208;
	// bl 0x8224b498
	ctx.lr = 0x8224A200;
	sub_8224B498(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8224a20c
	goto loc_8224A20C;
loc_8224A208:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8224A20C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224A21C"))) PPC_WEAK_FUNC(sub_8224A21C);
PPC_FUNC_IMPL(__imp__sub_8224A21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A220"))) PPC_WEAK_FUNC(sub_8224A220);
PPC_FUNC_IMPL(__imp__sub_8224A220) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8224a28c
	if (ctx.cr6.eq) goto loc_8224A28C;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224a28c
	if (ctx.cr6.eq) goto loc_8224A28C;
	// andi. r11,r6,144
	ctx.r11.u64 = ctx.r6.u64 & 144;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 144, ctx.xer);
	// beq cr6,0x8224a28c
	if (ctx.cr6.eq) goto loc_8224A28C;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8224a268
	if (!ctx.cr6.eq) goto loc_8224A268;
	// rlwinm. r31,r6,0,24,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8224a268
	if (!ctx.cr0.eq) goto loc_8224A268;
	// ori r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 16;
loc_8224A268:
	// rlwinm. r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224a27c
	if (ctx.cr0.eq) goto loc_8224A27C;
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8224a28c
	if (!ctx.cr6.eq) goto loc_8224A28C;
loc_8224A27C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823885e4
	ctx.lr = 0x8224A288;
	__imp__XamContentCreateEx(ctx, base);
	// b 0x8224a290
	goto loc_8224A290;
loc_8224A28C:
	// li r3,87
	ctx.r3.s64 = 87;
loc_8224A290:
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

__attribute__((alias("__imp__sub_8224A2A4"))) PPC_WEAK_FUNC(sub_8224A2A4);
PPC_FUNC_IMPL(__imp__sub_8224A2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A2A8"))) PPC_WEAK_FUNC(sub_8224A2A8);
PPC_FUNC_IMPL(__imp__sub_8224A2A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823885f4
	__imp__XamContentDelete(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224A2AC"))) PPC_WEAK_FUNC(sub_8224A2AC);
PPC_FUNC_IMPL(__imp__sub_8224A2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A2B0"))) PPC_WEAK_FUNC(sub_8224A2B0);
PPC_FUNC_IMPL(__imp__sub_8224A2B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82388604
	__imp__XamContentClose(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224A2B4"))) PPC_WEAK_FUNC(sub_8224A2B4);
PPC_FUNC_IMPL(__imp__sub_8224A2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A2B8"))) PPC_WEAK_FUNC(sub_8224A2B8);
PPC_FUNC_IMPL(__imp__sub_8224A2B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82388614
	__imp__XamContentGetCreator(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224A2BC"))) PPC_WEAK_FUNC(sub_8224A2BC);
PPC_FUNC_IMPL(__imp__sub_8224A2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A2C0"))) PPC_WEAK_FUNC(sub_8224A2C0);
PPC_FUNC_IMPL(__imp__sub_8224A2C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82388624
	__imp__XamContentGetLicenseMask(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224A2C4"))) PPC_WEAK_FUNC(sub_8224A2C4);
PPC_FUNC_IMPL(__imp__sub_8224A2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A2C8"))) PPC_WEAK_FUNC(sub_8224A2C8);
PPC_FUNC_IMPL(__imp__sub_8224A2C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82388634
	__imp__XamContentCreateEnumerator(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224A2CC"))) PPC_WEAK_FUNC(sub_8224A2CC);
PPC_FUNC_IMPL(__imp__sub_8224A2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A2D0"))) PPC_WEAK_FUNC(sub_8224A2D0);
PPC_FUNC_IMPL(__imp__sub_8224A2D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82388644
	__imp__XamContentGetDeviceState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224A2D4"))) PPC_WEAK_FUNC(sub_8224A2D4);
PPC_FUNC_IMPL(__imp__sub_8224A2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A2D8"))) PPC_WEAK_FUNC(sub_8224A2D8);
PPC_FUNC_IMPL(__imp__sub_8224A2D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82388654
	__imp__XamContentGetDeviceData(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224A2DC"))) PPC_WEAK_FUNC(sub_8224A2DC);
PPC_FUNC_IMPL(__imp__sub_8224A2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A2E0"))) PPC_WEAK_FUNC(sub_8224A2E0);
PPC_FUNC_IMPL(__imp__sub_8224A2E0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,4159
	ctx.r11.s64 = ctx.r11.s64 + 4159;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r11,r11,1,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFE000;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// li r9,170
	ctx.r9.s64 = 170;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// addi r11,r8,169
	ctx.r11.s64 = ctx.r8.s64 + 169;
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8224a320
	if (!ctx.cr6.gt) goto loc_8224A320;
	// addi r10,r11,169
	ctx.r10.s64 = ctx.r11.s64 + 169;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// b 0x8224a324
	goto loc_8224A324;
loc_8224A320:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8224A324:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8224a338
	if (!ctx.cr6.gt) goto loc_8224A338;
	// addi r7,r10,169
	ctx.r7.s64 = ctx.r10.s64 + 169;
	// divwu r9,r7,r9
	ctx.r9.u32 = ctx.r7.u32 / ctx.r9.u32;
	// b 0x8224a33c
	goto loc_8224A33C;
loc_8224A338:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8224A33C:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// rldicr r3,r11,12,51
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFFFF000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224A35C"))) PPC_WEAK_FUNC(sub_8224A35C);
PPC_FUNC_IMPL(__imp__sub_8224A35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A360"))) PPC_WEAK_FUNC(sub_8224A360);
PPC_FUNC_IMPL(__imp__sub_8224A360) {
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
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8224a220
	ctx.lr = 0x8224A38C;
	sub_8224A220(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224A39C"))) PPC_WEAK_FUNC(sub_8224A39C);
PPC_FUNC_IMPL(__imp__sub_8224A39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A3A0"))) PPC_WEAK_FUNC(sub_8224A3A0);
PPC_FUNC_IMPL(__imp__sub_8224A3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8224A3A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82388814
	ctx.lr = 0x8224A3C4;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388934
	ctx.lr = 0x8224A400;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224a428
	if (!ctx.cr0.lt) goto loc_8224A428;
	// bl 0x8224b498
	ctx.lr = 0x8224A40C;
	sub_8224B498(ctx, base);
	// bl 0x822471d0
	ctx.lr = 0x8224A410;
	sub_822471D0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8224a420
	if (!ctx.cr6.eq) goto loc_8224A420;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8224b5b8
	ctx.lr = 0x8224A420;
	sub_8224B5B8(ctx, base);
loc_8224A420:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224a4a8
	goto loc_8224A4A8;
loc_8224A428:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82388914
	ctx.lr = 0x8224A440;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388924
	ctx.lr = 0x8224A44C;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8224a460
	if (!ctx.cr6.lt) goto loc_8224A460;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224b498
	ctx.lr = 0x8224A45C;
	sub_8224B498(ctx, base);
	// b 0x8224a420
	goto loc_8224A420;
loc_8224A460:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulld r11,r9,r8
	ctx.r11.s64 = ctx.r9.s64 * ctx.r8.s64;
	// mulld r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 * ctx.r8.s64;
	// beq cr6,0x8224a48c
	if (ctx.cr6.eq) goto loc_8224A48C;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_8224A48C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8224a498
	if (ctx.cr6.eq) goto loc_8224A498;
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
loc_8224A498:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8224a4a4
	if (ctx.cr6.eq) goto loc_8224A4A4;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_8224A4A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8224A4A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224A4B0"))) PPC_WEAK_FUNC(sub_8224A4B0);
PPC_FUNC_IMPL(__imp__sub_8224A4B0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82388814
	ctx.lr = 0x8224A4CC;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r8,16448
	ctx.r8.s64 = 16448;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82388934
	ctx.lr = 0x8224A500;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224a548
	if (ctx.cr0.lt) goto loc_8224A548;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,13
	ctx.r7.s64 = 13;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82388af4
	ctx.lr = 0x8224A528;
	__imp__NtSetInformationFile(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82388924
	ctx.lr = 0x8224A534;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8224a544
	if (ctx.cr6.lt) goto loc_8224A544;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224a550
	goto loc_8224A550;
loc_8224A544:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8224A548:
	// bl 0x8224b498
	ctx.lr = 0x8224A54C;
	sub_8224B498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224A550:
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

__attribute__((alias("__imp__sub_8224A564"))) PPC_WEAK_FUNC(sub_8224A564);
PPC_FUNC_IMPL(__imp__sub_8224A564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A568"))) PPC_WEAK_FUNC(sub_8224A568);
PPC_FUNC_IMPL(__imp__sub_8224A568) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,996
	ctx.r3.s64 = 996;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224a57c
	if (!ctx.cr6.eq) goto loc_8224A57C;
	// b 0x822471d0
	sub_822471D0(ctx, base);
	return;
loc_8224A57C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,997
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 997, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224A590"))) PPC_WEAK_FUNC(sub_8224A590);
PPC_FUNC_IMPL(__imp__sub_8224A590) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bne cr6,0x8224a5fc
	if (!ctx.cr6.eq) goto loc_8224A5FC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8224a5dc
	if (ctx.cr6.eq) goto loc_8224A5DC;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224a5d0
	if (ctx.cr6.eq) goto loc_8224A5D0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8224A5D0:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82247250
	ctx.lr = 0x8224A5D8;
	sub_82247250(ctx, base);
	// b 0x8224a5e0
	goto loc_8224A5E0;
loc_8224A5DC:
	// li r3,258
	ctx.r3.s64 = 258;
loc_8224A5E0:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x8224a5f4
	if (!ctx.cr6.eq) goto loc_8224A5F4;
	// li r3,996
	ctx.r3.s64 = 996;
	// bl 0x8224b5b8
	ctx.lr = 0x8224A5F0;
	sub_8224B5B8(ctx, base);
	// b 0x8224a61c
	goto loc_8224A61C;
loc_8224A5F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224a61c
	if (!ctx.cr6.eq) goto loc_8224A61C;
loc_8224A5FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8224a618
	if (ctx.cr6.lt) goto loc_8224A618;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224a620
	goto loc_8224A620;
loc_8224A618:
	// bl 0x8224b498
	ctx.lr = 0x8224A61C;
	sub_8224B498(ctx, base);
loc_8224A61C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224A620:
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

__attribute__((alias("__imp__sub_8224A638"))) PPC_WEAK_FUNC(sub_8224A638);
PPC_FUNC_IMPL(__imp__sub_8224A638) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224a690
	if (!ctx.cr6.eq) goto loc_8224A690;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,2096
	ctx.r3.s64 = ctx.r11.s64 + 2096;
	// bl 0x82388b04
	ctx.lr = 0x8224A670;
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224a688
	if (ctx.cr0.lt) goto loc_8224A688;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823888d4
	ctx.lr = 0x8224A688;
	__imp__XexGetProcedureAddress(ctx, base);
loc_8224A688:
	// bl 0x82388a34
	ctx.lr = 0x8224A68C;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x8224a694
	goto loc_8224A694;
loc_8224A690:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224A694:
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

__attribute__((alias("__imp__sub_8224A6AC"))) PPC_WEAK_FUNC(sub_8224A6AC);
PPC_FUNC_IMPL(__imp__sub_8224A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A6B0"))) PPC_WEAK_FUNC(sub_8224A6B0);
PPC_FUNC_IMPL(__imp__sub_8224A6B0) {
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
	// lis r31,-32199
	ctx.r31.s64 = -2110193664;
	// lwz r11,2068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8224a728
	if (!ctx.cr6.eq) goto loc_8224A728;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r4,r4,2047
	ctx.r4.u64 = ctx.r4.u64 | 2047;
	// lwz r11,1792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1792);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x82388954
	ctx.lr = 0x8224A6F4;
	__imp__RtlImageXexHeaderField(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224a748
	if (ctx.cr0.eq) goto loc_8224A748;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8224a740
	if (!ctx.cr6.gt) goto loc_8224A740;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8224a740
	if (!ctx.cr0.eq) goto loc_8224A740;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r10.u32);
	// stw r11,-6512(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6512, ctx.r11.u32);
loc_8224A728:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224A72C:
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
loc_8224A740:
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x8224a72c
	goto loc_8224A72C;
loc_8224A748:
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x8224a72c
	goto loc_8224A72C;
}

__attribute__((alias("__imp__sub_8224A750"))) PPC_WEAK_FUNC(sub_8224A750);
PPC_FUNC_IMPL(__imp__sub_8224A750) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82388664
	ctx.lr = 0x8224A774;
	__imp__XamGetExecutionId(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224a790
	if (ctx.cr0.lt) goto loc_8224A790;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8224a790
	if (!ctx.cr6.eq) goto loc_8224A790;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8224A790:
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

__attribute__((alias("__imp__sub_8224A7AC"))) PPC_WEAK_FUNC(sub_8224A7AC);
PPC_FUNC_IMPL(__imp__sub_8224A7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A7B0"))) PPC_WEAK_FUNC(sub_8224A7B0);
PPC_FUNC_IMPL(__imp__sub_8224A7B0) {
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
	// bl 0x8224a6b0
	ctx.lr = 0x8224A7D0;
	sub_8224A6B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8224a818
	if (!ctx.cr0.eq) goto loc_8224A818;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,2068(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2068);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8224a818
	if (ctx.cr6.eq) goto loc_8224A818;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lwz r10,-6512(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6512);
loc_8224A7F4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8224a814
	if (ctx.cr6.eq) goto loc_8224A814;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8224a7f4
	if (ctx.cr6.lt) goto loc_8224A7F4;
	// b 0x8224a818
	goto loc_8224A818;
loc_8224A814:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8224A818:
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

__attribute__((alias("__imp__sub_8224A834"))) PPC_WEAK_FUNC(sub_8224A834);
PPC_FUNC_IMPL(__imp__sub_8224A834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

