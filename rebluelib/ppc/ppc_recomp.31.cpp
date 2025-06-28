#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82220318"))) PPC_WEAK_FUNC(sub_82220318);
PPC_FUNC_IMPL(__imp__sub_82220318) {
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
	ctx.lr = 0x82220330;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222033c
	if (!ctx.cr6.eq) goto loc_8222033C;
	// bl 0x821b3000
	ctx.lr = 0x8222033C;
	sub_821B3000(ctx, base);
loc_8222033C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r10,r10,4536
	ctx.r10.s64 = ctx.r10.s64 + 4536;
	// addi r7,r9,4492
	ctx.r7.s64 = ctx.r9.s64 + 4492;
	// lis r6,-13569
	ctx.r6.s64 = -889257984;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,15
	ctx.r8.s64 = ctx.r8.s64 + 15;
	// stw r9,328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 328, ctx.r9.u32);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r8,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82220384
	if (!ctx.cr6.gt) goto loc_82220384;
	// stw r7,-13570(r6)
	PPC_STORE_U32(ctx.r6.u32 + -13570, ctx.r7.u32);
loc_82220384:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r9,324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 324, ctx.r9.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r9,8272
	ctx.r3.s64 = ctx.r9.s64 + 8272;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x822203b4
	if (!ctx.cr6.gt) goto loc_822203B4;
	// stw r7,-13570(r6)
	PPC_STORE_U32(ctx.r6.u32 + -13570, ctx.r7.u32);
loc_822203B4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r9,8272
	ctx.r7.s64 = ctx.r9.s64 + 8272;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r9,332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 332, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822203DC"))) PPC_WEAK_FUNC(sub_822203DC);
PPC_FUNC_IMPL(__imp__sub_822203DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822203E0"))) PPC_WEAK_FUNC(sub_822203E0);
PPC_FUNC_IMPL(__imp__sub_822203E0) {
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
	ctx.lr = 0x822203F8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82220404
	if (!ctx.cr6.eq) goto loc_82220404;
	// bl 0x821b3000
	ctx.lr = 0x82220404;
	sub_821B3000(ctx, base);
loc_82220404:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,4536
	ctx.r9.s64 = ctx.r11.s64 + 4536;
	// addi r5,r10,4520
	ctx.r5.s64 = ctx.r10.s64 + 4520;
	// lis r4,-13569
	ctx.r4.s64 = -889257984;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r10,332(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 332);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82220460
	if (ctx.cr6.eq) goto loc_82220460;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,8272
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8272, ctx.xer);
	// bge cr6,0x82220438
	if (!ctx.cr6.lt) goto loc_82220438;
	// stw r5,-13570(r4)
	PPC_STORE_U32(ctx.r4.u32 + -13570, ctx.r5.u32);
loc_82220438:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-8272
	ctx.r8.s64 = ctx.r8.s64 + -8272;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82220454
	if (ctx.cr6.eq) goto loc_82220454;
	// stw r5,-13570(r4)
	PPC_STORE_U32(ctx.r4.u32 + -13570, ctx.r5.u32);
loc_82220454:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-8272
	ctx.r10.s64 = ctx.r10.s64 + -8272;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82220460:
	// lwz r6,324(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 324);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822204b4
	if (ctx.cr6.eq) goto loc_822204B4;
	// lwz r10,328(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r7,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8222048c
	if (!ctx.cr6.gt) goto loc_8222048C;
	// stw r5,-13570(r4)
	PPC_STORE_U32(ctx.r4.u32 + -13570, ctx.r5.u32);
loc_8222048C:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822204a8
	if (ctx.cr6.eq) goto loc_822204A8;
	// stw r5,-13570(r4)
	PPC_STORE_U32(ctx.r4.u32 + -13570, ctx.r5.u32);
loc_822204A8:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_822204B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,332(r9)
	PPC_STORE_U32(ctx.r9.u32 + 332, ctx.r11.u32);
	// stw r10,324(r9)
	PPC_STORE_U32(ctx.r9.u32 + 324, ctx.r10.u32);
	// stw r8,328(r9)
	PPC_STORE_U32(ctx.r9.u32 + 328, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822204DC"))) PPC_WEAK_FUNC(sub_822204DC);
PPC_FUNC_IMPL(__imp__sub_822204DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822204E0"))) PPC_WEAK_FUNC(sub_822204E0);
PPC_FUNC_IMPL(__imp__sub_822204E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x822204E8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x822204F8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82220504
	if (!ctx.cr6.eq) goto loc_82220504;
	// bl 0x821b3000
	ctx.lr = 0x82220504;
	sub_821B3000(ctx, base);
loc_82220504:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r18,-13569
	ctx.r18.s64 = -889257984;
	// addi r22,r11,4536
	ctx.r22.s64 = ctx.r11.s64 + 4536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// addi r19,r11,4492
	ctx.r19.s64 = ctx.r11.s64 + 4492;
	// lwz r23,0(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// rlwinm r20,r7,0,0,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// add r6,r9,r20
	ctx.r6.u64 = ctx.r9.u64 + ctx.r20.u64;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82220548
	if (!ctx.cr6.gt) goto loc_82220548;
	// stw r19,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r19.u32);
loc_82220548:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// add r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 + ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// add r21,r10,r9
	ctx.r21.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x822205f4
	if (ctx.cr6.eq) goto loc_822205F4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r21,-4
	ctx.r25.s64 = ctx.r21.s64 + -4;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_8222057C:
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// lwzx r31,r27,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82220598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822205e8
	if (ctx.cr6.eq) goto loc_822205E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822205B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822205e8
	if (!ctx.cr6.eq) goto loc_822205E8;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822205d8
	if (!ctx.cr6.eq) goto loc_822205D8;
	// stwu r31,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r25.u32 = ea;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_822205D8:
	// lwz r11,324(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 324);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r31,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r31.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_822205E8:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8222057c
	if (!ctx.cr0.eq) goto loc_8222057C;
loc_822205F4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,332(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 332);
	// lwz r3,324(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 324);
	// bl 0x82208940
	ctx.lr = 0x82220604;
	sub_82208940(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82220624
	if (ctx.cr6.eq) goto loc_82220624;
	// addi r29,r21,-4
	ctx.r29.s64 = ctx.r21.s64 + -4;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82220614:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x821dbfe8
	ctx.lr = 0x8222061C;
	sub_821DBFE8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82220614
	if (!ctx.cr0.eq) goto loc_82220614;
loc_82220624:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r4,r11,4520
	ctx.r4.s64 = ctx.r11.s64 + 4520;
	// beq cr6,0x8222066c
	if (ctx.cr6.eq) goto loc_8222066C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82220644
	if (!ctx.cr6.gt) goto loc_82220644;
	// stw r4,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r4.u32);
loc_82220644:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r20,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r20.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82220660
	if (ctx.cr6.eq) goto loc_82220660;
	// stw r4,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r4.u32);
loc_82220660:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r20,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r20.s64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8222066C:
	// lwz r7,4(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,15
	ctx.r6.s64 = ctx.r9.s64 + 15;
	// rlwinm r6,r6,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82220698
	if (!ctx.cr6.gt) goto loc_82220698;
	// stw r19,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r19.u32);
loc_82220698:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// beq cr6,0x822206fc
	if (ctx.cr6.eq) goto loc_822206FC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r5,-4
	ctx.r8.s64 = ctx.r5.s64 + -4;
loc_822206C0:
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822206e0
	if (ctx.cr6.eq) goto loc_822206E0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822206e4
	if (!ctx.cr6.eq) goto loc_822206E4;
loc_822206E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822206E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822206f4
	if (ctx.cr6.eq) goto loc_822206F4;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
loc_822206F4:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x822206c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822206C0;
loc_822206FC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222073c
	if (ctx.cr6.eq) goto loc_8222073C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82220714
	if (!ctx.cr6.gt) goto loc_82220714;
	// stw r4,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r4.u32);
loc_82220714:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82220730
	if (ctx.cr6.eq) goto loc_82220730;
	// stw r4,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r4.u32);
loc_82220730:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8222073C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220744"))) PPC_WEAK_FUNC(sub_82220744);
PPC_FUNC_IMPL(__imp__sub_82220744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220748"))) PPC_WEAK_FUNC(sub_82220748);
PPC_FUNC_IMPL(__imp__sub_82220748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82220750;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r26,r11,4536
	ctx.r26.s64 = ctx.r11.s64 + 4536;
	// lwz r23,380(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 380);
	// lwz r19,236(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 236);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8222077c
	if (!ctx.cr6.eq) goto loc_8222077C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82220ad8
	if (ctx.cr6.eq) goto loc_82220AD8;
loc_8222077C:
	// lwz r11,1804(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1804);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// lhz r30,348(r26)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + 348);
	// li r24,0
	ctx.r24.s64 = 0;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,1804(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1804, ctx.r11.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r3,-27096(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27096);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82388734
	ctx.lr = 0x822207AC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822207b8
	if (!ctx.cr6.eq) goto loc_822207B8;
	// bl 0x821b3000
	ctx.lr = 0x822207B8;
	sub_821B3000(ctx, base);
loc_822207B8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r16,r3,20
	ctx.r16.s64 = ctx.r3.s64 + 20;
	// ori r15,r11,32848
	ctx.r15.u64 = ctx.r11.u64 | 32848;
	// add r8,r10,r15
	ctx.r8.u64 = ctx.r10.u64 + ctx.r15.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822207e8
	if (!ctx.cr6.gt) goto loc_822207E8;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4492
	ctx.r9.s64 = ctx.r10.s64 + 4492;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_822207E8:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r10,8(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// add r9,r11,r15
	ctx.r9.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r9,4(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4, ctx.r9.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq 0x82220828
	if (ctx.cr0.eq) goto loc_82220828;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// li r6,16384
	ctx.r6.s64 = 16384;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82080188
	ctx.lr = 0x82220820;
	sub_82080188(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// b 0x8222082c
	goto loc_8222082C;
loc_82220828:
	// li r14,0
	ctx.r14.s64 = 0;
loc_8222082C:
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82220a70
	if (ctx.cr6.eq) goto loc_82220A70;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r7,396(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 396);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r5,252(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 252);
	// li r18,2
	ctx.r18.s64 = 2;
	// ori r17,r10,65535
	ctx.r17.u64 = ctx.r10.u64 | 65535;
	// addi r20,r11,-23024
	ctx.r20.s64 = ctx.r11.s64 + -23024;
loc_82220854:
	// lwz r10,372(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 372);
	// rlwinm r11,r21,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3FFFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// lhz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// bge cr6,0x822208cc
	if (!ctx.cr6.lt) goto loc_822208CC;
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822208cc
	if (!ctx.cr6.eq) goto loc_822208CC;
	// addi r28,r24,1
	ctx.r28.s64 = ctx.r24.s64 + 1;
	// add r27,r11,r7
	ctx.r27.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x822208c8
	if (!ctx.cr6.lt) goto loc_822208C8;
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_822208A8:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822208c8
	if (!ctx.cr6.eq) goto loc_822208C8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blt cr6,0x822208a8
	if (ctx.cr6.lt) goto loc_822208A8;
loc_822208C8:
	// subf r29,r24,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r24.s64;
loc_822208CC:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r22,r19
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x822209dc
	if (!ctx.cr6.lt) goto loc_822209DC;
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82220938
	if (ctx.cr6.eq) goto loc_82220938;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82220938
	if (ctx.cr6.eq) goto loc_82220938;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222092c
	if (ctx.cr6.eq) goto loc_8222092C;
	// lwz r8,156(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8222092c
	if (ctx.cr6.eq) goto loc_8222092C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8222093c
	if (!ctx.cr6.eq) goto loc_8222093C;
	// lhz r11,164(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 164);
	// b 0x8222093c
	goto loc_8222093C;
loc_8222092C:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
	// b 0x8222093c
	goto loc_8222093C;
loc_82220938:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_8222093C:
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822209dc
	if (!ctx.cr6.eq) goto loc_822209DC;
	// addi r25,r22,1
	ctx.r25.s64 = ctx.r22.s64 + 1;
	// add r30,r9,r5
	ctx.r30.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmplw cr6,r25,r19
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x822209d8
	if (!ctx.cr6.lt) goto loc_822209D8;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_82220960:
	// lwzx r11,r9,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822209b8
	if (ctx.cr6.eq) goto loc_822209B8;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822209b8
	if (ctx.cr6.eq) goto loc_822209B8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822209ac
	if (ctx.cr6.eq) goto loc_822209AC;
	// lwz r4,156(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822209ac
	if (ctx.cr6.eq) goto loc_822209AC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822209bc
	if (!ctx.cr6.eq) goto loc_822209BC;
	// lhz r11,164(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 164);
	// b 0x822209bc
	goto loc_822209BC;
loc_822209AC:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
	// b 0x822209bc
	goto loc_822209BC;
loc_822209B8:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_822209BC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822209d8
	if (!ctx.cr6.eq) goto loc_822209D8;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r25,r19
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82220960
	if (ctx.cr6.lt) goto loc_82220960;
loc_822209D8:
	// subf r31,r22,r25
	ctx.r31.s64 = ctx.r25.s64 - ctx.r22.s64;
loc_822209DC:
	// lwz r11,320(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 320);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82220a44
	if (ctx.cr6.eq) goto loc_82220A44;
	// add. r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82220a44
	if (ctx.cr0.eq) goto loc_82220A44;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82080478
	ctx.lr = 0x82220A08;
	sub_82080478(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220a30
	if (ctx.cr6.eq) goto loc_82220A30;
	// stfs f31,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// b 0x82220a34
	goto loc_82220A34;
loc_82220A30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82220A34:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821b60c0
	ctx.lr = 0x82220A3C;
	sub_821B60C0(ctx, base);
	// lwz r7,396(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 396);
	// lwz r5,252(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 252);
loc_82220A44:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82220a50
	if (ctx.cr6.eq) goto loc_82220A50;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
loc_82220A50:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82220a5c
	if (ctx.cr6.eq) goto loc_82220A5C;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
loc_82220A5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82220854
	if (ctx.cr6.lt) goto loc_82220854;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82220A70:
	// bl 0x821b5da8
	ctx.lr = 0x82220A74;
	sub_821B5DA8(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82080210
	ctx.lr = 0x82220A7C;
	sub_82080210(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82220acc
	if (ctx.cr6.eq) goto loc_82220ACC;
	// lwz r10,4(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r10,32848
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32848, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// bge cr6,0x82220aa0
	if (!ctx.cr6.lt) goto loc_82220AA0;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_82220AA0:
	// lwz r10,4(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r15,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r15.s64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82220ac0
	if (ctx.cr6.eq) goto loc_82220AC0;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_82220AC0:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// subf r10,r15,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r15.s64;
	// stw r10,4(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4, ctx.r10.u32);
loc_82220ACC:
	// lwz r11,1804(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1804);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,1804(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1804, ctx.r11.u32);
loc_82220AD8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220AE4"))) PPC_WEAK_FUNC(sub_82220AE4);
PPC_FUNC_IMPL(__imp__sub_82220AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220AE8"))) PPC_WEAK_FUNC(sub_82220AE8);
PPC_FUNC_IMPL(__imp__sub_82220AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,160(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82220AF4:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82220af4
	if (ctx.cr6.eq) goto loc_82220AF4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82220B04:
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r10,r10,152
	ctx.r10.s64 = ctx.r10.s64 + 152;
loc_82220B10:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82220b34
	if (!ctx.cr6.eq) goto loc_82220B34;
	// stwcx. r7,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82220b10
	if (!ctx.cr0.eq) goto loc_82220B10;
	// b 0x82220b3c
	goto loc_82220B3C;
loc_82220B34:
	// stwcx. r5,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82220B3C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82220b64
	if (!ctx.cr6.eq) goto loc_82220B64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82220b04
	if (ctx.cr6.lt) goto loc_82220B04;
	// b 0x82220af4
	goto loc_82220AF4;
loc_82220B64:
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220B74"))) PPC_WEAK_FUNC(sub_82220B74);
PPC_FUNC_IMPL(__imp__sub_82220B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220B78"))) PPC_WEAK_FUNC(sub_82220B78);
PPC_FUNC_IMPL(__imp__sub_82220B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82220B80;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r30,-32197
	ctx.r30.s64 = -2110062592;
	// addi r15,r11,4536
	ctx.r15.s64 = ctx.r11.s64 + 4536;
	// lwz r20,4536(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4536);
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// lwz r31,4(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// bl 0x82388734
	ctx.lr = 0x82220BAC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82220bb8
	if (!ctx.cr6.eq) goto loc_82220BB8;
	// bl 0x821b3000
	ctx.lr = 0x82220BB8;
	sub_821B3000(ctx, base);
loc_82220BB8:
	// mulli r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 * 84;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r18,r11,4492
	ctx.r18.s64 = ctx.r11.s64 + 4492;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r16,r3,20
	ctx.r16.s64 = ctx.r3.s64 + 20;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r29,-13569
	ctx.r29.s64 = -889257984;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82220bf0
	if (!ctx.cr6.gt) goto loc_82220BF0;
	// stw r18,-13570(r29)
	PPC_STORE_U32(ctx.r29.u32 + -13570, ctx.r18.u32);
loc_82220BF0:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// stw r9,4(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4, ctx.r9.u32);
	// add r14,r11,r10
	ctx.r14.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82388734
	ctx.lr = 0x82220C0C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82220c18
	if (!ctx.cr6.eq) goto loc_82220C18;
	// bl 0x821b3000
	ctx.lr = 0x82220C18;
	sub_821B3000(ctx, base);
loc_82220C18:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r9,r7,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82220c44
	if (!ctx.cr6.gt) goto loc_82220C44;
	// stw r18,-13570(r29)
	PPC_STORE_U32(ctx.r29.u32 + -13570, ctx.r18.u32);
loc_82220C44:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x82388734
	ctx.lr = 0x82220C64;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82220c70
	if (!ctx.cr6.eq) goto loc_82220C70;
	// bl 0x821b3000
	ctx.lr = 0x82220C70;
	sub_821B3000(ctx, base);
loc_82220C70:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r17,r7,0,0,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// add r6,r17,r10
	ctx.r6.u64 = ctx.r17.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82220ca0
	if (!ctx.cr6.gt) goto loc_82220CA0;
	// stw r18,-13570(r29)
	PPC_STORE_U32(ctx.r29.u32 + -13570, ctx.r18.u32);
loc_82220CA0:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r7,r9,22200
	ctx.r7.s64 = ctx.r9.s64 + 22200;
	// add r6,r10,r17
	ctx.r6.u64 = ctx.r10.u64 + ctx.r17.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// li r22,2
	ctx.r22.s64 = 2;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// lfs f31,24(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// add r19,r8,r10
	ctx.r19.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r26,r9,-23016
	ctx.r26.s64 = ctx.r9.s64 + -23016;
	// beq cr6,0x82220cf8
	if (ctx.cr6.eq) goto loc_82220CF8;
	// stfs f30,76(r14)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r14.u32 + 76, temp.u32);
	// stw r22,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r22.u32);
	// stfs f31,80(r14)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r14.u32 + 80, temp.u32);
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// stw r26,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r26.u32);
	// stw r21,72(r14)
	PPC_STORE_U32(ctx.r14.u32 + 72, ctx.r21.u32);
	// b 0x82220cfc
	goto loc_82220CFC;
loc_82220CF8:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82220CFC:
	// addi r30,r14,84
	ctx.r30.s64 = ctx.r14.s64 + 84;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82220ebc
	if (ctx.cr6.eq) goto loc_82220EBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// addi r23,r11,-4
	ctx.r23.s64 = ctx.r11.s64 + -4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r27,r11,-23008
	ctx.r27.s64 = ctx.r11.s64 + -23008;
loc_82220D20:
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82220e24
	if (!ctx.cr6.eq) goto loc_82220E24;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r31,r31,-776
	ctx.r31.s64 = ctx.r31.s64 + -776;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r31.u32);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82220d94
	if (ctx.cr6.lt) goto loc_82220D94;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b60c0
	ctx.lr = 0x82220D68;
	sub_821B60C0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82220d8c
	if (ctx.cr6.eq) goto loc_82220D8C;
	// stfs f30,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// stw r22,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// stfs f31,80(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r21,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r21.u32);
	// b 0x82220d90
	goto loc_82220D90;
loc_82220D8C:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82220D90:
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
loc_82220D94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82220db4
	if (ctx.cr6.eq) goto loc_82220DB4;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82220db4
	if (ctx.cr6.eq) goto loc_82220DB4;
	// stwu r31,4(r23)
	ea = 4 + ctx.r23.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r23.u32 = ea;
loc_82220DB4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82220dcc
	if (ctx.cr6.eq) goto loc_82220DCC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82220dd0
	if (!ctx.cr6.eq) goto loc_82220DD0;
loc_82220DCC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82220DD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220eb0
	if (ctx.cr6.eq) goto loc_82220EB0;
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82220eb0
	if (ctx.cr6.eq) goto loc_82220EB0;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82220eb0
	if (!ctx.cr6.lt) goto loc_82220EB0;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 * 236;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82220eb0
	if (ctx.cr0.eq) goto loc_82220EB0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82220eb0
	if (ctx.cr6.eq) goto loc_82220EB0;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stwx r31,r11,r19
	PPC_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r31.u32);
	// b 0x82220eb0
	goto loc_82220EB0;
loc_82220E24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82220e48
	if (ctx.cr6.eq) goto loc_82220E48;
	// stfs f30,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f31,16(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stw r22,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// b 0x82220e4c
	goto loc_82220E4C;
loc_82220E48:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82220E4C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bl 0x821b60c0
	ctx.lr = 0x82220E58;
	sub_821B60C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ddb90
	ctx.lr = 0x82220E60;
	sub_821DDB90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220eb0
	if (ctx.cr6.eq) goto loc_82220EB0;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82220eb0
	if (ctx.cr6.eq) goto loc_82220EB0;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82220E8C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhz r8,814(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 814);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82220ea8
	if (!ctx.cr6.eq) goto loc_82220EA8;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82220EA8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82220e8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82220E8C;
loc_82220EB0:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82220d20
	if (!ctx.cr0.eq) goto loc_82220D20;
loc_82220EBC:
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220ed4
	if (ctx.cr6.eq) goto loc_82220ED4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b60c0
	ctx.lr = 0x82220ED4;
	sub_821B60C0(ctx, base);
loc_82220ED4:
	// bl 0x821b5da8
	ctx.lr = 0x82220ED8;
	sub_821B5DA8(ctx, base);
	// lwz r11,1804(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1804);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r27,4(r15)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bne cr6,0x82220f74
	if (!ctx.cr6.eq) goto loc_82220F74;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220f74
	if (ctx.cr6.eq) goto loc_82220F74;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82220F00:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82220f20
	if (!ctx.cr6.eq) goto loc_82220F20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82210370
	ctx.lr = 0x82220F20;
	sub_82210370(ctx, base);
loc_82220F20:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r30,r31,156
	ctx.r30.s64 = ctx.r31.s64 + 156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82220F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82220f68
	if (ctx.cr6.eq) goto loc_82220F68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221d148
	ctx.lr = 0x82220F4C;
	sub_8221D148(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82220F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82220F68:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82220f00
	if (!ctx.cr0.eq) goto loc_82220F00;
loc_82220F74:
	// rlwinm r10,r25,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r9,0(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lis r24,-13569
	ctx.r24.s64 = -889257984;
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// rlwinm r26,r8,0,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82220f9c
	if (!ctx.cr6.gt) goto loc_82220F9C;
	// stw r18,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r18.u32);
loc_82220F9C:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r10,8(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4, ctx.r9.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x82221010
	if (ctx.cr6.eq) goto loc_82221010;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r28,r11,-23000
	ctx.r28.s64 = ctx.r11.s64 + -23000;
loc_82220FCC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82220ff4
	if (ctx.cr6.eq) goto loc_82220FF4;
	// addi r10,r15,208
	ctx.r10.s64 = ctx.r15.s64 + 208;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// b 0x82220ff8
	goto loc_82220FF8;
loc_82220FF4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82220FF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bl 0x821b60c0
	ctx.lr = 0x82221004;
	sub_821B60C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82220fcc
	if (!ctx.cr0.eq) goto loc_82220FCC;
loc_82221010:
	// bl 0x821b5da8
	ctx.lr = 0x82221014;
	sub_821B5DA8(ctx, base);
	// lis r30,-32197
	ctx.r30.s64 = -2110062592;
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82221020;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222102c
	if (!ctx.cr6.eq) goto loc_8222102C;
	// bl 0x821b3000
	ctx.lr = 0x8222102C;
	sub_821B3000(ctx, base);
loc_8222102C:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r31,r10,4520
	ctx.r31.s64 = ctx.r10.s64 + 4520;
	// beq cr6,0x82221078
	if (ctx.cr6.eq) goto loc_82221078;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82221050
	if (!ctx.cr6.gt) goto loc_82221050;
	// stw r31,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r31.u32);
loc_82221050:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r26,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r26.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8222106c
	if (ctx.cr6.eq) goto loc_8222106C;
	// stw r31,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r31.u32);
loc_8222106C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r26,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r26.s64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82221078:
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82221080;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222108c
	if (!ctx.cr6.eq) goto loc_8222108C;
	// bl 0x821b3000
	ctx.lr = 0x8222108C;
	sub_821B3000(ctx, base);
loc_8222108C:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x822210d0
	if (ctx.cr6.eq) goto loc_822210D0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822210a8
	if (!ctx.cr6.gt) goto loc_822210A8;
	// stw r31,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r31.u32);
loc_822210A8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r17,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r17.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x822210c4
	if (ctx.cr6.eq) goto loc_822210C4;
	// stw r31,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r31.u32);
loc_822210C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r17,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r17.s64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_822210D0:
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x822210D8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822210e4
	if (!ctx.cr6.eq) goto loc_822210E4;
	// bl 0x821b3000
	ctx.lr = 0x822210E4;
	sub_821B3000(ctx, base);
loc_822210E4:
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82221130
	if (ctx.cr6.eq) goto loc_82221130;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82221108
	if (!ctx.cr6.gt) goto loc_82221108;
	// stw r31,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r31.u32);
loc_82221108:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82221124
	if (ctx.cr6.eq) goto loc_82221124;
	// stw r31,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r31.u32);
loc_82221124:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82221130:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82221174
	if (ctx.cr6.eq) goto loc_82221174;
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8222114c
	if (!ctx.cr6.gt) goto loc_8222114C;
	// stw r31,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r31.u32);
loc_8222114C:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r10,8(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x82221168
	if (ctx.cr6.eq) goto loc_82221168;
	// stw r31,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r31.u32);
loc_82221168:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r10,4(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4, ctx.r10.u32);
loc_82221174:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221184"))) PPC_WEAK_FUNC(sub_82221184);
PPC_FUNC_IMPL(__imp__sub_82221184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221188"))) PPC_WEAK_FUNC(sub_82221188);
PPC_FUNC_IMPL(__imp__sub_82221188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82221190;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r28,r11,-13936
	ctx.r28.s64 = ctx.r11.s64 + -13936;
	// lwz r11,18452(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,18460(r28)
	PPC_STORE_U32(ctx.r28.u32 + 18460, ctx.r11.u32);
	// beq cr6,0x822212dc
	if (ctx.cr6.eq) goto loc_822212DC;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x822211B8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822211c4
	if (!ctx.cr6.eq) goto loc_822211C4;
	// bl 0x821b3000
	ctx.lr = 0x822211C4;
	sub_821B3000(ctx, base);
loc_822211C4:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// ori r9,r10,32848
	ctx.r9.u64 = ctx.r10.u64 | 32848;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x822211f4
	if (!ctx.cr6.gt) goto loc_822211F4;
	// lis r10,-13569
	ctx.r10.s64 = -889257984;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,4492
	ctx.r7.s64 = ctx.r8.s64 + 4492;
	// stw r7,-13570(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13570, ctx.r7.u32);
loc_822211F4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add. r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r3,18464(r28)
	PPC_STORE_U32(ctx.r28.u32 + 18464, ctx.r3.u32);
	// beq 0x82221234
	if (ctx.cr0.eq) goto loc_82221234;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r3,68
	ctx.r4.s64 = ctx.r3.s64 + 68;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// li r6,16384
	ctx.r6.s64 = 16384;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// bl 0x82080188
	ctx.lr = 0x82221230;
	sub_82080188(ctx, base);
	// b 0x82221238
	goto loc_82221238;
loc_82221234:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82221238:
	// lwz r11,18460(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18460);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r3,18468(r28)
	PPC_STORE_U32(ctx.r28.u32 + 18468, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822212dc
	if (!ctx.cr6.gt) goto loc_822212DC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r28,20
	ctx.r29.s64 = ctx.r28.s64 + 20;
	// li r25,2
	ctx.r25.s64 = 2;
	// addi r26,r11,-22976
	ctx.r26.s64 = ctx.r11.s64 + -22976;
	// b 0x82221264
	goto loc_82221264;
loc_82221260:
	// lwz r3,18468(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18468);
loc_82221264:
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x82080478
	ctx.lr = 0x8222126C;
	sub_82080478(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822212a8
	if (ctx.cr6.eq) goto loc_822212A8;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x822212A0;
	sub_8233E4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822212ac
	goto loc_822212AC;
loc_822212A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822212AC:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822212c4
	if (!ctx.cr6.eq) goto loc_822212C4;
	// li r4,1
	ctx.r4.s64 = 1;
loc_822212C4:
	// bl 0x821b60c0
	ctx.lr = 0x822212C8;
	sub_821B60C0(ctx, base);
	// lwz r11,18460(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18460);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82221260
	if (ctx.cr6.lt) goto loc_82221260;
loc_822212DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822212E4"))) PPC_WEAK_FUNC(sub_822212E4);
PPC_FUNC_IMPL(__imp__sub_822212E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822212E8"))) PPC_WEAK_FUNC(sub_822212E8);
PPC_FUNC_IMPL(__imp__sub_822212E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x822212F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-13936
	ctx.r31.s64 = ctx.r11.s64 + -13936;
	// lwz r11,18460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822213f4
	if (ctx.cr6.eq) goto loc_822213F4;
	// bl 0x821b5da8
	ctx.lr = 0x8222130C;
	sub_821B5DA8(ctx, base);
	// lwz r11,18452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18452);
	// lwz r30,18460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18460);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8222136c
	if (!ctx.cr6.gt) goto loc_8222136C;
	// lwz r11,18452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18452);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8222136c
	if (!ctx.cr6.lt) goto loc_8222136C;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82221340:
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82221350;
	sub_8233E4E0(ctx, base);
	// lwz r11,18452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18452);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82221340
	if (ctx.cr6.lt) goto loc_82221340;
	// lwz r30,18460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18460);
loc_8222136C:
	// lwz r11,18452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18452);
	// lwz r3,18468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18468);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r10,18452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18452, ctx.r10.u32);
	// bl 0x82080210
	ctx.lr = 0x82221380;
	sub_82080210(ctx, base);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// lwz r3,-27096(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8222138C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82221398
	if (!ctx.cr6.eq) goto loc_82221398;
	// bl 0x821b3000
	ctx.lr = 0x82221398;
	sub_821B3000(ctx, base);
loc_82221398:
	// lwz r7,18464(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18464);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822213f4
	if (ctx.cr6.eq) goto loc_822213F4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-13569
	ctx.r5.s64 = -889257984;
	// addi r6,r10,4520
	ctx.r6.s64 = ctx.r10.s64 + 4520;
	// cmplwi cr6,r9,32848
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32848, ctx.xer);
	// bge cr6,0x822213c4
	if (!ctx.cr6.lt) goto loc_822213C4;
	// stw r6,-13570(r5)
	PPC_STORE_U32(ctx.r5.u32 + -13570, ctx.r6.u32);
loc_822213C4:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,32848
	ctx.r10.u64 = ctx.r10.u64 | 32848;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822213e8
	if (ctx.cr6.eq) goto loc_822213E8;
	// stw r6,-13570(r5)
	PPC_STORE_U32(ctx.r5.u32 + -13570, ctx.r6.u32);
loc_822213E8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_822213F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822213FC"))) PPC_WEAK_FUNC(sub_822213FC);
PPC_FUNC_IMPL(__imp__sub_822213FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221400"))) PPC_WEAK_FUNC(sub_82221400);
PPC_FUNC_IMPL(__imp__sub_82221400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82221408;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,2364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2364, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r30,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r30.u32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stw r30,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r30.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r30.u32);
	// stw r30,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r30.u32);
	// stw r30,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r30.u32);
	// bl 0x8233d288
	ctx.lr = 0x82221470;
	sub_8233D288(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r30,2448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2448, ctx.r30.u8);
	// addi r11,r31,2368
	ctx.r11.s64 = ctx.r31.s64 + 2368;
	// stb r30,2449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2449, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82221488:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82221488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82221488;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822214c0
	if (ctx.cr6.eq) goto loc_822214C0;
	// cmplwi cr6,r29,42
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 42, ctx.xer);
	// ble cr6,0x822214a4
	if (!ctx.cr6.gt) goto loc_822214A4;
	// li r29,42
	ctx.r29.s64 = 42;
loc_822214A4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,2400
	ctx.r3.s64 = ctx.r31.s64 + 2400;
	// bl 0x8233e4e0
	ctx.lr = 0x822214B4;
	sub_8233E4E0(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r29,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r29.u32);
	// stb r30,2400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2400, ctx.r30.u8);
loc_822214C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822214CC"))) PPC_WEAK_FUNC(sub_822214CC);
PPC_FUNC_IMPL(__imp__sub_822214CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822214D0"))) PPC_WEAK_FUNC(sub_822214D0);
PPC_FUNC_IMPL(__imp__sub_822214D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x822214D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r28,r11,16392
	ctx.r28.s64 = ctx.r11.s64 + 16392;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82221550
	if (!ctx.cr6.eq) goto loc_82221550;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82082030
	ctx.lr = 0x82221510;
	sub_82082030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221534
	if (ctx.cr6.eq) goto loc_82221534;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8222152C;
	sub_8233EAF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82221538
	goto loc_82221538;
loc_82221534:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82221538:
	// stw r31,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r31.u32);
	// stw r31,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r31.u32);
	// stw r31,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r31.u32);
	// stw r31,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r31.u32);
	// stw r31,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r31.u32);
	// stwx r3,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r3.u32);
loc_82221550:
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8233c048
	ctx.lr = 0x8222155C;
	sub_8233C048(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221564"))) PPC_WEAK_FUNC(sub_82221564);
PPC_FUNC_IMPL(__imp__sub_82221564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221568"))) PPC_WEAK_FUNC(sub_82221568);
PPC_FUNC_IMPL(__imp__sub_82221568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82221570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-17184
	ctx.r31.s64 = ctx.r11.s64 + -17184;
	// lwz r10,-17184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17184);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822215bc
	if (ctx.cr6.eq) goto loc_822215BC;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_82221590:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822215ac
	if (ctx.cr6.eq) goto loc_822215AC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822215A8;
	sub_82080000(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_822215AC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82221590
	if (ctx.cr6.lt) goto loc_82221590;
loc_822215BC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822215fc
	if (ctx.cr6.eq) goto loc_822215FC;
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
loc_822215D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822215ec
	if (ctx.cr6.eq) goto loc_822215EC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822215E8;
	sub_82080000(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_822215EC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822215d0
	if (ctx.cr6.lt) goto loc_822215D0;
loc_822215FC:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221614
	if (ctx.cr6.eq) goto loc_82221614;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82221614;
	sub_82080000(ctx, base);
loc_82221614:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222161C"))) PPC_WEAK_FUNC(sub_8222161C);
PPC_FUNC_IMPL(__imp__sub_8222161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221620"))) PPC_WEAK_FUNC(sub_82221620);
PPC_FUNC_IMPL(__imp__sub_82221620) {
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
	// addi r10,r11,-17184
	ctx.r10.s64 = ctx.r11.s64 + -17184;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,284(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822216c0
	if (ctx.cr6.eq) goto loc_822216C0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8222167c
	if (!ctx.cr6.eq) goto loc_8222167C;
	// bl 0x820ddca8
	ctx.lr = 0x82221664;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221674
	if (ctx.cr6.eq) goto loc_82221674;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x822216a0
	goto loc_822216A0;
loc_82221674:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822216a0
	goto loc_822216A0;
loc_8222167C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822216c0
	if (ctx.cr6.eq) goto loc_822216C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x822216A0;
	sub_820F3178(ctx, base);
loc_822216A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822216c0
	if (ctx.cr6.eq) goto loc_822216C0;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822216c0
	if (ctx.cr6.eq) goto loc_822216C0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820daf68
	ctx.lr = 0x822216C0;
	sub_820DAF68(ctx, base);
loc_822216C0:
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

__attribute__((alias("__imp__sub_822216D8"))) PPC_WEAK_FUNC(sub_822216D8);
PPC_FUNC_IMPL(__imp__sub_822216D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x822216E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8222177c
	if (ctx.cr6.eq) goto loc_8222177C;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r28,r11,-22908
	ctx.r28.s64 = ctx.r11.s64 + -22908;
loc_82221710:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,2352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222175c
	if (ctx.cr6.eq) goto loc_8222175C;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8222175c
	if (ctx.cr6.lt) goto loc_8222175C;
	// lwz r9,276(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8222175c
	if (!ctx.cr6.lt) goto loc_8222175C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,2364(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8233dcb0
	ctx.lr = 0x82221754;
	sub_8233DCB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82221760
	goto loc_82221760;
loc_8222175C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82221760:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82221788
	if (!ctx.cr6.eq) goto loc_82221788;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82221710
	if (ctx.cr6.lt) goto loc_82221710;
loc_8222177C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82221788:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221794"))) PPC_WEAK_FUNC(sub_82221794);
PPC_FUNC_IMPL(__imp__sub_82221794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221798"))) PPC_WEAK_FUNC(sub_82221798);
PPC_FUNC_IMPL(__imp__sub_82221798) {
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
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r9,-17184
	ctx.r8.s64 = ctx.r9.s64 + -17184;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,142
	ctx.r3.s64 = 142;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 276, ctx.r10.u32);
	// stw r11,280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 280, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82221620
	ctx.lr = 0x822217D4;
	sub_82221620(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822217E4"))) PPC_WEAK_FUNC(sub_822217E4);
PPC_FUNC_IMPL(__imp__sub_822217E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822217E8"))) PPC_WEAK_FUNC(sub_822217E8);
PPC_FUNC_IMPL(__imp__sub_822217E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222184c
	if (!ctx.cr6.eq) goto loc_8222184C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r11,-22968
	ctx.r4.s64 = ctx.r11.s64 + -22968;
	// bl 0x822214d0
	ctx.lr = 0x8222181C;
	sub_822214D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x8222184c
	if (!ctx.cr6.lt) goto loc_8222184C;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r8,r11,16392
	ctx.r8.s64 = ctx.r11.s64 + 16392;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222184c
	if (ctx.cr6.eq) goto loc_8222184C;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
loc_8222184C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-17184
	ctx.r9.s64 = ctx.r10.s64 + -17184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,144
	ctx.r3.s64 = 144;
	// stw r11,276(r9)
	PPC_STORE_U32(ctx.r9.u32 + 276, ctx.r11.u32);
	// stw r30,280(r9)
	PPC_STORE_U32(ctx.r9.u32 + 280, ctx.r30.u32);
	// bl 0x82221620
	ctx.lr = 0x8222186C;
	sub_82221620(ctx, base);
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

__attribute__((alias("__imp__sub_82221884"))) PPC_WEAK_FUNC(sub_82221884);
PPC_FUNC_IMPL(__imp__sub_82221884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221888"))) PPC_WEAK_FUNC(sub_82221888);
PPC_FUNC_IMPL(__imp__sub_82221888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82221890;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r11,-17184
	ctx.r31.s64 = ctx.r11.s64 + -17184;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x822219bc
	if (ctx.cr6.gt) goto loc_822219BC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82221940
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82221940;
	// bdzf 4*cr6+eq,0x82221948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82221948;
	// bdzf 4*cr6+eq,0x82221950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82221950;
	// bne cr6,0x82221958
	if (!ctx.cr6.eq) goto loc_82221958;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82221930
	if (ctx.cr6.eq) goto loc_82221930;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_822218E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,2352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8222190c
	if (!ctx.cr6.eq) goto loc_8222190C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82221904;
	sub_82080000(ctx, base);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// b 0x82221920
	goto loc_82221920;
loc_8222190C:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82221918
	if (ctx.cr6.eq) goto loc_82221918;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82221918:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_82221920:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x822218e4
	if (ctx.cr6.lt) goto loc_822218E4;
loc_82221930:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// b 0x822219bc
	goto loc_822219BC;
loc_82221940:
	// bl 0x82222348
	ctx.lr = 0x82221944;
	sub_82222348(ctx, base);
	// b 0x822219bc
	goto loc_822219BC;
loc_82221948:
	// bl 0x822225d8
	ctx.lr = 0x8222194C;
	sub_822225D8(ctx, base);
	// b 0x822219bc
	goto loc_822219BC;
loc_82221950:
	// bl 0x82222a20
	ctx.lr = 0x82221954;
	sub_82222A20(ctx, base);
	// b 0x822219bc
	goto loc_822219BC;
loc_82221958:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lis r30,0
	ctx.r30.s64 = 0;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221998
	if (ctx.cr6.eq) goto loc_82221998;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r30,264(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8222197C;
	sub_82080000(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r25,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r25.u32);
	// addi r11,r31,264
	ctx.r11.s64 = ctx.r31.s64 + 264;
	// stw r25,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r25.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r25,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r25.u32);
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
loc_82221998:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r3,145
	ctx.r3.s64 = 145;
	// stw r25,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r25.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r25.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bl 0x82221620
	ctx.lr = 0x822219BC;
	sub_82221620(ctx, base);
loc_822219BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221a18
	if (ctx.cr6.eq) goto loc_82221A18;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_822219D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822219e8
	if (!ctx.cr6.lt) goto loc_822219E8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_822219E8:
	// lwz r11,2356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2356);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82221a04
	if (ctx.cr6.eq) goto loc_82221A04;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82221a08
	if (!ctx.cr6.eq) goto loc_82221A08;
	// bl 0x82221c20
	ctx.lr = 0x82221A00;
	sub_82221C20(ctx, base);
	// b 0x82221a08
	goto loc_82221A08;
loc_82221A04:
	// bl 0x82221a20
	ctx.lr = 0x82221A08;
	sub_82221A20(ctx, base);
loc_82221A08:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822219d4
	if (ctx.cr6.lt) goto loc_822219D4;
loc_82221A18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221A20"))) PPC_WEAK_FUNC(sub_82221A20);
PPC_FUNC_IMPL(__imp__sub_82221A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82221A28;
	__savegprlr_28(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2352);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82221a70
	if (!ctx.cr6.eq) goto loc_82221A70;
	// lwz r10,2364(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2364);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,2360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2360, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,2356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2356, ctx.r9.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82221620
	ctx.lr = 0x82221A68;
	sub_82221620(ctx, base);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82221A70:
	// lwz r11,2392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2392);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82221b6c
	if (ctx.cr6.lt) goto loc_82221B6C;
	// bne cr6,0x82221c18
	if (!ctx.cr6.eq) goto loc_82221C18;
	// lwz r11,2372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2372);
	// addi r3,r31,2372
	ctx.r3.s64 = ctx.r31.s64 + 2372;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82221c18
	if (ctx.cr6.eq) goto loc_82221C18;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82247fd0
	ctx.lr = 0x82221AA4;
	sub_82247FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221ad8
	if (ctx.cr6.eq) goto loc_82221AD8;
	// lwz r10,2364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r11.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82221620
	ctx.lr = 0x82221AD0;
	sub_82221620(ctx, base);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82221AD8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,2368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2368);
	// bl 0x8224a2d8
	ctx.lr = 0x82221AE4;
	sub_8224A2D8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// stb r11,2448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2448, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,2449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2449, ctx.r7.u8);
	// bl 0x822220b0
	ctx.lr = 0x82221B08;
	sub_822220B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82221ef8
	ctx.lr = 0x82221B10;
	sub_82221EF8(ctx, base);
	// lwz r6,2352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2352);
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// stw r5,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r5.u32);
	// lwz r30,256(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82221b44
	if (ctx.cr6.eq) goto loc_82221B44;
	// addi r29,r31,-4
	ctx.r29.s64 = ctx.r31.s64 + -4;
loc_82221B2C:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822214d0
	ctx.lr = 0x82221B3C;
	sub_822214D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82221b2c
	if (!ctx.cr0.eq) goto loc_82221B2C;
loc_82221B44:
	// lwz r11,2364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r28.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// stw r28,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82221620
	ctx.lr = 0x82221B64;
	sub_82221620(ctx, base);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82221B6C:
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x8233eaf0
	ctx.lr = 0x82221B7C;
	sub_8233EAF0(ctx, base);
	// addi r4,r31,304
	ctx.r4.s64 = ctx.r31.s64 + 304;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x8233e4e0
	ctx.lr = 0x82221B8C;
	sub_8233E4E0(ctx, base);
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r10,r1,438
	ctx.r10.s64 = ctx.r1.s64 + 438;
	// addi r11,r31,2398
	ctx.r11.s64 = ctx.r31.s64 + 2398;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82221B9C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82221b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82221B9C;
	// lwz r8,2368(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2368);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r30,r31,2372
	ctx.r30.s64 = ctx.r31.s64 + 2372;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82221BCC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82221bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82221BCC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r5,2364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r11.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r10,-22944
	ctx.r4.s64 = ctx.r10.s64 + -22944;
	// bl 0x8233cc00
	ctx.lr = 0x82221BF0;
	sub_8233CC00(ctx, base);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r4,r8,-17184
	ctx.r4.s64 = ctx.r8.s64 + -17184;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r3,288(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// bl 0x8224a360
	ctx.lr = 0x82221C18;
	sub_8224A360(ctx, base);
loc_82221C18:
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221C20"))) PPC_WEAK_FUNC(sub_82221C20);
PPC_FUNC_IMPL(__imp__sub_82221C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82221C28;
	__savegprlr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,2352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2352);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82221c9c
	if (!ctx.cr6.eq) goto loc_82221C9C;
	// lwz r30,256(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82221c70
	if (ctx.cr6.eq) goto loc_82221C70;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// addi r28,r11,4323
	ctx.r28.s64 = ctx.r11.s64 + 4323;
loc_82221C58:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822214d0
	ctx.lr = 0x82221C68;
	sub_822214D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82221c58
	if (!ctx.cr0.eq) goto loc_82221C58;
loc_82221C70:
	// lwz r11,2364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r30.u32);
	// li r3,113
	ctx.r3.s64 = 113;
	// stw r30,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82221620
	ctx.lr = 0x82221C94;
	sub_82221620(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82221C9C:
	// lwz r11,2392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221de8
	if (ctx.cr6.eq) goto loc_82221DE8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82221eec
	if (!ctx.cr6.eq) goto loc_82221EEC;
	// lbz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82221d24
	if (!ctx.cr6.eq) goto loc_82221D24;
	// lwz r29,256(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r10,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r30,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r11.u32);
	// beq cr6,0x82221cfc
	if (ctx.cr6.eq) goto loc_82221CFC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r31,-4
	ctx.r28.s64 = ctx.r31.s64 + -4;
	// addi r27,r11,4323
	ctx.r27.s64 = ctx.r11.s64 + 4323;
loc_82221CE4:
	// lwzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822214d0
	ctx.lr = 0x82221CF4;
	sub_822214D0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82221ce4
	if (!ctx.cr0.eq) goto loc_82221CE4;
loc_82221CFC:
	// lwz r11,2364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r30.u32);
	// li r3,113
	ctx.r3.s64 = 113;
	// stw r30,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82221620
	ctx.lr = 0x82221D1C;
	sub_82221620(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82221D24:
	// lwz r11,2372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2372);
	// addi r3,r31,2372
	ctx.r3.s64 = ctx.r31.s64 + 2372;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82221eec
	if (ctx.cr6.eq) goto loc_82221EEC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82247fd0
	ctx.lr = 0x82221D48;
	sub_82247FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221d7c
	if (ctx.cr6.eq) goto loc_82221D7C;
	// lwz r10,2364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r11.u32);
	// li r3,113
	ctx.r3.s64 = 113;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82221620
	ctx.lr = 0x82221D74;
	sub_82221620(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82221D7C:
	// lwz r11,2352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2352);
	// lwz r29,256(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r30,2449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2449, ctx.r30.u8);
	// stb r30,2448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2448, ctx.r30.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r10,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r10.u32);
	// beq cr6,0x82221dc0
	if (ctx.cr6.eq) goto loc_82221DC0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r31,-4
	ctx.r28.s64 = ctx.r31.s64 + -4;
	// addi r27,r11,4323
	ctx.r27.s64 = ctx.r11.s64 + 4323;
loc_82221DA8:
	// lwzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822214d0
	ctx.lr = 0x82221DB8;
	sub_822214D0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82221da8
	if (!ctx.cr0.eq) goto loc_82221DA8;
loc_82221DC0:
	// lwz r11,2364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r30.u32);
	// li r3,113
	ctx.r3.s64 = 113;
	// stw r30,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82221620
	ctx.lr = 0x82221DE0;
	sub_82221620(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82221DE8:
	// lwz r29,256(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82221e1c
	if (ctx.cr6.eq) goto loc_82221E1C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82221DF8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221e10
	if (ctx.cr6.eq) goto loc_82221E10;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82221E10;
	sub_82080000(ctx, base);
loc_82221E10:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82221df8
	if (!ctx.cr0.eq) goto loc_82221DF8;
loc_82221E1C:
	// lwz r29,300(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82221e54
	if (ctx.cr6.eq) goto loc_82221E54;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221e48
	if (ctx.cr6.eq) goto loc_82221E48;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82221E48;
	sub_82080000(ctx, base);
loc_82221E48:
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// lwz r3,-8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82221E54;
	sub_82080000(ctx, base);
loc_82221E54:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221e70
	if (ctx.cr6.eq) goto loc_82221E70;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82221E70;
	sub_82080000(ctx, base);
loc_82221E70:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// beq cr6,0x82221e90
	if (ctx.cr6.eq) goto loc_82221E90;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82221E90;
	sub_82080000(ctx, base);
loc_82221E90:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// addi r29,r31,2372
	ctx.r29.s64 = ctx.r31.s64 + 2372;
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82221EB0:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82221eb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82221EB0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r5,2364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-22944
	ctx.r4.s64 = ctx.r10.s64 + -22944;
	// bl 0x8233cc00
	ctx.lr = 0x82221ED4;
	sub_8233CC00(ctx, base);
	// lbz r9,2448(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2448);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82221eec
	if (ctx.cr6.eq) goto loc_82221EEC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8224a2b0
	ctx.lr = 0x82221EEC;
	sub_8224A2B0(ctx, base);
loc_82221EEC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221EF4"))) PPC_WEAK_FUNC(sub_82221EF4);
PPC_FUNC_IMPL(__imp__sub_82221EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221EF8"))) PPC_WEAK_FUNC(sub_82221EF8);
PPC_FUNC_IMPL(__imp__sub_82221EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82221F00;
	__savegprlr_23(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,30928
	ctx.r12.u64 = ctx.r12.u64 | 30928;
	// bl 0x823413e4
	ctx.lr = 0x82221F0C;
	sub_823413E4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r6,2364(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2364);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-22936
	ctx.r5.s64 = ctx.r11.s64 + -22936;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x8233dcb0
	ctx.lr = 0x82221F2C;
	sub_8233DCB0(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x8224ada0
	ctx.lr = 0x82221F38;
	sub_8224ADA0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822220a4
	if (ctx.cr6.eq) goto loc_822220A4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r24,r9,32768
	ctx.r24.u64 = ctx.r9.u64 | 32768;
	// addi r28,r11,-26408
	ctx.r28.s64 = ctx.r11.s64 + -26408;
	// addi r27,r10,-22920
	ctx.r27.s64 = ctx.r10.s64 + -22920;
loc_82221F68:
	// lbz r11,684(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 684);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// beq cr6,0x82222088
	if (ctx.cr6.eq) goto loc_82222088;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,2364(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// addi r7,r1,684
	ctx.r7.s64 = ctx.r1.s64 + 684;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x8233dcb0
	ctx.lr = 0x82221F8C;
	sub_8233DCB0(ctx, base);
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b6f70
	ctx.lr = 0x82221F98;
	sub_821B6F70(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r25,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r25.u32);
	// li r5,260
	ctx.r5.s64 = 260;
	// stw r26,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r26.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// stw r29,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r29.u32);
	// bl 0x8233c048
	ctx.lr = 0x82221FB8;
	sub_8233C048(ctx, base);
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x8230aec0
	ctx.lr = 0x82221FC8;
	sub_8230AEC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821bcbe8
	ctx.lr = 0x82221FD4;
	sub_821BCBE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82222084
	if (!ctx.cr6.eq) goto loc_82222084;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1760
	ctx.r4.s64 = ctx.r1.s64 + 1760;
	// bl 0x821bcf08
	ctx.lr = 0x82221FF4;
	sub_821BCF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82222080
	if (!ctx.cr6.eq) goto loc_82222080;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// blt cr6,0x82222080
	if (ctx.cr6.lt) goto loc_82222080;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,388
	ctx.r3.s64 = 388;
	// bl 0x82082030
	ctx.lr = 0x8222201C;
	sub_82082030(ctx, base);
	// lwz r11,1784(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1784);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x821bce30
	ctx.lr = 0x82222030;
	sub_821BCE30(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,684
	ctx.r4.s64 = ctx.r1.s64 + 684;
	// addi r3,r30,260
	ctx.r3.s64 = ctx.r30.s64 + 260;
	// bl 0x8233c048
	ctx.lr = 0x82222040;
	sub_8233C048(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8233c048
	ctx.lr = 0x82222050;
	sub_8233C048(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82222084
	if (!ctx.cr6.eq) goto loc_82222084;
	// bl 0x821b7218
	ctx.lr = 0x82222078;
	sub_821B7218(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82222080:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82222084:
	// bl 0x821b7218
	ctx.lr = 0x82222088;
	sub_821B7218(ctx, base);
loc_82222088:
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8224ae30
	ctx.lr = 0x82222094;
	sub_8224AE30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82221f68
	if (!ctx.cr6.eq) goto loc_82221F68;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82246e18
	ctx.lr = 0x822220A4;
	sub_82246E18(ctx, base);
loc_822220A4:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822220AC"))) PPC_WEAK_FUNC(sub_822220AC);
PPC_FUNC_IMPL(__imp__sub_822220AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822220B0"))) PPC_WEAK_FUNC(sub_822220B0);
PPC_FUNC_IMPL(__imp__sub_822220B0) {
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
	// stwu r1,-1008(r1)
	ea = -1008 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r6,2364(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2364);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-22908
	ctx.r5.s64 = ctx.r11.s64 + -22908;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8233dcb0
	ctx.lr = 0x822220E0;
	sub_8233DCB0(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8224ada0
	ctx.lr = 0x822220EC;
	sub_8224ADA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82222160
	if (ctx.cr6.eq) goto loc_82222160;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r6,2364(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// addi r7,r1,700
	ctx.r7.s64 = ctx.r1.s64 + 700;
	// addi r5,r11,-22920
	ctx.r5.s64 = ctx.r11.s64 + -22920;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233dcb0
	ctx.lr = 0x82222114;
	sub_8233DCB0(ctx, base);
	// addi r10,r31,300
	ctx.r10.s64 = ctx.r31.s64 + 300;
	// addi r9,r31,292
	ctx.r9.s64 = ctx.r31.s64 + 292;
	// addi r8,r31,296
	ctx.r8.s64 = ctx.r31.s64 + 296;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r7,r31,288
	ctx.r7.s64 = ctx.r31.s64 + 288;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r10,r31,284
	ctx.r10.s64 = ctx.r31.s64 + 284;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r9,r31,280
	ctx.r9.s64 = ctx.r31.s64 + 280;
	// addi r8,r31,272
	ctx.r8.s64 = ctx.r31.s64 + 272;
	// addi r7,r31,276
	ctx.r7.s64 = ctx.r31.s64 + 276;
	// addi r6,r31,264
	ctx.r6.s64 = ctx.r31.s64 + 264;
	// addi r5,r31,260
	ctx.r5.s64 = ctx.r31.s64 + 260;
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8209d108
	ctx.lr = 0x82222158;
	sub_8209D108(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82246e18
	ctx.lr = 0x82222160;
	sub_82246E18(ctx, base);
loc_82222160:
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
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

__attribute__((alias("__imp__sub_82222178"))) PPC_WEAK_FUNC(sub_82222178);
PPC_FUNC_IMPL(__imp__sub_82222178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,2352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2352);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82222190
	if (!ctx.cr6.eq) goto loc_82222190;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82222190:
	// lbz r11,2448(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2448);
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

__attribute__((alias("__imp__sub_822221A0"))) PPC_WEAK_FUNC(sub_822221A0);
PPC_FUNC_IMPL(__imp__sub_822221A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x822221A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,-17184
	ctx.r27.s64 = ctx.r11.s64 + -17184;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,288(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// bl 0x8224a2c8
	ctx.lr = 0x822221D8;
	sub_8224A2C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82222340
	if (!ctx.cr6.eq) goto loc_82222340;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// li r29,2
	ctx.r29.s64 = 2;
	// bl 0x82248748
	ctx.lr = 0x82222204;
	sub_82248748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222229c
	if (!ctx.cr6.eq) goto loc_8222229C;
	// addi r28,r31,2400
	ctx.r28.s64 = ctx.r31.s64 + 2400;
loc_82222210:
	// addi r5,r1,760
	ctx.r5.s64 = ctx.r1.s64 + 760;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233e318
	ctx.lr = 0x82222220;
	sub_8233E318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222227c
	if (!ctx.cr6.eq) goto loc_8222227C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,496(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x8224a2d8
	ctx.lr = 0x82222234;
	sub_8224A2D8(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82222254
	if (ctx.cr6.eq) goto loc_82222254;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82222254
	if (ctx.cr6.eq) goto loc_82222254;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bne cr6,0x8222227c
	if (!ctx.cr6.eq) goto loc_8222227C;
loc_82222254:
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// lwz r9,496(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r9,2368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2368, ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r7,2449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2449, ctx.r7.u8);
	// beq cr6,0x8222229c
	if (ctx.cr6.eq) goto loc_8222229C;
loc_8222227C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// bl 0x82248748
	ctx.lr = 0x82222294;
	sub_82248748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222210
	if (ctx.cr6.eq) goto loc_82222210;
loc_8222229C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82246e18
	ctx.lr = 0x822222A4;
	sub_82246E18(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222340
	if (ctx.cr6.eq) goto loc_82222340;
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x8233eaf0
	ctx.lr = 0x822222C0;
	sub_8233EAF0(ctx, base);
	// addi r4,r31,304
	ctx.r4.s64 = ctx.r31.s64 + 304;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x8233e4e0
	ctx.lr = 0x822222D0;
	sub_8233E4E0(ctx, base);
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r10,r1,438
	ctx.r10.s64 = ctx.r1.s64 + 438;
	// addi r11,r31,2398
	ctx.r11.s64 = ctx.r31.s64 + 2398;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822222E0:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x822222e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822222E0;
	// lwz r11,2368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2368);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r5,2364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// addi r4,r9,-22944
	ctx.r4.s64 = ctx.r9.s64 + -22944;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x8233cc00
	ctx.lr = 0x82222310;
	sub_8233CC00(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,288(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// bl 0x8224a360
	ctx.lr = 0x82222330;
	sub_8224A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82222340
	if (!ctx.cr6.eq) goto loc_82222340;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2448, ctx.r11.u8);
loc_82222340:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222348"))) PPC_WEAK_FUNC(sub_82222348);
PPC_FUNC_IMPL(__imp__sub_82222348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82222350;
	__savegprlr_26(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-17184
	ctx.r31.s64 = ctx.r11.s64 + -17184;
	// lwz r30,288(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// ble cr6,0x82222370
	if (!ctx.cr6.gt) goto loc_82222370;
loc_82222368:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x822225ac
	goto loc_822225AC;
loc_82222370:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b2e70
	ctx.lr = 0x82222378;
	sub_821B2E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822225a8
	if (ctx.cr6.eq) goto loc_822225A8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,-16888
	ctx.r11.s64 = ctx.r11.s64 + -16888;
	// addi r9,r11,304
	ctx.r9.s64 = ctx.r11.s64 + 304;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822225a8
	if (!ctx.cr6.eq) goto loc_822225A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x822223c4
	if (!ctx.cr6.eq) goto loc_822223C4;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x822225b8
	goto loc_822225B8;
loc_822223C4:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224a2c8
	ctx.lr = 0x822223E4;
	sub_8224A2C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82222368
	if (!ctx.cr6.eq) goto loc_82222368;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82248748
	ctx.lr = 0x8222240C;
	sub_82248748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82222584
	if (!ctx.cr6.eq) goto loc_82222584;
loc_82222414:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8222245c
	if (ctx.cr6.eq) goto loc_8222245C;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_82222428:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r28,304
	ctx.r3.s64 = ctx.r28.s64 + 304;
	// bl 0x8233d2e8
	ctx.lr = 0x82222438;
	sub_8233D2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82222454
	if (ctx.cr6.eq) goto loc_82222454;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82222428
	if (ctx.cr6.lt) goto loc_82222428;
	// b 0x8222245c
	goto loc_8222245C;
loc_82222454:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82222520
	if (!ctx.cr6.eq) goto loc_82222520;
loc_8222245C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,2452
	ctx.r3.s64 = 2452;
	// bl 0x82082030
	ctx.lr = 0x82222470;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222490
	if (ctx.cr6.eq) goto loc_82222490;
	// li r7,42
	ctx.r7.s64 = 42;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,456
	ctx.r6.s64 = ctx.r1.s64 + 456;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// bl 0x82221400
	ctx.lr = 0x8222248C;
	sub_82221400(ctx, base);
	// b 0x82222494
	goto loc_82222494;
loc_82222490:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82222494:
	// lwz r11,2352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2352);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// ori r8,r11,5
	ctx.r8.u64 = ctx.r11.u64 | 5;
	// stw r8,2352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2352, ctx.r8.u32);
	// stw r9,2368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2368, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82222510
	if (ctx.cr6.eq) goto loc_82222510;
	// addi r29,r31,136
	ctx.r29.s64 = ctx.r31.s64 + 136;
loc_822224D8:
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r27,2400
	ctx.r3.s64 = ctx.r27.s64 + 2400;
	// bl 0x8224ae88
	ctx.lr = 0x822224E8;
	sub_8224AE88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82222504
	if (!ctx.cr6.eq) goto loc_82222504;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822224d8
	if (ctx.cr6.lt) goto loc_822224D8;
	// b 0x82222510
	goto loc_82222510;
loc_82222504:
	// lwz r11,2352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2352);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,2352(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2352, ctx.r10.u32);
loc_82222510:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82222584
	if (ctx.cr6.eq) goto loc_82222584;
	// b 0x82222564
	goto loc_82222564;
loc_82222520:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,2368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2368);
	// bl 0x8224a2d8
	ctx.lr = 0x8222252C;
	sub_8224A2D8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82222564
	if (ctx.cr6.eq) goto loc_82222564;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8224a2d8
	ctx.lr = 0x82222544;
	sub_8224A2D8(ctx, base);
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8222255c
	if (ctx.cr6.eq) goto loc_8222255C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82222564
	if (!ctx.cr6.eq) goto loc_82222564;
loc_8222255C:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,2368(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2368, ctx.r11.u32);
loc_82222564:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82248748
	ctx.lr = 0x8222257C;
	sub_82248748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222414
	if (ctx.cr6.eq) goto loc_82222414;
loc_82222584:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82246e18
	ctx.lr = 0x8222258C;
	sub_82246E18(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x822225c0
	goto loc_822225C0;
loc_822225A8:
	// li r10,3
	ctx.r10.s64 = 3;
loc_822225AC:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_822225B8:
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_822225C0:
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,111
	ctx.r3.s64 = 111;
	// bl 0x82221620
	ctx.lr = 0x822225D0;
	sub_82221620(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822225D8"))) PPC_WEAK_FUNC(sub_822225D8);
PPC_FUNC_IMPL(__imp__sub_822225D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x822225E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r28,r11,-17184
	ctx.r28.s64 = ctx.r11.s64 + -17184;
	// lwz r23,292(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82222604
	if (!ctx.cr6.eq) goto loc_82222604;
	// bl 0x82222860
	ctx.lr = 0x822225FC;
	sub_82222860(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82222604:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222264c
	if (ctx.cr6.eq) goto loc_8222264C;
	// addi r7,r23,12
	ctx.r7.s64 = ctx.r23.s64 + 12;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r4,40(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// bl 0x82248748
	ctx.lr = 0x82222628;
	sub_82248748(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8222263c
	if (ctx.cr6.eq) goto loc_8222263C;
	// bl 0x822229a8
	ctx.lr = 0x82222634;
	sub_822229A8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82221798
	ctx.lr = 0x8222263C;
	sub_82221798(ctx, base);
loc_8222263C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8222264C:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r31,r23,12
	ctx.r31.s64 = ctx.r23.s64 + 12;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8222282c
	if (ctx.cr6.eq) goto loc_8222282C;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82247fd0
	ctx.lr = 0x82222674;
	sub_82247FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82222834
	if (!ctx.cr6.eq) goto loc_82222834;
	// lwz r26,40(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r27,4(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r25,20(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// beq cr6,0x822226d0
	if (ctx.cr6.eq) goto loc_822226D0;
	// addi r31,r28,136
	ctx.r31.s64 = ctx.r28.s64 + 136;
loc_82222698:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r29,304
	ctx.r3.s64 = ctx.r29.s64 + 304;
	// bl 0x8233d2e8
	ctx.lr = 0x822226A8;
	sub_8233D2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822226c4
	if (ctx.cr6.eq) goto loc_822226C4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82222698
	if (ctx.cr6.lt) goto loc_82222698;
	// b 0x822226d0
	goto loc_822226D0;
loc_822226C4:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82222748
	if (!ctx.cr6.eq) goto loc_82222748;
loc_822226D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,2452
	ctx.r3.s64 = 2452;
	// bl 0x82082030
	ctx.lr = 0x822226E4;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222708
	if (ctx.cr6.eq) goto loc_82222708;
	// li r7,20
	ctx.r7.s64 = 20;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r6,r26,28
	ctx.r6.s64 = ctx.r26.s64 + 28;
	// lwz r5,20(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x82221400
	ctx.lr = 0x82222700;
	sub_82221400(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8222270c
	goto loc_8222270C;
loc_82222708:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_8222270C:
	// stw r24,2368(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2368, ctx.r24.u32);
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,2352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2352);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// beq cr6,0x82222728
	if (ctx.cr6.eq) goto loc_82222728;
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82222728:
	// stw r10,2352(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2352, ctx.r10.u32);
	// addi r10,r28,136
	ctx.r10.s64 = ctx.r28.s64 + 136;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_82222748:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822227ec
	if (ctx.cr6.eq) goto loc_822227EC;
	// addi r26,r27,2400
	ctx.r26.s64 = ctx.r27.s64 + 2400;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82222764:
	// li r5,304
	ctx.r5.s64 = 304;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8233eaf0
	ctx.lr = 0x8222277C;
	sub_8233EAF0(ctx, base);
	// addi r4,r31,304
	ctx.r4.s64 = ctx.r31.s64 + 304;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x8233e4e0
	ctx.lr = 0x8222278C;
	sub_8233E4E0(ctx, base);
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r10,r1,358
	ctx.r10.s64 = ctx.r1.s64 + 358;
	// addi r11,r31,2398
	ctx.r11.s64 = ctx.r31.s64 + 2398;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8222279C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8222279c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222279C;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,2368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2368);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8224ae88
	ctx.lr = 0x822227C0;
	sub_8224AE88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822227e0
	if (!ctx.cr6.eq) goto loc_822227E0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82222764
	if (ctx.cr6.lt) goto loc_82222764;
	// b 0x822227ec
	goto loc_822227EC;
loc_822227E0:
	// lwz r11,2352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2352);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,2352(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2352, ctx.r10.u32);
loc_822227EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8222282c
	if (!ctx.cr6.eq) goto loc_8222282C;
loc_82222800:
	// bl 0x822229a8
	ctx.lr = 0x82222804;
	sub_822229A8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r24,276(r28)
	PPC_STORE_U32(ctx.r28.u32 + 276, ctx.r24.u32);
	// li r3,142
	ctx.r3.s64 = 142;
	// stw r24,280(r28)
	PPC_STORE_U32(ctx.r28.u32 + 280, ctx.r24.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82221620
	ctx.lr = 0x8222282C;
	sub_82221620(ctx, base);
loc_8222282C:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82222834:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224a568
	ctx.lr = 0x8222283C;
	sub_8224A568(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82222800
	if (ctx.cr6.eq) goto loc_82222800;
	// bl 0x822229a8
	ctx.lr = 0x82222850;
	sub_822229A8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82221798
	ctx.lr = 0x82222858;
	sub_82221798(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222860"))) PPC_WEAK_FUNC(sub_82222860);
PPC_FUNC_IMPL(__imp__sub_82222860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82222868;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-17184
	ctx.r31.s64 = ctx.r11.s64 + -17184;
	// lwz r29,288(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// ble cr6,0x82222888
	if (!ctx.cr6.gt) goto loc_82222888;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8222297c
	goto loc_8222297C;
loc_82222888:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b2e70
	ctx.lr = 0x82222890;
	sub_821B2E70(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82222978
	if (!ctx.cr6.eq) goto loc_82222978;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,-16888
	ctx.r11.s64 = ctx.r11.s64 + -16888;
	// addi r9,r11,304
	ctx.r9.s64 = ctx.r11.s64 + 304;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82222978
	if (!ctx.cr6.eq) goto loc_82222978;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x822228d4
	if (!ctx.cr6.eq) goto loc_822228D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82221798
	ctx.lr = 0x822228CC;
	sub_82221798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_822228D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82082030
	ctx.lr = 0x822228E8;
	sub_82082030(ctx, base);
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x822228F8;
	sub_8233EAF0(ctx, base);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82311960
	ctx.lr = 0x8222291C;
	sub_82311960(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222950
	if (ctx.cr6.eq) goto loc_82222950;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82222938
	if (ctx.cr6.eq) goto loc_82222938;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82222938;
	sub_82080000(ctx, base);
loc_82222938:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// bl 0x82221798
	ctx.lr = 0x82222948;
	sub_82221798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82222950:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82082030
	ctx.lr = 0x8222296C;
	sub_82082030(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82222978:
	// li r10,4
	ctx.r10.s64 = 4;
loc_8222297C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// li r3,142
	ctx.r3.s64 = 142;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82221620
	ctx.lr = 0x822229A0;
	sub_82221620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822229A8"))) PPC_WEAK_FUNC(sub_822229A8);
PPC_FUNC_IMPL(__imp__sub_822229A8) {
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
	// addi r30,r11,-17184
	ctx.r30.s64 = ctx.r11.s64 + -17184;
	// lwz r31,292(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82222a04
	if (ctx.cr6.eq) goto loc_82222A04;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822229e8
	if (ctx.cr6.eq) goto loc_822229E8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822229E8;
	sub_82080000(ctx, base);
loc_822229E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82246e18
	ctx.lr = 0x822229F0;
	sub_82246E18(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822229FC;
	sub_82080000(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r11.u32);
loc_82222A04:
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

__attribute__((alias("__imp__sub_82222A1C"))) PPC_WEAK_FUNC(sub_82222A1C);
PPC_FUNC_IMPL(__imp__sub_82222A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222A20"))) PPC_WEAK_FUNC(sub_82222A20);
PPC_FUNC_IMPL(__imp__sub_82222A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82222A28;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-17184
	ctx.r31.s64 = ctx.r11.s64 + -17184;
	// lwz r28,292(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// addi r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 + 12;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82222a50
	if (!ctx.cr6.eq) goto loc_82222A50;
	// bl 0x82222be8
	ctx.lr = 0x82222A48;
	sub_82222BE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82222A50:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82222be0
	if (ctx.cr6.eq) goto loc_82222BE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224a568
	ctx.lr = 0x82222A64;
	sub_8224A568(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82222b54
	if (!ctx.cr6.eq) goto loc_82222B54;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82222a84
	if (!ctx.cr6.eq) goto loc_82222A84;
	// bl 0x82222d88
	ctx.lr = 0x82222A7C;
	sub_82222D88(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82222A84:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82247fd0
	ctx.lr = 0x82222A9C;
	sub_82247FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82222be0
	if (!ctx.cr6.eq) goto loc_82222BE0;
	// bl 0x82222f38
	ctx.lr = 0x82222AA8;
	sub_82222F38(ctx, base);
	// lwz r11,556(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 556);
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// ble cr6,0x82222ad0
	if (!ctx.cr6.gt) goto loc_82222AD0;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// blt cr6,0x82222ad4
	if (ctx.cr6.lt) goto loc_82222AD4;
loc_82222AD0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82222AD4:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// beq cr6,0x82222afc
	if (ctx.cr6.eq) goto loc_82222AFC;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822217e8
	ctx.lr = 0x82222AF4;
	sub_822217E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82222AFC:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x82221620
	ctx.lr = 0x82222B20;
	sub_82221620(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222b38
	if (ctx.cr6.eq) goto loc_82222B38;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82222B38;
	sub_82080000(ctx, base);
loc_82222B38:
	// stw r29,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
	// addi r11,r31,264
	ctx.r11.s64 = ctx.r31.s64 + 264;
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82222B54:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r29,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// li r3,144
	ctx.r3.s64 = 144;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x82222b94
	if (!ctx.cr6.eq) goto loc_82222B94;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// b 0x82222ba8
	goto loc_82222BA8;
loc_82222B94:
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
loc_82222BA8:
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// bl 0x82221620
	ctx.lr = 0x82222BB0;
	sub_82221620(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222bc8
	if (ctx.cr6.eq) goto loc_82222BC8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82222BC8;
	sub_82080000(ctx, base);
loc_82222BC8:
	// stw r29,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
	// addi r11,r31,264
	ctx.r11.s64 = ctx.r31.s64 + 264;
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// bl 0x82222f38
	ctx.lr = 0x82222BE0;
	sub_82222F38(ctx, base);
loc_82222BE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222BE8"))) PPC_WEAK_FUNC(sub_82222BE8);
PPC_FUNC_IMPL(__imp__sub_82222BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82222BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-17184
	ctx.r31.s64 = ctx.r11.s64 + -17184;
	// lwz r29,288(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// ble cr6,0x82222c28
	if (!ctx.cr6.gt) goto loc_82222C28;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,6
	ctx.r8.s64 = 6;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// b 0x82222d6c
	goto loc_82222D6C;
loc_82222C28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b2e70
	ctx.lr = 0x82222C30;
	sub_821B2E70(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82222d50
	if (!ctx.cr6.eq) goto loc_82222D50;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,-16888
	ctx.r11.s64 = ctx.r11.s64 + -16888;
	// addi r9,r11,304
	ctx.r9.s64 = ctx.r11.s64 + 304;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82222d50
	if (!ctx.cr6.eq) goto loc_82222D50;
	// li r11,512
	ctx.r11.s64 = 512;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r10,-22888
	ctx.r7.s64 = ctx.r10.s64 + -22888;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82311b50
	ctx.lr = 0x82222C84;
	sub_82311B50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222cac
	if (ctx.cr6.eq) goto loc_82222CAC;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,6
	ctx.r8.s64 = 6;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// b 0x82222d6c
	goto loc_82222D6C;
loc_82222CAC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,576
	ctx.r3.s64 = 576;
	// bl 0x82082030
	ctx.lr = 0x82222CC0;
	sub_82082030(ctx, base);
	// li r5,576
	ctx.r5.s64 = 576;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82222CD0;
	sub_8233EAF0(ctx, base);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,587
	ctx.r3.s64 = 587;
	// bl 0x82082030
	ctx.lr = 0x82222CE8;
	sub_82082030(ctx, base);
	// stw r3,552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 552, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// li r7,587
	ctx.r7.s64 = 587;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82311458
	ctx.lr = 0x82222D0C;
	sub_82311458(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82222d80
	if (ctx.cr6.eq) goto loc_82222D80;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82221620
	ctx.lr = 0x82222D44;
	sub_82221620(ctx, base);
	// bl 0x82222f38
	ctx.lr = 0x82222D48;
	sub_82222F38(ctx, base);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82222D50:
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,6
	ctx.r8.s64 = 6;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
loc_82222D6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// bl 0x82221620
	ctx.lr = 0x82222D80;
	sub_82221620(ctx, base);
loc_82222D80:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222D88"))) PPC_WEAK_FUNC(sub_82222D88);
PPC_FUNC_IMPL(__imp__sub_82222D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82222D90;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-17184
	ctx.r31.s64 = ctx.r11.s64 + -17184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,292(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// addi r28,r29,12
	ctx.r28.s64 = ctx.r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82247fd0
	ctx.lr = 0x82222DBC;
	sub_82247FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82222ea0
	if (!ctx.cr6.eq) goto loc_82222EA0;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82222DD4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82222dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82222DD4;
	// lwz r11,552(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 552);
	// lwz r26,288(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82222e64
	if (!ctx.cr6.gt) goto loc_82222E64;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,29(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29);
	// lwz r7,33(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 33);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82222e14
	if (!ctx.cr6.gt) goto loc_82222E14;
	// lwz r30,29(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29);
	// b 0x82222e18
	goto loc_82222E18;
loc_82222E14:
	// lwz r30,33(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 33);
loc_82222E18:
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82082030
	ctx.lr = 0x82222E30;
	sub_82082030(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,552(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 552);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r29,556
	ctx.r8.s64 = ctx.r29.s64 + 556;
	// lwz r4,57(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 57);
	// li r7,20
	ctx.r7.s64 = 20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82311178
	ctx.lr = 0x82222E5C;
	sub_82311178(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82222E64:
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,4
	ctx.r8.s64 = 4;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bl 0x82221620
	ctx.lr = 0x82222E94;
	sub_82221620(ctx, base);
	// bl 0x82222f38
	ctx.lr = 0x82222E98;
	sub_82222F38(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82222EA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8224a568
	ctx.lr = 0x82222EA8;
	sub_8224A568(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// li r3,144
	ctx.r3.s64 = 144;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// beq cr6,0x82222ee4
	if (ctx.cr6.eq) goto loc_82222EE4;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// b 0x82222ef8
	goto loc_82222EF8;
loc_82222EE4:
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
loc_82222EF8:
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// bl 0x82221620
	ctx.lr = 0x82222F00;
	sub_82221620(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222f18
	if (ctx.cr6.eq) goto loc_82222F18;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82222F18;
	sub_82080000(ctx, base);
loc_82222F18:
	// stw r27,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r27.u32);
	// addi r11,r31,264
	ctx.r11.s64 = ctx.r31.s64 + 264;
	// stw r27,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r27.u32);
	// stw r27,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r27.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// bl 0x82222f38
	ctx.lr = 0x82222F30;
	sub_82222F38(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222F38"))) PPC_WEAK_FUNC(sub_82222F38);
PPC_FUNC_IMPL(__imp__sub_82222F38) {
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
	// addi r30,r11,-17184
	ctx.r30.s64 = ctx.r11.s64 + -17184;
	// lwz r31,292(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82222f8c
	if (ctx.cr6.eq) goto loc_82222F8C;
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222f78
	if (ctx.cr6.eq) goto loc_82222F78;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82222F78;
	sub_82080000(ctx, base);
loc_82222F78:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82222F84;
	sub_82080000(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r11.u32);
loc_82222F8C:
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

__attribute__((alias("__imp__sub_82222FA4"))) PPC_WEAK_FUNC(sub_82222FA4);
PPC_FUNC_IMPL(__imp__sub_82222FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222FA8"))) PPC_WEAK_FUNC(sub_82222FA8);
PPC_FUNC_IMPL(__imp__sub_82222FA8) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-22876
	ctx.r4.s64 = ctx.r10.s64 + -22876;
	// bl 0x8233e218
	ctx.lr = 0x82222FCC;
	sub_8233E218(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82223000
	if (!ctx.cr6.lt) goto loc_82223000;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82223000:
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

__attribute__((alias("__imp__sub_82223014"))) PPC_WEAK_FUNC(sub_82223014);
PPC_FUNC_IMPL(__imp__sub_82223014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223018"))) PPC_WEAK_FUNC(sub_82223018);
PPC_FUNC_IMPL(__imp__sub_82223018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82223020;
	__savegprlr_25(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r28,r11,-17184
	ctx.r28.s64 = ctx.r11.s64 + -17184;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r10,-17184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17184);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222310c
	if (ctx.cr6.eq) goto loc_8222310C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// addi r27,r11,-22944
	ctx.r27.s64 = ctx.r11.s64 + -22944;
loc_82223050:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82223064
	if (!ctx.cr6.lt) goto loc_82223064;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82223064:
	// lbz r11,2449(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2449);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822230fc
	if (ctx.cr6.eq) goto loc_822230FC;
	// lwz r11,2352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2352);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822230fc
	if (ctx.cr6.eq) goto loc_822230FC;
	// lbz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822230b4
	if (!ctx.cr6.eq) goto loc_822230B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822221a0
	ctx.lr = 0x82223094;
	sub_822221A0(ctx, base);
	// lbz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822230fc
	if (ctx.cr6.eq) goto loc_822230FC;
	// lwz r11,2364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r3,123
	ctx.r3.s64 = 123;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x822230f8
	goto loc_822230F8;
loc_822230B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2368);
	// bl 0x8224a2d0
	ctx.lr = 0x822230C0;
	sub_8224A2D0(ctx, base);
	// cmpwi cr6,r3,1167
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1167, ctx.xer);
	// bne cr6,0x822230fc
	if (!ctx.cr6.eq) goto loc_822230FC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,2364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233cc00
	ctx.lr = 0x822230D8;
	sub_8233CC00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8224a2b0
	ctx.lr = 0x822230E4;
	sub_8224A2B0(ctx, base);
	// lwz r11,2364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// stb r25,2448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2448, ctx.r25.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,122
	ctx.r3.s64 = 122;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822230F8:
	// bl 0x82221620
	ctx.lr = 0x822230FC;
	sub_82221620(ctx, base);
loc_822230FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82223050
	if (ctx.cr6.lt) goto loc_82223050;
loc_8222310C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223114"))) PPC_WEAK_FUNC(sub_82223114);
PPC_FUNC_IMPL(__imp__sub_82223114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223118"))) PPC_WEAK_FUNC(sub_82223118);
PPC_FUNC_IMPL(__imp__sub_82223118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82223120;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223140
	if (ctx.cr6.eq) goto loc_82223140;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82223140;
	sub_82080000(ctx, base);
loc_82223140:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82223178
	if (!ctx.cr6.gt) goto loc_82223178;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82223154:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820de9b8
	ctx.lr = 0x82223164;
	sub_820DE9B8(ctx, base);
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82223154
	if (ctx.cr6.lt) goto loc_82223154;
loc_82223178:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223190
	if (ctx.cr6.eq) goto loc_82223190;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82223190;
	sub_82080000(ctx, base);
loc_82223190:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822231a8
	if (ctx.cr6.eq) goto loc_822231A8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822231A8;
	sub_82080000(ctx, base);
loc_822231A8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822231e4
	if (ctx.cr6.eq) goto loc_822231E4;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822231BC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822231d8
	if (ctx.cr6.eq) goto loc_822231D8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822231D8;
	sub_82080000(ctx, base);
loc_822231D8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822231bc
	if (!ctx.cr0.eq) goto loc_822231BC;
loc_822231E4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822231fc
	if (ctx.cr6.eq) goto loc_822231FC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822231FC;
	sub_82080000(ctx, base);
loc_822231FC:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82223224
	if (ctx.cr6.eq) goto loc_82223224;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223224
	if (ctx.cr6.eq) goto loc_82223224;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82223224;
	sub_82080000(ctx, base);
loc_82223224:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222324c
	if (ctx.cr6.eq) goto loc_8222324C;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222324c
	if (ctx.cr6.eq) goto loc_8222324C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8222324C;
	sub_82080000(ctx, base);
loc_8222324C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223254"))) PPC_WEAK_FUNC(sub_82223254);
PPC_FUNC_IMPL(__imp__sub_82223254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223258"))) PPC_WEAK_FUNC(sub_82223258);
PPC_FUNC_IMPL(__imp__sub_82223258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82223260;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822232b8
	if (!ctx.cr6.eq) goto loc_822232B8;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r4,28
	ctx.r31.s64 = ctx.r4.s64 + 28;
	// li r28,8
	ctx.r28.s64 = 8;
loc_82223284:
	// and r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 & ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822232a8
	if (ctx.cr6.eq) goto loc_822232A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x82223258
	ctx.lr = 0x822232A8;
	sub_82223258(ctx, base);
loc_822232A8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// bne 0x82223284
	if (!ctx.cr0.eq) goto loc_82223284;
loc_822232B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822232C0"))) PPC_WEAK_FUNC(sub_822232C0);
PPC_FUNC_IMPL(__imp__sub_822232C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x822232C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// stb r18,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r18.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r23,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r23.u16);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// sth r23,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r23.u16);
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82223300;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82223314
	if (!ctx.cr6.eq) goto loc_82223314;
	// bl 0x821b3000
	ctx.lr = 0x82223310;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82223314:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r29,r11,20
	ctx.r29.s64 = ctx.r11.s64 + 20;
	// bl 0x82161240
	ctx.lr = 0x82223328;
	sub_82161240(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// addi r27,r11,4492
	ctx.r27.s64 = ctx.r11.s64 + 4492;
	// rlwinm r11,r9,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r14,-13569
	ctx.r14.s64 = -889257984;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r20,-1
	ctx.r20.s64 = -1;
	// mr r15,r23
	ctx.r15.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223484
	if (ctx.cr6.eq) goto loc_82223484;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8222337c
	if (!ctx.cr6.gt) goto loc_8222337C;
	// stw r27,-13570(r14)
	PPC_STORE_U32(ctx.r14.u32 + -13570, ctx.r27.u32);
loc_8222337C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x822233A8;
	sub_8208CFB0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x822233bc
	if (!ctx.cr6.gt) goto loc_822233BC;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_822233BC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x822233CC;
	sub_82082030(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x822233e4
	if (!ctx.cr6.gt) goto loc_822233E4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_822233E4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x822233F4;
	sub_82082030(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82223444
	if (!ctx.cr6.gt) goto loc_82223444;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
loc_8222340C:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r7,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stwx r20,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r20.u32);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r23,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r23.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8222340c
	if (ctx.cr6.lt) goto loc_8222340C;
loc_82223444:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,8
	ctx.r5.s64 = 8;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// ori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 | 1;
	// sth r8,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r8.u16);
	// addi r6,r10,-1080
	ctx.r6.s64 = ctx.r10.s64 + -1080;
	// sth r8,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r8.u16);
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// bl 0x8233ddb0
	ctx.lr = 0x82223480;
	sub_8233DDB0(ctx, base);
	// b 0x82223488
	goto loc_82223488;
loc_82223484:
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
loc_82223488:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82161240
	ctx.lr = 0x82223498;
	sub_82161240(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r16,84(r1)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// bl 0x8208d070
	ctx.lr = 0x822234A4;
	sub_8208D070(ctx, base);
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r3,r3,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// ble cr6,0x822234c4
	if (!ctx.cr6.gt) goto loc_822234C4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_822234C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x822234D4;
	sub_82082030(ctx, base);
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// cmplwi cr6,r16,2
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 2, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// ble cr6,0x82223528
	if (!ctx.cr6.gt) goto loc_82223528;
	// rlwinm r5,r21,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r5,15
	ctx.r8.s64 = ctx.r5.s64 + 15;
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82223508
	if (!ctx.cr6.gt) goto loc_82223508;
	// stw r27,-13570(r14)
	PPC_STORE_U32(ctx.r14.u32 + -13570, ctx.r27.u32);
loc_82223508:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82223528;
	sub_8208CFB0(ctx, base);
loc_82223528:
	// cmplw cr6,r21,r28
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r3,r21,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82223538
	if (!ctx.cr6.gt) goto loc_82223538;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82223538:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82223548;
	sub_82082030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r21,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8222355C;
	sub_8208CFB0(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi r10,r21,16
	ctx.r10.u64 = ctx.r21.u32 & 0xFFFF;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// sth r10,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r10.u16);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// sth r10,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r10.u16);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// beq cr6,0x82223598
	if (ctx.cr6.eq) goto loc_82223598;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223950
	ctx.lr = 0x82223598;
	sub_82223950(ctx, base);
loc_82223598:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82161240
	ctx.lr = 0x822235A8;
	sub_82161240(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,3011
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3011, ctx.xer);
	// bne cr6,0x82223600
	if (!ctx.cr6.eq) goto loc_82223600;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82082030
	ctx.lr = 0x822235CC;
	sub_82082030(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x822235E0;
	sub_8208CFB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82223258
	ctx.lr = 0x822235EC;
	sub_82223258(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82161240
	ctx.lr = 0x822235FC;
	sub_82161240(ctx, base);
	// b 0x82223604
	goto loc_82223604;
loc_82223600:
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
loc_82223604:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmpwi cr6,r10,3009
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3009, ctx.xer);
	// addi r19,r11,4520
	ctx.r19.s64 = ctx.r11.s64 + 4520;
	// bne cr6,0x8222381c
	if (!ctx.cr6.eq) goto loc_8222381C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r5,r11,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r30,r11,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r5,15
	ctx.r9.s64 = ctx.r5.s64 + 15;
	// rlwinm r24,r9,0,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// add r8,r24,r11
	ctx.r8.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82223644
	if (!ctx.cr6.gt) goto loc_82223644;
	// stw r27,-13570(r14)
	PPC_STORE_U32(ctx.r14.u32 + -13570, ctx.r27.u32);
loc_82223644:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r9,r24,r11
	ctx.r9.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82223664;
	sub_8208CFB0(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// rlwinm r28,r8,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82223688
	if (!ctx.cr6.gt) goto loc_82223688;
	// stw r27,-13570(r14)
	PPC_STORE_U32(ctx.r14.u32 + -13570, ctx.r27.u32);
loc_82223688:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82223710
	if (ctx.cr6.eq) goto loc_82223710;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_822236B0:
	// stw r20,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r20.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82223704
	if (!ctx.cr6.gt) goto loc_82223704;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
loc_822236CC:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822236f0
	if (ctx.cr6.eq) goto loc_822236F0;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x822236cc
	if (ctx.cr6.lt) goto loc_822236CC;
	// b 0x82223704
	goto loc_82223704;
loc_822236F0:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82223704:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bdnz 0x822236b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822236B0;
loc_82223710:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82161240
	ctx.lr = 0x82223720;
	sub_82161240(ctx, base);
	// stb r18,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r18.u8);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// sth r23,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r23.u16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r23,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r23.u16);
	// bl 0x82161240
	ctx.lr = 0x82223744;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222379c
	if (ctx.cr6.eq) goto loc_8222379C;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_82223754:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82223780
	if (ctx.cr6.eq) goto loc_82223780;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820dec30
	ctx.lr = 0x82223780;
	sub_820DEC30(ctx, base);
loc_82223780:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82161240
	ctx.lr = 0x82223790;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82223754
	if (!ctx.cr6.eq) goto loc_82223754;
loc_8222379C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822237dc
	if (ctx.cr6.eq) goto loc_822237DC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822237b4
	if (!ctx.cr6.gt) goto loc_822237B4;
	// stw r19,-13570(r14)
	PPC_STORE_U32(ctx.r14.u32 + -13570, ctx.r19.u32);
loc_822237B4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x822237d0
	if (ctx.cr6.eq) goto loc_822237D0;
	// stw r19,-13570(r14)
	PPC_STORE_U32(ctx.r14.u32 + -13570, ctx.r19.u32);
loc_822237D0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_822237DC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8222381c
	if (ctx.cr6.eq) goto loc_8222381C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822237f4
	if (!ctx.cr6.gt) goto loc_822237F4;
	// stw r19,-13570(r14)
	PPC_STORE_U32(ctx.r14.u32 + -13570, ctx.r19.u32);
loc_822237F4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82223810
	if (ctx.cr6.eq) goto loc_82223810;
	// stw r19,-13570(r14)
	PPC_STORE_U32(ctx.r14.u32 + -13570, ctx.r19.u32);
loc_82223810:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r10,r24,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r24.s64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_8222381C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822238a0
	if (ctx.cr6.eq) goto loc_822238A0;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_8222382C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82223894
	if (ctx.cr6.eq) goto loc_82223894;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223894
	if (ctx.cr6.eq) goto loc_82223894;
	// addi r9,r10,84
	ctx.r9.s64 = ctx.r10.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82223854:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82223888
	if (!ctx.cr6.lt) goto loc_82223888;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223888
	if (ctx.cr6.eq) goto loc_82223888;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222388c
	if (!ctx.cr6.eq) goto loc_8222388C;
loc_82223888:
	// stw r20,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r20.u32);
loc_8222388C:
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// bdnz 0x82223854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82223854;
loc_82223894:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// bne 0x8222382c
	if (!ctx.cr0.eq) goto loc_8222382C;
loc_822238A0:
	// cmplwi cr6,r16,2
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 2, ctx.xer);
	// ble cr6,0x822238f4
	if (!ctx.cr6.gt) goto loc_822238F4;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x822238f4
	if (ctx.cr6.eq) goto loc_822238F4;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r9,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822238cc
	if (!ctx.cr6.gt) goto loc_822238CC;
	// stw r19,-13570(r14)
	PPC_STORE_U32(ctx.r14.u32 + -13570, ctx.r19.u32);
loc_822238CC:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x822238e8
	if (ctx.cr6.eq) goto loc_822238E8;
	// stw r19,-13570(r14)
	PPC_STORE_U32(ctx.r14.u32 + -13570, ctx.r19.u32);
loc_822238E8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
loc_822238F4:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82223944
	if (ctx.cr6.eq) goto loc_82223944;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r9,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8222391c
	if (!ctx.cr6.gt) goto loc_8222391C;
	// stw r19,-13570(r14)
	PPC_STORE_U32(ctx.r14.u32 + -13570, ctx.r19.u32);
loc_8222391C:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x82223938
	if (ctx.cr6.eq) goto loc_82223938;
	// stw r19,-13570(r14)
	PPC_STORE_U32(ctx.r14.u32 + -13570, ctx.r19.u32);
loc_82223938:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
loc_82223944:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222394C"))) PPC_WEAK_FUNC(sub_8222394C);
PPC_FUNC_IMPL(__imp__sub_8222394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223950"))) PPC_WEAK_FUNC(sub_82223950);
PPC_FUNC_IMPL(__imp__sub_82223950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x82223958;
	__savegprlr_19(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4192(r1)
	ea = -4192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r5,4000
	ctx.r5.s64 = 4000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82223984;
	sub_8233EAF0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82223aac
	if (!ctx.cr6.eq) goto loc_82223AAC;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82223a3c
	if (ctx.cr6.eq) goto loc_82223A3C;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lis r28,2
	ctx.r28.s64 = 131072;
loc_822239B0:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822239D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x822239DC;
	sub_8208D070(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 * 88;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82223a00
	if (!ctx.cr6.gt) goto loc_82223A00;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82223a00
	if (ctx.cr6.eq) goto loc_82223A00;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82223A00:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82223A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x822239b0
	if (!ctx.cr0.eq) goto loc_822239B0;
loc_82223A3C:
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// clrldi r4,r27,32
	ctx.r4.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82223a64
	if (!ctx.cr6.gt) goto loc_82223A64;
	// lhz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82223a64
	if (!ctx.cr6.eq) goto loc_82223A64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82223a64
	if (ctx.cr6.eq) goto loc_82223A64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82223A64:
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82223a94
	if (ctx.cr6.lt) goto loc_82223A94;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x82223a94
	if (!ctx.cr6.lt) goto loc_82223A94;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// b 0x82223afc
	goto loc_82223AFC;
loc_82223A94:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82223AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82223afc
	goto loc_82223AFC;
loc_82223AAC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82223afc
	if (ctx.cr6.eq) goto loc_82223AFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lis r28,2
	ctx.r28.s64 = 131072;
loc_82223AC4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82223ae8
	if (!ctx.cr6.gt) goto loc_82223AE8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82223ae8
	if (ctx.cr6.eq) goto loc_82223AE8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82223AE8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bdnz 0x82223ac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82223AC4;
loc_82223AFC:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// addi r29,r26,1
	ctx.r29.s64 = ctx.r26.s64 + 1;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r29,12(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12, ctx.r29.u32);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82223b1c
	if (!ctx.cr6.gt) goto loc_82223B1C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82223B1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82223B2C;
	sub_82082030(ctx, base);
	// stw r3,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82223b6c
	if (ctx.cr6.eq) goto loc_82223B6C;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82223B40:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82223B54;
	sub_82082030(ctx, base);
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82223b40
	if (!ctx.cr0.eq) goto loc_82223B40;
loc_82223B6C:
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82223d14
	if (ctx.cr6.eq) goto loc_82223D14;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
loc_82223B8C:
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r28,r21,r11
	ctx.r28.u64 = ctx.r21.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82223BA4;
	sub_8208CFB0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x82223bf0
	if (ctx.cr6.lt) goto loc_82223BF0;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// lwzx r31,r8,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// bne cr6,0x82223be8
	if (!ctx.cr6.eq) goto loc_82223BE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82223BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82223BE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82223bf8
	goto loc_82223BF8;
loc_82223BF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82307908
	ctx.lr = 0x82223BF8;
	sub_82307908(ctx, base);
loc_82223BF8:
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r10,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r10.u32);
	// mulli r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 * 88;
	// lwz r9,8(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwzx r7,r23,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r8.u32);
	// lwzx r10,r23,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r6,r8,r24
	ctx.r6.u64 = ctx.r8.u64 + ctx.r24.u64;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82223c44
	if (!ctx.cr6.gt) goto loc_82223C44;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82223c44
	if (ctx.cr6.eq) goto loc_82223C44;
	// addi r10,r22,1
	ctx.r10.s64 = ctx.r22.s64 + 1;
	// rlwinm r23,r10,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// lwzx r29,r23,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	// add r24,r29,r11
	ctx.r24.u64 = ctx.r29.u64 + ctx.r11.u64;
	// b 0x82223c4c
	goto loc_82223C4C;
loc_82223C44:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_82223C4C:
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223d08
	if (ctx.cr6.eq) goto loc_82223D08;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r29,84
	ctx.r26.s64 = ctx.r29.s64 + 84;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82223C64:
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r26,-84
	ctx.r4.s64 = ctx.r26.s64 + -84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82223C74;
	sub_8208CFB0(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r26,-72
	ctx.r4.s64 = ctx.r26.s64 + -72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82223C84;
	sub_8208CFB0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r28,18
	ctx.r27.s64 = ctx.r28.s64 + 18;
loc_82223C8C:
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82223CA8;
	sub_8208CFB0(ctx, base);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82223CC4;
	sub_8208CFB0(ctx, base);
	// add r9,r27,r31
	ctx.r9.u64 = ctx.r27.u64 + ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82223CDC;
	sub_8208CFB0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82223c8c
	if (ctx.cr6.lt) goto loc_82223C8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82223CF8;
	sub_8208CFB0(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,22
	ctx.r28.s64 = ctx.r28.s64 + 22;
	// addi r26,r26,88
	ctx.r26.s64 = ctx.r26.s64 + 88;
	// bne 0x82223c64
	if (!ctx.cr0.eq) goto loc_82223C64;
loc_82223D08:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r21,r21,32
	ctx.r21.s64 = ctx.r21.s64 + 32;
	// bne 0x82223b8c
	if (!ctx.cr0.eq) goto loc_82223B8C;
loc_82223D14:
	// addi r1,r1,4192
	ctx.r1.s64 = ctx.r1.s64 + 4192;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223D1C"))) PPC_WEAK_FUNC(sub_82223D1C);
PPC_FUNC_IMPL(__imp__sub_82223D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223D20"))) PPC_WEAK_FUNC(sub_82223D20);
PPC_FUNC_IMPL(__imp__sub_82223D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82223D28;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r24,r5,48
	ctx.r24.s64 = ctx.r5.s64 + 48;
loc_82223D4C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82223dd8
	if (ctx.cr6.eq) goto loc_82223DD8;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82223dd8
	if (!ctx.cr6.eq) goto loc_82223DD8;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mulli r11,r9,88
	ctx.r11.s64 = ctx.r9.s64 * 88;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x82201940
	ctx.lr = 0x82223D8C;
	sub_82201940(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223da8
	if (ctx.cr6.eq) goto loc_82223DA8;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201a78
	ctx.lr = 0x82223DA0;
	sub_82201A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82223df4
	if (!ctx.cr6.eq) goto loc_82223DF4;
loc_82223DA8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82223dd8
	if (ctx.cr6.eq) goto loc_82223DD8;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r8,r26,-1
	ctx.r8.s64 = ctx.r26.s64 + -1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82223d20
	ctx.lr = 0x82223DD0;
	sub_82223D20(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82223dec
	if (!ctx.cr6.eq) goto loc_82223DEC;
loc_82223DD8:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 3, ctx.xer);
	// blt cr6,0x82223d4c
	if (ctx.cr6.lt) goto loc_82223D4C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82223DEC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82223DF4:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223E00"))) PPC_WEAK_FUNC(sub_82223E00);
PPC_FUNC_IMPL(__imp__sub_82223E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82223E08;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82223e44
	if (ctx.cr6.lt) goto loc_82223E44;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_82223E44:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82223e68
	if (ctx.cr6.eq) goto loc_82223E68;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82223e6c
	if (ctx.cr6.lt) goto loc_82223E6C;
loc_82223E68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82223E6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223f30
	if (ctx.cr6.eq) goto loc_82223F30;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mulli r10,r27,88
	ctx.r10.s64 = ctx.r27.s64 * 88;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201940
	ctx.lr = 0x82223E9C;
	sub_82201940(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82223ee8
	if (ctx.cr6.eq) goto loc_82223EE8;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201a78
	ctx.lr = 0x82223EC0;
	sub_82201A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223ee8
	if (ctx.cr6.eq) goto loc_82223EE8;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lhz r10,62(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 62);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_82223EE8:
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82223d20
	ctx.lr = 0x82223F0C;
	sub_82223D20(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82223f30
	if (ctx.cr6.eq) goto loc_82223F30;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lhz r10,62(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 62);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_82223F30:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,25424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25424);
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82223F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223F90"))) PPC_WEAK_FUNC(sub_82223F90);
PPC_FUNC_IMPL(__imp__sub_82223F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82223F98;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82224038
	if (ctx.cr6.lt) goto loc_82224038;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82224030
	if (!ctx.cr6.eq) goto loc_82224030;
loc_82223FD8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r31,r5,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x822241c8
	ctx.lr = 0x82224030;
	sub_822241C8(ctx, base);
loc_82224030:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82224038:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82223fd8
	if (ctx.cr6.eq) goto loc_82223FD8;
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82224064
	if (ctx.cr6.eq) goto loc_82224064;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82224068
	if (ctx.cr6.lt) goto loc_82224068;
loc_82224064:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82224068:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223fd8
	if (ctx.cr6.eq) goto loc_82223FD8;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82223fd8
	if (!ctx.cr6.eq) goto loc_82223FD8;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mulli r28,r26,88
	ctx.r28.s64 = ctx.r26.s64 * 88;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201940
	ctx.lr = 0x822240A4;
	sub_82201940(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822240cc
	if (ctx.cr6.eq) goto loc_822240CC;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201a78
	ctx.lr = 0x822240B8;
	sub_82201A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822240cc
	if (ctx.cr6.eq) goto loc_822240CC;
	// stw r26,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_822240CC:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82223d20
	ctx.lr = 0x822240F0;
	sub_82223D20(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82223fd8
	if (ctx.cr6.eq) goto loc_82223FD8;
	// stw r3,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224104"))) PPC_WEAK_FUNC(sub_82224104);
PPC_FUNC_IMPL(__imp__sub_82224104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82224108"))) PPC_WEAK_FUNC(sub_82224108);
PPC_FUNC_IMPL(__imp__sub_82224108) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82224144
	if (ctx.cr6.lt) goto loc_82224144;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x822241b0
	if (!ctx.cr6.eq) goto loc_822241B0;
loc_82224144:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82224160
	if (!ctx.cr6.gt) goto loc_82224160;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82224160:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x822246f8
	ctx.lr = 0x82224198;
	sub_822246F8(ctx, base);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822241ac
	if (!ctx.cr6.gt) goto loc_822241AC;
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
loc_822241AC:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_822241B0:
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

__attribute__((alias("__imp__sub_822241C8"))) PPC_WEAK_FUNC(sub_822241C8);
PPC_FUNC_IMPL(__imp__sub_822241C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x822241D0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8233fa30
	ctx.lr = 0x822241D8;
	__savefpr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r7,r11,31376
	ctx.r7.s64 = ctx.r11.s64 + 31376;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r5,12
	ctx.r27.s64 = ctx.r5.s64 + 12;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r4,16
	ctx.r28.s64 = ctx.r4.s64 + 16;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f28,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82224260:
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fcmpu cr6,f8,f28
	ctx.cr6.compare(ctx.f8.f64, ctx.f28.f64);
	// ble cr6,0x822242a4
	if (!ctx.cr6.gt) goto loc_822242A4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f12,f28
	ctx.cr6.compare(ctx.f12.f64, ctx.f28.f64);
	// bge cr6,0x822242f4
	if (!ctx.cr6.lt) goto loc_822242F4;
	// fdivs f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 / ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822242a4
	if (!ctx.cr6.gt) goto loc_822242A4;
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822242f4
	if (ctx.cr6.gt) goto loc_822242F4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822242A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82224260
	if (ctx.cr6.lt) goto loc_82224260;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82224308
	if (ctx.cr6.eq) goto loc_82224308;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822245d8
	ctx.lr = 0x822242E4;
	sub_822245D8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8233fa7c
	ctx.lr = 0x822242F0;
	__restfpr_26(ctx, base);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_822242F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8233fa7c
	ctx.lr = 0x82224304;
	__restfpr_26(ctx, base);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_82224308:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f31,60(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f4,f13,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f8,f11,f6
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f30,f11,f4
	ctx.f30.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f27,f9,f1
	ctx.f27.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f29,f10,f2
	ctx.f29.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fcmpu cr6,f8,f28
	ctx.cr6.compare(ctx.f8.f64, ctx.f28.f64);
	// ble cr6,0x822243b0
	if (!ctx.cr6.gt) goto loc_822243B0;
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// fsubs f30,f30,f12
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_822243B0:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x822243c8
	if (!ctx.cr6.gt) goto loc_822243C8;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// ori r29,r29,2
	ctx.r29.u64 = ctx.r29.u64 | 2;
	// fsubs f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_822243C8:
	// fcmpu cr6,f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// ble cr6,0x822243e0
	if (!ctx.cr6.gt) goto loc_822243E0;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// ori r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 4;
	// fsubs f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_822243E0:
	// lfs f26,396(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 396);
	ctx.f26.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
loc_822243E8:
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222443c
	if (ctx.cr6.eq) goto loc_8222443C;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822241c8
	ctx.lr = 0x82224410;
	sub_822241C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224420
	if (ctx.cr6.eq) goto loc_82224420;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82224420:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222443c
	if (ctx.cr6.eq) goto loc_8222443C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822245ac
	if (!ctx.cr6.eq) goto loc_822245AC;
loc_8222443C:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f26
	ctx.f13.f64 = ctx.f26.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x82224488
	if (ctx.cr6.eq) goto loc_82224488;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82224468
	if (!ctx.cr6.gt) goto loc_82224468;
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// b 0x82224478
	goto loc_82224478;
loc_82224468:
	// fneg f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f10,f11,f31,f12
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f12.f64)));
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
loc_82224478:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82224488
	if (!ctx.cr6.lt) goto loc_82224488;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82224488:
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x822244cc
	if (ctx.cr6.eq) goto loc_822244CC;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x822244ac
	if (!ctx.cr6.gt) goto loc_822244AC;
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f11,f12,f31,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f29.f64));
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// b 0x822244bc
	goto loc_822244BC;
loc_822244AC:
	// fneg f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f10,f11,f31,f12
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f12.f64)));
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
loc_822244BC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822244cc
	if (!ctx.cr6.lt) goto loc_822244CC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822244CC:
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x82224510
	if (ctx.cr6.eq) goto loc_82224510;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x822244f0
	if (!ctx.cr6.gt) goto loc_822244F0;
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f11,f12,f31,f27
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f27.f64));
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// b 0x82224500
	goto loc_82224500;
loc_822244F0:
	// fneg f12,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f10,f11,f31,f12
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f12.f64)));
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
loc_82224500:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82224510
	if (!ctx.cr6.lt) goto loc_82224510;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82224510:
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822245c0
	if (ctx.cr6.gt) goto loc_822245C0;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r30
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x82224538
	if (ctx.cr6.gt) goto loc_82224538;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82224538:
	// slw r10,r26,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 & ctx.r29.u64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// xor r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822245c0
	if (ctx.cr6.eq) goto loc_822245C0;
	// xor r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 ^ ctx.r29.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82224594
	if (ctx.cr6.eq) goto loc_82224594;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f12,r9,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f27,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// b 0x822243e8
	goto loc_822243E8;
loc_82224594:
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f12,r9,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f27,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822243e8
	goto loc_822243E8;
loc_822245AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8233fa7c
	ctx.lr = 0x822245BC;
	__restfpr_26(ctx, base);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_822245C0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8233fa7c
	ctx.lr = 0x822245D0;
	__restfpr_26(ctx, base);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822245D4"))) PPC_WEAK_FUNC(sub_822245D4);
PPC_FUNC_IMPL(__imp__sub_822245D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822245D8"))) PPC_WEAK_FUNC(sub_822245D8);
PPC_FUNC_IMPL(__imp__sub_822245D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x822245E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,28(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r29,r4,32
	ctx.r29.s64 = ctx.r4.s64 + 32;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822246dc
	if (ctx.cr6.eq) goto loc_822246DC;
loc_8222460C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82224624
	if (ctx.cr6.eq) goto loc_82224624;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822246cc
	if (!ctx.cr6.eq) goto loc_822246CC;
loc_82224624:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8222469c
	if (!ctx.cr6.lt) goto loc_8222469C;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8222469c
	if (!ctx.cr6.lt) goto loc_8222469C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r11,r9,88
	ctx.r11.s64 = ctx.r9.s64 * 88;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201940
	ctx.lr = 0x82224674;
	sub_82201940(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222469c
	if (ctx.cr6.eq) goto loc_8222469C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201a78
	ctx.lr = 0x82224684;
	sub_82201A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222469c
	if (ctx.cr6.eq) goto loc_8222469C;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// b 0x822246a0
	goto loc_822246A0;
loc_8222469C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822246A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822246b0
	if (ctx.cr6.eq) goto loc_822246B0;
	// li r24,1
	ctx.r24.s64 = 1;
loc_822246B0:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822246cc
	if (ctx.cr6.eq) goto loc_822246CC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822246e8
	if (!ctx.cr6.eq) goto loc_822246E8;
loc_822246CC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8222460c
	if (ctx.cr6.lt) goto loc_8222460C;
loc_822246DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_822246E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822246F4"))) PPC_WEAK_FUNC(sub_822246F4);
PPC_FUNC_IMPL(__imp__sub_822246F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822246F8"))) PPC_WEAK_FUNC(sub_822246F8);
PPC_FUNC_IMPL(__imp__sub_822246F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82224700;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r6,31376
	ctx.r5.s64 = ctx.r6.s64 + 31376;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-24052
	ctx.r11.s64 = ctx.r11.s64 + -24052;
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r7,255
	ctx.r7.s64 = 255;
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmuls f12,f10,f10
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82224774:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82224798
	if (!ctx.cr6.gt) goto loc_82224798;
	// fnmsubs f12,f0,f0,f12
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x82224824
	if (ctx.cr6.lt) goto loc_82224824;
loc_82224798:
	// fcmpu cr6,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x822247a8
	if (!ctx.cr6.gt) goto loc_822247A8;
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x822247b8
	goto loc_822247B8;
loc_822247A8:
	// fneg f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822247bc
	if (!ctx.cr6.lt) goto loc_822247BC;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_822247B8:
	// and r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_822247BC:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// blt cr6,0x82224774
	if (ctx.cr6.lt) goto loc_82224774;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r25,r4,28
	ctx.r25.s64 = ctx.r4.s64 + 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// and r26,r11,r7
	ctx.r26.u64 = ctx.r11.u64 & ctx.r7.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82224850
	if (ctx.cr6.eq) goto loc_82224850;
loc_822247EC:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224840
	if (ctx.cr6.eq) goto loc_82224840;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82224830
	if (ctx.cr6.eq) goto loc_82224830;
	// bl 0x82224860
	ctx.lr = 0x82224820;
	sub_82224860(ctx, base);
	// b 0x82224834
	goto loc_82224834;
loc_82224824:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82224830:
	// bl 0x822246f8
	ctx.lr = 0x82224834;
	sub_822246F8(ctx, base);
loc_82224834:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// or r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82224840:
	// rlwinm r26,r26,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x822247ec
	if (!ctx.cr6.eq) goto loc_822247EC;
loc_82224850:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222485C"))) PPC_WEAK_FUNC(sub_8222485C);
PPC_FUNC_IMPL(__imp__sub_8222485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82224860"))) PPC_WEAK_FUNC(sub_82224860);
PPC_FUNC_IMPL(__imp__sub_82224860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82224868;
	__savegprlr_28(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r8,31376
	ctx.r8.s64 = ctx.r8.s64 + 31376;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f6,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f12,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// stfs f11,-64(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fmuls f13,f6,f6
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// stfs f7,-60(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f5,-56(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
loc_822248B8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822248dc
	if (!ctx.cr6.gt) goto loc_822248DC;
	// fnmsubs f13,f0,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82224994
	if (ctx.cr6.lt) goto loc_82224994;
loc_822248DC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x822248b8
	if (ctx.cr6.lt) goto loc_822248B8;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82224b84
	if (ctx.cr6.lt) goto loc_82224B84;
	// addi r29,r30,-3
	ctx.r29.s64 = ctx.r30.s64 + -3;
loc_8222490C:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82224924
	if (ctx.cr6.eq) goto loc_82224924;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822249ac
	if (!ctx.cr6.eq) goto loc_822249AC;
loc_82224924:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r4,r9,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mulli r10,r8,88
	ctx.r10.s64 = ctx.r8.s64 * 88;
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8222499c
	if (!ctx.cr6.lt) goto loc_8222499C;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// b 0x822249a0
	goto loc_822249A0;
loc_82224994:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8222499C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822249A0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_822249AC:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822249c4
	if (ctx.cr6.eq) goto loc_822249C4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82224a44
	if (!ctx.cr6.eq) goto loc_82224A44;
loc_822249C4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r4,r9,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mulli r10,r8,88
	ctx.r10.s64 = ctx.r8.s64 * 88;
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82224a34
	if (!ctx.cr6.lt) goto loc_82224A34;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// b 0x82224a38
	goto loc_82224A38;
loc_82224A34:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82224A38:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_82224A44:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82224a5c
	if (ctx.cr6.eq) goto loc_82224A5C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82224adc
	if (!ctx.cr6.eq) goto loc_82224ADC;
loc_82224A5C:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r4,r9,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mulli r10,r8,88
	ctx.r10.s64 = ctx.r8.s64 * 88;
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82224acc
	if (!ctx.cr6.lt) goto loc_82224ACC;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// b 0x82224ad0
	goto loc_82224AD0;
loc_82224ACC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82224AD0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_82224ADC:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82224af4
	if (ctx.cr6.eq) goto loc_82224AF4;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82224b74
	if (!ctx.cr6.eq) goto loc_82224B74;
loc_82224AF4:
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r4,r9,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mulli r10,r8,88
	ctx.r10.s64 = ctx.r8.s64 * 88;
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82224b64
	if (!ctx.cr6.lt) goto loc_82224B64;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// b 0x82224b68
	goto loc_82224B68;
loc_82224B64:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82224B68:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_82224B74:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8222490c
	if (ctx.cr6.lt) goto loc_8222490C;
loc_82224B84:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82224c34
	if (!ctx.cr6.lt) goto loc_82224C34;
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82224B94:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82224bac
	if (ctx.cr6.eq) goto loc_82224BAC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82224c2c
	if (!ctx.cr6.eq) goto loc_82224C2C;
loc_82224BAC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r4,r9,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mulli r10,r8,88
	ctx.r10.s64 = ctx.r8.s64 * 88;
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82224c1c
	if (!ctx.cr6.lt) goto loc_82224C1C;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// b 0x82224c20
	goto loc_82224C20;
loc_82224C1C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82224C20:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_82224C2C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82224b94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82224B94;
loc_82224C34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224C3C"))) PPC_WEAK_FUNC(sub_82224C3C);
PPC_FUNC_IMPL(__imp__sub_82224C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82224C40"))) PPC_WEAK_FUNC(sub_82224C40);
PPC_FUNC_IMPL(__imp__sub_82224C40) {
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
	// lwz r30,36(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82224ca4
	if (ctx.cr6.eq) goto loc_82224CA4;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r3,8
	ctx.r6.s64 = ctx.r3.s64 + 8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224108
	ctx.lr = 0x82224C7C;
	sub_82224108(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82224ca4
	if (ctx.cr6.eq) goto loc_82224CA4;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x82224ca8
	goto loc_82224CA8;
loc_82224CA4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82224CA8:
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

__attribute__((alias("__imp__sub_82224CC0"))) PPC_WEAK_FUNC(sub_82224CC0);
PPC_FUNC_IMPL(__imp__sub_82224CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82224CC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,36(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82224d9c
	if (ctx.cr6.eq) goto loc_82224D9C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f7,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x822241c8
	ctx.lr = 0x82224D70;
	sub_822241C8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x82224d9c
	if (ctx.cr6.eq) goto loc_82224D9C;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82224D9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224DA8"))) PPC_WEAK_FUNC(sub_82224DA8);
PPC_FUNC_IMPL(__imp__sub_82224DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82224DB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82224de4
	if (!ctx.cr6.eq) goto loc_82224DE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8230a148
	ctx.lr = 0x82224DD8;
	sub_8230A148(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82224DE4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// subfic r7,r8,2
	ctx.xer.ca = ctx.r8.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// beq cr6,0x82224f0c
	if (ctx.cr6.eq) goto loc_82224F0C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r11.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8230a148
	ctx.lr = 0x82224E34;
	sub_8230A148(ctx, base);
loc_82224E34:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82224E48:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82224e48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82224E48;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82106200
	ctx.lr = 0x82224E6C;
	sub_82106200(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82224ed0
	if (!ctx.cr6.eq) goto loc_82224ED0;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82224ed0
	if (!ctx.cr6.eq) goto loc_82224ED0;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82224ed0
	if (!ctx.cr6.eq) goto loc_82224ED0;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82224ed0
	if (!ctx.cr6.eq) goto loc_82224ED0;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82224ed0
	if (!ctx.cr6.eq) goto loc_82224ED0;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82224ed4
	if (ctx.cr6.eq) goto loc_82224ED4;
loc_82224ED0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82224ED4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224eec
	if (ctx.cr6.eq) goto loc_82224EEC;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82224e34
	if (!ctx.cr6.eq) goto loc_82224E34;
loc_82224EEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8230a148
	ctx.lr = 0x82224EF4;
	sub_8230A148(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82224f28
	if (!ctx.cr6.eq) goto loc_82224F28;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82224F0C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8230a148
	ctx.lr = 0x82224F1C;
	sub_8230A148(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8230a148
	ctx.lr = 0x82224F24;
	sub_8230A148(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82224F28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224F30"))) PPC_WEAK_FUNC(sub_82224F30);
PPC_FUNC_IMPL(__imp__sub_82224F30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r31,r11,22200
	ctx.r31.s64 = ctx.r11.s64 + 22200;
	// lbz r11,971(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 971);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224f68
	if (ctx.cr6.eq) goto loc_82224F68;
	// lfs f1,976(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82224fe8
	goto loc_82224FE8;
loc_82224F68:
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// bl 0x821afdc0
	ctx.lr = 0x82224F70;
	sub_821AFDC0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,800(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82224f90
	if (!ctx.cr6.lt) goto loc_82224F90;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_82224F90:
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82224fc0
	if (!ctx.cr6.gt) goto loc_82224FC0;
	// bl 0x82247328
	ctx.lr = 0x82224FB4;
	sub_82247328(ctx, base);
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// bl 0x821afdc0
	ctx.lr = 0x82224FBC;
	sub_821AFDC0(ctx, base);
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
loc_82224FC0:
	// stfs f31,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82224fd4
	if (!ctx.cr6.lt) goto loc_82224FD4;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x82224fe4
	goto loc_82224FE4;
loc_82224FD4:
	// lfs f0,252(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82224fe4
	if (!ctx.cr6.gt) goto loc_82224FE4;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82224FE4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82224FE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82225008"))) PPC_WEAK_FUNC(sub_82225008);
PPC_FUNC_IMPL(__imp__sub_82225008) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,25072(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82225030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x823053a0
	ctx.lr = 0x82225038;
	sub_823053A0(ctx, base);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r3,r8,22200
	ctx.r3.s64 = ctx.r8.s64 + 22200;
	// bl 0x822258e0
	ctx.lr = 0x82225044;
	sub_822258E0(ctx, base);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r3,26216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26216, ctx.r3.u32);
	// bl 0x82225fb8
	ctx.lr = 0x82225050;
	sub_82225FB8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82225104
	if (ctx.cr6.eq) goto loc_82225104;
	// bl 0x822262c0
	ctx.lr = 0x82225064;
	sub_822262C0(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
	// ori r9,r10,520
	ctx.r9.u64 = ctx.r10.u64 | 520;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222509c
	if (ctx.cr6.eq) goto loc_8222509C;
loc_82225080:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82247328
	ctx.lr = 0x82225088;
	sub_82247328(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,520
	ctx.r10.u64 = ctx.r11.u64 | 520;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82225080
	if (!ctx.cr6.eq) goto loc_82225080;
loc_8222509C:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,26188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822250c8
	if (ctx.cr6.eq) goto loc_822250C8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,26180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26180);
	// bl 0x82388454
	ctx.lr = 0x822250B8;
	__imp__XamLoaderSetLaunchData(ctx, base);
	// lwz r11,26188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26188);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82248678
	ctx.lr = 0x822250C8;
	sub_82248678(ctx, base);
loc_822250C8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,26196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822250f4
	if (ctx.cr6.eq) goto loc_822250F4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,26192(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26192);
	// bl 0x82388454
	ctx.lr = 0x822250E4;
	__imp__XamLoaderSetLaunchData(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,26200(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26200);
	// bl 0x82248678
	ctx.lr = 0x822250F4;
	sub_82248678(ctx, base);
loc_822250F4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4323
	ctx.r3.s64 = ctx.r11.s64 + 4323;
	// bl 0x82248678
	ctx.lr = 0x82225104;
	sub_82248678(ctx, base);
loc_82225104:
	// bl 0x82225120
	ctx.lr = 0x82225108;
	sub_82225120(ctx, base);
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

__attribute__((alias("__imp__sub_82225120"))) PPC_WEAK_FUNC(sub_82225120);
PPC_FUNC_IMPL(__imp__sub_82225120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82225128;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r23,r10,22200
	ctx.r23.s64 = ctx.r10.s64 + 22200;
	// stw r11,1504(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1504, ctx.r11.u32);
	// bl 0x8230afd8
	ctx.lr = 0x82225140;
	sub_8230AFD8(ctx, base);
	// bl 0x8218ed88
	ctx.lr = 0x82225144;
	sub_8218ED88(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r24,r11,-29208
	ctx.r24.s64 = ctx.r11.s64 + -29208;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821b05f8
	ctx.lr = 0x82225154;
	sub_821B05F8(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r26,r11,-7224
	ctx.r26.s64 = ctx.r11.s64 + -7224;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r29,16704(r26)
	PPC_STORE_U8(ctx.r26.u32 + 16704, ctx.r29.u8);
	// lwz r3,16752(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16752);
	// bl 0x822473f8
	ctx.lr = 0x82225174;
	sub_822473F8(ctx, base);
	// addi r9,r26,16756
	ctx.r9.s64 = ctx.r26.s64 + 16756;
loc_82225178:
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
	// bne 0x82225178
	if (!ctx.cr0.eq) goto loc_82225178;
	// addi r3,r26,16696
	ctx.r3.s64 = ctx.r26.s64 + 16696;
	// bl 0x82305448
	ctx.lr = 0x8222519C;
	sub_82305448(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r3,r26,16720
	ctx.r3.s64 = ctx.r26.s64 + 16720;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823052d8
	ctx.lr = 0x822251AC;
	sub_823052D8(ctx, base);
loc_822251AC:
	// addi r3,r26,16696
	ctx.r3.s64 = ctx.r26.s64 + 16696;
	// bl 0x82173388
	ctx.lr = 0x822251B4;
	sub_82173388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822251ac
	if (!ctx.cr6.eq) goto loc_822251AC;
	// addi r3,r26,16720
	ctx.r3.s64 = ctx.r26.s64 + 16720;
	// bl 0x823051a8
	ctx.lr = 0x822251C8;
	sub_823051A8(ctx, base);
	// stb r29,16520(r26)
	PPC_STORE_U8(ctx.r26.u32 + 16520, ctx.r29.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16664(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16664);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822473f8
	ctx.lr = 0x822251DC;
	sub_822473F8(ctx, base);
	// addi r9,r26,16668
	ctx.r9.s64 = ctx.r26.s64 + 16668;
loc_822251E0:
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
	// bne 0x822251e0
	if (!ctx.cr0.eq) goto loc_822251E0;
	// addi r3,r26,16512
	ctx.r3.s64 = ctx.r26.s64 + 16512;
	// bl 0x82305448
	ctx.lr = 0x82225204;
	sub_82305448(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r27,r11,15640
	ctx.r27.s64 = ctx.r11.s64 + 15640;
	// lbz r8,1501(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1501);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82225220
	if (ctx.cr6.eq) goto loc_82225220;
	// addi r3,r27,1492
	ctx.r3.s64 = ctx.r27.s64 + 1492;
	// bl 0x82305448
	ctx.lr = 0x82225220;
	sub_82305448(ctx, base);
loc_82225220:
	// lwz r9,60(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822252a0
	if (ctx.cr6.eq) goto loc_822252A0;
	// lwz r8,56(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8222523C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8222525c
	if (!ctx.cr6.eq) goto loc_8222525C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8222523c
	if (ctx.cr6.lt) goto loc_8222523C;
	// b 0x822252a0
	goto loc_822252A0;
loc_8222525C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822252a0
	if (ctx.cr6.eq) goto loc_822252A0;
loc_8222526C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r27,56
	ctx.r3.s64 = ctx.r27.s64 + 56;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x8208d650
	ctx.lr = 0x8222527C;
	sub_8208D650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82225298
	if (ctx.cr6.eq) goto loc_82225298;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208db48
	ctx.lr = 0x82225290;
	sub_8208DB48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82095070
	ctx.lr = 0x82225298;
	sub_82095070(ctx, base);
loc_82225298:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8222526c
	if (!ctx.cr6.eq) goto loc_8222526C;
loc_822252A0:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r5,4800
	ctx.r5.s64 = 4800;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8233eaf0
	ctx.lr = 0x822252B8;
	sub_8233EAF0(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f1,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82160a88
	ctx.lr = 0x822252C8;
	sub_82160A88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82152df8
	ctx.lr = 0x822252D0;
	sub_82152DF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821761f0
	ctx.lr = 0x822252D8;
	sub_821761F0(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
	// ori r7,r8,65524
	ctx.r7.u64 = ctx.r8.u64 | 65524;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r30,r10,484
	ctx.r30.s64 = ctx.r10.s64 + 484;
	// stbx r29,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r29.u8);
loc_822252F8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822471d8
	ctx.lr = 0x82225300;
	sub_822471D8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822252f8
	if (ctx.cr6.lt) goto loc_822252F8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r10,r11,1976
	ctx.r10.u64 = ctx.r11.u64 | 1976;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82247250
	ctx.lr = 0x82225328;
	sub_82247250(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-21012
	ctx.r3.s64 = ctx.r11.s64 + -21012;
	// bl 0x82146cf8
	ctx.lr = 0x82225334;
	sub_82146CF8(ctx, base);
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// addi r8,r9,-26328
	ctx.r8.s64 = ctx.r9.s64 + -26328;
	// lwz r3,8232(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222535c
	if (ctx.cr6.eq) goto loc_8222535C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222535C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222535C:
	// bl 0x8217ced8
	ctx.lr = 0x82225360;
	sub_8217CED8(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r9,-18000
	ctx.r3.s64 = ctx.r9.s64 + -18000;
	// stw r25,26268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26268, ctx.r25.u32);
	// lwz r11,-18000(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18000);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82225388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26264(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26264, ctx.r25.u32);
	// bl 0x821d9948
	ctx.lr = 0x82225398;
	sub_821D9948(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// addi r11,r11,-13936
	ctx.r11.s64 = ctx.r11.s64 + -13936;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,26272(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26272, ctx.r25.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822253c0
	if (ctx.cr6.eq) goto loc_822253C0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x822253C0;
	sub_82246E18(ctx, base);
loc_822253C0:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26276, ctx.r25.u32);
	// bl 0x82213520
	ctx.lr = 0x822253D0;
	sub_82213520(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r29,r11,-21792
	ctx.r29.s64 = ctx.r11.s64 + -21792;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r30,10
	ctx.r30.s64 = 10;
	// addi r31,r29,14504
	ctx.r31.s64 = ctx.r29.s64 + 14504;
	// stw r25,26280(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26280, ctx.r25.u32);
loc_822253EC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222540c
	if (ctx.cr6.eq) goto loc_8222540C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222540C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222540C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822253ec
	if (!ctx.cr0.eq) goto loc_822253EC;
	// lwz r11,14556(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14556);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222542c
	if (ctx.cr6.eq) goto loc_8222542C;
	// lwz r3,14556(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14556);
	// bl 0x82246e18
	ctx.lr = 0x8222542C;
	sub_82246E18(ctx, base);
loc_8222542C:
	// bl 0x820dd418
	ctx.lr = 0x82225430;
	sub_820DD418(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26256, ctx.r25.u32);
	// lwz r30,26328(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26328);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82225460
	if (ctx.cr6.eq) goto loc_82225460;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82086438
	ctx.lr = 0x82225454;
	sub_82086438(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82225460;
	sub_82080000(ctx, base);
loc_82225460:
	// stw r25,26328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26328, ctx.r25.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bl 0x821c44a0
	ctx.lr = 0x8222546C;
	sub_821C44A0(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26324, ctx.r25.u32);
	// bl 0x82097a88
	ctx.lr = 0x8222547C;
	sub_82097A88(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r29,r11,15352
	ctx.r29.s64 = ctx.r11.s64 + 15352;
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82225490:
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822254dc
	if (ctx.cr6.eq) goto loc_822254DC;
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822254c4
	if (ctx.cr6.eq) goto loc_822254C4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822254c0
	if (ctx.cr6.eq) goto loc_822254C0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822254C0;
	sub_82080000(ctx, base);
loc_822254C0:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_822254C4:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822254D8;
	sub_82080000(ctx, base);
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
loc_822254DC:
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// cmplwi cr6,r30,704
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 704, ctx.xer);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x82225490
	if (ctx.cr6.lt) goto loc_82225490;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225500
	if (ctx.cr6.eq) goto loc_82225500;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82225500;
	sub_82080000(ctx, base);
loc_82225500:
	// lwz r11,268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225518
	if (ctx.cr6.eq) goto loc_82225518;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82225518;
	sub_82080000(ctx, base);
loc_82225518:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r9,r11,9544
	ctx.r9.s64 = ctx.r11.s64 + 9544;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26240, ctx.r25.u32);
	// lwz r31,364(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 364);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82225560
	if (ctx.cr6.eq) goto loc_82225560;
loc_82225538:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,572(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
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
	ctx.lr = 0x82225558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82225538
	if (!ctx.cr6.eq) goto loc_82225538;
loc_82225560:
	// bl 0x820a2ac0
	ctx.lr = 0x82225564;
	sub_820A2AC0(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26244, ctx.r25.u32);
	// lwz r11,1488(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// beq cr6,0x82225588
	if (ctx.cr6.eq) goto loc_82225588;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,1488(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1488, ctx.r11.u32);
loc_82225588:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822255c4
	if (ctx.cr6.eq) goto loc_822255C4;
loc_82225590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82095900
	ctx.lr = 0x82225598;
	sub_82095900(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822255A4;
	sub_82080000(ctx, base);
	// lwz r11,1488(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1488);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822255bc
	if (ctx.cr6.eq) goto loc_822255BC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,1488(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1488, ctx.r11.u32);
loc_822255BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82225590
	if (!ctx.cr6.eq) goto loc_82225590;
loc_822255C4:
	// bl 0x8209c5c0
	ctx.lr = 0x822255C8;
	sub_8209C5C0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r29,r11,-15552
	ctx.r29.s64 = ctx.r11.s64 + -15552;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r25,26236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26236, ctx.r25.u32);
loc_822255E4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225614
	if (ctx.cr6.eq) goto loc_82225614;
	// bl 0x82172d60
	ctx.lr = 0x822255F4;
	sub_82172D60(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225614
	if (ctx.cr6.eq) goto loc_82225614;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82225614:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822255e4
	if (!ctx.cr0.eq) goto loc_822255E4;
	// li r30,12
	ctx.r30.s64 = 12;
	// addi r31,r29,64
	ctx.r31.s64 = ctx.r29.s64 + 64;
loc_82225628:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225658
	if (ctx.cr6.eq) goto loc_82225658;
	// bl 0x82172d60
	ctx.lr = 0x82225638;
	sub_82172D60(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225658
	if (ctx.cr6.eq) goto loc_82225658;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82225658:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82225628
	if (!ctx.cr0.eq) goto loc_82225628;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225678
	if (ctx.cr6.eq) goto loc_82225678;
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x82246e18
	ctx.lr = 0x82225678;
	sub_82246E18(ctx, base);
loc_82225678:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,26292(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26292, ctx.r25.u32);
	// stw r25,26296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26296, ctx.r25.u32);
	// bl 0x8218e548
	ctx.lr = 0x82225694;
	sub_8218E548(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// addi r31,r11,-16112
	ctx.r31.s64 = ctx.r11.s64 + -16112;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26300(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26300, ctx.r25.u32);
	// lbz r6,265(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 265);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822256d4
	if (ctx.cr6.eq) goto loc_822256D4;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822256cc
	if (ctx.cr6.eq) goto loc_822256CC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822256CC;
	sub_82080000(ctx, base);
loc_822256CC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r25.u32);
loc_822256D4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r25.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r25,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r25.u32);
	// beq cr6,0x822256f8
	if (ctx.cr6.eq) goto loc_822256F8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x822256F8;
	sub_82246E18(ctx, base);
loc_822256F8:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,26304(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26304, ctx.r25.u32);
	// stw r25,26224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26224, ctx.r25.u32);
	// bl 0x8210cfc8
	ctx.lr = 0x82225714;
	sub_8210CFC8(ctx, base);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26220(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26220, ctx.r25.u32);
	// bl 0x821605c0
	ctx.lr = 0x82225724;
	sub_821605C0(ctx, base);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,26232(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26232, ctx.r25.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82225748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,26228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26228, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8222576C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r31,r11,-15440
	ctx.r31.s64 = ctx.r11.s64 + -15440;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26252, ctx.r25.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225798
	if (ctx.cr6.eq) goto loc_82225798;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82225798;
	sub_82080000(ctx, base);
loc_82225798:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822257b0
	if (ctx.cr6.eq) goto loc_822257B0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822257B0;
	sub_82080000(ctx, base);
loc_822257B0:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26288, ctx.r25.u32);
	// bl 0x820de8c8
	ctx.lr = 0x822257C0;
	sub_820DE8C8(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r8,-16888
	ctx.r3.s64 = ctx.r8.s64 + -16888;
	// stw r25,26260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26260, ctx.r25.u32);
	// lwz r11,-16888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16888);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822257E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26308(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26308, ctx.r25.u32);
	// bl 0x82221568
	ctx.lr = 0x822257F8;
	sub_82221568(ctx, base);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26312(r5)
	PPC_STORE_U32(ctx.r5.u32 + 26312, ctx.r25.u32);
	// bl 0x82227550
	ctx.lr = 0x82225808;
	sub_82227550(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26284(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26284, ctx.r25.u32);
	// lwz r11,26320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225830
	if (ctx.cr6.eq) goto loc_82225830;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82225830;
	sub_82080000(ctx, base);
loc_82225830:
	// stw r25,26320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26320, ctx.r25.u32);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r3,-27096(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82225844;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82225850
	if (!ctx.cr6.eq) goto loc_82225850;
	// bl 0x821b3000
	ctx.lr = 0x82225850;
	sub_821B3000(ctx, base);
loc_82225850:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225864
	if (ctx.cr6.eq) goto loc_82225864;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82225864:
	// bl 0x821b5908
	ctx.lr = 0x82225868;
	sub_821B5908(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,26316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26316, ctx.r25.u32);
	// lwz r31,-25864(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25864);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82225898
	if (ctx.cr6.eq) goto loc_82225898;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230a7d0
	ctx.lr = 0x8222588C;
	sub_8230A7D0(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82225898;
	sub_82080000(ctx, base);
loc_82225898:
	// bl 0x82307b48
	ctx.lr = 0x8222589C;
	sub_82307B48(ctx, base);
	// lwz r3,1048(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1048);
	// bl 0x82246e18
	ctx.lr = 0x822258A4;
	sub_82246E18(ctx, base);
	// bl 0x82310648
	ctx.lr = 0x822258A8;
	sub_82310648(ctx, base);
	// bl 0x822b13f8
	ctx.lr = 0x822258AC;
	sub_822B13F8(ctx, base);
	// lwz r11,1176(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822258c4
	if (ctx.cr6.eq) goto loc_822258C4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822258C4;
	sub_82080000(ctx, base);
loc_822258C4:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r25,1176(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1176, ctx.r25.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,26216(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26216, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822258E0"))) PPC_WEAK_FUNC(sub_822258E0);
PPC_FUNC_IMPL(__imp__sub_822258E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x822258E8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x821b1d70
	ctx.lr = 0x822258F8;
	sub_821B1D70(ctx, base);
	// bl 0x82308d98
	ctx.lr = 0x822258FC;
	sub_82308D98(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,31376
	ctx.r27.s64 = ctx.r11.s64 + 31376;
	// stb r30,971(r26)
	PPC_STORE_U8(ctx.r26.u32 + 971, ctx.r30.u8);
	// lfs f31,48(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,976(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 976, temp.u32);
	// bl 0x8230b140
	ctx.lr = 0x82225918;
	sub_8230B140(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r31,r9,-15440
	ctx.r31.s64 = ctx.r9.s64 + -15440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r30,-15440(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15440, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x82225974;
	sub_8233EAF0(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x8233eaf0
	ctx.lr = 0x82225984;
	sub_8233EAF0(ctx, base);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r9,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r9.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stb r30,668(r31)
	PPC_STORE_U8(ctx.r31.u32 + 668, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// stw r30,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r30.u32);
	// stw r10,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r10.u32);
	// stw r31,26288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26288, ctx.r31.u32);
	// addi r31,r11,-14440
	ctx.r31.s64 = ctx.r11.s64 + -14440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822272f8
	ctx.lr = 0x822259E0;
	sub_822272F8(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r28,r31,256
	ctx.r28.s64 = ctx.r31.s64 + 256;
loc_822259E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821bc3b8
	ctx.lr = 0x822259F0;
	sub_821BC3B8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
	// bge 0x822259e8
	if (!ctx.cr0.lt) goto loc_822259E8;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stfs f31,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// lis r29,-32179
	ctx.r29.s64 = -2108882944;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r28,r29,-29208
	ctx.r28.s64 = ctx.r29.s64 + -29208;
	// stw r31,26284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26284, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b0320
	ctx.lr = 0x82225A20;
	sub_821B0320(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// addi r11,r11,-22120
	ctx.r11.s64 = ctx.r11.s64 + -22120;
	// addi r31,r8,31216
	ctx.r31.s64 = ctx.r8.s64 + 31216;
	// stw r11,-29208(r29)
	PPC_STORE_U32(ctx.r29.u32 + -29208, ctx.r11.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,26228(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26228, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821604c0
	ctx.lr = 0x82225A48;
	sub_821604C0(ctx, base);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lis r6,-32179
	ctx.r6.s64 = -2108882944;
	// addi r31,r6,20000
	ctx.r31.s64 = ctx.r6.s64 + 20000;
	// stw r11,26232(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26232, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210cdb0
	ctx.lr = 0x82225A64;
	sub_8210CDB0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r3,r5,296
	ctx.r3.u64 = ctx.r5.u64 | 296;
	// ori r8,r4,300
	ctx.r8.u64 = ctx.r4.u64 | 300;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r30,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u32);
	// addi r3,r9,2136
	ctx.r3.s64 = ctx.r9.s64 + 2136;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82225A98;
	sub_8233EAF0(ctx, base);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r5,-32180
	ctx.r5.s64 = -2108948480;
	// addi r10,r10,-17347
	ctx.r10.s64 = ctx.r10.s64 + -17347;
	// stw r31,26220(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26220, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r10,26224(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26224, ctx.r10.u32);
	// addi r31,r5,9544
	ctx.r31.s64 = ctx.r5.s64 + 9544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a2960
	ctx.lr = 0x82225AC4;
	sub_820A2960(ctx, base);
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// lis r3,-32180
	ctx.r3.s64 = -2108948480;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r3,r3,15640
	ctx.r3.s64 = ctx.r3.s64 + 15640;
	// stw r31,26244(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26244, ctx.r31.u32);
	// bl 0x82088c78
	ctx.lr = 0x82225ADC;
	sub_82088C78(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r3,r9,15352
	ctx.r3.s64 = ctx.r9.s64 + 15352;
	// stw r11,26236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26236, ctx.r11.u32);
	// bl 0x82097470
	ctx.lr = 0x82225AF4;
	sub_82097470(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r31,r11,-26364
	ctx.r31.s64 = ctx.r11.s64 + -26364;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,26240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26240, ctx.r3.u32);
	// li r3,68
	ctx.r3.s64 = 68;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x82082030
	ctx.lr = 0x82225B20;
	sub_82082030(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82225b38
	goto loc_82225B38;
loc_82225B34:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82225B38:
	// stwx r30,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82225b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82225B34;
	// li r11,17
	ctx.r11.s64 = 17;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82225B70;
	sub_82305000(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// addi r28,r29,-7224
	ctx.r28.s64 = ctx.r29.s64 + -7224;
	// stw r31,26248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26248, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821752a8
	ctx.lr = 0x82225B88;
	sub_821752A8(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// addi r11,r11,-22112
	ctx.r11.s64 = ctx.r11.s64 + -22112;
	// addi r3,r8,-21792
	ctx.r3.s64 = ctx.r8.s64 + -21792;
	// stw r11,-7224(r29)
	PPC_STORE_U32(ctx.r29.u32 + -7224, ctx.r11.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,26252(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26252, ctx.r28.u32);
	// bl 0x820de188
	ctx.lr = 0x82225BAC;
	sub_820DE188(ctx, base);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// addi r3,r6,6348
	ctx.r3.s64 = ctx.r6.s64 + 6348;
	// stw r11,26256(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26256, ctx.r11.u32);
	// bl 0x820de7c8
	ctx.lr = 0x82225BC4;
	sub_820DE7C8(ctx, base);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// lis r31,-32181
	ctx.r31.s64 = -2109014016;
	// addi r29,r31,-18000
	ctx.r29.s64 = ctx.r31.s64 + -18000;
	// stw r3,26260(r5)
	PPC_STORE_U32(ctx.r5.u32 + 26260, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f26d0
	ctx.lr = 0x82225BDC;
	sub_820F26D0(ctx, base);
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,-31032
	ctx.r11.s64 = ctx.r11.s64 + -31032;
	// stw r11,-18000(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18000, ctx.r11.u32);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// stw r29,26264(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26264, ctx.r29.u32);
	// addi r29,r11,-26328
	ctx.r29.s64 = ctx.r11.s64 + -26328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8217c9b8
	ctx.lr = 0x82225C04;
	sub_8217C9B8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1016
	ctx.r3.s64 = 1016;
	// bl 0x82082030
	ctx.lr = 0x82225C18;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225c54
	if (ctx.cr6.eq) goto loc_82225C54;
	// bl 0x82154068
	ctx.lr = 0x82225C28;
	sub_82154068(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f0,88(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,-29156
	ctx.r9.s64 = ctx.r11.s64 + -29156;
	// lfs f13,40(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stw r10,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r10.u32);
	// stfs f13,380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82225c58
	goto loc_82225C58;
loc_82225C54:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82225C58:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,8232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8232, ctx.r11.u32);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r3,r9,4536
	ctx.r3.s64 = ctx.r9.s64 + 4536;
	// stw r29,26268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26268, ctx.r29.u32);
	// bl 0x821d9220
	ctx.lr = 0x82225C70;
	sub_821D9220(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r29,r11,-13936
	ctx.r29.s64 = ctx.r11.s64 + -13936;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r11,26272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26272, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82225CA8;
	sub_82305000(ctx, base);
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82225CB4:
	// stw r30,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
	// stw r30,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
	// stw r30,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
	// stwu r30,72(r11)
	ea = 72 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82225cb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82225CB4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r30,18452(r29)
	PPC_STORE_U32(ctx.r29.u32 + 18452, ctx.r30.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r30,18456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 18456, ctx.r30.u32);
	// addi r31,r11,-13960
	ctx.r31.s64 = ctx.r11.s64 + -13960;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r29,26276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26276, ctx.r29.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r9,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r9.u8);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x82082030
	ctx.lr = 0x82225D28;
	sub_82082030(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x82225d3c
	if (!ctx.cr6.gt) goto loc_82225D3C;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82225D3C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82225d64
	if (ctx.cr6.eq) goto loc_82225D64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82225D60;
	sub_8233E4E0(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82225D64:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225d84
	if (ctx.cr6.eq) goto loc_82225D84;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82225d84
	if (ctx.cr6.eq) goto loc_82225D84;
	// addi r4,r10,-16
	ctx.r4.s64 = ctx.r10.s64 + -16;
	// lwz r3,-8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82225D84;
	sub_82080000(ctx, base);
loc_82225D84:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// addi r28,r29,-16888
	ctx.r28.s64 = ctx.r29.s64 + -16888;
	// stw r31,26280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26280, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821cc7f0
	ctx.lr = 0x82225DA8;
	sub_821CC7F0(ctx, base);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r8,-17184
	ctx.r11.s64 = ctx.r8.s64 + -17184;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r30,-17184(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17184, ctx.r30.u32);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// stw r10,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// addi r10,r9,-25088
	ctx.r10.s64 = ctx.r9.s64 + -25088;
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,-16888(r29)
	PPC_STORE_U32(ctx.r29.u32 + -16888, ctx.r10.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r30.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r30,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r30.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r30,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r30.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r30,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r30.u32);
	// stw r11,26312(r5)
	PPC_STORE_U32(ctx.r5.u32 + 26312, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r28,26308(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26308, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// li r3,416
	ctx.r3.s64 = 416;
	// stw r9,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r9.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r30,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r30.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 + 264;
	// bl 0x82082030
	ctx.lr = 0x82225E34;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225e4c
	if (ctx.cr6.eq) goto loc_82225E4C;
	// bl 0x82086340
	ctx.lr = 0x82225E40;
	sub_82086340(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,26328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26328, ctx.r3.u32);
	// b 0x82225e58
	goto loc_82225E58;
loc_82225E4C:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,26328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26328, ctx.r30.u32);
loc_82225E58:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r29,r11,-20656
	ctx.r29.s64 = ctx.r11.s64 + -20656;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c4300
	ctx.lr = 0x82225E68;
	sub_821C4300(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// stb r30,3304(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3304, ctx.r30.u8);
	// addi r31,r11,-15552
	ctx.r31.s64 = ctx.r11.s64 + -15552;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r29,26324(r5)
	PPC_STORE_U32(ctx.r5.u32 + 26324, ctx.r29.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82225EDC;
	sub_82305000(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82225EF8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82225ef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82225EF8;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// addi r11,r11,-17348
	ctx.r11.s64 = ctx.r11.s64 + -17348;
	// stw r31,26292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26292, ctx.r31.u32);
	// addi r3,r8,-15656
	ctx.r3.s64 = ctx.r8.s64 + -15656;
	// stw r11,26296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26296, ctx.r11.u32);
	// bl 0x8218e408
	ctx.lr = 0x82225F24;
	sub_8218E408(ctx, base);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// addi r3,r6,-16112
	ctx.r3.s64 = ctx.r6.s64 + -16112;
	// stw r11,26300(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26300, ctx.r11.u32);
	// bl 0x82152af0
	ctx.lr = 0x82225F3C;
	sub_82152AF0(ctx, base);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,26304(r5)
	PPC_STORE_U32(ctx.r5.u32 + 26304, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225F58"))) PPC_WEAK_FUNC(sub_82225F58);
PPC_FUNC_IMPL(__imp__sub_82225F58) {
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
	// bl 0x82175e58
	ctx.lr = 0x82225F78;
	sub_82175E58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225f98
	if (ctx.cr6.eq) goto loc_82225F98;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82225f98
	if (ctx.cr6.eq) goto loc_82225F98;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82225F98;
	sub_82080000(ctx, base);
loc_82225F98:
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

__attribute__((alias("__imp__sub_82225FB4"))) PPC_WEAK_FUNC(sub_82225FB4);
PPC_FUNC_IMPL(__imp__sub_82225FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82225FB8"))) PPC_WEAK_FUNC(sub_82225FB8);
PPC_FUNC_IMPL(__imp__sub_82225FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82225FC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82082030
	ctx.lr = 0x82225FD8;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq cr6,0x8222603c
	if (ctx.cr6.eq) goto loc_8222603C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// std r29,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r29.u64);
	// std r29,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r29.u64);
	// std r29,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r29.u64);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// bl 0x82247340
	ctx.lr = 0x82226018;
	sub_82247340(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ld r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// ori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 | 1;
	// std r29,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r29.u64);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// stw r31,26320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26320, ctx.r31.u32);
	// std r7,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r7.u64);
	// b 0x82226048
	goto loc_82226048;
loc_8222603C:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,26320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26320, ctx.r29.u32);
loc_82226048:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8233c800
	ctx.lr = 0x82226050;
	sub_8233C800(ctx, base);
	// bl 0x82247330
	ctx.lr = 0x82226054;
	sub_82247330(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r27,r11,22200
	ctx.r27.s64 = ctx.r11.s64 + 22200;
	// stw r3,26332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26332, ctx.r3.u32);
	// lbz r9,968(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 968);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222607c
	if (ctx.cr6.eq) goto loc_8222607C;
loc_82226070:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8222607C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-17344
	ctx.r31.s64 = ctx.r11.s64 + -17344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b57d8
	ctx.lr = 0x8222608C;
	sub_821B57D8(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,26316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26316, ctx.r31.u32);
	// bl 0x821b30d8
	ctx.lr = 0x8222609C;
	sub_821B30D8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82082030
	ctx.lr = 0x822260B0;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822260cc
	if (ctx.cr6.eq) goto loc_822260CC;
	// bl 0x8234f138
	ctx.lr = 0x822260C0;
	sub_8234F138(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// stw r31,-25860(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25860, ctx.r31.u32);
	// b 0x822260d8
	goto loc_822260D8;
loc_822260CC:
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-25860(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25860, ctx.r29.u32);
loc_822260D8:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-15440
	ctx.r9.s64 = ctx.r10.s64 + -15440;
	// stw r11,560(r9)
	PPC_STORE_U32(ctx.r9.u32 + 560, ctx.r11.u32);
	// bl 0x821baa68
	ctx.lr = 0x822260EC;
	sub_821BAA68(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82226070
	if (ctx.cr6.eq) goto loc_82226070;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r28,-32197
	ctx.r28.s64 = -2110062592;
	// addi r31,r11,-7224
	ctx.r31.s64 = ctx.r11.s64 + -7224;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r31,16660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16660, ctx.r31.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// ori r30,r10,32768
	ctx.r30.u64 = ctx.r10.u64 | 32768;
	// lwz r11,-27100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27100);
	// addi r6,r9,-27824
	ctx.r6.s64 = ctx.r9.s64 + -27824;
	// stb r29,16520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16520, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16512
	ctx.r3.s64 = ctx.r31.s64 + 16512;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82081680
	ctx.lr = 0x82226130;
	sub_82081680(ctx, base);
	// stb r29,16704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16704, ctx.r29.u8);
	// lwz r11,-27100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27100);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r6,r8,-27800
	ctx.r6.s64 = ctx.r8.s64 + -27800;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16696
	ctx.r3.s64 = ctx.r31.s64 + 16696;
	// bl 0x82081680
	ctx.lr = 0x82226154;
	sub_82081680(ctx, base);
	// clrlwi r7,r26,24
	ctx.r7.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82226170
	if (ctx.cr6.eq) goto loc_82226170;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82226174
	if (!ctx.cr6.eq) goto loc_82226174;
loc_82226170:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82226174:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226070
	if (ctx.cr6.eq) goto loc_82226070;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,4800
	ctx.r5.s64 = 4800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r29.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r29,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r29.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r29,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r29.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r29,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r29.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r29,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r29.u32);
	// stw r29,4904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4904, ctx.r29.u32);
	// stb r10,4896(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4896, ctx.r10.u8);
	// bl 0x8233eaf0
	ctx.lr = 0x822261D0;
	sub_8233EAF0(ctx, base);
	// bl 0x82189470
	ctx.lr = 0x822261D4;
	sub_82189470(ctx, base);
	// bl 0x821042e8
	ctx.lr = 0x822261D8;
	sub_821042E8(ctx, base);
	// bl 0x8221fd60
	ctx.lr = 0x822261DC;
	sub_8221FD60(ctx, base);
	// lbz r10,968(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 968);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82226070
	if (!ctx.cr6.eq) goto loc_82226070;
	// bl 0x8209ce80
	ctx.lr = 0x822261EC;
	sub_8209CE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82226200
	if (!ctx.cr6.eq) goto loc_82226200;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82226208
	goto loc_82226208;
loc_82226200:
	// bl 0x82097c38
	ctx.lr = 0x82226204;
	sub_82097C38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82226208:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226070
	if (ctx.cr6.eq) goto loc_82226070;
	// bl 0x821b22b8
	ctx.lr = 0x82226218;
	sub_821B22B8(ctx, base);
	// lbz r11,968(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82226070
	if (!ctx.cr6.eq) goto loc_82226070;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,26328(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82226260
	if (ctx.cr6.eq) goto loc_82226260;
	// stb r29,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r29.u8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,-27100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27100);
	// addi r3,r31,388
	ctx.r3.s64 = ctx.r31.s64 + 388;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,8192
	ctx.r5.s64 = ctx.r11.s64 + 8192;
	// addi r6,r10,4692
	ctx.r6.s64 = ctx.r10.s64 + 4692;
	// bl 0x82081680
	ctx.lr = 0x82226254;
	sub_82081680(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// bl 0x82247090
	ctx.lr = 0x82226260;
	sub_82247090(ctx, base);
loc_82226260:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,18544
	ctx.r3.s64 = ctx.r11.s64 + 18544;
	// bl 0x8236a2d8
	ctx.lr = 0x8222626C;
	sub_8236A2D8(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r3,r10,18488
	ctx.r3.s64 = ctx.r10.s64 + 18488;
	// bl 0x8236a308
	ctx.lr = 0x82226278;
	sub_8236A308(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r3,r9,-14624
	ctx.r3.s64 = ctx.r9.s64 + -14624;
	// bl 0x8236a2e8
	ctx.lr = 0x82226284;
	sub_8236A2E8(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r3,r8,-14624
	ctx.r3.s64 = ctx.r8.s64 + -14624;
	// bl 0x8236a318
	ctx.lr = 0x82226290;
	sub_8236A318(ctx, base);
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// addi r3,r7,18608
	ctx.r3.s64 = ctx.r7.s64 + 18608;
	// bl 0x8236a2f8
	ctx.lr = 0x8222629C;
	sub_8236A2F8(ctx, base);
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// addi r3,r6,18768
	ctx.r3.s64 = ctx.r6.s64 + 18768;
	// bl 0x8236a328
	ctx.lr = 0x822262A8;
	sub_8236A328(ctx, base);
	// bl 0x8230b030
	ctx.lr = 0x822262AC;
	sub_8230B030(ctx, base);
	// bl 0x8230a158
	ctx.lr = 0x822262B0;
	sub_8230A158(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822262BC"))) PPC_WEAK_FUNC(sub_822262BC);
PPC_FUNC_IMPL(__imp__sub_822262BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822262C0"))) PPC_WEAK_FUNC(sub_822262C0);
PPC_FUNC_IMPL(__imp__sub_822262C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x822262C8;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x8233fa28
	ctx.lr = 0x822262D0;
	__savefpr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// addi r31,r10,22200
	ctx.r31.s64 = ctx.r10.s64 + 22200;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r25,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r25.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82226328
	if (!ctx.cr6.eq) goto loc_82226328;
	// stw r11,1516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1516, ctx.r11.u32);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// stb r25,1500(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1500, ctx.r25.u8);
	// addi r3,r11,1492
	ctx.r3.s64 = ctx.r11.s64 + 1492;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r9,4916
	ctx.r6.s64 = ctx.r9.s64 + 4916;
	// lwz r11,-27100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27100);
	// addi r5,r11,16384
	ctx.r5.s64 = ctx.r11.s64 + 16384;
	// bl 0x82081680
	ctx.lr = 0x82226328;
	sub_82081680(ctx, base);
loc_82226328:
	// bl 0x82226798
	ctx.lr = 0x8222632C;
	sub_82226798(ctx, base);
	// bl 0x8224af38
	ctx.lr = 0x82226330;
	sub_8224AF38(ctx, base);
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x82247340
	ctx.lr = 0x82226338;
	sub_82247340(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r10,936(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// std r25,944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 944, ctx.r25.u64);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// ld r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 928);
	// std r11,952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 952, ctx.r11.u64);
	// bl 0x821afdc0
	ctx.lr = 0x8222635C;
	sub_821AFDC0(ctx, base);
	// addi r3,r31,1000
	ctx.r3.s64 = ctx.r31.s64 + 1000;
	// bl 0x82247340
	ctx.lr = 0x82226364;
	sub_82247340(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r10,1008(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// std r25,1016(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1016, ctx.r25.u64);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r10.u32);
	// ld r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1000);
	// std r11,1024(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1024, ctx.r11.u64);
	// bl 0x821afdc0
	ctx.lr = 0x82226388;
	sub_821AFDC0(ctx, base);
	// bl 0x82224f30
	ctx.lr = 0x8222638C;
	sub_82224F30(ctx, base);
	// lbz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 968);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82226780
	if (!ctx.cr6.eq) goto loc_82226780;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,31376
	ctx.r7.s64 = ctx.r11.s64 + 31376;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r24,1
	ctx.r24.s64 = 1;
	// lfs f25,796(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 796);
	ctx.f25.f64 = double(temp.f32);
	// ori r27,r8,32768
	ctx.r27.u64 = ctx.r8.u64 | 32768;
	// lfs f28,424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 424);
	ctx.f28.f64 = double(temp.f32);
	// lis r22,-32178
	ctx.r22.s64 = -2108817408;
	// lfs f27,252(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 252);
	ctx.f27.f64 = double(temp.f32);
	// lis r18,-32197
	ctx.r18.s64 = -2110062592;
	// lfs f29,80(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// lis r19,-32181
	ctx.r19.s64 = -2109014016;
	// lfs f24,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f24.f64 = double(temp.f32);
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// lfs f26,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f26.f64 = double(temp.f32);
	// addi r20,r9,20000
	ctx.r20.s64 = ctx.r9.s64 + 20000;
	// addi r21,r10,-20656
	ctx.r21.s64 = ctx.r10.s64 + -20656;
	// addi r23,r11,-7224
	ctx.r23.s64 = ctx.r11.s64 + -7224;
loc_822263F0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stb r24,1044(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1044, ctx.r24.u8);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82226430
	if (ctx.cr6.eq) goto loc_82226430;
	// lbz r10,16537(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 16537);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82226430
	if (!ctx.cr6.eq) goto loc_82226430;
	// lbz r10,16537(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 16537);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82226430
	if (!ctx.cr6.eq) goto loc_82226430;
	// stb r24,16537(r23)
	PPC_STORE_U8(ctx.r23.u32 + 16537, ctx.r24.u8);
	// addi r3,r23,16512
	ctx.r3.s64 = ctx.r23.s64 + 16512;
	// bl 0x8216bab0
	ctx.lr = 0x82226430;
	sub_8216BAB0(ctx, base);
loc_82226430:
	// fcmpu cr6,f31,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f24.f64);
	// ble cr6,0x82226644
	if (!ctx.cr6.gt) goto loc_82226644;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r27.u32);
	// lfs f13,980(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,980(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x821c4c68
	ctx.lr = 0x8222645C;
	sub_821C4C68(ctx, base);
	// bl 0x82226bf8
	ctx.lr = 0x82226460;
	sub_82226BF8(ctx, base);
	// stw r24,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bl 0x821b0918
	ctx.lr = 0x82226470;
	sub_821B0918(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// bl 0x82160c58
	ctx.lr = 0x82226480;
	sub_82160C58(ctx, base);
	// stw r27,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821c4720
	ctx.lr = 0x82226490;
	sub_821C4720(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r6,984(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// lfs f3,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// lfs f2,980(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820dd7b0
	ctx.lr = 0x822264AC;
	sub_820DD7B0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// bl 0x820ddeb8
	ctx.lr = 0x822264BC;
	sub_820DDEB8(ctx, base);
	// bl 0x82227278
	ctx.lr = 0x822264C0;
	sub_82227278(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// lwz r29,26328(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26328);
	// lfs f30,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f30.f64 = double(temp.f32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822264D8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226530
	if (ctx.cr6.eq) goto loc_82226530;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82084078
	ctx.lr = 0x822264EC;
	sub_82084078(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226530
	if (ctx.cr6.eq) goto loc_82226530;
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r9,r10,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82226530
	if (!ctx.cr6.eq) goto loc_82226530;
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82226530
	if (ctx.cr6.eq) goto loc_82226530;
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r9.u32);
	// bl 0x82086510
	ctx.lr = 0x82226530;
	sub_82086510(ctx, base);
loc_82226530:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x822264d8
	if (ctx.cr6.lt) goto loc_822264D8;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// bl 0x821b5da8
	ctx.lr = 0x8222654C;
	sub_821B5DA8(ctx, base);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// bl 0x820dd200
	ctx.lr = 0x82226558;
	sub_820DD200(ctx, base);
	// bl 0x820e0478
	ctx.lr = 0x8222655C;
	sub_820E0478(ctx, base);
	// bl 0x82226bf8
	ctx.lr = 0x82226560;
	sub_82226BF8(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// bl 0x820dd5c0
	ctx.lr = 0x82226570;
	sub_820DD5C0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821030d8
	ctx.lr = 0x82226578;
	sub_821030D8(ctx, base);
	// li r10,8192
	ctx.r10.s64 = 8192;
	// stb r25,1044(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1044, ctx.r25.u8);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r10,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r10.u32);
	// bl 0x821bea50
	ctx.lr = 0x8222658C;
	sub_821BEA50(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// bl 0x82177d80
	ctx.lr = 0x82226598;
	sub_82177D80(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821b2b88
	ctx.lr = 0x822265A0;
	sub_821B2B88(ctx, base);
	// li r11,128
	ctx.r11.s64 = 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// bl 0x821048e8
	ctx.lr = 0x822265B0;
	sub_821048E8(ctx, base);
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822265fc
	if (ctx.cr6.eq) goto loc_822265FC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stb r25,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r25.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822265e8
	if (ctx.cr6.eq) goto loc_822265E8;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822265e8
	if (ctx.cr6.eq) goto loc_822265E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// bl 0x820daf68
	ctx.lr = 0x822265E8;
	sub_820DAF68(ctx, base);
loc_822265E8:
	// lwz r3,-26328(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + -26328);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822265FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822265FC:
	// bl 0x821b24e8
	ctx.lr = 0x82226600;
	sub_821B24E8(ctx, base);
	// lfs f0,1052(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,980(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f1,1052(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1052, temp.u32);
	// bl 0x821cd9f0
	ctx.lr = 0x82226614;
	sub_821CD9F0(ctx, base);
	// bl 0x82221888
	ctx.lr = 0x82226618;
	sub_82221888(ctx, base);
	// lbz r11,32(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226648
	if (ctx.cr6.eq) goto loc_82226648;
	// bl 0x820cdf68
	ctx.lr = 0x82226628;
	sub_820CDF68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8236f6f8
	ctx.lr = 0x82226630;
	sub_8236F6F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82226648
	if (ctx.cr6.eq) goto loc_82226648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236f700
	ctx.lr = 0x82226640;
	sub_8236F700(ctx, base);
	// b 0x82226648
	goto loc_82226648;
loc_82226644:
	// bl 0x82227278
	ctx.lr = 0x82226648;
	sub_82227278(ctx, base);
loc_82226648:
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// bl 0x821b5da8
	ctx.lr = 0x82226654;
	sub_821B5DA8(ctx, base);
	// bl 0x82226ca8
	ctx.lr = 0x82226658;
	sub_82226CA8(ctx, base);
	// bl 0x82221188
	ctx.lr = 0x8222665C;
	sub_82221188(ctx, base);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// lfs f1,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// bl 0x82089038
	ctx.lr = 0x8222666C;
	sub_82089038(ctx, base);
	// bl 0x822212e8
	ctx.lr = 0x82226670;
	sub_822212E8(ctx, base);
	// bl 0x82082110
	ctx.lr = 0x82226674;
	sub_82082110(ctx, base);
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r30,1016(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1016);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// beq cr6,0x822266a8
	if (ctx.cr6.eq) goto loc_822266A8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82247340
	ctx.lr = 0x82226694;
	sub_82247340(ctx, base);
	// ld r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1024);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_822266A8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,292
	ctx.r10.u64 = ctx.r11.u64 | 292;
	// lbzx r9,r20,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822266e4
	if (!ctx.cr6.eq) goto loc_822266E4;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-27088(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + -27088);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f25
	ctx.cr6.compare(ctx.f11.f64, ctx.f25.f64);
	// ble cr6,0x822266e4
	if (!ctx.cr6.gt) goto loc_822266E4;
	// lfs f0,988(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// b 0x822266ec
	goto loc_822266EC;
loc_822266E4:
	// lfs f0,988(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
loc_822266EC:
	// stfs f0,988(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82226700
	if (!ctx.cr6.gt) goto loc_82226700;
	// stfs f28,988(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// b 0x8222670c
	goto loc_8222670C;
loc_82226700:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x8222670c
	if (!ctx.cr6.lt) goto loc_8222670C;
	// stfs f26,988(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
loc_8222670C:
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// bl 0x821afdc0
	ctx.lr = 0x82226714;
	sub_821AFDC0(ctx, base);
	// bl 0x82224f30
	ctx.lr = 0x82226718;
	sub_82224F30(ctx, base);
	// lwz r30,26320(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 26320);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// blt cr6,0x82226768
	if (ctx.cr6.lt) goto loc_82226768;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821afe48
	ctx.lr = 0x82226740;
	sub_821AFE48(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x821afdc0
	ctx.lr = 0x82226764;
	sub_821AFDC0(ctx, base);
	// stw r25,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r25.u32);
loc_82226768:
	// lwz r10,984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// lbz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 968);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r10.u32);
	// beq cr6,0x822263f0
	if (ctx.cr6.eq) goto loc_822263F0;
loc_82226780:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821b0918
	ctx.lr = 0x82226788;
	sub_821B0918(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x8233fa74
	ctx.lr = 0x82226794;
	__restfpr_24(ctx, base);
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226798"))) PPC_WEAK_FUNC(sub_82226798);
PPC_FUNC_IMPL(__imp__sub_82226798) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821b0e28
	ctx.lr = 0x822267C4;
	sub_821B0E28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821b0c18
	ctx.lr = 0x822267D0;
	sub_821B0C18(ctx, base);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82226808
	if (ctx.cr6.eq) goto loc_82226808;
loc_822267E0:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82226808
	if (!ctx.cr6.eq) goto loc_82226808;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82247328
	ctx.lr = 0x822267F8;
	sub_82247328(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822267e0
	if (!ctx.cr6.eq) goto loc_822267E0;
loc_82226808:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-14440
	ctx.r10.s64 = ctx.r11.s64 + -14440;
	// lwz r11,228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r11.u32);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r8,r9,24,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82226850
	if (ctx.cr6.eq) goto loc_82226850;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// stb r11,968(r9)
	PPC_STORE_U8(ctx.r9.u32 + 968, ctx.r11.u8);
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
loc_82226850:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82226868
	if (ctx.cr6.eq) goto loc_82226868;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8222687c
	goto loc_8222687C;
loc_82226868:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
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
loc_8222687C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222689c
	if (!ctx.cr6.eq) goto loc_8222689C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821b0918
	ctx.lr = 0x82226890;
	sub_821B0918(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82247328
	ctx.lr = 0x82226898;
	sub_82247328(ctx, base);
	// b 0x82226850
	goto loc_82226850;
loc_8222689C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821b07f0
	ctx.lr = 0x822268A8;
	sub_821B07F0(ctx, base);
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

__attribute__((alias("__imp__sub_822268BC"))) PPC_WEAK_FUNC(sub_822268BC);
PPC_FUNC_IMPL(__imp__sub_822268BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822268C0"))) PPC_WEAK_FUNC(sub_822268C0);
PPC_FUNC_IMPL(__imp__sub_822268C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x822268C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r31,26340(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26340);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822269e4
	if (ctx.cr6.eq) goto loc_822269E4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_822268F4:
	// bl 0x8233e410
	ctx.lr = 0x822268F8;
	sub_8233E410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82226914
	if (ctx.cr6.eq) goto loc_82226914;
loc_82226900:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8233e410
	ctx.lr = 0x8222690C;
	sub_8233E410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82226900
	if (!ctx.cr6.eq) goto loc_82226900;
loc_82226914:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82226970
	if (!ctx.cr6.eq) goto loc_82226970;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226944
	if (ctx.cr6.eq) goto loc_82226944;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8222693c
	if (ctx.cr6.eq) goto loc_8222693C;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_8222693C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82226944:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822269b8
	if (ctx.cr6.eq) goto loc_822269B8;
loc_82226954:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x822269b8
	if (ctx.cr6.eq) goto loc_822269B8;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82226954
	if (!ctx.cr6.eq) goto loc_82226954;
	// b 0x822269b8
	goto loc_822269B8;
loc_82226970:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222698c
	if (ctx.cr6.eq) goto loc_8222698C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82226984
	if (ctx.cr6.eq) goto loc_82226984;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82226984:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8222698C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822269b8
	if (ctx.cr6.eq) goto loc_822269B8;
loc_8222699C:
	// bl 0x8233e410
	ctx.lr = 0x822269A0;
	sub_8233E410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822269b8
	if (!ctx.cr6.eq) goto loc_822269B8;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222699c
	if (!ctx.cr6.eq) goto loc_8222699C;
loc_822269B8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822269d4
	if (ctx.cr6.eq) goto loc_822269D4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822269d0
	if (ctx.cr6.eq) goto loc_822269D0;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
loc_822269D0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822269D4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822268f4
	if (!ctx.cr6.eq) goto loc_822268F4;
loc_822269E4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822269f4
	if (ctx.cr6.eq) goto loc_822269F4;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r27.u32);
loc_822269F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226A00"))) PPC_WEAK_FUNC(sub_82226A00);
PPC_FUNC_IMPL(__imp__sub_82226A00) {
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
	// bl 0x8224af70
	ctx.lr = 0x82226A14;
	sub_8224AF70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82226a38
	if (!ctx.cr6.eq) goto loc_82226A38;
loc_82226A20:
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
loc_82226A38:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82226A3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82226a3c
	if (!ctx.cr6.eq) goto loc_82226A3C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82082030
	ctx.lr = 0x82226A6C;
	sub_82082030(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,26340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26340, ctx.r3.u32);
	// beq cr6,0x82226a20
	if (ctx.cr6.eq) goto loc_82226A20;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
loc_82226A84:
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
	// bne cr6,0x82226a84
	if (!ctx.cr6.eq) goto loc_82226A84;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822268c0
	ctx.lr = 0x82226AA4;
	sub_822268C0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// stw r3,26344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26344, ctx.r3.u32);
	// blt cr6,0x82226a20
	if (ctx.cr6.lt) goto loc_82226A20;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82226ad0
	if (!ctx.cr6.gt) goto loc_82226AD0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82226AD0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82226AE0;
	sub_82082030(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,26336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26336, ctx.r3.u32);
	// beq cr6,0x82226a20
	if (ctx.cr6.eq) goto loc_82226A20;
	// bl 0x822268c0
	ctx.lr = 0x82226AF4;
	sub_822268C0(ctx, base);
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

__attribute__((alias("__imp__sub_82226B0C"))) PPC_WEAK_FUNC(sub_82226B0C);
PPC_FUNC_IMPL(__imp__sub_82226B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82226B10"))) PPC_WEAK_FUNC(sub_82226B10);
PPC_FUNC_IMPL(__imp__sub_82226B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,26336(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26336);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82226ba0
	if (ctx.cr6.eq) goto loc_82226BA0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r5,26344(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26344);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82226ba0
	if (ctx.cr6.eq) goto loc_82226BA0;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x82226ba0
	if (!ctx.cr6.gt) goto loc_82226BA0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r7,r4,4
	ctx.r7.s64 = ctx.r4.s64 + 4;
	// addi r6,r11,-26532
	ctx.r6.s64 = ctx.r11.s64 + -26532;
loc_82226B4C:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x82226b90
	if (!ctx.cr6.eq) goto loc_82226B90;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82226B64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x82226b88
	if (ctx.cr6.eq) goto loc_82226B88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82226b64
	if (ctx.cr6.eq) goto loc_82226B64;
loc_82226B88:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82226bac
	if (ctx.cr6.eq) goto loc_82226BAC;
loc_82226B90:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82226b4c
	if (ctx.cr6.lt) goto loc_82226B4C;
loc_82226BA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82226BAC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226be8
	if (ctx.cr6.eq) goto loc_82226BE8;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82226be8
	if (!ctx.cr6.lt) goto loc_82226BE8;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_82226BD4:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bne cr6,0x82226bd4
	if (!ctx.cr6.eq) goto loc_82226BD4;
loc_82226BE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82226BF4"))) PPC_WEAK_FUNC(sub_82226BF4);
PPC_FUNC_IMPL(__imp__sub_82226BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82226BF8"))) PPC_WEAK_FUNC(sub_82226BF8);
PPC_FUNC_IMPL(__imp__sub_82226BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82226C00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r28,r11,-18000
	ctx.r28.s64 = ctx.r11.s64 + -18000;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r11,16672(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16672);
	// stw r10,1504(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1504, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226c90
	if (ctx.cr6.eq) goto loc_82226C90;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addi r30,r28,16676
	ctx.r30.s64 = ctx.r28.s64 + 16676;
loc_82226C30:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82226c84
	if (ctx.cr6.eq) goto loc_82226C84;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82226c60
	if (ctx.cr6.eq) goto loc_82226C60;
	// bl 0x820f0fe0
	ctx.lr = 0x82226C54;
	sub_820F0FE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// b 0x82226c70
	goto loc_82226C70;
loc_82226C60:
	// rlwinm r4,r11,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// bl 0x820f1090
	ctx.lr = 0x82226C68;
	sub_820F1090(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,22,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
loc_82226C70:
	// rlwimi r11,r10,0,25,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFF8000007F) | (ctx.r11.u64 & 0x7FFFFF80);
	// rlwimi r11,r10,0,12,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFF000FF);
	// rlwimi r11,r10,0,7,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1E00000) | (ctx.r11.u64 & 0xFFFFFFFFFE1FFFFF);
	// rlwimi r11,r10,0,2,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3C000000) | (ctx.r11.u64 & 0xFFFFFFFFC3FFFFFF);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82226C84:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82226c30
	if (!ctx.cr0.eq) goto loc_82226C30;
loc_82226C90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16672(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16672, ctx.r11.u32);
	// bl 0x820f4d48
	ctx.lr = 0x82226C9C;
	sub_820F4D48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226CA4"))) PPC_WEAK_FUNC(sub_82226CA4);
PPC_FUNC_IMPL(__imp__sub_82226CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82226CA8"))) PPC_WEAK_FUNC(sub_82226CA8);
PPC_FUNC_IMPL(__imp__sub_82226CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82226CB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// stw r11,1504(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1504, ctx.r11.u32);
	// bl 0x82107338
	ctx.lr = 0x82226CC8;
	sub_82107338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152df8
	ctx.lr = 0x82226CD0;
	sub_82152DF8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-16112
	ctx.r30.s64 = ctx.r11.s64 + -16112;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r30,156
	ctx.r28.s64 = ctx.r30.s64 + 156;
loc_82226CE4:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82226d40
	if (ctx.cr6.eq) goto loc_82226D40;
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82226d40
	if (ctx.cr6.eq) goto loc_82226D40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82226D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82226d30
	if (!ctx.cr6.eq) goto loc_82226D30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,416(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// bl 0x82152ea8
	ctx.lr = 0x82226D2C;
	sub_82152EA8(ctx, base);
	// b 0x82226d40
	goto loc_82226D40;
loc_82226D30:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82226d50
	if (ctx.cr6.eq) goto loc_82226D50;
loc_82226D40:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,64
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 64, ctx.xer);
	// blt cr6,0x82226ce4
	if (ctx.cr6.lt) goto loc_82226CE4;
loc_82226D50:
	// bl 0x821536c8
	ctx.lr = 0x82226D54;
	sub_821536C8(ctx, base);
	// bl 0x82153920
	ctx.lr = 0x82226D58;
	sub_82153920(ctx, base);
	// bl 0x8210dd10
	ctx.lr = 0x82226D5C;
	sub_8210DD10(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lwz r11,-7256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-7256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7256, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226D74"))) PPC_WEAK_FUNC(sub_82226D74);
PPC_FUNC_IMPL(__imp__sub_82226D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82226D78"))) PPC_WEAK_FUNC(sub_82226D78);
PPC_FUNC_IMPL(__imp__sub_82226D78) {
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
	ctx.lr = 0x82226D94;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82226da0
	if (!ctx.cr6.eq) goto loc_82226DA0;
	// bl 0x821b3000
	ctx.lr = 0x82226DA0;
	sub_821B3000(ctx, base);
loc_82226DA0:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82226df8
	if (!ctx.cr6.gt) goto loc_82226DF8;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226df8
	if (ctx.cr6.eq) goto loc_82226DF8;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82226df0
	if (!ctx.cr6.eq) goto loc_82226DF0;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,-22340
	ctx.r9.s64 = ctx.r10.s64 + -22340;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
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
loc_82226DF0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82226dfc
	goto loc_82226DFC;
loc_82226DF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82226DFC:
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r10,-29208
	ctx.r31.s64 = ctx.r10.s64 + -29208;
	// beq cr6,0x82226e28
	if (ctx.cr6.eq) goto loc_82226E28;
	// lhz r11,178(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 178);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x82226e28
	if (!ctx.cr6.lt) goto loc_82226E28;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82226e2c
	goto loc_82226E2C;
loc_82226E28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82226E2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226ebc
	if (ctx.cr6.eq) goto loc_82226EBC;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82226ebc
	if (ctx.cr6.eq) goto loc_82226EBC;
	// bl 0x820ddca8
	ctx.lr = 0x82226E48;
	sub_820DDCA8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r11,178(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 178);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x82226e94
	if (!ctx.cr6.lt) goto loc_82226E94;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226e94
	if (ctx.cr6.eq) goto loc_82226E94;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82226e94
	if (ctx.cr6.eq) goto loc_82226E94;
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
loc_82226E94:
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,-22300
	ctx.r9.s64 = ctx.r10.s64 + -22300;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
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
loc_82226EBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82227070
	ctx.lr = 0x82226EC4;
	sub_82227070(ctx, base);
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

__attribute__((alias("__imp__sub_82226ED8"))) PPC_WEAK_FUNC(sub_82226ED8);
PPC_FUNC_IMPL(__imp__sub_82226ED8) {
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
	ctx.lr = 0x82226EF0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82226efc
	if (!ctx.cr6.eq) goto loc_82226EFC;
	// bl 0x821b3000
	ctx.lr = 0x82226EFC;
	sub_821B3000(ctx, base);
loc_82226EFC:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82226f1c
	if (!ctx.cr6.gt) goto loc_82226F1C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226f1c
	if (ctx.cr6.eq) goto loc_82226F1C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82226f20
	goto loc_82226F20;
loc_82226F1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82226F20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226f4c
	if (ctx.cr6.eq) goto loc_82226F4C;
	// lhz r11,178(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 178);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x82226f4c
	if (!ctx.cr6.lt) goto loc_82226F4C;
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
	// b 0x82226f50
	goto loc_82226F50;
loc_82226F4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82226F50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226f78
	if (ctx.cr6.eq) goto loc_82226F78;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82226f78
	if (ctx.cr6.eq) goto loc_82226F78;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82226f7c
	if (!ctx.cr6.eq) goto loc_82226F7C;
loc_82226F78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82226F7C:
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

__attribute__((alias("__imp__sub_82226F90"))) PPC_WEAK_FUNC(sub_82226F90);
PPC_FUNC_IMPL(__imp__sub_82226F90) {
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
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82226FA8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82226fb4
	if (!ctx.cr6.eq) goto loc_82226FB4;
	// bl 0x821b3000
	ctx.lr = 0x82226FB4;
	sub_821B3000(ctx, base);
loc_82226FB4:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82226fd4
	if (!ctx.cr6.gt) goto loc_82226FD4;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226fd4
	if (ctx.cr6.eq) goto loc_82226FD4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82226fd8
	goto loc_82226FD8;
loc_82226FD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82226FD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227004
	if (ctx.cr6.eq) goto loc_82227004;
	// lhz r11,178(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 178);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x82227004
	if (!ctx.cr6.lt) goto loc_82227004;
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
	// b 0x82227008
	goto loc_82227008;
loc_82227004:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82227008:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227040
	if (ctx.cr6.eq) goto loc_82227040;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82227040
	if (ctx.cr6.eq) goto loc_82227040;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82227040
	if (ctx.cr6.eq) goto loc_82227040;
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
loc_82227040:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-17344
	ctx.r10.s64 = ctx.r11.s64 + -17344;
	// lwz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227070"))) PPC_WEAK_FUNC(sub_82227070);
PPC_FUNC_IMPL(__imp__sub_82227070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82227078;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8222708C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82227098
	if (!ctx.cr6.eq) goto loc_82227098;
	// bl 0x821b3000
	ctx.lr = 0x82227098;
	sub_821B3000(ctx, base);
loc_82227098:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822270b8
	if (!ctx.cr6.gt) goto loc_822270B8;
	// lwz r27,40(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822270bc
	if (ctx.cr6.eq) goto loc_822270BC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x822270c0
	goto loc_822270C0;
loc_822270B8:
	// li r27,0
	ctx.r27.s64 = 0;
loc_822270BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822270C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822270ec
	if (ctx.cr6.eq) goto loc_822270EC;
	// lhz r11,178(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 178);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x822270ec
	if (!ctx.cr6.lt) goto loc_822270EC;
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
	// b 0x822270f0
	goto loc_822270F0;
loc_822270EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822270F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222713c
	if (ctx.cr6.eq) goto loc_8222713C;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8222713c
	if (ctx.cr6.eq) goto loc_8222713C;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222713c
	if (ctx.cr6.eq) goto loc_8222713C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222726c
	if (ctx.cr6.eq) goto loc_8222726C;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,-22256
	ctx.r9.s64 = ctx.r10.s64 + -22256;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8222713C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r9,r11,-17344
	ctx.r9.s64 = ctx.r11.s64 + -17344;
	// addi r8,r10,22200
	ctx.r8.s64 = ctx.r10.s64 + 22200;
	// lwz r7,136(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// lwz r29,1504(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1504);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r11,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82227174
	if (!ctx.cr6.eq) goto loc_82227174;
loc_82227168:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82227174:
	// lis r12,2
	ctx.r12.s64 = 131072;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// ori r12,r12,8194
	ctx.r12.u64 = ctx.r12.u64 | 8194;
	// and r11,r29,r12
	ctx.r11.u64 = ctx.r29.u64 & ctx.r12.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222719c
	if (ctx.cr6.eq) goto loc_8222719C;
	// bl 0x82247330
	ctx.lr = 0x82227190;
	sub_82247330(ctx, base);
	// lwz r11,26332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26332);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82227168
	if (ctx.cr6.eq) goto loc_82227168;
loc_8222719C:
	// rlwinm r10,r29,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822271cc
	if (ctx.cr6.eq) goto loc_822271CC;
	// lwz r11,124(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// rlwinm r9,r11,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82227168
	if (ctx.cr6.eq) goto loc_82227168;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82227168
	if (!ctx.cr6.eq) goto loc_82227168;
loc_822271CC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r28,-13569
	ctx.r28.s64 = -889257984;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,-22216
	ctx.r31.s64 = ctx.r11.s64 + -22216;
	// beq cr6,0x822271f0
	if (ctx.cr6.eq) goto loc_822271F0;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822271f0
	if (ctx.cr6.eq) goto loc_822271F0;
	// stw r31,-13570(r28)
	PPC_STORE_U32(ctx.r28.u32 + -13570, ctx.r31.u32);
loc_822271F0:
	// bl 0x82247330
	ctx.lr = 0x822271F4;
	sub_82247330(ctx, base);
	// lwz r11,26332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26332);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x8222721c
	if (ctx.cr6.eq) goto loc_8222721C;
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82227220
	if (!ctx.cr6.eq) goto loc_82227220;
loc_8222721C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82227220:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227248
	if (ctx.cr6.eq) goto loc_82227248;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222726c
	if (ctx.cr6.eq) goto loc_8222726C;
	// stw r31,-13570(r28)
	PPC_STORE_U32(ctx.r28.u32 + -13570, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82227248:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222726c
	if (!ctx.cr6.eq) goto loc_8222726C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222726c
	if (ctx.cr6.eq) goto loc_8222726C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-22172
	ctx.r10.s64 = ctx.r11.s64 + -22172;
	// stw r10,-13570(r28)
	PPC_STORE_U32(ctx.r28.u32 + -13570, ctx.r10.u32);
loc_8222726C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227278"))) PPC_WEAK_FUNC(sub_82227278);
PPC_FUNC_IMPL(__imp__sub_82227278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82227280;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r30,2176(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2176);
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
loc_8222729C:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822272ec
	if (!ctx.cr6.eq) goto loc_822272EC;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823052d8
	ctx.lr = 0x822272B8;
	sub_823052D8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822272c8
	if (!ctx.cr6.eq) goto loc_822272C8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_822272C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823051a8
	ctx.lr = 0x822272D0;
	sub_823051A8(ctx, base);
	// clrlwi r31,r29,24
	ctx.r31.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822272ec
	if (!ctx.cr6.eq) goto loc_822272EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82247328
	ctx.lr = 0x822272E4;
	sub_82247328(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222729c
	if (ctx.cr6.eq) goto loc_8222729C;
loc_822272EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822272F4"))) PPC_WEAK_FUNC(sub_822272F4);
PPC_FUNC_IMPL(__imp__sub_822272F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822272F8"))) PPC_WEAK_FUNC(sub_822272F8);
PPC_FUNC_IMPL(__imp__sub_822272F8) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
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
	// bl 0x82305000
	ctx.lr = 0x82227338;
	sub_82305000(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82227368;
	sub_82305000(ctx, base);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// stb r30,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r30.u8);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82227394;
	sub_82305000(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// addi r8,r10,21424
	ctx.r8.s64 = ctx.r10.s64 + 21424;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r30,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r30.u8);
	// addi r6,r9,-22104
	ctx.r6.s64 = ctx.r9.s64 + -22104;
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stb r30,241(r31)
	PPC_STORE_U8(ctx.r31.u32 + 241, ctx.r30.u8);
	// li r5,104
	ctx.r5.s64 = 104;
	// stw r8,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r7,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r7.u32);
	// stw r6,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r6.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x822273DC;
	sub_8233EAF0(ctx, base);
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

__attribute__((alias("__imp__sub_822273F8"))) PPC_WEAK_FUNC(sub_822273F8);
PPC_FUNC_IMPL(__imp__sub_822273F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82227400;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r11,-14440
	ctx.r31.s64 = ctx.r11.s64 + -14440;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stb r27,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r27.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82227458
	if (ctx.cr6.eq) goto loc_82227458;
loc_82227428:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,528(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82227450
	if (!ctx.cr6.eq) goto loc_82227450;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82227450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82227450:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82227428
	if (!ctx.cr6.eq) goto loc_82227428;
loc_82227458:
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822274d0
	if (ctx.cr6.eq) goto loc_822274D0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82227470:
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822274c0
	if (ctx.cr6.eq) goto loc_822274C0;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227494
	if (ctx.cr6.eq) goto loc_82227494;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82227494;
	sub_82080000(ctx, base);
loc_82227494:
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822274ac
	if (ctx.cr6.eq) goto loc_822274AC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822274AC;
	sub_82080000(ctx, base);
loc_822274AC:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822274B8;
	sub_82080000(ctx, base);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
loc_822274C0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82227470
	if (ctx.cr6.lt) goto loc_82227470;
loc_822274D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822274e4
	if (ctx.cr6.eq) goto loc_822274E4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822274E4;
	sub_82080000(ctx, base);
loc_822274E4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r27,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r27.u8);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// addi r11,r11,4344
	ctx.r11.s64 = ctx.r11.s64 + 4344;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// bl 0x82305448
	ctx.lr = 0x822274FC;
	sub_82305448(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,4352
	ctx.r11.s64 = ctx.r11.s64 + 4352;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222751c
	if (ctx.cr6.eq) goto loc_8222751C;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x82246e18
	ctx.lr = 0x8222751C;
	sub_82246E18(ctx, base);
loc_8222751C:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227530
	if (ctx.cr6.eq) goto loc_82227530;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82246e18
	ctx.lr = 0x82227530;
	sub_82246E18(ctx, base);
loc_82227530:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227544
	if (ctx.cr6.eq) goto loc_82227544;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82246e18
	ctx.lr = 0x82227544;
	sub_82246E18(ctx, base);
loc_82227544:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222754C"))) PPC_WEAK_FUNC(sub_8222754C);
PPC_FUNC_IMPL(__imp__sub_8222754C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227550"))) PPC_WEAK_FUNC(sub_82227550);
PPC_FUNC_IMPL(__imp__sub_82227550) {
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
	// addi r31,r11,-14440
	ctx.r31.s64 = ctx.r11.s64 + -14440;
	// lwz r3,476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222758c
	if (ctx.cr6.eq) goto loc_8222758C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222758C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222758C:
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r31,472
	ctx.r31.s64 = ctx.r31.s64 + 472;
loc_82227594:
	// addi r31,r31,-72
	ctx.r31.s64 = ctx.r31.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bc4d0
	ctx.lr = 0x822275A0;
	sub_821BC4D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82227594
	if (!ctx.cr0.lt) goto loc_82227594;
	// bl 0x822273f8
	ctx.lr = 0x822275AC;
	sub_822273F8(ctx, base);
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

__attribute__((alias("__imp__sub_822275C4"))) PPC_WEAK_FUNC(sub_822275C4);
PPC_FUNC_IMPL(__imp__sub_822275C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822275C8"))) PPC_WEAK_FUNC(sub_822275C8);
PPC_FUNC_IMPL(__imp__sub_822275C8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// lfs f11,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// bgt cr6,0x82227614
	if (ctx.cr6.gt) goto loc_82227614;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// b 0x82227688
	goto loc_82227688;
loc_82227614:
	// fcmpu cr6,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// blt cr6,0x82227628
	if (ctx.cr6.lt) goto loc_82227628;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// b 0x82227688
	goto loc_82227688;
loc_82227628:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82227658
	if (!ctx.cr6.lt) goto loc_82227658;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x82227640
	if (!ctx.cr6.eq) goto loc_82227640;
	// stfs f11,84(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// b 0x82227688
	goto loc_82227688;
loc_82227640:
	// fsubs f12,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// b 0x8222767c
	goto loc_8222767C;
loc_82227658:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bne cr6,0x82227668
	if (!ctx.cr6.eq) goto loc_82227668;
	// stfs f11,84(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// b 0x82227688
	goto loc_82227688;
loc_82227668:
	// fsubs f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
loc_8222767C:
	// fsubs f7,f8,f10
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fmadds f5,f6,f7,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f10.f64));
	// stfs f5,84(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_82227688:
	// lfs f12,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// bgt cr6,0x822276a8
	if (ctx.cr6.gt) goto loc_822276A8;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x82227714
	goto loc_82227714;
loc_822276A8:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x822276bc
	if (ctx.cr6.lt) goto loc_822276BC;
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x82227714
	goto loc_82227714;
loc_822276BC:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x822276e4
	if (!ctx.cr6.lt) goto loc_822276E4;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x822276ec
	if (ctx.cr6.eq) goto loc_822276EC;
	// fsubs f13,f31,f12
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// b 0x82227708
	goto loc_82227708;
loc_822276E4:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bne cr6,0x822276f4
	if (!ctx.cr6.eq) goto loc_822276F4;
loc_822276EC:
	// stfs f11,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x82227714
	goto loc_82227714;
loc_822276F4:
	// fsubs f12,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f11,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f9,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
loc_82227708:
	// fsubs f8,f9,f11
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmadds f6,f7,f8,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f11.f64));
	// stfs f6,88(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
loc_82227714:
	// bl 0x8233c830
	ctx.lr = 0x82227718;
	sub_8233C830(ctx, base);
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r11,34079
	ctx.r10.u64 = ctx.r11.u64 | 34079;
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// mulhw r9,r3,r10
	ctx.r9.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32)) >> 32;
	// lfs f11,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f31,92(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// srawi r11,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r7,r8,200
	ctx.r7.s64 = ctx.r8.s64 * 200;
	// subf r11,r7,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r7.s64;
	// addi r6,r11,-100
	ctx.r6.s64 = ctx.r11.s64 + -100;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f8,f0,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmuls f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f6,84(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fmuls f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f5,88(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82227794"))) PPC_WEAK_FUNC(sub_82227794);
PPC_FUNC_IMPL(__imp__sub_82227794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227798"))) PPC_WEAK_FUNC(sub_82227798);
PPC_FUNC_IMPL(__imp__sub_82227798) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,44
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 44, ctx.xer);
	// bgt cr6,0x822277f0
	if (ctx.cr6.gt) goto loc_822277F0;
	// beq cr6,0x822277e8
	if (ctx.cr6.eq) goto loc_822277E8;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// blt cr6,0x82227818
	if (ctx.cr6.lt) goto loc_82227818;
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// ble cr6,0x822277d4
	if (!ctx.cr6.gt) goto loc_822277D4;
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// ble cr6,0x82227818
	if (!ctx.cr6.gt) goto loc_82227818;
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// ble cr6,0x82227820
	if (!ctx.cr6.gt) goto loc_82227820;
	// cmplwi cr6,r3,39
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 39, ctx.xer);
	// beq cr6,0x822277e8
	if (ctx.cr6.eq) goto loc_822277E8;
	// cmplwi cr6,r3,40
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 40, ctx.xer);
	// bne cr6,0x82227818
	if (!ctx.cr6.eq) goto loc_82227818;
loc_822277D4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_822277D8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_822277E8:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x822277d8
	goto loc_822277D8;
loc_822277F0:
	// cmplwi cr6,r3,49
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 49, ctx.xer);
	// beq cr6,0x82227820
	if (ctx.cr6.eq) goto loc_82227820;
	// cmplwi cr6,r3,50
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 50, ctx.xer);
	// ble cr6,0x82227818
	if (!ctx.cr6.gt) goto loc_82227818;
	// cmplwi cr6,r3,53
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 53, ctx.xer);
	// ble cr6,0x82227820
	if (!ctx.cr6.gt) goto loc_82227820;
	// cmplwi cr6,r3,57
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 57, ctx.xer);
	// ble cr6,0x82227818
	if (!ctx.cr6.gt) goto loc_82227818;
	// cmplwi cr6,r3,61
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 61, ctx.xer);
	// ble cr6,0x82227820
	if (!ctx.cr6.gt) goto loc_82227820;
loc_82227818:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82227824
	goto loc_82227824;
loc_82227820:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82227824:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227830"))) PPC_WEAK_FUNC(sub_82227830);
PPC_FUNC_IMPL(__imp__sub_82227830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// vor128 v60,v1,v1
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-21952
	ctx.r11.s64 = ctx.r11.s64 + -21952;
	// addi r10,r10,-21968
	ctx.r10.s64 = ctx.r10.s64 + -21968;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r9,r9,-21936
	ctx.r9.s64 = ctx.r9.s64 + -21936;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v59,v63,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v0,v62,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x0));
	// vspltw128 v56,v62,2
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x55));
	// lvx128 v61,r0,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v55,v62,1
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xAA));
	// vmulfp128 v59,v60,v59
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v59.f32)));
	// vspltw128 v62,v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v58,v63,2
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v57,v63,3
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// vcmpgtfp128 v12,v56,v60
	_mm_store_ps(ctx.v12.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v60.f32)));
	// vspltw128 v9,v61,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x55));
	// vcmpgtfp128 v7,v55,v60
	_mm_store_ps(ctx.v7.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v60.f32)));
	// vcmpgtfp128 v8,v62,v60
	_mm_store_ps(ctx.v8.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// vspltw128 v4,v61,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v11,v61,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v63,v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// vrfin128 v62,v59
	_mm_store_ps(ctx.v62.f32, _mm_round_ps(_mm_load_ps(ctx.v59.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vmulfp128 v61,v62,v58
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v58.f32)));
	// vmulfp128 v59,v62,v57
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v63,v62,v63
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v13,v62,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v0.f32)));
	// vrfiz128 v10,v61
	_mm_store_ps(ctx.v10.f32, _mm_round_ps(_mm_load_ps(ctx.v61.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v5,v59
	_mm_store_ps(ctx.v5.f32, _mm_round_ps(_mm_load_ps(ctx.v59.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v6,v63
	_mm_store_ps(ctx.v6.f32, _mm_round_ps(_mm_load_ps(ctx.v63.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vmaddfp v9,v10,v0,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v10,v5,v0,v4
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v6,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vsel v12,v10,v9,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vsel v0,v12,v11,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vsel v1,v0,v13,v8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vrlimi128 v1,v60,1,0
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v60.f32), 228), 1));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822278D4"))) PPC_WEAK_FUNC(sub_822278D4);
PPC_FUNC_IMPL(__imp__sub_822278D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822278D8"))) PPC_WEAK_FUNC(sub_822278D8);
PPC_FUNC_IMPL(__imp__sub_822278D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,10376(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10376);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222791c
	if (!ctx.cr0.eq) goto loc_8222791C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x82227980
	goto loc_82227980;
loc_8222791C:
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82227934
	if (ctx.cr0.eq) goto loc_82227934;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82227978
	goto loc_82227978;
loc_82227934:
	// rlwinm r11,r10,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r11,113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 113, ctx.xer);
	// blt cr6,0x82227954
	if (ctx.cr6.lt) goto loc_82227954;
	// rlwinm r11,r10,0,5,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7800000;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82227978
	goto loc_82227978;
loc_82227954:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// subfic r11,r11,113
	ctx.xer.ca = ctx.r11.u32 <= 113;
	ctx.r11.s64 = 113 - ctx.r11.s64;
	// clrlwi r10,r10,9
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
loc_82227978:
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,19,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FF;
loc_82227980:
	// lbz r9,10562(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10562);
	// lwz r8,10560(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// stw r10,10796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10796, ctx.r10.u32);
	// not r10,r8
	ctx.r10.u64 = ~ctx.r8.u64;
	// subfe r9,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,6,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x800;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10792, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822279BC"))) PPC_WEAK_FUNC(sub_822279BC);
PPC_FUNC_IMPL(__imp__sub_822279BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822279C0"))) PPC_WEAK_FUNC(sub_822279C0);
PPC_FUNC_IMPL(__imp__sub_822279C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x822279C8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r29,32
	ctx.r29.s64 = 32;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82227ab0
	if (ctx.cr6.eq) goto loc_82227AB0;
	// rlwinm r9,r4,29,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r6,-64
	ctx.r6.s64 = -64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// or r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 | ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82227A2C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm. r11,r7,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82227aa0
	if (!ctx.cr0.gt) goto loc_82227AA0;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bge cr6,0x82227aa0
	if (!ctx.cr6.lt) goto loc_82227AA0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bgt cr6,0x82227a60
	if (ctx.cr6.gt) goto loc_82227A60;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82227A60:
	// cmpwi cr6,r9,254
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 254, ctx.xer);
	// bge cr6,0x82227a78
	if (!ctx.cr6.lt) goto loc_82227A78;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82227a7c
	if (ctx.cr6.gt) goto loc_82227A7C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82227a7c
	goto loc_82227A7C;
loc_82227A78:
	// li r11,254
	ctx.r11.s64 = 254;
loc_82227A7C:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// rlwinm r7,r7,0,9,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF807FFFFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stvx128 v127,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwx r11,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u32);
	// lvx128 v127,r0,r4
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82227AA0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82227a2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82227A2C;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82227AB0:
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// bgt cr6,0x82227e08
	if (ctx.cr6.gt) goto loc_82227E08;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// addi r12,r12,31296
	ctx.r12.s64 = ctx.r12.s64 + 31296;
	// lbzx r0,r12,r31
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r31.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// nop 
	// addi r12,r12,31456
	ctx.r12.s64 = ctx.r12.s64 + 31456;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r31.u64) {
	case 0:
		goto loc_82227AEC;
	case 1:
		goto loc_82227AE0;
	case 2:
		goto loc_82227AEC;
	case 3:
		goto loc_82227C8C;
	case 4:
		goto loc_82227BD4;
	case 5:
		goto loc_82227BD4;
	case 6:
		goto loc_82227D84;
	case 7:
		goto loc_82227DA8;
	case 8:
		goto loc_82227E08;
	case 9:
		goto loc_82227E08;
	case 10:
		goto loc_82227AEC;
	case 11:
		goto loc_82227E08;
	case 12:
		goto loc_82227C8C;
	case 13:
		goto loc_82227E08;
	case 14:
		goto loc_82227DEC;
	case 15:
		goto loc_82227DF8;
	default:
		__builtin_unreachable();
	}
loc_82227AE0:
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82227830
	ctx.lr = 0x82227AE8;
	sub_82227830(ctx, base);
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
loc_82227AEC:
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x82227afc
	if (ctx.cr6.eq) goto loc_82227AFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82227AFC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r10,r10,-21876
	ctx.r10.s64 = ctx.r10.s64 + -21876;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r9,r9,-21880
	ctx.r9.s64 = ctx.r9.s64 + -21880;
	// addi r8,r8,31376
	ctx.r8.s64 = ctx.r8.s64 + 31376;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// slw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lfs f0,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// li r8,16
	ctx.r8.s64 = 16;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mulli r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 * 3;
	// rotlwi r5,r11,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v61,v127,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32)));
	// vmaxfp128 v62,v62,v61
	_mm_store_ps(ctx.v62.f32, _mm_max_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32)));
	// vminfp128 v63,v63,v62
	_mm_store_ps(ctx.v63.f32, _mm_min_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// vrfin128 v63,v63
	_mm_store_ps(ctx.v63.f32, _mm_round_ps(_mm_load_ps(ctx.v63.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vcfpsxws128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v63.f32)));
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// slw r6,r6,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
loc_82227BCC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82227e0c
	goto loc_82227E0C;
loc_82227BD4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,772
	ctx.r10.s64 = 772;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// li r9,36
	ctx.r9.s64 = 36;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// lvlx128 v63,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r7,-25232
	ctx.r10.s64 = ctx.r7.s64 + -25232;
	// lvlx128 v62,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r8,-21872
	ctx.r8.s64 = ctx.r8.s64 + -21872;
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lvlx128 v61,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// vspltw128 v61,v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r7,-21856
	ctx.r11.s64 = ctx.r7.s64 + -21856;
	// vmulfp128 v60,v127,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32)));
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaxfp128 v62,v62,v60
	_mm_store_ps(ctx.v62.f32, _mm_max_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// vminfp128 v12,v61,v62
	_mm_store_ps(ctx.v12.f32, _mm_min_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// vmaddfp v0,v12,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vrfin128 v62,v0
	_mm_store_ps(ctx.v62.f32, _mm_round_ps(_mm_load_ps(ctx.v0.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vcfpsxws128 v62,v62,0
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_vctsxs(_mm_load_ps(ctx.v62.f32)));
	// vxor128 v63,v62,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// bne cr6,0x82227c80
	if (!ctx.cr6.eq) goto loc_82227C80;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r29,64
	ctx.r29.s64 = 64;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// b 0x82227e0c
	goto loc_82227E0C;
loc_82227C80:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82227bcc
	goto loc_82227BCC;
loc_82227C8C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_82227CA4:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r4,-124
	ctx.r4.s64 = -124;
	// lfsx f1,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8233f2f0
	ctx.lr = 0x82227CB4;
	sub_8233F2F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x82227cec
	if (ctx.cr0.eq) goto loc_82227CEC;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1023
	ctx.r11.s64 = 1023;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82227cf0
	if (ctx.cr6.lt) goto loc_82227CF0;
	// li r11,511
	ctx.r11.s64 = 511;
	// b 0x82227cf0
	goto loc_82227CF0;
loc_82227CEC:
	// rlwinm r11,r11,16,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FF;
loc_82227CF0:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,12
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 12, ctx.xer);
	// blt cr6,0x82227ca4
	if (ctx.cr6.lt) goto loc_82227CA4;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f12,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82227d28
	if (!ctx.cr6.gt) goto loc_82227D28;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82227d2c
	goto loc_82227D2C;
loc_82227D28:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_82227D2C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82227d44
	if (!ctx.cr6.lt) goto loc_82227D44;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82227d48
	if (ctx.cr6.gt) goto loc_82227D48;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82227d48
	goto loc_82227D48;
loc_82227D44:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82227D48:
	// lfs f13,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r8,r8,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82227bcc
	goto loc_82227BCC;
loc_82227D84:
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vpkd3d128 v63,v127,3,1,3
	ctx.fpscr.enableFlushMode();
	__builtin_debugtrap();
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x82227bcc
	goto loc_82227BCC;
loc_82227DA8:
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r29,64
	ctx.r29.s64 = 64;
	// vpkd3d128 v63,v127,5,2,2
	ctx.fpscr.enableFlushMode();
	temp.u32 = (ctx.v127.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v127.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v127.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[4] |= ((ctx.v127.u32[0]&0x80000000)>>16);
	temp.u32 = (ctx.v127.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v127.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v127.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[5] |= ((ctx.v127.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v127.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v127.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v127.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[6] |= ((ctx.v127.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v127.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v127.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v127.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[7] |= ((ctx.v127.u32[3]&0x80000000)>>16);
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x82227e0c
	goto loc_82227E0C;
loc_82227DEC:
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82227e0c
	goto loc_82227E0C;
loc_82227DF8:
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r29,64
	ctx.r29.s64 = 64;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// b 0x82227e0c
	goto loc_82227E0C;
loc_82227E08:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82227E0C:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227E2C"))) PPC_WEAK_FUNC(sub_82227E2C);
PPC_FUNC_IMPL(__imp__sub_82227E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227E30"))) PPC_WEAK_FUNC(sub_82227E30);
PPC_FUNC_IMPL(__imp__sub_82227E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82227E38;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r8.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// rlwinm. r11,r4,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r16,1
	ctx.r16.s64 = 1;
	// beq 0x82227e88
	if (ctx.cr0.eq) goto loc_82227E88;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r16,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// lwz r11,26352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82227e8c
	if (ctx.cr6.eq) goto loc_82227E8C;
loc_82227E88:
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82227E8C:
	// rlwinm. r11,r22,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82227ea8
	if (ctx.cr0.eq) goto loc_82227EA8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// lwz r11,26356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82227eac
	if (ctx.cr6.eq) goto loc_82227EAC;
loc_82227EA8:
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_82227EAC:
	// clrlwi r11,r22,29
	ctx.r11.u64 = ctx.r22.u32 & 0x7;
	// rlwinm. r10,r22,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x70;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bne 0x82227f04
	if (!ctx.cr0.eq) goto loc_82227F04;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82227ecc
	if (!ctx.cr6.eq) goto loc_82227ECC;
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// b 0x82227ed8
	goto loc_82227ED8;
loc_82227ECC:
	// addi r11,r11,3198
	ctx.r11.s64 = ctx.r11.s64 + 3198;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_82227ED8:
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82227ef0
	if (!ctx.cr6.eq) goto loc_82227EF0;
	// ori r22,r22,16
	ctx.r22.u64 = ctx.r22.u64 | 16;
	// b 0x82227f04
	goto loc_82227F04;
loc_82227EF0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82227f00
	if (!ctx.cr6.eq) goto loc_82227F00;
	// ori r22,r22,80
	ctx.r22.u64 = ctx.r22.u64 | 80;
	// b 0x82227f04
	goto loc_82227F04;
loc_82227F00:
	// ori r22,r22,112
	ctx.r22.u64 = ctx.r22.u64 | 112;
loc_82227F04:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82227f24
	if (!ctx.cr6.eq) goto loc_82227F24;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-13824
	ctx.r11.s64 = ctx.r11.s64 + -13824;
	// addi r19,r1,208
	ctx.r19.s64 = ctx.r1.s64 + 208;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82227F24:
	// lwz r28,40(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 40);
	// lwz r10,48(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 48);
	// rlwinm r11,r28,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x2;
	// lwz r9,36(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 36);
	// rlwinm r21,r10,23,30,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 2, ctx.xer);
	// beq cr6,0x82227f50
	if (ctx.cr6.eq) goto loc_82227F50;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// rlwinm r9,r9,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// b 0x82227f5c
	goto loc_82227F5C;
loc_82227F50:
	// li r10,8
	ctx.r10.s64 = 8;
	// clrlwi r10,r9,21
	ctx.r10.u64 = ctx.r9.u32 & 0x7FF;
	// rlwinm r9,r9,21,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x7FF;
loc_82227F5C:
	// lwz r24,32(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 32);
	// add r25,r9,r11
	ctx.r25.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r30,r24,26
	ctx.r30.u64 = ctx.r24.u32 & 0x3F;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227798
	ctx.lr = 0x82227F84;
	sub_82227798(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// rlwinm r9,r24,1,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x7E;
	// lwz r29,28(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28);
	// addi r11,r11,-22096
	ctx.r11.s64 = ctx.r11.s64 + -22096;
	// rlwinm r10,r24,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFF000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r29,15,18,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 15) & 0x3FE0;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r14,r15,28
	ctx.r14.s64 = ctx.r15.s64 + 28;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// rlwinm r17,r9,29,3,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// divwu r20,r8,r11
	ctx.r20.u32 = ctx.r8.u32 / ctx.r11.u32;
	// twllei r11,0
	// beq cr6,0x82228020
	if (ctx.cr6.eq) goto loc_82228020;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x822367d8
	ctx.lr = 0x8222800C;
	sub_822367D8(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// twllei r17,0
	// divwu r20,r11,r17
	ctx.r20.u32 = ctx.r11.u32 / ctx.r17.u32;
	// lwz r25,132(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82228020:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82228044
	if (!ctx.cr6.eq) goto loc_82228044;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// addi r23,r1,192
	ctx.r23.s64 = ctx.r1.s64 + 192;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
loc_82228044:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82228054
	if (!ctx.cr6.eq) goto loc_82228054;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r26,r11,-21840
	ctx.r26.s64 = ctx.r11.s64 + -21840;
loc_82228054:
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r6,r28,0,28,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xE;
	// addi r7,r11,512
	ctx.r7.s64 = ctx.r11.s64 + 512;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r4,r9,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r9.s64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// mullw r8,r9,r20
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r20.s32);
	// rlwinm r9,r5,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// mullw r10,r8,r17
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r17.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// divwu r8,r4,r27
	ctx.r8.u32 = ctx.r4.u32 / ctx.r27.u32;
	// addic r7,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// twllei r27,0
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r9,r22,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 6) & 0x3F;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r18,r29,30,30,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3;
	// subfe r7,r7,r6
	temp.u8 = (~ctx.r7.u32 + ctx.r6.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r30,54
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 54, ctx.xer);
	// bne cr6,0x822280d0
	if (!ctx.cr6.eq) goto loc_822280D0;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8222813c
	goto loc_8222813C;
loc_822280D0:
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bne cr6,0x822280e0
	if (!ctx.cr6.eq) goto loc_822280E0;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8222813c
	goto loc_8222813C;
loc_822280E0:
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// bne cr6,0x822280f0
	if (!ctx.cr6.eq) goto loc_822280F0;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x8222813c
	goto loc_8222813C;
loc_822280F0:
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bne cr6,0x82228100
	if (!ctx.cr6.eq) goto loc_82228100;
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x8222813c
	goto loc_8222813C;
loc_82228100:
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x82228110
	if (!ctx.cr6.eq) goto loc_82228110;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x8222813c
	goto loc_8222813C;
loc_82228110:
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bne cr6,0x82228120
	if (!ctx.cr6.eq) goto loc_82228120;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x8222813c
	goto loc_8222813C;
loc_82228120:
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x82228138
	if (ctx.cr6.eq) goto loc_82228138;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x82228138
	if (ctx.cr6.eq) goto loc_82228138;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bne cr6,0x8222813c
	if (!ctx.cr6.eq) goto loc_8222813C;
loc_82228138:
	// li r11,6
	ctx.r11.s64 = 6;
loc_8222813C:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// addi r10,r18,-1
	ctx.r10.s64 = ctx.r18.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x82228154
	if (!ctx.cr6.eq) goto loc_82228154;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82228154:
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x82228194
	if (ctx.cr6.eq) goto loc_82228194;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x82228194
	if (ctx.cr6.eq) goto loc_82228194;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82228194
	if (ctx.cr6.eq) goto loc_82228194;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x82228194
	if (ctx.cr6.eq) goto loc_82228194;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x82228194
	if (ctx.cr6.eq) goto loc_82228194;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// beq cr6,0x82228194
	if (ctx.cr6.eq) goto loc_82228194;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// beq cr6,0x82228194
	if (ctx.cr6.eq) goto loc_82228194;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x82228198
	if (!ctx.cr6.eq) goto loc_82228198;
loc_82228194:
	// li r10,7
	ctx.r10.s64 = 7;
loc_82228198:
	// rlwimi r9,r7,8,23,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// andi. r9,r9,319
	ctx.r9.u64 = ctx.r9.u64 & 319;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r10,r9,3,0,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 3) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// rlwinm r8,r8,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3FFF0000;
	// rlwimi r7,r10,6,0,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFC0) | (ctx.r7.u64 & 0xFFFFFFFF0000003F);
	// clrlwi r9,r20,18
	ctx.r9.u64 = ctx.r20.u32 & 0x3FFF;
	// rlwinm r6,r7,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r24,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 26) & 0x3;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 | ctx.r10.u64;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 2, ctx.xer);
	// bne cr6,0x822281e4
	if (!ctx.cr6.eq) goto loc_822281E4;
	// mullw r10,r20,r25
	ctx.r10.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r25.s32);
	// stw r10,10820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10820, ctx.r10.u32);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// ori r8,r8,8
	ctx.r8.u64 = ctx.r8.u64 | 8;
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
loc_822281E4:
	// rlwinm. r10,r22,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// beq 0x822281f8
	if (ctx.cr0.eq) goto loc_822281F8;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x82228218
	goto loc_82228218;
loc_822281F8:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8222820c
	if (!ctx.cr6.eq) goto loc_8222820C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82228218
	goto loc_82228218;
loc_8222820C:
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x82228218
	if (!ctx.cr6.eq) goto loc_82228218;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82228218:
	// stw r7,10784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10784, ctx.r7.u32);
	// andi. r10,r22,887
	ctx.r10.u64 = ctx.r22.u64 & 887;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,20,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x300000;
	// stw r27,10780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10780, ctx.r27.u32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r8,10788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10788, ctx.r8.u32);
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// li r16,-1
	ctx.r16.s64 = -1;
	// stw r6,10776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10776, ctx.r6.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// bne cr6,0x82228284
	if (!ctx.cr6.eq) goto loc_82228284;
	// li r11,4369
	ctx.r11.s64 = 4369;
	// stw r16,10816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10816, ctx.r16.u32);
	// lis r10,-32640
	ctx.r10.s64 = -2139095040;
	// stw r11,10808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10808, ctx.r11.u32);
	// ori r11,r10,32896
	ctx.r11.u64 = ctx.r10.u64 | 32896;
	// stw r11,10812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10812, ctx.r11.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ori r11,r11,60
	ctx.r11.u64 = ctx.r11.u64 | 60;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ori r11,r11,30
	ctx.r11.u64 = ctx.r11.u64 | 30;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ori r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 15;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_82228284:
	// rlwinm. r24,r22,0,22,22
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x82228298
	if (ctx.cr0.eq) goto loc_82228298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822278d8
	ctx.lr = 0x82228298;
	sub_822278D8(ctx, base);
loc_82228298:
	// rlwinm. r11,r22,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822282f4
	if (ctx.cr0.eq) goto loc_822282F4;
	// lvx128 v1,r0,r19
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// clrlwi. r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822282b4
	if (!ctx.cr0.eq) goto loc_822282B4;
	// addi r11,r31,10372
	ctx.r11.s64 = ctx.r31.s64 + 10372;
	// b 0x822282c0
	goto loc_822282C0;
loc_822282B4:
	// addi r11,r11,2594
	ctx.r11.s64 = ctx.r11.s64 + 2594;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_822282C0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// rlwinm r3,r11,16,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r4,r11,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// bl 0x822279c0
	ctx.lr = 0x822282D8;
	sub_822279C0(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,10800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10800, ctx.r11.u32);
	// stw r10,10804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10804, ctx.r10.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ori r11,r11,192
	ctx.r11.u64 = ctx.r11.u64 | 192;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_822282F4:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r11,10436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10436);
	// lwz r26,0(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r8,r11,17,0,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// lwz r25,4(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r23,r9,0,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// srawi r9,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 17;
	// rlwinm r22,r10,0,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82228360
	if (ctx.cr6.lt) goto loc_82228360;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 17;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82228360
	if (ctx.cr6.lt) goto loc_82228360;
	// lwz r11,10440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10440);
	// rlwinm r10,r11,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi r10,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 17;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82228360
	if (ctx.cr6.gt) goto loc_82228360;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 17;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8222837c
	if (!ctx.cr6.gt) goto loc_8222837C;
loc_82228360:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a278
	ctx.lr = 0x82228378;
	sub_8222A278(ctx, base);
	// li r21,1
	ctx.r21.s64 = 1;
loc_8222837C:
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x8222849c
	if (ctx.cr6.eq) goto loc_8222849C;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822283a8
	if (ctx.cr6.eq) goto loc_822283A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// bl 0x82239148
	ctx.lr = 0x822283A4;
	sub_82239148(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
loc_822283A8:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822283d8
	if (ctx.cr6.eq) goto loc_822283D8;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x822283CC;
	sub_822394D8(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_822283D8:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82228410
	if (ctx.cr6.eq) goto loc_82228410;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x822283FC;
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
loc_82228410:
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
	// beq cr6,0x82228458
	if (ctx.cr6.eq) goto loc_82228458;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82228440;
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
loc_82228458:
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
	// beq cr6,0x8222849c
	if (ctx.cr6.eq) goto loc_8222849C;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82228484;
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
loc_8222849C:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822284ec
	if (ctx.cr6.eq) goto loc_822284EC;
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
	// beq cr6,0x822284ec
	if (ctx.cr6.eq) goto loc_822284EC;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x822284D4;
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
loc_822284EC:
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82228524
	if (ctx.cr6.eq) goto loc_82228524;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82228524
	if (ctx.cr6.eq) goto loc_82228524;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82228518;
	sub_822394D8(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_82228524:
	// lbz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82228538
	if (ctx.cr0.eq) goto loc_82228538;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822285c8
	goto loc_822285C8;
loc_82228538:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822285c0
	if (ctx.cr0.eq) goto loc_822285C0;
	// lwz r11,12792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12792);
	// lwz r10,13080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13080);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82228558
	if (ctx.cr6.eq) goto loc_82228558;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822285c0
	if (!ctx.cr6.eq) goto loc_822285C0;
loc_82228558:
	// lwz r11,12796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12796);
	// lwz r10,13084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13084);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82228570
	if (ctx.cr6.eq) goto loc_82228570;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822285c0
	if (!ctx.cr6.eq) goto loc_822285C0;
loc_82228570:
	// lwz r11,12800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12800);
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82228588
	if (ctx.cr6.eq) goto loc_82228588;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822285c0
	if (!ctx.cr6.eq) goto loc_822285C0;
loc_82228588:
	// lwz r11,12804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12804);
	// lwz r10,13092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13092);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822285a0
	if (ctx.cr6.eq) goto loc_822285A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822285c0
	if (!ctx.cr6.eq) goto loc_822285C0;
loc_822285A0:
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// lwz r10,13096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822285b8
	if (ctx.cr6.eq) goto loc_822285B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822285c0
	if (!ctx.cr6.eq) goto loc_822285C0;
loc_822285B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822285c4
	goto loc_822285C4;
loc_822285C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822285C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822285C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822286d0
	if (ctx.cr0.eq) goto loc_822286D0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822285e8
	if (!ctx.cr6.gt) goto loc_822285E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x822285E8;
	sub_82231210(ctx, base);
loc_822285E8:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,24832
	ctx.r11.u64 = ctx.r11.u64 | 24832;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,13100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13100);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822286a4
	if (!ctx.cr6.gt) goto loc_822286A4;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,13344
	ctx.r30.s64 = ctx.r31.s64 + 13344;
loc_82228618:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// slw r7,r7,r29
	ctx.r7.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r29.u8 & 0x3F));
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// li r6,8985
	ctx.r6.s64 = 8985;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r4,r10,21761
	ctx.r4.u64 = ctx.r10.u64 | 21761;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r10,r8,r20
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r20.s32);
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// mullw r11,r11,r17
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r17.s32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// ble cr6,0x8222868c
	if (!ctx.cr6.gt) goto loc_8222868C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82228688;
	sub_82231210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8222868C:
	// lwz r10,13100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13100);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82228618
	if (ctx.cr6.lt) goto loc_82228618;
loc_822286A4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13060);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13064(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13064);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_822286D0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822286ec
	if (!ctx.cr6.gt) goto loc_822286EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x822286E8;
	sub_82231210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822286EC:
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r28,r9,17920
	ctx.r28.u64 = ctx.r9.u64 | 17920;
	// beq 0x82228738
	if (ctx.cr0.eq) goto loc_82228738;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// andi. r10,r10,247
	ctx.r10.u64 = ctx.r10.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,11070(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11070, ctx.r10.u8);
loc_82228738:
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822287b0
	if (!ctx.cr6.eq) goto loc_822287B0;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,256
	ctx.r9.s64 = 256;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16368
	ctx.r8.s64 = -1072693248;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r7,15
	ctx.r7.s64 = 15;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// li r5,60
	ctx.r5.s64 = 60;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r4,r6,28204
	ctx.r4.s64 = ctx.r6.s64 + 28204;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x8222878C;
	sub_8233E4E0(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_822287B0:
	// li r10,8712
	ctx.r10.s64 = 8712;
	// li r9,6
	ctx.r9.s64 = 6;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,8704
	ctx.r10.s64 = 8704;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x82228814
	if (ctx.cr6.eq) goto loc_82228814;
	// lbz r9,11069(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11069);
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// lwz r7,10560(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r9,11069(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11069, ctx.r9.u8);
	// rlwimi r8,r10,30,28,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r10,r7,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r8,r8,29,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x7;
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// or r30,r8,r10
	ctx.r30.u64 = ctx.r8.u64 | ctx.r10.u64;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 131072;
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
loc_82228814:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8222882c
	if (ctx.cr6.eq) goto loc_8222882C;
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82228834
	if (ctx.cr0.eq) goto loc_82228834;
loc_8222882C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232040
	ctx.lr = 0x82228834;
	sub_82232040(ctx, base);
loc_82228834:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239148
	ctx.lr = 0x82228844;
	sub_82239148(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822288e8
	if (!ctx.cr6.eq) goto loc_822288E8;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82228864
	if (!ctx.cr6.gt) goto loc_82228864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82228864;
	sub_82231210(ctx, base);
loc_82228864:
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
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r10,r6,8708
	ctx.r10.u64 = ctx.r6.u64 | 8708;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// li r30,8978
	ctx.r30.s64 = 8978;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r29,0
	ctx.r29.s64 = 0;
	// li r27,8205
	ctx.r27.s64 = 8205;
	// ori r11,r29,65535
	ctx.r11.u64 = ctx.r29.u64 | 65535;
	// li r29,0
	ctx.r29.s64 = 0;
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
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_822288E8:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82228978
	if (!ctx.cr6.eq) goto loc_82228978;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,40,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82228978:
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 3, ctx.xer);
	// bne cr6,0x82228a14
	if (!ctx.cr6.eq) goto loc_82228A14;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82228a14
	if (ctx.cr6.eq) goto loc_82228A14;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x8222899c
	if (ctx.cr6.eq) goto loc_8222899C;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_8222899C:
	// addi r11,r30,2593
	ctx.r11.s64 = ctx.r30.s64 + 2593;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r11,r29,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82228a14
	if (!ctx.cr6.eq) goto loc_82228A14;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822289d0
	if (!ctx.cr6.gt) goto loc_822289D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x822289D0;
	sub_82231210(ctx, base);
loc_822289D0:
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// addi r11,r30,8193
	ctx.r11.s64 = ctx.r30.s64 + 8193;
	// addi r10,r10,263
	ctx.r10.s64 = ctx.r10.s64 + 263;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r8,r29,6
	ctx.r8.u64 = ctx.r29.u32 & 0x3FFFFFF;
	// srawi r11,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,0,20,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// clrldi r10,r10,56
	ctx.r10.u64 = ctx.r10.u64 & 0xFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ldx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stdx r10,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u64);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_82228A14:
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82228a30
	if (!ctx.cr6.gt) goto loc_82228A30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82228A2C;
	sub_82231210(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82228A30:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230228
	ctx.lr = 0x82228A40;
	sub_82230228(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82228a50
	if (!ctx.cr0.eq) goto loc_82228A50;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// b 0x82228e7c
	goto loc_82228E7C;
loc_82228A50:
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lwz r9,10688(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10688);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// bne 0x82228a80
	if (!ctx.cr0.eq) goto loc_82228A80;
	// lfs f0,60(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82228a84
	goto loc_82228A84;
loc_82228A80:
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
loc_82228A84:
	// extsw r9,r25
	ctx.r9.s64 = ctx.r25.s32;
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// std r9,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r9.u64);
	// subf r9,r25,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r25.s64;
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// subf r10,r26,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r26.s64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f10,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r10,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r10.u64);
	// lfd f11,168(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lfd f13,192(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,176(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// ori r10,r10,18432
	ctx.r10.u64 = ctx.r10.u64 | 18432;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,26
	ctx.r9.u64 = ctx.r9.u64 | 26;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lis r4,2
	ctx.r4.s64 = 131072;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// li r29,0
	ctx.r29.s64 = 0;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// ori r4,r4,20480
	ctx.r4.u64 = ctx.r4.u64 | 20480;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// stwu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r30.u32 = ea;
	// stwu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r30.u32 = ea;
	// stwu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// stwu r27,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r30.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// ble cr6,0x82228b88
	if (!ctx.cr6.gt) goto loc_82228B88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82228B88;
	sub_82231210(ctx, base);
loc_82228B88:
	// lwz r11,13068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13068);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// li r9,8199
	ctx.r9.s64 = 8199;
	// oris r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 3221225472;
	// ori r10,r10,136
	ctx.r10.u64 = ctx.r10.u64 | 136;
	// ori r11,r11,13824
	ctx.r11.u64 = ctx.r11.u64 | 13824;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10396);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x82228bfc
	if (ctx.cr6.eq) goto loc_82228BFC;
	// lwz r11,10440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,10436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x8222a278
	ctx.lr = 0x82228BFC;
	sub_8222A278(ctx, base);
loc_82228BFC:
	// lwz r11,11036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r11,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x82236010
	ctx.lr = 0x82228C58;
	sub_82236010(ctx, base);
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lwz r7,40(r15)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r15.u32 + 40);
	// rlwinm r6,r10,10,23,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FF;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// rlwinm r8,r7,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// lwz r5,44(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 44);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mullw r10,r6,r17
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r17.s32);
	// lwz r30,48(r15)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r15.u32 + 48);
	// lwz r29,32(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 32);
	// srawi r8,r8,26
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 26;
	// rlwinm r11,r5,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0xF;
	// rlwinm r28,r10,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// rlwinm r27,r7,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r30,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0x1;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r8,r30,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 23) & 0x3;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r7,r29,26
	ctx.r7.u64 = ctx.r29.u32 & 0x3F;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82235bf8
	ctx.lr = 0x82228CD0;
	sub_82235BF8(ctx, base);
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228cf4
	if (ctx.cr6.eq) goto loc_82228CF4;
	// rlwinm. r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82228cf4
	if (ctx.cr0.eq) goto loc_82228CF4;
	// lwz r28,144(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r30,0,3,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1FFFF000;
	// b 0x82228d00
	goto loc_82228D00;
loc_82228CF4:
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r11,r29,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r29,0,3,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1FFFF000;
loc_82228D00:
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82228d24
	if (!ctx.cr6.gt) goto loc_82228D24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82228D24;
	sub_82231210(ctx, base);
loc_82228D24:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,26348(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26348);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// beq cr6,0x82228dc0
	if (ctx.cr6.eq) goto loc_82228DC0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82228de8
	if (!ctx.cr6.eq) goto loc_82228DE8;
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r9,r28,8191
	ctx.r9.s64 = ctx.r28.s64 + 8191;
	// ori r11,r11,2607
	ctx.r11.u64 = ctx.r11.u64 | 2607;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r8,r30,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r7,r7,15360
	ctx.r7.u64 = ctx.r7.u64 | 15360;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r29,2
	ctx.r29.s64 = 131072;
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
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
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
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// b 0x82228de8
	goto loc_82228DE8;
loc_82228DC0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82228de8
	if (!ctx.cr6.eq) goto loc_82228DE8;
	// lbz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// li r12,3
	ctx.r12.s64 = 3;
	// ori r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 192;
	// rldicr r12,r12,62,1
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 62) & 0xC000000000000000;
	// stb r10,11072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11072, ctx.r10.u8);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
loc_82228DE8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8984
	ctx.r9.s64 = 8984;
	// stw r10,10776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10776, ctx.r10.u32);
	// li r7,8987
	ctx.r7.s64 = 8987;
	// stw r10,10788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10788, ctx.r10.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// lwz r11,11036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// beq cr6,0x82228e30
	if (ctx.cr6.eq) goto loc_82228E30;
	// stw r11,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r11.u32);
	// stw r11,12(r15)
	PPC_STORE_U32(ctx.r15.u32 + 12, ctx.r11.u32);
	// b 0x82228e7c
	goto loc_82228E7C;
loc_82228E30:
	// lwz r11,11040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11040);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82228e7c
	if (ctx.cr0.eq) goto loc_82228E7C;
	// lwz r11,13916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13916);
	// lwz r3,13912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13912);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82228e58
	if (ctx.cr6.lt) goto loc_82228E58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82238c20
	ctx.lr = 0x82228E58;
	sub_82238C20(ctx, base);
loc_82228E58:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r16,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r16.u32);
	// rlwimi r11,r15,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r15.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// ld r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r10,13912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13912, ctx.r10.u32);
loc_82228E7C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228E88"))) PPC_WEAK_FUNC(sub_82228E88);
PPC_FUNC_IMPL(__imp__sub_82228E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82228E90;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// addi r23,r3,48
	ctx.r23.s64 = ctx.r3.s64 + 48;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82228ed4
	if (!ctx.cr6.gt) goto loc_82228ED4;
	// bl 0x82231210
	ctx.lr = 0x82228ED0;
	sub_82231210(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82228ED4:
	// mulli r26,r27,21
	ctx.r26.s64 = ctx.r27.s64 * 21;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230228
	ctx.lr = 0x82228EE8;
	sub_82230228(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82228ef8
	if (!ctx.cr0.eq) goto loc_82228EF8;
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// b 0x82229134
	goto loc_82229134;
loc_82228EF8:
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lwz r9,10688(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10688);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x82228f24
	if (!ctx.cr0.eq) goto loc_82228F24;
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x1)));
	// vcsxwfp128 v63,v63,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// b 0x82228f28
	goto loc_82228F28;
loc_82228F24:
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
loc_82228F28:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x82228fec
	if (ctx.cr6.eq) goto loc_82228FEC;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82228F4C:
	// li r7,16
	ctx.r7.s64 = 16;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,32
	ctx.r4.s64 = 32;
	// lvrx128 v61,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// li r7,56
	ctx.r7.s64 = 56;
	// vor128 v62,v62,v61
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vcsxwfp128 v62,v62,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)));
	// vsubfp128 v62,v62,v63
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vspltw128 v61,v62,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v60,v62,1
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v59,v62,2
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v62,v62,3
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x0));
	// stvewx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stvewx128 v59,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stvewx128 v59,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f11,68(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// bdnz 0x82228f4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82228F4C;
loc_82228FEC:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r8,3
	ctx.r10.u64 = ctx.r8.u64 | 3;
	// ori r11,r11,18432
	ctx.r11.u64 = ctx.r11.u64 | 18432;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r9,r26,2,6,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r26.u32, 2) & 0x3FFFFFC) | (ctx.r9.u64 & 0xFFFFFFFFFC000003);
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r10,20480
	ctx.r4.u64 = ctx.r10.u64 | 20480;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,8961
	ctx.r9.s64 = 8961;
	// ori r26,r10,8192
	ctx.r26.u64 = ctx.r10.u64 | 8192;
	// rlwinm. r10,r28,16,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// stwu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r30.u32 = ea;
	// stwu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r30.u32 = ea;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// stwu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// stwu r24,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r30.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bne 0x82229084
	if (!ctx.cr0.eq) goto loc_82229084;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8222909c
	goto loc_8222909C;
loc_82229084:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lis r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82229098
	if (!ctx.cr6.eq) goto loc_82229098;
	// ori r10,r10,32769
	ctx.r10.u64 = ctx.r10.u64 | 32769;
	// b 0x8222909c
	goto loc_8222909C;
loc_82229098:
	// ori r10,r10,49155
	ctx.r10.u64 = ctx.r10.u64 | 49155;
loc_8222909C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,8704
	ctx.r10.s64 = 8704;
	// li r9,8712
	ctx.r9.s64 = 8712;
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r7,r7,13825
	ctx.r7.u64 = ctx.r7.u64 | 13825;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r5,17
	ctx.r5.s64 = 17;
	// mullw r10,r27,r6
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r6.s32);
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// rlwimi r10,r5,3,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_82229134:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229140"))) PPC_WEAK_FUNC(sub_82229140);
PPC_FUNC_IMPL(__imp__sub_82229140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x82229148;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// rlwinm. r11,r10,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// bne 0x82229180
	if (!ctx.cr0.eq) goto loc_82229180;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82229190
	goto loc_82229190;
loc_82229180:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// beq cr6,0x82229190
	if (ctx.cr6.eq) goto loc_82229190;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82229190:
	// li r11,40
	ctx.r11.s64 = 40;
	// li r10,8
	ctx.r10.s64 = 8;
	// slw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// slw r10,r10,r26
	ctx.r10.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r26.u8 & 0x3F));
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// addi r30,r8,-1
	ctx.r30.s64 = ctx.r8.s64 + -1;
	// rotlwi r5,r4,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// rotlwi r8,r29,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// divw r4,r4,r11
	ctx.r4.s32 = ctx.r4.s32 / ctx.r11.s32;
	// rotlwi r6,r30,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r25,r29,r11
	ctx.r25.s32 = ctx.r29.s32 / ctx.r11.s32;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mullw r31,r4,r11
	ctx.r31.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divw r4,r30,r10
	ctx.r4.s32 = ctx.r30.s32 / ctx.r10.s32;
	// mullw r30,r25,r11
	ctx.r30.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r11.s32);
	// andc r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r11,0
	// twllei r11,0
	// andc r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// divw r11,r7,r10
	ctx.r11.s32 = ctx.r7.s32 / ctx.r10.s32;
	// andc r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twllei r10,0
	// twllei r10,0
	// twlgei r5,-1
	// twlgei r6,-1
	// mullw r25,r4,r10
	ctx.r25.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// twlgei r8,-1
	// twlgei r9,-1
	// mullw r24,r11,r10
	ctx.r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82229350
	if (!ctx.cr6.lt) goto loc_82229350;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x82229350
	if (!ctx.cr6.lt) goto loc_82229350;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82229250
	if (!ctx.cr6.gt) goto loc_82229250;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
loc_82229250:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8222926c
	if (!ctx.cr6.lt) goto loc_8222926C;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8222926C:
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82229288
	if (!ctx.cr6.gt) goto loc_82229288;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82229288:
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x822292a4
	if (!ctx.cr6.lt) goto loc_822292A4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_822292A4:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r29,372(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r4,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822292e0
	if (ctx.cr0.eq) goto loc_822292E0;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82228e88
	ctx.lr = 0x822292E0;
	sub_82228E88(ctx, base);
loc_822292E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// sraw r8,r31,r27
	temp.u32 = ctx.r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r8.s64 = ctx.r31.s32 >> temp.u32;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// rlwimi r23,r11,17,14,15
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x30000) | (ctx.r23.u64 & 0xFFFFFFFFFFFCFFFF);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// sraw r11,r25,r26
	temp.u32 = ctx.r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r25.s32 < 0) & (((ctx.r25.s32 >> temp.u32) << temp.u32) != ctx.r25.s32);
	ctx.r11.s64 = ctx.r25.s32 >> temp.u32;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sraw r11,r30,r27
	temp.u32 = ctx.r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r30.s32 < 0) & (((ctx.r30.s32 >> temp.u32) << temp.u32) != ctx.r30.s32);
	ctx.r11.s64 = ctx.r30.s32 >> temp.u32;
	// sraw r9,r24,r26
	temp.u32 = ctx.r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r24.s32 < 0) & (((ctx.r24.s32 >> temp.u32) << temp.u32) != ctx.r24.s32);
	ctx.r9.s64 = ctx.r24.s32 >> temp.u32;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// clrlwi r11,r23,18
	ctx.r11.u64 = ctx.r23.u32 & 0x3FFF;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// srw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r27.u8 & 0x3F));
	// rlwimi r11,r23,0,0,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 0) & 0xFFFFC000) | (ctx.r11.u64 & 0xFFFFFFFF00003FFF);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r11,r11,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// srw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r27.u8 & 0x3F));
	// rlwimi r8,r11,18,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82228e88
	ctx.lr = 0x8222934C;
	sub_82228E88(ctx, base);
	// b 0x8222938c
	goto loc_8222938C;
loc_82229350:
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x82228e88
	ctx.lr = 0x8222938C;
	sub_82228E88(ctx, base);
loc_8222938C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229398"))) PPC_WEAK_FUNC(sub_82229398);
PPC_FUNC_IMPL(__imp__sub_82229398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x822293A0;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,5
	ctx.r27.s64 = 5;
	// lwz r15,10368(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10368);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r7,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r9,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r14,r27
	ctx.r14.u64 = ctx.r27.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82229434
	if (ctx.cr6.eq) goto loc_82229434;
	// addi r11,r5,3198
	ctx.r11.s64 = ctx.r5.s64 + 3198;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r14,4
	ctx.r14.s64 = 4;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r21,28(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r11,r21,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222941c
	if (!ctx.cr6.eq) goto loc_8222941C;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r21,r11,17,12,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0xF0000) | (ctx.r21.u64 & 0xFFFFFFFFFFF0FFFF);
loc_8222941C:
	// rlwinm r11,r21,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xF0000;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82229434
	if (!ctx.cr6.eq) goto loc_82229434;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r21,r11,16,12,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xF0000) | (ctx.r21.u64 & 0xFFFFFFFFFFF0FFFF);
loc_82229434:
	// lwz r11,10560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r19,0
	ctx.r19.s64 = 0;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// beq 0x82229450
	if (ctx.cr0.eq) goto loc_82229450;
	// li r19,118
	ctx.r19.s64 = 118;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
loc_82229450:
	// rlwinm. r11,r28,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822294c4
	if (ctx.cr0.eq) goto loc_822294C4;
	// lwz r29,396(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r19,r19,34561
	ctx.r19.u64 = ctx.r19.u64 | 34561;
	// ori r30,r30,4
	ctx.r30.u64 = ctx.r30.u64 | 4;
	// beq 0x82229478
	if (ctx.cr0.eq) goto loc_82229478;
	// rlwimi r30,r29,8,16,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFF00) | (ctx.r30.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r30,r30,0,27,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// b 0x82229488
	goto loc_82229488;
loc_82229478:
	// rlwinm. r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229488
	if (ctx.cr0.eq) goto loc_82229488;
	// rlwimi r30,r29,8,16,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFF00) | (ctx.r30.u64 & 0xFFFFFFFFFFFF00FF);
	// ori r30,r30,32
	ctx.r30.u64 = ctx.r30.u64 | 32;
loc_82229488:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822294a0
	if (!ctx.cr6.gt) goto loc_822294A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x822294A0;
	sub_82231210(ctx, base);
loc_822294A0:
	// li r11,8461
	ctx.r11.s64 = 8461;
	// li r10,255
	ctx.r10.s64 = 255;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwimi r29,r10,16,0,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFFFF00) | (ctx.r29.u64 & 0xFFFFFFFF000000FF);
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_822294C4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239148
	ctx.lr = 0x822294D4;
	sub_82239148(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822294ec
	if (!ctx.cr6.gt) goto loc_822294EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x822294EC;
	sub_82231210(ctx, base);
loc_822294EC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8320
	ctx.r11.u64 = ctx.r11.u64 | 8320;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// rlwinm. r29,r28,0,26,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x30;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// bne 0x82229638
	if (!ctx.cr0.eq) goto loc_82229638;
	// rlwinm r3,r21,16,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x82229638
	if (ctx.cr6.eq) goto loc_82229638;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x82229638
	if (ctx.cr6.eq) goto loc_82229638;
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// beq cr6,0x82229638
	if (ctx.cr6.eq) goto loc_82229638;
	// rlwinm. r11,r15,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,16
	ctx.r9.s64 = 16;
	// bne 0x8222955c
	if (!ctx.cr0.eq) goto loc_8222955C;
	// li r11,80
	ctx.r11.s64 = 80;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82229570
	goto loc_82229570;
loc_8222955C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,80
	ctx.r11.s64 = 80;
	// beq cr6,0x82229570
	if (ctx.cr6.eq) goto loc_82229570;
	// li r11,40
	ctx.r11.s64 = 40;
loc_82229570:
	// subf r8,r25,r24
	ctx.r8.s64 = ctx.r24.s64 - ctx.r25.s64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82229638
	if (ctx.cr6.lt) goto loc_82229638;
	// subf r11,r26,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r26.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82229638
	if (ctx.cr6.lt) goto loc_82229638;
	// lvlx128 v63,r0,r16
	temp.u32 = ctx.r16.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// lvrx128 v62,r9,r16
	temp.u32 = ctx.r9.u32 + ctx.r16.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// vor128 v1,v63,v62
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// rlwinm r4,r21,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 12) & 0x3F;
	// bl 0x822279c0
	ctx.lr = 0x822295A4;
	sub_822279C0(ctx, base);
	// li r10,8707
	ctx.r10.s64 = 8707;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// li r8,8194
	ctx.r8.s64 = 8194;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r10,r6,31376
	ctx.r10.s64 = ctx.r6.s64 + 31376;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// clrlwi r7,r21,20
	ctx.r7.u64 = ctx.r21.u32 & 0xFFF;
	// lfd f0,1272(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1272);
	// li r9,8461
	ctx.r9.s64 = 8461;
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfd f13,1280(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1280);
	// li r12,1
	ctx.r12.s64 = 1;
	// oris r11,r11,255
	ctx.r11.u64 = ctx.r11.u64 | 16711680;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// rldicr r12,r12,55,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// lis r17,0
	ctx.r17.s64 = 0;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// ori r17,r17,34679
	ctx.r17.u64 = ctx.r17.u64 | 34679;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82229638:
	// lbz r11,11071(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11071);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222965c
	if (!ctx.cr0.eq) goto loc_8222965C;
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8222965c
	if (!ctx.cr0.eq) goto loc_8222965C;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229664
	if (ctx.cr0.eq) goto loc_82229664;
loc_8222965C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232040
	ctx.lr = 0x82229664;
	sub_82232040(ctx, base);
loc_82229664:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229678
	if (ctx.cr0.eq) goto loc_82229678;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82229708
	goto loc_82229708;
loc_82229678:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229700
	if (ctx.cr0.eq) goto loc_82229700;
	// lwz r11,12792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12792);
	// lwz r9,13080(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13080);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82229698
	if (ctx.cr6.eq) goto loc_82229698;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229700
	if (!ctx.cr6.eq) goto loc_82229700;
loc_82229698:
	// lwz r11,12796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12796);
	// lwz r9,13084(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13084);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822296b0
	if (ctx.cr6.eq) goto loc_822296B0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229700
	if (!ctx.cr6.eq) goto loc_82229700;
loc_822296B0:
	// lwz r11,12800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12800);
	// lwz r9,13088(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822296c8
	if (ctx.cr6.eq) goto loc_822296C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229700
	if (!ctx.cr6.eq) goto loc_82229700;
loc_822296C8:
	// lwz r11,12804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12804);
	// lwz r9,13092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13092);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822296e0
	if (ctx.cr6.eq) goto loc_822296E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229700
	if (!ctx.cr6.eq) goto loc_82229700;
loc_822296E0:
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// lwz r9,13096(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13096);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822296f8
	if (ctx.cr6.eq) goto loc_822296F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229700
	if (!ctx.cr6.eq) goto loc_82229700;
loc_822296F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82229704
	goto loc_82229704;
loc_82229700:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82229704:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82229708:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222974c
	if (!ctx.cr0.eq) goto loc_8222974C;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229140
	ctx.lr = 0x82229748;
	sub_82229140(ctx, base);
	// b 0x82229928
	goto loc_82229928;
loc_8222974C:
	// lbz r11,11071(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11071);
	// lwz r20,13060(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13060);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222980c
	if (ctx.cr0.eq) goto loc_8222980C;
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222980c
	if (ctx.cr0.eq) goto loc_8222980C;
	// lis r12,5461
	ctx.r12.s64 = 357892096;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// and. r30,r20,r12
	ctx.r30.u64 = ctx.r20.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8222980c
	if (ctx.cr0.eq) goto loc_8222980C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82229800
	if (ctx.cr6.eq) goto loc_82229800;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82229798
	if (!ctx.cr6.gt) goto loc_82229798;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82229794;
	sub_82231210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82229798:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// lwz r6,13528(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// rlwimi r9,r10,18,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// lwz r4,13344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13344);
	// lwz r5,13348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13348);
	// rlwinm r10,r9,0,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFC000;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// subf r7,r5,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r5.s64;
	// rlwimi r10,r6,0,18,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC000);
	// subf r6,r4,r24
	ctx.r6.s64 = ctx.r24.s64 - ctx.r4.s64;
	// subf r5,r5,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r5.s64;
	// subf r4,r4,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r4.s64;
	// bl 0x82229140
	ctx.lr = 0x82229800;
	sub_82229140(ctx, base);
loc_82229800:
	// lis r12,-5462
	ctx.r12.s64 = -357957632;
	// ori r12,r12,43690
	ctx.r12.u64 = ctx.r12.u64 | 43690;
	// and r20,r20,r12
	ctx.r20.u64 = ctx.r20.u64 & ctx.r12.u64;
loc_8222980C:
	// lwz r11,13100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13100);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82229928
	if (!ctx.cr6.gt) goto loc_82229928;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r28,r31,13348
	ctx.r28.s64 = ctx.r31.s64 + 13348;
	// addi r24,r31,13108
	ctx.r24.s64 = ctx.r31.s64 + 13108;
	// b 0x82229834
	goto loc_82229834;
loc_8222982C:
	// lwz r25,348(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r26,356(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
loc_82229834:
	// lwz r11,-4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82229844
	if (ctx.cr6.gt) goto loc_82229844;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82229844:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82229854
	if (ctx.cr6.gt) goto loc_82229854;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82229854:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r27,364(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82229868
	if (ctx.cr6.lt) goto loc_82229868;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82229868:
	// lwz r29,8(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8222987c
	if (!ctx.cr6.lt) goto loc_8222987C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8222987C:
	// cmpw cr6,r25,r27
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8222990c
	if (!ctx.cr6.lt) goto loc_8222990C;
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8222990c
	if (!ctx.cr6.lt) goto loc_8222990C;
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r11,r11,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
	// and. r30,r11,r20
	ctx.r30.u64 = ctx.r11.u64 & ctx.r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8222990c
	if (ctx.cr0.eq) goto loc_8222990C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822298b8
	if (!ctx.cr6.gt) goto loc_822298B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x822298B4;
	sub_82231210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822298B8:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r7,r9,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r9.s64;
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// subf r5,r9,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r9.s64;
	// subf r6,r11,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r11.s64;
	// subf r4,r11,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r11.s64;
	// bl 0x82229140
	ctx.lr = 0x8222990C;
	sub_82229140(ctx, base);
loc_8222990C:
	// lwz r11,13100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13100);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222982c
	if (ctx.cr6.lt) goto loc_8222982C;
loc_82229928:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229934"))) PPC_WEAK_FUNC(sub_82229934);
PPC_FUNC_IMPL(__imp__sub_82229934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229938"))) PPC_WEAK_FUNC(sub_82229938);
PPC_FUNC_IMPL(__imp__sub_82229938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x82229940;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8222997c
	if (!ctx.cr6.eq) goto loc_8222997C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-13824
	ctx.r11.s64 = ctx.r11.s64 + -13824;
	// addi r23,r1,112
	ctx.r23.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8222997C:
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229990
	if (!ctx.cr6.eq) goto loc_82229990;
	// rlwinm. r27,r27,0,28,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82229fac
	if (ctx.cr0.eq) goto loc_82229FAC;
loc_82229990:
	// lfs f0,13000(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13000);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f13,13004(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13004);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f12,13008(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13008);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lfs f11,13012(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13012);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fctiwz f0,f11
	ctx.f0.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f12,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// bgt cr6,0x822299e4
	if (ctx.cr6.gt) goto loc_822299E4;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_822299E4:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// bgt cr6,0x822299f8
	if (ctx.cr6.gt) goto loc_822299F8;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
loc_822299F8:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// blt cr6,0x82229a10
	if (ctx.cr6.lt) goto loc_82229A10;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82229A10:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// blt cr6,0x82229a28
	if (ctx.cr6.lt) goto loc_82229A28;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82229A28:
	// lwz r11,12264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82229a74
	if (ctx.cr6.eq) goto loc_82229A74;
	// lwz r11,13028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13028);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82229a44
	if (ctx.cr6.gt) goto loc_82229A44;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82229A44:
	// lwz r11,13032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13032);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82229a54
	if (ctx.cr6.gt) goto loc_82229A54;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82229A54:
	// lwz r11,13036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13036);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82229a64
	if (ctx.cr6.lt) goto loc_82229A64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82229A64:
	// lwz r11,13040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13040);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82229a74
	if (ctx.cr6.lt) goto loc_82229A74;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82229A74:
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x82229fac
	if (!ctx.cr6.gt) goto loc_82229FAC;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82229fac
	if (!ctx.cr6.gt) goto loc_82229FAC;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82229ba4
	if (ctx.cr6.eq) goto loc_82229BA4;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82229ab0
	if (ctx.cr6.eq) goto loc_82229AB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// bl 0x82239148
	ctx.lr = 0x82229AAC;
	sub_82239148(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
loc_82229AB0:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82229ae0
	if (ctx.cr6.eq) goto loc_82229AE0;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82229AD4;
	sub_822394D8(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82229AE0:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82229b18
	if (ctx.cr6.eq) goto loc_82229B18;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82229B04;
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
loc_82229B18:
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
	// beq cr6,0x82229b60
	if (ctx.cr6.eq) goto loc_82229B60;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82229B48;
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
loc_82229B60:
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
	// beq cr6,0x82229ba4
	if (ctx.cr6.eq) goto loc_82229BA4;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82229B8C;
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
loc_82229BA4:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82229bf4
	if (ctx.cr6.eq) goto loc_82229BF4;
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
	// beq cr6,0x82229bf4
	if (ctx.cr6.eq) goto loc_82229BF4;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82229BDC;
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
loc_82229BF4:
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82229c2c
	if (ctx.cr6.eq) goto loc_82229C2C;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82229c2c
	if (ctx.cr6.eq) goto loc_82229C2C;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822394d8
	ctx.lr = 0x82229C20;
	sub_822394D8(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_82229C2C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82229c48
	if (!ctx.cr6.gt) goto loc_82229C48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82229C44;
	sub_82231210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82229C48:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82229c68
	if (ctx.cr0.eq) goto loc_82229C68;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13060);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_82229C68:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16356
	ctx.r8.s64 = -1071906816;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r6,27
	ctx.r6.s64 = 27;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r5,108
	ctx.r5.s64 = 108;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r29,r10,28168
	ctx.r29.s64 = ctx.r10.s64 + 28168;
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stwu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x82229CB4;
	sub_8233E4E0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82229cd0
	if (!ctx.cr6.gt) goto loc_82229CD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82229CD0;
	sub_82231210(ctx, base);
loc_82229CD0:
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
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,36
	ctx.r5.s64 = 36;
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
	ctx.lr = 0x82229D00;
	sub_8233E4E0(ctx, base);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4097
	ctx.r9.s64 = 268500992;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82229d40
	if (!ctx.cr6.gt) goto loc_82229D40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82229D40;
	sub_82231210(ctx, base);
loc_82229D40:
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
	// li r20,0
	ctx.r20.s64 = 0;
	// li r12,1
	ctx.r12.s64 = 1;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// clrlwi. r19,r27,28
	ctx.r19.u64 = ctx.r27.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
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
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r3.u32 = ea;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,40,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
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
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// bne 0x82229e90
	if (!ctx.cr0.eq) goto loc_82229E90;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229398
	ctx.lr = 0x82229E8C;
	sub_82229398(ctx, base);
	// b 0x82229f64
	goto loc_82229F64;
loc_82229E90:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82229ea4
	if (!ctx.cr6.gt) goto loc_82229EA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x82229EA4;
	sub_82231210(ctx, base);
loc_82229EA4:
	// li r11,8452
	ctx.r11.s64 = 8452;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,8706
	ctx.r11.s64 = 8706;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,8705
	ctx.r8.s64 = 8705;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r12,1
	ctx.r12.s64 = 1;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,12792
	ctx.r29.s64 = ctx.r31.s64 + 12792;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
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
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82229F08:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229f54
	if (ctx.cr0.eq) goto loc_82229F54;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229f54
	if (ctx.cr6.eq) goto loc_82229F54;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229398
	ctx.lr = 0x82229F50;
	sub_82229398(ctx, base);
	// rlwinm r27,r27,0,28,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
loc_82229F54:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82229f08
	if (ctx.cr6.lt) goto loc_82229F08;
loc_82229F64:
	// lwz r11,10440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,10436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x8222a278
	ctx.lr = 0x82229F94;
	sub_8222A278(ctx, base);
	// lbz r11,11069(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11069);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,11069(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11069, ctx.r11.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82229FAC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229FB8"))) PPC_WEAK_FUNC(sub_82229FB8);
PPC_FUNC_IMPL(__imp__sub_82229FB8) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8222a0c8
	if (!ctx.cr6.eq) goto loc_8222A0C8;
	// lwz r7,12792(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12792);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne 0x82229fe4
	if (!ctx.cr0.eq) goto loc_82229FE4;
	// lwz r11,12808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12808);
loc_82229FE4:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r11,11068(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11068);
	// rlwinm r10,r9,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// rlwinm r9,r9,29,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7FFF;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm. r31,r11,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq 0x8222a020
	if (ctx.cr0.eq) goto loc_8222A020;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222a0ac
	goto loc_8222A0AC;
loc_8222A020:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222a0a4
	if (ctx.cr0.eq) goto loc_8222A0A4;
	// lwz r11,13080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13080);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8222a03c
	if (ctx.cr6.eq) goto loc_8222A03C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8222a0a4
	if (!ctx.cr6.eq) goto loc_8222A0A4;
loc_8222A03C:
	// lwz r11,12796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12796);
	// lwz r10,13084(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13084);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a054
	if (ctx.cr6.eq) goto loc_8222A054;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a0a4
	if (!ctx.cr6.eq) goto loc_8222A0A4;
loc_8222A054:
	// lwz r11,12800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12800);
	// lwz r10,13088(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13088);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a06c
	if (ctx.cr6.eq) goto loc_8222A06C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a0a4
	if (!ctx.cr6.eq) goto loc_8222A0A4;
loc_8222A06C:
	// lwz r11,12804(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12804);
	// lwz r10,13092(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13092);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a084
	if (ctx.cr6.eq) goto loc_8222A084;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a0a4
	if (!ctx.cr6.eq) goto loc_8222A0A4;
loc_8222A084:
	// lwz r11,12808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12808);
	// lwz r10,13096(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a09c
	if (ctx.cr6.eq) goto loc_8222A09C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a0a4
	if (!ctx.cr6.eq) goto loc_8222A0A4;
loc_8222A09C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222a0a8
	goto loc_8222A0A8;
loc_8222A0A4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8222A0A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8222A0AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222a0c4
	if (ctx.cr0.eq) goto loc_8222A0C4;
	// lwz r11,13532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13532);
	// lwz r10,13536(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13536);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8222A0C4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_8222A0C8:
	// rlwinm. r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222a0dc
	if (!ctx.cr0.eq) goto loc_8222A0DC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
loc_8222A0DC:
	// bl 0x82229938
	ctx.lr = 0x8222A0E0;
	sub_82229938(ctx, base);
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

__attribute__((alias("__imp__sub_8222A0F4"))) PPC_WEAK_FUNC(sub_8222A0F4);
PPC_FUNC_IMPL(__imp__sub_8222A0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A0F8"))) PPC_WEAK_FUNC(sub_8222A0F8);
PPC_FUNC_IMPL(__imp__sub_8222A0F8) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8222a124
	if (!ctx.cr6.gt) goto loc_8222A124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x8222A124;
	sub_82231210(ctx, base);
loc_8222A124:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// ori r10,r10,25088
	ctx.r10.u64 = ctx.r10.u64 | 25088;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,13060(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13060);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ori r8,r8,24832
	ctx.r8.u64 = ctx.r8.u64 | 24832;
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r6,25344
	ctx.r6.u64 = ctx.r6.u64 | 25344;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// lwz r11,13064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13064);
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// lwz r11,10440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10440);
	// lwz r10,10436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x8222a278
	ctx.lr = 0x8222A1AC;
	sub_8222A278(ctx, base);
	// lwz r11,11044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11044);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,20,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// bl 0x822324a0
	ctx.lr = 0x8222A1BC;
	sub_822324A0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_8222A1E8"))) PPC_WEAK_FUNC(sub_8222A1E8);
PPC_FUNC_IMPL(__imp__sub_8222A1E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm. r11,r10,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222a1fc
	if (!ctx.cr0.eq) goto loc_8222A1FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8222a214
	goto loc_8222A214;
loc_8222A1FC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lis r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8222a210
	if (!ctx.cr6.eq) goto loc_8222A210;
	// ori r11,r11,32769
	ctx.r11.u64 = ctx.r11.u64 | 32769;
	// b 0x8222a214
	goto loc_8222A214;
loc_8222A210:
	// ori r11,r11,49155
	ctx.r11.u64 = ctx.r11.u64 | 49155;
loc_8222A214:
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r11,10684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10684, ctx.r11.u32);
	// stw r10,10368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10368, ctx.r10.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | ctx.r12.u64;
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// addi r9,r11,-21896
	ctx.r9.s64 = ctx.r11.s64 + -21896;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// addi r4,r10,-21920
	ctx.r4.s64 = ctx.r10.s64 + -21920;
	// or r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 | ctx.r12.u64;
	// std r8,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,13028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13028, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13032, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,13036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13036, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,13040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13040, ctx.r11.u32);
	// b 0x8222cbc8
	sub_8222CBC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A278"))) PPC_WEAK_FUNC(sub_8222A278);
PPC_FUNC_IMPL(__imp__sub_8222A278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x8222A280;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8222a2b0
	if (!ctx.cr6.gt) goto loc_8222A2B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x8222A2B0;
	sub_82231210(ctx, base);
loc_8222A2B0:
	// lbz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8222a2c4
	if (ctx.cr0.eq) goto loc_8222A2C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222a354
	goto loc_8222A354;
loc_8222A2C4:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222a34c
	if (ctx.cr0.eq) goto loc_8222A34C;
	// lwz r11,12792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12792);
	// lwz r10,13080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13080);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a2e4
	if (ctx.cr6.eq) goto loc_8222A2E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a34c
	if (!ctx.cr6.eq) goto loc_8222A34C;
loc_8222A2E4:
	// lwz r11,12796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12796);
	// lwz r10,13084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13084);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a2fc
	if (ctx.cr6.eq) goto loc_8222A2FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a34c
	if (!ctx.cr6.eq) goto loc_8222A34C;
loc_8222A2FC:
	// lwz r11,12800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12800);
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a314
	if (ctx.cr6.eq) goto loc_8222A314;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a34c
	if (!ctx.cr6.eq) goto loc_8222A34C;
loc_8222A314:
	// lwz r11,12804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12804);
	// lwz r10,13092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13092);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a32c
	if (ctx.cr6.eq) goto loc_8222A32C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a34c
	if (!ctx.cr6.eq) goto loc_8222A34C;
loc_8222A32C:
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// lwz r10,13096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a344
	if (ctx.cr6.eq) goto loc_8222A344;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a34c
	if (!ctx.cr6.eq) goto loc_8222A34C;
loc_8222A344:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222a350
	goto loc_8222A350;
loc_8222A34C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222A350:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8222A354:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x8222a398
	if (!ctx.cr0.eq) goto loc_8222A398;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// rlwinm r9,r24,16,2,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0x3FFF0000;
	// ori r11,r11,8320
	ctx.r11.u64 = ctx.r11.u64 | 8320;
	// rlwinm r8,r22,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0x3FFF0000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r25,18
	ctx.r11.u64 = ctx.r25.u32 & 0x3FFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r9,r23,18
	ctx.r9.u64 = ctx.r23.u32 & 0x3FFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// b 0x8222a554
	goto loc_8222A554;
loc_8222A398:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r11,r11,24832
	ctx.r11.u64 = ctx.r11.u64 | 24832;
	// li r27,0
	ctx.r27.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// ori r26,r9,24576
	ctx.r26.u64 = ctx.r9.u64 | 24576;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,13100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13100);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8222a4d8
	if (!ctx.cr6.gt) goto loc_8222A4D8;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,13108
	ctx.r30.s64 = ctx.r31.s64 + 13108;
	// addi r28,r31,13348
	ctx.r28.s64 = ctx.r31.s64 + 13348;
loc_8222A3D0:
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r6,-4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8222a3ec
	if (ctx.cr6.gt) goto loc_8222A3EC;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8222A3EC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8222a400
	if (ctx.cr6.gt) goto loc_8222A400;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8222A400:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r23,r9
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8222a410
	if (!ctx.cr6.lt) goto loc_8222A410;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_8222A410:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8222a420
	if (!ctx.cr6.lt) goto loc_8222A420;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8222A420:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8222a430
	if (!ctx.cr6.lt) goto loc_8222A430;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8222a440
	if (ctx.cr6.lt) goto loc_8222A440;
loc_8222A430:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8222A440:
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// slw r3,r3,r29
	ctx.r3.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r29.u8 & 0x3F));
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// lis r4,-16381
	ctx.r4.s64 = -1073545216;
	// neg r6,r6
	ctx.r6.s64 = -ctx.r6.s64;
	// ori r4,r4,21761
	ctx.r4.u64 = ctx.r4.u64 | 21761;
	// li r21,8320
	ctx.r21.s64 = 8320;
	// neg r5,r5
	ctx.r5.s64 = -ctx.r5.s64;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// clrlwi r6,r6,17
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r5,r5,16,1,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x7FFF0000;
	// rlwinm r8,r8,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3FFF0000;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// clrlwi r7,r7,18
	ctx.r7.u64 = ctx.r7.u32 & 0x3FFF;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r21.u32);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,16,2,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3FFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r9,r9,18
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// ble cr6,0x8222a4bc
	if (!ctx.cr6.gt) goto loc_8222A4BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231210
	ctx.lr = 0x8222A4B8;
	sub_82231210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8222A4BC:
	// lwz r10,13100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13100);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8222a3d0
	if (ctx.cr6.lt) goto loc_8222A3D0;
loc_8222A4D8:
	// lbz r10,11071(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11071);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8222a534
	if (ctx.cr0.eq) goto loc_8222A534;
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8222a534
	if (ctx.cr0.eq) goto loc_8222A534;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-16382
	ctx.r8.s64 = -1073610752;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// ori r10,r8,21761
	ctx.r10.u64 = ctx.r8.u64 | 21761;
	// li r7,8321
	ctx.r7.s64 = 8321;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// clrlwi r6,r25,18
	ctx.r6.u64 = ctx.r25.u32 & 0x3FFF;
	// rlwinm r8,r24,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0x3FFF0000;
	// rlwinm r5,r22,16,2,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0x3FFF0000;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrlwi r6,r23,18
	ctx.r6.u64 = ctx.r23.u32 & 0x3FFF;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// or r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_8222A534:
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,13060(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13060);
	// ori r10,r10,24832
	ctx.r10.u64 = ctx.r10.u64 | 24832;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13064(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13064);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_8222A554:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A560"))) PPC_WEAK_FUNC(sub_8222A560);
PPC_FUNC_IMPL(__imp__sub_8222A560) {
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
	// bl 0x8233fa30
	ctx.lr = 0x8222A574;
	__savefpr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12792(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12792);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// fmr f29,f5
	ctx.f29.f64 = ctx.f5.f64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmr f28,f6
	ctx.f28.f64 = ctx.f6.f64;
	// bne 0x8222a5a8
	if (!ctx.cr0.eq) goto loc_8222A5A8;
	// lwz r9,12808(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12808);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222a7a0
	if (ctx.cr6.eq) goto loc_8222A7A0;
loc_8222A5A8:
	// lbz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8222a5bc
	if (ctx.cr0.eq) goto loc_8222A5BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222a648
	goto loc_8222A648;
loc_8222A5BC:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222a640
	if (ctx.cr0.eq) goto loc_8222A640;
	// lwz r11,13080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13080);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8222a5d8
	if (ctx.cr6.eq) goto loc_8222A5D8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222a640
	if (!ctx.cr6.eq) goto loc_8222A640;
loc_8222A5D8:
	// lwz r11,12796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12796);
	// lwz r10,13084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13084);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a5f0
	if (ctx.cr6.eq) goto loc_8222A5F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a640
	if (!ctx.cr6.eq) goto loc_8222A640;
loc_8222A5F0:
	// lwz r11,12800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12800);
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a608
	if (ctx.cr6.eq) goto loc_8222A608;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a640
	if (!ctx.cr6.eq) goto loc_8222A640;
loc_8222A608:
	// lwz r11,12804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12804);
	// lwz r10,13092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13092);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a620
	if (ctx.cr6.eq) goto loc_8222A620;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a640
	if (!ctx.cr6.eq) goto loc_8222A640;
loc_8222A620:
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// lwz r10,13096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a638
	if (ctx.cr6.eq) goto loc_8222A638;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a640
	if (!ctx.cr6.eq) goto loc_8222A640;
loc_8222A638:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222a644
	goto loc_8222A644;
loc_8222A640:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222A644:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8222A648:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222a65c
	if (ctx.cr0.eq) goto loc_8222A65C;
	// lwz r11,13532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13532);
	// lwz r7,13536(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13536);
	// b 0x8222a670
	goto loc_8222A670;
loc_8222A65C:
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r11,r10,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,29,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
loc_8222A670:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiwz f0,f3
	ctx.f0.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f30
	ctx.f0.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f30.f64));
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8222a6a4
	if (!ctx.cr6.lt) goto loc_8222A6A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8222A6A4:
	// fctiwz f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8222a6c0
	if (ctx.cr6.lt) goto loc_8222A6C0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_8222A6C0:
	// subf. r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// blt 0x8222a6d4
	if (ctx.cr0.lt) goto loc_8222A6D4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8222a6dc
	if (!ctx.cr6.lt) goto loc_8222A6DC;
loc_8222A6D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8222A6DC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f31,13000(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13000, temp.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfs f30,13004(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13004, temp.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// frsp f27,f0
	ctx.f27.f64 = double(float(ctx.f0.f64));
	// stfs f29,13016(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13016, temp.u32);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// stfs f28,13020(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13020, temp.u32);
	// stfs f27,13012(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13012, temp.u32);
	// stw r11,13024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13024, ctx.r11.u32);
	// addi r4,r31,13028
	ctx.r4.s64 = ctx.r31.s64 + 13028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f26,f0
	ctx.f26.f64 = double(float(ctx.f0.f64));
	// stfs f26,13008(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13008, temp.u32);
	// bl 0x8222cad0
	ctx.lr = 0x8222A730;
	sub_8222CAD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fsubs f0,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// stfs f0,10520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10520, temp.u32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// stfs f29,10524(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10524, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stfs f13,10504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10504, temp.u32);
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f13,10508(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10508, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,10512(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10512, temp.u32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,10516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10516, temp.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8222A7A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8233fa7c
	ctx.lr = 0x8222A7AC;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A7BC"))) PPC_WEAK_FUNC(sub_8222A7BC);
PPC_FUNC_IMPL(__imp__sub_8222A7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A7C0"))) PPC_WEAK_FUNC(sub_8222A7C0);
PPC_FUNC_IMPL(__imp__sub_8222A7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A7DC"))) PPC_WEAK_FUNC(sub_8222A7DC);
PPC_FUNC_IMPL(__imp__sub_8222A7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A7E0"))) PPC_WEAK_FUNC(sub_8222A7E0);
PPC_FUNC_IMPL(__imp__sub_8222A7E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A7EC"))) PPC_WEAK_FUNC(sub_8222A7EC);
PPC_FUNC_IMPL(__imp__sub_8222A7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A7F0"))) PPC_WEAK_FUNC(sub_8222A7F0);
PPC_FUNC_IMPL(__imp__sub_8222A7F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,3,21,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x7F8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF807);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A80C"))) PPC_WEAK_FUNC(sub_8222A80C);
PPC_FUNC_IMPL(__imp__sub_8222A80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A810"))) PPC_WEAK_FUNC(sub_8222A810);
PPC_FUNC_IMPL(__imp__sub_8222A810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,29,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A81C"))) PPC_WEAK_FUNC(sub_8222A81C);
PPC_FUNC_IMPL(__imp__sub_8222A81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A820"))) PPC_WEAK_FUNC(sub_8222A820);
PPC_FUNC_IMPL(__imp__sub_8222A820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A844"))) PPC_WEAK_FUNC(sub_8222A844);
PPC_FUNC_IMPL(__imp__sub_8222A844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A848"))) PPC_WEAK_FUNC(sub_8222A848);
PPC_FUNC_IMPL(__imp__sub_8222A848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A854"))) PPC_WEAK_FUNC(sub_8222A854);
PPC_FUNC_IMPL(__imp__sub_8222A854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A858"))) PPC_WEAK_FUNC(sub_8222A858);
PPC_FUNC_IMPL(__imp__sub_8222A858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,12260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12260, ctx.r11.u32);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// bne 0x8222a890
	if (!ctx.cr0.eq) goto loc_8222A890;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8222A890:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8222a8a0
	if (!ctx.cr6.eq) goto loc_8222A8A0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_8222A8A0:
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A8D8"))) PPC_WEAK_FUNC(sub_8222A8D8);
PPC_FUNC_IMPL(__imp__sub_8222A8D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A8E4"))) PPC_WEAK_FUNC(sub_8222A8E4);
PPC_FUNC_IMPL(__imp__sub_8222A8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A8E8"))) PPC_WEAK_FUNC(sub_8222A8E8);
PPC_FUNC_IMPL(__imp__sub_8222A8E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwimi r10,r4,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12256, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// bne 0x8222a92c
	if (!ctx.cr0.eq) goto loc_8222A92C;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8222A92C:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A964"))) PPC_WEAK_FUNC(sub_8222A964);
PPC_FUNC_IMPL(__imp__sub_8222A964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A968"))) PPC_WEAK_FUNC(sub_8222A968);
PPC_FUNC_IMPL(__imp__sub_8222A968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// rlwinm r3,r11,27,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A974"))) PPC_WEAK_FUNC(sub_8222A974);
PPC_FUNC_IMPL(__imp__sub_8222A974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A978"))) PPC_WEAK_FUNC(sub_8222A978);
PPC_FUNC_IMPL(__imp__sub_8222A978) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwimi r10,r4,0,27,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12256, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// bne 0x8222a9bc
	if (!ctx.cr0.eq) goto loc_8222A9BC;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8222A9BC:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A9F4"))) PPC_WEAK_FUNC(sub_8222A9F4);
PPC_FUNC_IMPL(__imp__sub_8222A9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A9F8"))) PPC_WEAK_FUNC(sub_8222A9F8);
PPC_FUNC_IMPL(__imp__sub_8222A9F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AA04"))) PPC_WEAK_FUNC(sub_8222AA04);
PPC_FUNC_IMPL(__imp__sub_8222AA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AA08"))) PPC_WEAK_FUNC(sub_8222AA08);
PPC_FUNC_IMPL(__imp__sub_8222AA08) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwimi r10,r4,8,19,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x1F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE0FF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12256, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// bne 0x8222aa4c
	if (!ctx.cr0.eq) goto loc_8222AA4C;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8222AA4C:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AA84"))) PPC_WEAK_FUNC(sub_8222AA84);
PPC_FUNC_IMPL(__imp__sub_8222AA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AA88"))) PPC_WEAK_FUNC(sub_8222AA88);
PPC_FUNC_IMPL(__imp__sub_8222AA88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AA94"))) PPC_WEAK_FUNC(sub_8222AA94);
PPC_FUNC_IMPL(__imp__sub_8222AA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AA98"))) PPC_WEAK_FUNC(sub_8222AA98);
PPC_FUNC_IMPL(__imp__sub_8222AA98) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwimi r10,r4,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12256, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AAF4"))) PPC_WEAK_FUNC(sub_8222AAF4);
PPC_FUNC_IMPL(__imp__sub_8222AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AAF8"))) PPC_WEAK_FUNC(sub_8222AAF8);
PPC_FUNC_IMPL(__imp__sub_8222AAF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// rlwinm r3,r11,11,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AB04"))) PPC_WEAK_FUNC(sub_8222AB04);
PPC_FUNC_IMPL(__imp__sub_8222AB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AB08"))) PPC_WEAK_FUNC(sub_8222AB08);
PPC_FUNC_IMPL(__imp__sub_8222AB08) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwimi r10,r4,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12256, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AB64"))) PPC_WEAK_FUNC(sub_8222AB64);
PPC_FUNC_IMPL(__imp__sub_8222AB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AB68"))) PPC_WEAK_FUNC(sub_8222AB68);
PPC_FUNC_IMPL(__imp__sub_8222AB68) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12256);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AB74"))) PPC_WEAK_FUNC(sub_8222AB74);
PPC_FUNC_IMPL(__imp__sub_8222AB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AB78"))) PPC_WEAK_FUNC(sub_8222AB78);
PPC_FUNC_IMPL(__imp__sub_8222AB78) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwimi r10,r4,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12256, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222ABD4"))) PPC_WEAK_FUNC(sub_8222ABD4);
PPC_FUNC_IMPL(__imp__sub_8222ABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222ABD8"))) PPC_WEAK_FUNC(sub_8222ABD8);
PPC_FUNC_IMPL(__imp__sub_8222ABD8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12256(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12256);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222ABE4"))) PPC_WEAK_FUNC(sub_8222ABE4);
PPC_FUNC_IMPL(__imp__sub_8222ABE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222ABE8"))) PPC_WEAK_FUNC(sub_8222ABE8);
PPC_FUNC_IMPL(__imp__sub_8222ABE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwimi r11,r4,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,12260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12260, ctx.r11.u32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r11,12256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
	// bne cr6,0x8222ac24
	if (!ctx.cr6.eq) goto loc_8222AC24;
	// andi. r9,r11,4112
	ctx.r9.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r8,r11,4,12,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r9,r9,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_8222AC24:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8222ac34
	if (!ctx.cr6.eq) goto loc_8222AC34;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_8222AC34:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AC6C"))) PPC_WEAK_FUNC(sub_8222AC6C);
PPC_FUNC_IMPL(__imp__sub_8222AC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AC70"))) PPC_WEAK_FUNC(sub_8222AC70);
PPC_FUNC_IMPL(__imp__sub_8222AC70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AC7C"))) PPC_WEAK_FUNC(sub_8222AC7C);
PPC_FUNC_IMPL(__imp__sub_8222AC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AC80"))) PPC_WEAK_FUNC(sub_8222AC80);
PPC_FUNC_IMPL(__imp__sub_8222AC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,10500(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10500, temp.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222ACB8"))) PPC_WEAK_FUNC(sub_8222ACB8);
PPC_FUNC_IMPL(__imp__sub_8222ACB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,10500(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10500);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222ACE0"))) PPC_WEAK_FUNC(sub_8222ACE0);
PPC_FUNC_IMPL(__imp__sub_8222ACE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222ACFC"))) PPC_WEAK_FUNC(sub_8222ACFC);
PPC_FUNC_IMPL(__imp__sub_8222ACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AD00"))) PPC_WEAK_FUNC(sub_8222AD00);
PPC_FUNC_IMPL(__imp__sub_8222AD00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AD0C"))) PPC_WEAK_FUNC(sub_8222AD0C);
PPC_FUNC_IMPL(__imp__sub_8222AD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AD10"))) PPC_WEAK_FUNC(sub_8222AD10);
PPC_FUNC_IMPL(__imp__sub_8222AD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rlwinm r10,r4,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// addi r11,r10,31376
	ctx.r11.s64 = ctx.r10.s64 + 31376;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r12,15
	ctx.r12.s64 = 15;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// rldicr r12,r12,33,30
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFE00000000;
	// lfs f0,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,10472(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10472, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,10468(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10468, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,10464(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10464, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,10476(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10476, temp.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222ADA4"))) PPC_WEAK_FUNC(sub_8222ADA4);
PPC_FUNC_IMPL(__imp__sub_8222ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222ADA8"))) PPC_WEAK_FUNC(sub_8222ADA8);
PPC_FUNC_IMPL(__imp__sub_8222ADA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,10468(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10468);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,10472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10472);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f10,10464(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10464);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10476(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10476);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f10,f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f10
	ctx.f13.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-4(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// rlwimi r10,r9,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AE18"))) PPC_WEAK_FUNC(sub_8222AE18);
PPC_FUNC_IMPL(__imp__sub_8222AE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10680);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10680, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AE3C"))) PPC_WEAK_FUNC(sub_8222AE3C);
PPC_FUNC_IMPL(__imp__sub_8222AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AE40"))) PPC_WEAK_FUNC(sub_8222AE40);
PPC_FUNC_IMPL(__imp__sub_8222AE40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10680);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AE4C"))) PPC_WEAK_FUNC(sub_8222AE4C);
PPC_FUNC_IMPL(__imp__sub_8222AE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AE50"))) PPC_WEAK_FUNC(sub_8222AE50);
PPC_FUNC_IMPL(__imp__sub_8222AE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10606(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10606, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AE90"))) PPC_WEAK_FUNC(sub_8222AE90);
PPC_FUNC_IMPL(__imp__sub_8222AE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,10606(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10606);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AEC4"))) PPC_WEAK_FUNC(sub_8222AEC4);
PPC_FUNC_IMPL(__imp__sub_8222AEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AEC8"))) PPC_WEAK_FUNC(sub_8222AEC8);
PPC_FUNC_IMPL(__imp__sub_8222AEC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24376);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222aedc
	if (ctx.cr6.eq) goto loc_8222AEDC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x8222aee0
	goto loc_8222AEE0;
loc_8222AEDC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_8222AEE0:
	// stw r11,24376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AEE8"))) PPC_WEAK_FUNC(sub_8222AEE8);
PPC_FUNC_IMPL(__imp__sub_8222AEE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24376);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AEF4"))) PPC_WEAK_FUNC(sub_8222AEF4);
PPC_FUNC_IMPL(__imp__sub_8222AEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AEF8"))) PPC_WEAK_FUNC(sub_8222AEF8);
PPC_FUNC_IMPL(__imp__sub_8222AEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12808);
	// lwz r10,10548(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// stw r4,12284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12284, ctx.r4.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AF30"))) PPC_WEAK_FUNC(sub_8222AF30);
PPC_FUNC_IMPL(__imp__sub_8222AF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AF38"))) PPC_WEAK_FUNC(sub_8222AF38);
PPC_FUNC_IMPL(__imp__sub_8222AF38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AF54"))) PPC_WEAK_FUNC(sub_8222AF54);
PPC_FUNC_IMPL(__imp__sub_8222AF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AF58"))) PPC_WEAK_FUNC(sub_8222AF58);
PPC_FUNC_IMPL(__imp__sub_8222AF58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AF64"))) PPC_WEAK_FUNC(sub_8222AF64);
PPC_FUNC_IMPL(__imp__sub_8222AF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AF68"))) PPC_WEAK_FUNC(sub_8222AF68);
PPC_FUNC_IMPL(__imp__sub_8222AF68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AF8C"))) PPC_WEAK_FUNC(sub_8222AF8C);
PPC_FUNC_IMPL(__imp__sub_8222AF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AF90"))) PPC_WEAK_FUNC(sub_8222AF90);
PPC_FUNC_IMPL(__imp__sub_8222AF90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AF9C"))) PPC_WEAK_FUNC(sub_8222AF9C);
PPC_FUNC_IMPL(__imp__sub_8222AF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AFA0"))) PPC_WEAK_FUNC(sub_8222AFA0);
PPC_FUNC_IMPL(__imp__sub_8222AFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12808);
	// lwz r10,10548(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// stw r4,12288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12288, ctx.r4.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r10,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AFD8"))) PPC_WEAK_FUNC(sub_8222AFD8);
PPC_FUNC_IMPL(__imp__sub_8222AFD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12288);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AFE0"))) PPC_WEAK_FUNC(sub_8222AFE0);
PPC_FUNC_IMPL(__imp__sub_8222AFE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B004"))) PPC_WEAK_FUNC(sub_8222B004);
PPC_FUNC_IMPL(__imp__sub_8222B004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B008"))) PPC_WEAK_FUNC(sub_8222B008);
PPC_FUNC_IMPL(__imp__sub_8222B008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B014"))) PPC_WEAK_FUNC(sub_8222B014);
PPC_FUNC_IMPL(__imp__sub_8222B014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B018"))) PPC_WEAK_FUNC(sub_8222B018);
PPC_FUNC_IMPL(__imp__sub_8222B018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B034"))) PPC_WEAK_FUNC(sub_8222B034);
PPC_FUNC_IMPL(__imp__sub_8222B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B038"))) PPC_WEAK_FUNC(sub_8222B038);
PPC_FUNC_IMPL(__imp__sub_8222B038) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B044"))) PPC_WEAK_FUNC(sub_8222B044);
PPC_FUNC_IMPL(__imp__sub_8222B044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B048"))) PPC_WEAK_FUNC(sub_8222B048);
PPC_FUNC_IMPL(__imp__sub_8222B048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,11,18,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 11) & 0x3800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC7FF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B06C"))) PPC_WEAK_FUNC(sub_8222B06C);
PPC_FUNC_IMPL(__imp__sub_8222B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B070"))) PPC_WEAK_FUNC(sub_8222B070);
PPC_FUNC_IMPL(__imp__sub_8222B070) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,21,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B07C"))) PPC_WEAK_FUNC(sub_8222B07C);
PPC_FUNC_IMPL(__imp__sub_8222B07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B080"))) PPC_WEAK_FUNC(sub_8222B080);
PPC_FUNC_IMPL(__imp__sub_8222B080) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,17,12,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B0A4"))) PPC_WEAK_FUNC(sub_8222B0A4);
PPC_FUNC_IMPL(__imp__sub_8222B0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B0A8"))) PPC_WEAK_FUNC(sub_8222B0A8);
PPC_FUNC_IMPL(__imp__sub_8222B0A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B0B4"))) PPC_WEAK_FUNC(sub_8222B0B4);
PPC_FUNC_IMPL(__imp__sub_8222B0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B0B8"))) PPC_WEAK_FUNC(sub_8222B0B8);
PPC_FUNC_IMPL(__imp__sub_8222B0B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B0D4"))) PPC_WEAK_FUNC(sub_8222B0D4);
PPC_FUNC_IMPL(__imp__sub_8222B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B0D8"))) PPC_WEAK_FUNC(sub_8222B0D8);
PPC_FUNC_IMPL(__imp__sub_8222B0D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B0E4"))) PPC_WEAK_FUNC(sub_8222B0E4);
PPC_FUNC_IMPL(__imp__sub_8222B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B0E8"))) PPC_WEAK_FUNC(sub_8222B0E8);
PPC_FUNC_IMPL(__imp__sub_8222B0E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B104"))) PPC_WEAK_FUNC(sub_8222B104);
PPC_FUNC_IMPL(__imp__sub_8222B104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B108"))) PPC_WEAK_FUNC(sub_8222B108);
PPC_FUNC_IMPL(__imp__sub_8222B108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B114"))) PPC_WEAK_FUNC(sub_8222B114);
PPC_FUNC_IMPL(__imp__sub_8222B114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B118"))) PPC_WEAK_FUNC(sub_8222B118);
PPC_FUNC_IMPL(__imp__sub_8222B118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,23,6,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3800000) | (ctx.r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B13C"))) PPC_WEAK_FUNC(sub_8222B13C);
PPC_FUNC_IMPL(__imp__sub_8222B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B140"))) PPC_WEAK_FUNC(sub_8222B140);
PPC_FUNC_IMPL(__imp__sub_8222B140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B14C"))) PPC_WEAK_FUNC(sub_8222B14C);
PPC_FUNC_IMPL(__imp__sub_8222B14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B150"))) PPC_WEAK_FUNC(sub_8222B150);
PPC_FUNC_IMPL(__imp__sub_8222B150) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,29,0,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 29) & 0xE0000000) | (ctx.r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B174"))) PPC_WEAK_FUNC(sub_8222B174);
PPC_FUNC_IMPL(__imp__sub_8222B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B178"))) PPC_WEAK_FUNC(sub_8222B178);
PPC_FUNC_IMPL(__imp__sub_8222B178) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B184"))) PPC_WEAK_FUNC(sub_8222B184);
PPC_FUNC_IMPL(__imp__sub_8222B184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B188"))) PPC_WEAK_FUNC(sub_8222B188);
PPC_FUNC_IMPL(__imp__sub_8222B188) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,26,3,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0x1C000000) | (ctx.r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B1A4"))) PPC_WEAK_FUNC(sub_8222B1A4);
PPC_FUNC_IMPL(__imp__sub_8222B1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B1A8"))) PPC_WEAK_FUNC(sub_8222B1A8);
PPC_FUNC_IMPL(__imp__sub_8222B1A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,6,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B1B4"))) PPC_WEAK_FUNC(sub_8222B1B4);
PPC_FUNC_IMPL(__imp__sub_8222B1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B1B8"))) PPC_WEAK_FUNC(sub_8222B1B8);
PPC_FUNC_IMPL(__imp__sub_8222B1B8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10499(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10499, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B1CC"))) PPC_WEAK_FUNC(sub_8222B1CC);
PPC_FUNC_IMPL(__imp__sub_8222B1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B1D0"))) PPC_WEAK_FUNC(sub_8222B1D0);
PPC_FUNC_IMPL(__imp__sub_8222B1D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10499(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10499);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B1D8"))) PPC_WEAK_FUNC(sub_8222B1D8);
PPC_FUNC_IMPL(__imp__sub_8222B1D8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10498(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10498, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B1EC"))) PPC_WEAK_FUNC(sub_8222B1EC);
PPC_FUNC_IMPL(__imp__sub_8222B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B1F0"))) PPC_WEAK_FUNC(sub_8222B1F0);
PPC_FUNC_IMPL(__imp__sub_8222B1F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10498(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10498);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B1F8"))) PPC_WEAK_FUNC(sub_8222B1F8);
PPC_FUNC_IMPL(__imp__sub_8222B1F8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10497(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10497, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B20C"))) PPC_WEAK_FUNC(sub_8222B20C);
PPC_FUNC_IMPL(__imp__sub_8222B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B210"))) PPC_WEAK_FUNC(sub_8222B210);
PPC_FUNC_IMPL(__imp__sub_8222B210) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10497(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10497);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B218"))) PPC_WEAK_FUNC(sub_8222B218);
PPC_FUNC_IMPL(__imp__sub_8222B218) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10495(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10495, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B22C"))) PPC_WEAK_FUNC(sub_8222B22C);
PPC_FUNC_IMPL(__imp__sub_8222B22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B230"))) PPC_WEAK_FUNC(sub_8222B230);
PPC_FUNC_IMPL(__imp__sub_8222B230) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10495(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10495);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B238"))) PPC_WEAK_FUNC(sub_8222B238);
PPC_FUNC_IMPL(__imp__sub_8222B238) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10494(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10494, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B24C"))) PPC_WEAK_FUNC(sub_8222B24C);
PPC_FUNC_IMPL(__imp__sub_8222B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B250"))) PPC_WEAK_FUNC(sub_8222B250);
PPC_FUNC_IMPL(__imp__sub_8222B250) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10494(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10494);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B258"))) PPC_WEAK_FUNC(sub_8222B258);
PPC_FUNC_IMPL(__imp__sub_8222B258) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10493(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10493, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B26C"))) PPC_WEAK_FUNC(sub_8222B26C);
PPC_FUNC_IMPL(__imp__sub_8222B26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B270"))) PPC_WEAK_FUNC(sub_8222B270);
PPC_FUNC_IMPL(__imp__sub_8222B270) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10493(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10493);
	// blr 
	return;
}

