#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820A8740"))) PPC_WEAK_FUNC(sub_820A8740);
PPC_FUNC_IMPL(__imp__sub_820A8740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A8748;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	ctx.lr = 0x820A876C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a87b8
	if (ctx.cr6.eq) goto loc_820A87B8;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r26,r11,20000
	ctx.r26.s64 = ctx.r11.s64 + 20000;
loc_820A8780:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r26,10704
	ctx.r3.s64 = ctx.r26.s64 + 10704;
	// bl 0x82141308
	ctx.lr = 0x820A8794;
	sub_82141308(ctx, base);
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
	ctx.lr = 0x820A87AC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a8780
	if (!ctx.cr6.eq) goto loc_820A8780;
loc_820A87B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A87C0"))) PPC_WEAK_FUNC(sub_820A87C0);
PPC_FUNC_IMPL(__imp__sub_820A87C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x820A87C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820A87EC;
	sub_82085870(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a88b0
	if (ctx.cr6.eq) goto loc_820A88B0;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r26,r11,20000
	ctx.r26.s64 = ctx.r11.s64 + 20000;
loc_820A8800:
	// lwz r28,392(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 392);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x820a888c
	if (ctx.cr6.eq) goto loc_820A888C;
	// cmpwi cr6,r28,2048
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2048, ctx.xer);
	// bge cr6,0x820a888c
	if (!ctx.cr6.lt) goto loc_820A888C;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x820a8860
	if (!ctx.cr6.eq) goto loc_820A8860;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r26,10704
	ctx.r10.s64 = ctx.r26.s64 + 10704;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820a8860
	if (!ctx.cr6.gt) goto loc_820A8860;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820A883C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821406b8
	ctx.lr = 0x820A884C;
	sub_821406B8(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,432
	ctx.r30.s64 = ctx.r30.s64 + 432;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820a883c
	if (ctx.cr6.lt) goto loc_820A883C;
loc_820A8860:
	// addi r10,r26,10704
	ctx.r10.s64 = ctx.r26.s64 + 10704;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820a888c
	if (!ctx.cr6.lt) goto loc_820A888C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r10,r25,432
	ctx.r10.s64 = ctx.r25.s64 * 432;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821406b8
	ctx.lr = 0x820A888C;
	sub_821406B8(ctx, base);
loc_820A888C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82085870
	ctx.lr = 0x820A88A4;
	sub_82085870(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a8800
	if (!ctx.cr6.eq) goto loc_820A8800;
loc_820A88B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A88B8"))) PPC_WEAK_FUNC(sub_820A88B8);
PPC_FUNC_IMPL(__imp__sub_820A88B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A88C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x820A88E4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8924
	if (ctx.cr6.eq) goto loc_820A8924;
loc_820A88F0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e2a98
	ctx.lr = 0x820A8900;
	sub_820E2A98(ctx, base);
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
	ctx.lr = 0x820A8918;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a88f0
	if (!ctx.cr6.eq) goto loc_820A88F0;
loc_820A8924:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A892C"))) PPC_WEAK_FUNC(sub_820A892C);
PPC_FUNC_IMPL(__imp__sub_820A892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8930"))) PPC_WEAK_FUNC(sub_820A8930);
PPC_FUNC_IMPL(__imp__sub_820A8930) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82087078
	ctx.lr = 0x820A8950;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a896c
	if (ctx.cr6.eq) goto loc_820A896C;
	// lfs f0,572(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,576(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x82172d60
	ctx.lr = 0x820A896C;
	sub_82172D60(ctx, base);
loc_820A896C:
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

__attribute__((alias("__imp__sub_820A8984"))) PPC_WEAK_FUNC(sub_820A8984);
PPC_FUNC_IMPL(__imp__sub_820A8984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8988"))) PPC_WEAK_FUNC(sub_820A8988);
PPC_FUNC_IMPL(__imp__sub_820A8988) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x82087078
	ctx.lr = 0x820A89A8;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a89bc
	if (ctx.cr6.eq) goto loc_820A89BC;
	// stfs f31,572(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 572, temp.u32);
	// stfs f30,576(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 576, temp.u32);
	// bl 0x82172d60
	ctx.lr = 0x820A89BC;
	sub_82172D60(ctx, base);
loc_820A89BC:
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

__attribute__((alias("__imp__sub_820A89D4"))) PPC_WEAK_FUNC(sub_820A89D4);
PPC_FUNC_IMPL(__imp__sub_820A89D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A89D8"))) PPC_WEAK_FUNC(sub_820A89D8);
PPC_FUNC_IMPL(__imp__sub_820A89D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x820A89E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r24,r11,1
	ctx.r24.u64 = ctx.r11.u64 | 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// ori r22,r10,6
	ctx.r22.u64 = ctx.r10.u64 | 6;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x820a8a2c
	if (!ctx.cr6.eq) goto loc_820A8A2C;
	// bl 0x820ddca8
	ctx.lr = 0x820A8A14;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8a24
	if (ctx.cr6.eq) goto loc_820A8A24;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a8a40
	goto loc_820A8A40;
loc_820A8A24:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a8a40
	goto loc_820A8A40;
loc_820A8A2C:
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x820a8a70
	if (!ctx.cr6.eq) goto loc_820A8A70;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a8d28
	if (ctx.cr6.eq) goto loc_820A8D28;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A8A40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a8a5c
	if (ctx.cr6.eq) goto loc_820A8A5C;
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
loc_820A8A5C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a8a68
	if (ctx.cr6.eq) goto loc_820A8A68;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_820A8A68:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x820a8a98
	goto loc_820A8A98;
loc_820A8A70:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a8a80
	if (!ctx.cr6.eq) goto loc_820A8A80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820a8a94
	goto loc_820A8A94;
loc_820A8A80:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A8A94;
	sub_820F3178(ctx, base);
loc_820A8A94:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_820A8A98:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820a8d28
	if (ctx.cr6.eq) goto loc_820A8D28;
	// bl 0x820ddca8
	ctx.lr = 0x820A8AA4;
	sub_820DDCA8(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r23,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a8abc
	if (ctx.cr6.eq) goto loc_820A8ABC;
	// lhz r5,178(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 178);
	// b 0x820a8ac0
	goto loc_820A8AC0;
loc_820A8ABC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_820A8AC0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f5598
	ctx.lr = 0x820A8AD0;
	sub_820F5598(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a8b30
	if (ctx.cr6.eq) goto loc_820A8B30;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8b30
	if (ctx.cr6.eq) goto loc_820A8B30;
	// lhz r11,178(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 178);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820a8b30
	if (!ctx.cr6.lt) goto loc_820A8B30;
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
	// beq cr6,0x820a8b30
	if (ctx.cr6.eq) goto loc_820A8B30;
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r27,r8,30,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820a8b30
	if (ctx.cr6.eq) goto loc_820A8B30;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820f1130
	ctx.lr = 0x820A8B30;
	sub_820F1130(ctx, base);
loc_820A8B30:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820a8b5c
	if (ctx.cr6.eq) goto loc_820A8B5C;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x820a8b5c
	if (ctx.cr6.eq) goto loc_820A8B5C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82087078
	ctx.lr = 0x820A8B4C;
	sub_82087078(ctx, base);
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820a8b5c
	if (!ctx.cr6.eq) goto loc_820A8B5C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820A8B5C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x820a8bb8
	if (ctx.cr6.eq) goto loc_820A8BB8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a8b9c
	if (ctx.cr6.eq) goto loc_820A8B9C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820e40c0
	ctx.lr = 0x820A8B7C;
	sub_820E40C0(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a8b9c
	if (ctx.cr6.eq) goto loc_820A8B9C;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x821d2a60
	ctx.lr = 0x820A8B90;
	sub_821D2A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// bl 0x8216ff88
	ctx.lr = 0x820A8B9C;
	sub_8216FF88(ctx, base);
loc_820A8B9C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820f07a0
	ctx.lr = 0x820A8BA4;
	sub_820F07A0(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a8bb8
	if (!ctx.cr6.eq) goto loc_820A8BB8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820f0810
	ctx.lr = 0x820A8BB8;
	sub_820F0810(ctx, base);
loc_820A8BB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a8bc8
	if (ctx.cr6.eq) goto loc_820A8BC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x820A8BC8;
	sub_82172D60(ctx, base);
loc_820A8BC8:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a8ce0
	if (ctx.cr6.eq) goto loc_820A8CE0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x820a8d28
	if (ctx.cr6.eq) goto loc_820A8D28;
	// lwz r26,224(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820a8ce0
	if (ctx.cr6.eq) goto loc_820A8CE0;
loc_820A8BE8:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820a8c00
	if (!ctx.cr6.eq) goto loc_820A8C00;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820A8BFC;
	sub_820F5F90(ctx, base);
	// stw r3,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r3.u32);
loc_820A8C00:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r3,28(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820a89d8
	ctx.lr = 0x820A8C18;
	sub_820A89D8(ctx, base);
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x820a8c44
	if (!ctx.cr6.eq) goto loc_820A8C44;
	// bl 0x820ddca8
	ctx.lr = 0x820A8C24;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8c38
	if (ctx.cr6.eq) goto loc_820A8C38;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x820a8c7c
	goto loc_820A8C7C;
loc_820A8C38:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x820a8c7c
	goto loc_820A8C7C;
loc_820A8C44:
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x820a8c54
	if (!ctx.cr6.eq) goto loc_820A8C54;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x820a8c7c
	goto loc_820A8C7C;
loc_820A8C54:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a8c64
	if (!ctx.cr6.eq) goto loc_820A8C64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820a8c78
	goto loc_820A8C78;
loc_820A8C64:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820A8C78;
	sub_820F3178(ctx, base);
loc_820A8C78:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_820A8C7C:
	// lwz r11,280(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x820a8cc8
	if (!ctx.cr6.eq) goto loc_820A8CC8;
	// lwz r30,228(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 228);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r28,160(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r29,80(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820a8cc8
	if (ctx.cr6.eq) goto loc_820A8CC8;
loc_820A8CA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820abe28
	ctx.lr = 0x820A8CB4;
	sub_820ABE28(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x820a8d0c
	if (ctx.cr6.eq) goto loc_820A8D0C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x820a8ca8
	if (ctx.cr6.lt) goto loc_820A8CA8;
loc_820A8CC8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820f08c8
	ctx.lr = 0x820A8CD4;
	sub_820F08C8(ctx, base);
loc_820A8CD4:
	// lwz r26,232(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 232);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x820a8be8
	if (!ctx.cr6.eq) goto loc_820A8BE8;
loc_820A8CE0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x820a8d28
	if (ctx.cr6.eq) goto loc_820A8D28;
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820a8d00
	if (!ctx.cr6.eq) goto loc_820A8D00;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820A8CFC;
	sub_820F5F90(ctx, base);
	// stw r3,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r3.u32);
loc_820A8D00:
	// lwz r3,28(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_820A8D0C:
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// beq cr6,0x820a8cc8
	if (ctx.cr6.eq) goto loc_820A8CC8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820e24f0
	ctx.lr = 0x820A8D24;
	sub_820E24F0(ctx, base);
	// b 0x820a8cd4
	goto loc_820A8CD4;
loc_820A8D28:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A8D34"))) PPC_WEAK_FUNC(sub_820A8D34);
PPC_FUNC_IMPL(__imp__sub_820A8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8D38"))) PPC_WEAK_FUNC(sub_820A8D38);
PPC_FUNC_IMPL(__imp__sub_820A8D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A8D40;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
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
	ctx.lr = 0x820A8D68;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8df4
	if (ctx.cr6.eq) goto loc_820A8DF4;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r29,-32171
	ctx.r29.s64 = -2108358656;
	// addi r30,r11,5280
	ctx.r30.s64 = ctx.r11.s64 + 5280;
loc_820A8D80:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a8db8
	if (ctx.cr6.eq) goto loc_820A8DB8;
	// lwz r11,5540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5540);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a8db0
	if (!ctx.cr6.eq) goto loc_820A8DB0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,5540(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5540, ctx.r11.u32);
	// bl 0x820e35f0
	ctx.lr = 0x820A8DB0;
	sub_820E35F0(ctx, base);
loc_820A8DB0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x820a8dbc
	goto loc_820A8DBC;
loc_820A8DB8:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_820A8DBC:
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// bge cr6,0x820a8dd0
	if (!ctx.cr6.lt) goto loc_820A8DD0;
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
loc_820A8DD0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82085870
	ctx.lr = 0x820A8DE8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a8d80
	if (!ctx.cr6.eq) goto loc_820A8D80;
loc_820A8DF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A8E00"))) PPC_WEAK_FUNC(sub_820A8E00);
PPC_FUNC_IMPL(__imp__sub_820A8E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A8E08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	ctx.lr = 0x820A8E24;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8eb4
	if (ctx.cr6.eq) goto loc_820A8EB4;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r27,-32171
	ctx.r27.s64 = -2108358656;
	// addi r28,r11,5280
	ctx.r28.s64 = ctx.r11.s64 + 5280;
loc_820A8E3C:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a8e74
	if (ctx.cr6.eq) goto loc_820A8E74;
	// lwz r11,5540(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5540);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a8e6c
	if (!ctx.cr6.eq) goto loc_820A8E6C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,5540(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5540, ctx.r11.u32);
	// bl 0x820e35f0
	ctx.lr = 0x820A8E6C;
	sub_820E35F0(ctx, base);
loc_820A8E6C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x820a8e78
	goto loc_820A8E78;
loc_820A8E74:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_820A8E78:
	// lis r10,-16512
	ctx.r10.s64 = -1082130432;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// li r6,258
	ctx.r6.s64 = 258;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bl 0x82085870
	ctx.lr = 0x820A8EA8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a8e3c
	if (!ctx.cr6.eq) goto loc_820A8E3C;
loc_820A8EB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A8EBC"))) PPC_WEAK_FUNC(sub_820A8EBC);
PPC_FUNC_IMPL(__imp__sub_820A8EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8EC0"))) PPC_WEAK_FUNC(sub_820A8EC0);
PPC_FUNC_IMPL(__imp__sub_820A8EC0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82087078
	ctx.lr = 0x820A8EE0;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8f04
	if (ctx.cr6.eq) goto loc_820A8F04;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820a8f00
	if (!ctx.cr6.lt) goto loc_820A8F00;
	// addi r11,r31,33
	ctx.r11.s64 = ctx.r31.s64 + 33;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
loc_820A8F00:
	// bl 0x82172d60
	ctx.lr = 0x820A8F04;
	sub_82172D60(ctx, base);
loc_820A8F04:
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

__attribute__((alias("__imp__sub_820A8F1C"))) PPC_WEAK_FUNC(sub_820A8F1C);
PPC_FUNC_IMPL(__imp__sub_820A8F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8F20"))) PPC_WEAK_FUNC(sub_820A8F20);
PPC_FUNC_IMPL(__imp__sub_820A8F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A8F28;
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
loc_820A8F4C:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820a8fa0
	if (!ctx.cr6.eq) goto loc_820A8FA0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a9038
	if (!ctx.cr6.eq) goto loc_820A9038;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820A8F64;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a8f70
	if (!ctx.cr6.eq) goto loc_820A8F70;
	// bl 0x821b3000
	ctx.lr = 0x820A8F70;
	sub_821B3000(ctx, base);
loc_820A8F70:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a8f98
	if (ctx.cr6.eq) goto loc_820A8F98;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a8f98
	if (ctx.cr6.eq) goto loc_820A8F98;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820a8fbc
	goto loc_820A8FBC;
loc_820A8F98:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a8fbc
	goto loc_820A8FBC;
loc_820A8FA0:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820a8fe8
	if (!ctx.cr6.eq) goto loc_820A8FE8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a9038
	if (ctx.cr6.eq) goto loc_820A9038;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a9038
	if (!ctx.cr6.eq) goto loc_820A9038;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A8FBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a8fd8
	if (ctx.cr6.eq) goto loc_820A8FD8;
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
loc_820A8FD8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a9014
	if (ctx.cr6.eq) goto loc_820A9014;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a9014
	goto loc_820A9014;
loc_820A8FE8:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820a8ff8
	if (!ctx.cr6.eq) goto loc_820A8FF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820a9010
	goto loc_820A9010;
loc_820A8FF8:
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
	ctx.lr = 0x820A9010;
	sub_820F3178(ctx, base);
loc_820A9010:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A9014:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9038
	if (ctx.cr6.eq) goto loc_820A9038;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a8f4c
	if (ctx.cr6.eq) goto loc_820A8F4C;
	// lwz r3,148(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820A9038:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A9044"))) PPC_WEAK_FUNC(sub_820A9044);
PPC_FUNC_IMPL(__imp__sub_820A9044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A9048"))) PPC_WEAK_FUNC(sub_820A9048);
PPC_FUNC_IMPL(__imp__sub_820A9048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820A9050;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82085870
	ctx.lr = 0x820A9080;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9134
	if (ctx.cr6.eq) goto loc_820A9134;
loc_820A908C:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9110
	if (ctx.cr6.eq) goto loc_820A9110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820A90A0;
	sub_820AC008(ctx, base);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a9110
	if (ctx.cr6.eq) goto loc_820A9110;
	// lwz r11,108(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// srawi r10,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 16;
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820a9110
	if (!ctx.cr6.lt) goto loc_820A9110;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820a9110
	if (!ctx.cr6.lt) goto loc_820A9110;
	// lwz r9,84(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mulli r11,r10,960
	ctx.r11.s64 = ctx.r10.s64 * 960;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820a90e8
	if (ctx.cr6.lt) goto loc_820A90E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x820a90f4
	goto loc_820A90F4;
loc_820A90E8:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_820A90F4:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e2c70
	ctx.lr = 0x820A9110;
	sub_820E2C70(ctx, base);
loc_820A9110:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82085870
	ctx.lr = 0x820A9128;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a908c
	if (!ctx.cr6.eq) goto loc_820A908C;
loc_820A9134:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A913C"))) PPC_WEAK_FUNC(sub_820A913C);
PPC_FUNC_IMPL(__imp__sub_820A913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A9140"))) PPC_WEAK_FUNC(sub_820A9140);
PPC_FUNC_IMPL(__imp__sub_820A9140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820A9148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x820A9168;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a91e8
	if (ctx.cr6.eq) goto loc_820A91E8;
loc_820A9174:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a91c4
	if (ctx.cr6.eq) goto loc_820A91C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820A9188;
	sub_820AC008(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a91c4
	if (ctx.cr6.eq) goto loc_820A91C4;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820a91c4
	if (!ctx.cr6.lt) goto loc_820A91C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820A91AC;
	sub_820E5B68(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a91c4
	if (ctx.cr6.eq) goto loc_820A91C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8218bdc0
	ctx.lr = 0x820A91C4;
	sub_8218BDC0(ctx, base);
loc_820A91C4:
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
	ctx.lr = 0x820A91DC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a9174
	if (!ctx.cr6.eq) goto loc_820A9174;
loc_820A91E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A91F0"))) PPC_WEAK_FUNC(sub_820A91F0);
PPC_FUNC_IMPL(__imp__sub_820A91F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A91F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
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
	ctx.lr = 0x820A921C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a92ac
	if (ctx.cr6.eq) goto loc_820A92AC;
loc_820A9228:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9288
	if (ctx.cr6.eq) goto loc_820A9288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820A923C;
	sub_820AC008(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9288
	if (ctx.cr6.eq) goto loc_820A9288;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820a9288
	if (!ctx.cr6.lt) goto loc_820A9288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820A9260;
	sub_820E5B68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9288
	if (ctx.cr6.eq) goto loc_820A9288;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// bne cr6,0x820a9284
	if (!ctx.cr6.eq) goto loc_820A9284;
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_820A9284:
	// stw r9,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r9.u32);
loc_820A9288:
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
	ctx.lr = 0x820A92A0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a9228
	if (!ctx.cr6.eq) goto loc_820A9228;
loc_820A92AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A92B4"))) PPC_WEAK_FUNC(sub_820A92B4);
PPC_FUNC_IMPL(__imp__sub_820A92B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A92B8"))) PPC_WEAK_FUNC(sub_820A92B8);
PPC_FUNC_IMPL(__imp__sub_820A92B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820A92C0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
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
	ctx.lr = 0x820A92E8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9328
	if (ctx.cr6.eq) goto loc_820A9328;
loc_820A92F4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e2d38
	ctx.lr = 0x820A9304;
	sub_820E2D38(ctx, base);
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
	ctx.lr = 0x820A931C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a92f4
	if (!ctx.cr6.eq) goto loc_820A92F4;
loc_820A9328:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A9334"))) PPC_WEAK_FUNC(sub_820A9334);
PPC_FUNC_IMPL(__imp__sub_820A9334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A9338"))) PPC_WEAK_FUNC(sub_820A9338);
PPC_FUNC_IMPL(__imp__sub_820A9338) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820A9360;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a93b4
	if (ctx.cr6.eq) goto loc_820A93B4;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a93b4
	if (ctx.cr6.eq) goto loc_820A93B4;
	// bl 0x820ac008
	ctx.lr = 0x820A937C;
	sub_820AC008(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a93b4
	if (ctx.cr6.eq) goto loc_820A93B4;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820a93b4
	if (!ctx.cr6.lt) goto loc_820A93B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820A93A0;
	sub_820E5B68(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a93b4
	if (ctx.cr6.eq) goto loc_820A93B4;
	// bl 0x820e6848
	ctx.lr = 0x820A93B0;
	sub_820E6848(ctx, base);
	// b 0x820a93c0
	goto loc_820A93C0;
loc_820A93B4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
loc_820A93C0:
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

__attribute__((alias("__imp__sub_820A93D8"))) PPC_WEAK_FUNC(sub_820A93D8);
PPC_FUNC_IMPL(__imp__sub_820A93D8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820A9400;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9458
	if (ctx.cr6.eq) goto loc_820A9458;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9458
	if (ctx.cr6.eq) goto loc_820A9458;
	// bl 0x820ac008
	ctx.lr = 0x820A941C;
	sub_820AC008(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9458
	if (ctx.cr6.eq) goto loc_820A9458;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820a9458
	if (!ctx.cr6.lt) goto loc_820A9458;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820A9440;
	sub_820E5B68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9458
	if (ctx.cr6.eq) goto loc_820A9458;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820a9464
	goto loc_820A9464;
loc_820A9458:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
loc_820A9464:
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

__attribute__((alias("__imp__sub_820A947C"))) PPC_WEAK_FUNC(sub_820A947C);
PPC_FUNC_IMPL(__imp__sub_820A947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A9480"))) PPC_WEAK_FUNC(sub_820A9480);
PPC_FUNC_IMPL(__imp__sub_820A9480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820A9488;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
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
	ctx.lr = 0x820A94B0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9528
	if (ctx.cr6.eq) goto loc_820A9528;
loc_820A94BC:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9504
	if (ctx.cr6.eq) goto loc_820A9504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820A94D0;
	sub_820AC008(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9504
	if (ctx.cr6.eq) goto loc_820A9504;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820a9504
	if (!ctx.cr6.lt) goto loc_820A9504;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820A94F4;
	sub_820E5B68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9504
	if (ctx.cr6.eq) goto loc_820A9504;
	// stfs f31,492(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
loc_820A9504:
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
	ctx.lr = 0x820A951C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a94bc
	if (!ctx.cr6.eq) goto loc_820A94BC;
loc_820A9528:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A9534"))) PPC_WEAK_FUNC(sub_820A9534);
PPC_FUNC_IMPL(__imp__sub_820A9534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A9538"))) PPC_WEAK_FUNC(sub_820A9538);
PPC_FUNC_IMPL(__imp__sub_820A9538) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820A955C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a95bc
	if (ctx.cr6.eq) goto loc_820A95BC;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a95bc
	if (ctx.cr6.eq) goto loc_820A95BC;
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a95bc
	if (ctx.cr6.eq) goto loc_820A95BC;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820a95bc
	if (!ctx.cr6.lt) goto loc_820A95BC;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a95bc
	if (ctx.cr6.eq) goto loc_820A95BC;
	// lfs f1,492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	ctx.f1.f64 = double(temp.f32);
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
loc_820A95BC:
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A95DC"))) PPC_WEAK_FUNC(sub_820A95DC);
PPC_FUNC_IMPL(__imp__sub_820A95DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A95E0"))) PPC_WEAK_FUNC(sub_820A95E0);
PPC_FUNC_IMPL(__imp__sub_820A95E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A95E8;
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
loc_820A9610:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820a9664
	if (!ctx.cr6.eq) goto loc_820A9664;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a9708
	if (!ctx.cr6.eq) goto loc_820A9708;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820A9628;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a9634
	if (!ctx.cr6.eq) goto loc_820A9634;
	// bl 0x821b3000
	ctx.lr = 0x820A9634;
	sub_821B3000(ctx, base);
loc_820A9634:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a965c
	if (ctx.cr6.eq) goto loc_820A965C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a965c
	if (ctx.cr6.eq) goto loc_820A965C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820a9680
	goto loc_820A9680;
loc_820A965C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a9680
	goto loc_820A9680;
loc_820A9664:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820a96ac
	if (!ctx.cr6.eq) goto loc_820A96AC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a9708
	if (ctx.cr6.eq) goto loc_820A9708;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a9708
	if (!ctx.cr6.eq) goto loc_820A9708;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A9680:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a969c
	if (ctx.cr6.eq) goto loc_820A969C;
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
loc_820A969C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a96d8
	if (ctx.cr6.eq) goto loc_820A96D8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a96d8
	goto loc_820A96D8;
loc_820A96AC:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820a96bc
	if (!ctx.cr6.eq) goto loc_820A96BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a96d8
	goto loc_820A96D8;
loc_820A96BC:
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
	ctx.lr = 0x820A96D4;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A96D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9708
	if (ctx.cr6.eq) goto loc_820A9708;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// beq cr6,0x820a96fc
	if (ctx.cr6.eq) goto loc_820A96FC;
	// rlwinm r9,r10,0,23,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r9,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r9.u32);
	// b 0x820a9610
	goto loc_820A9610;
loc_820A96FC:
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// stw r9,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r9.u32);
	// b 0x820a9610
	goto loc_820A9610;
loc_820A9708:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A9710"))) PPC_WEAK_FUNC(sub_820A9710);
PPC_FUNC_IMPL(__imp__sub_820A9710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A9718;
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
loc_820A9740:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820a9794
	if (!ctx.cr6.eq) goto loc_820A9794;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a9838
	if (!ctx.cr6.eq) goto loc_820A9838;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820A9758;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a9764
	if (!ctx.cr6.eq) goto loc_820A9764;
	// bl 0x821b3000
	ctx.lr = 0x820A9764;
	sub_821B3000(ctx, base);
loc_820A9764:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a978c
	if (ctx.cr6.eq) goto loc_820A978C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a978c
	if (ctx.cr6.eq) goto loc_820A978C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820a97b0
	goto loc_820A97B0;
loc_820A978C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a97b0
	goto loc_820A97B0;
loc_820A9794:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820a97dc
	if (!ctx.cr6.eq) goto loc_820A97DC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a9838
	if (ctx.cr6.eq) goto loc_820A9838;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a9838
	if (!ctx.cr6.eq) goto loc_820A9838;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A97B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a97cc
	if (ctx.cr6.eq) goto loc_820A97CC;
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
loc_820A97CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a9808
	if (ctx.cr6.eq) goto loc_820A9808;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a9808
	goto loc_820A9808;
loc_820A97DC:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820a97ec
	if (!ctx.cr6.eq) goto loc_820A97EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a9808
	goto loc_820A9808;
loc_820A97EC:
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
	ctx.lr = 0x820A9804;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A9808:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9838
	if (ctx.cr6.eq) goto loc_820A9838;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// beq cr6,0x820a982c
	if (ctx.cr6.eq) goto loc_820A982C;
	// rlwinm r9,r10,0,11,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r9,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r9.u32);
	// b 0x820a9740
	goto loc_820A9740;
loc_820A982C:
	// oris r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 2097152;
	// stw r9,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r9.u32);
	// b 0x820a9740
	goto loc_820A9740;
loc_820A9838:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A9840"))) PPC_WEAK_FUNC(sub_820A9840);
PPC_FUNC_IMPL(__imp__sub_820A9840) {
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
	ctx.lr = 0x820A9878;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a98c0
	if (ctx.cr6.eq) goto loc_820A98C0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f30,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
loc_820A988C:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x820a989c
	if (!ctx.cr6.eq) goto loc_820A989C;
	// lfs f0,316(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
loc_820A989C:
	// stfs f0,312(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
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
	ctx.lr = 0x820A98B8;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a988c
	if (!ctx.cr6.eq) goto loc_820A988C;
loc_820A98C0:
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

__attribute__((alias("__imp__sub_820A98E0"))) PPC_WEAK_FUNC(sub_820A98E0);
PPC_FUNC_IMPL(__imp__sub_820A98E0) {
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
	ctx.lr = 0x820A98FC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9918
	if (ctx.cr6.eq) goto loc_820A9918;
	// lfs f1,312(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820A9918:
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

__attribute__((alias("__imp__sub_820A9934"))) PPC_WEAK_FUNC(sub_820A9934);
PPC_FUNC_IMPL(__imp__sub_820A9934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A9938"))) PPC_WEAK_FUNC(sub_820A9938);
PPC_FUNC_IMPL(__imp__sub_820A9938) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820A9964;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9978
	if (ctx.cr6.eq) goto loc_820A9978;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e2800
	ctx.lr = 0x820A9978;
	sub_820E2800(ctx, base);
loc_820A9978:
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

__attribute__((alias("__imp__sub_820A9990"))) PPC_WEAK_FUNC(sub_820A9990);
PPC_FUNC_IMPL(__imp__sub_820A9990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820A9998;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x820A99B8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9a4c
	if (ctx.cr6.eq) goto loc_820A9A4C;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
loc_820A99C8:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a9a20
	if (ctx.cr6.eq) goto loc_820A9A20;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a9a28
	if (!ctx.cr6.eq) goto loc_820A9A28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820A99F0;
	sub_820AC008(ctx, base);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a9a28
	if (ctx.cr6.eq) goto loc_820A9A28;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r8,r10,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// lwz r7,300(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// rlwinm r6,r7,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r6,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r6.u32);
	// b 0x820a9a28
	goto loc_820A9A28;
loc_820A9A20:
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
loc_820A9A28:
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
	ctx.lr = 0x820A9A40;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a99c8
	if (!ctx.cr6.eq) goto loc_820A99C8;
loc_820A9A4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A9A54"))) PPC_WEAK_FUNC(sub_820A9A54);
PPC_FUNC_IMPL(__imp__sub_820A9A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A9A58"))) PPC_WEAK_FUNC(sub_820A9A58);
PPC_FUNC_IMPL(__imp__sub_820A9A58) {
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
	ctx.lr = 0x820A9A74;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9a94
	if (ctx.cr6.eq) goto loc_820A9A94;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820A9A94:
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

__attribute__((alias("__imp__sub_820A9AA8"))) PPC_WEAK_FUNC(sub_820A9AA8);
PPC_FUNC_IMPL(__imp__sub_820A9AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820A9AB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	ctx.lr = 0x820A9ACC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9b04
	if (ctx.cr6.eq) goto loc_820A9B04;
loc_820A9AD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3230
	ctx.lr = 0x820A9AE0;
	sub_820E3230(ctx, base);
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
	ctx.lr = 0x820A9AF8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a9ad8
	if (!ctx.cr6.eq) goto loc_820A9AD8;
loc_820A9B04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A9B0C"))) PPC_WEAK_FUNC(sub_820A9B0C);
PPC_FUNC_IMPL(__imp__sub_820A9B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A9B10"))) PPC_WEAK_FUNC(sub_820A9B10);
PPC_FUNC_IMPL(__imp__sub_820A9B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820A9B18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a9b58
	if (!ctx.cr6.eq) goto loc_820A9B58;
	// bl 0x820ddca8
	ctx.lr = 0x820A9B40;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9b50
	if (ctx.cr6.eq) goto loc_820A9B50;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a9b74
	goto loc_820A9B74;
loc_820A9B50:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a9b74
	goto loc_820A9B74;
loc_820A9B58:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a9ba4
	if (!ctx.cr6.eq) goto loc_820A9BA4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a9c30
	if (ctx.cr6.eq) goto loc_820A9C30;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A9B74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9b90
	if (ctx.cr6.eq) goto loc_820A9B90;
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
loc_820A9B90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a9b9c
	if (ctx.cr6.eq) goto loc_820A9B9C;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_820A9B9C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x820a9bcc
	goto loc_820A9BCC;
loc_820A9BA4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a9bb4
	if (!ctx.cr6.eq) goto loc_820A9BB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820a9bc8
	goto loc_820A9BC8;
loc_820A9BB4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A9BC8;
	sub_820F3178(ctx, base);
loc_820A9BC8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820A9BCC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a9c30
	if (ctx.cr6.eq) goto loc_820A9C30;
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
	ctx.lr = 0x820A9BEC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9c30
	if (ctx.cr6.eq) goto loc_820A9C30;
loc_820A9BF8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820a9c0c
	if (ctx.cr6.eq) goto loc_820A9C0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3380
	ctx.lr = 0x820A9C0C;
	sub_820E3380(ctx, base);
loc_820A9C0C:
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
	ctx.lr = 0x820A9C24;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a9bf8
	if (!ctx.cr6.eq) goto loc_820A9BF8;
loc_820A9C30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A9C38"))) PPC_WEAK_FUNC(sub_820A9C38);
PPC_FUNC_IMPL(__imp__sub_820A9C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820A9C40;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820A9C64;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9cb4
	if (ctx.cr6.eq) goto loc_820A9CB4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f3,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820886d8
	ctx.lr = 0x820A9C88;
	sub_820886D8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_820A9C8C:
	// stfs f31,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
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
	ctx.lr = 0x820A9CA8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a9c8c
	if (!ctx.cr6.eq) goto loc_820A9C8C;
loc_820A9CB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A9CC0"))) PPC_WEAK_FUNC(sub_820A9CC0);
PPC_FUNC_IMPL(__imp__sub_820A9CC0) {
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
	ctx.lr = 0x820A9CDC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9cf8
	if (ctx.cr6.eq) goto loc_820A9CF8;
	// lfs f1,304(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820A9CF8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
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

__attribute__((alias("__imp__sub_820A9D14"))) PPC_WEAK_FUNC(sub_820A9D14);
PPC_FUNC_IMPL(__imp__sub_820A9D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A9D18"))) PPC_WEAK_FUNC(sub_820A9D18);
PPC_FUNC_IMPL(__imp__sub_820A9D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820A9D20;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	ctx.lr = 0x820A9D40;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9dc8
	if (ctx.cr6.eq) goto loc_820A9DC8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r31,255
	ctx.r31.s64 = 255;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820A9D58:
	// stfs f31,412(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// stb r31,417(r3)
	PPC_STORE_U8(ctx.r3.u32 + 417, ctx.r31.u8);
	// lwz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r10.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r31,429(r3)
	PPC_STORE_U8(ctx.r3.u32 + 429, ctx.r31.u8);
	// stfs f31,424(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// lwz r9,404(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r8,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r31,441(r3)
	PPC_STORE_U8(ctx.r3.u32 + 441, ctx.r31.u8);
	// stfs f31,436(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 436, temp.u32);
	// lwz r6,404(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// rlwinm r4,r6,0,30,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r4,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r4.u32);
	// li r6,258
	ctx.r6.s64 = 258;
	// stb r31,453(r3)
	PPC_STORE_U8(ctx.r3.u32 + 453, ctx.r31.u8);
	// stfs f31,448(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 448, temp.u32);
	// lwz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// rlwinm r10,r11,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820A9DC0;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a9d58
	if (!ctx.cr6.eq) goto loc_820A9D58;
loc_820A9DC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A9DD4"))) PPC_WEAK_FUNC(sub_820A9DD4);
PPC_FUNC_IMPL(__imp__sub_820A9DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A9DD8"))) PPC_WEAK_FUNC(sub_820A9DD8);
PPC_FUNC_IMPL(__imp__sub_820A9DD8) {
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
	ctx.lr = 0x820A9DF4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9e40
	if (ctx.cr6.eq) goto loc_820A9E40;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a9e20
	if (ctx.cr6.eq) goto loc_820A9E20;
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
loc_820A9E20:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820A9E40:
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
}

__attribute__((alias("__imp__sub_820A9E54"))) PPC_WEAK_FUNC(sub_820A9E54);
PPC_FUNC_IMPL(__imp__sub_820A9E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A9E58"))) PPC_WEAK_FUNC(sub_820A9E58);
PPC_FUNC_IMPL(__imp__sub_820A9E58) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x820a9f3c
	if (ctx.cr6.eq) goto loc_820A9F3C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a9ea8
	if (!ctx.cr6.eq) goto loc_820A9EA8;
	// bl 0x820ddca8
	ctx.lr = 0x820A9E90;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9ea0
	if (ctx.cr6.eq) goto loc_820A9EA0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a9ec4
	goto loc_820A9EC4;
loc_820A9EA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a9ec4
	goto loc_820A9EC4;
loc_820A9EA8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a9ef0
	if (!ctx.cr6.eq) goto loc_820A9EF0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a9f3c
	if (ctx.cr6.eq) goto loc_820A9F3C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A9EC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9ee0
	if (ctx.cr6.eq) goto loc_820A9EE0;
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
loc_820A9EE0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a9f18
	if (ctx.cr6.eq) goto loc_820A9F18;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a9f18
	goto loc_820A9F18;
loc_820A9EF0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a9f00
	if (!ctx.cr6.eq) goto loc_820A9F00;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a9f18
	goto loc_820A9F18;
loc_820A9F00:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A9F14;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A9F18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9f3c
	if (ctx.cr6.eq) goto loc_820A9F3C;
	// lwz r11,340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9f3c
	if (ctx.cr6.eq) goto loc_820A9F3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821702b8
	ctx.lr = 0x820A9F38;
	sub_821702B8(ctx, base);
	// b 0x820a9f40
	goto loc_820A9F40;
loc_820A9F3C:
	// li r3,255
	ctx.r3.s64 = 255;
loc_820A9F40:
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

__attribute__((alias("__imp__sub_820A9F58"))) PPC_WEAK_FUNC(sub_820A9F58);
PPC_FUNC_IMPL(__imp__sub_820A9F58) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x820aa040
	if (ctx.cr6.eq) goto loc_820AA040;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a9fa8
	if (!ctx.cr6.eq) goto loc_820A9FA8;
	// bl 0x820ddca8
	ctx.lr = 0x820A9F90;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a9fa0
	if (ctx.cr6.eq) goto loc_820A9FA0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a9fc4
	goto loc_820A9FC4;
loc_820A9FA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a9fc4
	goto loc_820A9FC4;
loc_820A9FA8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a9ff0
	if (!ctx.cr6.eq) goto loc_820A9FF0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820aa040
	if (ctx.cr6.eq) goto loc_820AA040;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A9FC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a9fe0
	if (ctx.cr6.eq) goto loc_820A9FE0;
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
loc_820A9FE0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820aa018
	if (ctx.cr6.eq) goto loc_820AA018;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820aa018
	goto loc_820AA018;
loc_820A9FF0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820aa000
	if (!ctx.cr6.eq) goto loc_820AA000;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820aa018
	goto loc_820AA018;
loc_820AA000:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AA014;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820AA018:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa040
	if (ctx.cr6.eq) goto loc_820AA040;
	// lwz r11,340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa040
	if (ctx.cr6.eq) goto loc_820AA040;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x82108b08
	ctx.lr = 0x820AA03C;
	sub_82108B08(ctx, base);
	// b 0x820aa044
	goto loc_820AA044;
loc_820AA040:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820AA044:
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

__attribute__((alias("__imp__sub_820AA05C"))) PPC_WEAK_FUNC(sub_820AA05C);
PPC_FUNC_IMPL(__imp__sub_820AA05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AA060"))) PPC_WEAK_FUNC(sub_820AA060);
PPC_FUNC_IMPL(__imp__sub_820AA060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820AA068;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x820aa170
	if (ctx.cr6.eq) goto loc_820AA170;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820aa0ac
	if (!ctx.cr6.eq) goto loc_820AA0AC;
	// bl 0x820ddca8
	ctx.lr = 0x820AA094;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa0a4
	if (ctx.cr6.eq) goto loc_820AA0A4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820aa0c8
	goto loc_820AA0C8;
loc_820AA0A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820aa0c8
	goto loc_820AA0C8;
loc_820AA0AC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820aa0f4
	if (!ctx.cr6.eq) goto loc_820AA0F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820aa170
	if (ctx.cr6.eq) goto loc_820AA170;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820AA0C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa0e4
	if (ctx.cr6.eq) goto loc_820AA0E4;
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
loc_820AA0E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820aa11c
	if (ctx.cr6.eq) goto loc_820AA11C;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820aa11c
	goto loc_820AA11C;
loc_820AA0F4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820aa104
	if (!ctx.cr6.eq) goto loc_820AA104;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820aa11c
	goto loc_820AA11C;
loc_820AA104:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AA118;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820AA11C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa170
	if (ctx.cr6.eq) goto loc_820AA170;
	// lwz r11,340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa170
	if (ctx.cr6.eq) goto loc_820AA170;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820aa170
	if (ctx.cr6.gt) goto loc_820AA170;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r11,r30,960
	ctx.r11.s64 = ctx.r30.s64 * 960;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x82108b08
	ctx.lr = 0x820AA158;
	sub_82108B08(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820aa170
	if (ctx.cr6.eq) goto loc_820AA170;
	// rlwinm r11,r30,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820AA170:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AA17C"))) PPC_WEAK_FUNC(sub_820AA17C);
PPC_FUNC_IMPL(__imp__sub_820AA17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AA180"))) PPC_WEAK_FUNC(sub_820AA180);
PPC_FUNC_IMPL(__imp__sub_820AA180) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x820aa2dc
	if (ctx.cr6.eq) goto loc_820AA2DC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820aa1d0
	if (!ctx.cr6.eq) goto loc_820AA1D0;
	// bl 0x820ddca8
	ctx.lr = 0x820AA1B8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa1c8
	if (ctx.cr6.eq) goto loc_820AA1C8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820aa1ec
	goto loc_820AA1EC;
loc_820AA1C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820aa1ec
	goto loc_820AA1EC;
loc_820AA1D0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820aa218
	if (!ctx.cr6.eq) goto loc_820AA218;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820aa2dc
	if (ctx.cr6.eq) goto loc_820AA2DC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820AA1EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa208
	if (ctx.cr6.eq) goto loc_820AA208;
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
loc_820AA208:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820aa240
	if (ctx.cr6.eq) goto loc_820AA240;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820aa240
	goto loc_820AA240;
loc_820AA218:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820aa228
	if (!ctx.cr6.eq) goto loc_820AA228;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820aa240
	goto loc_820AA240;
loc_820AA228:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AA23C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820AA240:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa2dc
	if (ctx.cr6.eq) goto loc_820AA2DC;
	// lwz r9,392(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// addi r7,r11,20000
	ctx.r7.s64 = ctx.r11.s64 + 20000;
	// beq cr6,0x820aa274
	if (ctx.cr6.eq) goto loc_820AA274;
	// cmpwi cr6,r9,2048
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2048, ctx.xer);
	// bge cr6,0x820aa274
	if (!ctx.cr6.lt) goto loc_820AA274;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r7,10728
	ctx.r10.s64 = ctx.r7.s64 + 10728;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x820aa278
	goto loc_820AA278;
loc_820AA274:
	// li r6,0
	ctx.r6.s64 = 0;
loc_820AA278:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820aa2dc
	if (ctx.cr6.eq) goto loc_820AA2DC;
	// li r8,0
	ctx.r8.s64 = 0;
loc_820AA288:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x820aa2cc
	if (ctx.cr6.eq) goto loc_820AA2CC;
	// cmpwi cr6,r9,2048
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2048, ctx.xer);
	// bge cr6,0x820aa2cc
	if (!ctx.cr6.lt) goto loc_820AA2CC;
	// addi r10,r7,10704
	ctx.r10.s64 = ctx.r7.s64 + 10704;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820aa2cc
	if (!ctx.cr6.lt) goto loc_820AA2CC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa2cc
	if (ctx.cr6.eq) goto loc_820AA2CC;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820aa2e0
	if (ctx.cr6.eq) goto loc_820AA2E0;
loc_820AA2CC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,432
	ctx.r8.s64 = ctx.r8.s64 + 432;
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820aa288
	if (ctx.cr6.lt) goto loc_820AA288;
loc_820AA2DC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820AA2E0:
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

__attribute__((alias("__imp__sub_820AA2F8"))) PPC_WEAK_FUNC(sub_820AA2F8);
PPC_FUNC_IMPL(__imp__sub_820AA2F8) {
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
	ctx.lr = 0x820AA30C;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa334
	if (ctx.cr6.eq) goto loc_820AA334;
	// lwz r31,168(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// bl 0x82172d60
	ctx.lr = 0x820AA31C;
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
loc_820AA334:
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

__attribute__((alias("__imp__sub_820AA34C"))) PPC_WEAK_FUNC(sub_820AA34C);
PPC_FUNC_IMPL(__imp__sub_820AA34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AA350"))) PPC_WEAK_FUNC(sub_820AA350);
PPC_FUNC_IMPL(__imp__sub_820AA350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820AA358;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82087078
	ctx.lr = 0x820AA368;
	sub_82087078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa3ac
	if (ctx.cr6.eq) goto loc_820AA3AC;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820aa398
	if (ctx.cr6.eq) goto loc_820AA398;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820abd30
	ctx.lr = 0x820AA398;
	sub_820ABD30(ctx, base);
loc_820AA398:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x820AA3A0;
	sub_82172D60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820AA3AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AA3B8"))) PPC_WEAK_FUNC(sub_820AA3B8);
PPC_FUNC_IMPL(__imp__sub_820AA3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820AA3C0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82085870
	ctx.lr = 0x820AA3F4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa45c
	if (ctx.cr6.eq) goto loc_820AA45C;
loc_820AA400:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820aa438
	if (!ctx.cr6.lt) goto loc_820AA438;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820AA420;
	sub_820E5B68(ctx, base);
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f30,12(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// rlwimi r10,r11,6,25,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x40) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFBF);
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
loc_820AA438:
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
	ctx.lr = 0x820AA450;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820aa400
	if (!ctx.cr6.eq) goto loc_820AA400;
loc_820AA45C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AA46C"))) PPC_WEAK_FUNC(sub_820AA46C);
PPC_FUNC_IMPL(__imp__sub_820AA46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AA470"))) PPC_WEAK_FUNC(sub_820AA470);
PPC_FUNC_IMPL(__imp__sub_820AA470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820AA478;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82085870
	ctx.lr = 0x820AA49C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa4ec
	if (ctx.cr6.eq) goto loc_820AA4EC;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820aa4ec
	if (!ctx.cr6.lt) goto loc_820AA4EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820AA4C0;
	sub_820E5B68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// stb r9,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820AA4EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AA4F8"))) PPC_WEAK_FUNC(sub_820AA4F8);
PPC_FUNC_IMPL(__imp__sub_820AA4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820AA500;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820AA524;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa56c
	if (ctx.cr6.eq) goto loc_820AA56C;
loc_820AA530:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820AA53C;
	sub_820E5B68(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8217fb68
	ctx.lr = 0x820AA548;
	sub_8217FB68(ctx, base);
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
	ctx.lr = 0x820AA560;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820aa530
	if (!ctx.cr6.eq) goto loc_820AA530;
loc_820AA56C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AA574"))) PPC_WEAK_FUNC(sub_820AA574);
PPC_FUNC_IMPL(__imp__sub_820AA574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AA578"))) PPC_WEAK_FUNC(sub_820AA578);
PPC_FUNC_IMPL(__imp__sub_820AA578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AA580;
	__savegprlr_26(ctx, base);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x820aa620
	if (ctx.cr6.eq) goto loc_820AA620;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82085870
	ctx.lr = 0x820AA5C8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa620
	if (ctx.cr6.eq) goto loc_820AA620;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820AA5D8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r26,188(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820AA5E8;
	sub_820E5B68(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8217f9a0
	ctx.lr = 0x820AA5FC;
	sub_8217F9A0(ctx, base);
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
	ctx.lr = 0x820AA614;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820aa5d8
	if (!ctx.cr6.eq) goto loc_820AA5D8;
loc_820AA620:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AA628"))) PPC_WEAK_FUNC(sub_820AA628);
PPC_FUNC_IMPL(__imp__sub_820AA628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820AA630;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820AA650;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa69c
	if (ctx.cr6.eq) goto loc_820AA69C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820AA660;
	sub_820E5B68(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa69c
	if (ctx.cr6.eq) goto loc_820AA69C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x820aa67c
	if (ctx.cr6.lt) goto loc_820AA67C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820AA67C:
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// bl 0x8233e4e0
	ctx.lr = 0x820AA690;
	sub_8233E4E0(ctx, base);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
loc_820AA69C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AA6A4"))) PPC_WEAK_FUNC(sub_820AA6A4);
PPC_FUNC_IMPL(__imp__sub_820AA6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AA6A8"))) PPC_WEAK_FUNC(sub_820AA6A8);
PPC_FUNC_IMPL(__imp__sub_820AA6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820AA6B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820AA6D4;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa7bc
	if (ctx.cr6.eq) goto loc_820AA7BC;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r29,r11,6936
	ctx.r29.s64 = ctx.r11.s64 + 6936;
loc_820AA6E8:
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa798
	if (ctx.cr6.eq) goto loc_820AA798;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820aa798
	if (!ctx.cr6.lt) goto loc_820AA798;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r10,r28,960
	ctx.r10.s64 = ctx.r28.s64 * 960;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820aa798
	if (ctx.cr6.eq) goto loc_820AA798;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa728
	if (ctx.cr6.eq) goto loc_820AA728;
	// bl 0x82172d60
	ctx.lr = 0x820AA728;
	sub_82172D60(ctx, base);
loc_820AA728:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x820aa738
	if (!ctx.cr6.eq) goto loc_820AA738;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820aa794
	goto loc_820AA794;
loc_820AA738:
	// rlwinm r11,r27,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bge cr6,0x820aa76c
	if (!ctx.cr6.lt) goto loc_820AA76C;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 + 20;
	// clrlwi r9,r27,16
	ctx.r9.u64 = ctx.r27.u32 & 0xFFFF;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820aa76c
	if (!ctx.cr6.eq) goto loc_820AA76C;
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820aa774
	if (!ctx.cr6.eq) goto loc_820AA774;
loc_820AA76C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820aa794
	goto loc_820AA794;
loc_820AA774:
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
loc_820AA778:
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
	// bne 0x820aa778
	if (!ctx.cr0.eq) goto loc_820AA778;
loc_820AA794:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_820AA798:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82085870
	ctx.lr = 0x820AA7B0;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820aa6e8
	if (!ctx.cr6.eq) goto loc_820AA6E8;
loc_820AA7BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AA7C4"))) PPC_WEAK_FUNC(sub_820AA7C4);
PPC_FUNC_IMPL(__imp__sub_820AA7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AA7C8"))) PPC_WEAK_FUNC(sub_820AA7C8);
PPC_FUNC_IMPL(__imp__sub_820AA7C8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820AA7EC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa848
	if (ctx.cr6.eq) goto loc_820AA848;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa848
	if (ctx.cr6.eq) goto loc_820AA848;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820aa848
	if (!ctx.cr6.lt) goto loc_820AA848;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r11,r31,960
	ctx.r11.s64 = ctx.r31.s64 * 960;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa848
	if (ctx.cr6.eq) goto loc_820AA848;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aa848
	if (ctx.cr6.eq) goto loc_820AA848;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
loc_820AA848:
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

__attribute__((alias("__imp__sub_820AA860"))) PPC_WEAK_FUNC(sub_820AA860);
PPC_FUNC_IMPL(__imp__sub_820AA860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AA868;
	__savegprlr_26(ctx, base);
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
	// bl 0x82085870
	ctx.lr = 0x820AA890;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa8f8
	if (ctx.cr6.eq) goto loc_820AA8F8;
loc_820AA89C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820ac088
	ctx.lr = 0x820AA8A4;
	sub_820AC088(ctx, base);
	// rlwinm r11,r3,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r3,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
	// rlwinm r9,r3,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820abc40
	ctx.lr = 0x820AA8D4;
	sub_820ABC40(ctx, base);
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
	ctx.lr = 0x820AA8EC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820aa89c
	if (!ctx.cr6.eq) goto loc_820AA89C;
loc_820AA8F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AA900"))) PPC_WEAK_FUNC(sub_820AA900);
PPC_FUNC_IMPL(__imp__sub_820AA900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820AA908;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820AA928;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa9cc
	if (ctx.cr6.eq) goto loc_820AA9CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820AA938;
	sub_820E5B68(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x820ac088
	ctx.lr = 0x820AA94C;
	sub_820AC088(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r6,r3,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r4,r3,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// rlwinm r5,r3,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// addi r3,r11,31376
	ctx.r3.s64 = ctx.r11.s64 + 31376;
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f0,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_820AA9CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AA9D4"))) PPC_WEAK_FUNC(sub_820AA9D4);
PPC_FUNC_IMPL(__imp__sub_820AA9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AA9D8"))) PPC_WEAK_FUNC(sub_820AA9D8);
PPC_FUNC_IMPL(__imp__sub_820AA9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820AA9E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x820AAA00;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aaa64
	if (ctx.cr6.eq) goto loc_820AAA64;
loc_820AAA0C:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aaa40
	if (ctx.cr6.eq) goto loc_820AAA40;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820aaa40
	if (!ctx.cr6.lt) goto loc_820AAA40;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r11,r30,960
	ctx.r11.s64 = ctx.r30.s64 * 960;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82110f28
	ctx.lr = 0x820AAA40;
	sub_82110F28(ctx, base);
loc_820AAA40:
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
	ctx.lr = 0x820AAA58;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820aaa0c
	if (!ctx.cr6.eq) goto loc_820AAA0C;
loc_820AAA64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AAA6C"))) PPC_WEAK_FUNC(sub_820AAA6C);
PPC_FUNC_IMPL(__imp__sub_820AAA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AAA70"))) PPC_WEAK_FUNC(sub_820AAA70);
PPC_FUNC_IMPL(__imp__sub_820AAA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820AAA78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x820AAA98;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aaaf8
	if (ctx.cr6.eq) goto loc_820AAAF8;
loc_820AAAA4:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aaad4
	if (ctx.cr6.eq) goto loc_820AAAD4;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820aaad4
	if (!ctx.cr6.lt) goto loc_820AAAD4;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r11,r30,960
	ctx.r11.s64 = ctx.r30.s64 * 960;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82110fc0
	ctx.lr = 0x820AAAD4;
	sub_82110FC0(ctx, base);
loc_820AAAD4:
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
	ctx.lr = 0x820AAAEC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820aaaa4
	if (!ctx.cr6.eq) goto loc_820AAAA4;
loc_820AAAF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AAB00"))) PPC_WEAK_FUNC(sub_820AAB00);
PPC_FUNC_IMPL(__imp__sub_820AAB00) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820AAB24;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aab6c
	if (ctx.cr6.eq) goto loc_820AAB6C;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aab6c
	if (ctx.cr6.eq) goto loc_820AAB6C;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820aab6c
	if (!ctx.cr6.lt) goto loc_820AAB6C;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r10,r31,960
	ctx.r10.s64 = ctx.r31.s64 * 960;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82111050
	ctx.lr = 0x820AAB58;
	sub_82111050(ctx, base);
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
loc_820AAB6C:
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

__attribute__((alias("__imp__sub_820AAB84"))) PPC_WEAK_FUNC(sub_820AAB84);
PPC_FUNC_IMPL(__imp__sub_820AAB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AAB88"))) PPC_WEAK_FUNC(sub_820AAB88);
PPC_FUNC_IMPL(__imp__sub_820AAB88) {
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
	ctx.lr = 0x820AABA4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aabd4
	if (ctx.cr6.eq) goto loc_820AABD4;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aabd8
	if (ctx.cr6.eq) goto loc_820AABD8;
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AABD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820AABD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AABE8"))) PPC_WEAK_FUNC(sub_820AABE8);
PPC_FUNC_IMPL(__imp__sub_820AABE8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820AAC0C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aac60
	if (ctx.cr6.eq) goto loc_820AAC60;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aac60
	if (ctx.cr6.eq) goto loc_820AAC60;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820aac60
	if (!ctx.cr6.lt) goto loc_820AAC60;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r11,r31,960
	ctx.r11.s64 = ctx.r31.s64 * 960;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aac60
	if (ctx.cr6.eq) goto loc_820AAC60;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,4323
	ctx.r3.s64 = ctx.r11.s64 + 4323;
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
loc_820AAC60:
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

__attribute__((alias("__imp__sub_820AAC78"))) PPC_WEAK_FUNC(sub_820AAC78);
PPC_FUNC_IMPL(__imp__sub_820AAC78) {
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
	ctx.lr = 0x820AAC94;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aacd0
	if (ctx.cr6.eq) goto loc_820AACD0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r10,129
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 129, ctx.xer);
	// bne cr6,0x820aacd0
	if (!ctx.cr6.eq) goto loc_820AACD0;
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aacd0
	if (ctx.cr6.eq) goto loc_820AACD0;
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AACD0:
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

__attribute__((alias("__imp__sub_820AACEC"))) PPC_WEAK_FUNC(sub_820AACEC);
PPC_FUNC_IMPL(__imp__sub_820AACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AACF0"))) PPC_WEAK_FUNC(sub_820AACF0);
PPC_FUNC_IMPL(__imp__sub_820AACF0) {
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
	ctx.lr = 0x820AAD0C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aad48
	if (ctx.cr6.eq) goto loc_820AAD48;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r10,129
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 129, ctx.xer);
	// bne cr6,0x820aad48
	if (!ctx.cr6.eq) goto loc_820AAD48;
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aad48
	if (ctx.cr6.eq) goto loc_820AAD48;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AAD48:
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

__attribute__((alias("__imp__sub_820AAD64"))) PPC_WEAK_FUNC(sub_820AAD64);
PPC_FUNC_IMPL(__imp__sub_820AAD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AAD68"))) PPC_WEAK_FUNC(sub_820AAD68);
PPC_FUNC_IMPL(__imp__sub_820AAD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AAD70;
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r26,r10,1
	ctx.r26.u64 = ctx.r10.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r27,r9,6
	ctx.r27.u64 = ctx.r9.u64 | 6;
loc_820AAD98:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820aadec
	if (!ctx.cr6.eq) goto loc_820AADEC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820aae90
	if (!ctx.cr6.eq) goto loc_820AAE90;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820AADB0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820aadbc
	if (!ctx.cr6.eq) goto loc_820AADBC;
	// bl 0x821b3000
	ctx.lr = 0x820AADBC;
	sub_821B3000(ctx, base);
loc_820AADBC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820aade4
	if (ctx.cr6.eq) goto loc_820AADE4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aade4
	if (ctx.cr6.eq) goto loc_820AADE4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820aae08
	goto loc_820AAE08;
loc_820AADE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820aae08
	goto loc_820AAE08;
loc_820AADEC:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820aae34
	if (!ctx.cr6.eq) goto loc_820AAE34;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820aae90
	if (ctx.cr6.eq) goto loc_820AAE90;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820aae90
	if (!ctx.cr6.eq) goto loc_820AAE90;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820AAE08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aae24
	if (ctx.cr6.eq) goto loc_820AAE24;
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
loc_820AAE24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820aae60
	if (ctx.cr6.eq) goto loc_820AAE60;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820aae60
	goto loc_820AAE60;
loc_820AAE34:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820aae44
	if (!ctx.cr6.eq) goto loc_820AAE44;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820aae5c
	goto loc_820AAE5C;
loc_820AAE44:
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
	ctx.lr = 0x820AAE5C;
	sub_820F3178(ctx, base);
loc_820AAE5C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820AAE60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aae90
	if (ctx.cr6.eq) goto loc_820AAE90;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820aae84
	if (ctx.cr6.eq) goto loc_820AAE84;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// stw r10,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r10.u32);
	// b 0x820aad98
	goto loc_820AAD98;
loc_820AAE84:
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r10,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r10.u32);
	// b 0x820aad98
	goto loc_820AAD98;
loc_820AAE90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AAE98"))) PPC_WEAK_FUNC(sub_820AAE98);
PPC_FUNC_IMPL(__imp__sub_820AAE98) {
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
	ctx.lr = 0x820AAEB4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aaed4
	if (ctx.cr6.eq) goto loc_820AAED4;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AAED4:
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

__attribute__((alias("__imp__sub_820AAEE8"))) PPC_WEAK_FUNC(sub_820AAEE8);
PPC_FUNC_IMPL(__imp__sub_820AAEE8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820AAF0C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aaf74
	if (ctx.cr6.eq) goto loc_820AAF74;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820aaf58
	if (ctx.cr6.eq) goto loc_820AAF58;
	// lwz r9,180(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820aaf58
	if (ctx.cr6.eq) goto loc_820AAF58;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_820AAF3C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820aaf5c
	if (ctx.cr6.eq) goto loc_820AAF5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820aaf3c
	if (ctx.cr6.lt) goto loc_820AAF3C;
loc_820AAF58:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_820AAF5C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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
loc_820AAF74:
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

__attribute__((alias("__imp__sub_820AAF8C"))) PPC_WEAK_FUNC(sub_820AAF8C);
PPC_FUNC_IMPL(__imp__sub_820AAF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AAF90"))) PPC_WEAK_FUNC(sub_820AAF90);
PPC_FUNC_IMPL(__imp__sub_820AAF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820AAF98;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820AAFBC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab00c
	if (ctx.cr6.eq) goto loc_820AB00C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f3,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820886d8
	ctx.lr = 0x820AAFE0;
	sub_820886D8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_820AAFE4:
	// stfs f31,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
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
	ctx.lr = 0x820AB000;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820aafe4
	if (!ctx.cr6.eq) goto loc_820AAFE4;
loc_820AB00C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AB018"))) PPC_WEAK_FUNC(sub_820AB018);
PPC_FUNC_IMPL(__imp__sub_820AB018) {
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
	ctx.lr = 0x820AB034;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab050
	if (ctx.cr6.eq) goto loc_820AB050;
	// lfs f1,308(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AB050:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
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

__attribute__((alias("__imp__sub_820AB06C"))) PPC_WEAK_FUNC(sub_820AB06C);
PPC_FUNC_IMPL(__imp__sub_820AB06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB070"))) PPC_WEAK_FUNC(sub_820AB070);
PPC_FUNC_IMPL(__imp__sub_820AB070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820AB078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820AB098;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab0dc
	if (ctx.cr6.eq) goto loc_820AB0DC;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
loc_820AB0A4:
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// bne cr6,0x820ab0b8
	if (!ctx.cr6.eq) goto loc_820AB0B8;
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_820AB0B8:
	// stw r10,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
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
	ctx.lr = 0x820AB0D4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ab0a4
	if (!ctx.cr6.eq) goto loc_820AB0A4;
loc_820AB0DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AB0E4"))) PPC_WEAK_FUNC(sub_820AB0E4);
PPC_FUNC_IMPL(__imp__sub_820AB0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB0E8"))) PPC_WEAK_FUNC(sub_820AB0E8);
PPC_FUNC_IMPL(__imp__sub_820AB0E8) {
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
	ctx.lr = 0x820AB104;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab124
	if (ctx.cr6.eq) goto loc_820AB124;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r3,r11,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AB124:
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

__attribute__((alias("__imp__sub_820AB138"))) PPC_WEAK_FUNC(sub_820AB138);
PPC_FUNC_IMPL(__imp__sub_820AB138) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8233fa38
	ctx.lr = 0x820AB150;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// li r6,258
	ctx.r6.s64 = 258;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820AB174;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab1e4
	if (ctx.cr6.eq) goto loc_820AB1E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f28,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820AB18C:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f29.f64;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x820ab19c
	if (!ctx.cr6.eq) goto loc_820AB19C;
	// lfs f13,316(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
loc_820AB19C:
	// stfs f13,312(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x820ab1b0
	if (!ctx.cr6.eq) goto loc_820AB1B0;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_820AB1B0:
	// lfs f12,316(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x820ab1c0
	if (!ctx.cr6.eq) goto loc_820AB1C0;
	// stfs f0,312(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
loc_820AB1C0:
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
	ctx.lr = 0x820AB1DC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ab18c
	if (!ctx.cr6.eq) goto loc_820AB18C;
loc_820AB1E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8233fa84
	ctx.lr = 0x820AB1F0;
	__restfpr_28(ctx, base);
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

__attribute__((alias("__imp__sub_820AB204"))) PPC_WEAK_FUNC(sub_820AB204);
PPC_FUNC_IMPL(__imp__sub_820AB204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB208"))) PPC_WEAK_FUNC(sub_820AB208);
PPC_FUNC_IMPL(__imp__sub_820AB208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820AB210;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f12,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f5,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f4,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f4,136(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82257cb8
	ctx.lr = 0x820AB2A4;
	sub_82257CB8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820AB2BC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab320
	if (ctx.cr6.eq) goto loc_820AB320;
loc_820AB2C8:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ab2ec
	if (!ctx.cr6.eq) goto loc_820AB2EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82082030
	ctx.lr = 0x820AB2E8;
	sub_82082030(ctx, base);
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
loc_820AB2EC:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820AB2FC;
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
	ctx.lr = 0x820AB314;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ab2c8
	if (!ctx.cr6.eq) goto loc_820AB2C8;
loc_820AB320:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AB328"))) PPC_WEAK_FUNC(sub_820AB328);
PPC_FUNC_IMPL(__imp__sub_820AB328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AB330;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
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
	ctx.lr = 0x820AB354;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab3bc
	if (ctx.cr6.eq) goto loc_820AB3BC;
loc_820AB360:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ab398
	if (!ctx.cr6.eq) goto loc_820AB398;
	// cmplwi cr6,r27,255
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 255, ctx.xer);
	// bgt cr6,0x820ab398
	if (ctx.cr6.gt) goto loc_820AB398;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// oris r30,r27,4096
	ctx.r30.u64 = ctx.r27.u64 | 268435456;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab38c
	if (ctx.cr6.eq) goto loc_820AB38C;
	// oris r30,r30,8192
	ctx.r30.u64 = ctx.r30.u64 | 536870912;
loc_820AB38C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820AB394;
	sub_820AC008(ctx, base);
	// stw r30,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r30.u32);
loc_820AB398:
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
	ctx.lr = 0x820AB3B0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ab360
	if (!ctx.cr6.eq) goto loc_820AB360;
loc_820AB3BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AB3C4"))) PPC_WEAK_FUNC(sub_820AB3C4);
PPC_FUNC_IMPL(__imp__sub_820AB3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB3C8"))) PPC_WEAK_FUNC(sub_820AB3C8);
PPC_FUNC_IMPL(__imp__sub_820AB3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820AB3D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	ctx.lr = 0x820AB3EC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab43c
	if (ctx.cr6.eq) goto loc_820AB43C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_820AB3FC:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ab418
	if (!ctx.cr6.eq) goto loc_820AB418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820AB414;
	sub_820AC008(ctx, base);
	// stw r28,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r28.u32);
loc_820AB418:
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
	ctx.lr = 0x820AB430;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ab3fc
	if (!ctx.cr6.eq) goto loc_820AB3FC;
loc_820AB43C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AB444"))) PPC_WEAK_FUNC(sub_820AB444);
PPC_FUNC_IMPL(__imp__sub_820AB444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB448"))) PPC_WEAK_FUNC(sub_820AB448);
PPC_FUNC_IMPL(__imp__sub_820AB448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AB450;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
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
loc_820AB480:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820ab4d4
	if (!ctx.cr6.eq) goto loc_820AB4D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ab568
	if (!ctx.cr6.eq) goto loc_820AB568;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820AB498;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ab4a4
	if (!ctx.cr6.eq) goto loc_820AB4A4;
	// bl 0x821b3000
	ctx.lr = 0x820AB4A4;
	sub_821B3000(ctx, base);
loc_820AB4A4:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ab4cc
	if (ctx.cr6.eq) goto loc_820AB4CC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab4cc
	if (ctx.cr6.eq) goto loc_820AB4CC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820ab4f0
	goto loc_820AB4F0;
loc_820AB4CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ab4f0
	goto loc_820AB4F0;
loc_820AB4D4:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820ab51c
	if (!ctx.cr6.eq) goto loc_820AB51C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ab568
	if (ctx.cr6.eq) goto loc_820AB568;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ab568
	if (!ctx.cr6.eq) goto loc_820AB568;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820AB4F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab50c
	if (ctx.cr6.eq) goto loc_820AB50C;
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
loc_820AB50C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ab548
	if (ctx.cr6.eq) goto loc_820AB548;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820ab548
	goto loc_820AB548;
loc_820AB51C:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820ab52c
	if (!ctx.cr6.eq) goto loc_820AB52C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820ab544
	goto loc_820AB544;
loc_820AB52C:
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
	ctx.lr = 0x820AB544;
	sub_820F3178(ctx, base);
loc_820AB544:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820AB548:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab568
	if (ctx.cr6.eq) goto loc_820AB568;
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ab480
	if (ctx.cr6.eq) goto loc_820AB480;
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// b 0x820ab480
	goto loc_820AB480;
loc_820AB568:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AB574"))) PPC_WEAK_FUNC(sub_820AB574);
PPC_FUNC_IMPL(__imp__sub_820AB574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB578"))) PPC_WEAK_FUNC(sub_820AB578);
PPC_FUNC_IMPL(__imp__sub_820AB578) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820AB59C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab5cc
	if (ctx.cr6.eq) goto loc_820AB5CC;
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab5cc
	if (ctx.cr6.eq) goto loc_820AB5CC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
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
loc_820AB5CC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_820AB5EC"))) PPC_WEAK_FUNC(sub_820AB5EC);
PPC_FUNC_IMPL(__imp__sub_820AB5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB5F0"))) PPC_WEAK_FUNC(sub_820AB5F0);
PPC_FUNC_IMPL(__imp__sub_820AB5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820AB5F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 | 1;
	// lis r28,-32197
	ctx.r28.s64 = -2110062592;
	// ori r27,r10,6
	ctx.r27.u64 = ctx.r10.u64 | 6;
loc_820AB620:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820ab674
	if (!ctx.cr6.eq) goto loc_820AB674;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820ab710
	if (!ctx.cr6.eq) goto loc_820AB710;
	// lwz r3,-27096(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820AB638;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ab644
	if (!ctx.cr6.eq) goto loc_820AB644;
	// bl 0x821b3000
	ctx.lr = 0x820AB644;
	sub_821B3000(ctx, base);
loc_820AB644:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ab66c
	if (ctx.cr6.eq) goto loc_820AB66C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab66c
	if (ctx.cr6.eq) goto loc_820AB66C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820ab690
	goto loc_820AB690;
loc_820AB66C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ab690
	goto loc_820AB690;
loc_820AB674:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820ab6c0
	if (!ctx.cr6.eq) goto loc_820AB6C0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ab710
	if (ctx.cr6.eq) goto loc_820AB710;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820ab710
	if (!ctx.cr6.eq) goto loc_820AB710;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820AB690:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab6ac
	if (ctx.cr6.eq) goto loc_820AB6AC;
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
loc_820AB6AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ab6b8
	if (ctx.cr6.eq) goto loc_820AB6B8;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
loc_820AB6B8:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x820ab6ec
	goto loc_820AB6EC;
loc_820AB6C0:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x820ab6d0
	if (!ctx.cr6.eq) goto loc_820AB6D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820ab6e8
	goto loc_820AB6E8;
loc_820AB6D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AB6E8;
	sub_820F3178(ctx, base);
loc_820AB6E8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820AB6EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ab710
	if (ctx.cr6.eq) goto loc_820AB710;
	// lwz r3,492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab620
	if (ctx.cr6.eq) goto loc_820AB620;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820AB70C;
	sub_8233E4E0(ctx, base);
	// b 0x820ab620
	goto loc_820AB620;
loc_820AB710:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AB718"))) PPC_WEAK_FUNC(sub_820AB718);
PPC_FUNC_IMPL(__imp__sub_820AB718) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820AB720;
	__savegprlr_14(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,23384
	ctx.r11.s64 = ctx.r11.s64 + 23384;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// lis r31,-32246
	ctx.r31.s64 = -2113273856;
	// addi r10,r10,23800
	ctx.r10.s64 = ctx.r10.s64 + 23800;
	// addi r9,r9,30232
	ctx.r9.s64 = ctx.r9.s64 + 30232;
	// addi r8,r8,32392
	ctx.r8.s64 = ctx.r8.s64 + 32392;
	// stw r10,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// lis r30,-32246
	ctx.r30.s64 = -2113273856;
	// stw r9,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r9.u32);
	// addi r7,r7,30096
	ctx.r7.s64 = ctx.r7.s64 + 30096;
	// stw r8,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r8.u32);
	// addi r6,r6,24576
	ctx.r6.s64 = ctx.r6.s64 + 24576;
	// addi r5,r5,28544
	ctx.r5.s64 = ctx.r5.s64 + 28544;
	// stw r7,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r7.u32);
	// addi r4,r4,28848
	ctx.r4.s64 = ctx.r4.s64 + 28848;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r11,r31,29304
	ctx.r11.s64 = ctx.r31.s64 + 29304;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lis r29,-32246
	ctx.r29.s64 = -2113273856;
	// stw r4,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r4.u32);
	// lis r28,-32246
	ctx.r28.s64 = -2113273856;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r27,-32246
	ctx.r27.s64 = -2113273856;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// addi r10,r30,29536
	ctx.r10.s64 = ctx.r30.s64 + 29536;
	// addi r9,r29,29816
	ctx.r9.s64 = ctx.r29.s64 + 29816;
	// addi r8,r28,30368
	ctx.r8.s64 = ctx.r28.s64 + 30368;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lis r14,-32246
	ctx.r14.s64 = -2113273856;
	// stw r8,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r8.u32);
	// addi r7,r27,31616
	ctx.r7.s64 = ctx.r27.s64 + 31616;
	// addi r6,r26,-32640
	ctx.r6.s64 = ctx.r26.s64 + -32640;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,-31864
	ctx.r5.s64 = ctx.r25.s64 + -31864;
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// addi r4,r24,-31632
	ctx.r4.s64 = ctx.r24.s64 + -31632;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// addi r11,r23,-31352
	ctx.r11.s64 = ctx.r23.s64 + -31352;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// lis r15,-32246
	ctx.r15.s64 = -2113273856;
	// addi r10,r22,-30912
	ctx.r10.s64 = ctx.r22.s64 + -30912;
	// addi r9,r21,-30784
	ctx.r9.s64 = ctx.r21.s64 + -30784;
	// addi r8,r20,-30536
	ctx.r8.s64 = ctx.r20.s64 + -30536;
	// stw r10,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r10.u32);
	// lis r14,-32246
	ctx.r14.s64 = -2113273856;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,-31240
	ctx.r7.s64 = ctx.r19.s64 + -31240;
	// stw r9,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r9.u32);
	// addi r6,r18,-31032
	ctx.r6.s64 = ctx.r18.s64 + -31032;
	// stw r8,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r8.u32);
	// addi r5,r17,-30416
	ctx.r5.s64 = ctx.r17.s64 + -30416;
	// stw r7,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r7.u32);
	// addi r4,r16,-30328
	ctx.r4.s64 = ctx.r16.s64 + -30328;
	// stw r6,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r6.u32);
	// addi r11,r15,31800
	ctx.r11.s64 = ctx.r15.s64 + 31800;
	// stw r5,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r5.u32);
	// addi r9,r10,32096
	ctx.r9.s64 = ctx.r10.s64 + 32096;
	// stw r4,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r4.u32);
	// addi r8,r14,29024
	ctx.r8.s64 = ctx.r14.s64 + 29024;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stw r8,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r8.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r6,r6,24320
	ctx.r6.s64 = ctx.r6.s64 + 24320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r6,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r6.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r30,-32246
	ctx.r30.s64 = -2113273856;
	// addi r7,r7,31400
	ctx.r7.s64 = ctx.r7.s64 + 31400;
	// addi r5,r5,-30248
	ctx.r5.s64 = ctx.r5.s64 + -30248;
	// addi r4,r4,-29384
	ctx.r4.s64 = ctx.r4.s64 + -29384;
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r11,r11,-29184
	ctx.r11.s64 = ctx.r11.s64 + -29184;
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// addi r10,r10,-28992
	ctx.r10.s64 = ctx.r10.s64 + -28992;
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// addi r9,r9,-28896
	ctx.r9.s64 = ctx.r9.s64 + -28896;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// addi r8,r8,31160
	ctx.r8.s64 = ctx.r8.s64 + 31160;
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// addi r6,r30,30968
	ctx.r6.s64 = ctx.r30.s64 + 30968;
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// lis r31,-32246
	ctx.r31.s64 = -2113273856;
	// stw r8,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r8.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r6,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r6.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// addi r7,r31,30608
	ctx.r7.s64 = ctx.r31.s64 + 30608;
	// addi r5,r29,-28600
	ctx.r5.s64 = ctx.r29.s64 + -28600;
	// addi r4,r28,-28352
	ctx.r4.s64 = ctx.r28.s64 + -28352;
	// stw r7,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r7.u32);
	// addi r11,r27,-28176
	ctx.r11.s64 = ctx.r27.s64 + -28176;
	// stw r5,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r5.u32);
	// addi r10,r26,-27976
	ctx.r10.s64 = ctx.r26.s64 + -27976;
	// stw r4,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r4.u32);
	// addi r9,r25,-27848
	ctx.r9.s64 = ctx.r25.s64 + -27848;
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// addi r8,r24,-27688
	ctx.r8.s64 = ctx.r24.s64 + -27688;
	// stw r10,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r10.u32);
	// addi r6,r22,-27336
	ctx.r6.s64 = ctx.r22.s64 + -27336;
	// stw r9,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r9.u32);
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// stw r8,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r8.u32);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// stw r6,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r6.u32);
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lwz r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// addi r7,r23,-27520
	ctx.r7.s64 = ctx.r23.s64 + -27520;
	// addi r5,r21,-25544
	ctx.r5.s64 = ctx.r21.s64 + -25544;
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// stw r7,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r7.u32);
	// addi r4,r20,-25408
	ctx.r4.s64 = ctx.r20.s64 + -25408;
	// stw r5,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r5.u32);
	// addi r11,r19,-25320
	ctx.r11.s64 = ctx.r19.s64 + -25320;
	// addi r10,r18,-21144
	ctx.r10.s64 = ctx.r18.s64 + -21144;
	// stw r4,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r4.u32);
	// addi r9,r17,-20840
	ctx.r9.s64 = ctx.r17.s64 + -20840;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// addi r8,r16,-27168
	ctx.r8.s64 = ctx.r16.s64 + -27168;
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r9,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r9.u32);
	// addi r7,r15,-26560
	ctx.r7.s64 = ctx.r15.s64 + -26560;
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// addi r5,r6,-26312
	ctx.r5.s64 = ctx.r6.s64 + -26312;
	// addi r4,r14,-26224
	ctx.r4.s64 = ctx.r14.s64 + -26224;
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// stw r5,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r5.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r4,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r11,r11,-26024
	ctx.r11.s64 = ctx.r11.s64 + -26024;
	// addi r10,r10,-25944
	ctx.r10.s64 = ctx.r10.s64 + -25944;
	// addi r9,r9,-25840
	ctx.r9.s64 = ctx.r9.s64 + -25840;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// addi r8,r8,-25128
	ctx.r8.s64 = ctx.r8.s64 + -25128;
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// addi r7,r7,-31440
	ctx.r7.s64 = ctx.r7.s64 + -31440;
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// addi r6,r6,-26400
	ctx.r6.s64 = ctx.r6.s64 + -26400;
	// stw r8,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r8.u32);
	// addi r5,r5,-26864
	ctx.r5.s64 = ctx.r5.s64 + -26864;
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// lis r31,-32246
	ctx.r31.s64 = -2113273856;
	// stw r5,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r5.u32);
	// lis r30,-32246
	ctx.r30.s64 = -2113273856;
	// lis r29,-32246
	ctx.r29.s64 = -2113273856;
	// lis r28,-32246
	ctx.r28.s64 = -2113273856;
	// lis r27,-32246
	ctx.r27.s64 = -2113273856;
	// lis r26,-32226
	ctx.r26.s64 = -2111963136;
	// lis r25,-32226
	ctx.r25.s64 = -2111963136;
	// addi r4,r4,25480
	ctx.r4.s64 = ctx.r4.s64 + 25480;
	// addi r11,r31,25848
	ctx.r11.s64 = ctx.r31.s64 + 25848;
	// addi r10,r30,26616
	ctx.r10.s64 = ctx.r30.s64 + 26616;
	// stw r4,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r4.u32);
	// addi r9,r29,26912
	ctx.r9.s64 = ctx.r29.s64 + 26912;
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// addi r8,r28,27160
	ctx.r8.s64 = ctx.r28.s64 + 27160;
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// addi r7,r27,27464
	ctx.r7.s64 = ctx.r27.s64 + 27464;
	// stw r9,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r9.u32);
	// addi r6,r26,-21912
	ctx.r6.s64 = ctx.r26.s64 + -21912;
	// stw r8,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r8.u32);
	// addi r5,r25,-21912
	ctx.r5.s64 = ctx.r25.s64 + -21912;
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// lis r24,-32246
	ctx.r24.s64 = -2113273856;
	// stw r6,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r6.u32);
	// lis r23,-32246
	ctx.r23.s64 = -2113273856;
	// stw r5,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r5.u32);
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// addi r4,r24,27656
	ctx.r4.s64 = ctx.r24.s64 + 27656;
	// addi r11,r23,28088
	ctx.r11.s64 = ctx.r23.s64 + 28088;
	// addi r10,r22,-25000
	ctx.r10.s64 = ctx.r22.s64 + -25000;
	// stw r4,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r4.u32);
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// stw r10,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// addi r9,r21,-24744
	ctx.r9.s64 = ctx.r21.s64 + -24744;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r8,r20,-24480
	ctx.r8.s64 = ctx.r20.s64 + -24480;
	// addi r7,r19,-24192
	ctx.r7.s64 = ctx.r19.s64 + -24192;
	// stw r9,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r9.u32);
	// addi r6,r18,-20760
	ctx.r6.s64 = ctx.r18.s64 + -20760;
	// stw r8,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r8.u32);
	// addi r5,r17,-23624
	ctx.r5.s64 = ctx.r17.s64 + -23624;
	// stw r7,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r7.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r6,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r6.u32);
	// addi r4,r16,-23440
	ctx.r4.s64 = ctx.r16.s64 + -23440;
	// stw r5,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r5.u32);
	// addi r11,r15,-21624
	ctx.r11.s64 = ctx.r15.s64 + -21624;
	// addi r9,r10,-21528
	ctx.r9.s64 = ctx.r10.s64 + -21528;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// addi r8,r14,-23304
	ctx.r8.s64 = ctx.r14.s64 + -23304;
	// stw r11,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r11.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r9,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r9.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r8,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r8.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r7,r7,-23176
	ctx.r7.s64 = ctx.r7.s64 + -23176;
	// addi r6,r6,-23000
	ctx.r6.s64 = ctx.r6.s64 + -23000;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r7,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r7.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r6,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r6.u32);
	// addi r5,r5,-22872
	ctx.r5.s64 = ctx.r5.s64 + -22872;
	// addi r4,r4,-22584
	ctx.r4.s64 = ctx.r4.s64 + -22584;
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// stw r5,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r5.u32);
	// lis r30,-32246
	ctx.r30.s64 = -2113273856;
	// stw r4,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r4.u32);
	// addi r11,r11,-22432
	ctx.r11.s64 = ctx.r11.s64 + -22432;
	// addi r10,r10,-22272
	ctx.r10.s64 = ctx.r10.s64 + -22272;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// stw r10,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r10.u32);
	// addi r9,r9,-22056
	ctx.r9.s64 = ctx.r9.s64 + -22056;
	// addi r8,r8,-21904
	ctx.r8.s64 = ctx.r8.s64 + -21904;
	// lis r27,-32246
	ctx.r27.s64 = -2113273856;
	// stw r9,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r9.u32);
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// stw r8,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r8.u32);
	// addi r7,r31,-21760
	ctx.r7.s64 = ctx.r31.s64 + -21760;
	// addi r6,r30,23560
	ctx.r6.s64 = ctx.r30.s64 + 23560;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// stw r7,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r7.u32);
	// addi r5,r29,-21384
	ctx.r5.s64 = ctx.r29.s64 + -21384;
	// stw r6,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r6.u32);
	// addi r4,r28,-21264
	ctx.r4.s64 = ctx.r28.s64 + -21264;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// stw r5,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r5.u32);
	// addi r11,r27,24896
	ctx.r11.s64 = ctx.r27.s64 + 24896;
	// stw r4,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r4.u32);
	// addi r10,r26,-23816
	ctx.r10.s64 = ctx.r26.s64 + -23816;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// addi r9,r25,-23728
	ctx.r9.s64 = ctx.r25.s64 + -23728;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r7,r24,-20592
	ctx.r7.s64 = ctx.r24.s64 + -20592;
	// stw r9,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r23,-20456
	ctx.r5.s64 = ctx.r23.s64 + -20456;
	// stw r7,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r7.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r11,r8,-20368
	ctx.r11.s64 = ctx.r8.s64 + -20368;
	// stw r5,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r5.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r6,-20248
	ctx.r9.s64 = ctx.r6.s64 + -20248;
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r7,r4,-20168
	ctx.r7.s64 = ctx.r4.s64 + -20168;
	// stw r9,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r9.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r10,-19960
	ctx.r5.s64 = ctx.r10.s64 + -19960;
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// addi r11,r8,-19672
	ctx.r11.s64 = ctx.r8.s64 + -19672;
	// addi r9,r6,-19512
	ctx.r9.s64 = ctx.r6.s64 + -19512;
	// stw r5,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r5.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r9,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r9.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r7,r4,-19384
	ctx.r7.s64 = ctx.r4.s64 + -19384;
	// addi r6,r10,-19080
	ctx.r6.s64 = ctx.r10.s64 + -19080;
	// addi r5,r8,-18960
	ctx.r5.s64 = ctx.r8.s64 + -18960;
	// stw r7,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r7.u32);
	// stw r6,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r6.u32);
	// stw r5,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r5.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ABC40"))) PPC_WEAK_FUNC(sub_820ABC40);
PPC_FUNC_IMPL(__imp__sub_820ABC40) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820ABC60;
	sub_820E5B68(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r4,r9,31376
	ctx.r4.s64 = ctx.r9.s64 + 31376;
	// lbz r6,3(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// or r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// or r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 | ctx.r7.u64;
	// lfs f0,244(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r5,r7,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF;
	// rlwinm r4,r7,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r3,r7,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,28(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
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

__attribute__((alias("__imp__sub_820ABD2C"))) PPC_WEAK_FUNC(sub_820ABD2C);
PPC_FUNC_IMPL(__imp__sub_820ABD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ABD30"))) PPC_WEAK_FUNC(sub_820ABD30);
PPC_FUNC_IMPL(__imp__sub_820ABD30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r10,72
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 72, ctx.xer);
	// bne cr6,0x820abd68
	if (!ctx.cr6.eq) goto loc_820ABD68;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8233e4e0
	sub_8233E4E0(ctx, base);
	return;
loc_820ABD68:
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,20(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r7,36(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r6,40(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,44(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// lwz r4,48(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// lwz r9,52(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,60(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,64(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r3,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ABE28"))) PPC_WEAK_FUNC(sub_820ABE28);
PPC_FUNC_IMPL(__imp__sub_820ABE28) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820ac008
	ctx.lr = 0x820ABE40;
	sub_820AC008(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820abe64
	if (!ctx.cr6.eq) goto loc_820ABE64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
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
loc_820ABE64:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820abe88
	if (ctx.cr6.lt) goto loc_820ABE88;
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
loc_820ABE88:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_820ABEB0"))) PPC_WEAK_FUNC(sub_820ABEB0);
PPC_FUNC_IMPL(__imp__sub_820ABEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820ABEB8;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// bl 0x820ac008
	ctx.lr = 0x820ABEDC;
	sub_820AC008(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// bne cr6,0x820abf7c
	if (!ctx.cr6.eq) goto loc_820ABF7C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820abff0
	if (ctx.cr6.eq) goto loc_820ABFF0;
	// lwz r29,108(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820abff0
	if (ctx.cr6.eq) goto loc_820ABFF0;
	// lfs f31,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r11,392
	ctx.r31.s64 = ctx.r11.s64 + 392;
	// lfs f30,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f29.f64 = double(temp.f32);
loc_820ABF14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820ABF20;
	sub_820E5B68(ctx, base);
	// stfs f29,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f30,24(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,28(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r31,r31,960
	ctx.r31.s64 = ctx.r31.s64 + 960;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blt cr6,0x820abf14
	if (ctx.cr6.lt) goto loc_820ABF14;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820ABF7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820abff0
	if (ctx.cr6.eq) goto loc_820ABFF0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820abff0
	if (!ctx.cr6.lt) goto loc_820ABFF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820ABF9C;
	sub_820E5B68(ctx, base);
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// mulli r10,r30,960
	ctx.r10.s64 = ctx.r30.s64 * 960;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,404(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// addi r7,r11,392
	ctx.r7.s64 = ctx.r11.s64 + 392;
	// lwz r6,392(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// lwz r5,396(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// lwz r4,400(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
loc_820ABFF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_820AC004"))) PPC_WEAK_FUNC(sub_820AC004);
PPC_FUNC_IMPL(__imp__sub_820AC004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC008"))) PPC_WEAK_FUNC(sub_820AC008);
PPC_FUNC_IMPL(__imp__sub_820AC008) {
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
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ac06c
	if (ctx.cr6.eq) goto loc_820AC06C;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r31,r11,5280
	ctx.r31.s64 = ctx.r11.s64 + 5280;
	// lwz r11,5540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5540);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820ac054
	if (!ctx.cr6.eq) goto loc_820AC054;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,5540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5540, ctx.r11.u32);
	// bl 0x820e35f0
	ctx.lr = 0x820AC054;
	sub_820E35F0(ctx, base);
loc_820AC054:
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
loc_820AC06C:
	// lwz r3,336(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
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

__attribute__((alias("__imp__sub_820AC084"))) PPC_WEAK_FUNC(sub_820AC084);
PPC_FUNC_IMPL(__imp__sub_820AC084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC088"))) PPC_WEAK_FUNC(sub_820AC088);
PPC_FUNC_IMPL(__imp__sub_820AC088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820ac0b4
	if (ctx.cr6.lt) goto loc_820AC0B4;
	// li r9,255
	ctx.r9.s64 = 255;
	// b 0x820ac0bc
	goto loc_820AC0BC;
loc_820AC0B4:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r11,17,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFF;
loc_820AC0BC:
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820ac0d8
	if (ctx.cr6.lt) goto loc_820AC0D8;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x820ac0e0
	goto loc_820AC0E0;
loc_820AC0D8:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r11,17,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFF;
loc_820AC0E0:
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820ac0fc
	if (ctx.cr6.lt) goto loc_820AC0FC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x820ac104
	goto loc_820AC104;
loc_820AC0FC:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r11,r11,17,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFF;
loc_820AC104:
	// lfs f12,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820ac130
	if (ctx.cr6.lt) goto loc_820AC130;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// li r3,255
	ctx.r3.s64 = 255;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
loc_820AC130:
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r3,r8,17,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFF;
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC14C"))) PPC_WEAK_FUNC(sub_820AC14C);
PPC_FUNC_IMPL(__imp__sub_820AC14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC150"))) PPC_WEAK_FUNC(sub_820AC150);
PPC_FUNC_IMPL(__imp__sub_820AC150) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-16668
	ctx.r3.s64 = ctx.r11.s64 + -16668;
	// bl 0x823052d8
	ctx.lr = 0x820AC184;
	sub_823052D8(ctx, base);
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ac1ac
	if (!ctx.cr6.eq) goto loc_820AC1AC;
	// oris r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 33554432;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// stw r10,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16712
	ctx.r3.s64 = ctx.r11.s64 + -16712;
	// bl 0x82106098
	ctx.lr = 0x820AC1AC;
	sub_82106098(ctx, base);
loc_820AC1AC:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-16668
	ctx.r3.s64 = ctx.r11.s64 + -16668;
	// bl 0x823051a8
	ctx.lr = 0x820AC1B8;
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

__attribute__((alias("__imp__sub_820AC1D0"))) PPC_WEAK_FUNC(sub_820AC1D0);
PPC_FUNC_IMPL(__imp__sub_820AC1D0) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-16668
	ctx.r3.s64 = ctx.r11.s64 + -16668;
	// bl 0x823052d8
	ctx.lr = 0x820AC204;
	sub_823052D8(ctx, base);
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ac22c
	if (ctx.cr6.eq) goto loc_820AC22C;
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// stw r10,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16712
	ctx.r3.s64 = ctx.r11.s64 + -16712;
	// bl 0x822184b8
	ctx.lr = 0x820AC22C;
	sub_822184B8(ctx, base);
loc_820AC22C:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-16668
	ctx.r3.s64 = ctx.r11.s64 + -16668;
	// bl 0x823051a8
	ctx.lr = 0x820AC238;
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

__attribute__((alias("__imp__sub_820AC250"))) PPC_WEAK_FUNC(sub_820AC250);
PPC_FUNC_IMPL(__imp__sub_820AC250) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-16788
	ctx.r3.s64 = ctx.r11.s64 + -16788;
	// bl 0x823052d8
	ctx.lr = 0x820AC284;
	sub_823052D8(ctx, base);
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ac2ac
	if (!ctx.cr6.eq) goto loc_820AC2AC;
	// oris r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 134217728;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// stw r10,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16832
	ctx.r3.s64 = ctx.r11.s64 + -16832;
	// bl 0x82106098
	ctx.lr = 0x820AC2AC;
	sub_82106098(ctx, base);
loc_820AC2AC:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-16788
	ctx.r3.s64 = ctx.r11.s64 + -16788;
	// bl 0x823051a8
	ctx.lr = 0x820AC2B8;
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

__attribute__((alias("__imp__sub_820AC2D0"))) PPC_WEAK_FUNC(sub_820AC2D0);
PPC_FUNC_IMPL(__imp__sub_820AC2D0) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-16788
	ctx.r3.s64 = ctx.r11.s64 + -16788;
	// bl 0x823052d8
	ctx.lr = 0x820AC304;
	sub_823052D8(ctx, base);
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ac32c
	if (ctx.cr6.eq) goto loc_820AC32C;
	// rlwinm r10,r11,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// stw r10,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16832
	ctx.r3.s64 = ctx.r11.s64 + -16832;
	// bl 0x822184b8
	ctx.lr = 0x820AC32C;
	sub_822184B8(ctx, base);
loc_820AC32C:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-16788
	ctx.r3.s64 = ctx.r11.s64 + -16788;
	// bl 0x823051a8
	ctx.lr = 0x820AC338;
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

__attribute__((alias("__imp__sub_820AC350"))) PPC_WEAK_FUNC(sub_820AC350);
PPC_FUNC_IMPL(__imp__sub_820AC350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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

__attribute__((alias("__imp__sub_820AC360"))) PPC_WEAK_FUNC(sub_820AC360);
PPC_FUNC_IMPL(__imp__sub_820AC360) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,-21912
	ctx.r11.s64 = ctx.r11.s64 + -21912;
	// addi r10,r10,-21912
	ctx.r10.s64 = ctx.r10.s64 + -21912;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r31,-32226
	ctx.r31.s64 = -2111963136;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// addi r9,r9,-21912
	ctx.r9.s64 = ctx.r9.s64 + -21912;
	// addi r8,r8,-6736
	ctx.r8.s64 = ctx.r8.s64 + -6736;
	// addi r7,r7,-21912
	ctx.r7.s64 = ctx.r7.s64 + -21912;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r6,r6,-15536
	ctx.r6.s64 = ctx.r6.s64 + -15536;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// addi r5,r5,-21912
	ctx.r5.s64 = ctx.r5.s64 + -21912;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r4,r4,-6736
	ctx.r4.s64 = ctx.r4.s64 + -6736;
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// addi r11,r31,-21912
	ctx.r11.s64 = ctx.r31.s64 + -21912;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// addi r10,r30,-6736
	ctx.r10.s64 = ctx.r30.s64 + -6736;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC3EC"))) PPC_WEAK_FUNC(sub_820AC3EC);
PPC_FUNC_IMPL(__imp__sub_820AC3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC3F0"))) PPC_WEAK_FUNC(sub_820AC3F0);
PPC_FUNC_IMPL(__imp__sub_820AC3F0) {
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
	// bne cr6,0x820ac430
	if (!ctx.cr6.eq) goto loc_820AC430;
	// bl 0x820ddca8
	ctx.lr = 0x820AC418;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac428
	if (ctx.cr6.eq) goto loc_820AC428;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820ac44c
	goto loc_820AC44C;
loc_820AC428:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ac44c
	goto loc_820AC44C;
loc_820AC430:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ac478
	if (!ctx.cr6.eq) goto loc_820AC478;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ac4a8
	if (ctx.cr6.eq) goto loc_820AC4A8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820AC44C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ac468
	if (ctx.cr6.eq) goto loc_820AC468;
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
loc_820AC468:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ac4a0
	if (ctx.cr6.eq) goto loc_820AC4A0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820ac4a0
	goto loc_820AC4A0;
loc_820AC478:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820ac488
	if (!ctx.cr6.eq) goto loc_820AC488;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ac4a0
	goto loc_820AC4A0;
loc_820AC488:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AC49C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820AC4A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ac4c0
	if (!ctx.cr6.eq) goto loc_820AC4C0;
loc_820AC4A8:
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
loc_820AC4C0:
	// lwz r11,340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
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

__attribute__((alias("__imp__sub_820AC4DC"))) PPC_WEAK_FUNC(sub_820AC4DC);
PPC_FUNC_IMPL(__imp__sub_820AC4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC4E0"))) PPC_WEAK_FUNC(sub_820AC4E0);
PPC_FUNC_IMPL(__imp__sub_820AC4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820AC4E8;
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
	ctx.lr = 0x820AC508;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac544
	if (ctx.cr6.eq) goto loc_820AC544;
loc_820AC514:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82189940
	ctx.lr = 0x820AC520;
	sub_82189940(ctx, base);
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
	ctx.lr = 0x820AC538;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ac514
	if (!ctx.cr6.eq) goto loc_820AC514;
loc_820AC544:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AC54C"))) PPC_WEAK_FUNC(sub_820AC54C);
PPC_FUNC_IMPL(__imp__sub_820AC54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC550"))) PPC_WEAK_FUNC(sub_820AC550);
PPC_FUNC_IMPL(__imp__sub_820AC550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820AC558;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ac594
	if (!ctx.cr6.eq) goto loc_820AC594;
	// bl 0x820ddca8
	ctx.lr = 0x820AC57C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac58c
	if (ctx.cr6.eq) goto loc_820AC58C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820ac5b0
	goto loc_820AC5B0;
loc_820AC58C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ac5b0
	goto loc_820AC5B0;
loc_820AC594:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ac5dc
	if (!ctx.cr6.eq) goto loc_820AC5DC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ac60c
	if (ctx.cr6.eq) goto loc_820AC60C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820AC5B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ac5cc
	if (ctx.cr6.eq) goto loc_820AC5CC;
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
loc_820AC5CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ac604
	if (ctx.cr6.eq) goto loc_820AC604;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820ac604
	goto loc_820AC604;
loc_820AC5DC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820ac5ec
	if (!ctx.cr6.eq) goto loc_820AC5EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ac604
	goto loc_820AC604;
loc_820AC5EC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AC600;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820AC604:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ac618
	if (!ctx.cr6.eq) goto loc_820AC618;
loc_820AC60C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820AC618:
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,-9556(r9)
	PPC_STORE_U32(ctx.r9.u32 + -9556, ctx.r10.u32);
	// bl 0x82189a70
	ctx.lr = 0x820AC634;
	sub_82189A70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AC63C"))) PPC_WEAK_FUNC(sub_820AC63C);
PPC_FUNC_IMPL(__imp__sub_820AC63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC640"))) PPC_WEAK_FUNC(sub_820AC640);
PPC_FUNC_IMPL(__imp__sub_820AC640) {
	PPC_FUNC_PROLOGUE();
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x820ac648
	sub_820AC648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AC648"))) PPC_WEAK_FUNC(sub_820AC648);
PPC_FUNC_IMPL(__imp__sub_820AC648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AC650;
	__savegprlr_26(ctx, base);
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
	// bl 0x82085870
	ctx.lr = 0x820AC678;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac6bc
	if (ctx.cr6.eq) goto loc_820AC6BC;
loc_820AC684:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82189c08
	ctx.lr = 0x820AC698;
	sub_82189C08(ctx, base);
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
	ctx.lr = 0x820AC6B0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ac684
	if (!ctx.cr6.eq) goto loc_820AC684;
loc_820AC6BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AC6C4"))) PPC_WEAK_FUNC(sub_820AC6C4);
PPC_FUNC_IMPL(__imp__sub_820AC6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC6C8"))) PPC_WEAK_FUNC(sub_820AC6C8);
PPC_FUNC_IMPL(__imp__sub_820AC6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820AC6D0;
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
	ctx.lr = 0x820AC6F0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac72c
	if (ctx.cr6.eq) goto loc_820AC72C;
loc_820AC6FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82189d40
	ctx.lr = 0x820AC708;
	sub_82189D40(ctx, base);
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
	ctx.lr = 0x820AC720;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ac6fc
	if (!ctx.cr6.eq) goto loc_820AC6FC;
loc_820AC72C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AC734"))) PPC_WEAK_FUNC(sub_820AC734);
PPC_FUNC_IMPL(__imp__sub_820AC734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC738"))) PPC_WEAK_FUNC(sub_820AC738);
PPC_FUNC_IMPL(__imp__sub_820AC738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820AC740;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x820AC764;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac7a4
	if (ctx.cr6.eq) goto loc_820AC7A4;
loc_820AC770:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82189df8
	ctx.lr = 0x820AC780;
	sub_82189DF8(ctx, base);
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
	ctx.lr = 0x820AC798;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ac770
	if (!ctx.cr6.eq) goto loc_820AC770;
loc_820AC7A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AC7AC"))) PPC_WEAK_FUNC(sub_820AC7AC);
PPC_FUNC_IMPL(__imp__sub_820AC7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC7B0"))) PPC_WEAK_FUNC(sub_820AC7B0);
PPC_FUNC_IMPL(__imp__sub_820AC7B0) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8218a890
	ctx.lr = 0x820AC7C4;
	sub_8218A890(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ac7e0
	if (!ctx.cr6.eq) goto loc_820AC7E0;
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
loc_820AC7E0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820ac7f8
	if (ctx.cr6.eq) goto loc_820AC7F8;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_820AC7F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC808"))) PPC_WEAK_FUNC(sub_820AC808);
PPC_FUNC_IMPL(__imp__sub_820AC808) {
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
	// bl 0x8218a890
	ctx.lr = 0x820AC81C;
	sub_8218A890(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac880
	if (ctx.cr6.eq) goto loc_820AC880;
	// bl 0x821962c8
	ctx.lr = 0x820AC82C;
	sub_821962C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac848
	if (ctx.cr6.eq) goto loc_820AC848;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AC848:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ac880
	if (ctx.cr6.eq) goto loc_820AC880;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820ac880
	if (ctx.cr6.eq) goto loc_820AC880;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ac880
	if (ctx.cr6.eq) goto loc_820AC880;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AC880:
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
}

__attribute__((alias("__imp__sub_820AC894"))) PPC_WEAK_FUNC(sub_820AC894);
PPC_FUNC_IMPL(__imp__sub_820AC894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC898"))) PPC_WEAK_FUNC(sub_820AC898);
PPC_FUNC_IMPL(__imp__sub_820AC898) {
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
	// bl 0x8218a890
	ctx.lr = 0x820AC8AC;
	sub_8218A890(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ac8c8
	if (!ctx.cr6.eq) goto loc_820AC8C8;
loc_820AC8B4:
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
loc_820AC8C8:
	// bl 0x82195fe8
	ctx.lr = 0x820AC8CC;
	sub_82195FE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac8b4
	if (ctx.cr6.eq) goto loc_820AC8B4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC8E8"))) PPC_WEAK_FUNC(sub_820AC8E8);
PPC_FUNC_IMPL(__imp__sub_820AC8E8) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8218a890
	ctx.lr = 0x820AC904;
	sub_8218A890(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ac924
	if (!ctx.cr6.eq) goto loc_820AC924;
loc_820AC90C:
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
loc_820AC924:
	// bl 0x82195fe8
	ctx.lr = 0x820AC928;
	sub_82195FE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac90c
	if (ctx.cr6.eq) goto loc_820AC90C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820ac944
	if (ctx.cr6.eq) goto loc_820AC944;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820ac90c
	if (!ctx.cr6.eq) goto loc_820AC90C;
loc_820AC944:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_820AC95C"))) PPC_WEAK_FUNC(sub_820AC95C);
PPC_FUNC_IMPL(__imp__sub_820AC95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC960"))) PPC_WEAK_FUNC(sub_820AC960);
PPC_FUNC_IMPL(__imp__sub_820AC960) {
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
	// bl 0x820ac3f0
	ctx.lr = 0x820AC970;
	sub_820AC3F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac99c
	if (ctx.cr6.eq) goto loc_820AC99C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ac9a0
	if (ctx.cr6.eq) goto loc_820AC9A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AC99C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820AC9A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC9B0"))) PPC_WEAK_FUNC(sub_820AC9B0);
PPC_FUNC_IMPL(__imp__sub_820AC9B0) {
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
	// bl 0x820ac3f0
	ctx.lr = 0x820AC9C0;
	sub_820AC3F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac9ec
	if (ctx.cr6.eq) goto loc_820AC9EC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ac9f0
	if (ctx.cr6.eq) goto loc_820AC9F0;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AC9EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820AC9F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ACA00"))) PPC_WEAK_FUNC(sub_820ACA00);
PPC_FUNC_IMPL(__imp__sub_820ACA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820ACA08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x820ACA2C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aca6c
	if (ctx.cr6.eq) goto loc_820ACA6C;
loc_820ACA38:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82189ed0
	ctx.lr = 0x820ACA48;
	sub_82189ED0(ctx, base);
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
	ctx.lr = 0x820ACA60;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820aca38
	if (!ctx.cr6.eq) goto loc_820ACA38;
loc_820ACA6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ACA74"))) PPC_WEAK_FUNC(sub_820ACA74);
PPC_FUNC_IMPL(__imp__sub_820ACA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ACA78"))) PPC_WEAK_FUNC(sub_820ACA78);
PPC_FUNC_IMPL(__imp__sub_820ACA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820ACA80;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
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
	ctx.lr = 0x820ACAA8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820acae8
	if (ctx.cr6.eq) goto loc_820ACAE8;
loc_820ACAB4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a020
	ctx.lr = 0x820ACAC4;
	sub_8218A020(ctx, base);
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
	ctx.lr = 0x820ACADC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820acab4
	if (!ctx.cr6.eq) goto loc_820ACAB4;
loc_820ACAE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ACAF4"))) PPC_WEAK_FUNC(sub_820ACAF4);
PPC_FUNC_IMPL(__imp__sub_820ACAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ACAF8"))) PPC_WEAK_FUNC(sub_820ACAF8);
PPC_FUNC_IMPL(__imp__sub_820ACAF8) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8218a890
	ctx.lr = 0x820ACB0C;
	sub_8218A890(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820acb30
	if (!ctx.cr6.eq) goto loc_820ACB30;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820ACB30:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f1,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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

__attribute__((alias("__imp__sub_820ACB48"))) PPC_WEAK_FUNC(sub_820ACB48);
PPC_FUNC_IMPL(__imp__sub_820ACB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820ACB50;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
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
	ctx.lr = 0x820ACB78;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820acbb8
	if (ctx.cr6.eq) goto loc_820ACBB8;
loc_820ACB84:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a128
	ctx.lr = 0x820ACB94;
	sub_8218A128(ctx, base);
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
	ctx.lr = 0x820ACBAC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820acb84
	if (!ctx.cr6.eq) goto loc_820ACB84;
loc_820ACBB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ACBC4"))) PPC_WEAK_FUNC(sub_820ACBC4);
PPC_FUNC_IMPL(__imp__sub_820ACBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ACBC8"))) PPC_WEAK_FUNC(sub_820ACBC8);
PPC_FUNC_IMPL(__imp__sub_820ACBC8) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8218a890
	ctx.lr = 0x820ACBDC;
	sub_8218A890(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820acc00
	if (!ctx.cr6.eq) goto loc_820ACC00;
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
loc_820ACC00:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
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

__attribute__((alias("__imp__sub_820ACC18"))) PPC_WEAK_FUNC(sub_820ACC18);
PPC_FUNC_IMPL(__imp__sub_820ACC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82087078
	ctx.lr = 0x820ACC2C;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820acc54
	if (!ctx.cr6.eq) goto loc_820ACC54;
loc_820ACC34:
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
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820ACC54:
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x820acc34
	if (!ctx.cr6.eq) goto loc_820ACC34;
	// lfs f31,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82172d60
	ctx.lr = 0x820ACC68;
	sub_82172D60(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ACC80"))) PPC_WEAK_FUNC(sub_820ACC80);
PPC_FUNC_IMPL(__imp__sub_820ACC80) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8218a890
	ctx.lr = 0x820ACC9C;
	sub_8218A890(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820accf4
	if (ctx.cr6.eq) goto loc_820ACCF4;
	// bl 0x82195fe8
	ctx.lr = 0x820ACCAC;
	sub_82195FE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820accf4
	if (ctx.cr6.eq) goto loc_820ACCF4;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820accf4
	if (!ctx.cr6.eq) goto loc_820ACCF4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820accf4
	if (ctx.cr6.eq) goto loc_820ACCF4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820ACCE0;
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
loc_820ACCF4:
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ACD14"))) PPC_WEAK_FUNC(sub_820ACD14);
PPC_FUNC_IMPL(__imp__sub_820ACD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ACD18"))) PPC_WEAK_FUNC(sub_820ACD18);
PPC_FUNC_IMPL(__imp__sub_820ACD18) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x820acd54
	if (ctx.cr6.eq) goto loc_820ACD54;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_820ACD54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820acd6c
	if (ctx.cr6.eq) goto loc_820ACD6C;
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_820ACD6C:
	// bl 0x82087078
	ctx.lr = 0x820ACD70;
	sub_82087078(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820acd84
	if (!ctx.cr6.eq) goto loc_820ACD84;
loc_820ACD7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820acdb0
	goto loc_820ACDB0;
loc_820ACD84:
	// lhz r11,62(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 62);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x820acd7c
	if (!ctx.cr6.eq) goto loc_820ACD7C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8216e288
	ctx.lr = 0x820ACDA0;
	sub_8216E288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82172d60
	ctx.lr = 0x820ACDAC;
	sub_82172D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820ACDB0:
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

__attribute__((alias("__imp__sub_820ACDC8"))) PPC_WEAK_FUNC(sub_820ACDC8);
PPC_FUNC_IMPL(__imp__sub_820ACDC8) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8218a890
	ctx.lr = 0x820ACDEC;
	sub_8218A890(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ace1c
	if (ctx.cr6.eq) goto loc_820ACE1C;
	// bl 0x82195fe8
	ctx.lr = 0x820ACDF8;
	sub_82195FE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ace1c
	if (ctx.cr6.eq) goto loc_820ACE1C;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x820ace1c
	if (!ctx.cr6.eq) goto loc_820ACE1C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8216e288
	ctx.lr = 0x820ACE18;
	sub_8216E288(ctx, base);
	// b 0x820ace20
	goto loc_820ACE20;
loc_820ACE1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820ACE20:
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

__attribute__((alias("__imp__sub_820ACE38"))) PPC_WEAK_FUNC(sub_820ACE38);
PPC_FUNC_IMPL(__imp__sub_820ACE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820ACE40;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,172(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// bne cr6,0x820ace7c
	if (!ctx.cr6.eq) goto loc_820ACE7C;
	// lfs f31,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820ace84
	goto loc_820ACE84;
loc_820ACE7C:
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsel f31,f1,f1,f0
	ctx.f31.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
loc_820ACE84:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820ACE9C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820acedc
	if (ctx.cr6.eq) goto loc_820ACEDC;
loc_820ACEA8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a200
	ctx.lr = 0x820ACEB8;
	sub_8218A200(ctx, base);
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
	ctx.lr = 0x820ACED0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820acea8
	if (!ctx.cr6.eq) goto loc_820ACEA8;
loc_820ACEDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ACEE8"))) PPC_WEAK_FUNC(sub_820ACEE8);
PPC_FUNC_IMPL(__imp__sub_820ACEE8) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8218a890
	ctx.lr = 0x820ACEFC;
	sub_8218A890(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820acf20
	if (!ctx.cr6.eq) goto loc_820ACF20;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820ACF20:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
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

__attribute__((alias("__imp__sub_820ACF38"))) PPC_WEAK_FUNC(sub_820ACF38);
PPC_FUNC_IMPL(__imp__sub_820ACF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820ACF40;
	__savegprlr_28(ctx, base);
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820acf80
	if (!ctx.cr6.eq) goto loc_820ACF80;
	// bl 0x820ddca8
	ctx.lr = 0x820ACF68;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820acf78
	if (ctx.cr6.eq) goto loc_820ACF78;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820acf9c
	goto loc_820ACF9C;
loc_820ACF78:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820acf9c
	goto loc_820ACF9C;
loc_820ACF80:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820acfc8
	if (!ctx.cr6.eq) goto loc_820ACFC8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820acff8
	if (ctx.cr6.eq) goto loc_820ACFF8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820ACF9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820acfb8
	if (ctx.cr6.eq) goto loc_820ACFB8;
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
loc_820ACFB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820acff0
	if (ctx.cr6.eq) goto loc_820ACFF0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820acff0
	goto loc_820ACFF0;
loc_820ACFC8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820acfd8
	if (!ctx.cr6.eq) goto loc_820ACFD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820acff0
	goto loc_820ACFF0;
loc_820ACFD8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820ACFEC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820ACFF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ad004
	if (!ctx.cr6.eq) goto loc_820AD004;
loc_820ACFF8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820AD004:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82189b30
	ctx.lr = 0x820AD018;
	sub_82189B30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AD020"))) PPC_WEAK_FUNC(sub_820AD020);
PPC_FUNC_IMPL(__imp__sub_820AD020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820AD028;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820AD04C;
	sub_82085870(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ad1d0
	if (ctx.cr6.eq) goto loc_820AD1D0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// lis r25,-32171
	ctx.r25.s64 = -2108358656;
	// addi r26,r11,5280
	ctx.r26.s64 = ctx.r11.s64 + 5280;
	// lfs f31,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820AD074:
	// lwz r11,300(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ad0ac
	if (ctx.cr6.eq) goto loc_820AD0AC;
	// lwz r11,5540(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 5540);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ad0a4
	if (!ctx.cr6.eq) goto loc_820AD0A4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,5540(r25)
	PPC_STORE_U32(ctx.r25.u32 + 5540, ctx.r11.u32);
	// bl 0x820e35f0
	ctx.lr = 0x820AD0A4;
	sub_820E35F0(ctx, base);
loc_820AD0A4:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// b 0x820ad0b0
	goto loc_820AD0B0;
loc_820AD0AC:
	// lwz r28,336(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 336);
loc_820AD0B0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r28,80
	ctx.r31.s64 = ctx.r28.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 120, ctx.r10.u32);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 124, temp.u32);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,128(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 128, temp.u32);
	// lfs f12,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,140(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 140, temp.u32);
	// lfs f11,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,144(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 144, temp.u32);
	// lfs f10,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,132(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 132, temp.u32);
	// lfs f9,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,136(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 136, temp.u32);
	// lfs f8,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,148(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + 148, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r8.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,88(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 88, temp.u32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,92(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + 92, temp.u32);
	// lfs f5,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,104(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 104, temp.u32);
	// lfs f4,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,108(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 108, temp.u32);
	// lfs f3,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,96(r28)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r28.u32 + 96, temp.u32);
	// lfs f2,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,100(r28)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r28.u32 + 100, temp.u32);
	// lfs f1,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,112(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 112, temp.u32);
	// bl 0x820aeba8
	ctx.lr = 0x820AD14C;
	sub_820AEBA8(ctx, base);
	// lfs f0,144(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,152(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,128(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r7,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lfs f9,92(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,108(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,172(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 152, ctx.r11.u32);
	// stfs f31,160(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 160, temp.u32);
	// fadds f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fadds f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// fadds f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fcmpu cr6,f4,f31
	ctx.cr6.compare(ctx.f4.f64, ctx.f31.f64);
	// beq cr6,0x820ad19c
	if (ctx.cr6.eq) goto loc_820AD19C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x820ad1a0
	goto loc_820AD1A0;
loc_820AD19C:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_820AD1A0:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822275c8
	ctx.lr = 0x820AD1AC;
	sub_822275C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82085870
	ctx.lr = 0x820AD1C4;
	sub_82085870(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ad074
	if (!ctx.cr6.eq) goto loc_820AD074;
loc_820AD1D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AD1DC"))) PPC_WEAK_FUNC(sub_820AD1DC);
PPC_FUNC_IMPL(__imp__sub_820AD1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD1E0"))) PPC_WEAK_FUNC(sub_820AD1E0);
PPC_FUNC_IMPL(__imp__sub_820AD1E0) {
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
	// bne cr6,0x820ad228
	if (!ctx.cr6.eq) goto loc_820AD228;
	// bl 0x820ddca8
	ctx.lr = 0x820AD210;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ad220
	if (ctx.cr6.eq) goto loc_820AD220;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820ad244
	goto loc_820AD244;
loc_820AD220:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ad244
	goto loc_820AD244;
loc_820AD228:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ad270
	if (!ctx.cr6.eq) goto loc_820AD270;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ad2b8
	if (ctx.cr6.eq) goto loc_820AD2B8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820AD244:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ad260
	if (ctx.cr6.eq) goto loc_820AD260;
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
loc_820AD260:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ad298
	if (ctx.cr6.eq) goto loc_820AD298;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820ad298
	goto loc_820AD298;
loc_820AD270:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820ad280
	if (!ctx.cr6.eq) goto loc_820AD280;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ad298
	goto loc_820AD298;
loc_820AD280:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AD294;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820AD298:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ad2b8
	if (ctx.cr6.eq) goto loc_820AD2B8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820ac008
	ctx.lr = 0x820AD2A8;
	sub_820AC008(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// bl 0x820aeb10
	ctx.lr = 0x820AD2B8;
	sub_820AEB10(ctx, base);
loc_820AD2B8:
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

__attribute__((alias("__imp__sub_820AD2D0"))) PPC_WEAK_FUNC(sub_820AD2D0);
PPC_FUNC_IMPL(__imp__sub_820AD2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820AD2D8;
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
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,258
	ctx.r6.s64 = 258;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820AD30C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ad3a0
	if (ctx.cr6.eq) goto loc_820AD3A0;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r29,-32171
	ctx.r29.s64 = -2108358656;
	// addi r30,r11,5280
	ctx.r30.s64 = ctx.r11.s64 + 5280;
loc_820AD324:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ad35c
	if (ctx.cr6.eq) goto loc_820AD35C;
	// lwz r11,5540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5540);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ad354
	if (!ctx.cr6.eq) goto loc_820AD354;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,5540(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5540, ctx.r11.u32);
	// bl 0x820e35f0
	ctx.lr = 0x820AD354;
	sub_820E35F0(ctx, base);
loc_820AD354:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x820ad360
	goto loc_820AD360;
loc_820AD35C:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_820AD360:
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stfs f31,164(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// stfs f30,168(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 | 5;
	// stfs f29,172(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// li r6,258
	ctx.r6.s64 = 258;
	// stw r9,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bl 0x82085870
	ctx.lr = 0x820AD394;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ad324
	if (!ctx.cr6.eq) goto loc_820AD324;
loc_820AD3A0:
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

__attribute__((alias("__imp__sub_820AD3B4"))) PPC_WEAK_FUNC(sub_820AD3B4);
PPC_FUNC_IMPL(__imp__sub_820AD3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD3B8"))) PPC_WEAK_FUNC(sub_820AD3B8);
PPC_FUNC_IMPL(__imp__sub_820AD3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AD3C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820AD3E8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ad438
	if (ctx.cr6.eq) goto loc_820AD438;
loc_820AD3F4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a518
	ctx.lr = 0x820AD404;
	sub_8218A518(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ad414
	if (ctx.cr6.eq) goto loc_820AD414;
	// li r26,1
	ctx.r26.s64 = 1;
loc_820AD414:
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
	ctx.lr = 0x820AD42C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ad3f4
	if (!ctx.cr6.eq) goto loc_820AD3F4;
loc_820AD438:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AD444"))) PPC_WEAK_FUNC(sub_820AD444);
PPC_FUNC_IMPL(__imp__sub_820AD444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD448"))) PPC_WEAK_FUNC(sub_820AD448);
PPC_FUNC_IMPL(__imp__sub_820AD448) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8218a988
	ctx.lr = 0x820AD460;
	sub_8218A988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ad47c
	if (!ctx.cr6.eq) goto loc_820AD47C;
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
loc_820AD47C:
	// lbz r11,47(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 47);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820AD49C"))) PPC_WEAK_FUNC(sub_820AD49C);
PPC_FUNC_IMPL(__imp__sub_820AD49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD4A0"))) PPC_WEAK_FUNC(sub_820AD4A0);
PPC_FUNC_IMPL(__imp__sub_820AD4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AD4A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820AD4D0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ad520
	if (ctx.cr6.eq) goto loc_820AD520;
loc_820AD4DC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a5d8
	ctx.lr = 0x820AD4EC;
	sub_8218A5D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ad4fc
	if (ctx.cr6.eq) goto loc_820AD4FC;
	// li r26,1
	ctx.r26.s64 = 1;
loc_820AD4FC:
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
	ctx.lr = 0x820AD514;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ad4dc
	if (!ctx.cr6.eq) goto loc_820AD4DC;
loc_820AD520:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AD52C"))) PPC_WEAK_FUNC(sub_820AD52C);
PPC_FUNC_IMPL(__imp__sub_820AD52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD530"))) PPC_WEAK_FUNC(sub_820AD530);
PPC_FUNC_IMPL(__imp__sub_820AD530) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8218a988
	ctx.lr = 0x820AD548;
	sub_8218A988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ad564
	if (!ctx.cr6.eq) goto loc_820AD564;
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
loc_820AD564:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
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

__attribute__((alias("__imp__sub_820AD588"))) PPC_WEAK_FUNC(sub_820AD588);
PPC_FUNC_IMPL(__imp__sub_820AD588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AD590;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820AD5B8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ad608
	if (ctx.cr6.eq) goto loc_820AD608;
loc_820AD5C4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a698
	ctx.lr = 0x820AD5D4;
	sub_8218A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ad5e4
	if (ctx.cr6.eq) goto loc_820AD5E4;
	// li r26,1
	ctx.r26.s64 = 1;
loc_820AD5E4:
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
	ctx.lr = 0x820AD5FC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ad5c4
	if (!ctx.cr6.eq) goto loc_820AD5C4;
loc_820AD608:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AD614"))) PPC_WEAK_FUNC(sub_820AD614);
PPC_FUNC_IMPL(__imp__sub_820AD614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD618"))) PPC_WEAK_FUNC(sub_820AD618);
PPC_FUNC_IMPL(__imp__sub_820AD618) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8218a988
	ctx.lr = 0x820AD630;
	sub_8218A988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ad64c
	if (!ctx.cr6.eq) goto loc_820AD64C;
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
loc_820AD64C:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,8,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00000;
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

__attribute__((alias("__imp__sub_820AD670"))) PPC_WEAK_FUNC(sub_820AD670);
PPC_FUNC_IMPL(__imp__sub_820AD670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AD678;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820AD6A0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ad6f0
	if (ctx.cr6.eq) goto loc_820AD6F0;
loc_820AD6AC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a760
	ctx.lr = 0x820AD6BC;
	sub_8218A760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ad6cc
	if (ctx.cr6.eq) goto loc_820AD6CC;
	// li r26,1
	ctx.r26.s64 = 1;
loc_820AD6CC:
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
	ctx.lr = 0x820AD6E4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ad6ac
	if (!ctx.cr6.eq) goto loc_820AD6AC;
loc_820AD6F0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AD6FC"))) PPC_WEAK_FUNC(sub_820AD6FC);
PPC_FUNC_IMPL(__imp__sub_820AD6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD700"))) PPC_WEAK_FUNC(sub_820AD700);
PPC_FUNC_IMPL(__imp__sub_820AD700) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8218a988
	ctx.lr = 0x820AD718;
	sub_8218A988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ad734
	if (!ctx.cr6.eq) goto loc_820AD734;
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
loc_820AD734:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820aea40
	ctx.lr = 0x820AD73C;
	sub_820AEA40(ctx, base);
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

__attribute__((alias("__imp__sub_820AD754"))) PPC_WEAK_FUNC(sub_820AD754);
PPC_FUNC_IMPL(__imp__sub_820AD754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD758"))) PPC_WEAK_FUNC(sub_820AD758);
PPC_FUNC_IMPL(__imp__sub_820AD758) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8218a890
	ctx.lr = 0x820AD774;
	sub_8218A890(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ad790
	if (!ctx.cr6.eq) goto loc_820AD790;
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
loc_820AD790:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82194ad8
	ctx.lr = 0x820AD798;
	sub_82194AD8(ctx, base);
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

__attribute__((alias("__imp__sub_820AD7AC"))) PPC_WEAK_FUNC(sub_820AD7AC);
PPC_FUNC_IMPL(__imp__sub_820AD7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD7B0"))) PPC_WEAK_FUNC(sub_820AD7B0);
PPC_FUNC_IMPL(__imp__sub_820AD7B0) {
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
	ctx.lr = 0x820AD7C4;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ad7dc
	if (ctx.cr6.eq) goto loc_820AD7DC;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x820ad7f4
	if (ctx.cr6.eq) goto loc_820AD7F4;
	// bl 0x82172d60
	ctx.lr = 0x820AD7DC;
	sub_82172D60(ctx, base);
loc_820AD7DC:
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
loc_820AD7F4:
	// lwz r31,104(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// bl 0x82172d60
	ctx.lr = 0x820AD7FC;
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

__attribute__((alias("__imp__sub_820AD814"))) PPC_WEAK_FUNC(sub_820AD814);
PPC_FUNC_IMPL(__imp__sub_820AD814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD818"))) PPC_WEAK_FUNC(sub_820AD818);
PPC_FUNC_IMPL(__imp__sub_820AD818) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82087078
	ctx.lr = 0x820AD838;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ad850
	if (ctx.cr6.eq) goto loc_820AD850;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x820ad858
	if (ctx.cr6.eq) goto loc_820AD858;
	// bl 0x82172d60
	ctx.lr = 0x820AD850;
	sub_82172D60(ctx, base);
loc_820AD850:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820ad8b0
	goto loc_820AD8B0;
loc_820AD858:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820ad868
	if (ctx.cr6.lt) goto loc_820AD868;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_820AD868:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ad8a8
	if (ctx.cr6.eq) goto loc_820AD8A8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_820AD87C:
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820ad894
	if (!ctx.cr6.eq) goto loc_820AD894;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// b 0x820ad8a0
	goto loc_820AD8A0;
loc_820AD894:
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r8,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u32);
loc_820AD8A0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820ad87c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820AD87C;
loc_820AD8A8:
	// bl 0x82172d60
	ctx.lr = 0x820AD8AC;
	sub_82172D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820AD8B0:
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

__attribute__((alias("__imp__sub_820AD8C8"))) PPC_WEAK_FUNC(sub_820AD8C8);
PPC_FUNC_IMPL(__imp__sub_820AD8C8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8218a890
	ctx.lr = 0x820AD8DC;
	sub_8218A890(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ad954
	if (ctx.cr6.eq) goto loc_820AD954;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ad954
	if (ctx.cr6.eq) goto loc_820AD954;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x820ad954
	if (!ctx.cr6.eq) goto loc_820AD954;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ad918
	if (ctx.cr6.eq) goto loc_820AD918;
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ad934
	if (!ctx.cr6.eq) goto loc_820AD934;
loc_820AD918:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AD934:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AD954:
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

__attribute__((alias("__imp__sub_820AD970"))) PPC_WEAK_FUNC(sub_820AD970);
PPC_FUNC_IMPL(__imp__sub_820AD970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820AD978;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x820AD99C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ad9dc
	if (ctx.cr6.eq) goto loc_820AD9DC;
loc_820AD9A8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a300
	ctx.lr = 0x820AD9B8;
	sub_8218A300(ctx, base);
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
	ctx.lr = 0x820AD9D0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ad9a8
	if (!ctx.cr6.eq) goto loc_820AD9A8;
loc_820AD9DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AD9E4"))) PPC_WEAK_FUNC(sub_820AD9E4);
PPC_FUNC_IMPL(__imp__sub_820AD9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD9E8"))) PPC_WEAK_FUNC(sub_820AD9E8);
PPC_FUNC_IMPL(__imp__sub_820AD9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820AD9F0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
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
	ctx.lr = 0x820ADA18;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820adaa4
	if (ctx.cr6.eq) goto loc_820ADAA4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-11035
	ctx.r10.s64 = -723189760;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// ori r25,r10,15
	ctx.r25.u64 = ctx.r10.u64 | 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// lfs f31,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820ADA3C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ada80
	if (ctx.cr6.eq) goto loc_820ADA80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x820ada80
	if (!ctx.cr6.eq) goto loc_820ADA80;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// bl 0x820f0aa8
	ctx.lr = 0x820ADA70;
	sub_820F0AA8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82189a70
	ctx.lr = 0x820ADA80;
	sub_82189A70(ctx, base);
loc_820ADA80:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82085870
	ctx.lr = 0x820ADA98;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ada3c
	if (!ctx.cr6.eq) goto loc_820ADA3C;
loc_820ADAA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ADAB0"))) PPC_WEAK_FUNC(sub_820ADAB0);
PPC_FUNC_IMPL(__imp__sub_820ADAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820ADAB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82085870
	ctx.lr = 0x820ADAE4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820adb54
	if (ctx.cr6.eq) goto loc_820ADB54;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820adb54
	if (ctx.cr6.eq) goto loc_820ADB54;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820adb54
	if (!ctx.cr6.lt) goto loc_820ADB54;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8218a820
	ctx.lr = 0x820ADB10;
	sub_8218A820(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820adb54
	if (ctx.cr6.eq) goto loc_820ADB54;
	// bl 0x82198220
	ctx.lr = 0x820ADB20;
	sub_82198220(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821939c0
	ctx.lr = 0x820ADB40;
	sub_821939C0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820adb60
	if (!ctx.cr6.eq) goto loc_820ADB60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82198378
	ctx.lr = 0x820ADB54;
	sub_82198378(ctx, base);
loc_820ADB54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_820ADB60:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82193558
	ctx.lr = 0x820ADB74;
	sub_82193558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82198378
	ctx.lr = 0x820ADB7C;
	sub_82198378(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820adb9c
	if (ctx.cr6.eq) goto loc_820ADB9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_820ADB9C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820adbbc
	if (ctx.cr6.eq) goto loc_820ADBBC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
loc_820ADBBC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x820adbdc
	if (ctx.cr6.eq) goto loc_820ADBDC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
loc_820ADBDC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x820adbfc
	if (ctx.cr6.eq) goto loc_820ADBFC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r10,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r10.u32);
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
loc_820ADBFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ADC08"))) PPC_WEAK_FUNC(sub_820ADC08);
PPC_FUNC_IMPL(__imp__sub_820ADC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820ADC10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	ctx.lr = 0x820ADC2C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820adc94
	if (ctx.cr6.eq) goto loc_820ADC94;
loc_820ADC38:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820adc70
	if (!ctx.cr6.eq) goto loc_820ADC70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820ADC50;
	sub_820AC008(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820adc70
	if (ctx.cr6.eq) goto loc_820ADC70;
	// lhz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 152);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x8233eaf0
	ctx.lr = 0x820ADC70;
	sub_8233EAF0(ctx, base);
loc_820ADC70:
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
	ctx.lr = 0x820ADC88;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820adc38
	if (!ctx.cr6.eq) goto loc_820ADC38;
loc_820ADC94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ADC9C"))) PPC_WEAK_FUNC(sub_820ADC9C);
PPC_FUNC_IMPL(__imp__sub_820ADC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ADCA0"))) PPC_WEAK_FUNC(sub_820ADCA0);
PPC_FUNC_IMPL(__imp__sub_820ADCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820ADCA8;
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
	ctx.lr = 0x820ADCC8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820add04
	if (ctx.cr6.eq) goto loc_820ADD04;
loc_820ADCD4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a3c0
	ctx.lr = 0x820ADCE0;
	sub_8218A3C0(ctx, base);
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
	ctx.lr = 0x820ADCF8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820adcd4
	if (!ctx.cr6.eq) goto loc_820ADCD4;
loc_820ADD04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ADD0C"))) PPC_WEAK_FUNC(sub_820ADD0C);
PPC_FUNC_IMPL(__imp__sub_820ADD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ADD10"))) PPC_WEAK_FUNC(sub_820ADD10);
PPC_FUNC_IMPL(__imp__sub_820ADD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820ADD18;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
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
	ctx.lr = 0x820ADD40;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820add80
	if (ctx.cr6.eq) goto loc_820ADD80;
loc_820ADD4C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a468
	ctx.lr = 0x820ADD5C;
	sub_8218A468(ctx, base);
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
	ctx.lr = 0x820ADD74;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820add4c
	if (!ctx.cr6.eq) goto loc_820ADD4C;
loc_820ADD80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ADD8C"))) PPC_WEAK_FUNC(sub_820ADD8C);
PPC_FUNC_IMPL(__imp__sub_820ADD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ADD90"))) PPC_WEAK_FUNC(sub_820ADD90);
PPC_FUNC_IMPL(__imp__sub_820ADD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820ADD98;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r24,r10,1
	ctx.r24.u64 = ctx.r10.u64 | 1;
	// ori r25,r9,6
	ctx.r25.u64 = ctx.r9.u64 | 6;
	// lis r27,-32171
	ctx.r27.s64 = -2108358656;
	// lis r26,-32197
	ctx.r26.s64 = -2110062592;
	// addi r28,r11,5280
	ctx.r28.s64 = ctx.r11.s64 + 5280;
loc_820ADDD0:
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x820ade24
	if (!ctx.cr6.eq) goto loc_820ADE24;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820adef8
	if (!ctx.cr6.eq) goto loc_820ADEF8;
	// lwz r3,-27096(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820ADDE8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820addf4
	if (!ctx.cr6.eq) goto loc_820ADDF4;
	// bl 0x821b3000
	ctx.lr = 0x820ADDF4;
	sub_821B3000(ctx, base);
loc_820ADDF4:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ade1c
	if (ctx.cr6.eq) goto loc_820ADE1C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ade1c
	if (ctx.cr6.eq) goto loc_820ADE1C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820ade40
	goto loc_820ADE40;
loc_820ADE1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ade40
	goto loc_820ADE40;
loc_820ADE24:
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x820ade70
	if (!ctx.cr6.eq) goto loc_820ADE70;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820adef8
	if (ctx.cr6.eq) goto loc_820ADEF8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820adef8
	if (!ctx.cr6.eq) goto loc_820ADEF8;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820ADE40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ade5c
	if (ctx.cr6.eq) goto loc_820ADE5C;
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
loc_820ADE5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ade68
	if (ctx.cr6.eq) goto loc_820ADE68;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
loc_820ADE68:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x820ade9c
	goto loc_820ADE9C;
loc_820ADE70:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x820ade80
	if (!ctx.cr6.eq) goto loc_820ADE80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820ade98
	goto loc_820ADE98;
loc_820ADE80:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f3178
	ctx.lr = 0x820ADE98;
	sub_820F3178(ctx, base);
loc_820ADE98:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820ADE9C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820adef8
	if (ctx.cr6.eq) goto loc_820ADEF8;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820adee8
	if (ctx.cr6.eq) goto loc_820ADEE8;
	// lwz r11,5540(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5540);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820aded8
	if (!ctx.cr6.eq) goto loc_820ADED8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,5540(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5540, ctx.r10.u32);
	// bl 0x820e35f0
	ctx.lr = 0x820ADED8;
	sub_820E35F0(ctx, base);
loc_820ADED8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stfs f31,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// b 0x820addd0
	goto loc_820ADDD0;
loc_820ADEE8:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stfs f31,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// b 0x820addd0
	goto loc_820ADDD0;
loc_820ADEF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ADF04"))) PPC_WEAK_FUNC(sub_820ADF04);
PPC_FUNC_IMPL(__imp__sub_820ADF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ADF08"))) PPC_WEAK_FUNC(sub_820ADF08);
PPC_FUNC_IMPL(__imp__sub_820ADF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820ADF10;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r24,r10,1
	ctx.r24.u64 = ctx.r10.u64 | 1;
	// ori r25,r9,6
	ctx.r25.u64 = ctx.r9.u64 | 6;
	// lis r27,-32171
	ctx.r27.s64 = -2108358656;
	// lis r26,-32197
	ctx.r26.s64 = -2110062592;
	// addi r28,r11,5280
	ctx.r28.s64 = ctx.r11.s64 + 5280;
loc_820ADF4C:
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x820adfa0
	if (!ctx.cr6.eq) goto loc_820ADFA0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820ae088
	if (!ctx.cr6.eq) goto loc_820AE088;
	// lwz r3,-27096(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820ADF64;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820adf70
	if (!ctx.cr6.eq) goto loc_820ADF70;
	// bl 0x821b3000
	ctx.lr = 0x820ADF70;
	sub_821B3000(ctx, base);
loc_820ADF70:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820adf98
	if (ctx.cr6.eq) goto loc_820ADF98;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820adf98
	if (ctx.cr6.eq) goto loc_820ADF98;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820adfbc
	goto loc_820ADFBC;
loc_820ADF98:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820adfbc
	goto loc_820ADFBC;
loc_820ADFA0:
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x820adfec
	if (!ctx.cr6.eq) goto loc_820ADFEC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ae088
	if (ctx.cr6.eq) goto loc_820AE088;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820ae088
	if (!ctx.cr6.eq) goto loc_820AE088;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820ADFBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820adfd8
	if (ctx.cr6.eq) goto loc_820ADFD8;
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
loc_820ADFD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820adfe4
	if (ctx.cr6.eq) goto loc_820ADFE4;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
loc_820ADFE4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x820ae018
	goto loc_820AE018;
loc_820ADFEC:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x820adffc
	if (!ctx.cr6.eq) goto loc_820ADFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820ae014
	goto loc_820AE014;
loc_820ADFFC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AE014;
	sub_820F3178(ctx, base);
loc_820AE014:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820AE018:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ae088
	if (ctx.cr6.eq) goto loc_820AE088;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ae05c
	if (ctx.cr6.eq) goto loc_820AE05C;
	// lwz r11,5540(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5540);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ae054
	if (!ctx.cr6.eq) goto loc_820AE054;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,5540(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5540, ctx.r10.u32);
	// bl 0x820e35f0
	ctx.lr = 0x820AE054;
	sub_820E35F0(ctx, base);
loc_820AE054:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x820ae060
	goto loc_820AE060;
loc_820AE05C:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_820AE060:
	// stfs f31,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820ae07c
	if (ctx.cr6.eq) goto loc_820AE07C;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// b 0x820adf4c
	goto loc_820ADF4C;
loc_820AE07C:
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// b 0x820adf4c
	goto loc_820ADF4C;
loc_820AE088:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AE094"))) PPC_WEAK_FUNC(sub_820AE094);
PPC_FUNC_IMPL(__imp__sub_820AE094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AE098"))) PPC_WEAK_FUNC(sub_820AE098);
PPC_FUNC_IMPL(__imp__sub_820AE098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820AE0A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ae0d8
	if (!ctx.cr6.eq) goto loc_820AE0D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x821980f8
	ctx.lr = 0x820AE0C8;
	sub_821980F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82198300
	ctx.lr = 0x820AE0D4;
	sub_82198300(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_820AE0D8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x821a67d0
	ctx.lr = 0x820AE0F0;
	sub_821A67D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AE0F8"))) PPC_WEAK_FUNC(sub_820AE0F8);
PPC_FUNC_IMPL(__imp__sub_820AE0F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x821a6740
	sub_821A6740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AE100"))) PPC_WEAK_FUNC(sub_820AE100);
PPC_FUNC_IMPL(__imp__sub_820AE100) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x821a6a70
	ctx.lr = 0x820AE130;
	sub_821A6A70(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ae180
	if (ctx.cr6.eq) goto loc_820AE180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_820AE180:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ae1a0
	if (ctx.cr6.eq) goto loc_820AE1A0;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_820AE1A0:
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

__attribute__((alias("__imp__sub_820AE1B8"))) PPC_WEAK_FUNC(sub_820AE1B8);
PPC_FUNC_IMPL(__imp__sub_820AE1B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r11,r4,148
	ctx.r11.s64 = ctx.r4.s64 * 148;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// lwz r4,44(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x820ae228
	if (ctx.cr6.eq) goto loc_820AE228;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r7,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r4,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r4.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r3,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r3.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r9,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r9.u32);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r8,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r8.u32);
loc_820AE228:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AE24C"))) PPC_WEAK_FUNC(sub_820AE24C);
PPC_FUNC_IMPL(__imp__sub_820AE24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AE250"))) PPC_WEAK_FUNC(sub_820AE250);
PPC_FUNC_IMPL(__imp__sub_820AE250) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x821a6bc0
	ctx.lr = 0x820AE280;
	sub_821A6BC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ae2d0
	if (ctx.cr6.eq) goto loc_820AE2D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_820AE2D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ae2f0
	if (ctx.cr6.eq) goto loc_820AE2F0;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_820AE2F0:
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

__attribute__((alias("__imp__sub_820AE308"))) PPC_WEAK_FUNC(sub_820AE308);
PPC_FUNC_IMPL(__imp__sub_820AE308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AE310;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r11,r4,148
	ctx.r11.s64 = ctx.r4.s64 * 148;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r29,24(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r8,340(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// lwz r28,76(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820AE350;
	sub_8233E4E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820abe28
	ctx.lr = 0x820AE35C;
	sub_820ABE28(ctx, base);
	// lwz r31,128(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ae3ac
	if (ctx.cr6.eq) goto loc_820AE3AC;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
loc_820AE36C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x820ae3ac
	if (ctx.cr6.eq) goto loc_820AE3AC;
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mulli r11,r11,148
	ctx.r11.s64 = ctx.r11.s64 * 148;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822578d8
	ctx.lr = 0x820AE390;
	sub_822578D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820AE3A0;
	sub_8233E4E0(ctx, base);
	// lwz r31,128(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820ae36c
	if (!ctx.cr6.eq) goto loc_820AE36C;
loc_820AE3AC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820ae3fc
	if (ctx.cr6.eq) goto loc_820AE3FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// stw r8,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r8.u32);
	// stw r7,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r7.u32);
	// stw r6,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r6.u32);
	// stw r5,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r5.u32);
	// stw r4,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r4.u32);
	// stw r3,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r3.u32);
loc_820AE3FC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820ae41c
	if (ctx.cr6.eq) goto loc_820AE41C;
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
loc_820AE41C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AE424"))) PPC_WEAK_FUNC(sub_820AE424);
PPC_FUNC_IMPL(__imp__sub_820AE424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AE428"))) PPC_WEAK_FUNC(sub_820AE428);
PPC_FUNC_IMPL(__imp__sub_820AE428) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x821a6c78
	ctx.lr = 0x820AE458;
	sub_821A6C78(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ae4a8
	if (ctx.cr6.eq) goto loc_820AE4A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_820AE4A8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ae4c8
	if (ctx.cr6.eq) goto loc_820AE4C8;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_820AE4C8:
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

__attribute__((alias("__imp__sub_820AE4E0"))) PPC_WEAK_FUNC(sub_820AE4E0);
PPC_FUNC_IMPL(__imp__sub_820AE4E0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x821a6d30
	ctx.lr = 0x820AE510;
	sub_821A6D30(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ae560
	if (ctx.cr6.eq) goto loc_820AE560;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_820AE560:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ae580
	if (ctx.cr6.eq) goto loc_820AE580;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_820AE580:
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

__attribute__((alias("__imp__sub_820AE598"))) PPC_WEAK_FUNC(sub_820AE598);
PPC_FUNC_IMPL(__imp__sub_820AE598) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r11,r4,264
	ctx.r11.s64 = ctx.r4.s64 * 264;
	// lwz r3,64(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// li r9,15
	ctx.r9.s64 = 15;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,1,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x820ae60c
	if (ctx.cr6.eq) goto loc_820AE60C;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r8,24(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,28(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// lwz r5,32(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
loc_820AE60C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820ae62c
	if (ctx.cr6.eq) goto loc_820AE62C;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
loc_820AE62C:
	// b 0x821a6da8
	sub_821A6DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AE630"))) PPC_WEAK_FUNC(sub_820AE630);
PPC_FUNC_IMPL(__imp__sub_820AE630) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r11,r4,264
	ctx.r11.s64 = ctx.r4.s64 * 264;
	// lwz r3,64(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// li r9,29
	ctx.r9.s64 = 29;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x820ae6a4
	if (ctx.cr6.eq) goto loc_820AE6A4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r7,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r7.u32);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r8,24(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// stw r8,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r8.u32);
	// lwz r7,28(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stw r7,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r7.u32);
	// lwz r5,32(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r5,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r5.u32);
loc_820AE6A4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820ae6c4
	if (ctx.cr6.eq) goto loc_820AE6C4;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r8,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r8.u32);
loc_820AE6C4:
	// b 0x821a6da8
	sub_821A6DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AE6C8"))) PPC_WEAK_FUNC(sub_820AE6C8);
PPC_FUNC_IMPL(__imp__sub_820AE6C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r11,r4,264
	ctx.r11.s64 = ctx.r4.s64 * 264;
	// lwz r3,64(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// li r9,27
	ctx.r9.s64 = 27;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x820ae73c
	if (ctx.cr6.eq) goto loc_820AE73C;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r8.u32);
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r7,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r7.u32);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r9,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r9.u32);
	// lwz r8,24(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// stw r8,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r8.u32);
	// lwz r7,28(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stw r7,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r7.u32);
	// lwz r5,32(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r5,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r5.u32);
loc_820AE73C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820ae75c
	if (ctx.cr6.eq) goto loc_820AE75C;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r9.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r8,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r8.u32);
loc_820AE75C:
	// b 0x821a6da8
	sub_821A6DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AE760"))) PPC_WEAK_FUNC(sub_820AE760);
PPC_FUNC_IMPL(__imp__sub_820AE760) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820AE768;
	__savegprlr_14(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// addi r10,r10,-13904
	ctx.r10.s64 = ctx.r10.s64 + -13904;
	// addi r9,r9,-13288
	ctx.r9.s64 = ctx.r9.s64 + -13288;
	// addi r8,r8,-13184
	ctx.r8.s64 = ctx.r8.s64 + -13184;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r7,r7,-13032
	ctx.r7.s64 = ctx.r7.s64 + -13032;
	// stw r8,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r8.u32);
	// addi r6,r6,-12856
	ctx.r6.s64 = ctx.r6.s64 + -12856;
	// addi r5,r5,-12488
	ctx.r5.s64 = ctx.r5.s64 + -12488;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// addi r4,r4,-11336
	ctx.r4.s64 = ctx.r4.s64 + -11336;
	// stw r6,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r6.u32);
	// addi r11,r31,-11192
	ctx.r11.s64 = ctx.r31.s64 + -11192;
	// stw r5,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r5.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// addi r10,r30,-11104
	ctx.r10.s64 = ctx.r30.s64 + -11104;
	// addi r9,r29,-10960
	ctx.r9.s64 = ctx.r29.s64 + -10960;
	// addi r8,r28,-10872
	ctx.r8.s64 = ctx.r28.s64 + -10872;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// addi r7,r27,-10728
	ctx.r7.s64 = ctx.r27.s64 + -10728;
	// addi r6,r26,-10640
	ctx.r6.s64 = ctx.r26.s64 + -10640;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,-10496
	ctx.r5.s64 = ctx.r25.s64 + -10496;
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// addi r4,r24,-12256
	ctx.r4.s64 = ctx.r24.s64 + -12256;
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// addi r11,r23,-11808
	ctx.r11.s64 = ctx.r23.s64 + -11808;
	// stw r5,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r5.u32);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// addi r10,r22,-11568
	ctx.r10.s64 = ctx.r22.s64 + -11568;
	// addi r9,r21,-15024
	ctx.r9.s64 = ctx.r21.s64 + -15024;
	// addi r8,r20,-14784
	ctx.r8.s64 = ctx.r20.s64 + -14784;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,-14776
	ctx.r7.s64 = ctx.r19.s64 + -14776;
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// addi r6,r18,-14648
	ctx.r6.s64 = ctx.r18.s64 + -14648;
	// stw r8,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r8.u32);
	// addi r5,r17,-14536
	ctx.r5.s64 = ctx.r17.s64 + -14536;
	// stw r7,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r7.u32);
	// addi r4,r16,-10408
	ctx.r4.s64 = ctx.r16.s64 + -10408;
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// addi r11,r15,-14416
	ctx.r11.s64 = ctx.r15.s64 + -14416;
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// addi r9,r10,-14328
	ctx.r9.s64 = ctx.r10.s64 + -14328;
	// stw r4,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// addi r8,r14,-14184
	ctx.r8.s64 = ctx.r14.s64 + -14184;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r6,-13824
	ctx.r6.s64 = ctx.r6.s64 + -13824;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r6,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r6.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// addi r7,r7,-14104
	ctx.r7.s64 = ctx.r7.s64 + -14104;
	// addi r5,r5,-13704
	ctx.r5.s64 = ctx.r5.s64 + -13704;
	// addi r4,r4,-13576
	ctx.r4.s64 = ctx.r4.s64 + -13576;
	// stw r7,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r7.u32);
	// addi r11,r11,-13496
	ctx.r11.s64 = ctx.r11.s64 + -13496;
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// addi r10,r10,-13368
	ctx.r10.s64 = ctx.r10.s64 + -13368;
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// addi r9,r9,-12744
	ctx.r9.s64 = ctx.r9.s64 + -12744;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// addi r8,r8,-12568
	ctx.r8.s64 = ctx.r8.s64 + -12568;
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// addi r6,r30,-10320
	ctx.r6.s64 = ctx.r30.s64 + -10320;
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r6,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r6.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32226
	ctx.r26.s64 = -2111963136;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// addi r7,r31,-13984
	ctx.r7.s64 = ctx.r31.s64 + -13984;
	// addi r5,r29,-10216
	ctx.r5.s64 = ctx.r29.s64 + -10216;
	// addi r4,r28,-10040
	ctx.r4.s64 = ctx.r28.s64 + -10040;
	// stw r7,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// addi r11,r27,-9872
	ctx.r11.s64 = ctx.r27.s64 + -9872;
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// addi r10,r26,-21912
	ctx.r10.s64 = ctx.r26.s64 + -21912;
	// stw r4,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
	// addi r9,r25,-9752
	ctx.r9.s64 = ctx.r25.s64 + -9752;
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// addi r8,r24,-9552
	ctx.r8.s64 = ctx.r24.s64 + -9552;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// addi r6,r22,-9056
	ctx.r6.s64 = ctx.r22.s64 + -9056;
	// stw r9,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r9.u32);
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// stw r8,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// stw r6,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r6.u32);
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lwz r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// addi r7,r23,-9208
	ctx.r7.s64 = ctx.r23.s64 + -9208;
	// addi r5,r21,-8944
	ctx.r5.s64 = ctx.r21.s64 + -8944;
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// stw r7,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r7.u32);
	// addi r4,r20,-8816
	ctx.r4.s64 = ctx.r20.s64 + -8816;
	// stw r5,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r5.u32);
	// addi r11,r19,-8440
	ctx.r11.s64 = ctx.r19.s64 + -8440;
	// addi r10,r18,-8040
	ctx.r10.s64 = ctx.r18.s64 + -8040;
	// stw r4,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r4.u32);
	// addi r9,r17,-7944
	ctx.r9.s64 = ctx.r17.s64 + -7944;
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// addi r8,r16,-7936
	ctx.r8.s64 = ctx.r16.s64 + -7936;
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r9,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r9.u32);
	// addi r7,r15,-7752
	ctx.r7.s64 = ctx.r15.s64 + -7752;
	// stw r8,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r8.u32);
	// addi r5,r6,-7600
	ctx.r5.s64 = ctx.r6.s64 + -7600;
	// addi r4,r14,-7416
	ctx.r4.s64 = ctx.r14.s64 + -7416;
	// stw r7,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r7.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r5,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r5.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r4,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r4.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r11,-7128
	ctx.r6.s64 = ctx.r11.s64 + -7128;
	// addi r5,r10,-6944
	ctx.r5.s64 = ctx.r10.s64 + -6944;
	// addi r4,r9,-6760
	ctx.r4.s64 = ctx.r9.s64 + -6760;
	// stw r6,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r6.u32);
	// addi r11,r8,-6608
	ctx.r11.s64 = ctx.r8.s64 + -6608;
	// stw r5,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r5.u32);
	// addi r10,r7,-6456
	ctx.r10.s64 = ctx.r7.s64 + -6456;
	// stw r4,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r4.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r10,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r10.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AEA40"))) PPC_WEAK_FUNC(sub_820AEA40);
PPC_FUNC_IMPL(__imp__sub_820AEA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,0,5,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f12,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r8,r9,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x820aeac0
	if (ctx.cr6.eq) goto loc_820AEAC0;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x820aeafc
	if (ctx.cr6.eq) goto loc_820AEAFC;
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fdivs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fmadds f13,f7,f9,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f13.f64));
	// stfs f13,24(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// blr 
	return;
loc_820AEAC0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x820aeafc
	if (ctx.cr6.eq) goto loc_820AEAFC;
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fdivs f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fnmsubs f4,f5,f11,f10
	ctx.f4.f64 = double(float(-(ctx.f5.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// fmuls f3,f5,f5
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmadds f13,f2,f7,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f13.f64));
loc_820AEAFC:
	// stfs f13,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AEB0C"))) PPC_WEAK_FUNC(sub_820AEB0C);
PPC_FUNC_IMPL(__imp__sub_820AEB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AEB10"))) PPC_WEAK_FUNC(sub_820AEB10);
PPC_FUNC_IMPL(__imp__sub_820AEB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lfs f0,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f12,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f11,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f10,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,52(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f9,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f8,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,68(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f4,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,28(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f3,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f2,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f1,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,32(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AEBA4"))) PPC_WEAK_FUNC(sub_820AEBA4);
PPC_FUNC_IMPL(__imp__sub_820AEBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AEBA8"))) PPC_WEAK_FUNC(sub_820AEBA8);
PPC_FUNC_IMPL(__imp__sub_820AEBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x820aebc8
	if (ctx.cr6.gt) goto loc_820AEBC8;
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
loc_820AEBC8:
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x820aec00
	if (ctx.cr6.gt) goto loc_820AEC00;
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,16(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f4,20(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
loc_820AEC00:
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x820aec14
	if (ctx.cr6.gt) goto loc_820AEC14;
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
loc_820AEC14:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AEC4C"))) PPC_WEAK_FUNC(sub_820AEC4C);
PPC_FUNC_IMPL(__imp__sub_820AEC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AEC50"))) PPC_WEAK_FUNC(sub_820AEC50);
PPC_FUNC_IMPL(__imp__sub_820AEC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// rlwinm r11,r10,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// beq cr6,0x820aecc0
	if (ctx.cr6.eq) goto loc_820AECC0;
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f10,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// fadds f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fadds f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// beq cr6,0x820aecb4
	if (ctx.cr6.eq) goto loc_820AECB4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x820aecb8
	goto loc_820AECB8;
loc_820AECB4:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_820AECB8:
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// b 0x822275c8
	sub_822275C8(ctx, base);
	return;
loc_820AECC0:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822275c8
	sub_822275C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AECD0"))) PPC_WEAK_FUNC(sub_820AECD0);
PPC_FUNC_IMPL(__imp__sub_820AECD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AECD4"))) PPC_WEAK_FUNC(sub_820AECD4);
PPC_FUNC_IMPL(__imp__sub_820AECD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AECD8"))) PPC_WEAK_FUNC(sub_820AECD8);
PPC_FUNC_IMPL(__imp__sub_820AECD8) {
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
	// bl 0x820ac008
	ctx.lr = 0x820AECF4;
	sub_820AC008(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r31,r3,80
	ctx.r31.s64 = ctx.r3.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820aeb10
	ctx.lr = 0x820AED08;
	sub_820AEB10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820aeba8
	ctx.lr = 0x820AED10;
	sub_820AEBA8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820aec50
	ctx.lr = 0x820AED20;
	sub_820AEC50(ctx, base);
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

__attribute__((alias("__imp__sub_820AED38"))) PPC_WEAK_FUNC(sub_820AED38);
PPC_FUNC_IMPL(__imp__sub_820AED38) {
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
	ctx.lr = 0x820AED50;
	sub_82081C00(ctx, base);
	// bl 0x820b2058
	ctx.lr = 0x820AED54;
	sub_820B2058(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820AED64;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820aed78
	if (!ctx.cr6.eq) goto loc_820AED78;
	// bl 0x821b3000
	ctx.lr = 0x820AED74;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820AED78:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820aed90
	if (ctx.cr6.eq) goto loc_820AED90;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_820AED90:
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

__attribute__((alias("__imp__sub_820AEDA4"))) PPC_WEAK_FUNC(sub_820AEDA4);
PPC_FUNC_IMPL(__imp__sub_820AEDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AEDA8"))) PPC_WEAK_FUNC(sub_820AEDA8);
PPC_FUNC_IMPL(__imp__sub_820AEDA8) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820aedf8
	if (ctx.cr6.eq) goto loc_820AEDF8;
	// bl 0x820aed38
	ctx.lr = 0x820AEDC8;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aede4
	if (ctx.cr6.eq) goto loc_820AEDE4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820aede8
	goto loc_820AEDE8;
loc_820AEDE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820AEDE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820AEDF8;
	sub_82089220(ctx, base);
loc_820AEDF8:
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

__attribute__((alias("__imp__sub_820AEE0C"))) PPC_WEAK_FUNC(sub_820AEE0C);
PPC_FUNC_IMPL(__imp__sub_820AEE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AEE10"))) PPC_WEAK_FUNC(sub_820AEE10);
PPC_FUNC_IMPL(__imp__sub_820AEE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x820AEE18;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x820af0e0
	if (ctx.cr6.eq) goto loc_820AF0E0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r22,r11,1
	ctx.r22.u64 = ctx.r11.u64 | 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r20,r10,6
	ctx.r20.u64 = ctx.r10.u64 | 6;
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x820aee78
	if (!ctx.cr6.eq) goto loc_820AEE78;
	// bl 0x820ddca8
	ctx.lr = 0x820AEE60;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aee70
	if (ctx.cr6.eq) goto loc_820AEE70;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820aee8c
	goto loc_820AEE8C;
loc_820AEE70:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x820aee8c
	goto loc_820AEE8C;
loc_820AEE78:
	// cmpw cr6,r3,r20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x820aee9c
	if (!ctx.cr6.eq) goto loc_820AEE9C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820af0e0
	if (ctx.cr6.eq) goto loc_820AF0E0;
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820AEE8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820aeebc
	if (ctx.cr6.eq) goto loc_820AEEBC;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// b 0x820aeebc
	goto loc_820AEEBC;
loc_820AEE9C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820af0e0
	if (ctx.cr6.eq) goto loc_820AF0E0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AEEB8;
	sub_820F3178(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820AEEBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820af0e0
	if (ctx.cr6.eq) goto loc_820AF0E0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820aeef8
	if (ctx.cr6.eq) goto loc_820AEEF8;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x820aeef8
	if (ctx.cr6.eq) goto loc_820AEEF8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,25448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25448);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AEEF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x820aef14
	goto loc_820AEF14;
loc_820AEEF8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820aef10
	if (!ctx.cr6.eq) goto loc_820AEF10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820AEF0C;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820AEF10:
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
loc_820AEF14:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x820aed38
	ctx.lr = 0x820AEF30;
	sub_820AED38(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aef4c
	if (ctx.cr6.eq) goto loc_820AEF4C;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r27.u32);
	// b 0x820aef50
	goto loc_820AEF50;
loc_820AEF4C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_820AEF50:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
loc_820AEF64:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820aef64
	if (!ctx.cr0.eq) goto loc_820AEF64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x820aefa0
	if (!ctx.cr6.eq) goto loc_820AEFA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820AEF9C;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820AEFA0:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r7,r29,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f0,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// lfs f13,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stb r24,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r24.u8);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stb r27,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r27.u8);
	// stb r27,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r27.u8);
	// beq cr6,0x820af0cc
	if (ctx.cr6.eq) goto loc_820AF0CC;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x820af040
	if (!ctx.cr6.eq) goto loc_820AF040;
	// bl 0x820ddca8
	ctx.lr = 0x820AF028;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af038
	if (ctx.cr6.eq) goto loc_820AF038;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820af054
	goto loc_820AF054;
loc_820AF038:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x820af054
	goto loc_820AF054;
loc_820AF040:
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x820af064
	if (!ctx.cr6.eq) goto loc_820AF064;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x820af0c4
	if (ctx.cr6.eq) goto loc_820AF0C4;
	// lwz r30,44(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
loc_820AF054:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x820af088
	if (ctx.cr6.eq) goto loc_820AF088;
	// stw r30,44(r21)
	PPC_STORE_U32(ctx.r21.u32 + 44, ctx.r30.u32);
	// b 0x820af088
	goto loc_820AF088;
loc_820AF064:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x820af0c4
	if (ctx.cr6.eq) goto loc_820AF0C4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AF084;
	sub_820F3178(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820AF088:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820af0c4
	if (ctx.cr6.eq) goto loc_820AF0C4;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820af0a8
	if (!ctx.cr6.eq) goto loc_820AF0A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820AF0A4;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820AF0A8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820AF0B8;
	sub_82089220(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_820AF0C4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
loc_820AF0CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82089220
	ctx.lr = 0x820AF0D4;
	sub_82089220(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_820AF0E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AF0EC"))) PPC_WEAK_FUNC(sub_820AF0EC);
PPC_FUNC_IMPL(__imp__sub_820AF0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AF0F0"))) PPC_WEAK_FUNC(sub_820AF0F0);
PPC_FUNC_IMPL(__imp__sub_820AF0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AF0F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820af2a4
	if (ctx.cr6.eq) goto loc_820AF2A4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820af140
	if (ctx.cr6.eq) goto loc_820AF140;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,25448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25448);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820AF140:
	// bl 0x820aed38
	ctx.lr = 0x820AF144;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af164
	if (ctx.cr6.eq) goto loc_820AF164;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820af168
	goto loc_820AF168;
loc_820AF164:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820AF168:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
loc_820AF17C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820af17c
	if (!ctx.cr0.eq) goto loc_820AF17C;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// rlwinm r6,r30,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// beq cr6,0x820af290
	if (ctx.cr6.eq) goto loc_820AF290;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820af1fc
	if (!ctx.cr6.eq) goto loc_820AF1FC;
	// bl 0x820ddca8
	ctx.lr = 0x820AF1E4;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af1f4
	if (ctx.cr6.eq) goto loc_820AF1F4;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820af218
	goto loc_820AF218;
loc_820AF1F4:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x820af218
	goto loc_820AF218;
loc_820AF1FC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820af228
	if (!ctx.cr6.eq) goto loc_820AF228;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820af288
	if (ctx.cr6.eq) goto loc_820AF288;
	// lwz r30,44(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
loc_820AF218:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820af24c
	if (ctx.cr6.eq) goto loc_820AF24C;
	// stw r30,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r30.u32);
	// b 0x820af24c
	goto loc_820AF24C;
loc_820AF228:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x820af288
	if (ctx.cr6.eq) goto loc_820AF288;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AF248;
	sub_820F3178(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820AF24C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820af288
	if (ctx.cr6.eq) goto loc_820AF288;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820af26c
	if (!ctx.cr6.eq) goto loc_820AF26C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820AF268;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820AF26C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820AF27C;
	sub_82089220(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820AF288:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_820AF290:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82089220
	ctx.lr = 0x820AF298;
	sub_82089220(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820AF2A4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AF2B0"))) PPC_WEAK_FUNC(sub_820AF2B0);
PPC_FUNC_IMPL(__imp__sub_820AF2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x820AF2B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x820af50c
	if (ctx.cr6.eq) goto loc_820AF50C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r22,r11,1
	ctx.r22.u64 = ctx.r11.u64 | 1;
	// ori r21,r10,6
	ctx.r21.u64 = ctx.r10.u64 | 6;
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x820af318
	if (!ctx.cr6.eq) goto loc_820AF318;
	// bl 0x820ddca8
	ctx.lr = 0x820AF300;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af310
	if (ctx.cr6.eq) goto loc_820AF310;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820af32c
	goto loc_820AF32C;
loc_820AF310:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x820af32c
	goto loc_820AF32C;
loc_820AF318:
	// cmpw cr6,r31,r21
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x820af33c
	if (!ctx.cr6.eq) goto loc_820AF33C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820af50c
	if (ctx.cr6.eq) goto loc_820AF50C;
	// lwz r30,44(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
loc_820AF32C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820af360
	if (ctx.cr6.eq) goto loc_820AF360;
	// stw r30,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r30.u32);
	// b 0x820af360
	goto loc_820AF360;
loc_820AF33C:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x820af50c
	if (ctx.cr6.eq) goto loc_820AF50C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AF35C;
	sub_820F3178(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820AF360:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820af50c
	if (ctx.cr6.eq) goto loc_820AF50C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820af3a4
	if (ctx.cr6.eq) goto loc_820AF3A4;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x820af3a4
	if (ctx.cr6.eq) goto loc_820AF3A4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820af3a8
	if (ctx.cr6.eq) goto loc_820AF3A8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,25448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25448);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x820af3a8
	goto loc_820AF3A8;
loc_820AF3A4:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_820AF3A8:
	// bl 0x820aed38
	ctx.lr = 0x820AF3AC;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af3cc
	if (ctx.cr6.eq) goto loc_820AF3CC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820af3d0
	goto loc_820AF3D0;
loc_820AF3CC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820AF3D0:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
loc_820AF3E4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820af3e4
	if (!ctx.cr0.eq) goto loc_820AF3E4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x820af420
	if (!ctx.cr6.eq) goto loc_820AF420;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820AF41C;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820AF420:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r29,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r24,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r24.u8);
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// beq cr6,0x820af4f8
	if (ctx.cr6.eq) goto loc_820AF4F8;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x820af46c
	if (!ctx.cr6.eq) goto loc_820AF46C;
	// bl 0x820ddca8
	ctx.lr = 0x820AF454;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af464
	if (ctx.cr6.eq) goto loc_820AF464;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820af480
	goto loc_820AF480;
loc_820AF464:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x820af480
	goto loc_820AF480;
loc_820AF46C:
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x820af490
	if (!ctx.cr6.eq) goto loc_820AF490;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820af4f0
	if (ctx.cr6.eq) goto loc_820AF4F0;
	// lwz r30,44(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
loc_820AF480:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820af4b4
	if (ctx.cr6.eq) goto loc_820AF4B4;
	// stw r30,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r30.u32);
	// b 0x820af4b4
	goto loc_820AF4B4;
loc_820AF490:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x820af4f0
	if (ctx.cr6.eq) goto loc_820AF4F0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AF4B0;
	sub_820F3178(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820AF4B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820af4f0
	if (ctx.cr6.eq) goto loc_820AF4F0;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820af4d4
	if (!ctx.cr6.eq) goto loc_820AF4D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820AF4D0;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820AF4D4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820AF4E4;
	sub_82089220(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_820AF4F0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_820AF4F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82089220
	ctx.lr = 0x820AF500;
	sub_82089220(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_820AF50C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AF518"))) PPC_WEAK_FUNC(sub_820AF518);
PPC_FUNC_IMPL(__imp__sub_820AF518) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820af568
	if (ctx.cr6.eq) goto loc_820AF568;
	// bl 0x820aed38
	ctx.lr = 0x820AF538;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af554
	if (ctx.cr6.eq) goto loc_820AF554;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820af558
	goto loc_820AF558;
loc_820AF554:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820AF558:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820AF568;
	sub_82089220(ctx, base);
loc_820AF568:
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

__attribute__((alias("__imp__sub_820AF57C"))) PPC_WEAK_FUNC(sub_820AF57C);
PPC_FUNC_IMPL(__imp__sub_820AF57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AF580"))) PPC_WEAK_FUNC(sub_820AF580);
PPC_FUNC_IMPL(__imp__sub_820AF580) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820af5dc
	if (ctx.cr6.eq) goto loc_820AF5DC;
	// bl 0x820aed38
	ctx.lr = 0x820AF5A8;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af5c4
	if (ctx.cr6.eq) goto loc_820AF5C4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820af5c8
	goto loc_820AF5C8;
loc_820AF5C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820AF5C8:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820AF5DC;
	sub_82089220(ctx, base);
loc_820AF5DC:
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

__attribute__((alias("__imp__sub_820AF5F4"))) PPC_WEAK_FUNC(sub_820AF5F4);
PPC_FUNC_IMPL(__imp__sub_820AF5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AF5F8"))) PPC_WEAK_FUNC(sub_820AF5F8);
PPC_FUNC_IMPL(__imp__sub_820AF5F8) {
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
	// bl 0x820aed38
	ctx.lr = 0x820AF610;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af62c
	if (ctx.cr6.eq) goto loc_820AF62C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820af630
	goto loc_820AF630;
loc_820AF62C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820AF630:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820AF640;
	sub_82089220(ctx, base);
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

__attribute__((alias("__imp__sub_820AF654"))) PPC_WEAK_FUNC(sub_820AF654);
PPC_FUNC_IMPL(__imp__sub_820AF654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AF658"))) PPC_WEAK_FUNC(sub_820AF658);
PPC_FUNC_IMPL(__imp__sub_820AF658) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820af6b4
	if (ctx.cr6.eq) goto loc_820AF6B4;
	// bl 0x820aed38
	ctx.lr = 0x820AF680;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af69c
	if (ctx.cr6.eq) goto loc_820AF69C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820af6a0
	goto loc_820AF6A0;
loc_820AF69C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820AF6A0:
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820AF6B4;
	sub_82089220(ctx, base);
loc_820AF6B4:
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

__attribute__((alias("__imp__sub_820AF6CC"))) PPC_WEAK_FUNC(sub_820AF6CC);
PPC_FUNC_IMPL(__imp__sub_820AF6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AF6D0"))) PPC_WEAK_FUNC(sub_820AF6D0);
PPC_FUNC_IMPL(__imp__sub_820AF6D0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x820af794
	if (ctx.cr6.eq) goto loc_820AF794;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820af720
	if (!ctx.cr6.eq) goto loc_820AF720;
	// bl 0x820ddca8
	ctx.lr = 0x820AF708;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af718
	if (ctx.cr6.eq) goto loc_820AF718;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820af73c
	goto loc_820AF73C;
loc_820AF718:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820af73c
	goto loc_820AF73C;
loc_820AF720:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820af74c
	if (!ctx.cr6.eq) goto loc_820AF74C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820af794
	if (ctx.cr6.eq) goto loc_820AF794;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820AF73C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820af768
	if (ctx.cr6.eq) goto loc_820AF768;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820af768
	goto loc_820AF768;
loc_820AF74C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820af794
	if (ctx.cr6.eq) goto loc_820AF794;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AF768;
	sub_820F3178(ctx, base);
loc_820AF768:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af794
	if (ctx.cr6.eq) goto loc_820AF794;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af794
	if (ctx.cr6.eq) goto loc_820AF794;
loc_820AF77C:
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x820af7b0
	if (ctx.cr6.eq) goto loc_820AF7B0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820af77c
	if (!ctx.cr6.eq) goto loc_820AF77C;
loc_820AF794:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820AF798:
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
loc_820AF7B0:
	// lwz r3,264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// b 0x820af798
	goto loc_820AF798;
}

__attribute__((alias("__imp__sub_820AF7B8"))) PPC_WEAK_FUNC(sub_820AF7B8);
PPC_FUNC_IMPL(__imp__sub_820AF7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820af7f4
	if (ctx.cr6.eq) goto loc_820AF7F4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820af7f4
	if (ctx.cr6.lt) goto loc_820AF7F4;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820af7f8
	if (!ctx.cr6.gt) goto loc_820AF7F8;
loc_820AF7F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AF7F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// stfs f1,20(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AF82C"))) PPC_WEAK_FUNC(sub_820AF82C);
PPC_FUNC_IMPL(__imp__sub_820AF82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AF830"))) PPC_WEAK_FUNC(sub_820AF830);
PPC_FUNC_IMPL(__imp__sub_820AF830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lfs f1,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AF840"))) PPC_WEAK_FUNC(sub_820AF840);
PPC_FUNC_IMPL(__imp__sub_820AF840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820AF848;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r7,r9,0,1,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7F800000;
	// lfs f0,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820af8a0
	if (ctx.cr6.eq) goto loc_820AF8A0;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x820af8a4
	if (!ctx.cr6.lt) goto loc_820AF8A4;
loc_820AF8A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AF8A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af9f0
	if (ctx.cr6.eq) goto loc_820AF9F0;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820af8d0
	if (ctx.cr6.eq) goto loc_820AF8D0;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x820af8d4
	if (!ctx.cr6.lt) goto loc_820AF8D4;
loc_820AF8D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AF8D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af9f0
	if (ctx.cr6.eq) goto loc_820AF9F0;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x820af9f0
	if (ctx.cr6.eq) goto loc_820AF9F0;
	// bl 0x820aed38
	ctx.lr = 0x820AF8EC;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af90c
	if (ctx.cr6.eq) goto loc_820AF90C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820af910
	goto loc_820AF910;
loc_820AF90C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820AF910:
	// li r11,128
	ctx.r11.s64 = 128;
	// stfs f31,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stfs f30,20(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// beq cr6,0x820af9e4
	if (ctx.cr6.eq) goto loc_820AF9E4;
	// rlwinm r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af9e4
	if (ctx.cr6.eq) goto loc_820AF9E4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820af96c
	if (!ctx.cr6.eq) goto loc_820AF96C;
	// bl 0x820ddca8
	ctx.lr = 0x820AF954;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af964
	if (ctx.cr6.eq) goto loc_820AF964;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820af988
	goto loc_820AF988;
loc_820AF964:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820af988
	goto loc_820AF988;
loc_820AF96C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820af998
	if (!ctx.cr6.eq) goto loc_820AF998;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820af9bc
	if (ctx.cr6.eq) goto loc_820AF9BC;
	// lwz r31,44(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
loc_820AF988:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820af9b4
	if (ctx.cr6.eq) goto loc_820AF9B4;
	// stw r31,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r31.u32);
	// b 0x820af9b4
	goto loc_820AF9B4;
loc_820AF998:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AF9B0;
	sub_820F3178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820AF9B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820af9c4
	if (!ctx.cr6.eq) goto loc_820AF9C4;
loc_820AF9BC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x820af9e0
	goto loc_820AF9E0;
loc_820AF9C4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820af9dc
	if (!ctx.cr6.eq) goto loc_820AF9DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820AF9D8;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820AF9DC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
loc_820AF9E0:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_820AF9E4:
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82089220
	ctx.lr = 0x820AF9F0;
	sub_82089220(ctx, base);
loc_820AF9F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFA00"))) PPC_WEAK_FUNC(sub_820AFA00);
PPC_FUNC_IMPL(__imp__sub_820AFA00) {
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
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820afa54
	if (ctx.cr6.eq) goto loc_820AFA54;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820afa58
	if (!ctx.cr6.lt) goto loc_820AFA58;
loc_820AFA54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AFA58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820afaa0
	if (ctx.cr6.eq) goto loc_820AFAA0;
	// bl 0x820aed38
	ctx.lr = 0x820AFA68;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820afa84
	if (ctx.cr6.eq) goto loc_820AFA84;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820afa88
	goto loc_820AFA88;
loc_820AFA84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820AFA88:
	// li r11,256
	ctx.r11.s64 = 256;
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r30,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r30.u8);
	// bl 0x82089220
	ctx.lr = 0x820AFAA0;
	sub_82089220(ctx, base);
loc_820AFAA0:
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

__attribute__((alias("__imp__sub_820AFABC"))) PPC_WEAK_FUNC(sub_820AFABC);
PPC_FUNC_IMPL(__imp__sub_820AFABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFAC0"))) PPC_WEAK_FUNC(sub_820AFAC0);
PPC_FUNC_IMPL(__imp__sub_820AFAC0) {
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
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820afb0c
	if (ctx.cr6.eq) goto loc_820AFB0C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820afb10
	if (!ctx.cr6.lt) goto loc_820AFB10;
loc_820AFB0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AFB10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820afb54
	if (ctx.cr6.eq) goto loc_820AFB54;
	// bl 0x820aed38
	ctx.lr = 0x820AFB20;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820afb3c
	if (ctx.cr6.eq) goto loc_820AFB3C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820afb40
	goto loc_820AFB40;
loc_820AFB3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820AFB40:
	// li r11,512
	ctx.r11.s64 = 512;
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820AFB54;
	sub_82089220(ctx, base);
loc_820AFB54:
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

__attribute__((alias("__imp__sub_820AFB6C"))) PPC_WEAK_FUNC(sub_820AFB6C);
PPC_FUNC_IMPL(__imp__sub_820AFB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFB70"))) PPC_WEAK_FUNC(sub_820AFB70);
PPC_FUNC_IMPL(__imp__sub_820AFB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820afbc0
	if (ctx.cr6.eq) goto loc_820AFBC0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820afbc0
	if (ctx.cr6.lt) goto loc_820AFBC0;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820afbc4
	if (!ctx.cr6.gt) goto loc_820AFBC4;
loc_820AFBC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AFBC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820afbd8
	if (ctx.cr6.eq) goto loc_820AFBD8;
	// bl 0x82085820
	ctx.lr = 0x820AFBD4;
	sub_82085820(ctx, base);
	// stfs f31,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
loc_820AFBD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AFBEC"))) PPC_WEAK_FUNC(sub_820AFBEC);
PPC_FUNC_IMPL(__imp__sub_820AFBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFBF0"))) PPC_WEAK_FUNC(sub_820AFBF0);
PPC_FUNC_IMPL(__imp__sub_820AFBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820afc40
	if (ctx.cr6.eq) goto loc_820AFC40;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820afc40
	if (ctx.cr6.lt) goto loc_820AFC40;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820afc44
	if (!ctx.cr6.gt) goto loc_820AFC44;
loc_820AFC40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AFC44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820afc58
	if (ctx.cr6.eq) goto loc_820AFC58;
	// bl 0x82085820
	ctx.lr = 0x820AFC54;
	sub_82085820(ctx, base);
	// stfs f31,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
loc_820AFC58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AFC6C"))) PPC_WEAK_FUNC(sub_820AFC6C);
PPC_FUNC_IMPL(__imp__sub_820AFC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFC70"))) PPC_WEAK_FUNC(sub_820AFC70);
PPC_FUNC_IMPL(__imp__sub_820AFC70) {
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
	ctx.lr = 0x820AFC84;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820afca4
	if (!ctx.cr6.eq) goto loc_820AFCA4;
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
loc_820AFCA4:
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x82172d60
	ctx.lr = 0x820AFCAC;
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

__attribute__((alias("__imp__sub_820AFCC4"))) PPC_WEAK_FUNC(sub_820AFCC4);
PPC_FUNC_IMPL(__imp__sub_820AFCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFCC8"))) PPC_WEAK_FUNC(sub_820AFCC8);
PPC_FUNC_IMPL(__imp__sub_820AFCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x820aed38
	ctx.lr = 0x820AFCF0;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820afd0c
	if (ctx.cr6.eq) goto loc_820AFD0C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820afd10
	goto loc_820AFD10;
loc_820AFD0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820AFD10:
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f30,16(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820AFD28;
	sub_82089220(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

