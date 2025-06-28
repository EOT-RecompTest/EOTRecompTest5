#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821BA490"))) PPC_WEAK_FUNC(sub_821BA490);
PPC_FUNC_IMPL(__imp__sub_821BA490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821BA498;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba5b8
	if (ctx.cr6.eq) goto loc_821BA5B8;
	// ld r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821b97e0
	ctx.lr = 0x821BA4C4;
	sub_821B97E0(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r11,r29,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r29.s64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ba4e4
	if (ctx.cr6.lt) goto loc_821BA4E4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821BA4E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821ba5b8
	if (ctx.cr6.eq) goto loc_821BA5B8;
	// clrlwi r26,r28,24
	ctx.r26.u64 = ctx.r28.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
loc_821BA4F4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821ba514
	if (ctx.cr6.eq) goto loc_821BA514;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821BA514;
	sub_8233E4E0(ctx, base);
loc_821BA514:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// subf. r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// bne 0x821ba598
	if (!ctx.cr0.eq) goto loc_821BA598;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x821ba58c
	if (!ctx.cr6.gt) goto loc_821BA58C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// b 0x821ba598
	goto loc_821BA598;
loc_821BA58C:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
loc_821BA598:
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r30,r29,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r29.s64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821ba5b0
	if (!ctx.cr6.lt) goto loc_821BA5B0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821BA5B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821ba4f4
	if (!ctx.cr6.eq) goto loc_821BA4F4;
loc_821BA5B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BA5C0"))) PPC_WEAK_FUNC(sub_821BA5C0);
PPC_FUNC_IMPL(__imp__sub_821BA5C0) {
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
	// beq cr6,0x821ba6bc
	if (ctx.cr6.eq) goto loc_821BA6BC;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,8944
	ctx.r31.s64 = ctx.r11.s64 + 8944;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821BA5F4;
	sub_823052D8(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
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
	// bne cr6,0x821ba6b0
	if (!ctx.cr6.eq) goto loc_821BA6B0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821ba6b0
	if (ctx.cr6.eq) goto loc_821BA6B0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821ba6b0
	if (!ctx.cr6.lt) goto loc_821BA6B0;
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
	// beq cr6,0x821ba688
	if (ctx.cr6.eq) goto loc_821BA688;
loc_821BA660:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821ba680
	if (ctx.cr6.eq) goto loc_821BA680;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ba660
	if (!ctx.cr6.eq) goto loc_821BA660;
	// b 0x821ba688
	goto loc_821BA688;
loc_821BA680:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_821BA688:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ba6a0
	if (!ctx.cr6.eq) goto loc_821BA6A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821BA6A0:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BA6AC;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_821BA6B0:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821BA6BC;
	sub_823051A8(ctx, base);
loc_821BA6BC:
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

__attribute__((alias("__imp__sub_821BA6D4"))) PPC_WEAK_FUNC(sub_821BA6D4);
PPC_FUNC_IMPL(__imp__sub_821BA6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA6D8"))) PPC_WEAK_FUNC(sub_821BA6D8);
PPC_FUNC_IMPL(__imp__sub_821BA6D8) {
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
	// addi r31,r11,8944
	ctx.r31.s64 = ctx.r11.s64 + 8944;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821BA700;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba724
	if (ctx.cr6.eq) goto loc_821BA724;
loc_821BA70C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ba754
	if (!ctx.cr6.eq) goto loc_821BA754;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ba70c
	if (!ctx.cr6.eq) goto loc_821BA70C;
loc_821BA724:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ba77c
	if (!ctx.cr6.eq) goto loc_821BA77C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821ba7d8
	ctx.lr = 0x821BA738;
	sub_821BA7D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ba77c
	if (!ctx.cr6.eq) goto loc_821BA77C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821BA74C;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ba7c0
	goto loc_821BA7C0;
loc_821BA754:
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
	// b 0x821ba7b0
	goto loc_821BA7B0;
loc_821BA77C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
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
loc_821BA7B0:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821BA7BC;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821BA7C0:
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

__attribute__((alias("__imp__sub_821BA7D8"))) PPC_WEAK_FUNC(sub_821BA7D8);
PPC_FUNC_IMPL(__imp__sub_821BA7D8) {
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
	ctx.lr = 0x821BA804;
	sub_82082030(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,8944
	ctx.r11.s64 = ctx.r11.s64 + 8944;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ba820
	if (ctx.cr6.eq) goto loc_821BA820;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x821ba824
	goto loc_821BA824;
loc_821BA820:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_821BA824:
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
	// beq cr6,0x821ba864
	if (ctx.cr6.eq) goto loc_821BA864;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821BA85C:
	// stwu r3,128(r10)
	ea = 128 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821ba85c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BA85C;
loc_821BA864:
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

__attribute__((alias("__imp__sub_821BA884"))) PPC_WEAK_FUNC(sub_821BA884);
PPC_FUNC_IMPL(__imp__sub_821BA884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA888"))) PPC_WEAK_FUNC(sub_821BA888);
PPC_FUNC_IMPL(__imp__sub_821BA888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821BA890;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821BA8A4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821ba8b0
	if (!ctx.cr6.eq) goto loc_821BA8B0;
	// bl 0x821b3000
	ctx.lr = 0x821BA8B0;
	sub_821B3000(ctx, base);
loc_821BA8B0:
	// lis r11,12
	ctx.r11.s64 = 786432;
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
	// lis r3,12
	ctx.r3.s64 = 786432;
	// bl 0x82082030
	ctx.lr = 0x821BA8D0;
	sub_82082030(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stb r28,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r28.u8);
	// lbz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ba92c
	if (!ctx.cr6.eq) goto loc_821BA92C;
loc_821BA8F0:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bl 0x82247328
	ctx.lr = 0x821BA8F8;
	sub_82247328(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 20, ctx.xer);
	// blt cr6,0x821ba920
	if (ctx.cr6.lt) goto loc_821BA920;
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ba920
	if (!ctx.cr6.eq) goto loc_821BA920;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x821ba938
	ctx.lr = 0x821BA918;
	sub_821BA938(ctx, base);
	// bl 0x821bbeb8
	ctx.lr = 0x821BA91C;
	sub_821BBEB8(ctx, base);
	// bl 0x82249290
	ctx.lr = 0x821BA920;
	sub_82249290(ctx, base);
loc_821BA920:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba8f0
	if (ctx.cr6.eq) goto loc_821BA8F0;
loc_821BA92C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BA938"))) PPC_WEAK_FUNC(sub_821BA938);
PPC_FUNC_IMPL(__imp__sub_821BA938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821BA940;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r30,r11,-14440
	ctx.r30.s64 = ctx.r11.s64 + -14440;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x823052d8
	ctx.lr = 0x821BA95C;
	sub_823052D8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// beq cr6,0x821baa58
	if (ctx.cr6.eq) goto loc_821BAA58;
	// li r27,0
	ctx.r27.s64 = 0;
loc_821BA970:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BA984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821baa4c
	if (ctx.cr6.eq) goto loc_821BAA4C;
	// lbz r11,648(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821baa4c
	if (ctx.cr6.eq) goto loc_821BAA4C;
	// lwz r11,632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 632);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,196(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821baa08
	if (ctx.cr6.eq) goto loc_821BAA08;
	// lwz r7,192(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
loc_821BA9B8:
	// lwz r31,0(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ba9f8
	if (ctx.cr6.eq) goto loc_821BA9F8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821BA9CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821ba9f0
	if (ctx.cr6.eq) goto loc_821BA9F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ba9cc
	if (ctx.cr6.eq) goto loc_821BA9CC;
loc_821BA9F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821baa14
	if (ctx.cr6.eq) goto loc_821BAA14;
loc_821BA9F8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821ba9b8
	if (ctx.cr6.lt) goto loc_821BA9B8;
loc_821BAA08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bc1d0
	ctx.lr = 0x821BAA10;
	sub_821BC1D0(ctx, base);
	// b 0x821baa48
	goto loc_821BAA48;
loc_821BAA14:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,204
	ctx.r3.s64 = ctx.r30.s64 + 204;
	// addi r26,r11,31
	ctx.r26.s64 = ctx.r11.s64 + 31;
	// bl 0x823052d8
	ctx.lr = 0x821BAA28;
	sub_823052D8(ctx, base);
	// rlwinm r5,r26,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r4,640(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 640);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8233e4e0
	ctx.lr = 0x821BAA38;
	sub_8233E4E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r30,204
	ctx.r3.s64 = ctx.r30.s64 + 204;
	// stb r11,200(r30)
	PPC_STORE_U8(ctx.r30.u32 + 200, ctx.r11.u8);
	// bl 0x823051a8
	ctx.lr = 0x821BAA48;
	sub_823051A8(ctx, base);
loc_821BAA48:
	// stb r27,648(r29)
	PPC_STORE_U8(ctx.r29.u32 + 648, ctx.r27.u8);
loc_821BAA4C:
	// lwz r29,528(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 528);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821ba970
	if (!ctx.cr6.eq) goto loc_821BA970;
loc_821BAA58:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x823051a8
	ctx.lr = 0x821BAA60;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BAA68"))) PPC_WEAK_FUNC(sub_821BAA68);
PPC_FUNC_IMPL(__imp__sub_821BAA68) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821BAA84;
	sub_82081C00(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r30,r9,8944
	ctx.r30.s64 = ctx.r9.s64 + 8944;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,8944(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8944, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x821ba7d8
	ctx.lr = 0x821BAAA4;
	sub_821BA7D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// lis r31,-32197
	ctx.r31.s64 = -2110062592;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// stb r11,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r11.u8);
	// lwz r3,-27096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821BAAC4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821baad0
	if (!ctx.cr6.eq) goto loc_821BAAD0;
	// bl 0x821b3000
	ctx.lr = 0x821BAAD0;
	sub_821B3000(ctx, base);
loc_821BAAD0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821baae4
	if (ctx.cr6.eq) goto loc_821BAAE4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821BAAE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821BAAEC;
	sub_82081C00(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r30,r9,8888
	ctx.r30.s64 = ctx.r9.s64 + 8888;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,8888(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8888, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x821b7cb8
	ctx.lr = 0x821BAB0C;
	sub_821B7CB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27096);
	// stb r11,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821BAB28;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bab34
	if (!ctx.cr6.eq) goto loc_821BAB34;
	// bl 0x821b3000
	ctx.lr = 0x821BAB34;
	sub_821B3000(ctx, base);
loc_821BAB34:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bab48
	if (ctx.cr6.eq) goto loc_821BAB48;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821BAB48:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821BAB50;
	sub_82081C00(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r30,r9,8832
	ctx.r30.s64 = ctx.r9.s64 + 8832;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,8832(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8832, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x821b6e20
	ctx.lr = 0x821BAB70;
	sub_821B6E20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27096);
	// stb r11,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821BAB8C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bab98
	if (!ctx.cr6.eq) goto loc_821BAB98;
	// bl 0x821b3000
	ctx.lr = 0x821BAB98;
	sub_821B3000(ctx, base);
loc_821BAB98:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821babac
	if (ctx.cr6.eq) goto loc_821BABAC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821BABAC:
	// bl 0x821bd270
	ctx.lr = 0x821BABB0;
	sub_821BD270(ctx, base);
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

__attribute__((alias("__imp__sub_821BABC8"))) PPC_WEAK_FUNC(sub_821BABC8);
PPC_FUNC_IMPL(__imp__sub_821BABC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821BABD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x821bb4d0
	ctx.lr = 0x821BABE8;
	sub_821BB4D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r29,r11,-14440
	ctx.r29.s64 = ctx.r11.s64 + -14440;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x823052d8
	ctx.lr = 0x821BABFC;
	sub_823052D8(ctx, base);
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bac38
	if (ctx.cr6.eq) goto loc_821BAC38;
loc_821BAC08:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b7348
	ctx.lr = 0x821BAC14;
	sub_821B7348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bac30
	if (!ctx.cr6.eq) goto loc_821BAC30;
	// lwz r31,528(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821bac08
	if (!ctx.cr6.eq) goto loc_821BAC08;
	// b 0x821bac38
	goto loc_821BAC38;
loc_821BAC30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821bad3c
	if (!ctx.cr6.eq) goto loc_821BAD3C;
loc_821BAC38:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bacac
	if (ctx.cr6.eq) goto loc_821BACAC;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bacac
	if (ctx.cr6.eq) goto loc_821BACAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821BAC58;
	sub_82081C00(ctx, base);
	// bl 0x821b6d20
	ctx.lr = 0x821BAC5C;
	sub_821B6D20(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821BAC6C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bac78
	if (!ctx.cr6.eq) goto loc_821BAC78;
	// bl 0x821b3000
	ctx.lr = 0x821BAC78;
	sub_821B3000(ctx, base);
loc_821BAC78:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bac8c
	if (ctx.cr6.eq) goto loc_821BAC8C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821BAC8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bad08
	if (ctx.cr6.eq) goto loc_821BAD08;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b6320
	ctx.lr = 0x821BACA4;
	sub_821B6320(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821bad0c
	goto loc_821BAD0C;
loc_821BACAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821BACB4;
	sub_82081C00(ctx, base);
	// bl 0x821b7bb8
	ctx.lr = 0x821BACB8;
	sub_821B7BB8(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821BACC8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bacd4
	if (!ctx.cr6.eq) goto loc_821BACD4;
	// bl 0x821b3000
	ctx.lr = 0x821BACD4;
	sub_821B3000(ctx, base);
loc_821BACD4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bace8
	if (ctx.cr6.eq) goto loc_821BACE8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821BACE8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bad08
	if (ctx.cr6.eq) goto loc_821BAD08;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b7168
	ctx.lr = 0x821BAD00;
	sub_821B7168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821bad0c
	goto loc_821BAD0C;
loc_821BAD08:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821BAD0C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r10,r31,296
	ctx.r10.s64 = ctx.r31.s64 + 296;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
loc_821BAD1C:
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
	// bne 0x821bad1c
	if (!ctx.cr0.eq) goto loc_821BAD1C;
	// b 0x821bad7c
	goto loc_821BAD7C;
loc_821BAD3C:
	// addi r11,r31,296
	ctx.r11.s64 = ctx.r31.s64 + 296;
loc_821BAD40:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bad40
	if (!ctx.cr0.eq) goto loc_821BAD40;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821bad7c
	if (!ctx.cr6.eq) goto loc_821BAD7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BAD7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BAD7C:
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x823051a8
	ctx.lr = 0x821BAD84;
	sub_823051A8(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// bl 0x821badb0
	ctx.lr = 0x821BADA0;
	sub_821BADB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BADAC"))) PPC_WEAK_FUNC(sub_821BADAC);
PPC_FUNC_IMPL(__imp__sub_821BADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BADB0"))) PPC_WEAK_FUNC(sub_821BADB0);
PPC_FUNC_IMPL(__imp__sub_821BADB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821BADB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-14440
	ctx.r31.s64 = ctx.r11.s64 + -14440;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x823052d8
	ctx.lr = 0x821BADD8;
	sub_823052D8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x821bae44
	if (ctx.cr6.eq) goto loc_821BAE44;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_821BADF4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821bae14
	if (ctx.cr6.eq) goto loc_821BAE14;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bne 0x821badf4
	if (!ctx.cr0.eq) goto loc_821BADF4;
	// b 0x821bae44
	goto loc_821BAE44;
loc_821BAE14:
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821bae40
	if (!ctx.cr6.lt) goto loc_821BAE40;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233e968
	ctx.lr = 0x821BAE40;
	sub_8233E968(ctx, base);
loc_821BAE40:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_821BAE44:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x823051a8
	ctx.lr = 0x821BAE50;
	sub_823051A8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821bae84
	if (ctx.cr6.eq) goto loc_821BAE84;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BAE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821BAE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BAE84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BAE8C"))) PPC_WEAK_FUNC(sub_821BAE8C);
PPC_FUNC_IMPL(__imp__sub_821BAE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BAE90"))) PPC_WEAK_FUNC(sub_821BAE90);
PPC_FUNC_IMPL(__imp__sub_821BAE90) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821baebc
	if (!ctx.cr6.eq) goto loc_821BAEBC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821baf20
	goto loc_821BAF20;
loc_821BAEBC:
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BAED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821baf10
	if (ctx.cr6.eq) goto loc_821BAF10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// bl 0x821b66e8
	ctx.lr = 0x821BAEEC;
	sub_821B66E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821baf10
	if (ctx.cr6.eq) goto loc_821BAF10;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lwz r9,632(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// lwz r11,532(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 532);
	// b 0x821baf20
	goto loc_821BAF20;
loc_821BAF10:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
loc_821BAF20:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,-14440
	ctx.r10.s64 = ctx.r9.s64 + -14440;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821bc898
	ctx.lr = 0x821BAF44;
	sub_821BC898(ctx, base);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_821BAF68"))) PPC_WEAK_FUNC(sub_821BAF68);
PPC_FUNC_IMPL(__imp__sub_821BAF68) {
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
	// addi r11,r3,296
	ctx.r11.s64 = ctx.r3.s64 + 296;
loc_821BAF84:
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
	// bne 0x821baf84
	if (!ctx.cr0.eq) goto loc_821BAF84;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821bb070
	if (!ctx.cr6.eq) goto loc_821BB070;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BAFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821baff0
	if (ctx.cr6.eq) goto loc_821BAFF0;
	// lbz r11,636(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821baff0
	if (ctx.cr6.eq) goto loc_821BAFF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BAFEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821bb070
	goto loc_821BB070;
loc_821BAFF0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,-14440
	ctx.r31.s64 = ctx.r11.s64 + -14440;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823052d8
	ctx.lr = 0x821BB004;
	sub_823052D8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb050
	if (ctx.cr6.eq) goto loc_821BB050;
loc_821BB014:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821bb030
	if (ctx.cr6.eq) goto loc_821BB030;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bb014
	if (!ctx.cr6.eq) goto loc_821BB014;
	// b 0x821bb050
	goto loc_821BB050;
loc_821BB030:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb050
	if (ctx.cr6.eq) goto loc_821BB050;
	// lwz r11,528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bb04c
	if (!ctx.cr6.eq) goto loc_821BB04C;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x821bb050
	goto loc_821BB050;
loc_821BB04C:
	// stw r11,528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 528, ctx.r11.u32);
loc_821BB050:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823051a8
	ctx.lr = 0x821BB058;
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
	ctx.lr = 0x821BB070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BB070:
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

__attribute__((alias("__imp__sub_821BB088"))) PPC_WEAK_FUNC(sub_821BB088);
PPC_FUNC_IMPL(__imp__sub_821BB088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821BB090;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-14440
	ctx.r31.s64 = ctx.r11.s64 + -14440;
	// lbz r11,-14440(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -14440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb19c
	if (ctx.cr6.eq) goto loc_821BB19C;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x821BB0BC;
	sub_823052D8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x821bb194
	if (!ctx.cr6.lt) goto loc_821BB194;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bb4d0
	ctx.lr = 0x821BB0D4;
	sub_821BB4D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823052d8
	ctx.lr = 0x821BB0E0;
	sub_823052D8(ctx, base);
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb110
	if (ctx.cr6.eq) goto loc_821BB110;
loc_821BB0EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7348
	ctx.lr = 0x821BB0F8;
	sub_821B7348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bb110
	if (!ctx.cr6.eq) goto loc_821BB110;
	// lwz r30,528(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821bb0ec
	if (!ctx.cr6.eq) goto loc_821BB0EC;
loc_821BB110:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823051a8
	ctx.lr = 0x821BB118;
	sub_823051A8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821bb194
	if (!ctx.cr6.eq) goto loc_821BB194;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82082030
	ctx.lr = 0x821BB134;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bb150
	if (ctx.cr6.eq) goto loc_821BB150;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821b7ec0
	ctx.lr = 0x821BB148;
	sub_821B7EC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821bb154
	goto loc_821BB154;
loc_821BB150:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821BB154:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7fa8
	ctx.lr = 0x821BB16C;
	sub_821B7FA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb194
	if (ctx.cr6.eq) goto loc_821BB194;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821BB194:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x823051a8
	ctx.lr = 0x821BB19C;
	sub_823051A8(ctx, base);
loc_821BB19C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB1A4"))) PPC_WEAK_FUNC(sub_821BB1A4);
PPC_FUNC_IMPL(__imp__sub_821BB1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB1A8"))) PPC_WEAK_FUNC(sub_821BB1A8);
PPC_FUNC_IMPL(__imp__sub_821BB1A8) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb1dc
	if (ctx.cr6.eq) goto loc_821BB1DC;
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821BB1DC;
	sub_822471D8(ctx, base);
loc_821BB1DC:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb1f4
	if (ctx.cr6.eq) goto loc_821BB1F4;
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821BB1F4;
	sub_822471D8(ctx, base);
loc_821BB1F4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bb1f4
	if (!ctx.cr0.eq) goto loc_821BB1F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bb220
	if (!ctx.cr6.eq) goto loc_821BB220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8530
	ctx.lr = 0x821BB220;
	sub_821B8530(ctx, base);
loc_821BB220:
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

__attribute__((alias("__imp__sub_821BB238"))) PPC_WEAK_FUNC(sub_821BB238);
PPC_FUNC_IMPL(__imp__sub_821BB238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x821BB240;
	__savegprlr_20(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x821bd4e8
	ctx.lr = 0x821BB24C;
	sub_821BD4E8(ctx, base);
	// clrldi r24,r3,32
	ctx.r24.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpld cr6,r24,r21
	ctx.cr6.compare<uint64_t>(ctx.r24.u64, ctx.r21.u64, ctx.xer);
	// bge cr6,0x821bb3a8
	if (!ctx.cr6.lt) goto loc_821BB3A8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r23,-1
	ctx.r23.s64 = -1;
	// addi r25,r11,-14440
	ctx.r25.s64 = ctx.r11.s64 + -14440;
loc_821BB270:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplw cr6,r22,r31
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x821bb284
	if (!ctx.cr6.eq) goto loc_821BB284;
	// cmplwi cr6,r20,100
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 100, ctx.xer);
	// bgt cr6,0x821bb3b4
	if (ctx.cr6.gt) goto loc_821BB3B4;
loc_821BB284:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x823052d8
	ctx.lr = 0x821BB2A0;
	sub_823052D8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,24(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bb3c8
	if (ctx.cr6.eq) goto loc_821BB3C8;
loc_821BB2B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BB2C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bb308
	if (ctx.cr6.eq) goto loc_821BB308;
	// lbz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb308
	if (ctx.cr6.eq) goto loc_821BB308;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bb308
	if (!ctx.cr6.eq) goto loc_821BB308;
	// ld r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821bb308
	if (ctx.cr6.gt) goto loc_821BB308;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821BB308:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,528(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821bb2b0
	if (!ctx.cr6.eq) goto loc_821BB2B0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821bb3c8
	if (ctx.cr6.eq) goto loc_821BB3C8;
	// add r11,r24,r27
	ctx.r11.u64 = ctx.r24.u64 + ctx.r27.u64;
	// cmpld cr6,r11,r21
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r21.u64, ctx.xer);
	// blt cr6,0x821bb3c8
	if (ctx.cr6.lt) goto loc_821BB3C8;
	// lwz r11,528(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 528);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x821bb340
	if (!ctx.cr6.eq) goto loc_821BB340;
	// stw r11,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r11.u32);
	// b 0x821bb344
	goto loc_821BB344;
loc_821BB340:
	// stw r11,528(r26)
	PPC_STORE_U32(ctx.r26.u32 + 528, ctx.r11.u32);
loc_821BB344:
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// bl 0x823051a8
	ctx.lr = 0x821BB34C;
	sub_823051A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x821b6660
	ctx.lr = 0x821BB358;
	sub_821B6660(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BB370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x821bb4d0
	ctx.lr = 0x821BB37C;
	sub_821BB4D0(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8224a4b0
	ctx.lr = 0x821BB384;
	sub_8224A4B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bb390
	if (ctx.cr6.eq) goto loc_821BB390;
	// bl 0x82249290
	ctx.lr = 0x821BB390;
	sub_82249290(ctx, base);
loc_821BB390:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bl 0x821bd4e8
	ctx.lr = 0x821BB398;
	sub_821BD4E8(ctx, base);
	// clrldi r24,r3,32
	ctx.r24.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpld cr6,r24,r21
	ctx.cr6.compare<uint64_t>(ctx.r24.u64, ctx.r21.u64, ctx.xer);
	// blt cr6,0x821bb270
	if (ctx.cr6.lt) goto loc_821BB270;
loc_821BB3A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821BB3B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821BB3C8:
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// bl 0x823051a8
	ctx.lr = 0x821BB3D0;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB3DC"))) PPC_WEAK_FUNC(sub_821BB3DC);
PPC_FUNC_IMPL(__imp__sub_821BB3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB3E0"))) PPC_WEAK_FUNC(sub_821BB3E0);
PPC_FUNC_IMPL(__imp__sub_821BB3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821BB3E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82307be8
	ctx.lr = 0x821BB3F8;
	sub_82307BE8(ctx, base);
	// extsb r3,r31
	ctx.r3.s64 = ctx.r31.s8;
	// bl 0x8233e138
	ctx.lr = 0x821BB400;
	sub_8233E138(ctx, base);
	// addi r10,r3,-65
	ctx.r10.s64 = ctx.r3.s64 + -65;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821BB408:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821bb408
	if (!ctx.cr6.eq) goto loc_821BB408;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bge cr6,0x821bb4c8
	if (!ctx.cr6.lt) goto loc_821BB4C8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bb4c8
	if (ctx.cr6.eq) goto loc_821BB4C8;
	// cmplwi cr6,r29,200
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 200, ctx.xer);
	// bge cr6,0x821bb4c8
	if (!ctx.cr6.lt) goto loc_821BB4C8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-14440
	ctx.r11.s64 = ctx.r11.s64 + -14440;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,88
	ctx.r31.s64 = ctx.r11.s64 + 88;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb46c
	if (ctx.cr6.eq) goto loc_821BB46C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BB468;
	sub_82080000(ctx, base);
	// stwx r27,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r27.u32);
loc_821BB46C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 2;
	// bl 0x82082030
	ctx.lr = 0x821BB480;
	sub_82082030(ctx, base);
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
loc_821BB48C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bne cr6,0x821bb48c
	if (!ctx.cr6.eq) goto loc_821BB48C;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x821bb4c8
	if (ctx.cr6.eq) goto loc_821BB4C8;
	// li r10,47
	ctx.r10.s64 = 47;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r27,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r27.u8);
loc_821BB4C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB4D0"))) PPC_WEAK_FUNC(sub_821BB4D0);
PPC_FUNC_IMPL(__imp__sub_821BB4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821BB4D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_821BB4E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bb4e8
	if (!ctx.cr6.eq) goto loc_821BB4E8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bge cr6,0x821bb530
	if (!ctx.cr6.lt) goto loc_821BB530;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r10,r31,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_821BB514:
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
	// bne cr6,0x821bb514
	if (!ctx.cr6.eq) goto loc_821BB514;
	// b 0x821bb5fc
	goto loc_821BB5FC;
loc_821BB530:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x821bb5dc
	if (!ctx.cr6.eq) goto loc_821BB5DC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8233e138
	ctx.lr = 0x821BB548;
	sub_8233E138(ctx, base);
	// addi r11,r3,-65
	ctx.r11.s64 = ctx.r3.s64 + -65;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bge cr6,0x821bb5b8
	if (!ctx.cr6.lt) goto loc_821BB5B8;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-14440
	ctx.r11.s64 = ctx.r10.s64 + -14440;
	// addi r8,r11,88
	ctx.r8.s64 = ctx.r11.s64 + 88;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821bb5b8
	if (ctx.cr6.eq) goto loc_821BB5B8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r11,-27196
	ctx.r30.s64 = ctx.r11.s64 + -27196;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233cc00
	ctx.lr = 0x821BB584;
	sub_8233CC00(ctx, base);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// li r10,2
	ctx.r10.s64 = 2;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x821bb5a0
	if (ctx.cr6.eq) goto loc_821BB5A0;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bne cr6,0x821bb5a4
	if (!ctx.cr6.eq) goto loc_821BB5A4;
loc_821BB5A0:
	// li r10,3
	ctx.r10.s64 = 3;
loc_821BB5A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// bl 0x8233cc00
	ctx.lr = 0x821BB5B4;
	sub_8233CC00(ctx, base);
	// b 0x821bb5fc
	goto loc_821BB5FC;
loc_821BB5B8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r10,r31,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_821BB5C0:
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
	// bne cr6,0x821bb5c0
	if (!ctx.cr6.eq) goto loc_821BB5C0;
	// b 0x821bb5fc
	goto loc_821BB5FC;
loc_821BB5DC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r10,r31,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_821BB5E4:
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
	// bne cr6,0x821bb5e4
	if (!ctx.cr6.eq) goto loc_821BB5E4;
loc_821BB5FC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821BB600:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bb600
	if (!ctx.cr6.eq) goto loc_821BB600;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821bb648
	if (ctx.cr0.lt) goto loc_821BB648;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,92
	ctx.r10.s64 = 92;
loc_821BB630:
	// lbzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,47
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 47, ctx.xer);
	// bne cr6,0x821bb640
	if (!ctx.cr6.eq) goto loc_821BB640;
	// stbx r10,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
loc_821BB640:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x821bb630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB630;
loc_821BB648:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB650"))) PPC_WEAK_FUNC(sub_821BB650);
PPC_FUNC_IMPL(__imp__sub_821BB650) {
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
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82082030
	ctx.lr = 0x821BB684;
	sub_82082030(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821BB6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BB6C8;
	sub_82080000(ctx, base);
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

__attribute__((alias("__imp__sub_821BB6E4"))) PPC_WEAK_FUNC(sub_821BB6E4);
PPC_FUNC_IMPL(__imp__sub_821BB6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB6E8"))) PPC_WEAK_FUNC(sub_821BB6E8);
PPC_FUNC_IMPL(__imp__sub_821BB6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x821BB6F0;
	__savegprlr_20(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r4,r11,-26280
	ctx.r4.s64 = ctx.r11.s64 + -26280;
	// li r5,90
	ctx.r5.s64 = 90;
	// stb r20,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r20.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233cc00
	ctx.lr = 0x821BB71C;
	sub_8233CC00(ctx, base);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821bc338
	ctx.lr = 0x821BB72C;
	sub_821BC338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bb918
	if (ctx.cr6.eq) goto loc_821BB918;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stb r20,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// li r5,90
	ctx.r5.s64 = 90;
	// addi r4,r11,-26252
	ctx.r4.s64 = ctx.r11.s64 + -26252;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8233cc00
	ctx.lr = 0x821BB750;
	sub_8233CC00(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x821bc338
	ctx.lr = 0x821BB760;
	sub_821BC338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bb918
	if (ctx.cr6.eq) goto loc_821BB918;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r27,4
	ctx.r27.s64 = 4;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bb78c
	if (ctx.cr6.eq) goto loc_821BB78C;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bb7cc
	if (!ctx.cr6.eq) goto loc_821BB7CC;
loc_821BB78C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bb650
	ctx.lr = 0x821BB794;
	sub_821BB650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821bb8f0
	if (!ctx.cr6.eq) goto loc_821BB8F0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BB7C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821bb8f0
	if (!ctx.cr6.eq) goto loc_821BB8F0;
loc_821BB7CC:
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb7e0
	if (ctx.cr6.eq) goto loc_821BB7E0;
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// b 0x821bb7e4
	goto loc_821BB7E4;
loc_821BB7E0:
	// ld r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 272);
loc_821BB7E4:
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lbz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb800
	if (ctx.cr6.eq) goto loc_821BB800;
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// b 0x821bb804
	goto loc_821BB804;
loc_821BB800:
	// ld r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 272);
loc_821BB804:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bge cr6,0x821bb840
	if (!ctx.cr6.lt) goto loc_821BB840;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bb650
	ctx.lr = 0x821BB818;
	sub_821BB650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821bb8f0
	if (!ctx.cr6.eq) goto loc_821BB8F0;
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb834
	if (ctx.cr6.eq) goto loc_821BB834;
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// b 0x821bb838
	goto loc_821BB838;
loc_821BB834:
	// ld r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 272);
loc_821BB838:
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
loc_821BB840:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x821bb89c
	if (!ctx.cr6.lt) goto loc_821BB89C;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BB874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821bb8f0
	if (!ctx.cr6.eq) goto loc_821BB8F0;
	// lbz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb890
	if (ctx.cr6.eq) goto loc_821BB890;
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// b 0x821bb894
	goto loc_821BB894;
loc_821BB890:
	// ld r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 272);
loc_821BB894:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_821BB89C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821BB8AC;
	sub_82082030(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BB8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bb924
	if (ctx.cr6.eq) goto loc_821BB924;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821bb8f0
	if (ctx.cr6.eq) goto loc_821BB8F0;
	// addi r4,r22,-16
	ctx.r4.s64 = ctx.r22.s64 + -16;
	// lwz r3,-8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BB8F0;
	sub_82080000(ctx, base);
loc_821BB8F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BB904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821BB918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BB918:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821BB924:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821BB938;
	sub_82082030(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BB960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bb9c4
	if (ctx.cr6.eq) goto loc_821BB9C4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821bb97c
	if (ctx.cr6.eq) goto loc_821BB97C;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// lwz r3,-8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BB97C;
	sub_82080000(ctx, base);
loc_821BB97C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821bb990
	if (ctx.cr6.eq) goto loc_821BB990;
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// lwz r3,-8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BB990;
	sub_82080000(ctx, base);
loc_821BB990:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BB9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821BB9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821BB9C4:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r24,r27,4
	ctx.r24.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x821bbc00
	if (!ctx.cr6.eq) goto loc_821BBC00;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821bbc00
	if (!ctx.cr6.eq) goto loc_821BBC00;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// mulli r8,r28,272
	ctx.r8.s64 = ctx.r28.s64 * 272;
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// addi r7,r9,-8
	ctx.r7.s64 = ctx.r9.s64 + -8;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821bbc00
	if (!ctx.cr6.eq) goto loc_821BBC00;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BBA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821BBA30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r20.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// bl 0x82082030
	ctx.lr = 0x821BBA48;
	sub_82082030(ctx, base);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x821BBA58;
	sub_8233EAF0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821bbbdc
	if (ctx.cr6.eq) goto loc_821BBBDC;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r21,-1
	ctx.r21.s64 = -1;
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
loc_821BBA6C:
	// addi r11,r25,260
	ctx.r11.s64 = ctx.r25.s64 + 260;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwzu r27,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// li r3,272
	ctx.r3.s64 = 272;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// bl 0x82082030
	ctx.lr = 0x821BBA94;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bbab0
	if (ctx.cr6.eq) goto loc_821BBAB0;
	// stw r20,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r20.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r20,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r20.u32);
	// stw r20,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r20.u32);
	// b 0x821bbab4
	goto loc_821BBAB4;
loc_821BBAB0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_821BBAB4:
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r5,260
	ctx.r5.s64 = 260;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r7,192(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x821BBAE0;
	sub_8233E4E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82082030
	ctx.lr = 0x821BBAF4;
	sub_82082030(ctx, base);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r3,268(r7)
	PPC_STORE_U32(ctx.r7.u32 + 268, ctx.r3.u32);
	// lwz r6,192(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821BBB2C:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x821bbb2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BBB2C;
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r11,r27,r24
	ctx.r11.u64 = ctx.r27.u64 + ctx.r24.u64;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r27,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,260(r6)
	PPC_STORE_U32(ctx.r6.u32 + 260, ctx.r7.u32);
	// lwz r5,192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// rlwinm r30,r10,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821bbb84
	if (!ctx.cr6.gt) goto loc_821BBB84;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_821BBB84:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821BBB94;
	sub_82082030(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r3,264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 264, ctx.r3.u32);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,192(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwz r3,264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// bl 0x8233e4e0
	ctx.lr = 0x821BBBC8;
	sub_8233E4E0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// bne 0x821bba6c
	if (!ctx.cr0.eq) goto loc_821BBA6C;
loc_821BBBDC:
	// addi r4,r22,-16
	ctx.r4.s64 = ctx.r22.s64 + -16;
	// lwz r3,-8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BBBE8;
	sub_82080000(ctx, base);
	// addi r4,r23,-16
	ctx.r4.s64 = ctx.r23.s64 + -16;
	// lwz r3,-8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BBBF4;
	sub_82080000(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821BBC00:
	// addi r4,r22,-16
	ctx.r4.s64 = ctx.r22.s64 + -16;
	// lwz r3,-8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BBC0C;
	sub_82080000(ctx, base);
	// addi r4,r23,-16
	ctx.r4.s64 = ctx.r23.s64 + -16;
	// lwz r3,-8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BBC18;
	sub_82080000(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BBC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821BBC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BBC4C"))) PPC_WEAK_FUNC(sub_821BBC4C);
PPC_FUNC_IMPL(__imp__sub_821BBC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BBC50"))) PPC_WEAK_FUNC(sub_821BBC50);
PPC_FUNC_IMPL(__imp__sub_821BBC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821BBC58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,632(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 632);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r11,-14440
	ctx.r27.s64 = ctx.r11.s64 + -14440;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r6,196(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821bbeb0
	if (ctx.cr6.eq) goto loc_821BBEB0;
	// lwz r7,192(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 192);
loc_821BBC84:
	// lwz r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821bbcc4
	if (ctx.cr6.eq) goto loc_821BBCC4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821BBC98:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821bbcbc
	if (ctx.cr6.eq) goto loc_821BBCBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821bbc98
	if (ctx.cr6.eq) goto loc_821BBC98;
loc_821BBCBC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821bbcdc
	if (ctx.cr6.eq) goto loc_821BBCDC;
loc_821BBCC4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821bbc84
	if (ctx.cr6.lt) goto loc_821BBC84;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_821BBCDC:
	// lwz r30,644(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r31,260(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r11,r30,31
	ctx.r11.s64 = ctx.r30.s64 + 31;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r26,r11,27,5,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// beq cr6,0x821bbd7c
	if (ctx.cr6.eq) goto loc_821BBD7C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r27,204
	ctx.r3.s64 = ctx.r27.s64 + 204;
	// bl 0x823052d8
	ctx.lr = 0x821BBD08;
	sub_823052D8(ctx, base);
	// addi r11,r31,31
	ctx.r11.s64 = ctx.r31.s64 + 31;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x821bbd68
	if (ctx.cr6.eq) goto loc_821BBD68;
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bbd30
	if (ctx.cr6.eq) goto loc_821BBD30;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BBD30;
	sub_82080000(ctx, base);
loc_821BBD30:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821bbd48
	if (!ctx.cr6.gt) goto loc_821BBD48;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_821BBD48:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821BBD58;
	sub_82082030(ctx, base);
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,264(r28)
	PPC_STORE_U32(ctx.r28.u32 + 264, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x821BBD68;
	sub_8233EAF0(ctx, base);
loc_821BBD68:
	// stw r30,260(r28)
	PPC_STORE_U32(ctx.r28.u32 + 260, ctx.r30.u32);
	// addi r3,r27,204
	ctx.r3.s64 = ctx.r27.s64 + 204;
	// bl 0x823051a8
	ctx.lr = 0x821BBD74;
	sub_823051A8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stb r24,200(r27)
	PPC_STORE_U8(ctx.r27.u32 + 200, ctx.r24.u8);
loc_821BBD7C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BBD90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,224(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 224);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,268(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bbdd0
	if (ctx.cr6.eq) goto loc_821BBDD0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_821BBDB0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821bbdd0
	if (!ctx.cr0.eq) goto loc_821BBDD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821bbdb0
	if (!ctx.cr6.eq) goto loc_821BBDB0;
loc_821BBDD0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821bbe14
	if (ctx.cr6.eq) goto loc_821BBE14;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r27,204
	ctx.r3.s64 = ctx.r27.s64 + 204;
	// bl 0x823052d8
	ctx.lr = 0x821BBDE4;
	sub_823052D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,224(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 224);
	// lwz r3,268(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	// bl 0x8233e4e0
	ctx.lr = 0x821BBDF4;
	sub_8233E4E0(ctx, base);
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x821BBE04;
	sub_8233EAF0(ctx, base);
	// stb r24,200(r27)
	PPC_STORE_U8(ctx.r27.u32 + 200, ctx.r24.u8);
	// addi r3,r27,204
	ctx.r3.s64 = ctx.r27.s64 + 204;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bl 0x823051a8
	ctx.lr = 0x821BBE14;
	sub_823051A8(ctx, base);
loc_821BBE14:
	// addi r31,r29,664
	ctx.r31.s64 = ctx.r29.s64 + 664;
	// lwz r11,644(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r30,264(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,31
	ctx.r28.s64 = ctx.r11.s64 + 31;
	// bl 0x823052d8
	ctx.lr = 0x821BBE30;
	sub_823052D8(ctx, base);
	// rlwinm r5,r28,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,640(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 640);
	// bl 0x8233e4e0
	ctx.lr = 0x821BBE40;
	sub_8233E4E0(ctx, base);
	// lwz r8,644(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 652, ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821bbe98
	if (ctx.cr6.eq) goto loc_821BBE98;
	// lwz r9,640(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 640);
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
loc_821BBE60:
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// slw r5,r24,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r7.u8 & 0x3F));
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bbe98
	if (ctx.cr6.eq) goto loc_821BBE98;
	// lwz r10,652(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// stw r7,652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 652, ctx.r7.u32);
	// lwz r6,644(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821bbe60
	if (ctx.cr6.lt) goto loc_821BBE60;
loc_821BBE98:
	// lwz r11,652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821bbea8
	if (!ctx.cr6.eq) goto loc_821BBEA8;
	// stb r24,649(r29)
	PPC_STORE_U8(ctx.r29.u32 + 649, ctx.r24.u8);
loc_821BBEA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823051a8
	ctx.lr = 0x821BBEB0;
	sub_823051A8(ctx, base);
loc_821BBEB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BBEB8"))) PPC_WEAK_FUNC(sub_821BBEB8);
PPC_FUNC_IMPL(__imp__sub_821BBEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x821BBEC0;
	__savegprlr_17(ctx, base);
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-14440
	ctx.r31.s64 = ctx.r11.s64 + -14440;
	// lbz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc1c4
	if (ctx.cr6.eq) goto loc_821BC1C4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r4,r11,-26280
	ctx.r4.s64 = ctx.r11.s64 + -26280;
	// li r5,90
	ctx.r5.s64 = 90;
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r17.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233cc00
	ctx.lr = 0x821BBEF4;
	sub_8233CC00(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821bc338
	ctx.lr = 0x821BBF04;
	sub_821BC338(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc1c4
	if (ctx.cr6.eq) goto loc_821BC1C4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r17.u8);
	// li r5,90
	ctx.r5.s64 = 90;
	// addi r4,r11,-26252
	ctx.r4.s64 = ctx.r11.s64 + -26252;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8233cc00
	ctx.lr = 0x821BBF28;
	sub_8233CC00(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x821bc338
	ctx.lr = 0x821BBF38;
	sub_821BC338(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc1c4
	if (ctx.cr6.eq) goto loc_821BC1C4;
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r29,r10,264
	ctx.r29.s64 = ctx.r10.s64 + 264;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bbf80
	if (ctx.cr6.eq) goto loc_821BBF80;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821BBF68:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bbf78
	if (ctx.cr6.eq) goto loc_821BBF78;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_821BBF78:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821bbf68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BBF68;
loc_821BBF80:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821BBF8C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bbf98
	if (!ctx.cr6.eq) goto loc_821BBF98;
	// bl 0x821b3000
	ctx.lr = 0x821BBF98;
	sub_821B3000(ctx, base);
loc_821BBF98:
	// mullw r11,r30,r29
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,4492
	ctx.r8.s64 = ctx.r10.s64 + 4492;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r20,-13569
	ctx.r20.s64 = -889257984;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r27,r3,20
	ctx.r27.s64 = ctx.r3.s64 + 20;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821bbfd4
	if (!ctx.cr6.gt) goto loc_821BBFD4;
	// stw r8,-13570(r20)
	PPC_STORE_U32(ctx.r20.u32 + -13570, ctx.r8.u32);
loc_821BBFD4:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r21,r10,r9
	ctx.r21.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// addi r6,r10,15
	ctx.r6.s64 = ctx.r10.s64 + 15;
	// rlwinm r23,r6,0,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// add r5,r23,r11
	ctx.r5.u64 = ctx.r23.u64 + ctx.r11.u64;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x821bc00c
	if (!ctx.cr6.gt) goto loc_821BC00C;
	// stw r8,-13570(r20)
	PPC_STORE_U32(ctx.r20.u32 + -13570, ctx.r8.u32);
loc_821BC00C:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// add r7,r23,r10
	ctx.r7.u64 = ctx.r23.u64 + ctx.r10.u64;
	// add r24,r10,r9
	ctx.r24.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r7.u32);
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// stw r8,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r8.u32);
	// addi r25,r24,4
	ctx.r25.s64 = ctx.r24.s64 + 4;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// stw r30,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r30.u32);
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bc0f4
	if (ctx.cr6.eq) goto loc_821BC0F4;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_821BC054:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bc0e4
	if (ctx.cr6.eq) goto loc_821BC0E4;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821BC074;
	sub_8233E4E0(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r30,r26,260
	ctx.r30.s64 = ctx.r26.s64 + 260;
	// lwz r5,224(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r4,268(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// bl 0x8233e4e0
	ctx.lr = 0x821BC090;
	sub_8233E4E0(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stwux r28,r30,r11
	ea = ctx.r30.u32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// addi r26,r30,4
	ctx.r26.s64 = ctx.r30.s64 + 4;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r9,260(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r4,264(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 264);
	// lwz r11,260(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 260);
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// rlwinm r30,r7,29,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821BC0D4;
	sub_8233E4E0(ctx, base);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r25,r30,r25
	ctx.r25.u64 = ctx.r30.u64 + ctx.r25.u64;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
loc_821BC0E4:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821bc054
	if (ctx.cr6.lt) goto loc_821BC054;
loc_821BC0F4:
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821BC11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821BC13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r11,4520
	ctx.r8.s64 = ctx.r11.s64 + 4520;
	// cmplw cr6,r23,r6
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x821bc154
	if (!ctx.cr6.gt) goto loc_821BC154;
	// stw r8,-13570(r20)
	PPC_STORE_U32(ctx.r20.u32 + -13570, ctx.r8.u32);
loc_821BC154:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x821bc170
	if (ctx.cr6.eq) goto loc_821BC170;
	// stw r8,-13570(r20)
	PPC_STORE_U32(ctx.r20.u32 + -13570, ctx.r8.u32);
loc_821BC170:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r10,r23,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r23.s64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r9,15
	ctx.r7.s64 = ctx.r9.s64 + 15;
	// rlwinm r11,r7,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821bc194
	if (!ctx.cr6.gt) goto loc_821BC194;
	// stw r8,-13570(r20)
	PPC_STORE_U32(ctx.r20.u32 + -13570, ctx.r8.u32);
loc_821BC194:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x821bc1b0
	if (ctx.cr6.eq) goto loc_821BC1B0;
	// stw r8,-13570(r20)
	PPC_STORE_U32(ctx.r20.u32 + -13570, ctx.r8.u32);
loc_821BC1B0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// stb r17,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r17.u8);
loc_821BC1C4:
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BC1CC"))) PPC_WEAK_FUNC(sub_821BC1CC);
PPC_FUNC_IMPL(__imp__sub_821BC1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC1D0"))) PPC_WEAK_FUNC(sub_821BC1D0);
PPC_FUNC_IMPL(__imp__sub_821BC1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821BC1D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-14440
	ctx.r30.s64 = ctx.r11.s64 + -14440;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bc220
	if (ctx.cr6.eq) goto loc_821BC220;
	// lwz r9,192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821BC204:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821bc220
	if (ctx.cr6.eq) goto loc_821BC220;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821bc204
	if (ctx.cr6.lt) goto loc_821BC204;
loc_821BC220:
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821bc230
	if (!ctx.cr6.eq) goto loc_821BC230;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r11.u32);
loc_821BC230:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82082030
	ctx.lr = 0x821BC244;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc260
	if (ctx.cr6.eq) goto loc_821BC260;
	// stw r29,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r29.u32);
	// stw r29,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r29.u32);
	// b 0x821bc264
	goto loc_821BC264;
loc_821BC260:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821BC264:
	// lwz r11,632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8233e4e0
	ctx.lr = 0x821BC278;
	sub_8233E4E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821BC28C;
	sub_82082030(ctx, base);
	// stw r3,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,224(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BC2A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821BC2B8;
	sub_8233E4E0(ctx, base);
	// lwz r11,644(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 644);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// rlwinm r29,r8,27,5,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821bc2e4
	if (!ctx.cr6.gt) goto loc_821BC2E4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821BC2E4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821BC2F4;
	sub_82082030(ctx, base);
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,640(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 640);
	// bl 0x8233e4e0
	ctx.lr = 0x821BC304;
	sub_8233E4E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,204
	ctx.r3.s64 = ctx.r30.s64 + 204;
	// bl 0x823052d8
	ctx.lr = 0x821BC310;
	sub_823052D8(ctx, base);
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r30,204
	ctx.r3.s64 = ctx.r30.s64 + 204;
	// stwx r31,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
	// stb r10,200(r30)
	PPC_STORE_U8(ctx.r30.u32 + 200, ctx.r10.u8);
	// bl 0x823051a8
	ctx.lr = 0x821BC32C;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BC334"))) PPC_WEAK_FUNC(sub_821BC334);
PPC_FUNC_IMPL(__imp__sub_821BC334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC338"))) PPC_WEAK_FUNC(sub_821BC338);
PPC_FUNC_IMPL(__imp__sub_821BC338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821BC340;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821bb4d0
	ctx.lr = 0x821BC35C;
	sub_821BB4D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821babc8
	ctx.lr = 0x821BC36C;
	sub_821BABC8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821BC384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821BC3A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r6,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r29
	ctx.r3.u64 = ctx.r4.u64 & ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BC3B4"))) PPC_WEAK_FUNC(sub_821BC3B4);
PPC_FUNC_IMPL(__imp__sub_821BC3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC3B8"))) PPC_WEAK_FUNC(sub_821BC3B8);
PPC_FUNC_IMPL(__imp__sub_821BC3B8) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,-26228
	ctx.r9.s64 = ctx.r10.s64 + -26228;
	// addi r8,r11,21424
	ctx.r8.s64 = ctx.r11.s64 + 21424;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stb r30,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r30.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x82247360
	ctx.lr = 0x821BC420;
	sub_82247360(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
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
	ctx.lr = 0x821BC444;
	sub_82305000(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r30.u64);
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

__attribute__((alias("__imp__sub_821BC46C"))) PPC_WEAK_FUNC(sub_821BC46C);
PPC_FUNC_IMPL(__imp__sub_821BC46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC470"))) PPC_WEAK_FUNC(sub_821BC470);
PPC_FUNC_IMPL(__imp__sub_821BC470) {
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
	// bl 0x821bc4d0
	ctx.lr = 0x821BC490;
	sub_821BC4D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc4b0
	if (ctx.cr6.eq) goto loc_821BC4B0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bc4b0
	if (ctx.cr6.eq) goto loc_821BC4B0;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BC4B0;
	sub_82080000(ctx, base);
loc_821BC4B0:
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

__attribute__((alias("__imp__sub_821BC4CC"))) PPC_WEAK_FUNC(sub_821BC4CC);
PPC_FUNC_IMPL(__imp__sub_821BC4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC4D0"))) PPC_WEAK_FUNC(sub_821BC4D0);
PPC_FUNC_IMPL(__imp__sub_821BC4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821BC4D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// addi r10,r11,-26228
	ctx.r10.s64 = ctx.r11.s64 + -26228;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x821BC4FC;
	sub_823052D8(ctx, base);
	// lwz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc51c
	if (ctx.cr6.eq) goto loc_821BC51C;
loc_821BC508:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,104(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x821bb1a8
	ctx.lr = 0x821BC514;
	sub_821BB1A8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821bc508
	if (!ctx.cr6.eq) goto loc_821BC508;
loc_821BC51C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x821BC52C;
	sub_823051A8(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r28,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r28.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// bl 0x822473f8
	ctx.lr = 0x821BC548;
	sub_822473F8(ctx, base);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
loc_821BC54C:
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
	// bne 0x821bc54c
	if (!ctx.cr0.eq) goto loc_821BC54C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82305448
	ctx.lr = 0x821BC570;
	sub_82305448(ctx, base);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821bc584
	if (ctx.cr6.eq) goto loc_821BC584;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x821BC584;
	sub_82246E18(ctx, base);
loc_821BC584:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc594
	if (ctx.cr6.eq) goto loc_821BC594;
	// bl 0x82246e18
	ctx.lr = 0x821BC594;
	sub_82246E18(ctx, base);
loc_821BC594:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r28,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,4344
	ctx.r10.s64 = ctx.r11.s64 + 4344;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82305448
	ctx.lr = 0x821BC5AC;
	sub_82305448(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,4352
	ctx.r8.s64 = ctx.r9.s64 + 4352;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BC5C0"))) PPC_WEAK_FUNC(sub_821BC5C0);
PPC_FUNC_IMPL(__imp__sub_821BC5C0) {
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
	// bl 0x821bcb10
	ctx.lr = 0x821BC5D8;
	sub_821BCB10(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bc600
	if (!ctx.cr6.eq) goto loc_821BC600;
loc_821BC5E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bc970
	ctx.lr = 0x821BC5EC;
	sub_821BC970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bcb10
	ctx.lr = 0x821BC5F4;
	sub_821BCB10(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc5e4
	if (ctx.cr6.eq) goto loc_821BC5E4;
loc_821BC600:
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

__attribute__((alias("__imp__sub_821BC618"))) PPC_WEAK_FUNC(sub_821BC618);
PPC_FUNC_IMPL(__imp__sub_821BC618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x821BC620;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r20,r3,32
	ctx.r20.s64 = ctx.r3.s64 + 32;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823052d8
	ctx.lr = 0x821BC638;
	sub_823052D8(ctx, base);
	// lwz r22,52(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// lwz r21,28(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x821bc694
	if (!ctx.cr6.eq) goto loc_821BC694;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// ori r9,r10,49164
	ctx.r9.u64 = ctx.r10.u64 | 49164;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bc678
	if (!ctx.cr6.eq) goto loc_821BC678;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,32776
	ctx.r9.u64 = ctx.r10.u64 | 32776;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821bc694
	if (ctx.cr6.eq) goto loc_821BC694;
loc_821BC678:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823051a8
	ctx.lr = 0x821BC680;
	sub_823051A8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82247328
	ctx.lr = 0x821BC688;
	sub_82247328(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821BC694:
	// lwz r26,56(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821bc860
	if (ctx.cr6.eq) goto loc_821BC860;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821bc838
	if (ctx.cr6.eq) goto loc_821BC838;
loc_821BC6B0:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x821bc860
	if (!ctx.cr6.eq) goto loc_821BC860;
	// lwz r25,76(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821bc6dc
	if (ctx.cr6.eq) goto loc_821BC6DC;
	// ld r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 96);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x821bc6dc
	if (!ctx.cr6.eq) goto loc_821BC6DC;
	// ld r29,16(r25)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// b 0x821bc6e0
	goto loc_821BC6E0;
loc_821BC6DC:
	// ld r29,96(r28)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r28.u32 + 96);
loc_821BC6E0:
	// lwz r10,84(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821bc6f8
	if (ctx.cr6.eq) goto loc_821BC6F8;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821bc6fc
	if (!ctx.cr6.eq) goto loc_821BC6FC;
loc_821BC6F8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821BC6FC:
	// lwz r9,92(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// lwz r31,24(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r27,r7,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc728
	if (ctx.cr6.eq) goto loc_821BC728;
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// b 0x821bc72c
	goto loc_821BC72C;
loc_821BC728:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821BC72C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbz r9,293(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 293);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bc748
	if (!ctx.cr6.eq) goto loc_821BC748;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc828
	if (ctx.cr6.eq) goto loc_821BC828;
loc_821BC748:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc758
	if (ctx.cr6.eq) goto loc_821BC758;
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// b 0x821bc75c
	goto loc_821BC75C;
loc_821BC758:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821BC75C:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x821bc828
	if (!ctx.cr6.eq) goto loc_821BC828;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc828
	if (ctx.cr6.eq) goto loc_821BC828;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bc79c
	if (ctx.cr6.eq) goto loc_821BC79C;
	// lbz r11,292(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc798
	if (ctx.cr6.eq) goto loc_821BC798;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r26,304
	ctx.r3.s64 = ctx.r26.s64 + 304;
	// bl 0x821b6ed0
	ctx.lr = 0x821BC794;
	sub_821B6ED0(ctx, base);
	// b 0x821bc79c
	goto loc_821BC79C;
loc_821BC798:
	// rldicr r3,r29,0,48
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u64, 0) & 0xFFFFFFFFFFFF8000;
loc_821BC79C:
	// ld r11,64(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 64);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x821bc860
	if (ctx.cr6.eq) goto loc_821BC860;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc7b8
	if (ctx.cr6.eq) goto loc_821BC7B8;
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// b 0x821bc7bc
	goto loc_821BC7BC;
loc_821BC7B8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821BC7BC:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,432
	ctx.r10.s64 = ctx.r11.s64 + 432;
loc_821BC7C4:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, ctx.xer);
	// bgt cr6,0x821bc7e4
	if (ctx.cr6.gt) goto loc_821BC7E4;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r29,r7
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r7.u64, ctx.xer);
	// blt cr6,0x821bc7e8
	if (ctx.cr6.lt) goto loc_821BC7E8;
loc_821BC7E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BC7E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bc858
	if (!ctx.cr6.eq) goto loc_821BC858;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x821bc7c4
	if (ctx.cr6.lt) goto loc_821BC7C4;
loc_821BC804:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bc860
	if (!ctx.cr6.eq) goto loc_821BC860;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc828
	if (ctx.cr6.eq) goto loc_821BC828;
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc860
	if (ctx.cr6.eq) goto loc_821BC860;
loc_821BC828:
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// lwz r28,104(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821bc6b0
	if (!ctx.cr6.eq) goto loc_821BC6B0;
loc_821BC838:
	// lwz r11,104(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 104);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// stw r11,52(r24)
	PPC_STORE_U32(ctx.r24.u32 + 52, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x821BC84C;
	sub_823051A8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_821BC858:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821bc804
	goto loc_821BC804;
loc_821BC860:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821bc838
	if (ctx.cr6.eq) goto loc_821BC838;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821bc838
	if (ctx.cr6.eq) goto loc_821BC838;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x821bc838
	if (!ctx.cr6.eq) goto loc_821BC838;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r11,104(r23)
	PPC_STORE_U32(ctx.r23.u32 + 104, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x821BC88C;
	sub_823051A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BC898"))) PPC_WEAK_FUNC(sub_821BC898);
PPC_FUNC_IMPL(__imp__sub_821BC898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821BC8A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x821BC8BC;
	sub_823052D8(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bc8d4
	if (!ctx.cr6.eq) goto loc_821BC8D4;
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x821bc92c
	goto loc_821BC92C;
loc_821BC8D4:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x821bc8f0
	if (!ctx.cr6.lt) goto loc_821BC8F0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// b 0x821bc92c
	goto loc_821BC92C;
loc_821BC8F0:
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bc920
	if (ctx.cr6.eq) goto loc_821BC920;
loc_821BC900:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821bc920
	if (ctx.cr6.lt) goto loc_821BC920;
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// addi r11,r10,104
	ctx.r11.s64 = ctx.r10.s64 + 104;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821bc900
	if (!ctx.cr6.eq) goto loc_821BC900;
loc_821BC920:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_821BC92C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x821BC934;
	sub_823051A8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// bl 0x822473f8
	ctx.lr = 0x821BC948;
	sub_822473F8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_821BC94C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bc94c
	if (!ctx.cr0.eq) goto loc_821BC94C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BC970"))) PPC_WEAK_FUNC(sub_821BC970);
PPC_FUNC_IMPL(__imp__sub_821BC970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821BC978;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-14440
	ctx.r10.s64 = ctx.r11.s64 + -14440;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bc9ac
	if (ctx.cr6.eq) goto loc_821BC9AC;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x821bc9b0
	if (!ctx.cr6.eq) goto loc_821BC9B0;
loc_821BC9AC:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_821BC9B0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bc9d8
	if (ctx.cr6.eq) goto loc_821BC9D8;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bc9d8
	if (!ctx.cr6.eq) goto loc_821BC9D8;
loc_821BC9C8:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82247328
	ctx.lr = 0x821BC9D0;
	sub_82247328(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821BC9D8:
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bc9c8
	if (!ctx.cr6.eq) goto loc_821BC9C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bc618
	ctx.lr = 0x821BC9EC;
	sub_821BC618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bcb08
	if (ctx.cr6.eq) goto loc_821BCB08;
	// bl 0x821b9b18
	ctx.lr = 0x821BC9FC;
	sub_821B9B18(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bca18
	if (ctx.cr6.eq) goto loc_821BCA18;
	// lwz r11,632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
loc_821BCA18:
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ld r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 280);
	// std r11,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r11.u64);
	// bne cr6,0x821bca68
	if (!ctx.cr6.eq) goto loc_821BCA68;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bca58
	if (ctx.cr6.eq) goto loc_821BCA58;
loc_821BCA38:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bca38
	if (!ctx.cr0.eq) goto loc_821BCA38;
	// b 0x821bcaf4
	goto loc_821BCAF4;
loc_821BCA58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bae90
	ctx.lr = 0x821BCA60;
	sub_821BAE90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821BCA68:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x821bca80
	if (!ctx.cr6.eq) goto loc_821BCA80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bb1a8
	ctx.lr = 0x821BCA78;
	sub_821BB1A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821BCA80:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bca98
	if (ctx.cr6.eq) goto loc_821BCA98;
	// stw r28,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821BCA98;
	sub_822471D8(ctx, base);
loc_821BCA98:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bcab0
	if (ctx.cr6.eq) goto loc_821BCAB0;
	// stw r28,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822471d8
	ctx.lr = 0x821BCAB0;
	sub_822471D8(ctx, base);
loc_821BCAB0:
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// beq cr6,0x821bcad8
	if (ctx.cr6.eq) goto loc_821BCAD8;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bcad0
	if (ctx.cr6.eq) goto loc_821BCAD0;
	// lwz r11,632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
loc_821BCAD0:
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x821b2720
	ctx.lr = 0x821BCAD8;
	sub_821B2720(ctx, base);
loc_821BCAD8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bcad8
	if (!ctx.cr0.eq) goto loc_821BCAD8;
loc_821BCAF4:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bcb08
	if (!ctx.cr6.eq) goto loc_821BCB08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8530
	ctx.lr = 0x821BCB08;
	sub_821B8530(ctx, base);
loc_821BCB08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BCB10"))) PPC_WEAK_FUNC(sub_821BCB10);
PPC_FUNC_IMPL(__imp__sub_821BCB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821BCB18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bcb80
	if (!ctx.cr6.eq) goto loc_821BCB80;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_821BCB30:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bcb80
	if (!ctx.cr6.eq) goto loc_821BCB80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// bl 0x82247250
	ctx.lr = 0x821BCB4C;
	sub_82247250(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bcb74
	if (!ctx.cr6.eq) goto loc_821BCB74;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_821BCB58:
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
	// bne 0x821bcb58
	if (!ctx.cr0.eq) goto loc_821BCB58;
loc_821BCB74:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bcb30
	if (ctx.cr6.eq) goto loc_821BCB30;
loc_821BCB80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BCB88"))) PPC_WEAK_FUNC(sub_821BCB88);
PPC_FUNC_IMPL(__imp__sub_821BCB88) {
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
	// addi r10,r11,-26220
	ctx.r10.s64 = ctx.r11.s64 + -26220;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821b70e0
	ctx.lr = 0x821BCBB4;
	sub_821B70E0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bcbcc
	if (ctx.cr6.eq) goto loc_821BCBCC;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BCBCC;
	sub_82080000(ctx, base);
loc_821BCBCC:
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

__attribute__((alias("__imp__sub_821BCBE8"))) PPC_WEAK_FUNC(sub_821BCBE8);
PPC_FUNC_IMPL(__imp__sub_821BCBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821BCBF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r23,r4,26,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821bcc40
	if (ctx.cr6.eq) goto loc_821BCC40;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821bcc2c
	if (ctx.cr6.eq) goto loc_821BCC2C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821bcc54
	if (!ctx.cr6.eq) goto loc_821BCC54;
	// lis r26,-30720
	ctx.r26.s64 = -2013265920;
	// lis r28,-16384
	ctx.r28.s64 = -1073741824;
	// li r27,4
	ctx.r27.s64 = 4;
	// ori r26,r26,128
	ctx.r26.u64 = ctx.r26.u64 | 128;
	// b 0x821bcc60
	goto loc_821BCC60;
loc_821BCC2C:
	// lis r26,-30720
	ctx.r26.s64 = -2013265920;
	// lis r28,16384
	ctx.r28.s64 = 1073741824;
	// li r27,2
	ctx.r27.s64 = 2;
	// ori r26,r26,128
	ctx.r26.u64 = ctx.r26.u64 | 128;
	// b 0x821bcc60
	goto loc_821BCC60;
loc_821BCC40:
	// lis r26,10240
	ctx.r26.s64 = 671088640;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// li r27,3
	ctx.r27.s64 = 3;
	// ori r26,r26,128
	ctx.r26.u64 = ctx.r26.u64 | 128;
	// b 0x821bcc60
	goto loc_821BCC60;
loc_821BCC54:
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821BCC60:
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82249ab8
	ctx.lr = 0x821BCC84;
	sub_82249AB8(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r3.u32);
	// bne cr6,0x821bcd74
	if (!ctx.cr6.eq) goto loc_821BCD74;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821bcca4
	if (!ctx.cr6.eq) goto loc_821BCCA4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x821bccc0
	goto loc_821BCCC0;
loc_821BCCA4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-22884
	ctx.r4.s64 = ctx.r11.s64 + -22884;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233dc60
	ctx.lr = 0x821BCCB8;
	sub_8233DC60(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_821BCCC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bcd74
	if (ctx.cr6.eq) goto loc_821BCD74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82222fa8
	ctx.lr = 0x821BCCD4;
	sub_82222FA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bcd74
	if (ctx.cr6.eq) goto loc_821BCD74;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821bcd74
	if (!ctx.cr6.eq) goto loc_821BCD74;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r24,r11,22200
	ctx.r24.s64 = ctx.r11.s64 + 22200;
loc_821BCCF4:
	// lwz r11,2352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2352);
	// rlwinm r9,r11,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bcd74
	if (ctx.cr6.eq) goto loc_821BCD74;
	// lbz r11,968(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bcd74
	if (!ctx.cr6.eq) goto loc_821BCD74;
loc_821BCD10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82222178
	ctx.lr = 0x821BCD18;
	sub_82222178(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bcd3c
	if (!ctx.cr6.eq) goto loc_821BCD3C;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82247328
	ctx.lr = 0x821BCD2C;
	sub_82247328(ctx, base);
	// lwz r11,2352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2352);
	// rlwinm r9,r11,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821bcd10
	if (!ctx.cr6.eq) goto loc_821BCD10;
loc_821BCD3C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bcd68
	if (ctx.cr6.eq) goto loc_821BCD68;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82249ab8
	ctx.lr = 0x821BCD64;
	sub_82249AB8(ctx, base);
	// stw r3,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r3.u32);
loc_821BCD68:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821bccf4
	if (ctx.cr6.eq) goto loc_821BCCF4;
loc_821BCD74:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821bcdb8
	if (!ctx.cr6.eq) goto loc_821BCDB8;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bcda0
	if (ctx.cr6.eq) goto loc_821BCDA0;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_821BCDA0:
	// bl 0x822471d0
	ctx.lr = 0x821BCDA4;
	sub_822471D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bceb0
	ctx.lr = 0x821BCDB0;
	sub_821BCEB0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_821BCDB8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r25,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r25.u64);
	// std r25,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r25.u64);
	// std r25,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r25.u64);
	// std r25,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r25.u64);
	// stw r25,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r25.u32);
	// bl 0x82249cb0
	ctx.lr = 0x821BCDE0;
	sub_82249CB0(ctx, base);
	// ld r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 116);
	// ld r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// cmpdi cr6,r9,-1
	ctx.cr6.compare<int64_t>(ctx.r9.s64, -1, ctx.xer);
	// std r10,516(r31)
	PPC_STORE_U64(ctx.r31.u32 + 516, ctx.r10.u64);
	// bne cr6,0x821bce18
	if (!ctx.cr6.eq) goto loc_821BCE18;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// bl 0x82249d60
	ctx.lr = 0x821BCE04;
	sub_82249D60(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r10,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r10.u64);
loc_821BCE18:
	// std r25,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r25.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r25.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BCE2C"))) PPC_WEAK_FUNC(sub_821BCE2C);
PPC_FUNC_IMPL(__imp__sub_821BCE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BCE30"))) PPC_WEAK_FUNC(sub_821BCE30);
PPC_FUNC_IMPL(__imp__sub_821BCE30) {
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
	// beq cr6,0x821bce54
	if (ctx.cr6.eq) goto loc_821BCE54;
	// bl 0x82246e18
	ctx.lr = 0x821BCE54;
	sub_82246E18(ctx, base);
loc_821BCE54:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
	// stb r11,293(r31)
	PPC_STORE_U8(ctx.r31.u32 + 293, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_821BCE80"))) PPC_WEAK_FUNC(sub_821BCE80);
PPC_FUNC_IMPL(__imp__sub_821BCE80) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823426d8
	ctx.lr = 0x821BCE98;
	sub_823426D8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
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

__attribute__((alias("__imp__sub_821BCEB0"))) PPC_WEAK_FUNC(sub_821BCEB0);
PPC_FUNC_IMPL(__imp__sub_821BCEB0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// bgt cr6,0x821bcedc
	if (ctx.cr6.gt) goto loc_821BCEDC;
	// beq cr6,0x821bcecc
	if (ctx.cr6.eq) goto loc_821BCECC;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x821bcee4
	if (ctx.cr6.lt) goto loc_821BCEE4;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x821bcee4
	if (ctx.cr6.gt) goto loc_821BCEE4;
loc_821BCECC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
loc_821BCEDC:
	// cmplwi cr6,r4,38
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 38, ctx.xer);
	// beq cr6,0x821bcef4
	if (ctx.cr6.eq) goto loc_821BCEF4;
loc_821BCEE4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
loc_821BCEF4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BCF04"))) PPC_WEAK_FUNC(sub_821BCF04);
PPC_FUNC_IMPL(__imp__sub_821BCF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BCF08"))) PPC_WEAK_FUNC(sub_821BCF08);
PPC_FUNC_IMPL(__imp__sub_821BCF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x821BCF10;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,512(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821bcf44
	if (!ctx.cr6.eq) goto loc_821BCF44;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_821BCF44:
	// ld r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// cmpld cr6,r11,r22
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r22.u64, ctx.xer);
	// beq cr6,0x821bcf8c
	if (ctx.cr6.eq) goto loc_821BCF8C;
	// rldicl r11,r22,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rotlwi r4,r22,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// bl 0x82249dc8
	ctx.lr = 0x821BCF68;
	sub_82249DC8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821bcf88
	if (!ctx.cr6.eq) goto loc_821BCF88;
loc_821BCF70:
	// bl 0x822471d0
	ctx.lr = 0x821BCF74;
	sub_822471D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bceb0
	ctx.lr = 0x821BCF80;
	sub_821BCEB0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_821BCF88:
	// std r22,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r22.u64);
loc_821BCF8C:
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82249f38
	ctx.lr = 0x821BCFAC;
	sub_82249F38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bd124
	if (!ctx.cr6.eq) goto loc_821BD124;
	// addic. r27,r31,8
	ctx.xer.ca = ctx.r31.u32 > 4294967287;
	ctx.r27.s64 = ctx.r31.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x821bcfcc
	if (!ctx.cr0.eq) goto loc_821BCFCC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x821bcfe8
	goto loc_821BCFE8;
loc_821BCFCC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-22884
	ctx.r4.s64 = ctx.r11.s64 + -22884;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8233dc60
	ctx.lr = 0x821BCFE0;
	sub_8233DC60(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_821BCFE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd124
	if (ctx.cr6.eq) goto loc_821BD124;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82222fa8
	ctx.lr = 0x821BCFFC;
	sub_82222FA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bd124
	if (ctx.cr6.eq) goto loc_821BD124;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r25,r11,22200
	ctx.r25.s64 = ctx.r11.s64 + 22200;
loc_821BD010:
	// lwz r11,2352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2352);
	// rlwinm r9,r11,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bd124
	if (ctx.cr6.eq) goto loc_821BD124;
	// lbz r10,968(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 968);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bd124
	if (!ctx.cr6.eq) goto loc_821BD124;
loc_821BD02C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82222178
	ctx.lr = 0x821BD034;
	sub_82222178(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bd064
	if (!ctx.cr6.eq) goto loc_821BD064;
	// lbz r10,968(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 968);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bd064
	if (!ctx.cr6.eq) goto loc_821BD064;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82247328
	ctx.lr = 0x821BD054;
	sub_82247328(ctx, base);
	// lwz r11,2352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2352);
	// rlwinm r9,r11,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821bd02c
	if (!ctx.cr6.eq) goto loc_821BD02C;
loc_821BD064:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bd11c
	if (ctx.cr6.eq) goto loc_821BD11C;
	// lis r8,10240
	ctx.r8.s64 = 671088640;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82249ab8
	ctx.lr = 0x821BD090;
	sub_82249AB8(ctx, base);
	// stw r3,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821bd0a4
	if (!ctx.cr6.eq) goto loc_821BD0A4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x821bd010
	goto loc_821BD010;
loc_821BD0A4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// std r26,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r26.u64);
	// std r26,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r26.u64);
	// stw r26,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r26.u32);
	// bl 0x82249cb0
	ctx.lr = 0x821BD0CC;
	sub_82249CB0(ctx, base);
	// ld r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// ld r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 116);
	// li r6,0
	ctx.r6.s64 = 0;
	// rldicl r8,r10,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// std r9,516(r31)
	PPC_STORE_U64(ctx.r31.u32 + 516, ctx.r9.u64);
	// bl 0x82249dc8
	ctx.lr = 0x821BD0F4;
	sub_82249DC8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821bcf70
	if (ctx.cr6.eq) goto loc_821BCF70;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// bl 0x82249f38
	ctx.lr = 0x821BD118;
	sub_82249F38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821BD11C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd010
	if (ctx.cr6.eq) goto loc_821BD010;
loc_821BD124:
	// ld r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r22,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r22.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x821bd140
	if (ctx.cr6.lt) goto loc_821BD140;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821BD140:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821bcf70
	if (ctx.cr6.eq) goto loc_821BCF70;
	// ld r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r26,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BD170"))) PPC_WEAK_FUNC(sub_821BD170);
PPC_FUNC_IMPL(__imp__sub_821BD170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821BD178;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpld cr6,r11,r5
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r5.u64, ctx.xer);
	// beq cr6,0x821bd1d8
	if (ctx.cr6.eq) goto loc_821BD1D8;
	// rldicl r11,r5,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// lwz r3,512(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rotlwi r4,r30,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// bl 0x82249dc8
	ctx.lr = 0x821BD1B4;
	sub_82249DC8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821bd1d4
	if (!ctx.cr6.eq) goto loc_821BD1D4;
loc_821BD1BC:
	// bl 0x822471d0
	ctx.lr = 0x821BD1C0;
	sub_822471D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bceb0
	ctx.lr = 0x821BD1CC;
	sub_821BCEB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821BD1D4:
	// std r30,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r30.u64);
loc_821BD1D8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8224a0b8
	ctx.lr = 0x821BD1F8;
	sub_8224A0B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821bd1bc
	if (ctx.cr6.eq) goto loc_821BD1BC;
	// ld r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lbz r9,294(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 294);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// std r11,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r11.u64);
	// beq cr6,0x821bd248
	if (ctx.cr6.eq) goto loc_821BD248;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x821bd254
	if (!ctx.cr6.gt) goto loc_821BD254;
	// std r11,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r11.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821BD248:
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x821bd254
	if (!ctx.cr6.gt) goto loc_821BD254;
	// std r10,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r10.u64);
loc_821BD254:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BD268"))) PPC_WEAK_FUNC(sub_821BD268);
PPC_FUNC_IMPL(__imp__sub_821BD268) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,516
	ctx.r3.s64 = ctx.r3.s64 + 516;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BD270"))) PPC_WEAK_FUNC(sub_821BD270);
PPC_FUNC_IMPL(__imp__sub_821BD270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821BD278;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,68
	ctx.r3.s64 = 68;
	// addi r4,r11,-26180
	ctx.r4.s64 = ctx.r11.s64 + -26180;
	// bl 0x821bb3e0
	ctx.lr = 0x821BD28C;
	sub_821BB3E0(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r3,76
	ctx.r3.s64 = 76;
	// addi r4,r10,-26176
	ctx.r4.s64 = ctx.r10.s64 + -26176;
	// bl 0x821bb3e0
	ctx.lr = 0x821BD29C;
	sub_821BB3E0(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r3,83
	ctx.r3.s64 = 83;
	// addi r4,r9,-26164
	ctx.r4.s64 = ctx.r9.s64 + -26164;
	// bl 0x821bb3e0
	ctx.lr = 0x821BD2AC;
	sub_821BB3E0(ctx, base);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r3,84
	ctx.r3.s64 = 84;
	// addi r4,r8,-26160
	ctx.r4.s64 = ctx.r8.s64 + -26160;
	// bl 0x821bb3e0
	ctx.lr = 0x821BD2BC;
	sub_821BB3E0(ctx, base);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// li r3,77
	ctx.r3.s64 = 77;
	// addi r4,r7,-26156
	ctx.r4.s64 = ctx.r7.s64 + -26156;
	// bl 0x821bb3e0
	ctx.lr = 0x821BD2CC;
	sub_821BB3E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82082030
	ctx.lr = 0x821BD2E0;
	sub_82082030(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-14440
	ctx.r31.s64 = ctx.r11.s64 + -14440;
	// li r29,0
	ctx.r29.s64 = 0;
	// beq cr6,0x821bd32c
	if (ctx.cr6.eq) goto loc_821BD32C;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r29.u8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// addi r8,r11,21424
	ctx.r8.s64 = ctx.r11.s64 + 21424;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// addi r9,r10,-26012
	ctx.r9.s64 = ctx.r10.s64 + -26012;
	// stb r29,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r29.u8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// b 0x821bd330
	goto loc_821BD330;
loc_821BD32C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821BD330:
	// stw r3,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r3.u32);
	// lis r28,-32197
	ctx.r28.s64 = -2110062592;
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r29.u8);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r6,r11,-26144
	ctx.r6.s64 = ctx.r11.s64 + -26144;
	// lwz r11,-27100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27100);
	// addi r5,r11,16384
	ctx.r5.s64 = ctx.r11.s64 + 16384;
	// bl 0x82081680
	ctx.lr = 0x821BD354;
	sub_82081680(ctx, base);
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82247090
	ctx.lr = 0x821BD364;
	sub_82247090(ctx, base);
	// stb r29,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r29.u8);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-27100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27100);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// ori r30,r10,32768
	ctx.r30.u64 = ctx.r10.u64 | 32768;
	// addi r6,r9,-26124
	ctx.r6.s64 = ctx.r9.s64 + -26124;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82081680
	ctx.lr = 0x821BD38C;
	sub_82081680(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x82247090
	ctx.lr = 0x821BD398;
	sub_82247090(ctx, base);
	// stb r29,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r29.u8);
	// lwz r11,-27100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27100);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r8,-26104
	ctx.r6.s64 = ctx.r8.s64 + -26104;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82081680
	ctx.lr = 0x821BD3B8;
	sub_82081680(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x82247090
	ctx.lr = 0x821BD3C4;
	sub_82247090(ctx, base);
	// stb r29,408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 408, ctx.r29.u8);
	// lwz r11,-27100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27100);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r6,r7,-26084
	ctx.r6.s64 = ctx.r7.s64 + -26084;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82081680
	ctx.lr = 0x821BD3E4;
	sub_82081680(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// bl 0x82247090
	ctx.lr = 0x821BD3F0;
	sub_82247090(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BD3FC"))) PPC_WEAK_FUNC(sub_821BD3FC);
PPC_FUNC_IMPL(__imp__sub_821BD3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BD400"))) PPC_WEAK_FUNC(sub_821BD400);
PPC_FUNC_IMPL(__imp__sub_821BD400) {
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
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224a2c0
	ctx.lr = 0x821BD42C;
	sub_8224A2C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bd4c8
	if (ctx.cr6.eq) goto loc_821BD4C8;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82249a68
	ctx.lr = 0x821BD448;
	sub_82249A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bd4c8
	if (!ctx.cr6.eq) goto loc_821BD4C8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,90
	ctx.r3.s64 = 90;
	// addi r4,r11,-26052
	ctx.r4.s64 = ctx.r11.s64 + -26052;
	// bl 0x821bb3e0
	ctx.lr = 0x821BD460;
	sub_821BB3E0(ctx, base);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bb6e8
	ctx.lr = 0x821BD470;
	sub_821BB6E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bd4a8
	if (!ctx.cr6.eq) goto loc_821BD4A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stb r30,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r30.u8);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r6,r9,-26044
	ctx.r6.s64 = ctx.r9.s64 + -26044;
	// lwz r11,-27100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27100);
	// addi r5,r11,16384
	ctx.r5.s64 = ctx.r11.s64 + 16384;
	// bl 0x82081680
	ctx.lr = 0x821BD4A4;
	sub_82081680(ctx, base);
	// b 0x821bd4cc
	goto loc_821BD4CC;
loc_821BD4A8:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x821bd4cc
	if (!ctx.cr6.eq) goto loc_821BD4CC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8224a4b0
	ctx.lr = 0x821BD4B8;
	sub_8224A4B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bd4cc
	if (ctx.cr6.eq) goto loc_821BD4CC;
	// bl 0x82249290
	ctx.lr = 0x821BD4C4;
	sub_82249290(ctx, base);
	// b 0x821bd4cc
	goto loc_821BD4CC;
loc_821BD4C8:
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_821BD4CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
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

__attribute__((alias("__imp__sub_821BD4E8"))) PPC_WEAK_FUNC(sub_821BD4E8);
PPC_FUNC_IMPL(__imp__sub_821BD4E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-26020
	ctx.r3.s64 = ctx.r10.s64 + -26020;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224a3a0
	ctx.lr = 0x821BD518;
	sub_8224A3A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821bd534
	if (!ctx.cr6.eq) goto loc_821BD534;
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
loc_821BD534:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-14440
	ctx.r10.s64 = ctx.r11.s64 + -14440;
	// lwz r31,24(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bd5a4
	if (ctx.cr6.eq) goto loc_821BD5A4;
loc_821BD548:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BD55C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bd598
	if (ctx.cr6.eq) goto loc_821BD598;
	// lbz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd598
	if (ctx.cr6.eq) goto loc_821BD598;
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd598
	if (ctx.cr6.eq) goto loc_821BD598;
	// ld r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
	// ld r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
loc_821BD598:
	// lwz r31,528(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821bd548
	if (!ctx.cr6.eq) goto loc_821BD548;
loc_821BD5A4:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_821BD5C0"))) PPC_WEAK_FUNC(sub_821BD5C0);
PPC_FUNC_IMPL(__imp__sub_821BD5C0) {
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
	// bl 0x821bd400
	ctx.lr = 0x821BD5D4;
	sub_821BD400(ctx, base);
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

__attribute__((alias("__imp__sub_821BD5E8"))) PPC_WEAK_FUNC(sub_821BD5E8);
PPC_FUNC_IMPL(__imp__sub_821BD5E8) {
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
	// addi r10,r11,-15440
	ctx.r10.s64 = ctx.r11.s64 + -15440;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821bd688
	if (ctx.cr6.eq) goto loc_821BD688;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821bd644
	if (!ctx.cr6.eq) goto loc_821BD644;
	// bl 0x820ddca8
	ctx.lr = 0x821BD62C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bd63c
	if (ctx.cr6.eq) goto loc_821BD63C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x821bd668
	goto loc_821BD668;
loc_821BD63C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821bd668
	goto loc_821BD668;
loc_821BD644:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821bd688
	if (ctx.cr6.eq) goto loc_821BD688;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x821BD668;
	sub_820F3178(ctx, base);
loc_821BD668:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bd688
	if (ctx.cr6.eq) goto loc_821BD688;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bd688
	if (ctx.cr6.eq) goto loc_821BD688;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820daf68
	ctx.lr = 0x821BD688;
	sub_820DAF68(ctx, base);
loc_821BD688:
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

__attribute__((alias("__imp__sub_821BD6A0"))) PPC_WEAK_FUNC(sub_821BD6A0);
PPC_FUNC_IMPL(__imp__sub_821BD6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,552(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// beq cr6,0x821bd6d4
	if (ctx.cr6.eq) goto loc_821BD6D4;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x821bd6d4
	if (!ctx.cr6.eq) goto loc_821BD6D4;
	// lwz r10,992(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 992);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 992, ctx.r10.u32);
	// blr 
	return;
loc_821BD6D4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bd6ec
	if (ctx.cr6.eq) goto loc_821BD6EC;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 556, ctx.r10.u32);
	// blr 
	return;
loc_821BD6EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r10.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r9.u32);
	// stw r8,564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 564, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 556, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BD714"))) PPC_WEAK_FUNC(sub_821BD714);
PPC_FUNC_IMPL(__imp__sub_821BD714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BD718"))) PPC_WEAK_FUNC(sub_821BD718);
PPC_FUNC_IMPL(__imp__sub_821BD718) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-15440
	ctx.r31.s64 = ctx.r10.s64 + -15440;
	// lwz r10,552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821bd8a8
	if (!ctx.cr6.eq) goto loc_821BD8A8;
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x821bd8a8
	if (ctx.cr6.gt) goto loc_821BD8A8;
	// lwz r10,616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bd770
	if (!ctx.cr6.eq) goto loc_821BD770;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// b 0x821bd8b0
	goto loc_821BD8B0;
loc_821BD770:
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_821BD778:
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
	// bne cr6,0x821bd778
	if (!ctx.cr6.eq) goto loc_821BD778;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233eaf0
	ctx.lr = 0x821BD7A8;
	sub_8233EAF0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
loc_821BD7B0:
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821bd7b0
	if (!ctx.cr6.eq) goto loc_821BD7B0;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821bd830
	if (ctx.cr6.eq) goto loc_821BD830;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_821BD7E4:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
loc_821BD7EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821bd810
	if (ctx.cr6.eq) goto loc_821BD810;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821bd7ec
	if (ctx.cr6.eq) goto loc_821BD7EC;
loc_821BD810:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821bd82c
	if (ctx.cr6.eq) goto loc_821BD82C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821bd7e4
	if (ctx.cr6.lt) goto loc_821BD7E4;
	// b 0x821bd830
	goto loc_821BD830;
loc_821BD82C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_821BD830:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd8a8
	if (ctx.cr6.eq) goto loc_821BD8A8;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// addi r7,r31,568
	ctx.r7.s64 = ctx.r31.s64 + 568;
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// addi r6,r31,656
	ctx.r6.s64 = ctx.r31.s64 + 656;
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// addi r5,r31,652
	ctx.r5.s64 = ctx.r31.s64 + 652;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// bl 0x8224a2b8
	ctx.lr = 0x821BD878;
	sub_8224A2B8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r9.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
	// b 0x821bd8b4
	goto loc_821BD8B4;
loc_821BD8A8:
	// li r3,2
	ctx.r3.s64 = 2;
	// li r11,2
	ctx.r11.s64 = 2;
loc_821BD8B0:
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
loc_821BD8B4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
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

__attribute__((alias("__imp__sub_821BD8CC"))) PPC_WEAK_FUNC(sub_821BD8CC);
PPC_FUNC_IMPL(__imp__sub_821BD8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BD8D0"))) PPC_WEAK_FUNC(sub_821BD8D0);
PPC_FUNC_IMPL(__imp__sub_821BD8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821BD8D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-15440
	ctx.r31.s64 = ctx.r11.s64 + -15440;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bdadc
	if (!ctx.cr6.eq) goto loc_821BDADC;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x821bdadc
	if (ctx.cr6.gt) goto loc_821BDADC;
	// bl 0x821b2e70
	ctx.lr = 0x821BD914;
	sub_821B2E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bdad0
	if (ctx.cr6.eq) goto loc_821BDAD0;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// addi r10,r10,-16888
	ctx.r10.s64 = ctx.r10.s64 + -16888;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r8,r10,304
	ctx.r8.s64 = ctx.r10.s64 + 304;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r6,r7,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821bdad0
	if (!ctx.cr6.eq) goto loc_821BDAD0;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bd968
	if (!ctx.cr6.eq) goto loc_821BD968;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821BD968:
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_821BD974:
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
	// bne cr6,0x821bd974
	if (!ctx.cr6.eq) goto loc_821BD974;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x8233d268
	ctx.lr = 0x821BD998;
	sub_8233D268(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd9c4
	if (ctx.cr6.eq) goto loc_821BD9C4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BD9B4;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
loc_821BD9C4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821bda14
	if (ctx.cr6.eq) goto loc_821BDA14;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82308d50
	ctx.lr = 0x821BD9D8;
	sub_82308D50(ctx, base);
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82082030
	ctx.lr = 0x821BD9F4;
	sub_82082030(ctx, base);
	// stw r3,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r3.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x821BDA10;
	sub_8233E4E0(ctx, base);
	// stw r29,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r29.u32);
loc_821BDA14:
	// li r5,304
	ctx.r5.s64 = 304;
	// stw r26,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233eaf0
	ctx.lr = 0x821BDA2C;
	sub_8233EAF0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,280
	ctx.r4.s64 = ctx.r31.s64 + 280;
	// bl 0x8233d268
	ctx.lr = 0x821BDA38;
	sub_8233D268(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
loc_821BDA40:
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821bda40
	if (!ctx.cr6.eq) goto loc_821BDA40;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// addi r9,r31,568
	ctx.r9.s64 = ctx.r31.s64 + 568;
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// addi r4,r8,-26004
	ctx.r4.s64 = ctx.r8.s64 + -26004;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r31,644
	ctx.r7.s64 = ctx.r31.s64 + 644;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// bl 0x8224a360
	ctx.lr = 0x821BDAA4;
	sub_8224A360(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stw r10,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821BDAD0:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821BDADC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BDAF0"))) PPC_WEAK_FUNC(sub_821BDAF0);
PPC_FUNC_IMPL(__imp__sub_821BDAF0) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-15440
	ctx.r31.s64 = ctx.r10.s64 + -15440;
	// lwz r10,552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821bdb3c
	if (!ctx.cr6.eq) goto loc_821BDB3C;
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x821bdb3c
	if (ctx.cr6.gt) goto loc_821BDB3C;
	// lwz r10,616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bdb60
	if (!ctx.cr6.eq) goto loc_821BDB60;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
loc_821BDB3C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
loc_821BDB44:
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
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
loc_821BDB60:
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_821BDB68:
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
	// bne cr6,0x821bdb68
	if (!ctx.cr6.eq) goto loc_821BDB68;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233eaf0
	ctx.lr = 0x821BDB98;
	sub_8233EAF0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
loc_821BDBA0:
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821bdba0
	if (!ctx.cr6.eq) goto loc_821BDBA0;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821bdc3c
	if (ctx.cr6.eq) goto loc_821BDC3C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_821BDBD8:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
loc_821BDBE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// beq cr6,0x821bdc04
	if (ctx.cr6.eq) goto loc_821BDC04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821bdbe0
	if (ctx.cr6.eq) goto loc_821BDBE0;
loc_821BDC04:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821bdc20
	if (ctx.cr6.eq) goto loc_821BDC20;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821bdbd8
	if (ctx.cr6.lt) goto loc_821BDBD8;
	// b 0x821bdc3c
	goto loc_821BDC3C;
loc_821BDC20:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r4,r11,260
	ctx.r4.s64 = ctx.r11.s64 + 260;
	// bl 0x8233d068
	ctx.lr = 0x821BDC38;
	sub_8233D068(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
loc_821BDC3C:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdb3c
	if (ctx.cr6.eq) goto loc_821BDB3C;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// addi r7,r31,568
	ctx.r7.s64 = ctx.r31.s64 + 568;
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// addi r6,r31,656
	ctx.r6.s64 = ctx.r31.s64 + 656;
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// addi r5,r31,652
	ctx.r5.s64 = ctx.r31.s64 + 652;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// bl 0x8224a2b8
	ctx.lr = 0x821BDC84;
	sub_8224A2B8(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bdb44
	goto loc_821BDB44;
}

__attribute__((alias("__imp__sub_821BDCA8"))) PPC_WEAK_FUNC(sub_821BDCA8);
PPC_FUNC_IMPL(__imp__sub_821BDCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821BDCB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,-15440
	ctx.r31.s64 = ctx.r11.s64 + -15440;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bdd98
	if (!ctx.cr6.eq) goto loc_821BDD98;
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821bdd98
	if (ctx.cr6.gt) goto loc_821BDD98;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,632
	ctx.r11.s64 = ctx.r31.s64 + 632;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// std r30,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r30.u64);
	// beq cr6,0x821bdd04
	if (ctx.cr6.eq) goto loc_821BDD04;
	// li r4,0
	ctx.r4.s64 = 0;
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// bl 0x8224a2e0
	ctx.lr = 0x821BDCFC;
	sub_8224A2E0(ctx, base);
	// std r3,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r3.u64);
	// b 0x821bdd0c
	goto loc_821BDD0C;
loc_821BDD04:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// std r30,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r30.u64);
loc_821BDD0C:
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r29,625(r31)
	PPC_STORE_U8(ctx.r31.u32 + 625, ctx.r29.u8);
	// stb r28,626(r31)
	PPC_STORE_U8(ctx.r31.u32 + 626, ctx.r28.u8);
	// beq cr6,0x821bdd44
	if (ctx.cr6.eq) goto loc_821BDD44;
	// li r5,512
	ctx.r5.s64 = 512;
loc_821BDD44:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdd54
	if (ctx.cr6.eq) goto loc_821BDD54;
	// ori r5,r5,256
	ctx.r5.u64 = ctx.r5.u64 | 256;
loc_821BDD54:
	// addi r8,r31,568
	ctx.r8.s64 = ctx.r31.s64 + 568;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// addi r7,r31,616
	ctx.r7.s64 = ctx.r31.s64 + 616;
	// ld r6,632(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 632);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82247930
	ctx.lr = 0x821BDD6C;
	sub_82247930(ctx, base);
	// addi r10,r3,-997
	ctx.r10.s64 = ctx.r3.s64 + -997;
	// li r11,4
	ctx.r11.s64 = 4;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r10,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 624, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821BDD98:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BDDAC"))) PPC_WEAK_FUNC(sub_821BDDAC);
PPC_FUNC_IMPL(__imp__sub_821BDDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BDDB0"))) PPC_WEAK_FUNC(sub_821BDDB0);
PPC_FUNC_IMPL(__imp__sub_821BDDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821BDDB8;
	__savegprlr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10016(r1)
	ea = -10016 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-15440
	ctx.r31.s64 = ctx.r11.s64 + -15440;
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x821bde04
	if (!ctx.cr6.gt) goto loc_821BDE04;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x821bd5e8
	ctx.lr = 0x821BDDFC;
	sub_821BD5E8(ctx, base);
	// addi r1,r1,10016
	ctx.r1.s64 = ctx.r1.s64 + 10016;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821BDE04:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821bde50
	if (ctx.cr6.eq) goto loc_821BDE50;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_821BDE20:
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bde40
	if (ctx.cr6.eq) goto loc_821BDE40;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BDE38;
	sub_82080000(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_821BDE40:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821bde20
	if (ctx.cr6.lt) goto loc_821BDE20;
loc_821BDE50:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bde64
	if (ctx.cr6.eq) goto loc_821BDE64;
	// addi r4,r10,-16
	ctx.r4.s64 = ctx.r10.s64 + -16;
	// lwz r3,-8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BDE64;
	sub_82080000(ctx, base);
loc_821BDE64:
	// lwz r4,616(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// bne cr6,0x821bdeac
	if (!ctx.cr6.eq) goto loc_821BDEAC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r25,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r25.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// li r3,26
	ctx.r3.s64 = 26;
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// bl 0x821bd5e8
	ctx.lr = 0x821BDEA4;
	sub_821BD5E8(ctx, base);
	// addi r1,r1,10016
	ctx.r1.s64 = ctx.r1.s64 + 10016;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821BDEAC:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8224a2c8
	ctx.lr = 0x821BDEC8;
	sub_8224A2C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821be058
	if (!ctx.cr6.eq) goto loc_821BE058;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,9856
	ctx.r5.s64 = 9856;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82248748
	ctx.lr = 0x821BDEE8;
	sub_82248748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821be040
	if (!ctx.cr6.eq) goto loc_821BE040;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821bdf0c
	if (!ctx.cr6.gt) goto loc_821BDF0C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821BDF0C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821BDF1C;
	sub_82082030(ctx, base);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x821BDF30;
	sub_8233EAF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be04c
	if (ctx.cr6.eq) goto loc_821BE04C;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// addi r29,r1,360
	ctx.r29.s64 = ctx.r1.s64 + 360;
loc_821BDF48:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,392
	ctx.r3.s64 = 392;
	// bl 0x82082030
	ctx.lr = 0x821BDF5C;
	sub_82082030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821be010
	if (ctx.cr6.eq) goto loc_821BE010;
	// addi r28,r29,-256
	ctx.r28.s64 = ctx.r29.s64 + -256;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bdfc4
	if (ctx.cr6.eq) goto loc_821BDFC4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821BDF78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bdf78
	if (!ctx.cr6.eq) goto loc_821BDF78;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bdfc4
	if (ctx.cr6.eq) goto loc_821BDFC4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r10,r29,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r29.s64;
loc_821BDFA4:
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
	// bne cr6,0x821bdfa4
	if (!ctx.cr6.eq) goto loc_821BDFA4;
	// stb r25,259(r30)
	PPC_STORE_U8(ctx.r30.u32 + 259, ctx.r25.u8);
	// b 0x821bdfc8
	goto loc_821BDFC8;
loc_821BDFC4:
	// stb r25,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r25.u8);
loc_821BDFC8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821be000
	if (ctx.cr6.eq) goto loc_821BE000;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233d240
	ctx.lr = 0x821BDFD8;
	sub_8233D240(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821be000
	if (ctx.cr6.eq) goto loc_821BE000;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,260
	ctx.r3.s64 = ctx.r30.s64 + 260;
	// bl 0x8233db20
	ctx.lr = 0x821BDFF0;
	sub_8233DB20(ctx, base);
	// stb r25,387(r30)
	PPC_STORE_U8(ctx.r30.u32 + 387, ctx.r25.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r25,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r25.u32);
	// b 0x821be014
	goto loc_821BE014;
loc_821BE000:
	// stb r25,260(r30)
	PPC_STORE_U8(ctx.r30.u32 + 260, ctx.r25.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r25,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r25.u32);
	// b 0x821be014
	goto loc_821BE014;
loc_821BE010:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_821BE014:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,308
	ctx.r29.s64 = ctx.r29.s64 + 308;
	// stwx r10,r26,r11
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821bdf48
	if (ctx.cr6.lt) goto loc_821BDF48;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82246e18
	ctx.lr = 0x821BE03C;
	sub_82246E18(ctx, base);
	// b 0x821be064
	goto loc_821BE064;
loc_821BE040:
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x8224a568
	ctx.lr = 0x821BE048;
	sub_8224A568(ctx, base);
	// bl 0x821bebd0
	ctx.lr = 0x821BE04C;
	sub_821BEBD0(ctx, base);
loc_821BE04C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82246e18
	ctx.lr = 0x821BE054;
	sub_82246E18(ctx, base);
	// b 0x821be064
	goto loc_821BE064;
loc_821BE058:
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x8224a568
	ctx.lr = 0x821BE060;
	sub_8224A568(ctx, base);
	// bl 0x821bebd0
	ctx.lr = 0x821BE064;
	sub_821BEBD0(ctx, base);
loc_821BE064:
	// lwz r11,992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r25,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r25.u32);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stw r25,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r25.u32);
	// stw r25,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r25.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821be09c
	if (!ctx.cr6.eq) goto loc_821BE09C;
	// li r3,26
	ctx.r3.s64 = 26;
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// bl 0x821bd5e8
	ctx.lr = 0x821BE094;
	sub_821BD5E8(ctx, base);
	// addi r1,r1,10016
	ctx.r1.s64 = ctx.r1.s64 + 10016;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821BE09C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r11.u32);
	// addi r1,r1,10016
	ctx.r1.s64 = ctx.r1.s64 + 10016;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BE0AC"))) PPC_WEAK_FUNC(sub_821BE0AC);
PPC_FUNC_IMPL(__imp__sub_821BE0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BE0B0"))) PPC_WEAK_FUNC(sub_821BE0B0);
PPC_FUNC_IMPL(__imp__sub_821BE0B0) {
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
	// addi r31,r11,-15440
	ctx.r31.s64 = ctx.r11.s64 + -15440;
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821be1ac
	if (ctx.cr6.eq) goto loc_821BE1AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821be130
	if (ctx.cr6.eq) goto loc_821BE130;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821be2b0
	if (!ctx.cr6.eq) goto loc_821BE2B0;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821be2b0
	if (ctx.cr6.eq) goto loc_821BE2B0;
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r10.u32);
	// bl 0x821bd5e8
	ctx.lr = 0x821BE114;
	sub_821BD5E8(ctx, base);
	// lwz r11,992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r11.u32);
	// bl 0x821bd6a0
	ctx.lr = 0x821BE12C;
	sub_821BD6A0(ctx, base);
	// b 0x821be2b0
	goto loc_821BE2B0;
loc_821BE130:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// beq cr6,0x821be2b0
	if (ctx.cr6.eq) goto loc_821BE2B0;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82246e18
	ctx.lr = 0x821BE144;
	sub_82246E18(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,596
	ctx.r4.s64 = ctx.r31.s64 + 596;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8224a590
	ctx.lr = 0x821BE160;
	sub_8224A590(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821be178
	if (ctx.cr6.eq) goto loc_821BE178;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// b 0x821be180
	goto loc_821BE180;
loc_821BE178:
	// bl 0x822471d0
	ctx.lr = 0x821BE17C;
	sub_822471D0(ctx, base);
	// bl 0x821bebd0
	ctx.lr = 0x821BE180;
	sub_821BEBD0(ctx, base);
loc_821BE180:
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// addi r4,r31,568
	ctx.r4.s64 = ctx.r31.s64 + 568;
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// addi r3,r11,-26004
	ctx.r3.s64 = ctx.r11.s64 + -26004;
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
	// bl 0x8224a2b0
	ctx.lr = 0x821BE1A4;
	sub_8224A2B0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821be2ac
	goto loc_821BE2AC;
loc_821BE1AC:
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821be2b0
	if (ctx.cr6.eq) goto loc_821BE2B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82247fd0
	ctx.lr = 0x821BE1C8;
	sub_82247FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821be208
	if (ctx.cr6.eq) goto loc_821BE208;
	// cmplwi cr6,r3,1627
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1627, ctx.xer);
	// bne cr6,0x821be1e8
	if (!ctx.cr6.eq) goto loc_821BE1E8;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x8224a568
	ctx.lr = 0x821BE1E0;
	sub_8224A568(ctx, base);
	// bl 0x821bebd0
	ctx.lr = 0x821BE1E4;
	sub_821BEBD0(ctx, base);
	// b 0x821be1f0
	goto loc_821BE1F0;
loc_821BE1E8:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
loc_821BE1F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// bl 0x821bd5e8
	ctx.lr = 0x821BE204;
	sub_821BD5E8(ctx, base);
	// b 0x821be2b0
	goto loc_821BE2B0;
loc_821BE208:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,-25996
	ctx.r3.s64 = ctx.r11.s64 + -25996;
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// bl 0x82249ab8
	ctx.lr = 0x821BE230;
	sub_82249AB8(ctx, base);
	// stw r3,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821be274
	if (!ctx.cr6.eq) goto loc_821BE274;
	// bl 0x822471d0
	ctx.lr = 0x821BE240;
	sub_822471D0(ctx, base);
	// bl 0x821bebd0
	ctx.lr = 0x821BE244;
	sub_821BEBD0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// addi r4,r31,568
	ctx.r4.s64 = ctx.r31.s64 + 568;
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// addi r3,r11,-26004
	ctx.r3.s64 = ctx.r11.s64 + -26004;
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
	// bl 0x8224a2b0
	ctx.lr = 0x821BE26C;
	sub_8224A2B0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821be2ac
	goto loc_821BE2AC;
loc_821BE274:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// addi r7,r31,596
	ctx.r7.s64 = ctx.r31.s64 + 596;
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// addi r11,r31,596
	ctx.r11.s64 = ctx.r31.s64 + 596;
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// lwz r4,540(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r5,544(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// bl 0x8224a0b8
	ctx.lr = 0x821BE2A8;
	sub_8224A0B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
loc_821BE2AC:
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
loc_821BE2B0:
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

__attribute__((alias("__imp__sub_821BE2C8"))) PPC_WEAK_FUNC(sub_821BE2C8);
PPC_FUNC_IMPL(__imp__sub_821BE2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821BE2D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-15440
	ctx.r31.s64 = ctx.r11.s64 + -15440;
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821be6d4
	if (ctx.cr6.gt) goto loc_821BE6D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821be460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821BE460;
	// bdzf 4*cr6+eq,0x821be5dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821BE5DC;
	// bne cr6,0x821be6ac
	if (!ctx.cr6.eq) goto loc_821BE6AC;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821be6d4
	if (ctx.cr6.eq) goto loc_821BE6D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82247fd0
	ctx.lr = 0x821BE31C;
	sub_82247FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821be34c
	if (ctx.cr6.eq) goto loc_821BE34C;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x8224a568
	ctx.lr = 0x821BE32C;
	sub_8224A568(ctx, base);
	// bl 0x821bebd0
	ctx.lr = 0x821BE330;
	sub_821BEBD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// bl 0x821bd5e8
	ctx.lr = 0x821BE344;
	sub_821BD5E8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821BE34C:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821be384
	if (!ctx.cr6.eq) goto loc_821BE384;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r9,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r9.u32);
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// bl 0x821bd5e8
	ctx.lr = 0x821BE37C;
	sub_821BD5E8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821BE384:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x821be3bc
	if (!ctx.cr6.gt) goto loc_821BE3BC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r9,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r9.u32);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x821bd5e8
	ctx.lr = 0x821BE3B4;
	sub_821BD5E8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821BE3BC:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r11.u32);
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8233eaf0
	ctx.lr = 0x821BE3D8;
	sub_8233EAF0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r31,280
	ctx.r4.s64 = ctx.r31.s64 + 280;
	// bl 0x8233d268
	ctx.lr = 0x821BE3E4;
	sub_8233D268(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r1,360
	ctx.r10.s64 = ctx.r1.s64 + 360;
loc_821BE3EC:
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821be3ec
	if (!ctx.cr6.eq) goto loc_821BE3EC;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// addi r9,r31,568
	ctx.r9.s64 = ctx.r31.s64 + 568;
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// addi r4,r8,-26004
	ctx.r4.s64 = ctx.r8.s64 + -26004;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r7,r31,644
	ctx.r7.s64 = ctx.r31.s64 + 644;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// bl 0x8224a360
	ctx.lr = 0x821BE450;
	sub_8224A360(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821BE460:
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821be6d4
	if (ctx.cr6.eq) goto loc_821BE6D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82247fd0
	ctx.lr = 0x821BE47C;
	sub_82247FD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821be4cc
	if (ctx.cr6.eq) goto loc_821BE4CC;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x8224a568
	ctx.lr = 0x821BE490;
	sub_8224A568(ctx, base);
	// bl 0x821bebd0
	ctx.lr = 0x821BE494;
	sub_821BEBD0(ctx, base);
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821be4b0
	if (!ctx.cr6.eq) goto loc_821BE4B0;
	// cmplwi cr6,r30,1627
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1627, ctx.xer);
	// bne cr6,0x821be4b0
	if (!ctx.cr6.eq) goto loc_821BE4B0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
loc_821BE4B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// bl 0x821bd5e8
	ctx.lr = 0x821BE4C4;
	sub_821BD5E8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821BE4CC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,-25996
	ctx.r3.s64 = ctx.r11.s64 + -25996;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82249ab8
	ctx.lr = 0x821BE4F4;
	sub_82249AB8(ctx, base);
	// stw r3,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821be540
	if (!ctx.cr6.eq) goto loc_821BE540;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// addi r4,r31,568
	ctx.r4.s64 = ctx.r31.s64 + 568;
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// addi r3,r11,-26004
	ctx.r3.s64 = ctx.r11.s64 + -26004;
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
	// bl 0x8224a2b0
	ctx.lr = 0x821BE530;
	sub_8224A2B0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821BE540:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82249d60
	ctx.lr = 0x821BE548;
	sub_82249D60(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be580
	if (ctx.cr6.eq) goto loc_821BE580;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be580
	if (ctx.cr6.eq) goto loc_821BE580;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BE580;
	sub_82080000(ctx, base);
loc_821BE580:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82082030
	ctx.lr = 0x821BE594;
	sub_82082030(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// addi r7,r31,596
	ctx.r7.s64 = ctx.r31.s64 + 596;
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// addi r11,r31,596
	ctx.r11.s64 = ctx.r31.s64 + 596;
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82249f38
	ctx.lr = 0x821BE5CC;
	sub_82249F38(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821BE5DC:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// beq cr6,0x821be6d4
	if (ctx.cr6.eq) goto loc_821BE6D4;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82246e18
	ctx.lr = 0x821BE5F0;
	sub_82246E18(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,596
	ctx.r4.s64 = ctx.r31.s64 + 596;
	// li r3,-1
	ctx.r3.s64 = -1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x8224a590
	ctx.lr = 0x821BE618;
	sub_8224A590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821be62c
	if (!ctx.cr6.eq) goto loc_821BE62C;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x8224a568
	ctx.lr = 0x821BE628;
	sub_8224A568(ctx, base);
	// bl 0x821bebd0
	ctx.lr = 0x821BE62C;
	sub_821BEBD0(ctx, base);
loc_821BE62C:
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// addi r4,r31,568
	ctx.r4.s64 = ctx.r31.s64 + 568;
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// addi r3,r11,-26004
	ctx.r3.s64 = ctx.r11.s64 + -26004;
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
	// bl 0x8224a2b0
	ctx.lr = 0x821BE650;
	sub_8224A2B0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x82308d50
	ctx.lr = 0x821BE66C;
	sub_82308D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821be68c
	if (ctx.cr6.eq) goto loc_821BE68C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821BE68C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x821BE6A4;
	sub_8233E4E0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821BE6AC:
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821be6d4
	if (ctx.cr6.eq) goto loc_821BE6D4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x821bd5e8
	ctx.lr = 0x821BE6D0;
	sub_821BD5E8(ctx, base);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
loc_821BE6D4:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BE6DC"))) PPC_WEAK_FUNC(sub_821BE6DC);
PPC_FUNC_IMPL(__imp__sub_821BE6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BE6E0"))) PPC_WEAK_FUNC(sub_821BE6E0);
PPC_FUNC_IMPL(__imp__sub_821BE6E0) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-15440
	ctx.r31.s64 = ctx.r11.s64 + -15440;
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821be784
	if (ctx.cr6.eq) goto loc_821BE784;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821be934
	if (!ctx.cr6.eq) goto loc_821BE934;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821be934
	if (ctx.cr6.eq) goto loc_821BE934;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82247fd0
	ctx.lr = 0x821BE72C;
	sub_82247FD0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r8,2
	ctx.r8.s64 = 2;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r30,0
	ctx.r30.s64 = 0;
	// and r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// li r3,23
	ctx.r3.s64 = 23;
	// stw r10,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x821bd5e8
	ctx.lr = 0x821BE758;
	sub_821BD5E8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821be934
	if (ctx.cr6.eq) goto loc_821BE934;
	// lwz r11,992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r11.u32);
	// bl 0x821bd6a0
	ctx.lr = 0x821BE780;
	sub_821BD6A0(ctx, base);
	// b 0x821be934
	goto loc_821BE934;
loc_821BE784:
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821be934
	if (ctx.cr6.eq) goto loc_821BE934;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82247fd0
	ctx.lr = 0x821BE7A0;
	sub_82247FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821be7dc
	if (ctx.cr6.eq) goto loc_821BE7DC;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x8224a568
	ctx.lr = 0x821BE7B0;
	sub_8224A568(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,1392
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1392, ctx.xer);
	// beq cr6,0x821be7dc
	if (ctx.cr6.eq) goto loc_821BE7DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// li r3,23
	ctx.r3.s64 = 23;
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// bl 0x821bd5e8
	ctx.lr = 0x821BE7D8;
	sub_821BD5E8(ctx, base);
	// b 0x821be934
	goto loc_821BE934;
loc_821BE7DC:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x821be810
	if (!ctx.cr6.gt) goto loc_821BE810;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r9,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r9.u32);
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x821bd5e8
	ctx.lr = 0x821BE80C;
	sub_821BD5E8(ctx, base);
	// b 0x821be934
	goto loc_821BE934;
loc_821BE810:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r11.u32);
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233eaf0
	ctx.lr = 0x821BE82C;
	sub_8233EAF0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
loc_821BE834:
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821be834
	if (!ctx.cr6.eq) goto loc_821BE834;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821be8d0
	if (ctx.cr6.eq) goto loc_821BE8D0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_821BE86C:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
loc_821BE874:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// beq cr6,0x821be898
	if (ctx.cr6.eq) goto loc_821BE898;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821be874
	if (ctx.cr6.eq) goto loc_821BE874;
loc_821BE898:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821be8b4
	if (ctx.cr6.eq) goto loc_821BE8B4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821be86c
	if (ctx.cr6.lt) goto loc_821BE86C;
	// b 0x821be8d0
	goto loc_821BE8D0;
loc_821BE8B4:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r4,r11,260
	ctx.r4.s64 = ctx.r11.s64 + 260;
	// bl 0x8233d068
	ctx.lr = 0x821BE8CC;
	sub_8233D068(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
loc_821BE8D0:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be8f8
	if (!ctx.cr6.eq) goto loc_821BE8F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// li r3,23
	ctx.r3.s64 = 23;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x821bd5e8
	ctx.lr = 0x821BE8F8;
	sub_821BD5E8(ctx, base);
loc_821BE8F8:
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// addi r5,r31,568
	ctx.r5.s64 = ctx.r31.s64 + 568;
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// bl 0x8224a2a8
	ctx.lr = 0x821BE92C;
	sub_8224A2A8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
loc_821BE934:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
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

__attribute__((alias("__imp__sub_821BE94C"))) PPC_WEAK_FUNC(sub_821BE94C);
PPC_FUNC_IMPL(__imp__sub_821BE94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BE950"))) PPC_WEAK_FUNC(sub_821BE950);
PPC_FUNC_IMPL(__imp__sub_821BE950) {
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
	// addi r31,r11,-15440
	ctx.r31.s64 = ctx.r11.s64 + -15440;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x821be9b4
	if (!ctx.cr6.gt) goto loc_821BE9B4;
	// li r4,2
	ctx.r4.s64 = 2;
loc_821BE978:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// bl 0x821bd5e8
	ctx.lr = 0x821BE998;
	sub_821BD5E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BE99C:
	// stb r11,668(r31)
	PPC_STORE_U8(ctx.r31.u32 + 668, ctx.r11.u8);
loc_821BE9A0:
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
loc_821BE9B4:
	// lbz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bea08
	if (!ctx.cr6.eq) goto loc_821BEA08;
	// lbz r11,625(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 625);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be9d4
	if (ctx.cr6.eq) goto loc_821BE9D4;
	// li r5,512
	ctx.r5.s64 = 512;
loc_821BE9D4:
	// lbz r11,626(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 626);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be9e4
	if (ctx.cr6.eq) goto loc_821BE9E4;
	// ori r5,r5,256
	ctx.r5.u64 = ctx.r5.u64 | 256;
loc_821BE9E4:
	// addi r8,r31,568
	ctx.r8.s64 = ctx.r31.s64 + 568;
	// ld r6,632(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 632);
	// addi r7,r31,616
	ctx.r7.s64 = ctx.r31.s64 + 616;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82247930
	ctx.lr = 0x821BE9F8;
	sub_82247930(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x821be9a0
	if (!ctx.cr6.eq) goto loc_821BE9A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 624, ctx.r11.u8);
loc_821BEA08:
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821be9a0
	if (ctx.cr6.eq) goto loc_821BE9A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82247fd0
	ctx.lr = 0x821BEA24;
	sub_82247FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// bne cr6,0x821be978
	if (!ctx.cr6.eq) goto loc_821BE978;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// bl 0x821bd5e8
	ctx.lr = 0x821BEA48;
	sub_821BD5E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821be99c
	goto loc_821BE99C;
}

__attribute__((alias("__imp__sub_821BEA50"))) PPC_WEAK_FUNC(sub_821BEA50);
PPC_FUNC_IMPL(__imp__sub_821BEA50) {
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
	// addi r31,r11,-15440
	ctx.r31.s64 = ctx.r11.s64 + -15440;
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x821bebb8
	if (ctx.cr6.gt) goto loc_821BEBB8;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5488
	ctx.r12.s64 = ctx.r12.s64 + -5488;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821BEAB8;
	case 1:
		goto loc_821BEAD0;
	case 2:
		goto loc_821BEAE8;
	case 3:
		goto loc_821BEB00;
	case 4:
		goto loc_821BEBB8;
	case 5:
		goto loc_821BEB18;
	case 6:
		goto loc_821BEB30;
	case 7:
		goto loc_821BEBB8;
	case 8:
		goto loc_821BEBB8;
	case 9:
		goto loc_821BEBB0;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-5448(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5448);
	// lwz r16,-5424(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5424);
	// lwz r16,-5400(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5400);
	// lwz r16,-5376(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5376);
	// lwz r16,-5192(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5192);
	// lwz r16,-5352(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5352);
	// lwz r16,-5328(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5328);
	// lwz r16,-5192(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5192);
	// lwz r16,-5192(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5192);
	// lwz r16,-5200(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5200);
loc_821BEAB8:
	// bl 0x821be0b0
	ctx.lr = 0x821BEABC;
	sub_821BE0B0(ctx, base);
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
loc_821BEAD0:
	// bl 0x821be2c8
	ctx.lr = 0x821BEAD4;
	sub_821BE2C8(ctx, base);
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
loc_821BEAE8:
	// bl 0x821be6e0
	ctx.lr = 0x821BEAEC;
	sub_821BE6E0(ctx, base);
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
loc_821BEB00:
	// bl 0x821be950
	ctx.lr = 0x821BEB04;
	sub_821BE950(ctx, base);
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
loc_821BEB18:
	// bl 0x821bddb0
	ctx.lr = 0x821BEB1C;
	sub_821BDDB0(ctx, base);
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
loc_821BEB30:
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821bebb8
	if (ctx.cr6.eq) goto loc_821BEBB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82247fd0
	ctx.lr = 0x821BEB4C;
	sub_82247FD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
	// bne cr6,0x821beb84
	if (!ctx.cr6.eq) goto loc_821BEB84;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// stb r10,668(r31)
	PPC_STORE_U8(ctx.r31.u32 + 668, ctx.r10.u8);
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
loc_821BEB84:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x821bd5e8
	ctx.lr = 0x821BEB9C;
	sub_821BD5E8(ctx, base);
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
loc_821BEBB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bee00
	ctx.lr = 0x821BEBB8;
	sub_821BEE00(ctx, base);
loc_821BEBB8:
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

__attribute__((alias("__imp__sub_821BEBCC"))) PPC_WEAK_FUNC(sub_821BEBCC);
PPC_FUNC_IMPL(__imp__sub_821BEBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BEBD0"))) PPC_WEAK_FUNC(sub_821BEBD0);
PPC_FUNC_IMPL(__imp__sub_821BEBD0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgt cr6,0x821bec68
	if (ctx.cr6.gt) goto loc_821BEC68;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bge cr6,0x821becc4
	if (!ctx.cr6.lt) goto loc_821BECC4;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821becb0
	if (ctx.cr6.gt) goto loc_821BECB0;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5112
	ctx.r12.s64 = ctx.r12.s64 + -5112;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821BECC4;
	case 1:
		goto loc_821BECB0;
	case 2:
		goto loc_821BEC54;
	case 3:
		goto loc_821BECB0;
	case 4:
		goto loc_821BECB0;
	case 5:
		goto loc_821BEC84;
	case 6:
		goto loc_821BECB0;
	case 7:
		goto loc_821BECB0;
	case 8:
		goto loc_821BECB0;
	case 9:
		goto loc_821BECB0;
	case 10:
		goto loc_821BECB0;
	case 11:
		goto loc_821BEC84;
	case 12:
		goto loc_821BECB0;
	case 13:
		goto loc_821BECB0;
	case 14:
		goto loc_821BECB0;
	case 15:
		goto loc_821BECB0;
	case 16:
		goto loc_821BECB0;
	case 17:
		goto loc_821BECB0;
	case 18:
		goto loc_821BECC4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-4924(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4924);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-5036(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5036);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4988(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4988);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4988(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4988);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4944(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4944);
	// lwz r16,-4924(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4924);
loc_821BEC54:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,-15440
	ctx.r9.s64 = ctx.r10.s64 + -15440;
	// stw r11,556(r9)
	PPC_STORE_U32(ctx.r9.u32 + 556, ctx.r11.u32);
	// blr 
	return;
loc_821BEC68:
	// cmplwi cr6,r11,1167
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1167, ctx.xer);
	// bgt cr6,0x821beca0
	if (ctx.cr6.gt) goto loc_821BECA0;
	// beq cr6,0x821becc4
	if (ctx.cr6.eq) goto loc_821BECC4;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x821bec84
	if (ctx.cr6.eq) goto loc_821BEC84;
	// cmplwi cr6,r11,1110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1110, ctx.xer);
	// b 0x821becac
	goto loc_821BECAC;
loc_821BEC84:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r10,-15440
	ctx.r9.s64 = ctx.r10.s64 + -15440;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,560(r9)
	PPC_STORE_U32(ctx.r9.u32 + 560, ctx.r11.u32);
	// stw r10,556(r9)
	PPC_STORE_U32(ctx.r9.u32 + 556, ctx.r10.u32);
	// blr 
	return;
loc_821BECA0:
	// cmplwi cr6,r11,1392
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1392, ctx.xer);
	// beq cr6,0x821becd8
	if (ctx.cr6.eq) goto loc_821BECD8;
	// cmplwi cr6,r11,1617
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1617, ctx.xer);
loc_821BECAC:
	// beq cr6,0x821becc4
	if (ctx.cr6.eq) goto loc_821BECC4;
loc_821BECB0:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r10,-15440
	ctx.r9.s64 = ctx.r10.s64 + -15440;
	// stw r11,556(r9)
	PPC_STORE_U32(ctx.r9.u32 + 556, ctx.r11.u32);
	// blr 
	return;
loc_821BECC4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r10,-15440
	ctx.r9.s64 = ctx.r10.s64 + -15440;
	// stw r11,556(r9)
	PPC_STORE_U32(ctx.r9.u32 + 556, ctx.r11.u32);
	// blr 
	return;
loc_821BECD8:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r9,r10,-15440
	ctx.r9.s64 = ctx.r10.s64 + -15440;
	// stw r11,556(r9)
	PPC_STORE_U32(ctx.r9.u32 + 556, ctx.r11.u32);
}

__attribute__((alias("__imp__sub_821BECE8"))) PPC_WEAK_FUNC(sub_821BECE8);
PPC_FUNC_IMPL(__imp__sub_821BECE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BECEC"))) PPC_WEAK_FUNC(sub_821BECEC);
PPC_FUNC_IMPL(__imp__sub_821BECEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BECF0"))) PPC_WEAK_FUNC(sub_821BECF0);
PPC_FUNC_IMPL(__imp__sub_821BECF0) {
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
	// addi r31,r11,-15440
	ctx.r31.s64 = ctx.r11.s64 + -15440;
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bed34
	if (ctx.cr6.eq) goto loc_821BED34;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
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
loc_821BED34:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r31,676
	ctx.r5.s64 = ctx.r31.s64 + 676;
	// addi r4,r11,-25980
	ctx.r4.s64 = ctx.r11.s64 + -25980;
	// bl 0x8233e218
	ctx.lr = 0x821BED44;
	sub_8233E218(ctx, base);
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bed70
	if (!ctx.cr6.eq) goto loc_821BED70;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
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
loc_821BED70:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// addi r9,r31,672
	ctx.r9.s64 = ctx.r31.s64 + 672;
	// std r11,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r11.u64);
	// li r7,1
	ctx.r7.s64 = 1;
	// std r11,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r11.u64);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r4,616(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// bl 0x8224a838
	ctx.lr = 0x821BEDAC;
	sub_8224A838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bede4
	if (!ctx.cr6.eq) goto loc_821BEDE4;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
	// bl 0x821bee00
	ctx.lr = 0x821BEDCC;
	sub_821BEE00(ctx, base);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
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
loc_821BEDE4:
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r3,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_821BEE00"))) PPC_WEAK_FUNC(sub_821BEE00);
PPC_FUNC_IMPL(__imp__sub_821BEE00) {
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
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r31,r11,-15440
	ctx.r31.s64 = ctx.r11.s64 + -15440;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r30,552(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// bne cr6,0x821bee80
	if (!ctx.cr6.eq) goto loc_821BEE80;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821beef8
	if (ctx.cr6.eq) goto loc_821BEEF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82247fd0
	ctx.lr = 0x821BEE48;
	sub_82247FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bee68
	if (!ctx.cr6.eq) goto loc_821BEE68;
	// lwz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// lwz r10,676(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821bee80
	if (!ctx.cr6.eq) goto loc_821BEE80;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821bee78
	goto loc_821BEE78;
loc_821BEE68:
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// beq cr6,0x821bee78
	if (ctx.cr6.eq) goto loc_821BEE78;
	// li r11,2
	ctx.r11.s64 = 2;
loc_821BEE78:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
loc_821BEE80:
	// addi r7,r31,568
	ctx.r7.s64 = ctx.r31.s64 + 568;
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,312
	ctx.r5.s64 = 312;
	// addi r4,r31,680
	ctx.r4.s64 = ctx.r31.s64 + 680;
	// bl 0x8224ac08
	ctx.lr = 0x821BEE98;
	sub_8224AC08(ctx, base);
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// bne cr6,0x821beeb0
	if (!ctx.cr6.eq) goto loc_821BEEB0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// b 0x821beed0
	goto loc_821BEED0;
loc_821BEEB0:
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821beec8
	if (ctx.cr6.eq) goto loc_821BEEC8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// b 0x821beed0
	goto loc_821BEED0;
loc_821BEEC8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821beef4
	if (!ctx.cr6.eq) goto loc_821BEEF4;
loc_821BEED0:
	// li r3,85
	ctx.r3.s64 = 85;
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// bl 0x821bd5e8
	ctx.lr = 0x821BEEDC;
	sub_821BD5E8(ctx, base);
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// bl 0x82246e18
	ctx.lr = 0x821BEEE4;
	sub_82246E18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
loc_821BEEF4:
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
loc_821BEEF8:
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

__attribute__((alias("__imp__sub_821BEF10"))) PPC_WEAK_FUNC(sub_821BEF10);
PPC_FUNC_IMPL(__imp__sub_821BEF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821BEF18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x821bef58
	if (ctx.cr6.eq) goto loc_821BEF58;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_821BEF38:
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
	// bne 0x821bef38
	if (!ctx.cr0.eq) goto loc_821BEF38;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_821BEF58:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x821c0630
	ctx.lr = 0x821BEF64;
	sub_821C0630(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c5d80
	ctx.lr = 0x821BEF70;
	sub_821C5D80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0630
	ctx.lr = 0x821BEF7C;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BEF88"))) PPC_WEAK_FUNC(sub_821BEF88);
PPC_FUNC_IMPL(__imp__sub_821BEF88) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8235cf78
	ctx.lr = 0x821BEFA8;
	sub_8235CF78(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8235cfe8
	ctx.lr = 0x821BEFB0;
	sub_8235CFE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x821befcc
	if (ctx.cr6.eq) goto loc_821BEFCC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x821BEFC4;
	sub_821C0630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821bf0b4
	goto loc_821BF0B4;
loc_821BEFCC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8235d3c8
	ctx.lr = 0x821BEFD8;
	sub_8235D3C8(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821c0958
	ctx.lr = 0x821BEFE4;
	sub_821C0958(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821c0958
	ctx.lr = 0x821BEFF0;
	sub_821C0958(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821BF004;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821c0860
	ctx.lr = 0x821BF018;
	sub_821C0860(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r4,96
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 96, ctx.xer);
	// bne cr6,0x821bf038
	if (!ctx.cr6.eq) goto loc_821BF038;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// bl 0x821bf0d0
	ctx.lr = 0x821BF034;
	sub_821BF0D0(ctx, base);
	// b 0x821bf08c
	goto loc_821BF08C;
loc_821BF038:
	// cmplwi cr6,r4,94
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 94, ctx.xer);
	// bne cr6,0x821bf054
	if (!ctx.cr6.eq) goto loc_821BF054;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// bl 0x821bf228
	ctx.lr = 0x821BF050;
	sub_821BF228(ctx, base);
	// b 0x821bf08c
	goto loc_821BF08C;
loc_821BF054:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r4,95
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 95, ctx.xer);
	// bne cr6,0x821bf07c
	if (!ctx.cr6.eq) goto loc_821BF07C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf08c
	if (ctx.cr6.eq) goto loc_821BF08C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,95
	ctx.r4.s64 = 95;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x821bf088
	goto loc_821BF088;
loc_821BF07C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf08c
	if (ctx.cr6.eq) goto loc_821BF08C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_821BF088:
	// bl 0x820daf68
	ctx.lr = 0x821BF08C;
	sub_820DAF68(ctx, base);
loc_821BF08C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bf0a0
	if (ctx.cr6.eq) goto loc_821BF0A0;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821BF0A0;
	sub_82080000(ctx, base);
loc_821BF0A0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x821BF0A8;
	sub_821C0630(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x821BF0B0;
	sub_821C0630(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821BF0B4:
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

__attribute__((alias("__imp__sub_821BF0CC"))) PPC_WEAK_FUNC(sub_821BF0CC);
PPC_FUNC_IMPL(__imp__sub_821BF0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF0D0"))) PPC_WEAK_FUNC(sub_821BF0D0);
PPC_FUNC_IMPL(__imp__sub_821BF0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821BF0D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821BF0F4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bf100
	if (!ctx.cr6.eq) goto loc_821BF100;
	// bl 0x821b3000
	ctx.lr = 0x821BF100;
	sub_821B3000(ctx, base);
loc_821BF100:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r25,-13569
	ctx.r25.s64 = -889257984;
	// addi r8,r10,-20656
	ctx.r8.s64 = ctx.r10.s64 + -20656;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// lwz r5,3264(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3264);
	// addi r7,r5,15
	ctx.r7.s64 = ctx.r5.s64 + 15;
	// rlwinm r28,r7,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821bf13c
	if (!ctx.cr6.gt) goto loc_821BF13C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,4492
	ctx.r10.s64 = ctx.r11.s64 + 4492;
	// stw r10,-13570(r25)
	PPC_STORE_U32(ctx.r25.u32 + -13570, ctx.r10.u32);
loc_821BF13C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,1068(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1068);
	// lwz r4,40(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// bl 0x8233e4e0
	ctx.lr = 0x821BF160;
	sub_8233E4E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r26,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8236b290
	ctx.lr = 0x821BF174;
	sub_8236B290(ctx, base);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
loc_821BF178:
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
	// bne 0x821bf178
	if (!ctx.cr0.eq) goto loc_821BF178;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,1068(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1068);
	// bl 0x821c3510
	ctx.lr = 0x821BF1A4;
	sub_821C3510(ctx, base);
	// lwz r10,1068(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1068);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x821bf1cc
	if (ctx.cr6.eq) goto loc_821BF1CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x820daf68
	ctx.lr = 0x821BF1CC;
	sub_820DAF68(ctx, base);
loc_821BF1CC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bf214
	if (ctx.cr6.eq) goto loc_821BF214;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// ble cr6,0x821bf1ec
	if (!ctx.cr6.gt) goto loc_821BF1EC;
	// stw r9,-13570(r25)
	PPC_STORE_U32(ctx.r25.u32 + -13570, ctx.r9.u32);
loc_821BF1EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821bf208
	if (ctx.cr6.eq) goto loc_821BF208;
	// stw r9,-13570(r25)
	PPC_STORE_U32(ctx.r25.u32 + -13570, ctx.r9.u32);
loc_821BF208:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_821BF214:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8236a8c0
	ctx.lr = 0x821BF21C;
	sub_8236A8C0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF224"))) PPC_WEAK_FUNC(sub_821BF224);
PPC_FUNC_IMPL(__imp__sub_821BF224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF228"))) PPC_WEAK_FUNC(sub_821BF228);
PPC_FUNC_IMPL(__imp__sub_821BF228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821BF230;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236b290
	ctx.lr = 0x821BF248;
	sub_8236B290(ctx, base);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
loc_821BF24C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bf24c
	if (!ctx.cr0.eq) goto loc_821BF24C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c07f0
	ctx.lr = 0x821BF278;
	sub_821C07F0(ctx, base);
	// addi r31,r27,44
	ctx.r31.s64 = ctx.r27.s64 + 44;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c5510
	ctx.lr = 0x821BF288;
	sub_821C5510(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821bf3c0
	if (ctx.cr6.eq) goto loc_821BF3C0;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf3c0
	if (ctx.cr6.eq) goto loc_821BF3C0;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821BF2AC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bf2b8
	if (!ctx.cr6.eq) goto loc_821BF2B8;
	// bl 0x821b3000
	ctx.lr = 0x821BF2B8;
	sub_821B3000(ctx, base);
loc_821BF2B8:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r26,-13569
	ctx.r26.s64 = -889257984;
	// addi r8,r10,-20656
	ctx.r8.s64 = ctx.r10.s64 + -20656;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// lwz r5,3252(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3252);
	// addi r7,r5,15
	ctx.r7.s64 = ctx.r5.s64 + 15;
	// rlwinm r28,r7,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821bf2f4
	if (!ctx.cr6.gt) goto loc_821BF2F4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,4492
	ctx.r10.s64 = ctx.r11.s64 + 4492;
	// stw r10,-13570(r26)
	PPC_STORE_U32(ctx.r26.u32 + -13570, ctx.r10.u32);
loc_821BF2F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x8233e4e0
	ctx.lr = 0x821BF314;
	sub_8233E4E0(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_821BF320:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bf320
	if (!ctx.cr0.eq) goto loc_821BF320;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c5aa0
	ctx.lr = 0x821BF34C;
	sub_821C5AA0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x821bf378
	if (ctx.cr6.eq) goto loc_821BF378;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,94
	ctx.r4.s64 = 94;
	// bl 0x820daf68
	ctx.lr = 0x821BF378;
	sub_820DAF68(ctx, base);
loc_821BF378:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bf3c0
	if (ctx.cr6.eq) goto loc_821BF3C0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// ble cr6,0x821bf398
	if (!ctx.cr6.gt) goto loc_821BF398;
	// stw r9,-13570(r26)
	PPC_STORE_U32(ctx.r26.u32 + -13570, ctx.r9.u32);
loc_821BF398:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821bf3b4
	if (ctx.cr6.eq) goto loc_821BF3B4;
	// stw r9,-13570(r26)
	PPC_STORE_U32(ctx.r26.u32 + -13570, ctx.r9.u32);
loc_821BF3B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_821BF3C0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236a8c0
	ctx.lr = 0x821BF3C8;
	sub_8236A8C0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF3D0"))) PPC_WEAK_FUNC(sub_821BF3D0);
PPC_FUNC_IMPL(__imp__sub_821BF3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821BF3D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x821bf418
	if (ctx.cr6.eq) goto loc_821BF418;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_821BF3F8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bf3f8
	if (!ctx.cr0.eq) goto loc_821BF3F8;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_821BF418:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x821BF420;
	sub_821C0630(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8234ecb8
	ctx.lr = 0x821BF42C;
	sub_8234ECB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x821BF43C;
	sub_821C0630(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821bf4e8
	if (!ctx.cr6.eq) goto loc_821BF4E8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r11,32
	ctx.r29.s64 = ctx.r11.s64 + 32;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf490
	if (!ctx.cr6.eq) goto loc_821BF490;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bf480
	if (!ctx.cr6.eq) goto loc_821BF480;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7810
	ctx.lr = 0x821BF470;
	sub_821C7810(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x821BF478;
	sub_821C0630(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821BF480:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf490
	if (!ctx.cr6.eq) goto loc_821BF490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c8fc0
	ctx.lr = 0x821BF490;
	sub_821C8FC0(ctx, base);
loc_821BF490:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf4dc
	if (ctx.cr6.eq) goto loc_821BF4DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c8830
	ctx.lr = 0x821BF4A4;
	sub_821C8830(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c3940
	ctx.lr = 0x821BF4B4;
	sub_821C3940(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf4d4
	if (ctx.cr6.eq) goto loc_821BF4D4;
loc_821BF4BC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c9028
	ctx.lr = 0x821BF4CC;
	sub_821C9028(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821bf4bc
	if (!ctx.cr0.eq) goto loc_821BF4BC;
loc_821BF4D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c8968
	ctx.lr = 0x821BF4DC;
	sub_821C8968(ctx, base);
loc_821BF4DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
	// stb r11,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r11.u8);
loc_821BF4E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x821BF4F0;
	sub_821C0630(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF4F8"))) PPC_WEAK_FUNC(sub_821BF4F8);
PPC_FUNC_IMPL(__imp__sub_821BF4F8) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,-25952
	ctx.r8.s64 = ctx.r11.s64 + -25952;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r6,r10,-25976
	ctx.r6.s64 = ctx.r10.s64 + -25976;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r5,r9,-25968
	ctx.r5.s64 = ctx.r9.s64 + -25968;
	// addi r4,r7,-25684
	ctx.r4.s64 = ctx.r7.s64 + -25684;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// bl 0x8235d540
	ctx.lr = 0x821BF544;
	sub_8235D540(ctx, base);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// addi r5,r3,31376
	ctx.r5.s64 = ctx.r3.s64 + 31376;
	// addi r4,r10,-25932
	ctx.r4.s64 = ctx.r10.s64 + -25932;
	// addi r3,r9,-25912
	ctx.r3.s64 = ctx.r9.s64 + -25912;
	// addi r10,r8,-25904
	ctx.r10.s64 = ctx.r8.s64 + -25904;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r9,r7,-25888
	ctx.r9.s64 = ctx.r7.s64 + -25888;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r8,r6,-25880
	ctx.r8.s64 = ctx.r6.s64 + -25880;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lfs f0,48(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// stfs f0,1072(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
	// stw r11,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821BF5CC"))) PPC_WEAK_FUNC(sub_821BF5CC);
PPC_FUNC_IMPL(__imp__sub_821BF5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF5D0"))) PPC_WEAK_FUNC(sub_821BF5D0);
PPC_FUNC_IMPL(__imp__sub_821BF5D0) {
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
	// bl 0x821bf710
	ctx.lr = 0x821BF5F0;
	sub_821BF710(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf608
	if (ctx.cr6.eq) goto loc_821BF608;
	// bl 0x8236a3f0
	ctx.lr = 0x821BF604;
	sub_8236A3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BF608:
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

__attribute__((alias("__imp__sub_821BF620"))) PPC_WEAK_FUNC(sub_821BF620);
PPC_FUNC_IMPL(__imp__sub_821BF620) {
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
	// bl 0x823569a8
	ctx.lr = 0x821BF640;
	sub_823569A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf658
	if (ctx.cr6.eq) goto loc_821BF658;
	// bl 0x8236a3f0
	ctx.lr = 0x821BF654;
	sub_8236A3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BF658:
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

__attribute__((alias("__imp__sub_821BF670"))) PPC_WEAK_FUNC(sub_821BF670);
PPC_FUNC_IMPL(__imp__sub_821BF670) {
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
	// bl 0x82356a30
	ctx.lr = 0x821BF690;
	sub_82356A30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf6a8
	if (ctx.cr6.eq) goto loc_821BF6A8;
	// bl 0x8236a3f0
	ctx.lr = 0x821BF6A4;
	sub_8236A3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BF6A8:
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

__attribute__((alias("__imp__sub_821BF6C0"))) PPC_WEAK_FUNC(sub_821BF6C0);
PPC_FUNC_IMPL(__imp__sub_821BF6C0) {
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
	// bl 0x82356a40
	ctx.lr = 0x821BF6E0;
	sub_82356A40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf6f8
	if (ctx.cr6.eq) goto loc_821BF6F8;
	// bl 0x8236a3f0
	ctx.lr = 0x821BF6F4;
	sub_8236A3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BF6F8:
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

__attribute__((alias("__imp__sub_821BF710"))) PPC_WEAK_FUNC(sub_821BF710);
PPC_FUNC_IMPL(__imp__sub_821BF710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821BF718;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,-25932
	ctx.r6.s64 = ctx.r11.s64 + -25932;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r3,r8,-25888
	ctx.r3.s64 = ctx.r8.s64 + -25888;
	// addi r5,r10,-25912
	ctx.r5.s64 = ctx.r10.s64 + -25912;
	// addi r4,r9,-25904
	ctx.r4.s64 = ctx.r9.s64 + -25904;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r7,-25880
	ctx.r11.s64 = ctx.r7.s64 + -25880;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// bl 0x821c5480
	ctx.lr = 0x821BF774;
	sub_821C5480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c5480
	ctx.lr = 0x821BF77C;
	sub_821C5480(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d540
	ctx.lr = 0x821BF784;
	sub_8235D540(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r9,r10,-25684
	ctx.r9.s64 = ctx.r10.s64 + -25684;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x82356a40
	ctx.lr = 0x821BF798;
	sub_82356A40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82356a30
	ctx.lr = 0x821BF7A0;
	sub_82356A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823569a8
	ctx.lr = 0x821BF7A8;
	sub_823569A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF7B0"))) PPC_WEAK_FUNC(sub_821BF7B0);
PPC_FUNC_IMPL(__imp__sub_821BF7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821BF7B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf7e4
	if (ctx.cr6.eq) goto loc_821BF7E4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-20656
	ctx.r10.s64 = ctx.r11.s64 + -20656;
	// lbz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 56);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821bf934
	if (!ctx.cr6.eq) goto loc_821BF934;
loc_821BF7E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf934
	if (ctx.cr6.eq) goto loc_821BF934;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// bne cr6,0x821bf800
	if (!ctx.cr6.eq) goto loc_821BF800;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821BF800:
	// bl 0x820cdf68
	ctx.lr = 0x821BF804;
	sub_820CDF68(ctx, base);
	// bl 0x8236f7e8
	ctx.lr = 0x821BF808;
	sub_8236F7E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235d668
	ctx.lr = 0x821BF810;
	sub_8235D668(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8236a338
	ctx.lr = 0x821BF818;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf828
	if (ctx.cr6.eq) goto loc_821BF828;
	// bl 0x82355a58
	ctx.lr = 0x821BF824;
	sub_82355A58(ctx, base);
	// b 0x821bf82c
	goto loc_821BF82C;
loc_821BF828:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BF82C:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x821bf864
	if (ctx.cr6.eq) goto loc_821BF864;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821BF844:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bf844
	if (!ctx.cr0.eq) goto loc_821BF844;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_821BF864:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82355f48
	ctx.lr = 0x821BF870;
	sub_82355F48(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x823542e0
	ctx.lr = 0x821BF87C;
	sub_823542E0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// lfs f1,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82354360
	ctx.lr = 0x821BF890;
	sub_82354360(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82355608
	ctx.lr = 0x821BF89C;
	sub_82355608(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// bl 0x8235fe50
	ctx.lr = 0x821BF8A8;
	sub_8235FE50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82356e48
	ctx.lr = 0x821BF8B0;
	sub_82356E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x823555d8
	ctx.lr = 0x821BF8BC;
	sub_823555D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x821bf8f8
	if (ctx.cr6.eq) goto loc_821BF8F8;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_821BF8D8:
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
	// bne 0x821bf8d8
	if (!ctx.cr0.eq) goto loc_821BF8D8;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_821BF8F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x821c0630
	ctx.lr = 0x821BF904;
	sub_821C0630(ctx, base);
	// stw r30,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r30.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_821BF90C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bf90c
	if (!ctx.cr0.eq) goto loc_821BF90C;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1072(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
loc_821BF934:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x821BF93C;
	sub_821C0630(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF944"))) PPC_WEAK_FUNC(sub_821BF944);
PPC_FUNC_IMPL(__imp__sub_821BF944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF948"))) PPC_WEAK_FUNC(sub_821BF948);
PPC_FUNC_IMPL(__imp__sub_821BF948) {
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
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfa60
	if (ctx.cr6.eq) goto loc_821BFA60;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bfa60
	if (!ctx.cr6.eq) goto loc_821BFA60;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8236a338
	ctx.lr = 0x821BF984;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf994
	if (ctx.cr6.eq) goto loc_821BF994;
	// bl 0x821c5690
	ctx.lr = 0x821BF990;
	sub_821C5690(ctx, base);
	// b 0x821bf998
	goto loc_821BF998;
loc_821BF994:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BF998:
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r11,-20656
	ctx.r10.s64 = ctx.r11.s64 + -20656;
	// lwz r5,3252(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3252);
	// bl 0x8233e4e0
	ctx.lr = 0x821BF9B4;
	sub_8233E4E0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_821BF9BC:
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
	// bne 0x821bf9bc
	if (!ctx.cr0.eq) goto loc_821BF9BC;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x821bfa10
	if (ctx.cr6.eq) goto loc_821BFA10;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_821BF9F0:
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
	// bne 0x821bf9f0
	if (!ctx.cr0.eq) goto loc_821BF9F0;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_821BFA10:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x823553a0
	ctx.lr = 0x821BFA1C;
	sub_823553A0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_821BFA28:
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
	// bne 0x821bfa28
	if (!ctx.cr0.eq) goto loc_821BFA28;
	// lwz r6,1064(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r3.u32);
loc_821BFA60:
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

__attribute__((alias("__imp__sub_821BFA78"))) PPC_WEAK_FUNC(sub_821BFA78);
PPC_FUNC_IMPL(__imp__sub_821BFA78) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfb24
	if (ctx.cr6.eq) goto loc_821BFB24;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_821BFAA0:
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
	// bne 0x821bfaa0
	if (!ctx.cr0.eq) goto loc_821BFAA0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82354378
	ctx.lr = 0x821BFACC;
	sub_82354378(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_821BFAD4:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bfad4
	if (!ctx.cr0.eq) goto loc_821BFAD4;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821bfb1c
	if (!ctx.cr6.eq) goto loc_821BFB1C;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bfb1c
	if (ctx.cr6.eq) goto loc_821BFB1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BFB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BFB1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_821BFB24:
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

__attribute__((alias("__imp__sub_821BFB38"))) PPC_WEAK_FUNC(sub_821BFB38);
PPC_FUNC_IMPL(__imp__sub_821BFB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821BFB40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// bl 0x821c5480
	ctx.lr = 0x821BFB50;
	sub_821C5480(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfb64
	if (ctx.cr6.eq) goto loc_821BFB64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bfa78
	ctx.lr = 0x821BFB64;
	sub_821BFA78(ctx, base);
loc_821BFB64:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bfb84
	if (ctx.cr6.eq) goto loc_821BFB84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BFB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BFB84:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x820cdf68
	ctx.lr = 0x821BFB94;
	sub_820CDF68(ctx, base);
	// bl 0x8236f7e8
	ctx.lr = 0x821BFB98;
	sub_8236F7E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8235d670
	ctx.lr = 0x821BFBA0;
	sub_8235D670(ctx, base);
	// lwz r11,1068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1068);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_821BFBAC:
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
	// bne 0x821bfbac
	if (!ctx.cr0.eq) goto loc_821BFBAC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BFBD8"))) PPC_WEAK_FUNC(sub_821BFBD8);
PPC_FUNC_IMPL(__imp__sub_821BFBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821BFBE0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfd70
	if (ctx.cr6.eq) goto loc_821BFD70;
	// lfs f0,1072(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1072);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,1072(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1072, temp.u32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,800(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 800);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x821bfd14
	if (!ctx.cr6.gt) goto loc_821BFD14;
	// li r29,0
	ctx.r29.s64 = 0;
loc_821BFC1C:
	// lfs f0,1072(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1072);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,1072(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1072, temp.u32);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8234ecb8
	ctx.lr = 0x821BFC34;
	sub_8234ECB8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x821BFC3C;
	sub_821C0630(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bfc78
	if (ctx.cr6.eq) goto loc_821BFC78;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bfc58
	if (!ctx.cr6.eq) goto loc_821BFC58;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x821bfc68
	goto loc_821BFC68;
loc_821BFC58:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_821BFC68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821bfc7c
	if (!ctx.cr6.eq) goto loc_821BFC7C;
loc_821BFC78:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821BFC7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfcc4
	if (ctx.cr6.eq) goto loc_821BFCC4;
	// lwz r31,36(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234ecb8
	ctx.lr = 0x821BFC98;
	sub_8234ECB8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bfca8
	if (ctx.cr6.eq) goto loc_821BFCA8;
	// bl 0x8234ef48
	ctx.lr = 0x821BFCA8;
	sub_8234EF48(ctx, base);
loc_821BFCA8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r29,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r29.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x821c0630
	ctx.lr = 0x821BFCC4;
	sub_821C0630(ctx, base);
loc_821BFCC4:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82354918
	ctx.lr = 0x821BFCD0;
	sub_82354918(ctx, base);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lbz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bfd08
	if (!ctx.cr6.eq) goto loc_821BFD08;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8234ecb8
	ctx.lr = 0x821BFCE8;
	sub_8234ECB8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x821BFCF0;
	sub_821C0630(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bfd08
	if (ctx.cr6.eq) goto loc_821BFD08;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x821c8278
	ctx.lr = 0x821BFD08;
	sub_821C8278(ctx, base);
loc_821BFD08:
	// lfs f0,1072(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1072);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x821bfc1c
	if (ctx.cr6.gt) goto loc_821BFC1C;
loc_821BFD14:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82354638
	ctx.lr = 0x821BFD20;
	sub_82354638(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BFD34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x821BFD40;
	sub_821C0630(ctx, base);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// beq cr6,0x821bfd50
	if (ctx.cr6.eq) goto loc_821BFD50;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x821bfd70
	if (!ctx.cr6.eq) goto loc_821BFD70;
loc_821BFD50:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bfd68
	if (ctx.cr6.eq) goto loc_821BFD68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x820daf68
	ctx.lr = 0x821BFD68;
	sub_820DAF68(ctx, base);
loc_821BFD68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bfb38
	ctx.lr = 0x821BFD70;
	sub_821BFB38(ctx, base);
loc_821BFD70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BFD7C"))) PPC_WEAK_FUNC(sub_821BFD7C);
PPC_FUNC_IMPL(__imp__sub_821BFD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BFD80"))) PPC_WEAK_FUNC(sub_821BFD80);
PPC_FUNC_IMPL(__imp__sub_821BFD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821BFD88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x821bfdc4
	if (ctx.cr6.eq) goto loc_821BFDC4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_821BFDA4:
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
	// bne 0x821bfda4
	if (!ctx.cr0.eq) goto loc_821BFDA4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_821BFDC4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x821c0630
	ctx.lr = 0x821BFDD0;
	sub_821C0630(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6150
	ctx.lr = 0x821BFDE0;
	sub_821C6150(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c7810
	ctx.lr = 0x821BFDEC;
	sub_821C7810(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bfe20
	if (ctx.cr6.eq) goto loc_821BFE20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234ef48
	ctx.lr = 0x821BFE04;
	sub_8234EF48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x820daf68
	ctx.lr = 0x821BFE20;
	sub_820DAF68(ctx, base);
loc_821BFE20:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8234f118
	ctx.lr = 0x821BFE28;
	sub_8234F118(ctx, base);
	// bl 0x823578f8
	ctx.lr = 0x821BFE2C;
	sub_823578F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8236a338
	ctx.lr = 0x821BFE38;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bfe4c
	if (ctx.cr6.eq) goto loc_821BFE4C;
	// bl 0x821c5e88
	ctx.lr = 0x821BFE44;
	sub_821C5E88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821bfe50
	goto loc_821BFE50;
loc_821BFE4C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821BFE50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,128(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x821c8ea8
	ctx.lr = 0x821BFE5C;
	sub_821C8EA8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bne cr6,0x821bfe6c
	if (!ctx.cr6.eq) goto loc_821BFE6C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821BFE6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357b78
	ctx.lr = 0x821BFE74;
	sub_82357B78(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x821bfea8
	if (ctx.cr6.eq) goto loc_821BFEA8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821BFE88:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bfe88
	if (!ctx.cr0.eq) goto loc_821BFE88;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_821BFEA8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357c38
	ctx.lr = 0x821BFEB8;
	sub_82357C38(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,252(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82350118
	ctx.lr = 0x821BFECC;
	sub_82350118(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x821BFED4;
	sub_821C0630(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BFEDC"))) PPC_WEAK_FUNC(sub_821BFEDC);
PPC_FUNC_IMPL(__imp__sub_821BFEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BFEE0"))) PPC_WEAK_FUNC(sub_821BFEE0);
PPC_FUNC_IMPL(__imp__sub_821BFEE0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x821c0630
	sub_821C0630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BFEE8"))) PPC_WEAK_FUNC(sub_821BFEE8);
PPC_FUNC_IMPL(__imp__sub_821BFEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821BFEF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c006c
	if (ctx.cr6.eq) goto loc_821C006C;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x821bff3c
	if (ctx.cr6.eq) goto loc_821BFF3C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_821BFF1C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bff1c
	if (!ctx.cr0.eq) goto loc_821BFF1C;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_821BFF3C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x821BFF44;
	sub_821C0630(ctx, base);
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
loc_821BFF4C:
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
	// bne 0x821bff4c
	if (!ctx.cr0.eq) goto loc_821BFF4C;
	// lwz r7,1064(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1064);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r11,1064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1064);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,1064(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1064, ctx.r4.u32);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82354368
	ctx.lr = 0x821BFF8C;
	sub_82354368(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x820ce0f8
	ctx.lr = 0x821BFF94;
	sub_820CE0F8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c0044
	if (ctx.cr6.eq) goto loc_821C0044;
loc_821BFFA0:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq cr6,0x821bffd4
	if (ctx.cr6.eq) goto loc_821BFFD4;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_821BFFB4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821bffb4
	if (!ctx.cr0.eq) goto loc_821BFFB4;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_821BFFD4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ce008
	ctx.lr = 0x821BFFE0;
	sub_820CE008(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x821BFFE8;
	sub_821C0630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,132(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x8234e920
	ctx.lr = 0x821BFFF4;
	sub_8234E920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c0010
	if (ctx.cr6.eq) goto loc_821C0010;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bffa0
	if (!ctx.cr6.eq) goto loc_821BFFA0;
	// b 0x821c0044
	goto loc_821C0044;
loc_821C0010:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_821C0018:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821c0018
	if (!ctx.cr0.eq) goto loc_821C0018;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234ebe0
	ctx.lr = 0x821C0044;
	sub_8234EBE0(ctx, base);
loc_821C0044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e920
	ctx.lr = 0x821C004C;
	sub_8234E920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x820daf68
	ctx.lr = 0x821C006C;
	sub_820DAF68(ctx, base);
loc_821C006C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x821C0074;
	sub_821C0630(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C007C"))) PPC_WEAK_FUNC(sub_821C007C);
PPC_FUNC_IMPL(__imp__sub_821C007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0080"))) PPC_WEAK_FUNC(sub_821C0080);
PPC_FUNC_IMPL(__imp__sub_821C0080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821C0088;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c00f0
	if (ctx.cr6.eq) goto loc_821C00F0;
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// addi r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 + 44;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c5510
	ctx.lr = 0x821C00B4;
	sub_821C5510(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821c00c4
	if (!ctx.cr6.eq) goto loc_821C00C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821c00cc
	goto loc_821C00CC;
loc_821C00C4:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_821C00CC:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x820daf68
	ctx.lr = 0x821C00E4;
	sub_820DAF68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c55d8
	ctx.lr = 0x821C00F0;
	sub_821C55D8(ctx, base);
loc_821C00F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C00F8"))) PPC_WEAK_FUNC(sub_821C00F8);
PPC_FUNC_IMPL(__imp__sub_821C00F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821C0100;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0188
	if (ctx.cr6.eq) goto loc_821C0188;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x821c0150
	if (ctx.cr6.eq) goto loc_821C0150;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_821C0130:
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
	// bne 0x821c0130
	if (!ctx.cr0.eq) goto loc_821C0130;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_821C0150:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bl 0x821c0630
	ctx.lr = 0x821C015C;
	sub_821C0630(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8234e920
	ctx.lr = 0x821C0164;
	sub_8234E920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// bl 0x820daf68
	ctx.lr = 0x821C0188;
	sub_820DAF68(ctx, base);
loc_821C0188:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0630
	ctx.lr = 0x821C0190;
	sub_821C0630(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0198"))) PPC_WEAK_FUNC(sub_821C0198);
PPC_FUNC_IMPL(__imp__sub_821C0198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821C01A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8234ecb8
	ctx.lr = 0x821C01B8;
	sub_8234ECB8(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x821C01C0;
	sub_821C0630(ctx, base);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x821c01f4
	if (ctx.cr6.eq) goto loc_821C01F4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_821C01D4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821c01d4
	if (!ctx.cr0.eq) goto loc_821C01D4;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_821C01F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x821C01FC;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234f118
	ctx.lr = 0x821C0204;
	sub_8234F118(ctx, base);
	// bl 0x82363e10
	ctx.lr = 0x821C0208;
	sub_82363E10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82357c38
	ctx.lr = 0x821C021C;
	sub_82357C38(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c0270
	if (ctx.cr6.eq) goto loc_821C0270;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c9300
	ctx.lr = 0x821C0230;
	sub_821C9300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234f118
	ctx.lr = 0x821C0238;
	sub_8234F118(ctx, base);
	// bl 0x82363e10
	ctx.lr = 0x821C023C;
	sub_82363E10(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_821C0244:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821c0244
	if (!ctx.cr0.eq) goto loc_821C0244;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82357c38
	ctx.lr = 0x821C0270;
	sub_82357C38(ctx, base);
loc_821C0270:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8234e920
	ctx.lr = 0x821C0278;
	sub_8234E920(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c9300
	ctx.lr = 0x821C0284;
	sub_821C9300(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x821C028C;
	sub_821C0630(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x821C0294;
	sub_821C0630(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C029C"))) PPC_WEAK_FUNC(sub_821C029C);
PPC_FUNC_IMPL(__imp__sub_821C029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C02A0"))) PPC_WEAK_FUNC(sub_821C02A0);
PPC_FUNC_IMPL(__imp__sub_821C02A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821C02A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x8236a338
	ctx.lr = 0x821C02D0;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c02ec
	if (ctx.cr6.eq) goto loc_821C02EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8235d0f0
	ctx.lr = 0x821C02E4;
	sub_8235D0F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821c02f0
	goto loc_821C02F0;
loc_821C02EC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821C02F0:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c0320
	if (ctx.cr6.eq) goto loc_821C0320;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_821C0300:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821c0300
	if (!ctx.cr0.eq) goto loc_821C0300;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_821C0320:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8235d3c8
	ctx.lr = 0x821C032C;
	sub_8235D3C8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8236b3c0
	ctx.lr = 0x821C0344;
	sub_8236B3C0(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x821c0370
	if (!ctx.cr6.eq) goto loc_821C0370;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x821C0360;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b048
	ctx.lr = 0x821C0370;
	sub_8236B048(ctx, base);
loc_821C0370:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821c0740
	ctx.lr = 0x821C037C;
	sub_821C0740(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821c0740
	ctx.lr = 0x821C0388;
	sub_821C0740(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x821C0398;
	sub_8236B4A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821c0740
	ctx.lr = 0x821C03A4;
	sub_821C0740(ctx, base);
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b048
	ctx.lr = 0x821C03B4;
	sub_8236B048(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821c06d8
	ctx.lr = 0x821C03C0;
	sub_821C06D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82354638
	ctx.lr = 0x821C03CC;
	sub_82354638(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c0400
	if (ctx.cr6.eq) goto loc_821C0400;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_821C03E0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821c03e0
	if (!ctx.cr0.eq) goto loc_821C03E0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_821C0400:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C0418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x821C0420;
	sub_821C0630(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x821C0428;
	sub_821C0630(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x821C0430;
	sub_821C0630(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0438"))) PPC_WEAK_FUNC(sub_821C0438);
PPC_FUNC_IMPL(__imp__sub_821C0438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821C0440;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0628
	if (ctx.cr6.eq) goto loc_821C0628;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8236a338
	ctx.lr = 0x821C0460;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c047c
	if (ctx.cr6.eq) goto loc_821C047C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b188
	ctx.lr = 0x821C0474;
	sub_8236B188(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x821c0480
	goto loc_821C0480;
loc_821C047C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_821C0480:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821c04b0
	if (ctx.cr6.eq) goto loc_821C04B0;
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
loc_821C0490:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821c0490
	if (!ctx.cr0.eq) goto loc_821C0490;
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_821C04B0:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821C04BC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c04c8
	if (!ctx.cr6.eq) goto loc_821C04C8;
	// bl 0x821b3000
	ctx.lr = 0x821C04C8;
	sub_821B3000(ctx, base);
loc_821C04C8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r24,-13569
	ctx.r24.s64 = -889257984;
	// addi r29,r11,-20656
	ctx.r29.s64 = ctx.r11.s64 + -20656;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// lwz r5,3252(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3252);
	// addi r9,r5,15
	ctx.r9.s64 = ctx.r5.s64 + 15;
	// rlwinm r28,r9,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821c0504
	if (!ctx.cr6.gt) goto loc_821C0504;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,4492
	ctx.r10.s64 = ctx.r11.s64 + 4492;
	// stw r10,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r10.u32);
loc_821C0504:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,36(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// lwz r4,28(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// bl 0x8233e4e0
	ctx.lr = 0x821C0528;
	sub_8233E4E0(ctx, base);
	// lwz r7,36(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,3252(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3252);
	// lwz r3,28(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// bl 0x8233e4e0
	ctx.lr = 0x821C053C;
	sub_8233E4E0(ctx, base);
	// lwz r3,36(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// bl 0x8234e920
	ctx.lr = 0x821C0544;
	sub_8234E920(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x821C0554;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236b048
	ctx.lr = 0x821C0564;
	sub_8236B048(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821c0594
	if (ctx.cr6.eq) goto loc_821C0594;
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
loc_821C0574:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821c0574
	if (!ctx.cr0.eq) goto loc_821C0574;
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_821C0594:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,36(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x821c5858
	ctx.lr = 0x821C05A4;
	sub_821C5858(ctx, base);
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,3252(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3252);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x8233e4e0
	ctx.lr = 0x821C05B8;
	sub_8233E4E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0600
	if (ctx.cr6.eq) goto loc_821C0600;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// ble cr6,0x821c05d8
	if (!ctx.cr6.gt) goto loc_821C05D8;
	// stw r9,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r9.u32);
loc_821C05D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821c05f4
	if (ctx.cr6.eq) goto loc_821C05F4;
	// stw r9,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r9.u32);
loc_821C05F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_821C0600:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r6,93
	ctx.r6.s64 = 93;
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c02a0
	ctx.lr = 0x821C0620;
	sub_821C02A0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x821C0628;
	sub_821C0630(ctx, base);
loc_821C0628:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0630"))) PPC_WEAK_FUNC(sub_821C0630);
PPC_FUNC_IMPL(__imp__sub_821C0630) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c06a4
	if (ctx.cr6.eq) goto loc_821C06A4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_821C0654:
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
	// bne 0x821c0654
	if (!ctx.cr0.eq) goto loc_821C0654;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821c06a4
	if (!ctx.cr6.eq) goto loc_821C06A4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c069c
	if (ctx.cr6.eq) goto loc_821C069C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C069C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C069C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821C06A4:
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

__attribute__((alias("__imp__sub_821C06B8"))) PPC_WEAK_FUNC(sub_821C06B8);
PPC_FUNC_IMPL(__imp__sub_821C06B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x821bf5d0
	sub_821BF5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C06C0"))) PPC_WEAK_FUNC(sub_821C06C0);
PPC_FUNC_IMPL(__imp__sub_821C06C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x821bf5d0
	sub_821BF5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C06C8"))) PPC_WEAK_FUNC(sub_821C06C8);
PPC_FUNC_IMPL(__imp__sub_821C06C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x821bf5d0
	sub_821BF5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C06D0"))) PPC_WEAK_FUNC(sub_821C06D0);
PPC_FUNC_IMPL(__imp__sub_821C06D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821bf5d0
	sub_821BF5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C06D8"))) PPC_WEAK_FUNC(sub_821C06D8);
PPC_FUNC_IMPL(__imp__sub_821C06D8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x821C06FC;
	sub_8236B4A0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r11,255
	ctx.r11.s64 = 255;
	// bne cr6,0x821c071c
	if (!ctx.cr6.eq) goto loc_821C071C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C071C:
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8236b048
	ctx.lr = 0x821C0724;
	sub_8236B048(ctx, base);
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

__attribute__((alias("__imp__sub_821C0740"))) PPC_WEAK_FUNC(sub_821C0740);
PPC_FUNC_IMPL(__imp__sub_821C0740) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x821C0760;
	sub_8236B4A0(ctx, base);
	// lbz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// lbz r10,141(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 141);
	// li r5,32
	ctx.r5.s64 = 32;
	// lbz r9,142(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 142);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r8,143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x8236b048
	ctx.lr = 0x821C0790;
	sub_8236B048(ctx, base);
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

__attribute__((alias("__imp__sub_821C07A4"))) PPC_WEAK_FUNC(sub_821C07A4);
PPC_FUNC_IMPL(__imp__sub_821C07A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C07A8"))) PPC_WEAK_FUNC(sub_821C07A8);
PPC_FUNC_IMPL(__imp__sub_821C07A8) {
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
	// addi r9,r11,-25684
	ctx.r9.s64 = ctx.r11.s64 + -25684;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821c07dc
	if (ctx.cr6.eq) goto loc_821C07DC;
	// bl 0x8236a3f0
	ctx.lr = 0x821C07D8;
	sub_8236A3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C07DC:
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

__attribute__((alias("__imp__sub_821C07F0"))) PPC_WEAK_FUNC(sub_821C07F0);
PPC_FUNC_IMPL(__imp__sub_821C07F0) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x821C0814;
	sub_8236A7A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0840
	if (ctx.cr6.eq) goto loc_821C0840;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a490
	ctx.lr = 0x821C0830;
	sub_8236A490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c0844
	if (!ctx.cr6.eq) goto loc_821C0844;
loc_821C0840:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C0844:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_821C0860"))) PPC_WEAK_FUNC(sub_821C0860);
PPC_FUNC_IMPL(__imp__sub_821C0860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821C0868;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x821C0880;
	sub_8236A7A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c094c
	if (ctx.cr6.eq) goto loc_821C094C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0958
	ctx.lr = 0x821C08A0;
	sub_821C0958(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c0948
	if (ctx.cr6.eq) goto loc_821C0948;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r26,28(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// beq cr6,0x821c092c
	if (ctx.cr6.eq) goto loc_821C092C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x821c08d0
	if (ctx.cr6.lt) goto loc_821C08D0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821C08D0:
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a490
	ctx.lr = 0x821C08E0;
	sub_8236A490(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821c092c
	if (!ctx.cr6.gt) goto loc_821C092C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r9,r10,-25764
	ctx.r9.s64 = ctx.r10.s64 + -25764;
	// addi r7,r8,-25708
	ctx.r7.s64 = ctx.r8.s64 + -25708;
	// addi r6,r6,-25872
	ctx.r6.s64 = ctx.r6.s64 + -25872;
	// addi r5,r5,-25784
	ctx.r5.s64 = ctx.r5.s64 + -25784;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r8,544
	ctx.r8.s64 = 544;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x821C092C;
	sub_82372320(ctx, base);
loc_821C092C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x821c0940
	if (ctx.cr6.gt) goto loc_821C0940;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821C0940:
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_821C0948:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821C094C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0954"))) PPC_WEAK_FUNC(sub_821C0954);
PPC_FUNC_IMPL(__imp__sub_821C0954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0958"))) PPC_WEAK_FUNC(sub_821C0958);
PPC_FUNC_IMPL(__imp__sub_821C0958) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x821C097C;
	sub_8236A7A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c09a8
	if (ctx.cr6.eq) goto loc_821C09A8;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a490
	ctx.lr = 0x821C0998;
	sub_8236A490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c09ac
	if (!ctx.cr6.eq) goto loc_821C09AC;
loc_821C09A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C09AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c09d8
	if (ctx.cr6.eq) goto loc_821C09D8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// stb r11,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r11.u8);
	// stb r10,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r10.u8);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
loc_821C09D8:
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

__attribute__((alias("__imp__sub_821C09F0"))) PPC_WEAK_FUNC(sub_821C09F0);
PPC_FUNC_IMPL(__imp__sub_821C09F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2580
	ctx.r12.s64 = ctx.r12.s64 + 2580;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821C0A60;
	case 1:
		goto loc_821C0A60;
	case 2:
		goto loc_821C0A60;
	case 3:
		goto loc_821C0A74;
	case 4:
		goto loc_821C0A74;
	case 5:
		goto loc_821C0A60;
	case 6:
		goto loc_821C0A60;
	case 7:
		goto loc_821C0A60;
	case 8:
		goto loc_821C0A60;
	case 9:
		goto loc_821C0A60;
	case 10:
		goto loc_821C0A60;
	case 11:
		goto loc_821C0A60;
	case 12:
		goto loc_821C0A60;
	case 13:
		goto loc_821C0A84;
	case 14:
		goto loc_821C0A84;
	case 15:
		goto loc_821C0A60;
	case 16:
		goto loc_821C0A60;
	case 17:
		goto loc_821C0A60;
	case 18:
		goto loc_821C0A60;
	default:
		__builtin_unreachable();
	}
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2676(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2676);
	// lwz r16,2676(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2676);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2692(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2692);
	// lwz r16,2692(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2692);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
	// lwz r16,2656(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2656);
loc_821C0A60:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_821C0A74:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_821C0A84:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C0A88"))) PPC_WEAK_FUNC(sub_821C0A88);
PPC_FUNC_IMPL(__imp__sub_821C0A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821c0b20
	if (ctx.cr6.gt) goto loc_821C0B20;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2732
	ctx.r12.s64 = ctx.r12.s64 + 2732;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821C0AF8;
	case 1:
		goto loc_821C0AF8;
	case 2:
		goto loc_821C0AF8;
	case 3:
		goto loc_821C0B00;
	case 4:
		goto loc_821C0B00;
	case 5:
		goto loc_821C0AF8;
	case 6:
		goto loc_821C0AF8;
	case 7:
		goto loc_821C0AF8;
	case 8:
		goto loc_821C0AF8;
	case 9:
		goto loc_821C0B00;
	case 10:
		goto loc_821C0B00;
	case 11:
		goto loc_821C0B08;
	case 12:
		goto loc_821C0B08;
	case 13:
		goto loc_821C0B10;
	case 14:
		goto loc_821C0B10;
	case 15:
		goto loc_821C0B18;
	case 16:
		goto loc_821C0B18;
	case 17:
		goto loc_821C0B00;
	case 18:
		goto loc_821C0AF8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,2808(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2808);
	// lwz r16,2808(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2808);
	// lwz r16,2808(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2808);
	// lwz r16,2816(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2816);
	// lwz r16,2816(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2816);
	// lwz r16,2808(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2808);
	// lwz r16,2808(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2808);
	// lwz r16,2808(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2808);
	// lwz r16,2808(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2808);
	// lwz r16,2816(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2816);
	// lwz r16,2816(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2816);
	// lwz r16,2824(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2824);
	// lwz r16,2824(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2824);
	// lwz r16,2832(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2832);
	// lwz r16,2832(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2832);
	// lwz r16,2840(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2840);
	// lwz r16,2840(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2840);
	// lwz r16,2816(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2816);
	// lwz r16,2808(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2808);
loc_821C0AF8:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_821C0B00:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_821C0B08:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_821C0B10:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
loc_821C0B18:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_821C0B20:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_821C0B24"))) PPC_WEAK_FUNC(sub_821C0B24);
PPC_FUNC_IMPL(__imp__sub_821C0B24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C0B28"))) PPC_WEAK_FUNC(sub_821C0B28);
PPC_FUNC_IMPL(__imp__sub_821C0B28) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821c0e00
	if (ctx.cr6.gt) goto loc_821C0E00;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2920
	ctx.r12.s64 = ctx.r12.s64 + 2920;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821C0BB4;
	case 1:
		goto loc_821C0BBC;
	case 2:
		goto loc_821C0BBC;
	case 3:
		goto loc_821C0BDC;
	case 4:
		goto loc_821C0BDC;
	case 5:
		goto loc_821C0BC4;
	case 6:
		goto loc_821C0BC4;
	case 7:
		goto loc_821C0BBC;
	case 8:
		goto loc_821C0BE4;
	case 9:
		goto loc_821C0BDC;
	case 10:
		goto loc_821C0C30;
	case 11:
		goto loc_821C0C7C;
	case 12:
		goto loc_821C0C84;
	case 13:
		goto loc_821C0CD4;
	case 14:
		goto loc_821C0CD4;
	case 15:
		goto loc_821C0CDC;
	case 16:
		goto loc_821C0CE4;
	case 17:
		goto loc_821C0D70;
	case 18:
		goto loc_821C0DD0;
	default:
		__builtin_unreachable();
	}
	// lwz r16,2996(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2996);
	// lwz r16,3004(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3004);
	// lwz r16,3004(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3004);
	// lwz r16,3036(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3036);
	// lwz r16,3036(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3036);
	// lwz r16,3012(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3012);
	// lwz r16,3012(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3012);
	// lwz r16,3004(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3004);
	// lwz r16,3044(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3044);
	// lwz r16,3036(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3036);
	// lwz r16,3120(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3120);
	// lwz r16,3196(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3196);
	// lwz r16,3204(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3204);
	// lwz r16,3284(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3284);
	// lwz r16,3284(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3284);
	// lwz r16,3292(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3292);
	// lwz r16,3300(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3300);
	// lwz r16,3440(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3440);
	// lwz r16,3536(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3536);
loc_821C0BB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0BBC:
	// li r3,32
	ctx.r3.s64 = 32;
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0BC4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8236b7b0
	ctx.lr = 0x821C0BD4;
	sub_8236B7B0(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0BDC:
	// li r3,64
	ctx.r3.s64 = 64;
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0BE4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8236b7b0
	ctx.lr = 0x821C0C18;
	sub_8236B7B0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x821c0c28
	if (ctx.cr6.lt) goto loc_821C0C28;
	// li r11,32
	ctx.r11.s64 = 32;
loc_821C0C28:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0C30:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8236b7b0
	ctx.lr = 0x821C0C64;
	sub_8236B7B0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x821c0c74
	if (ctx.cr6.lt) goto loc_821C0C74;
	// li r11,32
	ctx.r11.s64 = 32;
loc_821C0C74:
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0C7C:
	// li r3,96
	ctx.r3.s64 = 96;
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0C84:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8236b7b0
	ctx.lr = 0x821C0CB8;
	sub_8236B7B0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x821c0cc8
	if (ctx.cr6.lt) goto loc_821C0CC8;
	// li r11,32
	ctx.r11.s64 = 32;
loc_821C0CC8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0CD4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0CDC:
	// li r3,196
	ctx.r3.s64 = 196;
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0CE4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f0,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8236b7b0
	ctx.lr = 0x821C0D10;
	sub_8236B7B0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// blt cr6,0x821c0d24
	if (ctx.cr6.lt) goto loc_821C0D24;
	// li r30,32
	ctx.r30.s64 = 32;
loc_821C0D24:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f10,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8236b7b0
	ctx.lr = 0x821C0D4C;
	sub_8236B7B0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x821c0d5c
	if (ctx.cr6.lt) goto loc_821C0D5C;
	// li r11,32
	ctx.r11.s64 = 32;
loc_821C0D5C:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0D70:
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x8236b7b0
	ctx.lr = 0x821C0D78;
	sub_8236B7B0(ctx, base);
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8236b7b0
	ctx.lr = 0x821C0D84;
	sub_8236B7B0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x8236b7b0
	ctx.lr = 0x821C0D94;
	sub_8236B7B0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x8236b7b0
	ctx.lr = 0x821C0DA4;
	sub_8236B7B0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x8236b7b0
	ctx.lr = 0x821C0DB4;
	sub_8236B7B0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x8236b7b0
	ctx.lr = 0x821C0DC4;
	sub_8236B7B0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0DD0:
	// li r3,838
	ctx.r3.s64 = 838;
	// bl 0x8236b7b0
	ctx.lr = 0x821C0DD8;
	sub_8236B7B0(ctx, base);
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8236b7b0
	ctx.lr = 0x821C0DE4;
	sub_8236B7B0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x8236b7b0
	ctx.lr = 0x821C0DF4;
	sub_8236B7B0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x821c0e04
	goto loc_821C0E04;
loc_821C0E00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C0E04:
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

__attribute__((alias("__imp__sub_821C0E20"))) PPC_WEAK_FUNC(sub_821C0E20);
PPC_FUNC_IMPL(__imp__sub_821C0E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821C0E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821c1268
	if (ctx.cr6.gt) goto loc_821C1268;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3676
	ctx.r12.s64 = ctx.r12.s64 + 3676;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821C0EA8;
	case 1:
		goto loc_821C0EC4;
	case 2:
		goto loc_821C0ED8;
	case 3:
		goto loc_821C0EEC;
	case 4:
		goto loc_821C0F58;
	case 5:
		goto loc_821C0FC4;
	case 6:
		goto loc_821C0FE0;
	case 7:
		goto loc_821C1000;
	case 8:
		goto loc_821C1014;
	case 9:
		goto loc_821C1034;
	case 10:
		goto loc_821C1054;
	case 11:
		goto loc_821C108C;
	case 12:
		goto loc_821C10B8;
	case 13:
		goto loc_821C1108;
	case 14:
		goto loc_821C116C;
	case 15:
		goto loc_821C11A8;
	case 16:
		goto loc_821C11A8;
	case 17:
		goto loc_821C11C0;
	case 18:
		goto loc_821C122C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,3752(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3752);
	// lwz r16,3780(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3780);
	// lwz r16,3800(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3800);
	// lwz r16,3820(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3820);
	// lwz r16,3928(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3928);
	// lwz r16,4036(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4036);
	// lwz r16,4064(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4064);
	// lwz r16,4096(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4096);
	// lwz r16,4116(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4116);
	// lwz r16,4148(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4148);
	// lwz r16,4180(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4180);
	// lwz r16,4236(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4236);
	// lwz r16,4280(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4280);
	// lwz r16,4360(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4360);
	// lwz r16,4460(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4460);
	// lwz r16,4520(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4520);
	// lwz r16,4520(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4520);
	// lwz r16,4544(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4544);
	// lwz r16,4652(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4652);
loc_821C0EA8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821c06d8
	ctx.lr = 0x821C0EBC;
	sub_821C06D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C0EC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x821c2d48
	ctx.lr = 0x821C0ED0;
	sub_821C2D48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C0ED8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x821c0740
	ctx.lr = 0x821C0EE4;
	sub_821C0740(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C0EEC:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8236b4a0
	ctx.lr = 0x821C0F00;
	sub_8236B4A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// li r5,64
	ctx.r5.s64 = 64;
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r7,91(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r11,93(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// lbz r31,94(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// lbz r30,95(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stb r10,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r10.u8);
	// stb r9,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r9.u8);
	// stb r8,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r8.u8);
	// stb r7,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r7.u8);
	// stb r6,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r6.u8);
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// stb r31,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x8236b048
	ctx.lr = 0x821C0F50;
	sub_8236B048(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C0F58:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8236b4a0
	ctx.lr = 0x821C0F6C;
	sub_8236B4A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// li r5,64
	ctx.r5.s64 = 64;
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lbz r7,91(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r11,93(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// lbz r31,94(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// lbz r30,95(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// stb r9,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r9.u8);
	// stb r8,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r8.u8);
	// stb r7,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r7.u8);
	// stb r6,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r6.u8);
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// stb r31,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r31.u8);
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// bl 0x8236b048
	ctx.lr = 0x821C0FBC;
	sub_8236B048(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C0FC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8236b4c0
	ctx.lr = 0x821C0FD8;
	sub_8236B4C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C0FE0:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8236b3c0
	ctx.lr = 0x821C0FF8;
	sub_8236B3C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c2ce0
	ctx.lr = 0x821C100C;
	sub_821C2CE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1014:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236b598
	ctx.lr = 0x821C102C;
	sub_8236B598(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1034:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c2ce0
	ctx.lr = 0x821C1040;
	sub_821C2CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c2ce0
	ctx.lr = 0x821C104C;
	sub_821C2CE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8236b598
	ctx.lr = 0x821C106C;
	sub_8236B598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236b598
	ctx.lr = 0x821C1084;
	sub_8236B598(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C108C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c2ce0
	ctx.lr = 0x821C1098;
	sub_821C2CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c2ce0
	ctx.lr = 0x821C10A4;
	sub_821C2CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c2ce0
	ctx.lr = 0x821C10B0;
	sub_821C2CE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C10B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8236b598
	ctx.lr = 0x821C10D0;
	sub_8236B598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236b598
	ctx.lr = 0x821C10E8;
	sub_8236B598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236b598
	ctx.lr = 0x821C1100;
	sub_8236B598(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1108:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c1268
	if (ctx.cr6.eq) goto loc_821C1268;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x821C1120;
	sub_8236B4A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e280
	ctx.lr = 0x821C1130;
	sub_8233E280(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c113c
	if (ctx.cr6.eq) goto loc_821C113C;
	// subf r30,r29,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r29.s64;
loc_821C113C:
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b048
	ctx.lr = 0x821C114C;
	sub_8236B048(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b048
	ctx.lr = 0x821C1164;
	sub_8236B048(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C116C:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c1268
	if (ctx.cr6.eq) goto loc_821C1268;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x821C1184;
	sub_8236B4A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0740
	ctx.lr = 0x821C1190;
	sub_821C0740(ctx, base);
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b048
	ctx.lr = 0x821C11A0;
	sub_8236B048(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C11A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c1bd0
	ctx.lr = 0x821C11B8;
	sub_821C1BD0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C11C0:
	// li r6,2050
	ctx.r6.s64 = 2050;
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r5,2009
	ctx.r5.s64 = 2009;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4c0
	ctx.lr = 0x821C11D4;
	sub_8236B4C0(ctx, base);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r4,2(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4c0
	ctx.lr = 0x821C11E8;
	sub_8236B4C0(ctx, base);
	// li r6,31
	ctx.r6.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r4,3(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4c0
	ctx.lr = 0x821C11FC;
	sub_8236B4C0(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r4,5(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4c0
	ctx.lr = 0x821C1210;
	sub_8236B4C0(ctx, base);
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r4,6(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4c0
	ctx.lr = 0x821C1224;
	sub_8236B4C0(ctx, base);
	// lbz r4,7(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// b 0x821c1258
	goto loc_821C1258;
loc_821C122C:
	// li r6,838
	ctx.r6.s64 = 838;
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4c0
	ctx.lr = 0x821C1240;
	sub_8236B4C0(ctx, base);
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r4,2(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4c0
	ctx.lr = 0x821C1254;
	sub_8236B4C0(ctx, base);
	// lbz r4,3(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
loc_821C1258:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,60
	ctx.r6.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4c0
	ctx.lr = 0x821C1268;
	sub_8236B4C0(ctx, base);
loc_821C1268:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C1270"))) PPC_WEAK_FUNC(sub_821C1270);
PPC_FUNC_IMPL(__imp__sub_821C1270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821C1278;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821c1778
	if (ctx.cr6.gt) goto loc_821C1778;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4780
	ctx.r12.s64 = ctx.r12.s64 + 4780;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821C12F8;
	case 1:
		goto loc_821C1324;
	case 2:
		goto loc_821C1338;
	case 3:
		goto loc_821C134C;
	case 4:
		goto loc_821C13DC;
	case 5:
		goto loc_821C146C;
	case 6:
		goto loc_821C1488;
	case 7:
		goto loc_821C14A8;
	case 8:
		goto loc_821C14BC;
	case 9:
		goto loc_821C14DC;
	case 10:
		goto loc_821C14FC;
	case 11:
		goto loc_821C1534;
	case 12:
		goto loc_821C1560;
	case 13:
		goto loc_821C15B0;
	case 14:
		goto loc_821C1634;
	case 15:
		goto loc_821C165C;
	case 16:
		goto loc_821C165C;
	case 17:
		goto loc_821C1674;
	case 18:
		goto loc_821C1724;
	default:
		__builtin_unreachable();
	}
	// lwz r16,4856(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4856);
	// lwz r16,4900(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4900);
	// lwz r16,4920(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4920);
	// lwz r16,4940(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4940);
	// lwz r16,5084(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5084);
	// lwz r16,5228(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5228);
	// lwz r16,5256(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5256);
	// lwz r16,5288(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5288);
	// lwz r16,5308(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5308);
	// lwz r16,5340(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5340);
	// lwz r16,5372(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5372);
	// lwz r16,5428(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5428);
	// lwz r16,5472(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5472);
	// lwz r16,5552(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5552);
	// lwz r16,5684(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5684);
	// lwz r16,5724(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5724);
	// lwz r16,5724(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5724);
	// lwz r16,5748(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5748);
	// lwz r16,5924(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5924);
loc_821C12F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x821c2c10
	ctx.lr = 0x821C130C;
	sub_821C2C10(ctx, base);
	// lbz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1324:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2b78
	ctx.lr = 0x821C1330;
	sub_821C2B78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1338:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0958
	ctx.lr = 0x821C1344;
	sub_821C0958(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C134C:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x821C1358;
	sub_8236A7A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1384
	if (ctx.cr6.eq) goto loc_821C1384;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a490
	ctx.lr = 0x821C1374;
	sub_8236A490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c1388
	if (!ctx.cr6.eq) goto loc_821C1388;
loc_821C1384:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C1388:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1778
	if (ctx.cr6.eq) goto loc_821C1778;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r8,115(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lbz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r6,117(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r5,118(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// lbz r4,119(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// stb r11,7(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7, ctx.r11.u8);
	// stb r10,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r10.u8);
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// stb r8,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r8.u8);
	// stb r7,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r7.u8);
	// stb r6,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r6.u8);
	// stb r5,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r5.u8);
	// stb r4,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r4.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C13DC:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x821C13E8;
	sub_8236A7A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1414
	if (ctx.cr6.eq) goto loc_821C1414;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a490
	ctx.lr = 0x821C1404;
	sub_8236A490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c1418
	if (!ctx.cr6.eq) goto loc_821C1418;
loc_821C1414:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C1418:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1778
	if (ctx.cr6.eq) goto loc_821C1778;
	// lbz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// lbz r10,121(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// lbz r9,122(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// lbz r8,123(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// lbz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// lbz r6,125(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// lbz r5,126(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 126);
	// lbz r4,127(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// stb r11,7(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7, ctx.r11.u8);
	// stb r10,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r10.u8);
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// stb r8,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r8.u8);
	// stb r7,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r7.u8);
	// stb r6,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r6.u8);
	// stb r5,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r5.u8);
	// stb r4,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r4.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C146C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8236aaf0
	ctx.lr = 0x821C1480;
	sub_8236AAF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1488:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a958
	ctx.lr = 0x821C14A0;
	sub_8236A958(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C14A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C14B4;
	sub_821C2AE0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C14BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236ac80
	ctx.lr = 0x821C14D4;
	sub_8236AC80(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C14DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C14E8;
	sub_821C2AE0(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C14F4;
	sub_821C2AE0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C14FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236ac80
	ctx.lr = 0x821C1514;
	sub_8236AC80(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236ac80
	ctx.lr = 0x821C152C;
	sub_8236AC80(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1534:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C1540;
	sub_821C2AE0(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C154C;
	sub_821C2AE0(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C1558;
	sub_821C2AE0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1560:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236ac80
	ctx.lr = 0x821C1578;
	sub_8236AC80(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236ac80
	ctx.lr = 0x821C1590;
	sub_8236AC80(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236ac80
	ctx.lr = 0x821C15A8;
	sub_8236AC80(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C15B0:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c1778
	if (ctx.cr6.eq) goto loc_821C1778;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2a08
	ctx.lr = 0x821C15D8;
	sub_821C2A08(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c1778
	if (ctx.cr6.eq) goto loc_821C1778;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x821c1778
	if (!ctx.cr6.gt) goto loc_821C1778;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r8,-25620
	ctx.r7.s64 = ctx.r8.s64 + -25620;
	// addi r9,r11,-25676
	ctx.r9.s64 = ctx.r11.s64 + -25676;
	// addi r6,r6,-25872
	ctx.r6.s64 = ctx.r6.s64 + -25872;
	// addi r5,r5,-25784
	ctx.r5.s64 = ctx.r5.s64 + -25784;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,432
	ctx.r8.s64 = 432;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x821C162C;
	sub_82372320(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1634:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1778
	if (ctx.cr6.eq) goto loc_821C1778;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0860
	ctx.lr = 0x821C1654;
	sub_821C0860(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C165C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c1780
	ctx.lr = 0x821C166C;
	sub_821C1780(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1674:
	// li r6,2050
	ctx.r6.s64 = 2050;
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236aaf0
	ctx.lr = 0x821C1688;
	sub_8236AAF0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// bl 0x8236aaf0
	ctx.lr = 0x821C16A4;
	sub_8236AAF0(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,31
	ctx.r6.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r9,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r9.u8);
	// bl 0x8236aaf0
	ctx.lr = 0x821C16C0;
	sub_8236AAF0(ctx, base);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r7,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r7.u8);
	// bl 0x8236aaf0
	ctx.lr = 0x821C16DC;
	sub_8236AAF0(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// bl 0x8236aaf0
	ctx.lr = 0x821C16F8;
	sub_8236AAF0(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r8,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r8.u8);
	// bl 0x8236aaf0
	ctx.lr = 0x821C1714;
	sub_8236AAF0(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r6,7(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7, ctx.r6.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C1724:
	// li r6,838
	ctx.r6.s64 = 838;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236aaf0
	ctx.lr = 0x821C1738;
	sub_8236AAF0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// bl 0x8236aaf0
	ctx.lr = 0x821C1754;
	sub_8236AAF0(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r9,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r9.u8);
	// bl 0x8236aaf0
	ctx.lr = 0x821C1770;
	sub_8236AAF0(ctx, base);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r7,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r7.u8);
loc_821C1778:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C1780"))) PPC_WEAK_FUNC(sub_821C1780);
PPC_FUNC_IMPL(__imp__sub_821C1780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821C1788;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821c19a4
	if (ctx.cr6.eq) goto loc_821C19A4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x821c1bb8
	if (!ctx.cr6.eq) goto loc_821C1BB8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f3,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,31376
	ctx.r28.s64 = ctx.r11.s64 + 31376;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f31,272(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,436(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 436);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8236ac80
	ctx.lr = 0x821C17E0;
	sub_8236AC80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c29b8
	ctx.lr = 0x821C17E8;
	sub_821C29B8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lfs f29,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c1814
	if (ctx.cr6.eq) goto loc_821C1814;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f3,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8236ac80
	ctx.lr = 0x821C1810;
	sub_8236AC80(ctx, base);
	// b 0x821c1818
	goto loc_821C1818;
loc_821C1814:
	// stfs f29,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_821C1818:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c29b8
	ctx.lr = 0x821C1820;
	sub_821C29B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1848
	if (ctx.cr6.eq) goto loc_821C1848;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f3,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8236ac80
	ctx.lr = 0x821C1844;
	sub_8236AC80(ctx, base);
	// b 0x821c184c
	goto loc_821C184C;
loc_821C1848:
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821C184C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x821c28c0
	ctx.lr = 0x821C1860;
	sub_821C28C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c2790
	ctx.lr = 0x821C1868;
	sub_821C2790(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c29b8
	ctx.lr = 0x821C1870;
	sub_821C29B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1bb8
	if (ctx.cr6.eq) goto loc_821C1BB8;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lfs f3,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236ac80
	ctx.lr = 0x821C1894;
	sub_8236AC80(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x821c29b8
	ctx.lr = 0x821C18C8;
	sub_821C29B8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c1954
	if (ctx.cr6.eq) goto loc_821C1954;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lfs f3,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236ac80
	ctx.lr = 0x821C18EC;
	sub_8236AC80(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f3,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236ac80
	ctx.lr = 0x821C1904;
	sub_8236AC80(ctx, base);
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f2,16(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f1,12(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// b 0x821c1bb0
	goto loc_821C1BB0;
loc_821C1954:
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f6,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,16(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f2,20(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x821c1bb4
	goto loc_821C1BB4;
loc_821C19A4:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C19B0;
	sub_821C2AE0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bl 0x821c2c10
	ctx.lr = 0x821C19C4;
	sub_821C2C10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c19e0
	if (ctx.cr6.eq) goto loc_821C19E0;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c19e4
	if (!ctx.cr6.eq) goto loc_821C19E4;
loc_821C19E0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821C19E4:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821c1a10
	if (ctx.cr6.eq) goto loc_821C1A10;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C1A08;
	sub_821C2AE0(ctx, base);
	// lfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// b 0x821c1a14
	goto loc_821C1A14;
loc_821C1A10:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_821C1A14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2c10
	ctx.lr = 0x821C1A24;
	sub_821C2C10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1a40
	if (ctx.cr6.eq) goto loc_821C1A40;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c1a44
	if (!ctx.cr6.eq) goto loc_821C1A44;
loc_821C1A40:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821C1A44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1a64
	if (ctx.cr6.eq) goto loc_821C1A64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C1A5C;
	sub_821C2AE0(ctx, base);
	// lfs f3,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// b 0x821c1a68
	goto loc_821C1A68;
loc_821C1A64:
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
loc_821C1A68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x821c28c0
	ctx.lr = 0x821C1A78;
	sub_821C28C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bl 0x821c2c10
	ctx.lr = 0x821C1A88;
	sub_821C2C10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1aa4
	if (ctx.cr6.eq) goto loc_821C1AA4;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c1aa8
	if (!ctx.cr6.eq) goto loc_821C1AA8;
loc_821C1AA4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821C1AA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1bb8
	if (ctx.cr6.eq) goto loc_821C1BB8;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C1AC0;
	sub_821C2AE0(ctx, base);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lfs f31,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x821c29b8
	ctx.lr = 0x821C1AF4;
	sub_821C29B8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c1b6c
	if (ctx.cr6.eq) goto loc_821C1B6C;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C1B0C;
	sub_821C2AE0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C1B18;
	sub_821C2AE0(ctx, base);
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f5,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f4,20(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x821c1bb4
	goto loc_821C1BB4;
loc_821C1B6C:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_821C1BB0:
	// stfs f3,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_821C1BB4:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
loc_821C1BB8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C1BCC"))) PPC_WEAK_FUNC(sub_821C1BCC);
PPC_FUNC_IMPL(__imp__sub_821C1BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1BD0"))) PPC_WEAK_FUNC(sub_821C1BD0);
PPC_FUNC_IMPL(__imp__sub_821C1BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821C1BD8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa20
	ctx.lr = 0x821C1BE0;
	__savefpr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821c1e44
	if (ctx.cr6.eq) goto loc_821C1E44;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x821c1fe8
	if (!ctx.cr6.eq) goto loc_821C1FE8;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821C1C10:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c1c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C1C10;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r11,31376
	ctx.r31.s64 = ctx.r11.s64 + 31376;
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f12,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f3,f11,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f2,f10,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f25,f9,f9,f4
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f23,f13,f13,f3
	ctx.f23.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f24,f8,f8,f2
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fsubs f1,f25,f29
	ctx.f1.f64 = double(float(ctx.f25.f64 - ctx.f29.f64));
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821c1c88
	if (!ctx.cr6.lt) goto loc_821C1C88;
	// fmr f25,f29
	ctx.f25.f64 = ctx.f29.f64;
loc_821C1C88:
	// fsubs f13,f23,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f23.f64 - ctx.f29.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x821c1c9c
	if (!ctx.cr6.lt) goto loc_821C1C9C;
	// fmr f23,f29
	ctx.f23.f64 = ctx.f29.f64;
loc_821C1C9C:
	// fsubs f13,f24,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f24.f64 - ctx.f29.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x821c1cb0
	if (!ctx.cr6.lt) goto loc_821C1CB0;
	// fmr f24,f29
	ctx.f24.f64 = ctx.f29.f64;
loc_821C1CB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2790
	ctx.lr = 0x821C1CB8;
	sub_821C2790(ctx, base);
	// lfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8233d4f8
	ctx.lr = 0x821C1CCC;
	sub_8233D4F8(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// frsp f22,f1
	ctx.f22.f64 = double(float(ctx.f1.f64));
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f30,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fsqrts f2,f13
	ctx.f2.f64 = double(float(sqrt(ctx.f13.f64)));
	// bl 0x8233d4f8
	ctx.lr = 0x821C1CE4;
	sub_8233D4F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fneg f31,f12
	ctx.f31.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// bl 0x821c2680
	ctx.lr = 0x821C1CF4;
	sub_821C2680(ctx, base);
	// lfs f28,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f28.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f27,436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	ctx.f27.f64 = double(temp.f32);
	// fmr f26,f1
	ctx.f26.f64 = ctx.f1.f64;
	// lfs f4,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x8236b598
	ctx.lr = 0x821C1D18;
	sub_8236B598(ctx, base);
	// lfs f30,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x821c1d2c
	if (!ctx.cr6.eq) goto loc_821C1D2C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821C1D2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c06d8
	ctx.lr = 0x821C1D34;
	sub_821C06D8(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x821c1d54
	if (ctx.cr6.eq) goto loc_821C1D54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f4,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8236b598
	ctx.lr = 0x821C1D54;
	sub_8236B598(ctx, base);
loc_821C1D54:
	// fcmpu cr6,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f30.f64);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x821c1d64
	if (!ctx.cr6.eq) goto loc_821C1D64;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821C1D64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c06d8
	ctx.lr = 0x821C1D6C;
	sub_821C06D8(ctx, base);
	// fcmpu cr6,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f30.f64);
	// beq cr6,0x821c1d8c
	if (ctx.cr6.eq) goto loc_821C1D8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f4,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x8236b598
	ctx.lr = 0x821C1D8C;
	sub_8236B598(ctx, base);
loc_821C1D8C:
	// fcmpu cr6,f25,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f23.f64);
	// bne cr6,0x821c1da0
	if (!ctx.cr6.eq) goto loc_821C1DA0;
	// fcmpu cr6,f25,f24
	ctx.cr6.compare(ctx.f25.f64, ctx.f24.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821c1da4
	if (ctx.cr6.eq) goto loc_821C1DA4;
loc_821C1DA0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821C1DA4:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821c1dbc
	if (!ctx.cr6.eq) goto loc_821C1DBC;
	// fcmpu cr6,f25,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f29.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821c1dc0
	if (ctx.cr6.eq) goto loc_821C1DC0;
loc_821C1DBC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821C1DC0:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821c06d8
	ctx.lr = 0x821C1DD0;
	sub_821C06D8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821c1fe8
	if (ctx.cr6.eq) goto loc_821C1FE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsqrts f1,f25
	ctx.f1.f64 = double(float(sqrt(ctx.f25.f64)));
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8236b598
	ctx.lr = 0x821C1DF0;
	sub_8236B598(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c06d8
	ctx.lr = 0x821C1DFC;
	sub_821C06D8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c1fe8
	if (ctx.cr6.eq) goto loc_821C1FE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsqrts f1,f23
	ctx.f1.f64 = double(float(sqrt(ctx.f23.f64)));
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8236b598
	ctx.lr = 0x821C1E1C;
	sub_8236B598(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsqrts f1,f24
	ctx.f1.f64 = double(float(sqrt(ctx.f24.f64)));
	// bl 0x8236b598
	ctx.lr = 0x821C1E34;
	sub_8236B598(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa6c
	ctx.lr = 0x821C1E40;
	__restfpr_22(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821C1E44:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821C1E54:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c1e54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C1E54;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f13,f13
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f0,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f4,f11,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f3,f13,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f28,f10,f10,f5
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f27,f12,f12,f4
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f26,f9,f9,f3
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// bl 0x821c2790
	ctx.lr = 0x821C1EB0;
	sub_821C2790(ctx, base);
	// lfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8233d4f8
	ctx.lr = 0x821C1EC4;
	sub_8233D4F8(ctx, base);
	// fmuls f2,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f30,f30,f2
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x8233d4f8
	ctx.lr = 0x821C1EDC;
	sub_8233D4F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fneg f30,f13
	ctx.f30.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bl 0x821c2680
	ctx.lr = 0x821C1EEC;
	sub_821C2680(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821c2ce0
	ctx.lr = 0x821C1EFC;
	sub_821C2CE0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x821c1f18
	if (!ctx.cr6.eq) goto loc_821C1F18;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821C1F18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c06d8
	ctx.lr = 0x821C1F20;
	sub_821C06D8(ctx, base);
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x821c1f34
	if (ctx.cr6.eq) goto loc_821C1F34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821c2ce0
	ctx.lr = 0x821C1F34;
	sub_821C2CE0(ctx, base);
loc_821C1F34:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x821c1f44
	if (!ctx.cr6.eq) goto loc_821C1F44;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821C1F44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c06d8
	ctx.lr = 0x821C1F4C;
	sub_821C06D8(ctx, base);
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// beq cr6,0x821c1f60
	if (ctx.cr6.eq) goto loc_821C1F60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x821c2ce0
	ctx.lr = 0x821C1F60;
	sub_821C2CE0(ctx, base);
loc_821C1F60:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// bne cr6,0x821c1f74
	if (!ctx.cr6.eq) goto loc_821C1F74;
	// fcmpu cr6,f28,f26
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821c1f78
	if (ctx.cr6.eq) goto loc_821C1F78;
loc_821C1F74:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821C1F78:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821c1f94
	if (!ctx.cr6.eq) goto loc_821C1F94;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// beq cr6,0x821c1f98
	if (ctx.cr6.eq) goto loc_821C1F98;
loc_821C1F94:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821C1F98:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821c06d8
	ctx.lr = 0x821C1FA8;
	sub_821C06D8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c1fe8
	if (ctx.cr6.eq) goto loc_821C1FE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fsqrts f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(ctx.f28.f64)));
	// bl 0x821c2ce0
	ctx.lr = 0x821C1FBC;
	sub_821C2CE0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c06d8
	ctx.lr = 0x821C1FC8;
	sub_821C06D8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c1fe8
	if (ctx.cr6.eq) goto loc_821C1FE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fsqrts f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(ctx.f27.f64)));
	// bl 0x821c2ce0
	ctx.lr = 0x821C1FDC;
	sub_821C2CE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fsqrts f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(ctx.f26.f64)));
	// bl 0x821c2ce0
	ctx.lr = 0x821C1FE8;
	sub_821C2CE0(ctx, base);
loc_821C1FE8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa6c
	ctx.lr = 0x821C1FF4;
	__restfpr_22(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C1FF8"))) PPC_WEAK_FUNC(sub_821C1FF8);
PPC_FUNC_IMPL(__imp__sub_821C1FF8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c20b8
	if (ctx.cr6.eq) goto loc_821C20B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821c20b8
	if (ctx.cr6.gt) goto loc_821C20B8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821c20b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821C20B8;
	// bdzf 4*cr6+eq,0x821c2050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821C2050;
	// bdzf 4*cr6+eq,0x821c20b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821C20B8;
	// bdzf 4*cr6+eq,0x821c2050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821C2050;
	// bdzf 4*cr6+eq,0x821c20b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821C20B8;
	// bdzf 4*cr6+eq,0x821c20b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821C20B8;
	// bdzf 4*cr6+eq,0x821c20b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821C20B8;
	// bne cr6,0x821c2080
	if (!ctx.cr6.eq) goto loc_821C2080;
loc_821C2050:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0b28
	ctx.lr = 0x821C2058;
	sub_821C0B28(ctx, base);
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x821c20d0
	ctx.lr = 0x821C2068;
	sub_821C20D0(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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
loc_821C2080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0b28
	ctx.lr = 0x821C2088;
	sub_821C0B28(ctx, base);
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x821c20d0
	ctx.lr = 0x821C2098;
	sub_821C20D0(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f3,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f2,272(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 436);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c20d0
	ctx.lr = 0x821C20B4;
	sub_821C20D0(ctx, base);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_821C20B8:
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

__attribute__((alias("__imp__sub_821C20CC"))) PPC_WEAK_FUNC(sub_821C20CC);
PPC_FUNC_IMPL(__imp__sub_821C20CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C20D0"))) PPC_WEAK_FUNC(sub_821C20D0);
PPC_FUNC_IMPL(__imp__sub_821C20D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fabs f0,f3
	ctx.f0.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fsubs f31,f2,f1
	ctx.f31.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f30,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// lfs f13,432(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f0,f8,f31
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821c2130
	if (!ctx.cr6.gt) goto loc_821C2130;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// b 0x821c2178
	goto loc_821C2178;
loc_821C2130:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c2150
	if (ctx.cr6.eq) goto loc_821C2150;
	// bl 0x8236b7b0
	ctx.lr = 0x821C214C;
	sub_8236B7B0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
loc_821C2150:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f31.f64));
	// fdivs f1,f30,f11
	ctx.f1.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
loc_821C2178:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C2190"))) PPC_WEAK_FUNC(sub_821C2190);
PPC_FUNC_IMPL(__imp__sub_821C2190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821C2198;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa2c
	ctx.lr = 0x821C21A0;
	__savefpr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x821c25cc
	if (ctx.cr6.gt) goto loc_821C25CC;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8660
	ctx.r12.s64 = ctx.r12.s64 + 8660;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821C2204;
	case 1:
		goto loc_821C2204;
	case 2:
		goto loc_821C25CC;
	case 3:
		goto loc_821C2250;
	case 4:
		goto loc_821C25CC;
	case 5:
		goto loc_821C2278;
	case 6:
		goto loc_821C25CC;
	case 7:
		goto loc_821C22B8;
	case 8:
		goto loc_821C25CC;
	case 9:
		goto loc_821C25CC;
	case 10:
		goto loc_821C25CC;
	case 11:
		goto loc_821C2310;
	default:
		__builtin_unreachable();
	}
	// lwz r16,8708(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8708);
	// lwz r16,8708(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8708);
	// lwz r16,9676(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9676);
	// lwz r16,8784(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8784);
	// lwz r16,9676(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9676);
	// lwz r16,8824(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8824);
	// lwz r16,9676(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9676);
	// lwz r16,8888(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8888);
	// lwz r16,9676(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9676);
	// lwz r16,9676(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9676);
	// lwz r16,9676(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9676);
	// lwz r16,8976(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8976);
loc_821C2204:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821c2230
	if (!ctx.cr6.lt) goto loc_821C2230;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa78
	ctx.lr = 0x821C222C;
	__restfpr_25(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821C2230:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x821c223c
	if (!ctx.cr6.gt) goto loc_821C223C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821C223C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa78
	ctx.lr = 0x821C224C;
	__restfpr_25(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821C2250:
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c25e0
	ctx.lr = 0x821C2264;
	sub_821C25E0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa78
	ctx.lr = 0x821C2274;
	__restfpr_25(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821C2278:
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821c25e0
	ctx.lr = 0x821C228C;
	sub_821C25E0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c25e0
	ctx.lr = 0x821C22A4;
	sub_821C25E0(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa78
	ctx.lr = 0x821C22B4;
	__restfpr_25(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821C22B8:
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821c25e0
	ctx.lr = 0x821C22CC;
	sub_821C25E0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c25e0
	ctx.lr = 0x821C22E4;
	sub_821C25E0(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c25e0
	ctx.lr = 0x821C22FC;
	sub_821C25E0(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa78
	ctx.lr = 0x821C230C;
	__restfpr_25(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821C2310:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821C2320:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c2320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C2320;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f12,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f3,f11,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f2,f10,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f28,f9,f9,f4
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f27,f13,f13,f3
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f26,f8,f8,f2
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fsubs f1,f28,f29
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821c2398
	if (!ctx.cr6.lt) goto loc_821C2398;
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
loc_821C2398:
	// fsubs f13,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f29.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x821c23ac
	if (!ctx.cr6.lt) goto loc_821C23AC;
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
loc_821C23AC:
	// fsubs f13,f26,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x821c23c0
	if (!ctx.cr6.lt) goto loc_821C23C0;
	// fmr f26,f29
	ctx.f26.f64 = ctx.f29.f64;
loc_821C23C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2790
	ctx.lr = 0x821C23C8;
	sub_821C2790(ctx, base);
	// lfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8233d4f8
	ctx.lr = 0x821C23DC;
	sub_8233D4F8(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// frsp f25,f1
	ctx.f25.f64 = double(float(ctx.f1.f64));
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f30,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fsqrts f2,f13
	ctx.f2.f64 = double(float(sqrt(ctx.f13.f64)));
	// bl 0x8233d4f8
	ctx.lr = 0x821C23F4;
	sub_8233D4F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fneg f31,f12
	ctx.f31.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// bl 0x821c2680
	ctx.lr = 0x821C2404;
	sub_821C2680(ctx, base);
	// lfs f7,272(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// lfs f4,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// lfs f2,436(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 436);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x821c25e0
	ctx.lr = 0x821C2420;
	sub_821C25E0(ctx, base);
	// lfs f6,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f31,f6
	ctx.cr6.compare(ctx.f31.f64, ctx.f6.f64);
	// beq cr6,0x821c2440
	if (ctx.cr6.eq) goto loc_821C2440;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821c25e0
	ctx.lr = 0x821C243C;
	sub_821C25E0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_821C2440:
	// fcmpu cr6,f5,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, ctx.f6.f64);
	// beq cr6,0x821c2458
	if (ctx.cr6.eq) goto loc_821C2458;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// bl 0x821c25e0
	ctx.lr = 0x821C2454;
	sub_821C25E0(ctx, base);
	// fmr f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f1.f64;
loc_821C2458:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// bne cr6,0x821c246c
	if (!ctx.cr6.eq) goto loc_821C246C;
	// fcmpu cr6,f28,f26
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821c2470
	if (ctx.cr6.eq) goto loc_821C2470;
loc_821C246C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821C2470:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c2488
	if (!ctx.cr6.eq) goto loc_821C2488;
	// fcmpu cr6,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// beq cr6,0x821c248c
	if (ctx.cr6.eq) goto loc_821C248C;
loc_821C2488:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821C248C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c24e0
	if (ctx.cr6.eq) goto loc_821C24E0;
	// lfs f7,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsqrts f1,f28
	ctx.f1.f64 = double(float(sqrt(ctx.f28.f64)));
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// bl 0x821c25e0
	ctx.lr = 0x821C24B4;
	sub_821C25E0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// beq cr6,0x821c24e0
	if (ctx.cr6.eq) goto loc_821C24E0;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fsqrts f1,f27
	ctx.f1.f64 = double(float(sqrt(ctx.f27.f64)));
	// bl 0x821c25e0
	ctx.lr = 0x821C24CC;
	sub_821C25E0(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fsqrts f1,f26
	ctx.f1.f64 = double(float(sqrt(ctx.f26.f64)));
	// bl 0x821c25e0
	ctx.lr = 0x821C24DC;
	sub_821C25E0(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
loc_821C24E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f5
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f5.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821c28c0
	ctx.lr = 0x821C24F4;
	sub_821C28C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821c25cc
	if (ctx.cr6.eq) goto loc_821C25CC;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f28,f0
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// fmuls f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x821c2588
	if (ctx.cr6.eq) goto loc_821C2588;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f27
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f9,f11,f27
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f26,f8
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// lfs f5,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f26
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f26.f64));
	// fmuls f3,f26,f5
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f5.f64));
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa78
	ctx.lr = 0x821C2584;
	__restfpr_25(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821C2588:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f28,f8
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f8.f64));
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f28
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fmuls f3,f28,f5
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f5.f64));
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f3,16(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f6,20(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_821C25CC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa78
	ctx.lr = 0x821C25D8;
	__restfpr_25(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C25DC"))) PPC_WEAK_FUNC(sub_821C25DC);
PPC_FUNC_IMPL(__imp__sub_821C25DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C25E0"))) PPC_WEAK_FUNC(sub_821C25E0);
PPC_FUNC_IMPL(__imp__sub_821C25E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f13,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fsubs f12,f3,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,432(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f11,f8
	ctx.f11.f64 = double(float(ctx.f8.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x821c2634
	if (!ctx.cr6.lt) goto loc_821C2634;
	// fmr f3,f2
	ctx.f3.f64 = ctx.f2.f64;
	// b 0x821c2640
	goto loc_821C2640;
loc_821C2634:
	// fcmpu cr6,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// bgt cr6,0x821c2640
	if (ctx.cr6.gt) goto loc_821C2640;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
loc_821C2640:
	// fsubs f13,f3,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x821c2658
	if (!ctx.cr6.gt) goto loc_821C2658;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_821C2658:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fadds f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C2680"))) PPC_WEAK_FUNC(sub_821C2680);
PPC_FUNC_IMPL(__imp__sub_821C2680) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r10,31376
	ctx.r11.s64 = ctx.r10.s64 + 31376;
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// fmuls f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmuls f4,f13,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmsubs f10,f9,f7,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f10.f64));
	// fmsubs f7,f5,f11,f6
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 - ctx.f6.f64));
	// fmsubs f3,f13,f8,f1
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 - ctx.f1.f64));
	// fmsubs f6,f9,f31,f4
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 - ctx.f4.f64));
	// fsubs f5,f2,f9
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fsubs f4,f13,f2
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f1,f6,f6
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f13,f7,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f12,f5,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fmadds f11,f3,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fmadds f9,f4,f4,f12
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fsqrts f8,f11
	ctx.f8.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsqrts f2,f9
	ctx.f2.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// fdivs f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fmuls f12,f6,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f10,f5,f1
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f9,f7,f13
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f8,f1,f4
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f7,f13,f3
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f5,f9,f10,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f1,f7,f8,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821c2758
	if (ctx.cr6.gt) goto loc_821C2758;
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821c275c
	if (!ctx.cr6.lt) goto loc_821C275C;
loc_821C2758:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_821C275C:
	// bl 0x8233cfb0
	ctx.lr = 0x821C2760;
	sub_8233CFB0(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821c2774
	if (!ctx.cr6.lt) goto loc_821C2774;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_821C2774:
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

__attribute__((alias("__imp__sub_821C278C"))) PPC_WEAK_FUNC(sub_821C278C);
PPC_FUNC_IMPL(__imp__sub_821C278C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C2790"))) PPC_WEAK_FUNC(sub_821C2790);
PPC_FUNC_IMPL(__imp__sub_821C2790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fmuls f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f4,28(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// stfs f3,32(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmuls f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f5,24(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// fmuls f9,f10,f5
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f13,f3
	ctx.f13.f64 = ctx.f3.f64;
	// fmr f11,f5
	ctx.f11.f64 = ctx.f5.f64;
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmadds f7,f4,f1,f9
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmadds f4,f12,f3,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fmuls f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmuls f1,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f3,f11,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fsubs f13,f5,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fsubs f11,f8,f1
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fsubs f12,f10,f3
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f7,f13,f13
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f5,f11,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fdivs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fmuls f2,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f1,f13,f3
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f0,f11,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmr f9,f2
	ctx.f9.f64 = ctx.f2.f64;
	// fmuls f6,f1,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f5,f0,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmsubs f3,f11,f2,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 - ctx.f6.f64));
	// stfs f3,-8(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// fmsubs f2,f1,f8,f5
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 - ctx.f5.f64));
	// stfs f2,-16(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// fmsubs f4,f0,f13,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,-12(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C28C0"))) PPC_WEAK_FUNC(sub_821C28C0);
PPC_FUNC_IMPL(__imp__sub_821C28C0) {
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
	ctx.lr = 0x821C28D4;
	__savefpr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// bl 0x8233c950
	ctx.lr = 0x821C28EC;
	sub_8233C950(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8233c950
	ctx.lr = 0x821C28F8;
	sub_8233C950(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8233c950
	ctx.lr = 0x821C2904;
	sub_8233C950(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8233c870
	ctx.lr = 0x821C2910;
	sub_8233C870(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8233c870
	ctx.lr = 0x821C291C;
	sub_8233C870(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8233c870
	ctx.lr = 0x821C2928;
	sub_8233C870(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f29,f27
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// fmuls f12,f30,f28
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmuls f11,f27,f28
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// fmuls f10,f30,f29
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// fmuls f9,f30,f26
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f26.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f8,f26,f27
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f27.f64));
	// stfs f8,16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmuls f7,f29,f26
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f26.f64));
	// stfs f7,24(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmuls f6,f26,f28
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f28.f64));
	// stfs f6,32(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmuls f5,f0,f30
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f3,f0,f29
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fneg f2,f12
	ctx.f2.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmadds f13,f5,f29,f11
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f11.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f12,f5,f28,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f28.f64 + ctx.f4.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f11,f3,f27,f2
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f27.f64 + ctx.f2.f64));
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f10,f1,f28,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f28.f64 + ctx.f10.f64));
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8233fa7c
	ctx.lr = 0x821C29A4;
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

__attribute__((alias("__imp__sub_821C29B4"))) PPC_WEAK_FUNC(sub_821C29B4);
PPC_FUNC_IMPL(__imp__sub_821C29B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C29B8"))) PPC_WEAK_FUNC(sub_821C29B8);
PPC_FUNC_IMPL(__imp__sub_821C29B8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x821c2c10
	ctx.lr = 0x821C29D4;
	sub_821C2C10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c29f0
	if (ctx.cr6.eq) goto loc_821C29F0;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c29f4
	if (!ctx.cr6.eq) goto loc_821C29F4;
loc_821C29F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C29F4:
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

__attribute__((alias("__imp__sub_821C2A08"))) PPC_WEAK_FUNC(sub_821C2A08);
PPC_FUNC_IMPL(__imp__sub_821C2A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821C2A10;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r25,28(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x821C2A30;
	sub_8236A7A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c2abc
	if (ctx.cr6.eq) goto loc_821C2ABC;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_821C2A44:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a490
	ctx.lr = 0x821C2A58;
	sub_8236A490(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c2a70
	if (ctx.cr6.eq) goto loc_821C2A70;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x821c2a70
	if (!ctx.cr6.lt) goto loc_821C2A70;
	// stbx r10,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u8);
loc_821C2A70:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c2aa0
	if (ctx.cr6.eq) goto loc_821C2AA0;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821c2a8c
	if (ctx.cr6.eq) goto loc_821C2A8C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_821C2A8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c2aa0
	if (ctx.cr6.eq) goto loc_821C2AA0;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c2a44
	if (!ctx.cr6.eq) goto loc_821C2A44;
loc_821C2AA0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c2ab8
	if (ctx.cr6.eq) goto loc_821C2AB8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821c2ab8
	if (ctx.cr6.eq) goto loc_821C2AB8;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_821C2AB8:
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
loc_821C2ABC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821c2ad8
	if (!ctx.cr6.eq) goto loc_821C2AD8;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bgt cr6,0x821c2ad4
	if (ctx.cr6.gt) goto loc_821C2AD4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821C2AD4:
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_821C2AD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C2AE0"))) PPC_WEAK_FUNC(sub_821C2AE0);
PPC_FUNC_IMPL(__imp__sub_821C2AE0) {
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
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x821C2B04;
	sub_8236A7A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c2b30
	if (ctx.cr6.eq) goto loc_821C2B30;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a490
	ctx.lr = 0x821C2B20;
	sub_8236A490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c2b34
	if (!ctx.cr6.eq) goto loc_821C2B34;
loc_821C2B30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C2B34:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c2b60
	if (ctx.cr6.eq) goto loc_821C2B60;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// stb r11,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r11.u8);
	// stb r10,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r10.u8);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
loc_821C2B60:
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

__attribute__((alias("__imp__sub_821C2B78"))) PPC_WEAK_FUNC(sub_821C2B78);
PPC_FUNC_IMPL(__imp__sub_821C2B78) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x821C2B9C;
	sub_8236A7A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c2bc8
	if (ctx.cr6.eq) goto loc_821C2BC8;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a490
	ctx.lr = 0x821C2BB8;
	sub_8236A490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c2bcc
	if (!ctx.cr6.eq) goto loc_821C2BCC;
loc_821C2BC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C2BCC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c2bf8
	if (ctx.cr6.eq) goto loc_821C2BF8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// stb r11,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r11.u8);
	// stb r10,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r10.u8);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
loc_821C2BF8:
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

__attribute__((alias("__imp__sub_821C2C10"))) PPC_WEAK_FUNC(sub_821C2C10);
PPC_FUNC_IMPL(__imp__sub_821C2C10) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x821C2C34;
	sub_8236A7A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c2c74
	if (ctx.cr6.eq) goto loc_821C2C74;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a490
	ctx.lr = 0x821C2C58;
	sub_8236A490(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c2c74
	if (ctx.cr6.eq) goto loc_821C2C74;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
loc_821C2C74:
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

__attribute__((alias("__imp__sub_821C2C8C"))) PPC_WEAK_FUNC(sub_821C2C8C);
PPC_FUNC_IMPL(__imp__sub_821C2C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C2C90"))) PPC_WEAK_FUNC(sub_821C2C90);
PPC_FUNC_IMPL(__imp__sub_821C2C90) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233e280
	ctx.lr = 0x821C2CB8;
	sub_8233E280(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// bne cr6,0x821c2cc8
	if (!ctx.cr6.eq) goto loc_821C2CC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821C2CC8:
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

__attribute__((alias("__imp__sub_821C2CE0"))) PPC_WEAK_FUNC(sub_821C2CE0);
PPC_FUNC_IMPL(__imp__sub_821C2CE0) {
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
	// li r4,13
	ctx.r4.s64 = 13;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x821C2D00;
	sub_8236B4A0(ctx, base);
	// lbz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// lbz r10,141(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 141);
	// li r5,32
	ctx.r5.s64 = 32;
	// lbz r9,142(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 142);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r8,143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x8236b048
	ctx.lr = 0x821C2D30;
	sub_8236B048(ctx, base);
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

__attribute__((alias("__imp__sub_821C2D44"))) PPC_WEAK_FUNC(sub_821C2D44);
PPC_FUNC_IMPL(__imp__sub_821C2D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C2D48"))) PPC_WEAK_FUNC(sub_821C2D48);
PPC_FUNC_IMPL(__imp__sub_821C2D48) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x821C2D68;
	sub_8236B4A0(ctx, base);
	// lbz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// lbz r10,141(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 141);
	// li r5,32
	ctx.r5.s64 = 32;
	// lbz r9,142(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 142);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r8,143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x8236b048
	ctx.lr = 0x821C2D98;
	sub_8236B048(ctx, base);
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

__attribute__((alias("__imp__sub_821C2DAC"))) PPC_WEAK_FUNC(sub_821C2DAC);
PPC_FUNC_IMPL(__imp__sub_821C2DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C2DB0"))) PPC_WEAK_FUNC(sub_821C2DB0);
PPC_FUNC_IMPL(__imp__sub_821C2DB0) {
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
	// bl 0x82370d30
	ctx.lr = 0x821C2DD0;
	sub_82370D30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c2de8
	if (ctx.cr6.eq) goto loc_821C2DE8;
	// bl 0x8236a3f0
	ctx.lr = 0x821C2DE4;
	sub_8236A3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C2DE8:
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

__attribute__((alias("__imp__sub_821C2E00"))) PPC_WEAK_FUNC(sub_821C2E00);
PPC_FUNC_IMPL(__imp__sub_821C2E00) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c2e68
	if (ctx.cr6.eq) goto loc_821C2E68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82371710
	ctx.lr = 0x821C2E28;
	sub_82371710(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c2e48
	if (ctx.cr6.eq) goto loc_821C2E48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C2E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C2E48:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c2e68
	if (ctx.cr6.eq) goto loc_821C2E68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,53
	ctx.r4.s64 = 53;
	// bl 0x820daf68
	ctx.lr = 0x821C2E68;
	sub_820DAF68(ctx, base);
loc_821C2E68:
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

__attribute__((alias("__imp__sub_821C2E7C"))) PPC_WEAK_FUNC(sub_821C2E7C);
PPC_FUNC_IMPL(__imp__sub_821C2E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C2E80"))) PPC_WEAK_FUNC(sub_821C2E80);
PPC_FUNC_IMPL(__imp__sub_821C2E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821C2E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820cdf68
	ctx.lr = 0x821C2E98;
	sub_820CDF68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fcd8
	ctx.lr = 0x821C2EA8;
	sub_8236FCD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236f7f0
	ctx.lr = 0x821C2EB0;
	sub_8236F7F0(ctx, base);
	// bl 0x82372e08
	ctx.lr = 0x821C2EB4;
	sub_82372E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82373a88
	ctx.lr = 0x821C2EC0;
	sub_82373A88(ctx, base);
	// bl 0x821c3150
	ctx.lr = 0x821C2EC4;
	sub_821C3150(ctx, base);
	// bl 0x82371718
	ctx.lr = 0x821C2EC8;
	sub_82371718(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82371818
	ctx.lr = 0x821C2ED4;
	sub_82371818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82371828
	ctx.lr = 0x821C2EE0;
	sub_82371828(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371810
	ctx.lr = 0x821C2EEC;
	sub_82371810(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821c2f20
	if (ctx.cr6.eq) goto loc_821C2F20;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821C2F00:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821c2f00
	if (!ctx.cr0.eq) goto loc_821C2F00;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_821C2F20:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823719a0
	ctx.lr = 0x821C2F2C;
	sub_823719A0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r11,-20656
	ctx.r10.s64 = ctx.r11.s64 + -20656;
	// lwz r5,3264(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	// bl 0x8233e4e0
	ctx.lr = 0x821C2F44;
	sub_8233E4E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x821C2F4C;
	sub_821C0630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C2F58"))) PPC_WEAK_FUNC(sub_821C2F58);
PPC_FUNC_IMPL(__imp__sub_821C2F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821C2F60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c2fdc
	if (ctx.cr6.eq) goto loc_821C2FDC;
loc_821C2F7C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823718e8
	ctx.lr = 0x821C2F88;
	sub_823718E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823718e8
	ctx.lr = 0x821C2F98;
	sub_823718E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r27,r7,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x821c0630
	ctx.lr = 0x821C2FB8;
	sub_821C0630(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x821C2FC0;
	sub_821C0630(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821c2fd8
	if (!ctx.cr6.eq) goto loc_821C2FD8;
	// lwz r30,44(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821c2f7c
	if (!ctx.cr6.eq) goto loc_821C2F7C;
	// b 0x821c2fdc
	goto loc_821C2FDC;
loc_821C2FD8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_821C2FDC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c309c
	if (ctx.cr6.eq) goto loc_821C309C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_821C2FF0:
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
	// bne 0x821c2ff0
	if (!ctx.cr0.eq) goto loc_821C2FF0;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// beq cr6,0x821c3044
	if (ctx.cr6.eq) goto loc_821C3044;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_821C3024:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821c3024
	if (!ctx.cr0.eq) goto loc_821C3024;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_821C3044:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x821C304C;
	sub_821C0630(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bne cr6,0x821c306c
	if (!ctx.cr6.eq) goto loc_821C306C;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// b 0x821c3070
	goto loc_821C3070;
loc_821C306C:
	// stw r30,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
loc_821C3070:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c309c
	if (ctx.cr6.eq) goto loc_821C309C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x820daf68
	ctx.lr = 0x821C309C;
	sub_820DAF68(ctx, base);
loc_821C309C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x821C30A4;
	sub_821C0630(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C30AC"))) PPC_WEAK_FUNC(sub_821C30AC);
PPC_FUNC_IMPL(__imp__sub_821C30AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C30B0"))) PPC_WEAK_FUNC(sub_821C30B0);
PPC_FUNC_IMPL(__imp__sub_821C30B0) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c3124
	if (ctx.cr6.eq) goto loc_821C3124;
loc_821C30D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,44(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_821C30E0:
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
	// bne 0x821c30e0
	if (!ctx.cr0.eq) goto loc_821C30E0;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821c311c
	if (!ctx.cr6.eq) goto loc_821C311C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C311C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C311C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821c30d4
	if (!ctx.cr6.eq) goto loc_821C30D4;
loc_821C3124:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821C314C"))) PPC_WEAK_FUNC(sub_821C314C);
PPC_FUNC_IMPL(__imp__sub_821C314C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C3150"))) PPC_WEAK_FUNC(sub_821C3150);
PPC_FUNC_IMPL(__imp__sub_821C3150) {
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
	// lwz r3,23916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23916);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c31dc
	if (!ctx.cr6.eq) goto loc_821C31DC;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8236a338
	ctx.lr = 0x821C317C;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c31cc
	if (ctx.cr6.eq) goto loc_821C31CC;
	// bl 0x82358118
	ctx.lr = 0x821C3188;
	sub_82358118(ctx, base);
	// stw r3,23916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23916, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c31d4
	if (ctx.cr6.eq) goto loc_821C31D4;
	// bl 0x820cde50
	ctx.lr = 0x821C3198;
	sub_820CDE50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12792
	ctx.r4.s64 = ctx.r11.s64 + 12792;
	// bl 0x820cdd40
	ctx.lr = 0x821C31A4;
	sub_820CDD40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c31d8
	if (!ctx.cr6.eq) goto loc_821C31D8;
	// lwz r30,23916(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23916);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c31cc
	if (ctx.cr6.eq) goto loc_821C31CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371778
	ctx.lr = 0x821C31C4;
	sub_82371778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x821C31CC;
	sub_8236A3F0(ctx, base);
loc_821C31CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23916, ctx.r11.u32);
loc_821C31D4:
	// bl 0x82247498
	ctx.lr = 0x821C31D8;
	sub_82247498(ctx, base);
loc_821C31D8:
	// lwz r3,23916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23916);
loc_821C31DC:
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

__attribute__((alias("__imp__sub_821C31F4"))) PPC_WEAK_FUNC(sub_821C31F4);
PPC_FUNC_IMPL(__imp__sub_821C31F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C31F8"))) PPC_WEAK_FUNC(sub_821C31F8);
PPC_FUNC_IMPL(__imp__sub_821C31F8) {
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
	// lis r30,-32183
	ctx.r30.s64 = -2109145088;
	// lwz r31,23916(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23916);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c3234
	if (ctx.cr6.eq) goto loc_821C3234;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371778
	ctx.lr = 0x821C3224;
	sub_82371778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x821C322C;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23916(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23916, ctx.r11.u32);
loc_821C3234:
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

__attribute__((alias("__imp__sub_821C324C"))) PPC_WEAK_FUNC(sub_821C324C);
PPC_FUNC_IMPL(__imp__sub_821C324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C3250"))) PPC_WEAK_FUNC(sub_821C3250);
PPC_FUNC_IMPL(__imp__sub_821C3250) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-25580
	ctx.r9.s64 = ctx.r10.s64 + -25580;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821c3290
	if (ctx.cr6.eq) goto loc_821C3290;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821C3290;
	sub_82080000(ctx, base);
loc_821C3290:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371868
	ctx.lr = 0x821C3298;
	sub_82371868(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c32b0
	if (ctx.cr6.eq) goto loc_821C32B0;
	// bl 0x8236a3f0
	ctx.lr = 0x821C32AC;
	sub_8236A3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C32B0:
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

__attribute__((alias("__imp__sub_821C32C8"))) PPC_WEAK_FUNC(sub_821C32C8);
PPC_FUNC_IMPL(__imp__sub_821C32C8) {
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
	// bl 0x82371a10
	ctx.lr = 0x821C32E8;
	sub_82371A10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c3310
	ctx.lr = 0x821C32F8;
	sub_821C3310(ctx, base);
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

__attribute__((alias("__imp__sub_821C3310"))) PPC_WEAK_FUNC(sub_821C3310);
PPC_FUNC_IMPL(__imp__sub_821C3310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x821C3318;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r8,r11,-20656
	ctx.r8.s64 = ctx.r11.s64 + -20656;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r11,3260(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3260);
	// lwz r8,3256(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c3464
	if (ctx.cr6.eq) goto loc_821C3464;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,255
	ctx.r22.s64 = 255;
loc_821C3354:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0a88
	ctx.lr = 0x821C335C;
	sub_821C0A88(ctx, base);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c09f0
	ctx.lr = 0x821C3370;
	sub_821C09F0(ctx, base);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c09f0
	ctx.lr = 0x821C337C;
	sub_821C09F0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821c3398
	if (!ctx.cr6.eq) goto loc_821C3398;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c339c
	if (!ctx.cr6.eq) goto loc_821C339C;
loc_821C3398:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821C339C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c3440
	if (ctx.cr6.eq) goto loc_821C3440;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821c33fc
	if (ctx.cr6.eq) goto loc_821C33FC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821c33f0
	if (ctx.cr6.eq) goto loc_821C33F0;
	// add r8,r28,r29
	ctx.r8.u64 = ctx.r28.u64 + ctx.r29.u64;
loc_821C33D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821c33f0
	if (!ctx.cr0.eq) goto loc_821C33F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821c33d0
	if (!ctx.cr6.eq) goto loc_821C33D0;
loc_821C33F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// beq cr6,0x821c3400
	if (ctx.cr6.eq) goto loc_821C3400;
loc_821C33FC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_821C3400:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x821C340C;
	sub_8236B4A0(ctx, base);
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq cr6,0x821c342c
	if (ctx.cr6.eq) goto loc_821C342C;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x821c3434
	goto loc_821C3434;
loc_821C342C:
	// stb r24,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r24.u8);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
loc_821C3434:
	// bl 0x8236b048
	ctx.lr = 0x821C3438;
	sub_8236B048(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c3450
	if (ctx.cr6.eq) goto loc_821C3450;
loc_821C3440:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0e20
	ctx.lr = 0x821C3450;
	sub_821C0E20(ctx, base);
loc_821C3450:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r9,r27,r29
	ctx.r9.u64 = ctx.r27.u64 + ctx.r29.u64;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x821c3354
	if (!ctx.cr0.eq) goto loc_821C3354;
loc_821C3464:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C346C"))) PPC_WEAK_FUNC(sub_821C346C);
PPC_FUNC_IMPL(__imp__sub_821C346C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C3470"))) PPC_WEAK_FUNC(sub_821C3470);
PPC_FUNC_IMPL(__imp__sub_821C3470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821C3478;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x821c34bc
	if (ctx.cr6.eq) goto loc_821C34BC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821C349C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821c349c
	if (!ctx.cr0.eq) goto loc_821C349C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_821C34BC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371b18
	ctx.lr = 0x821C34CC;
	sub_82371B18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c34ec
	if (!ctx.cr6.eq) goto loc_821C34EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0630
	ctx.lr = 0x821C34E0;
	sub_821C0630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C34EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c3510
	ctx.lr = 0x821C34F8;
	sub_821C3510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0630
	ctx.lr = 0x821C3504;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C3510"))) PPC_WEAK_FUNC(sub_821C3510);
PPC_FUNC_IMPL(__imp__sub_821C3510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821C3518;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r9,r11,-20656
	ctx.r9.s64 = ctx.r11.s64 + -20656;
	// lwz r11,3260(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3260);
	// lwz r31,3256(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c35ec
	if (ctx.cr6.eq) goto loc_821C35EC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r26,0
	ctx.r26.s64 = 0;
loc_821C3544:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0a88
	ctx.lr = 0x821C354C;
	sub_821C0A88(ctx, base);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c09f0
	ctx.lr = 0x821C3560;
	sub_821C09F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821c357c
	if (!ctx.cr6.eq) goto loc_821C357C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c3580
	if (!ctx.cr6.eq) goto loc_821C3580;
loc_821C357C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821C3580:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c35cc
	if (ctx.cr6.eq) goto loc_821C35CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c2c10
	ctx.lr = 0x821C35A0;
	sub_821C2C10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c35bc
	if (ctx.cr6.eq) goto loc_821C35BC;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c35c0
	if (!ctx.cr6.eq) goto loc_821C35C0;
loc_821C35BC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821C35C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c35dc
	if (ctx.cr6.eq) goto loc_821C35DC;
loc_821C35CC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c1270
	ctx.lr = 0x821C35DC;
	sub_821C1270(ctx, base);
loc_821C35DC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x821c3544
	if (!ctx.cr0.eq) goto loc_821C3544;
loc_821C35EC:
	// lbz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C3600"))) PPC_WEAK_FUNC(sub_821C3600);
PPC_FUNC_IMPL(__imp__sub_821C3600) {
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
	// bl 0x82357e20
	ctx.lr = 0x821C361C;
	sub_82357E20(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-25568
	ctx.r9.s64 = ctx.r11.s64 + -25568;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x821c3730
	ctx.lr = 0x821C3638;
	sub_821C3730(ctx, base);
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

__attribute__((alias("__imp__sub_821C3650"))) PPC_WEAK_FUNC(sub_821C3650);
PPC_FUNC_IMPL(__imp__sub_821C3650) {
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
	// bl 0x821c36a0
	ctx.lr = 0x821C3670;
	sub_821C36A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c3688
	if (ctx.cr6.eq) goto loc_821C3688;
	// bl 0x8236a3f0
	ctx.lr = 0x821C3684;
	sub_8236A3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C3688:
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

__attribute__((alias("__imp__sub_821C36A0"))) PPC_WEAK_FUNC(sub_821C36A0);
PPC_FUNC_IMPL(__imp__sub_821C36A0) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-25568
	ctx.r9.s64 = ctx.r10.s64 + -25568;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821c36d8
	if (ctx.cr6.eq) goto loc_821C36D8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821C36D8;
	sub_82080000(ctx, base);
loc_821C36D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c36f0
	if (ctx.cr6.eq) goto loc_821C36F0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821C36F0;
	sub_82080000(ctx, base);
loc_821C36F0:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c3710
	if (ctx.cr6.eq) goto loc_821C3710;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C3710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C3710:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357e38
	ctx.lr = 0x821C3718;
	sub_82357E38(ctx, base);
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

__attribute__((alias("__imp__sub_821C372C"))) PPC_WEAK_FUNC(sub_821C372C);
PPC_FUNC_IMPL(__imp__sub_821C372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C3730"))) PPC_WEAK_FUNC(sub_821C3730);
PPC_FUNC_IMPL(__imp__sub_821C3730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821C3738;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-20656
	ctx.r29.s64 = ctx.r11.s64 + -20656;
	// lwz r31,3228(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3228);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821c3760
	if (!ctx.cr6.eq) goto loc_821C3760;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C3760:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821c3778
	if (!ctx.cr6.gt) goto loc_821C3778;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821C3778:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821C3788;
	sub_82082030(ctx, base);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x821C3798;
	sub_8233EAF0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r31,3240(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3240);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082030
	ctx.lr = 0x821C37B0;
	sub_82082030(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x821C37C0;
	sub_8233EAF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C37D4"))) PPC_WEAK_FUNC(sub_821C37D4);
PPC_FUNC_IMPL(__imp__sub_821C37D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C37D8"))) PPC_WEAK_FUNC(sub_821C37D8);
PPC_FUNC_IMPL(__imp__sub_821C37D8) {
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
	// bl 0x82357f00
	ctx.lr = 0x821C37F4;
	sub_82357F00(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,-20656
	ctx.r30.s64 = ctx.r11.s64 + -20656;
	// lwz r11,3228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3228);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233eaf0
	ctx.lr = 0x821C3810;
	sub_8233EAF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,3240(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3240);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8233eaf0
	ctx.lr = 0x821C3820;
	sub_8233EAF0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x821c3848
	if (ctx.cr6.eq) goto loc_821C3848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C3848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C3848:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821C3864"))) PPC_WEAK_FUNC(sub_821C3864);
PPC_FUNC_IMPL(__imp__sub_821C3864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C3868"))) PPC_WEAK_FUNC(sub_821C3868);
PPC_FUNC_IMPL(__imp__sub_821C3868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821C3870;
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r9,r11,-20656
	ctx.r9.s64 = ctx.r11.s64 + -20656;
	// addi r8,r10,31216
	ctx.r8.s64 = ctx.r10.s64 + 31216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,3228(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3228);
	// lwz r10,3224(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3224);
	// lwz r27,52(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c392c
	if (ctx.cr6.eq) goto loc_821C392C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
loc_821C38C0:
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfsx f0,r9,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x821c3900
	if (ctx.cr6.eq) goto loc_821C3900;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x821c391c
	if (!ctx.cr6.gt) goto loc_821C391C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x821c391c
	if (ctx.cr6.gt) goto loc_821C391C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c2190
	ctx.lr = 0x821C38F8;
	sub_821C2190(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821c3914
	goto loc_821C3914;
loc_821C3900:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x821c3910
	if (!ctx.cr6.eq) goto loc_821C3910;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x821c3914
	goto loc_821C3914;
loc_821C3910:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_821C3914:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
loc_821C391C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821c38c0
	if (!ctx.cr0.eq) goto loc_821C38C0;
loc_821C392C:
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

__attribute__((alias("__imp__sub_821C393C"))) PPC_WEAK_FUNC(sub_821C393C);
PPC_FUNC_IMPL(__imp__sub_821C393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C3940"))) PPC_WEAK_FUNC(sub_821C3940);
PPC_FUNC_IMPL(__imp__sub_821C3940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821C3948;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r8,r9,-20656
	ctx.r8.s64 = ctx.r9.s64 + -20656;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r28,3228(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3228);
	// lwz r26,3224(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3224);
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// beq cr6,0x821c39b0
	if (ctx.cr6.eq) goto loc_821C39B0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821c39b0
	if (ctx.cr6.eq) goto loc_821C39B0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821C39A0;
	sub_8233E4E0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821C39B0;
	sub_8233E4E0(ctx, base);
loc_821C39B0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x821c3a24
	if (ctx.cr6.lt) goto loc_821C3A24;
	// addi r7,r28,-3
	ctx.r7.s64 = ctx.r28.s64 + -3;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// addi r11,r26,-32
	ctx.r11.s64 = ctx.r26.s64 + -32;
loc_821C39C8:
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// stfsx f0,r6,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
	// stfsx f0,r6,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, temp.u32);
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r4,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, temp.u32);
	// stfsx f13,r4,r30
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r30.u32, temp.u32);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f12,r8,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// stfsx f12,r8,r30
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, temp.u32);
	// lwzu r8,128(r11)
	ea = 128 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
	// stfsx f0,r6,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, temp.u32);
	// blt cr6,0x821c39c8
	if (ctx.cr6.lt) goto loc_821C39C8;
loc_821C3A24:
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x821c3a64
	if (!ctx.cr6.lt) goto loc_821C3A64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r8,r9,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r9.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r9,-32
	ctx.r11.s64 = ctx.r9.s64 + -32;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_821C3A4C:
	// lwzu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// stfsx f0,r9,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
	// bdnz 0x821c3a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C3A4C;
loc_821C3A64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C3A6C"))) PPC_WEAK_FUNC(sub_821C3A6C);
PPC_FUNC_IMPL(__imp__sub_821C3A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C3A70"))) PPC_WEAK_FUNC(sub_821C3A70);
PPC_FUNC_IMPL(__imp__sub_821C3A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821C3A78;
	__savegprlr_28(ctx, base);
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r7,r9,31216
	ctx.r7.s64 = ctx.r9.s64 + 31216;
	// addi r8,r10,-20656
	ctx.r8.s64 = ctx.r10.s64 + -20656;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,52(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r9,56(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r30,3228(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3228);
	// lwz r28,3224(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3224);
	// beq cr6,0x821c3b88
	if (ctx.cr6.eq) goto loc_821C3B88;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x821c3b3c
	if (ctx.cr6.lt) goto loc_821C3B3C;
	// addi r4,r30,-3
	ctx.r4.s64 = ctx.r30.s64 + -3;
	// addi r6,r29,-4
	ctx.r6.s64 = ctx.r29.s64 + -4;
	// addi r8,r28,-32
	ctx.r8.s64 = ctx.r28.s64 + -32;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r3,r31,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_821C3ACC:
	// lwz r5,32(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// stfsx f0,r5,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r5,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
	// lwz r5,64(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r3,r11
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r5,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r5,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
	// lwz r5,96(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f10,r5,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r5,r9
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
	// lwzu r5,128(r8)
	ea = 128 + ctx.r8.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsu f0,16(r6)
	ea = 16 + ctx.r6.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r5,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfsx f8,r5,r9
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
	// blt cr6,0x821c3acc
	if (ctx.cr6.lt) goto loc_821C3ACC;
loc_821C3B3C:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821c3c44
	if (!ctx.cr6.lt) goto loc_821C3C44;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r5,r7,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r7.s64;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,-32
	ctx.r8.s64 = ctx.r8.s64 + -32;
	// add r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 + ctx.r31.u64;
	// subf r6,r31,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_821C3B64:
	// lwzu r7,32(r8)
	ea = 32 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// lfsx f0,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r7,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfsx f13,r7,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, temp.u32);
	// bdnz 0x821c3b64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C3B64;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821C3B88:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x821c3c04
	if (ctx.cr6.lt) goto loc_821C3C04;
	// addi r5,r30,-3
	ctx.r5.s64 = ctx.r30.s64 + -3;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// addi r8,r28,-32
	ctx.r8.s64 = ctx.r28.s64 + -32;
loc_821C3BA8:
	// lwz r6,32(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// stfsx f13,r4,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// stfsx f0,r4,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,64(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r6,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// stfsx f0,r6,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r4,96(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f11,r3,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// stfsx f0,r3,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, temp.u32);
	// lfsu f13,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// lwzu r6,128(r8)
	ea = 128 + ctx.r8.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r6,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// stfsx f0,r6,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// blt cr6,0x821c3ba8
	if (ctx.cr6.lt) goto loc_821C3BA8;
loc_821C3C04:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821c3c44
	if (!ctx.cr6.lt) goto loc_821C3C44;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r6,r7,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r7.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 + ctx.r28.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r11,r7,-32
	ctx.r11.s64 = ctx.r7.s64 + -32;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_821C3C2C:
	// lwzu r7,32(r11)
	ea = 32 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lfsu f13,4(r8)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r7,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// stfsx f0,r7,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, temp.u32);
	// bdnz 0x821c3c2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C3C2C;
loc_821C3C44:
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C3C48"))) PPC_WEAK_FUNC(sub_821C3C48);
PPC_FUNC_IMPL(__imp__sub_821C3C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x821C3C50;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x821c3c98
	if (ctx.cr6.eq) goto loc_821C3C98;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821C3C78:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821c3c78
	if (!ctx.cr0.eq) goto loc_821C3C78;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_821C3C98:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82357f60
	ctx.lr = 0x821C3CA8;
	sub_82357F60(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r27,r11,-20656
	ctx.r27.s64 = ctx.r11.s64 + -20656;
	// li r20,255
	ctx.r20.s64 = 255;
	// lwz r10,3224(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3224);
	// lwz r11,3228(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3228);
	// lwz r24,12(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c3e1c
	if (ctx.cr6.eq) goto loc_821C3E1C;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r10,16
	ctx.r28.s64 = ctx.r10.s64 + 16;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lfs f31,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
loc_821C3CE4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821c3d00
	if (!ctx.cr6.eq) goto loc_821C3D00;
	// lwz r11,-12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c3d04
	if (!ctx.cr6.eq) goto loc_821C3D04;
loc_821C3D00:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_821C3D04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c3d70
	if (ctx.cr6.eq) goto loc_821C3D70;
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lfsx f0,r29,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfsx f13,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821c3d2c
	if (!ctx.cr6.eq) goto loc_821C3D2C;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_821C3D2C:
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x821C3D3C;
	sub_8236B4A0(ctx, base);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821c3d5c
	if (ctx.cr6.eq) goto loc_821C3D5C;
	// stb r20,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x821c3d64
	goto loc_821C3D64;
loc_821C3D5C:
	// stb r21,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r21.u8);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
loc_821C3D64:
	// bl 0x8236b048
	ctx.lr = 0x821C3D68;
	sub_8236B048(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c3e0c
	if (ctx.cr6.eq) goto loc_821C3E0C;
loc_821C3D70:
	// lwz r11,-12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c3dc0
	if (ctx.cr6.eq) goto loc_821C3DC0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821c3dac
	if (ctx.cr6.eq) goto loc_821C3DAC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821c3e0c
	if (!ctx.cr6.eq) goto loc_821C3E0C;
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lfs f2,-8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lfs f3,-4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f1,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236b598
	ctx.lr = 0x821C3DA8;
	sub_8236B598(ctx, base);
	// b 0x821c3e0c
	goto loc_821C3E0C;
loc_821C3DAC:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lfsx f1,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c2ce0
	ctx.lr = 0x821C3DBC;
	sub_821C2CE0(ctx, base);
	// b 0x821c3e0c
	goto loc_821C3E0C;
loc_821C3DC0:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x821c3dd8
	if (ctx.cr6.eq) goto loc_821C3DD8;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_821C3DD8:
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x821C3DE8;
	sub_8236B4A0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r20,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r20.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821c3e08
	if (!ctx.cr6.eq) goto loc_821C3E08;
	// stb r21,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r21.u8);
loc_821C3E08:
	// bl 0x8236b048
	ctx.lr = 0x821C3E0C;
	sub_8236B048(ctx, base);
loc_821C3E0C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x821c3ce4
	if (!ctx.cr0.eq) goto loc_821C3CE4;
loc_821C3E1C:
	// lwz r11,3236(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3236);
	// lwz r8,3232(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3232);
	// lwz r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// beq cr6,0x821c3f40
	if (ctx.cr6.eq) goto loc_821C3F40;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_821C3E3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0a88
	ctx.lr = 0x821C3E44;
	sub_821C0A88(ctx, base);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c09f0
	ctx.lr = 0x821C3E58;
	sub_821C09F0(ctx, base);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c09f0
	ctx.lr = 0x821C3E64;
	sub_821C09F0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821c3e80
	if (!ctx.cr6.eq) goto loc_821C3E80;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c3e84
	if (!ctx.cr6.eq) goto loc_821C3E84;
loc_821C3E80:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_821C3E84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c3f1c
	if (ctx.cr6.eq) goto loc_821C3F1C;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821c3ed0
	if (ctx.cr6.eq) goto loc_821C3ED0;
	// add r8,r27,r28
	ctx.r8.u64 = ctx.r27.u64 + ctx.r28.u64;
loc_821C3EB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821c3ed0
	if (!ctx.cr0.eq) goto loc_821C3ED0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821c3eb0
	if (!ctx.cr6.eq) goto loc_821C3EB0;
loc_821C3ED0:
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r30,r11,r10
	temp.u8 = (~ctx.r11.u32 + ctx.r10.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8236b4a0
	ctx.lr = 0x821C3EE8;
	sub_8236B4A0(ctx, base);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821c3f08
	if (ctx.cr6.eq) goto loc_821C3F08;
	// stb r20,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r20.u8);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// b 0x821c3f10
	goto loc_821C3F10;
loc_821C3F08:
	// stb r21,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_821C3F10:
	// bl 0x8236b048
	ctx.lr = 0x821C3F14;
	sub_8236B048(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c3f2c
	if (ctx.cr6.eq) goto loc_821C3F2C;
loc_821C3F1C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0e20
	ctx.lr = 0x821C3F2C;
	sub_821C0E20(ctx, base);
loc_821C3F2C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// add r9,r26,r28
	ctx.r9.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x821c3e3c
	if (!ctx.cr0.eq) goto loc_821C3E3C;
loc_821C3F40:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,8(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8236b3c0
	ctx.lr = 0x821C3F58;
	sub_8236B3C0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821c0630
	ctx.lr = 0x821C3F60;
	sub_821C0630(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C3F6C"))) PPC_WEAK_FUNC(sub_821C3F6C);
PPC_FUNC_IMPL(__imp__sub_821C3F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C3F70"))) PPC_WEAK_FUNC(sub_821C3F70);
PPC_FUNC_IMPL(__imp__sub_821C3F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821C3F78;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821c3fc0
	if (ctx.cr6.eq) goto loc_821C3FC0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821C3FA0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821c3fa0
	if (!ctx.cr0.eq) goto loc_821C3FA0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_821C3FC0:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82358008
	ctx.lr = 0x821C3FCC;
	sub_82358008(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c3ff4
	if (!ctx.cr6.eq) goto loc_821C3FF4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c0630
	ctx.lr = 0x821C3FE0;
	sub_821C0630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_821C3FF4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r28,r11,-20656
	ctx.r28.s64 = ctx.r11.s64 + -20656;
	// lwz r11,3228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3228);
	// lwz r10,3224(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4120
	if (ctx.cr6.eq) goto loc_821C4120;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r10,16
	ctx.r31.s64 = ctx.r10.s64 + 16;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
loc_821C402C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821c4048
	if (!ctx.cr6.eq) goto loc_821C4048;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c404c
	if (!ctx.cr6.eq) goto loc_821C404C;
loc_821C4048:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821C404C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4094
	if (ctx.cr6.eq) goto loc_821C4094;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// bl 0x821c2c10
	ctx.lr = 0x821C4068;
	sub_821C2C10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4084
	if (ctx.cr6.eq) goto loc_821C4084;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c4088
	if (!ctx.cr6.eq) goto loc_821C4088;
loc_821C4084:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821C4088:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4110
	if (ctx.cr6.eq) goto loc_821C4110;
loc_821C4094:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c40e4
	if (ctx.cr6.eq) goto loc_821C40E4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821c40d0
	if (ctx.cr6.eq) goto loc_821C40D0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821c4110
	if (!ctx.cr6.eq) goto loc_821C4110;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// lfs f1,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lfs f2,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x8236ac80
	ctx.lr = 0x821C40CC;
	sub_8236AC80(ctx, base);
	// b 0x821c4110
	goto loc_821C4110;
loc_821C40D0:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821c2ae0
	ctx.lr = 0x821C40E0;
	sub_821C2AE0(ctx, base);
	// b 0x821c4110
	goto loc_821C4110;
loc_821C40E4:
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x821c2c10
	ctx.lr = 0x821C40F0;
	sub_821C2C10(ctx, base);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c4104
	if (ctx.cr6.eq) goto loc_821C4104;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x821c4108
	goto loc_821C4108;
loc_821C4104:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_821C4108:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// stfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
loc_821C4110:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821c402c
	if (!ctx.cr0.eq) goto loc_821C402C;
loc_821C4120:
	// lwz r11,3236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3236);
	// lwz r9,3232(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3232);
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4214
	if (ctx.cr6.eq) goto loc_821C4214;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_821C413C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0a88
	ctx.lr = 0x821C4144;
	sub_821C0A88(ctx, base);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c09f0
	ctx.lr = 0x821C4158;
	sub_821C09F0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821c4174
	if (!ctx.cr6.eq) goto loc_821C4174;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c4178
	if (!ctx.cr6.eq) goto loc_821C4178;
loc_821C4174:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821C4178:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c41f4
	if (ctx.cr6.eq) goto loc_821C41F4;
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x821C419C;
	sub_8236A7A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c41e4
	if (ctx.cr6.eq) goto loc_821C41E4;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a490
	ctx.lr = 0x821C41BC;
	sub_8236A490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c41e4
	if (ctx.cr6.eq) goto loc_821C41E4;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r29,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821c41e8
	if (!ctx.cr6.eq) goto loc_821C41E8;
loc_821C41E4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821C41E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4204
	if (ctx.cr6.eq) goto loc_821C4204;
loc_821C41F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c1270
	ctx.lr = 0x821C4204;
	sub_821C1270(ctx, base);
loc_821C4204:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r10,r28,r26
	ctx.r10.u64 = ctx.r28.u64 + ctx.r26.u64;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x821c413c
	if (!ctx.cr0.eq) goto loc_821C413C;
loc_821C4214:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8236a958
	ctx.lr = 0x821C4230;
	sub_8236A958(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r31,32(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// bl 0x821c0630
	ctx.lr = 0x821C4248;
	sub_821C0630(ctx, base);
	// cntlzw r8,r31
	ctx.r8.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C4264"))) PPC_WEAK_FUNC(sub_821C4264);
PPC_FUNC_IMPL(__imp__sub_821C4264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C4268"))) PPC_WEAK_FUNC(sub_821C4268);
PPC_FUNC_IMPL(__imp__sub_821C4268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821C4270;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c42e4
	if (!ctx.cr6.eq) goto loc_821C42E4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821c42e4
	if (ctx.cr6.eq) goto loc_821C42E4;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8236a338
	ctx.lr = 0x821C4298;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c42ac
	if (ctx.cr6.eq) goto loc_821C42AC;
	// bl 0x821c3600
	ctx.lr = 0x821C42A4;
	sub_821C3600(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821c42b0
	goto loc_821C42B0;
loc_821C42AC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821C42B0:
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,-20656
	ctx.r10.s64 = ctx.r11.s64 + -20656;
	// lwz r11,3228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3228);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,3240(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3240);
	// bl 0x8233e4e0
	ctx.lr = 0x821C42D4;
	sub_8233E4E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8233e4e0
	ctx.lr = 0x821C42E4;
	sub_8233E4E0(ctx, base);
loc_821C42E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C42EC"))) PPC_WEAK_FUNC(sub_821C42EC);
PPC_FUNC_IMPL(__imp__sub_821C42EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C42F0"))) PPC_WEAK_FUNC(sub_821C42F0);
PPC_FUNC_IMPL(__imp__sub_821C42F0) {
	PPC_FUNC_PROLOGUE();
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x8233e2c0
	sub_8233E2C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C42FC"))) PPC_WEAK_FUNC(sub_821C42FC);
PPC_FUNC_IMPL(__imp__sub_821C42FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C4300"))) PPC_WEAK_FUNC(sub_821C4300);
PPC_FUNC_IMPL(__imp__sub_821C4300) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-25416
	ctx.r10.s64 = ctx.r11.s64 + -25416;
	// stb r30,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r30.u8);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8235d540
	ctx.lr = 0x821C4338;
	sub_8235D540(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r6,r9,31376
	ctx.r6.s64 = ctx.r9.s64 + 31376;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r5,r8,-25384
	ctx.r5.s64 = ctx.r8.s64 + -25384;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// addi r4,r7,-25364
	ctx.r4.s64 = ctx.r7.s64 + -25364;
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// addi r3,r31,1100
	ctx.r3.s64 = ctx.r31.s64 + 1100;
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// lfs f0,48(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r30.u32);
	// stfs f0,1084(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1084, temp.u32);
	// stw r30,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r30.u32);
	// stfs f0,1088(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1088, temp.u32);
	// stw r30,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r30.u32);
	// bl 0x821bf4f8
	ctx.lr = 0x821C4388;
	sub_821BF4F8(ctx, base);
	// addi r3,r31,2176
	ctx.r3.s64 = ctx.r31.s64 + 2176;
	// li r5,1020
	ctx.r5.s64 = 1020;
	// stw r30,3196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3196, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x821C439C;
	sub_8233EAF0(ctx, base);
	// addi r3,r31,3200
	ctx.r3.s64 = ctx.r31.s64 + 3200;
	// bl 0x82370d30
	ctx.lr = 0x821C43A4;
	sub_82370D30(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r30,3204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3204, ctx.r30.u32);
	// addi r3,r31,3268
	ctx.r3.s64 = ctx.r31.s64 + 3268;
	// addi r10,r11,-25596
	ctx.r10.s64 = ctx.r11.s64 + -25596;
	// stw r30,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r30.u32);
	// stw r30,3212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3212, ctx.r30.u32);
	// stw r10,3200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3200, ctx.r10.u32);
	// stw r30,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r30.u32);
	// stw r30,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r30.u32);
	// stw r30,3224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3224, ctx.r30.u32);
	// stw r30,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r30.u32);
	// stw r30,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r30.u32);
	// stw r30,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r30.u32);
	// stw r30,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r30.u32);
	// stw r30,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r30.u32);
	// stw r30,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r30.u32);
	// stw r30,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r30.u32);
	// stw r30,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r30.u32);
	// stw r30,3260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3260, ctx.r30.u32);
	// stw r30,3264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3264, ctx.r30.u32);
	// bl 0x82372150
	ctx.lr = 0x821C43F8;
	sub_82372150(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-25548
	ctx.r8.s64 = ctx.r9.s64 + -25548;
	// stw r8,3268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3268, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_821C4440"))) PPC_WEAK_FUNC(sub_821C4440);
PPC_FUNC_IMPL(__imp__sub_821C4440) {
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
	// bl 0x823721a0
	ctx.lr = 0x821C4460;
	sub_823721A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4480
	if (ctx.cr6.eq) goto loc_821C4480;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c4480
	if (ctx.cr6.eq) goto loc_821C4480;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821C4480;
	sub_82080000(ctx, base);
loc_821C4480:
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

__attribute__((alias("__imp__sub_821C449C"))) PPC_WEAK_FUNC(sub_821C449C);
PPC_FUNC_IMPL(__imp__sub_821C449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C44A0"))) PPC_WEAK_FUNC(sub_821C44A0);
PPC_FUNC_IMPL(__imp__sub_821C44A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821C44A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-20656
	ctx.r31.s64 = ctx.r11.s64 + -20656;
	// lwz r11,3224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c44cc
	if (ctx.cr6.eq) goto loc_821C44CC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821C44CC;
	sub_82080000(ctx, base);
loc_821C44CC:
	// lwz r11,3244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c44e4
	if (ctx.cr6.eq) goto loc_821C44E4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821C44E4;
	sub_82080000(ctx, base);
loc_821C44E4:
	// lwz r11,3256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c44fc
	if (ctx.cr6.eq) goto loc_821C44FC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821C44FC;
	sub_82080000(ctx, base);
loc_821C44FC:
	// addi r3,r31,3268
	ctx.r3.s64 = ctx.r31.s64 + 3268;
	// bl 0x823721a0
	ctx.lr = 0x821C4504;
	sub_823721A0(ctx, base);
	// addi r3,r31,3200
	ctx.r3.s64 = ctx.r31.s64 + 3200;
	// bl 0x82370d30
	ctx.lr = 0x821C450C;
	sub_82370D30(ctx, base);
	// li r29,255
	ctx.r29.s64 = 255;
	// addi r30,r31,2176
	ctx.r30.s64 = ctx.r31.s64 + 2176;
loc_821C4514:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c452c
	if (ctx.cr6.eq) goto loc_821C452C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821C452C;
	sub_82080000(ctx, base);
loc_821C452C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821c4514
	if (!ctx.cr0.eq) goto loc_821C4514;
	// addi r3,r31,1100
	ctx.r3.s64 = ctx.r31.s64 + 1100;
	// bl 0x821bf710
	ctx.lr = 0x821C4540;
	sub_821BF710(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-25384
	ctx.r11.s64 = ctx.r11.s64 + -25384;
	// addi r10,r10,-25364
	ctx.r10.s64 = ctx.r10.s64 + -25364;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x821c5480
	ctx.lr = 0x821C4560;
	sub_821C5480(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x821c5480
	ctx.lr = 0x821C4568;
	sub_821C5480(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8235d540
	ctx.lr = 0x821C4570;
	sub_8235D540(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82358bc0
	ctx.lr = 0x821C4578;
	sub_82358BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C4580"))) PPC_WEAK_FUNC(sub_821C4580);
PPC_FUNC_IMPL(__imp__sub_821C4580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821C4588;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821c4628
	if (ctx.cr6.eq) goto loc_821C4628;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_821C45B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c1ff8
	ctx.lr = 0x821C45B8;
	sub_821C1FF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c45d8
	if (ctx.cr6.eq) goto loc_821C45D8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821c45d8
	if (ctx.cr6.eq) goto loc_821C45D8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x821c45dc
	if (!ctx.cr6.eq) goto loc_821C45DC;
loc_821C45D8:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_821C45DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821c45f8
	if (ctx.cr6.eq) goto loc_821C45F8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821c45fc
	if (!ctx.cr6.eq) goto loc_821C45FC;
loc_821C45F8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821C45FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c460c
	if (ctx.cr6.eq) goto loc_821C460C;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_821C460C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4710
	if (ctx.cr6.eq) goto loc_821C4710;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x821c45b0
	if (ctx.cr6.lt) goto loc_821C45B0;
loc_821C4628:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// addi r31,r11,-20656
	ctx.r31.s64 = ctx.r11.s64 + -20656;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r3,r29,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r29,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r29.u32);
	// ble cr6,0x821c4650
	if (!ctx.cr6.gt) goto loc_821C4650;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821C4650:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821C4660;
	sub_82082030(ctx, base);
	// stw r3,3224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3224, ctx.r3.u32);
	// lwz r11,3228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3228);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x8233e4e0
	ctx.lr = 0x821C4674;
	sub_8233E4E0(ctx, base);
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// stw r27,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r27.u32);
	// mulli r3,r27,28
	ctx.r3.s64 = ctx.r27.s64 * 28;
	// ori r10,r11,37449
	ctx.r10.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821c4690
	if (!ctx.cr6.gt) goto loc_821C4690;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821C4690:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821C46A0;
	sub_82082030(ctx, base);
	// stw r3,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r3.u32);
	// lwz r11,3236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mulli r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 * 28;
	// bl 0x8233e4e0
	ctx.lr = 0x821C46B4;
	sub_8233E4E0(ctx, base);
	// lwz r11,3236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4704
	if (ctx.cr6.eq) goto loc_821C4704;
	// lwz r10,3232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3232);
	// li r9,0
	ctx.r9.s64 = 0;
loc_821C46CC:
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r31,3240
	ctx.r3.s64 = ctx.r31.s64 + 3240;
	// bl 0x821c09f0
	ctx.lr = 0x821C46D8;
	sub_821C09F0(ctx, base);
	// lwz r10,3232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3232);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x821c0a88
	ctx.lr = 0x821C46E4;
	sub_821C0A88(ctx, base);
	// lwz r11,3240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3240);
	// lwz r7,3236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821c46cc
	if (ctx.cr6.lt) goto loc_821C46CC;
loc_821C4704:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821C4710:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C471C"))) PPC_WEAK_FUNC(sub_821C471C);
PPC_FUNC_IMPL(__imp__sub_821C471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C4720"))) PPC_WEAK_FUNC(sub_821C4720);
PPC_FUNC_IMPL(__imp__sub_821C4720) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r30,r11,-20656
	ctx.r30.s64 = ctx.r11.s64 + -20656;
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4818
	if (ctx.cr6.eq) goto loc_821C4818;
	// bl 0x820cdf68
	ctx.lr = 0x821C4754;
	sub_820CDF68(ctx, base);
	// bl 0x8236f6f8
	ctx.lr = 0x821C4758;
	sub_8236F6F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821c4818
	if (ctx.cr6.eq) goto loc_821C4818;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-16888
	ctx.r31.s64 = ctx.r11.s64 + -16888;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c4780
	if (!ctx.cr6.eq) goto loc_821C4780;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x821cb8c8
	ctx.lr = 0x821C477C;
	sub_821CB8C8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_821C4780:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821c4798
	if (ctx.cr6.eq) goto loc_821C4798;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821c4798
	if (ctx.cr6.eq) goto loc_821C4798;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821c47a4
	if (!ctx.cr6.eq) goto loc_821C47A4;
loc_821C4798:
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x821cba60
	ctx.lr = 0x821C47A0;
	sub_821CBA60(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_821C47A4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821c47b4
	if (ctx.cr6.eq) goto loc_821C47B4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821c47bc
	if (!ctx.cr6.eq) goto loc_821C47BC;
loc_821C47B4:
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x821cbb98
	ctx.lr = 0x821C47BC;
	sub_821CBB98(ctx, base);
loc_821C47BC:
	// lbz r11,1140(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c47d4
	if (ctx.cr6.eq) goto loc_821C47D4;
	// addi r3,r30,1100
	ctx.r3.s64 = ctx.r30.s64 + 1100;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821bfbd8
	ctx.lr = 0x821C47D4;
	sub_821BFBD8(ctx, base);
loc_821C47D4:
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c47ec
	if (ctx.cr6.eq) goto loc_821C47EC;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821c9f00
	ctx.lr = 0x821C47EC;
	sub_821C9F00(ctx, base);
loc_821C47EC:
	// lwz r3,3220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4818
	if (ctx.cr6.eq) goto loc_821C4818;
	// bl 0x8230a6d0
	ctx.lr = 0x821C47FC;
	sub_8230A6D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821c4810
	if (ctx.cr6.eq) goto loc_821C4810;
	// addi r3,r30,3200
	ctx.r3.s64 = ctx.r30.s64 + 3200;
	// bl 0x821c2e00
	ctx.lr = 0x821C480C;
	sub_821C2E00(ctx, base);
	// b 0x821c4818
	goto loc_821C4818;
loc_821C4810:
	// lwz r3,3220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3220);
	// bl 0x82371358
	ctx.lr = 0x821C4818;
	sub_82371358(ctx, base);
loc_821C4818:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_821C4834"))) PPC_WEAK_FUNC(sub_821C4834);
PPC_FUNC_IMPL(__imp__sub_821C4834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C4838"))) PPC_WEAK_FUNC(sub_821C4838);
PPC_FUNC_IMPL(__imp__sub_821C4838) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x82082030
	ctx.lr = 0x821C4850;
	sub_82082030(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,26208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26208, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4870"))) PPC_WEAK_FUNC(sub_821C4870);
PPC_FUNC_IMPL(__imp__sub_821C4870) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821C488C;
	sub_82082030(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,26208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26208, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C48AC"))) PPC_WEAK_FUNC(sub_821C48AC);
PPC_FUNC_IMPL(__imp__sub_821C48AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C48B0"))) PPC_WEAK_FUNC(sub_821C48B0);
PPC_FUNC_IMPL(__imp__sub_821C48B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821C48B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821c48f8
	if (!ctx.cr6.eq) goto loc_821C48F8;
	// bl 0x82082030
	ctx.lr = 0x821C48E0;
	sub_82082030(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,26208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26208, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C48F8:
	// bl 0x82082030
	ctx.lr = 0x821C48FC;
	sub_82082030(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r11,r8,2
	ctx.r11.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// lwz r10,26208(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26208);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,26208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26208, ctx.r10.u32);
	// blt cr6,0x821c4924
	if (ctx.cr6.lt) goto loc_821C4924;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821C4924:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821C4934;
	sub_8233E4E0(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821C4940;
	sub_82080000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C494C"))) PPC_WEAK_FUNC(sub_821C494C);
PPC_FUNC_IMPL(__imp__sub_821C494C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C4950"))) PPC_WEAK_FUNC(sub_821C4950);
PPC_FUNC_IMPL(__imp__sub_821C4950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821C4958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821c4998
	if (!ctx.cr6.eq) goto loc_821C4998;
	// bl 0x82082030
	ctx.lr = 0x821C4980;
	sub_82082030(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,26208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26208, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C4998:
	// bl 0x82082030
	ctx.lr = 0x821C499C;
	sub_82082030(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r11,r8,2
	ctx.r11.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// lwz r10,26208(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26208);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,26208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26208, ctx.r10.u32);
	// blt cr6,0x821c49c4
	if (ctx.cr6.lt) goto loc_821C49C4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821C49C4:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821C49D4;
	sub_8233E4E0(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821C49E0;
	sub_82080000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C49EC"))) PPC_WEAK_FUNC(sub_821C49EC);
PPC_FUNC_IMPL(__imp__sub_821C49EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C49F0"))) PPC_WEAK_FUNC(sub_821C49F0);
PPC_FUNC_IMPL(__imp__sub_821C49F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821C49F8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa38
	ctx.lr = 0x821C4A00;
	__savefpr_28(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821c4ee0
	ctx.lr = 0x821C4A28;
	sub_821C4EE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x821c5238
	ctx.lr = 0x821C4A34;
	sub_821C5238(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c4aac
	if (!ctx.cr6.eq) goto loc_821C4AAC;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8236a338
	ctx.lr = 0x821C4A44;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4a60
	if (ctx.cr6.eq) goto loc_821C4A60;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25528
	ctx.r10.s64 = ctx.r11.s64 + -25528;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821c4a64
	goto loc_821C4A64;
loc_821C4A60:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821C4A64:
	// bl 0x821c4ee0
	ctx.lr = 0x821C4A68;
	sub_821C4EE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C4A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821c4aac
	if (!ctx.cr6.eq) goto loc_821C4AAC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c4aac
	if (ctx.cr6.eq) goto loc_821C4AAC;
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
	ctx.lr = 0x821C4AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C4AAC:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8236a338
	ctx.lr = 0x821C4AB4;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4ad0
	if (ctx.cr6.eq) goto loc_821C4AD0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25516
	ctx.r10.s64 = ctx.r11.s64 + -25516;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821c4ad4
	goto loc_821C4AD4;
loc_821C4AD0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821C4AD4:
	// bl 0x821c4d90
	ctx.lr = 0x821C4AD8;
	sub_821C4D90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82358088
	ctx.lr = 0x821C4AE0;
	sub_82358088(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8236a338
	ctx.lr = 0x821C4AE8;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4b04
	if (ctx.cr6.eq) goto loc_821C4B04;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25504
	ctx.r10.s64 = ctx.r11.s64 + -25504;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821c4b08
	goto loc_821C4B08;
loc_821C4B04:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821C4B08:
	// bl 0x821c4e38
	ctx.lr = 0x821C4B0C;
	sub_821C4E38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823580d0
	ctx.lr = 0x821C4B14;
	sub_823580D0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8236a338
	ctx.lr = 0x821C4B1C;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4b38
	if (ctx.cr6.eq) goto loc_821C4B38;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25492
	ctx.r10.s64 = ctx.r11.s64 + -25492;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821c4b3c
	goto loc_821C4B3C;
loc_821C4B38:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821C4B3C:
	// bl 0x821c3150
	ctx.lr = 0x821C4B40;
	sub_821C3150(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82371730
	ctx.lr = 0x821C4B48;
	sub_82371730(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371f58
	ctx.lr = 0x821C4B50;
	sub_82371F58(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,-20656
	ctx.r30.s64 = ctx.r10.s64 + -20656;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,514
	ctx.r3.s64 = 514;
	// stb r11,3304(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3304, ctx.r11.u8);
	// bl 0x822b1598
	ctx.lr = 0x821C4B70;
	sub_822B1598(ctx, base);
	// bl 0x820cdf68
	ctx.lr = 0x821C4B74;
	sub_820CDF68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4bf8
	if (ctx.cr6.eq) goto loc_821C4BF8;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4bec
	if (ctx.cr6.eq) goto loc_821C4BEC;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8236a338
	ctx.lr = 0x821C4B94;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4ba8
	if (ctx.cr6.eq) goto loc_821C4BA8;
	// bl 0x8236cff8
	ctx.lr = 0x821C4BA0;
	sub_8236CFF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821c4bac
	goto loc_821C4BAC;
loc_821C4BA8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821C4BAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8236c318
	ctx.lr = 0x821C4BB8;
	sub_8236C318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8236c320
	ctx.lr = 0x821C4BCC;
	sub_8236C320(ctx, base);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C4BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C4BEC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370348
	ctx.lr = 0x821C4BF8;
	sub_82370348(ctx, base);
loc_821C4BF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// bl 0x8236bc50
	ctx.lr = 0x821C4C08;
	sub_8236BC50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c5400
	ctx.lr = 0x821C4C10;
	sub_821C5400(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa84
	ctx.lr = 0x821C4C1C;
	__restfpr_28(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C4C20"))) PPC_WEAK_FUNC(sub_821C4C20);
PPC_FUNC_IMPL(__imp__sub_821C4C20) {
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
	// addi r9,r11,-25540
	ctx.r9.s64 = ctx.r11.s64 + -25540;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821c4c54
	if (ctx.cr6.eq) goto loc_821C4C54;
	// bl 0x8236a3f0
	ctx.lr = 0x821C4C50;
	sub_8236A3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C4C54:
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

__attribute__((alias("__imp__sub_821C4C68"))) PPC_WEAK_FUNC(sub_821C4C68);
PPC_FUNC_IMPL(__imp__sub_821C4C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821C4C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r30,r11,-20656
	ctx.r30.s64 = ctx.r11.s64 + -20656;
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4d88
	if (ctx.cr6.eq) goto loc_821C4D88;
	// bl 0x820cdf68
	ctx.lr = 0x821C4C8C;
	sub_820CDF68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236f6f8
	ctx.lr = 0x821C4C94;
	sub_8236F6F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821c4cac
	if (!ctx.cr6.eq) goto loc_821C4CAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236fae0
	ctx.lr = 0x821C4CA4;
	sub_8236FAE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821C4CAC:
	// lbz r11,3304(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c4d68
	if (!ctx.cr6.eq) goto loc_821C4D68;
	// bl 0x820cdf68
	ctx.lr = 0x821C4CBC;
	sub_820CDF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236fcd8
	ctx.lr = 0x821C4CC8;
	sub_8236FCD8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8236be50
	ctx.lr = 0x821C4CD0;
	sub_8236BE50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x821C4CDC;
	sub_821C0630(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r29,r11,-25356
	ctx.r29.s64 = ctx.r11.s64 + -25356;
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x8233cc00
	ctx.lr = 0x821C4D00;
	sub_8233CC00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4d28
	if (ctx.cr6.eq) goto loc_821C4D28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r8,7(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lbz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// bl 0x8233cc00
	ctx.lr = 0x821C4D28;
	sub_8233CC00(ctx, base);
loc_821C4D28:
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8236a338
	ctx.lr = 0x821C4D30;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4d40
	if (ctx.cr6.eq) goto loc_821C4D40;
	// bl 0x82375490
	ctx.lr = 0x821C4D3C;
	sub_82375490(ctx, base);
	// b 0x821c4d44
	goto loc_821C4D44;
loc_821C4D40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C4D44:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-16888
	ctx.r31.s64 = ctx.r11.s64 + -16888;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// bl 0x82375120
	ctx.lr = 0x821C4D58;
	sub_82375120(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// stb r10,3304(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3304, ctx.r10.u8);
loc_821C4D68:
	// bl 0x820cdf68
	ctx.lr = 0x821C4D6C;
	sub_820CDF68(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,26208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26208, ctx.r11.u32);
	// bl 0x8236f770
	ctx.lr = 0x821C4D80;
	sub_8236F770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236f7e0
	ctx.lr = 0x821C4D88;
	sub_8236F7E0(ctx, base);
loc_821C4D88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C4D90"))) PPC_WEAK_FUNC(sub_821C4D90);
PPC_FUNC_IMPL(__imp__sub_821C4D90) {
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
	// lwz r3,23820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23820);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c4e1c
	if (!ctx.cr6.eq) goto loc_821C4E1C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8236a338
	ctx.lr = 0x821C4DBC;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4e0c
	if (ctx.cr6.eq) goto loc_821C4E0C;
	// bl 0x82358118
	ctx.lr = 0x821C4DC8;
	sub_82358118(ctx, base);
	// stw r3,23820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23820, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4e14
	if (ctx.cr6.eq) goto loc_821C4E14;
	// bl 0x820cde50
	ctx.lr = 0x821C4DD8;
	sub_820CDE50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,20792
	ctx.r4.s64 = ctx.r11.s64 + 20792;
	// bl 0x820cdd40
	ctx.lr = 0x821C4DE4;
	sub_820CDD40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c4e18
	if (!ctx.cr6.eq) goto loc_821C4E18;
	// lwz r30,23820(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23820);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c4e0c
	if (ctx.cr6.eq) goto loc_821C4E0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371778
	ctx.lr = 0x821C4E04;
	sub_82371778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x821C4E0C;
	sub_8236A3F0(ctx, base);
loc_821C4E0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23820, ctx.r11.u32);
loc_821C4E14:
	// bl 0x82247498
	ctx.lr = 0x821C4E18;
	sub_82247498(ctx, base);
loc_821C4E18:
	// lwz r3,23820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23820);
loc_821C4E1C:
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

__attribute__((alias("__imp__sub_821C4E34"))) PPC_WEAK_FUNC(sub_821C4E34);
PPC_FUNC_IMPL(__imp__sub_821C4E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C4E38"))) PPC_WEAK_FUNC(sub_821C4E38);
PPC_FUNC_IMPL(__imp__sub_821C4E38) {
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
	// lwz r3,23824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c4ec4
	if (!ctx.cr6.eq) goto loc_821C4EC4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8236a338
	ctx.lr = 0x821C4E64;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4eb4
	if (ctx.cr6.eq) goto loc_821C4EB4;
	// bl 0x82358118
	ctx.lr = 0x821C4E70;
	sub_82358118(ctx, base);
	// stw r3,23824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23824, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4ebc
	if (ctx.cr6.eq) goto loc_821C4EBC;
	// bl 0x820cde50
	ctx.lr = 0x821C4E80;
	sub_820CDE50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,20880
	ctx.r4.s64 = ctx.r11.s64 + 20880;
	// bl 0x820cdd40
	ctx.lr = 0x821C4E8C;
	sub_820CDD40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c4ec0
	if (!ctx.cr6.eq) goto loc_821C4EC0;
	// lwz r30,23824(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23824);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c4eb4
	if (ctx.cr6.eq) goto loc_821C4EB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371778
	ctx.lr = 0x821C4EAC;
	sub_82371778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x821C4EB4;
	sub_8236A3F0(ctx, base);
loc_821C4EB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23824, ctx.r11.u32);
loc_821C4EBC:
	// bl 0x82247498
	ctx.lr = 0x821C4EC0;
	sub_82247498(ctx, base);
loc_821C4EC0:
	// lwz r3,23824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23824);
loc_821C4EC4:
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

__attribute__((alias("__imp__sub_821C4EDC"))) PPC_WEAK_FUNC(sub_821C4EDC);
PPC_FUNC_IMPL(__imp__sub_821C4EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C4EE0"))) PPC_WEAK_FUNC(sub_821C4EE0);
PPC_FUNC_IMPL(__imp__sub_821C4EE0) {
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
	// lwz r3,23828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23828);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c4f6c
	if (!ctx.cr6.eq) goto loc_821C4F6C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8236a338
	ctx.lr = 0x821C4F08;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4f5c
	if (ctx.cr6.eq) goto loc_821C4F5C;
	// bl 0x823587e0
	ctx.lr = 0x821C4F14;
	sub_823587E0(ctx, base);
	// stw r3,23828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23828, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4f64
	if (ctx.cr6.eq) goto loc_821C4F64;
	// bl 0x820cde50
	ctx.lr = 0x821C4F24;
	sub_820CDE50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,20968
	ctx.r4.s64 = ctx.r11.s64 + 20968;
	// bl 0x820cdd40
	ctx.lr = 0x821C4F30;
	sub_820CDD40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,23828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23828);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c4f6c
	if (!ctx.cr6.eq) goto loc_821C4F6C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4f5c
	if (ctx.cr6.eq) goto loc_821C4F5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C4F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C4F5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23828, ctx.r11.u32);
loc_821C4F64:
	// bl 0x82247498
	ctx.lr = 0x821C4F68;
	sub_82247498(ctx, base);
	// lwz r3,23828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23828);
loc_821C4F6C:
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

__attribute__((alias("__imp__sub_821C4F80"))) PPC_WEAK_FUNC(sub_821C4F80);
PPC_FUNC_IMPL(__imp__sub_821C4F80) {
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
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8236a338
	ctx.lr = 0x821C4F94;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4fb0
	if (ctx.cr6.eq) goto loc_821C4FB0;
	// bl 0x821c5e88
	ctx.lr = 0x821C4FA0;
	sub_821C5E88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821C4FB0:
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

__attribute__((alias("__imp__sub_821C4FC4"))) PPC_WEAK_FUNC(sub_821C4FC4);
PPC_FUNC_IMPL(__imp__sub_821C4FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C4FC8"))) PPC_WEAK_FUNC(sub_821C4FC8);
PPC_FUNC_IMPL(__imp__sub_821C4FC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,184
	ctx.r3.s64 = 184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4FD0"))) PPC_WEAK_FUNC(sub_821C4FD0);
PPC_FUNC_IMPL(__imp__sub_821C4FD0) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8236a338
	ctx.lr = 0x821C4FE8;
	sub_8236A338(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c5030
	if (ctx.cr6.eq) goto loc_821C5030;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82357e20
	ctx.lr = 0x821C4FFC;
	sub_82357E20(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-25568
	ctx.r9.s64 = ctx.r11.s64 + -25568;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x821c3730
	ctx.lr = 0x821C5018;
	sub_821C3730(ctx, base);
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
loc_821C5030:
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

__attribute__((alias("__imp__sub_821C5048"))) PPC_WEAK_FUNC(sub_821C5048);
PPC_FUNC_IMPL(__imp__sub_821C5048) {
	PPC_FUNC_PROLOGUE();
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C5050"))) PPC_WEAK_FUNC(sub_821C5050);
PPC_FUNC_IMPL(__imp__sub_821C5050) {
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
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8236a338
	ctx.lr = 0x821C5064;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c5080
	if (ctx.cr6.eq) goto loc_821C5080;
	// bl 0x821c5690
	ctx.lr = 0x821C5070;
	sub_821C5690(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821C5080:
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

__attribute__((alias("__imp__sub_821C5094"))) PPC_WEAK_FUNC(sub_821C5094);
PPC_FUNC_IMPL(__imp__sub_821C5094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5098"))) PPC_WEAK_FUNC(sub_821C5098);
PPC_FUNC_IMPL(__imp__sub_821C5098) {
	PPC_FUNC_PROLOGUE();
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C50A0"))) PPC_WEAK_FUNC(sub_821C50A0);
PPC_FUNC_IMPL(__imp__sub_821C50A0) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8236a338
	ctx.lr = 0x821C50B8;
	sub_8236A338(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c5114
	if (ctx.cr6.eq) goto loc_821C5114;
	// bl 0x82371838
	ctx.lr = 0x821C50C8;
	sub_82371838(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-25580
	ctx.r9.s64 = ctx.r11.s64 + -25580;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r8,-20656
	ctx.r7.s64 = ctx.r8.s64 + -20656;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,3264(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 3264);
	// bl 0x82082030
	ctx.lr = 0x821C50F8;
	sub_82082030(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
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
loc_821C5114:
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

__attribute__((alias("__imp__sub_821C512C"))) PPC_WEAK_FUNC(sub_821C512C);
PPC_FUNC_IMPL(__imp__sub_821C512C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5130"))) PPC_WEAK_FUNC(sub_821C5130);
PPC_FUNC_IMPL(__imp__sub_821C5130) {
	PPC_FUNC_PROLOGUE();
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C5138"))) PPC_WEAK_FUNC(sub_821C5138);
PPC_FUNC_IMPL(__imp__sub_821C5138) {
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
	// lis r30,-32183
	ctx.r30.s64 = -2109145088;
	// lwz r31,23820(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23820);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c5174
	if (ctx.cr6.eq) goto loc_821C5174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371778
	ctx.lr = 0x821C5164;
	sub_82371778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x821C516C;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23820, ctx.r11.u32);
loc_821C5174:
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

__attribute__((alias("__imp__sub_821C518C"))) PPC_WEAK_FUNC(sub_821C518C);
PPC_FUNC_IMPL(__imp__sub_821C518C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5190"))) PPC_WEAK_FUNC(sub_821C5190);
PPC_FUNC_IMPL(__imp__sub_821C5190) {
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
	// lis r30,-32183
	ctx.r30.s64 = -2109145088;
	// lwz r31,23824(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23824);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c51cc
	if (ctx.cr6.eq) goto loc_821C51CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371778
	ctx.lr = 0x821C51BC;
	sub_82371778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x821C51C4;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23824, ctx.r11.u32);
loc_821C51CC:
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

__attribute__((alias("__imp__sub_821C51E4"))) PPC_WEAK_FUNC(sub_821C51E4);
PPC_FUNC_IMPL(__imp__sub_821C51E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C51E8"))) PPC_WEAK_FUNC(sub_821C51E8);
PPC_FUNC_IMPL(__imp__sub_821C51E8) {
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
	// lwz r3,23828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23828);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c5224
	if (ctx.cr6.eq) goto loc_821C5224;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C521C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23828, ctx.r11.u32);
loc_821C5224:
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

__attribute__((alias("__imp__sub_821C5238"))) PPC_WEAK_FUNC(sub_821C5238);
PPC_FUNC_IMPL(__imp__sub_821C5238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c52b4
	if (ctx.cr6.eq) goto loc_821C52B4;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r10,r11,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c52b4
	if (ctx.cr6.eq) goto loc_821C52B4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_821C529C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c529c
	if (!ctx.cr6.eq) goto loc_821C529C;
loc_821C52B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C52BC"))) PPC_WEAK_FUNC(sub_821C52BC);
PPC_FUNC_IMPL(__imp__sub_821C52BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C52C0"))) PPC_WEAK_FUNC(sub_821C52C0);
PPC_FUNC_IMPL(__imp__sub_821C52C0) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821c52f8
	if (ctx.cr6.eq) goto loc_821C52F8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_821C52E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bbb8
	ctx.lr = 0x821C52EC;
	sub_8236BBB8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821c52e4
	if (!ctx.cr0.eq) goto loc_821C52E4;
loc_821C52F8:
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

__attribute__((alias("__imp__sub_821C5310"))) PPC_WEAK_FUNC(sub_821C5310);
PPC_FUNC_IMPL(__imp__sub_821C5310) {
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c52c0
	ctx.lr = 0x821C5330;
	sub_821C52C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x821C5338;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821C535C"))) PPC_WEAK_FUNC(sub_821C535C);
PPC_FUNC_IMPL(__imp__sub_821C535C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5360"))) PPC_WEAK_FUNC(sub_821C5360);
PPC_FUNC_IMPL(__imp__sub_821C5360) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821c5398
	if (ctx.cr6.eq) goto loc_821C5398;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_821C5384:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b838
	ctx.lr = 0x821C538C;
	sub_8236B838(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821c5384
	if (!ctx.cr0.eq) goto loc_821C5384;
loc_821C5398:
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

__attribute__((alias("__imp__sub_821C53B0"))) PPC_WEAK_FUNC(sub_821C53B0);
PPC_FUNC_IMPL(__imp__sub_821C53B0) {
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c5360
	ctx.lr = 0x821C53D0;
	sub_821C5360(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x821C53D8;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821C53FC"))) PPC_WEAK_FUNC(sub_821C53FC);
PPC_FUNC_IMPL(__imp__sub_821C53FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5400"))) PPC_WEAK_FUNC(sub_821C5400);
PPC_FUNC_IMPL(__imp__sub_821C5400) {
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821c5360
	ctx.lr = 0x821C5428;
	sub_821C5360(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8236a3f0
	ctx.lr = 0x821C5430;
	sub_8236A3F0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821c52c0
	ctx.lr = 0x821C5450;
	sub_821C52C0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8236a3f0
	ctx.lr = 0x821C5458;
	sub_8236A3F0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821C547C"))) PPC_WEAK_FUNC(sub_821C547C);
PPC_FUNC_IMPL(__imp__sub_821C547C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5480"))) PPC_WEAK_FUNC(sub_821C5480);
PPC_FUNC_IMPL(__imp__sub_821C5480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821C5488;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1020(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821c5500
	if (!ctx.cr6.gt) goto loc_821C5500;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821C54A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_821C54B0:
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
	// bne 0x821c54b0
	if (!ctx.cr0.eq) goto loc_821C54B0;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821c54ec
	if (!ctx.cr6.eq) goto loc_821C54EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C54EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C54EC:
	// lwz r11,1020(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1020);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821c54a8
	if (ctx.cr6.lt) goto loc_821C54A8;
loc_821C5500:
	// stw r28,1020(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1020, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C550C"))) PPC_WEAK_FUNC(sub_821C550C);
PPC_FUNC_IMPL(__imp__sub_821C550C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5510"))) PPC_WEAK_FUNC(sub_821C5510);
PPC_FUNC_IMPL(__imp__sub_821C5510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821C5518;
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
	// beq cr6,0x821c5568
	if (ctx.cr6.eq) goto loc_821C5568;
	// lwz r11,1020(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821c5568
	if (!ctx.cr6.gt) goto loc_821C5568;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821C5540:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8234e920
	ctx.lr = 0x821C5548;
	sub_8234E920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x821c5574
	if (ctx.cr6.eq) goto loc_821C5574;
	// lwz r11,1020(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1020);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821c5540
	if (ctx.cr6.lt) goto loc_821C5540;
loc_821C5568:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821C5574:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C5580"))) PPC_WEAK_FUNC(sub_821C5580);
PPC_FUNC_IMPL(__imp__sub_821C5580) {
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
	// bl 0x821c5510
	ctx.lr = 0x821C5598;
	sub_821C5510(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821c55b8
	if (!ctx.cr6.eq) goto loc_821C55B8;
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
loc_821C55B8:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
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

__attribute__((alias("__imp__sub_821C55D4"))) PPC_WEAK_FUNC(sub_821C55D4);
PPC_FUNC_IMPL(__imp__sub_821C55D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C55D8"))) PPC_WEAK_FUNC(sub_821C55D8);
PPC_FUNC_IMPL(__imp__sub_821C55D8) {
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
	// bl 0x821c5510
	ctx.lr = 0x821C55F0;
	sub_821C5510(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821c5678
	if (ctx.cr6.eq) goto loc_821C5678;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,1020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r10.u32);
	// bge cr6,0x821c5638
	if (!ctx.cr6.lt) goto loc_821C5638;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_821C5620:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r8,1020(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821c5620
	if (ctx.cr6.lt) goto loc_821C5620;
loc_821C5638:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_821C563C:
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
	// bne 0x821c563c
	if (!ctx.cr0.eq) goto loc_821C563C;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821c5678
	if (!ctx.cr6.eq) goto loc_821C5678;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C5678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C5678:
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

__attribute__((alias("__imp__sub_821C568C"))) PPC_WEAK_FUNC(sub_821C568C);
PPC_FUNC_IMPL(__imp__sub_821C568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5690"))) PPC_WEAK_FUNC(sub_821C5690);
PPC_FUNC_IMPL(__imp__sub_821C5690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821C5698;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8234ead0
	ctx.lr = 0x821C56A4;
	sub_8234EAD0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// addi r10,r11,-25480
	ctx.r10.s64 = ctx.r11.s64 + -25480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82357e20
	ctx.lr = 0x821C56C0;
	sub_82357E20(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r9,-25568
	ctx.r8.s64 = ctx.r9.s64 + -25568;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// bl 0x821c3730
	ctx.lr = 0x821C56DC;
	sub_821C3730(ctx, base);
	// stb r29,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r29.u8);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-20656
	ctx.r3.s64 = ctx.r7.s64 + -20656;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,3252(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3252);
	// bl 0x82082030
	ctx.lr = 0x821C56FC;
	sub_82082030(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c3730
	ctx.lr = 0x821C5708;
	sub_821C3730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C5714"))) PPC_WEAK_FUNC(sub_821C5714);
PPC_FUNC_IMPL(__imp__sub_821C5714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5718"))) PPC_WEAK_FUNC(sub_821C5718);
PPC_FUNC_IMPL(__imp__sub_821C5718) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-25480
	ctx.r9.s64 = ctx.r10.s64 + -25480;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821c5758
	if (ctx.cr6.eq) goto loc_821C5758;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821C5758;
	sub_82080000(ctx, base);
loc_821C5758:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x821c36a0
	ctx.lr = 0x821C5760;
	sub_821C36A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234eb08
	ctx.lr = 0x821C5768;
	sub_8234EB08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c5780
	if (ctx.cr6.eq) goto loc_821C5780;
	// bl 0x8236a3f0
	ctx.lr = 0x821C577C;
	sub_8236A3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C5780:
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

