#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820F5384"))) PPC_WEAK_FUNC(sub_820F5384);
PPC_FUNC_IMPL(__imp__sub_820F5384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F5388"))) PPC_WEAK_FUNC(sub_820F5388);
PPC_FUNC_IMPL(__imp__sub_820F5388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820F5390;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa34
	ctx.lr = 0x820F5398;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-18000
	ctx.r9.s64 = ctx.r11.s64 + -18000;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r7,r10,31376
	ctx.r7.s64 = ctx.r10.s64 + 31376;
	// addi r6,r8,22200
	ctx.r6.s64 = ctx.r8.s64 + 22200;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r31,112(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// lfs f29,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f27,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f27.f64 = double(temp.f32);
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// beq cr6,0x820f5484
	if (ctx.cr6.eq) goto loc_820F5484;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r28,r11,-29208
	ctx.r28.s64 = ctx.r11.s64 + -29208;
loc_820F53DC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,200(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// rlwinm r11,r10,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5478
	if (!ctx.cr6.eq) goto loc_820F5478;
	// rlwinm r11,r10,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5478
	if (!ctx.cr6.eq) goto loc_820F5478;
	// lhz r11,178(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 178);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x820f5434
	if (ctx.cr6.eq) goto loc_820F5434;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820f5430
	if (!ctx.cr6.lt) goto loc_820F5430;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r28,8
	ctx.r9.s64 = ctx.r28.s64 + 8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f5430
	if (ctx.cr6.eq) goto loc_820F5430;
	// lfs f30,472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f30.f64 = double(temp.f32);
	// b 0x820f5434
	goto loc_820F5434;
loc_820F5430:
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
loc_820F5434:
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f28
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// rlwinm r9,r11,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f5450
	if (ctx.cr6.eq) goto loc_820F5450;
	// fmuls f31,f31,f30
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
loc_820F5450:
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f5464
	if (!ctx.cr6.eq) goto loc_820F5464;
	// fdivs f31,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f27.f64));
loc_820F5464:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f7f48
	ctx.lr = 0x820F546C;
	sub_820F7F48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820ef818
	ctx.lr = 0x820F5478;
	sub_820EF818(ctx, base);
loc_820F5478:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820f53dc
	if (!ctx.cr6.eq) goto loc_820F53DC;
loc_820F5484:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa80
	ctx.lr = 0x820F5490;
	__restfpr_27(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F5494"))) PPC_WEAK_FUNC(sub_820F5494);
PPC_FUNC_IMPL(__imp__sub_820F5494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F5498"))) PPC_WEAK_FUNC(sub_820F5498);
PPC_FUNC_IMPL(__imp__sub_820F5498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820F54A0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8233fa38
	ctx.lr = 0x820F54A8;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-18000
	ctx.r9.s64 = ctx.r11.s64 + -18000;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r7,r10,31376
	ctx.r7.s64 = ctx.r10.s64 + 31376;
	// addi r6,r8,22200
	ctx.r6.s64 = ctx.r8.s64 + 22200;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r3,88(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lfs f30,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f28,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// beq cr6,0x820f5584
	if (ctx.cr6.eq) goto loc_820F5584;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r29,r11,-29208
	ctx.r29.s64 = ctx.r11.s64 + -29208;
loc_820F54EC:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r31,200(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// rlwinm r11,r10,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5578
	if (!ctx.cr6.eq) goto loc_820F5578;
	// rlwinm r11,r10,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5578
	if (!ctx.cr6.eq) goto loc_820F5578;
	// lhz r11,178(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 178);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820f5544
	if (ctx.cr6.eq) goto loc_820F5544;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820f5540
	if (!ctx.cr6.lt) goto loc_820F5540;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f5540
	if (ctx.cr6.eq) goto loc_820F5540;
	// lfs f31,472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820f5544
	goto loc_820F5544;
loc_820F5540:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_820F5544:
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// rlwinm r9,r11,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f5560
	if (ctx.cr6.eq) goto loc_820F5560;
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_820F5560:
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f5574
	if (!ctx.cr6.eq) goto loc_820F5574;
	// fdivs f1,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f28.f64));
loc_820F5574:
	// bl 0x820ef818
	ctx.lr = 0x820F5578;
	sub_820EF818(ctx, base);
loc_820F5578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820f54ec
	if (!ctx.cr6.eq) goto loc_820F54EC;
loc_820F5584:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8233fa84
	ctx.lr = 0x820F5590;
	__restfpr_28(ctx, base);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F5594"))) PPC_WEAK_FUNC(sub_820F5594);
PPC_FUNC_IMPL(__imp__sub_820F5594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F5598"))) PPC_WEAK_FUNC(sub_820F5598);
PPC_FUNC_IMPL(__imp__sub_820F5598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820F55A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F55CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4096, ctx.xer);
	// blt cr6,0x820f55e0
	if (ctx.cr6.lt) goto loc_820F55E0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x820f55f4
	goto loc_820F55F4;
loc_820F55E0:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_820F55F4:
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f5614
	if (!ctx.cr6.eq) goto loc_820F5614;
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 436, ctx.r31.u32);
	// b 0x820f5678
	goto loc_820F5678;
loc_820F5614:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-18000
	ctx.r9.s64 = ctx.r9.s64 + -18000;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-3080
	ctx.r11.s64 = ctx.r11.s64 + -3080;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f5648
	if (ctx.cr6.eq) goto loc_820F5648;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x820f564c
	goto loc_820F564C;
loc_820F5648:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_820F564C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// bl 0x820f2150
	ctx.lr = 0x820F5678;
	sub_820F2150(ctx, base);
loc_820F5678:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x820f0ef0
	ctx.lr = 0x820F568C;
	sub_820F0EF0(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f56bc
	if (ctx.cr6.eq) goto loc_820F56BC;
	// bl 0x820f07a0
	ctx.lr = 0x820F56A0;
	sub_820F07A0(ctx, base);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f56bc
	if (!ctx.cr6.eq) goto loc_820F56BC;
	// bl 0x820f0810
	ctx.lr = 0x820F56B8;
	sub_820F0810(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F56BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F56C4"))) PPC_WEAK_FUNC(sub_820F56C4);
PPC_FUNC_IMPL(__imp__sub_820F56C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F56C8"))) PPC_WEAK_FUNC(sub_820F56C8);
PPC_FUNC_IMPL(__imp__sub_820F56C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820F56D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820f7b90
	ctx.lr = 0x820F56E0;
	sub_820F7B90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f56f8
	if (ctx.cr6.eq) goto loc_820F56F8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x820f7c00
	ctx.lr = 0x820F56F0;
	sub_820F7C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820f56fc
	goto loc_820F56FC;
loc_820F56F8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820F56FC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f8080
	ctx.lr = 0x820F570C;
	sub_820F8080(ctx, base);
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4096, ctx.xer);
	// blt cr6,0x820f571c
	if (ctx.cr6.lt) goto loc_820F571C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820f5730
	goto loc_820F5730;
loc_820F571C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_820F5730:
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f5760
	if (ctx.cr6.eq) goto loc_820F5760;
	// lwz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r31,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r31.u32);
	// bl 0x820f07a0
	ctx.lr = 0x820F5754;
	sub_820F07A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820F5760:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r11,r11,-18000
	ctx.r11.s64 = ctx.r11.s64 + -18000;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f5780
	if (ctx.cr6.eq) goto loc_820F5780;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x820f5784
	goto loc_820F5784;
loc_820F5780:
	// stw r31,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r31.u32);
loc_820F5784:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r31,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r31.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// bl 0x820f2150
	ctx.lr = 0x820F57AC;
	sub_820F2150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f07a0
	ctx.lr = 0x820F57B4;
	sub_820F07A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f0810
	ctx.lr = 0x820F57BC;
	sub_820F0810(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F57C8"))) PPC_WEAK_FUNC(sub_820F57C8);
PPC_FUNC_IMPL(__imp__sub_820F57C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820F57D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820ddca8
	ctx.lr = 0x820F57DC;
	sub_820DDCA8(ctx, base);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f5884
	if (ctx.cr6.eq) goto loc_820F5884;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f5884
	if (ctx.cr6.eq) goto loc_820F5884;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r30,r11,-18000
	ctx.r30.s64 = ctx.r11.s64 + -18000;
	// addi r3,r30,16584
	ctx.r3.s64 = ctx.r30.s64 + 16584;
	// bl 0x823052d8
	ctx.lr = 0x820F5804;
	sub_823052D8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82082030
	ctx.lr = 0x820F5818;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f5858
	if (ctx.cr6.eq) goto loc_820F5858;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82082030
	ctx.lr = 0x820F5850;
	sub_82082030(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x820f585c
	goto loc_820F585C;
loc_820F5858:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820F585C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x820f60c8
	ctx.lr = 0x820F5868;
	sub_820F60C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x820f5890
	if (!ctx.cr6.eq) goto loc_820F5890;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2fc8
	ctx.lr = 0x820F587C;
	sub_820F2FC8(ctx, base);
	// addi r3,r30,16584
	ctx.r3.s64 = ctx.r30.s64 + 16584;
	// bl 0x823051a8
	ctx.lr = 0x820F5884;
	sub_823051A8(ctx, base);
loc_820F5884:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820F5890:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r3,r30,16584
	ctx.r3.s64 = ctx.r30.s64 + 16584;
	// lbz r11,244(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,244(r28)
	PPC_STORE_U8(ctx.r28.u32 + 244, ctx.r11.u8);
	// lwz r11,16540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16540);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r31,16540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16540, ctx.r31.u32);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x823051a8
	ctx.lr = 0x820F58B8;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F58C4"))) PPC_WEAK_FUNC(sub_820F58C4);
PPC_FUNC_IMPL(__imp__sub_820F58C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F58C8"))) PPC_WEAK_FUNC(sub_820F58C8);
PPC_FUNC_IMPL(__imp__sub_820F58C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820F58D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bge cr6,0x820f5994
	if (!ctx.cr6.lt) goto loc_820F5994;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r10,-18000
	ctx.r30.s64 = ctx.r10.s64 + -18000;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r30,148
	ctx.r7.s64 = ctx.r30.s64 + 148;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820f5994
	if (!ctx.cr6.eq) goto loc_820F5994;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r30,152
	ctx.r10.s64 = ctx.r30.s64 + 152;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f5994
	if (ctx.cr6.eq) goto loc_820F5994;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r30,16584
	ctx.r3.s64 = ctx.r30.s64 + 16584;
	// bl 0x823052d8
	ctx.lr = 0x820F5924;
	sub_823052D8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 244);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,244(r11)
	PPC_STORE_U8(ctx.r11.u32 + 244, ctx.r10.u8);
	// lwz r10,16540(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16540);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820f594c
	if (!ctx.cr6.eq) goto loc_820F594C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16540, ctx.r11.u32);
	// b 0x820f5978
	goto loc_820F5978;
loc_820F594C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f5978
	if (ctx.cr6.eq) goto loc_820F5978;
loc_820F5954:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820f5970
	if (ctx.cr6.eq) goto loc_820F5970;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5954
	if (!ctx.cr6.eq) goto loc_820F5954;
	// b 0x820f5978
	goto loc_820F5978;
loc_820F5970:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
loc_820F5978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2fc8
	ctx.lr = 0x820F5980;
	sub_820F2FC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x820f61d8
	ctx.lr = 0x820F598C;
	sub_820F61D8(ctx, base);
	// addi r3,r30,16584
	ctx.r3.s64 = ctx.r30.s64 + 16584;
	// bl 0x823051a8
	ctx.lr = 0x820F5994;
	sub_823051A8(ctx, base);
loc_820F5994:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F599C"))) PPC_WEAK_FUNC(sub_820F599C);
PPC_FUNC_IMPL(__imp__sub_820F599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F59A0"))) PPC_WEAK_FUNC(sub_820F59A0);
PPC_FUNC_IMPL(__imp__sub_820F59A0) {
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
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-18000
	ctx.r31.s64 = ctx.r11.s64 + -18000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,16544
	ctx.r3.s64 = ctx.r31.s64 + 16544;
	// bl 0x823052d8
	ctx.lr = 0x820F59CC;
	sub_823052D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,16604
	ctx.r9.s64 = 16604;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r31,16604
	ctx.r10.s64 = ctx.r31.s64 + 16604;
loc_820F59DC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820f5a20
	if (ctx.cr6.eq) goto loc_820F5A20;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,16668
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16668, ctx.xer);
	// blt cr6,0x820f59dc
	if (ctx.cr6.lt) goto loc_820F59DC;
	// addi r3,r31,16544
	ctx.r3.s64 = ctx.r31.s64 + 16544;
	// bl 0x823051a8
	ctx.lr = 0x820F5A04;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F5A08:
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
loc_820F5A20:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,16604
	ctx.r9.s64 = ctx.r31.s64 + 16604;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// bge cr6,0x820f5a84
	if (!ctx.cr6.lt) goto loc_820F5A84;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,16596
	ctx.r9.s64 = ctx.r31.s64 + 16596;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_820F5A44:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f5a70
	if (ctx.cr6.eq) goto loc_820F5A70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x820f5a44
	if (ctx.cr6.lt) goto loc_820F5A44;
	// addi r3,r31,16544
	ctx.r3.s64 = ctx.r31.s64 + 16544;
	// bl 0x823051a8
	ctx.lr = 0x820F5A68;
	sub_823051A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820f5a08
	goto loc_820F5A08;
loc_820F5A70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f5a84
	if (ctx.cr6.eq) goto loc_820F5A84;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,16600
	ctx.r10.s64 = ctx.r31.s64 + 16600;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_820F5A84:
	// addi r3,r31,16544
	ctx.r3.s64 = ctx.r31.s64 + 16544;
	// bl 0x823051a8
	ctx.lr = 0x820F5A8C;
	sub_823051A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820f5a08
	goto loc_820F5A08;
}

__attribute__((alias("__imp__sub_820F5A94"))) PPC_WEAK_FUNC(sub_820F5A94);
PPC_FUNC_IMPL(__imp__sub_820F5A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F5A98"))) PPC_WEAK_FUNC(sub_820F5A98);
PPC_FUNC_IMPL(__imp__sub_820F5A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820F5AA0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r27,16604
	ctx.r27.s64 = 16604;
	// addi r11,r11,-18000
	ctx.r11.s64 = ctx.r11.s64 + -18000;
	// addi r28,r11,16604
	ctx.r28.s64 = ctx.r11.s64 + 16604;
loc_820F5ABC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f5b7c
	if (ctx.cr6.eq) goto loc_820F5B7C;
	// lwz r11,336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f5b6c
	if (ctx.cr6.eq) goto loc_820F5B6C;
	// lwz r29,72(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f5b6c
	if (ctx.cr6.eq) goto loc_820F5B6C;
	// lis r12,8192
	ctx.r12.s64 = 536870912;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// ori r12,r12,135
	ctx.r12.u64 = ctx.r12.u64 | 135;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,129
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 129, ctx.xer);
	// beq cr6,0x820f5b04
	if (ctx.cr6.eq) goto loc_820F5B04;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f5b6c
	if (ctx.cr6.eq) goto loc_820F5B6C;
loc_820F5B04:
	// lwz r31,88(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f5b54
	if (ctx.cr6.eq) goto loc_820F5B54;
loc_820F5B14:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219f078
	ctx.lr = 0x820F5B24;
	sub_8219F078(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5b40
	if (!ctx.cr6.eq) goto loc_820F5B40;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x820f5b44
	if (ctx.cr6.eq) goto loc_820F5B44;
loc_820F5B40:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820F5B44:
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820f5b14
	if (!ctx.cr6.eq) goto loc_820F5B14;
loc_820F5B54:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f5b6c
	if (ctx.cr6.eq) goto loc_820F5B6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821875c0
	ctx.lr = 0x820F5B6C;
	sub_821875C0(ctx, base);
loc_820F5B6C:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,16668
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16668, ctx.xer);
	// blt cr6,0x820f5abc
	if (ctx.cr6.lt) goto loc_820F5ABC;
loc_820F5B7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F5B88"))) PPC_WEAK_FUNC(sub_820F5B88);
PPC_FUNC_IMPL(__imp__sub_820F5B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820F5B90;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// sth r28,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r28.u16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r28,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82161240
	ctx.lr = 0x820F5BC8;
	sub_82161240(ctx, base);
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820f5c10
	if (!ctx.cr6.eq) goto loc_820F5C10;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x8208cfb0
	ctx.lr = 0x820F5BE4;
	sub_8208CFB0(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x820F5BFC;
	sub_8233E4E0(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f0,92(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// b 0x820f5c1c
	goto loc_820F5C1C;
loc_820F5C10:
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8208cfb0
	ctx.lr = 0x820F5C1C;
	sub_8208CFB0(ctx, base);
loc_820F5C1C:
	// lis r11,11565
	ctx.r11.s64 = 757923840;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r10,-7224
	ctx.r3.s64 = ctx.r10.s64 + -7224;
	// bl 0x82176780
	ctx.lr = 0x820F5C3C;
	sub_82176780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f5c50
	if (ctx.cr6.eq) goto loc_820F5C50;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82172d60
	ctx.lr = 0x820F5C50;
	sub_82172D60(ctx, base);
loc_820F5C50:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820aeb10
	ctx.lr = 0x820F5C60;
	sub_820AEB10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820aeba8
	ctx.lr = 0x820F5C68;
	sub_820AEBA8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820aec50
	ctx.lr = 0x820F5C78;
	sub_820AEC50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82161240
	ctx.lr = 0x820F5C88;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f5cb8
	if (ctx.cr6.eq) goto loc_820F5CB8;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// bl 0x820de9b8
	ctx.lr = 0x820F5CA0;
	sub_820DE9B8(ctx, base);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820dec30
	ctx.lr = 0x820F5CB8;
	sub_820DEC30(ctx, base);
loc_820F5CB8:
	// lfs f1,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F5CC4"))) PPC_WEAK_FUNC(sub_820F5CC4);
PPC_FUNC_IMPL(__imp__sub_820F5CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F5CC8"))) PPC_WEAK_FUNC(sub_820F5CC8);
PPC_FUNC_IMPL(__imp__sub_820F5CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820F5CD0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stb r10,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r10.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// sth r11,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r11.u16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// sth r11,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
	// bl 0x82161240
	ctx.lr = 0x820F5D08;
	sub_82161240(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// lfs f31,92(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f31.f64 = double(temp.f32);
	// lhz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820f5d50
	if (!ctx.cr6.eq) goto loc_820F5D50;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8208cfb0
	ctx.lr = 0x820F5D30;
	sub_8208CFB0(ctx, base);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// b 0x820f5d8c
	goto loc_820F5D8C;
loc_820F5D50:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820f5d7c
	if (!ctx.cr6.eq) goto loc_820F5D7C;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8208cfb0
	ctx.lr = 0x820F5D64;
	sub_8208CFB0(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 100);
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// std r11,84(r1)
	PPC_STORE_U64(ctx.r1.u32 + 84, ctx.r11.u64);
	// b 0x820f5d8c
	goto loc_820F5D8C;
loc_820F5D7C:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8208cfb0
	ctx.lr = 0x820F5D88;
	sub_8208CFB0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820F5D8C:
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f5da4
	if (ctx.cr6.eq) goto loc_820F5DA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c04b0
	ctx.lr = 0x820F5DA0;
	sub_820C04B0(ctx, base);
	// b 0x820f5db0
	goto loc_820F5DB0;
loc_820F5DA4:
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r10,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r10.u32);
loc_820F5DB0:
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820f5dc8
	if (ctx.cr6.gt) goto loc_820F5DC8;
	// stfs f31,908(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 908, temp.u32);
	// b 0x820f5dcc
	goto loc_820F5DCC;
loc_820F5DC8:
	// stfs f13,908(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 908, temp.u32);
loc_820F5DCC:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820f5dec
	if (ctx.cr6.gt) goto loc_820F5DEC;
	// stfs f31,912(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 912, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820F5DEC:
	// stfs f13,912(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 912, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F5DFC"))) PPC_WEAK_FUNC(sub_820F5DFC);
PPC_FUNC_IMPL(__imp__sub_820F5DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F5E00"))) PPC_WEAK_FUNC(sub_820F5E00);
PPC_FUNC_IMPL(__imp__sub_820F5E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820F5E08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8208d070
	ctx.lr = 0x820F5E28;
	sub_8208D070(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208d070
	ctx.lr = 0x820F5E34;
	sub_8208D070(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f5ea4
	if (ctx.cr6.eq) goto loc_820F5EA4;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820f5e58
	if (!ctx.cr6.gt) goto loc_820F5E58;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820F5E58:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820F5E68;
	sub_82082030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8208cfb0
	ctx.lr = 0x820F5E84;
	sub_8208CFB0(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x8208cfb0
	ctx.lr = 0x820F5EA4;
	sub_8208CFB0(ctx, base);
loc_820F5EA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F5EAC"))) PPC_WEAK_FUNC(sub_820F5EAC);
PPC_FUNC_IMPL(__imp__sub_820F5EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F5EB0"))) PPC_WEAK_FUNC(sub_820F5EB0);
PPC_FUNC_IMPL(__imp__sub_820F5EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820F5EB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f5f54
	if (ctx.cr6.eq) goto loc_820F5F54;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f5f54
	if (ctx.cr6.eq) goto loc_820F5F54;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,112(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r27,12(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r27,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r27.u32);
	// stw r26,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r26.u32);
	// stw r28,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r28.u32);
	// bl 0x821d2ad8
	ctx.lr = 0x820F5F4C;
	sub_821D2AD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82216760
	ctx.lr = 0x820F5F54;
	sub_82216760(ctx, base);
loc_820F5F54:
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820F5F64;
	sub_8233E4E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820efed0
	ctx.lr = 0x820F5F6C;
	sub_820EFED0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f5f88
	if (ctx.cr6.eq) goto loc_820F5F88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F5F88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F5F90"))) PPC_WEAK_FUNC(sub_820F5F90);
PPC_FUNC_IMPL(__imp__sub_820F5F90) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29296
	ctx.r31.s64 = ctx.r11.s64 + 29296;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823052d8
	ctx.lr = 0x820F5FBC;
	sub_823052D8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,20
	ctx.r10.u64 = ctx.r11.u64 | 20;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5ff0
	if (!ctx.cr6.eq) goto loc_820F5FF0;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-31096
	ctx.r9.s64 = ctx.r10.s64 + -31096;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
	// bl 0x823051a8
	ctx.lr = 0x820F5FE8;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f60ac
	goto loc_820F60AC;
loc_820F5FF0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,24
	ctx.r10.u64 = ctx.r11.u64 | 24;
	// lwzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,8192
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8192, ctx.xer);
	// bge cr6,0x820f6030
	if (!ctx.cr6.lt) goto loc_820F6030;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_820F6014:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f6030
	if (ctx.cr6.eq) goto loc_820F6030;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// blt cr6,0x820f6014
	if (ctx.cr6.lt) goto loc_820F6014;
loc_820F6030:
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x820f6064
	if (!ctx.cr6.eq) goto loc_820F6064;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820f6064
	if (ctx.cr6.eq) goto loc_820F6064;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
loc_820F6048:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f6064
	if (ctx.cr6.eq) goto loc_820F6064;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820f6048
	if (ctx.cr6.lt) goto loc_820F6048;
loc_820F6064:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// ori r7,r10,20
	ctx.r7.u64 = ctx.r10.u64 | 20;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// ori r6,r6,20
	ctx.r6.u64 = ctx.r6.u64 | 20;
	// stwx r30,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r30.u32);
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r9,r11,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lwzx r8,r5,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// or r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bl 0x823051a8
	ctx.lr = 0x820F60A8;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F60AC:
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

__attribute__((alias("__imp__sub_820F60C4"))) PPC_WEAK_FUNC(sub_820F60C4);
PPC_FUNC_IMPL(__imp__sub_820F60C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F60C8"))) PPC_WEAK_FUNC(sub_820F60C8);
PPC_FUNC_IMPL(__imp__sub_820F60C8) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823052d8
	ctx.lr = 0x820F60EC;
	sub_823052D8(ctx, base);
	// lwz r11,16404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f6118
	if (!ctx.cr6.eq) goto loc_820F6118;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-31096
	ctx.r9.s64 = ctx.r10.s64 + -31096;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
	// bl 0x823051a8
	ctx.lr = 0x820F6110;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f61c0
	goto loc_820F61C0;
loc_820F6118:
	// lwz r9,16408(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16408);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,2048
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2048, ctx.xer);
	// bge cr6,0x820f6150
	if (!ctx.cr6.lt) goto loc_820F6150;
	// addi r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_820F6134:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820f6150
	if (ctx.cr6.eq) goto loc_820F6150;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// blt cr6,0x820f6134
	if (ctx.cr6.lt) goto loc_820F6134;
loc_820F6150:
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bne cr6,0x820f6188
	if (!ctx.cr6.eq) goto loc_820F6188;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f6188
	if (ctx.cr6.eq) goto loc_820F6188;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
loc_820F6168:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f6188
	if (ctx.cr6.eq) goto loc_820F6188;
	// lwz r9,16408(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820f6168
	if (ctx.cr6.lt) goto loc_820F6168;
loc_820F6188:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r6,r11,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,16404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16404);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r4,20(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stw r5,16404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16404, ctx.r5.u32);
	// or r31,r4,r6
	ctx.r31.u64 = ctx.r4.u64 | ctx.r6.u64;
	// bl 0x823051a8
	ctx.lr = 0x820F61BC;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F61C0:
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

__attribute__((alias("__imp__sub_820F61D8"))) PPC_WEAK_FUNC(sub_820F61D8);
PPC_FUNC_IMPL(__imp__sub_820F61D8) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823052d8
	ctx.lr = 0x820F61FC;
	sub_823052D8(ctx, base);
	// rlwinm r11,r30,19,13,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 19) & 0x7FFF8;
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r30,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820f6250
	if (!ctx.cr6.eq) goto loc_820F6250;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820f6234
	if (!ctx.cr6.eq) goto loc_820F6234;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_820F6234:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,16404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16404);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,16404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16404, ctx.r8.u32);
loc_820F6250:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823051a8
	ctx.lr = 0x820F6258;
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

__attribute__((alias("__imp__sub_820F6270"))) PPC_WEAK_FUNC(sub_820F6270);
PPC_FUNC_IMPL(__imp__sub_820F6270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820F6278;
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
	ctx.lr = 0x820F62BC;
	sub_820F63E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820f62e4
	if (ctx.cr6.eq) goto loc_820F62E4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_820F62CC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820f6328
	if (ctx.cr6.eq) goto loc_820F6328;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820f62cc
	if (!ctx.cr6.eq) goto loc_820F62CC;
loc_820F62E4:
	// bl 0x820f6690
	ctx.lr = 0x820F62E8;
	sub_820F6690(ctx, base);
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
loc_820F630C:
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
	// bne 0x820f630c
	if (!ctx.cr0.eq) goto loc_820F630C;
loc_820F6328:
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

__attribute__((alias("__imp__sub_820F6340"))) PPC_WEAK_FUNC(sub_820F6340);
PPC_FUNC_IMPL(__imp__sub_820F6340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820F6348;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// twllei r9,0
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// divwu r8,r11,r9
	ctx.r8.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// li r27,0
	ctx.r27.s64 = 0;
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
	ctx.lr = 0x820F6390;
	sub_820F63E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820f63c0
	if (ctx.cr6.eq) goto loc_820F63C0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_820F63A0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820f63bc
	if (ctx.cr6.eq) goto loc_820F63BC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820f63a0
	if (!ctx.cr6.eq) goto loc_820F63A0;
	// b 0x820f63c0
	goto loc_820F63C0;
loc_820F63BC:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_820F63C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F63DC"))) PPC_WEAK_FUNC(sub_820F63DC);
PPC_FUNC_IMPL(__imp__sub_820F63DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F63E0"))) PPC_WEAK_FUNC(sub_820F63E0);
PPC_FUNC_IMPL(__imp__sub_820F63E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820F63E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
loc_820F63F8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820f641c
	if (!ctx.cr6.eq) goto loc_820F641C;
	// stwcx. r30,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820f63f8
	if (!ctx.cr0.eq) goto loc_820F63F8;
	// b 0x820f6424
	goto loc_820F6424;
loc_820F641C:
	// stwcx. r11,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_820F6424:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820f6470
	if (!ctx.cr6.eq) goto loc_820F6470;
loc_820F6430:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82247328
	ctx.lr = 0x820F6438;
	sub_82247328(ctx, base);
loc_820F6438:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820f645c
	if (!ctx.cr6.eq) goto loc_820F645C;
	// stwcx. r30,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820f6438
	if (!ctx.cr0.eq) goto loc_820F6438;
	// b 0x820f6464
	goto loc_820F6464;
loc_820F645C:
	// stwcx. r11,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_820F6464:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820f6430
	if (ctx.cr6.eq) goto loc_820F6430;
loc_820F6470:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F6478"))) PPC_WEAK_FUNC(sub_820F6478);
PPC_FUNC_IMPL(__imp__sub_820F6478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820F6480;
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
	// ble cr6,0x820f6568
	if (!ctx.cr6.gt) goto loc_820F6568;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_820F64A4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
loc_820F64B0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820f64d4
	if (!ctx.cr6.eq) goto loc_820F64D4;
	// stwcx. r26,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820f64b0
	if (!ctx.cr0.eq) goto loc_820F64B0;
	// b 0x820f64dc
	goto loc_820F64DC;
loc_820F64D4:
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_820F64DC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820f6528
	if (!ctx.cr6.eq) goto loc_820F6528;
loc_820F64E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82247328
	ctx.lr = 0x820F64F0;
	sub_82247328(ctx, base);
loc_820F64F0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820f6514
	if (!ctx.cr6.eq) goto loc_820F6514;
	// stwcx. r26,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820f64f0
	if (!ctx.cr0.eq) goto loc_820F64F0;
	// b 0x820f651c
	goto loc_820F651C;
loc_820F6514:
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_820F651C:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820f64e8
	if (ctx.cr6.eq) goto loc_820F64E8;
loc_820F6528:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820f6548
	if (ctx.cr6.eq) goto loc_820F6548;
loc_820F6534:
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x820f6578
	ctx.lr = 0x820F653C;
	sub_820F6578(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820f6534
	if (!ctx.cr6.eq) goto loc_820F6534;
loc_820F6548:
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
	// blt cr6,0x820f64a4
	if (ctx.cr6.lt) goto loc_820F64A4;
loc_820F6568:
	// stw r28,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F6574"))) PPC_WEAK_FUNC(sub_820F6574);
PPC_FUNC_IMPL(__imp__sub_820F6574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6578"))) PPC_WEAK_FUNC(sub_820F6578);
PPC_FUNC_IMPL(__imp__sub_820F6578) {
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
	// beq cr6,0x820f6674
	if (ctx.cr6.eq) goto loc_820F6674;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,10664
	ctx.r31.s64 = ctx.r11.s64 + 10664;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820F65AC;
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
	// bne cr6,0x820f6668
	if (!ctx.cr6.eq) goto loc_820F6668;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f6668
	if (ctx.cr6.eq) goto loc_820F6668;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820f6668
	if (!ctx.cr6.lt) goto loc_820F6668;
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
	// beq cr6,0x820f6640
	if (ctx.cr6.eq) goto loc_820F6640;
loc_820F6618:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f6638
	if (ctx.cr6.eq) goto loc_820F6638;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820f6618
	if (!ctx.cr6.eq) goto loc_820F6618;
	// b 0x820f6640
	goto loc_820F6640;
loc_820F6638:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820F6640:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f6658
	if (!ctx.cr6.eq) goto loc_820F6658;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_820F6658:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820F6664;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_820F6668:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820F6674;
	sub_823051A8(ctx, base);
loc_820F6674:
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

__attribute__((alias("__imp__sub_820F668C"))) PPC_WEAK_FUNC(sub_820F668C);
PPC_FUNC_IMPL(__imp__sub_820F668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6690"))) PPC_WEAK_FUNC(sub_820F6690);
PPC_FUNC_IMPL(__imp__sub_820F6690) {
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
	// addi r31,r11,10664
	ctx.r31.s64 = ctx.r11.s64 + 10664;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820F66B8;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f66dc
	if (ctx.cr6.eq) goto loc_820F66DC;
loc_820F66C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f670c
	if (!ctx.cr6.eq) goto loc_820F670C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f66c4
	if (!ctx.cr6.eq) goto loc_820F66C4;
loc_820F66DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f6734
	if (!ctx.cr6.eq) goto loc_820F6734;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820f6790
	ctx.lr = 0x820F66F0;
	sub_820F6790(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f6734
	if (!ctx.cr6.eq) goto loc_820F6734;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820F6704;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f6778
	goto loc_820F6778;
loc_820F670C:
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
	// b 0x820f6768
	goto loc_820F6768;
loc_820F6734:
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
loc_820F6768:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820F6774;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820F6778:
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

__attribute__((alias("__imp__sub_820F6790"))) PPC_WEAK_FUNC(sub_820F6790);
PPC_FUNC_IMPL(__imp__sub_820F6790) {
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
	ctx.lr = 0x820F67C4;
	sub_82082030(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,10664
	ctx.r11.s64 = ctx.r11.s64 + 10664;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f67e0
	if (ctx.cr6.eq) goto loc_820F67E0;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x820f67e4
	goto loc_820F67E4;
loc_820F67E0:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_820F67E4:
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
	// beq cr6,0x820f6824
	if (ctx.cr6.eq) goto loc_820F6824;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_820F681C:
	// stwu r3,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820f681c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F681C;
loc_820F6824:
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

__attribute__((alias("__imp__sub_820F6844"))) PPC_WEAK_FUNC(sub_820F6844);
PPC_FUNC_IMPL(__imp__sub_820F6844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6848"))) PPC_WEAK_FUNC(sub_820F6848);
PPC_FUNC_IMPL(__imp__sub_820F6848) {
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
	ctx.lr = 0x820F6860;
	sub_82081C00(ctx, base);
	// bl 0x820f7678
	ctx.lr = 0x820F6864;
	sub_820F7678(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820F6874;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f6888
	if (!ctx.cr6.eq) goto loc_820F6888;
	// bl 0x821b3000
	ctx.lr = 0x820F6884;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820F6888:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f68a0
	if (ctx.cr6.eq) goto loc_820F68A0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_820F68A0:
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

__attribute__((alias("__imp__sub_820F68B4"))) PPC_WEAK_FUNC(sub_820F68B4);
PPC_FUNC_IMPL(__imp__sub_820F68B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F68B8"))) PPC_WEAK_FUNC(sub_820F68B8);
PPC_FUNC_IMPL(__imp__sub_820F68B8) {
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
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820ef6d0
	ctx.lr = 0x820F68D4;
	sub_820EF6D0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r8,-30988
	ctx.r3.s64 = ctx.r8.s64 + -30988;
	// addi r6,r10,-31304
	ctx.r6.s64 = ctx.r10.s64 + -31304;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r6,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r6.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r5.u32);
	// addi r8,r7,-30956
	ctx.r8.s64 = ctx.r7.s64 + -30956;
	// stw r4,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r4.u32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lfs f12,1452(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1452);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r8.u32);
	// lfs f11,1456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1456);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stfs f0,320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stfs f13,328(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stw r10,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r10.u32);
	// stfs f13,332(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stfs f0,376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f13,432(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// stfs f13,436(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stfs f13,440(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stfs f12,460(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stfs f11,464(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// stfs f13,468(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f0,308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820F69E4"))) PPC_WEAK_FUNC(sub_820F69E4);
PPC_FUNC_IMPL(__imp__sub_820F69E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F69E8"))) PPC_WEAK_FUNC(sub_820F69E8);
PPC_FUNC_IMPL(__imp__sub_820F69E8) {
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
	// addi r10,r11,-31304
	ctx.r10.s64 = ctx.r11.s64 + -31304;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r10.u32);
	// bl 0x820ef958
	ctx.lr = 0x820F6A14;
	sub_820EF958(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f6a2c
	if (ctx.cr6.eq) goto loc_820F6A2C;
	// bl 0x820f2238
	ctx.lr = 0x820F6A28;
	sub_820F2238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F6A2C:
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

__attribute__((alias("__imp__sub_820F6A44"))) PPC_WEAK_FUNC(sub_820F6A44);
PPC_FUNC_IMPL(__imp__sub_820F6A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6A48"))) PPC_WEAK_FUNC(sub_820F6A48);
PPC_FUNC_IMPL(__imp__sub_820F6A48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820f68b8
	ctx.lr = 0x820F6A60;
	sub_820F68B8(ctx, base);
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x820F6A70;
	sub_8233EAF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r7,r10,-31024
	ctx.r7.s64 = ctx.r10.s64 + -31024;
	// addi r6,r8,-30992
	ctx.r6.s64 = ctx.r8.s64 + -30992;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// stw r5,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r5.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_820F6AC4"))) PPC_WEAK_FUNC(sub_820F6AC4);
PPC_FUNC_IMPL(__imp__sub_820F6AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6AC8"))) PPC_WEAK_FUNC(sub_820F6AC8);
PPC_FUNC_IMPL(__imp__sub_820F6AC8) {
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
	// bl 0x820f6b18
	ctx.lr = 0x820F6AE8;
	sub_820F6B18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f6b00
	if (ctx.cr6.eq) goto loc_820F6B00;
	// bl 0x820f7560
	ctx.lr = 0x820F6AFC;
	sub_820F7560(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F6B00:
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

__attribute__((alias("__imp__sub_820F6B18"))) PPC_WEAK_FUNC(sub_820F6B18);
PPC_FUNC_IMPL(__imp__sub_820F6B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820F6B20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,-31024
	ctx.r9.s64 = ctx.r11.s64 + -31024;
	// addi r8,r10,-30992
	ctx.r8.s64 = ctx.r10.s64 + -30992;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r8.u32);
	// bl 0x820ef8a0
	ctx.lr = 0x820F6B44;
	sub_820EF8A0(ctx, base);
	// lwz r3,360(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6b54
	if (ctx.cr6.eq) goto loc_820F6B54;
	// bl 0x82172d60
	ctx.lr = 0x820F6B54;
	sub_82172D60(ctx, base);
loc_820F6B54:
	// lwz r3,420(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6b64
	if (ctx.cr6.eq) goto loc_820F6B64;
	// bl 0x82172d60
	ctx.lr = 0x820F6B64;
	sub_82172D60(ctx, base);
loc_820F6B64:
	// addi r30,r28,480
	ctx.r30.s64 = ctx.r28.s64 + 480;
	// li r29,5
	ctx.r29.s64 = 5;
	// li r27,0
	ctx.r27.s64 = 0;
loc_820F6B70:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f6b90
	if (ctx.cr6.eq) goto loc_820F6B90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e6a18
	ctx.lr = 0x820F6B84;
	sub_820E6A18(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820F6B90;
	sub_82080000(ctx, base);
loc_820F6B90:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r27,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r30.u32 = ea;
	// bne 0x820f6b70
	if (!ctx.cr0.eq) goto loc_820F6B70;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,-31304
	ctx.r10.s64 = ctx.r11.s64 + -31304;
	// stw r10,284(r28)
	PPC_STORE_U32(ctx.r28.u32 + 284, ctx.r10.u32);
	// bl 0x820ef958
	ctx.lr = 0x820F6BB0;
	sub_820EF958(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F6BB8"))) PPC_WEAK_FUNC(sub_820F6BB8);
PPC_FUNC_IMPL(__imp__sub_820F6BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820F6BC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820f6c04
	if (!ctx.cr6.eq) goto loc_820F6C04;
	// bl 0x820f6848
	ctx.lr = 0x820F6BE8;
	sub_820F6848(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6c00
	if (ctx.cr6.eq) goto loc_820F6C00;
	// lwz r4,268(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// bl 0x820f6a48
	ctx.lr = 0x820F6BF8;
	sub_820F6A48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820f6c04
	goto loc_820F6C04;
loc_820F6C00:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_820F6C04:
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// cmplwi cr6,r29,4096
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4096, ctx.xer);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// lwz r10,304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// lwz r9,308(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// stw r9,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
	// lwz r8,312(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// stw r8,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r8.u32);
	// lfs f0,316(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lfs f13,320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,320(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// lfs f12,324(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,324(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lfs f11,328(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,328(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// lfs f10,332(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,332(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// lfs f9,336(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,336(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// lfs f8,340(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,340(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// lfs f7,344(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,344(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// lfs f6,348(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,348(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lwz r7,352(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// stw r7,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r7.u32);
	// blt cr6,0x820f6c84
	if (ctx.cr6.lt) goto loc_820F6C84;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x820f6c98
	goto loc_820F6C98;
loc_820F6C84:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_820F6C98:
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// lwz r10,356(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// lwz r9,356(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x820f6cc4
	if (ctx.cr6.eq) goto loc_820F6CC4;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x82087078
	ctx.lr = 0x820F6CBC;
	sub_82087078(ctx, base);
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
	// b 0x820f6cc8
	goto loc_820F6CC8;
loc_820F6CC4:
	// stw r28,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r28.u32);
loc_820F6CC8:
	// lwz r10,364(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// addi r11,r31,444
	ctx.r11.s64 = ctx.r31.s64 + 444;
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// lfs f0,368(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f13,372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lfs f12,376(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,376(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// lfs f11,380(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,380(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// lfs f10,408(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,408(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// lfs f9,412(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,412(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// lfs f8,424(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,424(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// lfs f7,428(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,428(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// lfs f6,436(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,436(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// lfs f5,440(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,440(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// lwz r9,444(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// stw r9,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r9.u32);
	// lwz r8,448(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// stw r8,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r8.u32);
	// lwz r7,452(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// stw r7,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r7.u32);
	// lwz r6,456(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// stw r6,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r6.u32);
	// lfs f4,460(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,460(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// lfs f3,464(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,464(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// lfs f2,468(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,468(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// lfs f1,472(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,472(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// lfs f0,476(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// lwz r5,480(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// stw r5,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r5.u32);
	// lfs f13,384(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// lfs f12,388(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,388(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lfs f11,392(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,392(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lfs f10,396(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,396(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// lfs f9,400(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,400(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// lfs f8,404(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,404(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// lwz r4,416(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// stw r4,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r4.u32);
	// lwz r3,416(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820f6dc8
	if (ctx.cr6.eq) goto loc_820F6DC8;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x82087078
	ctx.lr = 0x820F6DC0;
	sub_82087078(ctx, base);
	// stw r3,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r3.u32);
	// b 0x820f6dcc
	goto loc_820F6DCC;
loc_820F6DC8:
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
loc_820F6DCC:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f0488
	ctx.lr = 0x820F6DE4;
	sub_820F0488(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F6DEC"))) PPC_WEAK_FUNC(sub_820F6DEC);
PPC_FUNC_IMPL(__imp__sub_820F6DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6DF0"))) PPC_WEAK_FUNC(sub_820F6DF0);
PPC_FUNC_IMPL(__imp__sub_820F6DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820F6DF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// beq cr6,0x820f6e84
	if (ctx.cr6.eq) goto loc_820F6E84;
	// lbz r8,86(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 86);
	// lfs f0,244(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lbz r6,85(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 85);
	// lbz r5,84(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 84);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,304(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,308(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,312(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// lfs f1,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,316(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// b 0x820f6ee4
	goto loc_820F6EE4;
loc_820F6E84:
	// lbz r8,89(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 89);
	// lbz r6,90(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 90);
	// lbz r5,88(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfs f0,244(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,308(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f3,312(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f6,304(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lfs f2,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,316(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
loc_820F6EE4:
	// lfs f0,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820f6f00
	if (!ctx.cr6.gt) goto loc_820F6F00;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
loc_820F6F00:
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lfs f13,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lfs f0,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,320(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// bne cr6,0x820f6f2c
	if (!ctx.cr6.eq) goto loc_820F6F2C;
	// lfs f13,324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f11,324(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
loc_820F6F2C:
	// lfs f13,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x820f6f3c
	if (!ctx.cr6.eq) goto loc_820F6F3C;
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
loc_820F6F3C:
	// lfs f0,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x820f6f58
	if (!ctx.cr6.eq) goto loc_820F6F58;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
loc_820F6F58:
	// lfs f0,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f10,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// stfs f10,332(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// bne cr6,0x820f6f78
	if (!ctx.cr6.eq) goto loc_820F6F78;
	// stfs f13,328(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
loc_820F6F78:
	// lfs f0,332(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x820f6f88
	if (!ctx.cr6.eq) goto loc_820F6F88;
	// stfs f13,332(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
loc_820F6F88:
	// lfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// lfs f13,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,344(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// bl 0x8233c950
	ctx.lr = 0x820F6FA0;
	sub_8233C950(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,340(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// lfs f1,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8233c950
	ctx.lr = 0x820F6FB0;
	sub_8233C950(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,348(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r28,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r28.u32);
	// lwz r4,128(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820f6ff0
	if (ctx.cr6.eq) goto loc_820F6FF0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f6ff0
	if (ctx.cr6.eq) goto loc_820F6FF0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82176838
	ctx.lr = 0x820F6FE4;
	sub_82176838(ctx, base);
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// bl 0x82087078
	ctx.lr = 0x820F6FEC;
	sub_82087078(ctx, base);
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
loc_820F6FF0:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// lfs f0,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// lfs f13,136(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,368(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f12,140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,372(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lfs f11,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,376(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// lfs f10,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// stfs f10,380(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// bge cr6,0x820f7028
	if (!ctx.cr6.lt) goto loc_820F7028;
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
loc_820F7028:
	// lfs f0,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// lfs f12,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// lfs f13,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// lfs f11,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,412(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// bgt cr6,0x820f7054
	if (ctx.cr6.gt) goto loc_820F7054;
	// rlwinm r10,r11,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
loc_820F7054:
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// stw r28,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r28.u32);
	// lwz r4,244(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820f7088
	if (ctx.cr6.eq) goto loc_820F7088;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f7088
	if (ctx.cr6.eq) goto loc_820F7088;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82176838
	ctx.lr = 0x820F7078;
	sub_82176838(ctx, base);
	// stw r3,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r3.u32);
	// bl 0x82087078
	ctx.lr = 0x820F7080;
	sub_82087078(ctx, base);
	// lfs f13,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r3.u32);
loc_820F7088:
	// lfs f0,152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfs f12,92(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// lfs f0,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// bne cr6,0x820f70cc
	if (!ctx.cr6.eq) goto loc_820F70CC;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820f70c4
	if (ctx.cr6.eq) goto loc_820F70C4;
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,424(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stfs f10,428(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// b 0x820f70d8
	goto loc_820F70D8;
loc_820F70C4:
	// stfs f12,424(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// b 0x820f70d4
	goto loc_820F70D4;
loc_820F70CC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820f70d8
	if (!ctx.cr6.eq) goto loc_820F70D8;
loc_820F70D4:
	// stfs f12,428(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
loc_820F70D8:
	// lfs f0,200(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,444
	ctx.r11.s64 = ctx.r31.s64 + 444;
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// lfs f10,204(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,440(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// lfs f9,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,468(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// stw r10,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r10.u32);
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// stw r9,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r9.u32);
	// lwz r8,220(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r8,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r8.u32);
	// lfs f8,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,460(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// lfs f7,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,464(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// lfs f6,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// stfs f6,472(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// fcmpu cr6,f6,f13
	ctx.cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// lfs f0,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// bne cr6,0x820f7160
	if (!ctx.cr6.eq) goto loc_820F7160;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820f7158
	if (ctx.cr6.eq) goto loc_820F7158;
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,472(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// stfs f10,476(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// b 0x820f716c
	goto loc_820F716C;
loc_820F7158:
	// stfs f12,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// b 0x820f7168
	goto loc_820F7168;
loc_820F7160:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820f716c
	if (!ctx.cr6.eq) goto loc_820F716C;
loc_820F7168:
	// stfs f12,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
loc_820F716C:
	// lfs f0,168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f10,172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,388(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// bne cr6,0x820f718c
	if (!ctx.cr6.eq) goto loc_820F718C;
	// stfs f12,384(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
loc_820F718C:
	// lfs f0,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820f719c
	if (!ctx.cr6.eq) goto loc_820F719C;
	// stfs f12,388(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
loc_820F719C:
	// lfs f0,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lfs f13,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,396(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// lfs f12,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,400(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// lfs f11,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,404(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F71C4"))) PPC_WEAK_FUNC(sub_820F71C4);
PPC_FUNC_IMPL(__imp__sub_820F71C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F71C8"))) PPC_WEAK_FUNC(sub_820F71C8);
PPC_FUNC_IMPL(__imp__sub_820F71C8) {
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
	// bl 0x820f1228
	ctx.lr = 0x820F71E0;
	sub_820F1228(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f722c
	if (ctx.cr6.eq) goto loc_820F722C;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f720c
	if (ctx.cr6.eq) goto loc_820F720C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addi r3,r11,9804
	ctx.r3.s64 = ctx.r11.s64 + 9804;
	// b 0x820f7224
	goto loc_820F7224;
loc_820F720C:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f722c
	if (ctx.cr6.eq) goto loc_820F722C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addi r3,r11,9884
	ctx.r3.s64 = ctx.r11.s64 + 9884;
loc_820F7224:
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// bl 0x8213a0d0
	ctx.lr = 0x820F722C;
	sub_8213A0D0(ctx, base);
loc_820F722C:
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7244
	if (ctx.cr6.eq) goto loc_820F7244;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82177f68
	ctx.lr = 0x820F7244;
	sub_82177F68(ctx, base);
loc_820F7244:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f725c
	if (ctx.cr6.eq) goto loc_820F725C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82177f68
	ctx.lr = 0x820F725C;
	sub_82177F68(ctx, base);
loc_820F725C:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7274
	if (ctx.cr6.eq) goto loc_820F7274;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c9250
	ctx.lr = 0x820F7274;
	sub_820C9250(ctx, base);
loc_820F7274:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f728c
	if (ctx.cr6.eq) goto loc_820F728C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c9370
	ctx.lr = 0x820F728C;
	sub_820C9370(ctx, base);
loc_820F728C:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f72c8
	if (ctx.cr6.eq) goto loc_820F72C8;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,-26328
	ctx.r31.s64 = ctx.r11.s64 + -26328;
	// addi r3,r31,8288
	ctx.r3.s64 = ctx.r31.s64 + 8288;
	// bl 0x823052d8
	ctx.lr = 0x820F72B4;
	sub_823052D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8264
	ctx.r3.s64 = ctx.r31.s64 + 8264;
	// bl 0x82106098
	ctx.lr = 0x820F72C0;
	sub_82106098(ctx, base);
	// addi r3,r31,8288
	ctx.r3.s64 = ctx.r31.s64 + 8288;
	// bl 0x823051a8
	ctx.lr = 0x820F72C8;
	sub_823051A8(ctx, base);
loc_820F72C8:
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

__attribute__((alias("__imp__sub_820F72DC"))) PPC_WEAK_FUNC(sub_820F72DC);
PPC_FUNC_IMPL(__imp__sub_820F72DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F72E0"))) PPC_WEAK_FUNC(sub_820F72E0);
PPC_FUNC_IMPL(__imp__sub_820F72E0) {
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
	// bl 0x820f12e0
	ctx.lr = 0x820F72F8;
	sub_820F12E0(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7344
	if (ctx.cr6.eq) goto loc_820F7344;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7324
	if (ctx.cr6.eq) goto loc_820F7324;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addi r3,r11,9804
	ctx.r3.s64 = ctx.r11.s64 + 9804;
	// b 0x820f733c
	goto loc_820F733C;
loc_820F7324:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7344
	if (ctx.cr6.eq) goto loc_820F7344;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addi r3,r11,9884
	ctx.r3.s64 = ctx.r11.s64 + 9884;
loc_820F733C:
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// bl 0x82139fe8
	ctx.lr = 0x820F7344;
	sub_82139FE8(ctx, base);
loc_820F7344:
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7358
	if (ctx.cr6.eq) goto loc_820F7358;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82178200
	ctx.lr = 0x820F7358;
	sub_82178200(ctx, base);
loc_820F7358:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f736c
	if (ctx.cr6.eq) goto loc_820F736C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82178200
	ctx.lr = 0x820F736C;
	sub_82178200(ctx, base);
loc_820F736C:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7384
	if (ctx.cr6.eq) goto loc_820F7384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c92e8
	ctx.lr = 0x820F7384;
	sub_820C92E8(ctx, base);
loc_820F7384:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f739c
	if (ctx.cr6.eq) goto loc_820F739C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c93f8
	ctx.lr = 0x820F739C;
	sub_820C93F8(ctx, base);
loc_820F739C:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f73d8
	if (ctx.cr6.eq) goto loc_820F73D8;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,-26328
	ctx.r31.s64 = ctx.r11.s64 + -26328;
	// addi r3,r31,8288
	ctx.r3.s64 = ctx.r31.s64 + 8288;
	// bl 0x823052d8
	ctx.lr = 0x820F73C4;
	sub_823052D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8264
	ctx.r3.s64 = ctx.r31.s64 + 8264;
	// bl 0x822184b8
	ctx.lr = 0x820F73D0;
	sub_822184B8(ctx, base);
	// addi r3,r31,8288
	ctx.r3.s64 = ctx.r31.s64 + 8288;
	// bl 0x823051a8
	ctx.lr = 0x820F73D8;
	sub_823051A8(ctx, base);
loc_820F73D8:
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

__attribute__((alias("__imp__sub_820F73EC"))) PPC_WEAK_FUNC(sub_820F73EC);
PPC_FUNC_IMPL(__imp__sub_820F73EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F73F0"))) PPC_WEAK_FUNC(sub_820F73F0);
PPC_FUNC_IMPL(__imp__sub_820F73F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7420
	if (ctx.cr6.eq) goto loc_820F7420;
	// bl 0x820f7a80
	ctx.lr = 0x820F7410;
	sub_820F7A80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F7420:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7440
	if (ctx.cr6.eq) goto loc_820F7440;
	// bl 0x820f7980
	ctx.lr = 0x820F7430;
	sub_820F7980(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F7440:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7460
	if (ctx.cr6.eq) goto loc_820F7460;
	// bl 0x820f7838
	ctx.lr = 0x820F7450;
	sub_820F7838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F7460:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f754c
	if (ctx.cr6.eq) goto loc_820F754C;
	// lfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f0,524(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stfs f13,528(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,532(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// lfs f10,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f11,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fneg f6,f11
	ctx.f6.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f6,540(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f7,544(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// stfs f8,548(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f0,552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// stw r7,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r7.u32);
	// lfs f0,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r6.u32);
	// stw r5,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r5.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r4,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r4.u32);
	// lfs f4,308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f5,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f5.f64 = double(temp.f32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f2,316(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// fmuls f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f0,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// stfs f1,572(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 572, temp.u32);
	// fmuls f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// stfs f0,576(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 576, temp.u32);
	// stfs f13,580(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 580, temp.u32);
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// stw r10,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r10.u32);
	// stw r9,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r9.u32);
	// stw r8,600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 600, ctx.r8.u32);
loc_820F754C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F755C"))) PPC_WEAK_FUNC(sub_820F755C);
PPC_FUNC_IMPL(__imp__sub_820F755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7560"))) PPC_WEAK_FUNC(sub_820F7560);
PPC_FUNC_IMPL(__imp__sub_820F7560) {
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
	// beq cr6,0x820f765c
	if (ctx.cr6.eq) goto loc_820F765C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,29324
	ctx.r31.s64 = ctx.r11.s64 + 29324;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820F7594;
	sub_823052D8(ctx, base);
	// lwz r11,604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 604);
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
	// bne cr6,0x820f7650
	if (!ctx.cr6.eq) goto loc_820F7650;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f7650
	if (ctx.cr6.eq) goto loc_820F7650;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820f7650
	if (!ctx.cr6.lt) goto loc_820F7650;
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
	// beq cr6,0x820f7628
	if (ctx.cr6.eq) goto loc_820F7628;
loc_820F7600:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f7620
	if (ctx.cr6.eq) goto loc_820F7620;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820f7600
	if (!ctx.cr6.eq) goto loc_820F7600;
	// b 0x820f7628
	goto loc_820F7628;
loc_820F7620:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820F7628:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f7640
	if (!ctx.cr6.eq) goto loc_820F7640;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_820F7640:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820F764C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_820F7650:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820F765C;
	sub_823051A8(ctx, base);
loc_820F765C:
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

__attribute__((alias("__imp__sub_820F7674"))) PPC_WEAK_FUNC(sub_820F7674);
PPC_FUNC_IMPL(__imp__sub_820F7674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7678"))) PPC_WEAK_FUNC(sub_820F7678);
PPC_FUNC_IMPL(__imp__sub_820F7678) {
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,29324
	ctx.r31.s64 = ctx.r11.s64 + 29324;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820F76A0;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f76c4
	if (ctx.cr6.eq) goto loc_820F76C4;
loc_820F76AC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f76f4
	if (!ctx.cr6.eq) goto loc_820F76F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f76ac
	if (!ctx.cr6.eq) goto loc_820F76AC;
loc_820F76C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f771c
	if (!ctx.cr6.eq) goto loc_820F771C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820f7778
	ctx.lr = 0x820F76D8;
	sub_820F7778(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f771c
	if (!ctx.cr6.eq) goto loc_820F771C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820F76EC;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f7760
	goto loc_820F7760;
loc_820F76F4:
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
	// b 0x820f7750
	goto loc_820F7750;
loc_820F771C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,604
	ctx.r10.s64 = ctx.r11.s64 + 604;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,604(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
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
loc_820F7750:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820F775C;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820F7760:
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

__attribute__((alias("__imp__sub_820F7778"))) PPC_WEAK_FUNC(sub_820F7778);
PPC_FUNC_IMPL(__imp__sub_820F7778) {
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
	// mulli r11,r3,608
	ctx.r11.s64 = ctx.r3.s64 * 608;
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
	ctx.lr = 0x820F77A4;
	sub_82082030(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r11,r11,29324
	ctx.r11.s64 = ctx.r11.s64 + 29324;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f77c0
	if (ctx.cr6.eq) goto loc_820F77C0;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x820f77c4
	goto loc_820F77C4;
loc_820F77C0:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_820F77C4:
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
	// beq cr6,0x820f7804
	if (ctx.cr6.eq) goto loc_820F7804;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_820F77FC:
	// stwu r3,608(r10)
	ea = 608 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820f77fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F77FC;
loc_820F7804:
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

__attribute__((alias("__imp__sub_820F7824"))) PPC_WEAK_FUNC(sub_820F7824);
PPC_FUNC_IMPL(__imp__sub_820F7824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7828"))) PPC_WEAK_FUNC(sub_820F7828);
PPC_FUNC_IMPL(__imp__sub_820F7828) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-284
	ctx.r3.s64 = ctx.r3.s64 + -284;
	// b 0x820f69e8
	sub_820F69E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F7830"))) PPC_WEAK_FUNC(sub_820F7830);
PPC_FUNC_IMPL(__imp__sub_820F7830) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-284
	ctx.r3.s64 = ctx.r3.s64 + -284;
	// b 0x820f6ac8
	sub_820F6AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F7838"))) PPC_WEAK_FUNC(sub_820F7838);
PPC_FUNC_IMPL(__imp__sub_820F7838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,320(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f11,340(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lfs f10,324(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lfs f9,348(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f0,524(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f6,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stfs f6,528(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// lfs f5,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r7,22200
	ctx.r6.s64 = ctx.r7.s64 + 22200;
	// stfs f5,532(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// lfs f4,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f0,f7
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// stfs f1,-16(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f10,-8(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f9,f12,f1,f13
	ctx.f9.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f9,-12(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fnmsubs f8,f11,f10,f13
	ctx.f8.f64 = double(float(-(ctx.f11.f64 * ctx.f10.f64 - ctx.f13.f64)));
	// stfs f8,-4(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// fneg f7,f2
	ctx.f7.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f7,544(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// fneg f6,f3
	ctx.f6.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f6,540(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// fneg f5,f4
	ctx.f5.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f5,548(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// stw r5,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r5.u32);
	// stfs f0,552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// stw r4,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r4.u32);
	// lfs f4,316(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f4.f64 = double(temp.f32);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stw r10,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r10.u32);
	// lfs f2,308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f11,f3,f4
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f13,f1,f4
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// stfs f11,572(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 572, temp.u32);
	// fmuls f12,f2,f4
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// stfs f12,576(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 576, temp.u32);
	// stfs f13,580(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 580, temp.u32);
	// lwz r9,504(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// lfs f10,332(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,328(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-16(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f10,-12(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// stw r7,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r7.u32);
	// stw r5,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r5.u32);
	// stw r4,600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 600, ctx.r4.u32);
	// lwz r11,984(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 984);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r11.u32);
	// stfs f0,508(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 508, temp.u32);
	// stfs f0,512(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// stfs f0,516(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// stfs f0,520(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F797C"))) PPC_WEAK_FUNC(sub_820F797C);
PPC_FUNC_IMPL(__imp__sub_820F797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7980"))) PPC_WEAK_FUNC(sub_820F7980);
PPC_FUNC_IMPL(__imp__sub_820F7980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,320(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f11,324(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stfs f0,524(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// stfs f9,528(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// lfs f8,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,532(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// lfs f7,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// lfs f0,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f4,-16(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// fnmsubs f3,f12,f4,f0
	ctx.f3.f64 = double(float(-(ctx.f12.f64 * ctx.f4.f64 - ctx.f0.f64)));
	// stfs f3,-12(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fneg f2,f5
	ctx.f2.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f2,544(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// fneg f1,f6
	ctx.f1.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f1,540(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// fneg f12,f7
	ctx.f12.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f12,548(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// stfs f13,552(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// stw r4,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r4.u32);
	// stw r7,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r7.u32);
	// lfs f11,316(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f11.f64 = double(temp.f32);
	// stw r6,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r6.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stw r5,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r5.u32);
	// lfs f9,308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f5,572(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 572, temp.u32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f6,576(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 576, temp.u32);
	// stfs f7,580(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 580, temp.u32);
	// lfs f4,328(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,-16(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r11.u32);
	// stw r10,600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 600, ctx.r10.u32);
	// stw r9,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r9.u32);
	// stw r8,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F7A80"))) PPC_WEAK_FUNC(sub_820F7A80);
PPC_FUNC_IMPL(__imp__sub_820F7A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f0,524(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stfs f13,528(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lfs f12,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stfs f12,532(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// lfs f11,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r7,22200
	ctx.r6.s64 = ctx.r7.s64 + 22200;
	// lfs f10,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,548(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f7,544(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// fneg f6,f11
	ctx.f6.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f6,540(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// stfs f0,552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// stw r5,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r5.u32);
	// stw r4,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r4.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stw r10,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r10.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stw r11,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r11.u32);
	// lfs f4,308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f5,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f5.f64 = double(temp.f32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f2,316(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// fmuls f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f0,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// stfs f1,572(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 572, temp.u32);
	// fmuls f12,f3,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// stfs f0,576(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 576, temp.u32);
	// stfs f12,580(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 580, temp.u32);
	// stw r9,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r9.u32);
	// stw r7,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r7.u32);
	// stw r5,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r5.u32);
	// stw r4,600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 600, ctx.r4.u32);
	// lwz r11,984(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 984);
	// lwz r10,504(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r11.u32);
	// stfs f13,508(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 508, temp.u32);
	// stfs f13,512(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// stfs f13,516(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// stfs f13,520(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F7B90"))) PPC_WEAK_FUNC(sub_820F7B90);
PPC_FUNC_IMPL(__imp__sub_820F7B90) {
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
	ctx.lr = 0x820F7BA8;
	sub_82081C00(ctx, base);
	// bl 0x820f9ff8
	ctx.lr = 0x820F7BAC;
	sub_820F9FF8(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820F7BBC;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f7bd0
	if (!ctx.cr6.eq) goto loc_820F7BD0;
	// bl 0x821b3000
	ctx.lr = 0x820F7BCC;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820F7BD0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7be8
	if (ctx.cr6.eq) goto loc_820F7BE8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_820F7BE8:
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

__attribute__((alias("__imp__sub_820F7BFC"))) PPC_WEAK_FUNC(sub_820F7BFC);
PPC_FUNC_IMPL(__imp__sub_820F7BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7C00"))) PPC_WEAK_FUNC(sub_820F7C00);
PPC_FUNC_IMPL(__imp__sub_820F7C00) {
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
	// li r5,263
	ctx.r5.s64 = 263;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820ef6d0
	ctx.lr = 0x820F7C1C;
	sub_820EF6D0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-30952
	ctx.r8.s64 = ctx.r10.s64 + -30952;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stfs f0,416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f0,376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// stfs f13,420(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f13,400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f13,380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// stfs f13,360(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// oris r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 | 1048576;
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_820F7CC8"))) PPC_WEAK_FUNC(sub_820F7CC8);
PPC_FUNC_IMPL(__imp__sub_820F7CC8) {
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
	// bl 0x820f7e98
	ctx.lr = 0x820F7CE8;
	sub_820F7E98(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7d00
	if (ctx.cr6.eq) goto loc_820F7D00;
	// bl 0x820f9ee0
	ctx.lr = 0x820F7CFC;
	sub_820F9EE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F7D00:
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

__attribute__((alias("__imp__sub_820F7D18"))) PPC_WEAK_FUNC(sub_820F7D18);
PPC_FUNC_IMPL(__imp__sub_820F7D18) {
	PPC_FUNC_PROLOGUE();
	// b 0x820f12e0
	sub_820F12E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F7D1C"))) PPC_WEAK_FUNC(sub_820F7D1C);
PPC_FUNC_IMPL(__imp__sub_820F7D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7D20"))) PPC_WEAK_FUNC(sub_820F7D20);
PPC_FUNC_IMPL(__imp__sub_820F7D20) {
	PPC_FUNC_PROLOGUE();
	// b 0x820f1228
	sub_820F1228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F7D24"))) PPC_WEAK_FUNC(sub_820F7D24);
PPC_FUNC_IMPL(__imp__sub_820F7D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7D28"))) PPC_WEAK_FUNC(sub_820F7D28);
PPC_FUNC_IMPL(__imp__sub_820F7D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F7D38"))) PPC_WEAK_FUNC(sub_820F7D38);
PPC_FUNC_IMPL(__imp__sub_820F7D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x820F7D40;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820f7d84
	if (!ctx.cr6.eq) goto loc_820F7D84;
	// bl 0x820f7b90
	ctx.lr = 0x820F7D68;
	sub_820F7B90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7d80
	if (ctx.cr6.eq) goto loc_820F7D80;
	// lwz r4,268(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	// bl 0x820f7c00
	ctx.lr = 0x820F7D78;
	sub_820F7C00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x820f7d84
	goto loc_820F7D84;
loc_820F7D80:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820F7D84:
	// lwz r11,284(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 284);
	// lis r10,1489
	ctx.r10.s64 = 97583104;
	// addi r9,r29,292
	ctx.r9.s64 = ctx.r29.s64 + 292;
	// ori r8,r10,29789
	ctx.r8.u64 = ctx.r10.u64 | 29789;
	// stw r11,284(r29)
	PPC_STORE_U32(ctx.r29.u32 + 284, ctx.r11.u32);
	// lwz r7,288(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// stw r7,288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 288, ctx.r7.u32);
	// lwz r6,292(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// stw r6,292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 292, ctx.r6.u32);
	// lwz r5,296(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// stw r5,296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 296, ctx.r5.u32);
	// lwz r4,300(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	// stw r4,300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 300, ctx.r4.u32);
	// lwz r3,304(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	// stw r3,304(r29)
	PPC_STORE_U32(ctx.r29.u32 + 304, ctx.r3.u32);
	// lwz r26,308(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// stw r26,308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 308, ctx.r26.u32);
	// mulli r3,r26,44
	ctx.r3.s64 = ctx.r26.s64 * 44;
	// ble cr6,0x820f7dd8
	if (!ctx.cr6.gt) goto loc_820F7DD8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820F7DD8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820F7DE8;
	sub_82082030(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r3,312(r29)
	PPC_STORE_U32(ctx.r29.u32 + 312, ctx.r3.u32);
	// beq cr6,0x820f7e68
	if (ctx.cr6.eq) goto loc_820F7E68;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_820F7DFC:
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// li r10,9
	ctx.r10.s64 = 9;
	// lwz r9,312(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r31,r9,r30
	ctx.r31.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r8,r31,-4
	ctx.r8.s64 = ctx.r31.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_820F7E24:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x820f7e24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F7E24;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f7e44
	if (!ctx.cr6.eq) goto loc_820F7E44;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x820f7e58
	goto loc_820F7E58;
loc_820F7E44:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820debc0
	ctx.lr = 0x820F7E54;
	sub_820DEBC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820F7E58:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// bne 0x820f7dfc
	if (!ctx.cr0.eq) goto loc_820F7DFC;
loc_820F7E68:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,288(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f8590
	ctx.lr = 0x820F7E78;
	sub_820F8590(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820f0488
	ctx.lr = 0x820F7E90;
	sub_820F0488(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F7E98"))) PPC_WEAK_FUNC(sub_820F7E98);
PPC_FUNC_IMPL(__imp__sub_820F7E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820F7EA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-30952
	ctx.r10.s64 = ctx.r11.s64 + -30952;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820ef8a0
	ctx.lr = 0x820F7EB8;
	sub_820EF8A0(ctx, base);
	// lwz r9,308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x820f7ef0
	if (!ctx.cr6.gt) goto loc_820F7EF0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820F7ECC:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x820de9b8
	ctx.lr = 0x820F7EDC;
	sub_820DE9B8(ctx, base);
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820f7ecc
	if (ctx.cr6.lt) goto loc_820F7ECC;
loc_820F7EF0:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7f08
	if (ctx.cr6.eq) goto loc_820F7F08;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820F7F08;
	sub_82080000(ctx, base);
loc_820F7F08:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7f20
	if (ctx.cr6.eq) goto loc_820F7F20;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820F7F20;
	sub_82080000(ctx, base);
loc_820F7F20:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7f38
	if (ctx.cr6.eq) goto loc_820F7F38;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820F7F38;
	sub_82080000(ctx, base);
loc_820F7F38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef958
	ctx.lr = 0x820F7F40;
	sub_820EF958(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F7F48"))) PPC_WEAK_FUNC(sub_820F7F48);
PPC_FUNC_IMPL(__imp__sub_820F7F48) {
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
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f7f7c
	if (!ctx.cr6.eq) goto loc_820F7F7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f8064
	goto loc_820F8064;
loc_820F7F7C:
	// addi r30,r31,360
	ctx.r30.s64 = ctx.r31.s64 + 360;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820F7F90;
	sub_8233E4E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82257cb8
	ctx.lr = 0x820F7FA0;
	sub_82257CB8(ctx, base);
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f10.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f9,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// addi r11,r31,340
	ctx.r11.s64 = ctx.r31.s64 + 340;
	// addi r11,r31,328
	ctx.r11.s64 = ctx.r31.s64 + 328;
	// lfs f31,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f5,f11,f31
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f4,f8,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82257540
	ctx.lr = 0x820F8000;
	sub_82257540(ctx, base);
	// lfs f2,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f12,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f13,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f5,f10,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f0,f7,f7,f5
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820f804c
	if (!ctx.cr6.gt) goto loc_820F804C;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,304(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// b 0x820f8054
	goto loc_820F8054;
loc_820F804C:
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
loc_820F8054:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
loc_820F8064:
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

__attribute__((alias("__imp__sub_820F8080"))) PPC_WEAK_FUNC(sub_820F8080);
PPC_FUNC_IMPL(__imp__sub_820F8080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x820F8088;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// sth r5,178(r3)
	PPC_STORE_U16(ctx.r3.u32 + 178, ctx.r5.u16);
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r23,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// stw r7,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r7.u32);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,56(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r30,r3,360
	ctx.r30.s64 = ctx.r3.s64 + 360;
	// stw r6,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r6.u32);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stfs f0,296(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// lwz r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r6,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// lwz r8,44(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// lwz r7,48(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r7,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r7.u32);
	// lwz r6,52(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// stw r6,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r6.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x820F8144;
	sub_8233E4E0(ctx, base);
	// addi r24,r31,424
	ctx.r24.s64 = ctx.r31.s64 + 424;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82257cb8
	ctx.lr = 0x820F8158;
	sub_82257CB8(ctx, base);
	// lis r5,1489
	ctx.r5.s64 = 97583104;
	// li r19,-1
	ctx.r19.s64 = -1;
	// ori r4,r5,29789
	ctx.r4.u64 = ctx.r5.u64 | 29789;
	// lwz r20,4(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r20,r4
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r4.u32, ctx.xer);
	// mulli r3,r20,44
	ctx.r3.s64 = ctx.r20.s64 * 44;
	// stw r20,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r20.u32);
	// ble cr6,0x820f817c
	if (!ctx.cr6.gt) goto loc_820F817C;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_820F817C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820F818C;
	sub_82082030(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f820c
	if (ctx.cr6.eq) goto loc_820F820C;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x820f828c
	if (ctx.cr6.eq) goto loc_820F828C;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_820F81B4:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r30,r26,r11
	ctx.r30.u64 = ctx.r26.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r23,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r23.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r28,r25,r11
	ctx.r28.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// bl 0x82257540
	ctx.lr = 0x820F81D8;
	sub_82257540(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82257540
	ctx.lr = 0x820F81E8;
	sub_82257540(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r28,24
	ctx.r4.s64 = ctx.r28.s64 + 24;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82257540
	ctx.lr = 0x820F81F8;
	sub_82257540(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r26,r26,44
	ctx.r26.s64 = ctx.r26.s64 + 44;
	// addi r25,r25,36
	ctx.r25.s64 = ctx.r25.s64 + 36;
	// bne 0x820f81b4
	if (!ctx.cr0.eq) goto loc_820F81B4;
	// b 0x820f828c
	goto loc_820F828C;
loc_820F820C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x820f828c
	if (ctx.cr6.eq) goto loc_820F828C;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_820F8220:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r8,44
	ctx.r8.s64 = ctx.r8.s64 + 44;
	// stw r23,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r23.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// bne 0x820f8220
	if (!ctx.cr0.eq) goto loc_820F8220;
loc_820F828C:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820f8434
	if (!ctx.cr6.gt) goto loc_820F8434;
	// lis r22,-32197
	ctx.r22.s64 = -2110062592;
	// lwz r3,-27096(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820F82A4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f82b0
	if (!ctx.cr6.eq) goto loc_820F82B0;
	// bl 0x821b3000
	ctx.lr = 0x820F82B0;
	sub_821B3000(ctx, base);
loc_820F82B0:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r25,r3,20
	ctx.r25.s64 = ctx.r3.s64 + 20;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r21,-13569
	ctx.r21.s64 = -889257984;
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820f82e4
	if (!ctx.cr6.gt) goto loc_820F82E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r9,r11,4492
	ctx.r9.s64 = ctx.r11.s64 + 4492;
	// stw r9,-13570(r21)
	PPC_STORE_U32(ctx.r21.u32 + -13570, ctx.r9.u32);
loc_820F82E4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// lwz r5,64(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x820F8308;
	sub_8233EAF0(ctx, base);
	// lwz r8,64(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// beq cr6,0x820f83e8
	if (ctx.cr6.eq) goto loc_820F83E8;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_820F8320:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r3,-27096(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -27096);
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x82388734
	ctx.lr = 0x820F8330;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f833c
	if (!ctx.cr6.eq) goto loc_820F833C;
	// bl 0x821b3000
	ctx.lr = 0x820F833C;
	sub_821B3000(ctx, base);
loc_820F833C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x820f8360
	if (!ctx.cr6.lt) goto loc_820F8360;
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
loc_820F8360:
	// bl 0x820def78
	ctx.lr = 0x820F8364;
	sub_820DEF78(ctx, base);
	// lwz r11,-27096(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -27096);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82388734
	ctx.lr = 0x820F8374;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f8380
	if (!ctx.cr6.eq) goto loc_820F8380;
	// bl 0x821b3000
	ctx.lr = 0x820F8380;
	sub_821B3000(ctx, base);
loc_820F8380:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8394
	if (ctx.cr6.eq) goto loc_820F8394;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820F8394:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f83ac
	if (ctx.cr6.eq) goto loc_820F83AC;
	// stw r23,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r23.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r23,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r23.u32);
	// b 0x820f83b0
	goto loc_820F83B0;
loc_820F83AC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_820F83B0:
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r19,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r19.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x820de708
	ctx.lr = 0x820F83D4;
	sub_820DE708(ctx, base);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,44
	ctx.r27.s64 = ctx.r27.s64 + 44;
	// stw r23,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r23.u32);
	// bne 0x820f8320
	if (!ctx.cr0.eq) goto loc_820F8320;
loc_820F83E8:
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// addi r8,r11,4520
	ctx.r8.s64 = ctx.r11.s64 + 4520;
	// rlwinm r11,r7,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820f840c
	if (!ctx.cr6.gt) goto loc_820F840C;
	// stw r8,-13570(r21)
	PPC_STORE_U32(ctx.r21.u32 + -13570, ctx.r8.u32);
loc_820F840C:
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x820f8428
	if (ctx.cr6.eq) goto loc_820F8428;
	// stw r8,-13570(r21)
	PPC_STORE_U32(ctx.r21.u32 + -13570, ctx.r8.u32);
loc_820F8428:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
loc_820F8434:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r5,288(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f8590
	ctx.lr = 0x820F8444;
	sub_820F8590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820efed0
	ctx.lr = 0x820F844C;
	sub_820EFED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f7f48
	ctx.lr = 0x820F8454;
	sub_820F7F48(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F845C"))) PPC_WEAK_FUNC(sub_820F845C);
PPC_FUNC_IMPL(__imp__sub_820F845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8460"))) PPC_WEAK_FUNC(sub_820F8460);
PPC_FUNC_IMPL(__imp__sub_820F8460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820F8468;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r24,308(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8498
	if (ctx.cr6.eq) goto loc_820F8498;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820F8498;
	sub_82080000(ctx, base);
loc_820F8498:
	// lis r11,1489
	ctx.r11.s64 = 97583104;
	// mulli r3,r24,44
	ctx.r3.s64 = ctx.r24.s64 * 44;
	// ori r10,r11,29789
	ctx.r10.u64 = ctx.r11.u64 | 29789;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f84b0
	if (!ctx.cr6.gt) goto loc_820F84B0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820F84B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820F84C0;
	sub_82082030(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,312(r28)
	PPC_STORE_U32(ctx.r28.u32 + 312, ctx.r3.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_820F84D4:
	// stb r26,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// bl 0x82161240
	ctx.lr = 0x820F84F8;
	sub_82161240(ctx, base);
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x820F850C;
	sub_8208CFB0(ctx, base);
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// bl 0x82161240
	ctx.lr = 0x820F8528;
	sub_82161240(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f8550
	if (ctx.cr6.eq) goto loc_820F8550;
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,36
	ctx.r6.s64 = ctx.r11.s64 + 36;
	// bl 0x820dec30
	ctx.lr = 0x820F8550;
	sub_820DEC30(ctx, base);
loc_820F8550:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x820f8574
	if (!ctx.cr6.lt) goto loc_820F8574;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82161240
	ctx.lr = 0x820F8570;
	sub_82161240(ctx, base);
	// b 0x820f84d4
	goto loc_820F84D4;
loc_820F8574:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,288(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// lwz r4,308(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// bl 0x820f8590
	ctx.lr = 0x820F8584;
	sub_820F8590(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F858C"))) PPC_WEAK_FUNC(sub_820F858C);
PPC_FUNC_IMPL(__imp__sub_820F858C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8590"))) PPC_WEAK_FUNC(sub_820F8590);
PPC_FUNC_IMPL(__imp__sub_820F8590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820F8598;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r9,284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,25532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25532);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,25532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25532, ctx.r11.u32);
	// stw r11,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r11.u32);
	// bne cr6,0x820f85dc
	if (!ctx.cr6.eq) goto loc_820F85DC;
	// addi r30,r4,-1
	ctx.r30.s64 = ctx.r4.s64 + -1;
loc_820F85DC:
	// mullw r11,r30,r29
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// add r23,r11,r25
	ctx.r23.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f8638
	if (ctx.cr6.eq) goto loc_820F8638;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f860c
	if (ctx.cr6.eq) goto loc_820F860C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820F860C;
	sub_82080000(ctx, base);
loc_820F860C:
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// rlwinm r3,r23,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f8624
	if (!ctx.cr6.gt) goto loc_820F8624;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_820F8624:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820F8634;
	sub_82082030(ctx, base);
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
loc_820F8638:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f8694
	if (ctx.cr6.eq) goto loc_820F8694;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f865c
	if (ctx.cr6.eq) goto loc_820F865C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820F865C;
	sub_82080000(ctx, base);
loc_820F865C:
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820f867c
	if (ctx.cr6.gt) goto loc_820F867C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x820f8680
	goto loc_820F8680;
loc_820F867C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_820F8680:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820F8690;
	sub_82082030(ctx, base);
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
loc_820F8694:
	// addi r27,r29,1
	ctx.r27.s64 = ctx.r29.s64 + 1;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r25,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r25.u32);
	// clrldi r9,r27,32
	ctx.r9.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// stw r23,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r23.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// lfs f31,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f0,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f30,f0,f11
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// beq cr6,0x820f881c
	if (ctx.cr6.eq) goto loc_820F881C;
	// li r26,0
	ctx.r26.s64 = 0;
loc_820F8704:
	// divwu r11,r28,r27
	ctx.r11.u32 = ctx.r28.u32 / ctx.r27.u32;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r8,324(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// twllei r27,0
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mulli r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 * 44;
	// divwu r6,r7,r25
	ctx.r6.u32 = ctx.r7.u32 / ctx.r25.u32;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r5,r6,r25
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// twllei r25,0
	// mulli r9,r4,44
	ctx.r9.s64 = ctx.r4.s64 * 44;
	// add r30,r26,r8
	ctx.r30.u64 = ctx.r26.u64 + ctx.r8.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x820f8768
	if (!ctx.cr6.eq) goto loc_820F8768;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stfs f31,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// b 0x820f87a4
	goto loc_820F87A4;
loc_820F8768:
	// divwu r11,r28,r27
	ctx.r11.u32 = ctx.r28.u32 / ctx.r27.u32;
	// addi r7,r6,12
	ctx.r7.s64 = ctx.r6.s64 + 12;
	// mullw r10,r11,r27
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// subf r9,r10,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r10.s64;
	// addi r5,r29,24
	ctx.r5.s64 = ctx.r29.s64 + 24;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// twllei r27,0
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x82308da0
	ctx.lr = 0x820F87A4;
	sub_82308DA0(ctx, base);
loc_820F87A4:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fadds f0,f1,f5
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f0,40(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// lfs f13,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f12,316(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// blt cr6,0x820f8704
	if (ctx.cr6.lt) goto loc_820F8704;
loc_820F881C:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f887c
	if (ctx.cr6.eq) goto loc_820F887C;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// rlwinm r10,r23,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,-16
	ctx.r9.s64 = ctx.r10.s64 + -16;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
loc_820F887C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f8898
	ctx.lr = 0x820F8884;
	sub_820F8898(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F8894"))) PPC_WEAK_FUNC(sub_820F8894);
PPC_FUNC_IMPL(__imp__sub_820F8894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8898"))) PPC_WEAK_FUNC(sub_820F8898);
PPC_FUNC_IMPL(__imp__sub_820F8898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x820F88A0;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,324(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r22,352(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addi r28,r3,328
	ctx.r28.s64 = ctx.r3.s64 + 328;
	// lwz r24,320(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r9,356(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// twllei r22,0
	// divwu r7,r24,r22
	ctx.r7.u32 = ctx.r24.u32 / ctx.r22.u32;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// divwu r11,r24,r22
	ctx.r11.u32 = ctx.r24.u32 / ctx.r22.u32;
	// mullw r6,r7,r22
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r5,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r5.u32);
	// rotlwi r4,r8,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r8,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r8.u32);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// stw r4,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r4.u32);
	// subf r10,r6,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r6.s64;
	// stw r7,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r7.u32);
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// twllei r22,0
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// ble cr6,0x820f8a00
	if (!ctx.cr6.gt) goto loc_820F8A00;
	// li r23,16
	ctx.r23.s64 = 16;
loc_820F8950:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// divwu r29,r27,r26
	ctx.r29.u32 = ctx.r27.u32 / ctx.r26.u32;
	// add r30,r23,r11
	ctx.r30.u64 = ctx.r23.u64 + ctx.r11.u64;
	// twllei r26,0
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82308fc8
	ctx.lr = 0x820F896C;
	sub_82308FC8(ctx, base);
	// divwu r11,r27,r26
	ctx.r11.u32 = ctx.r27.u32 / ctx.r26.u32;
	// twllei r26,0
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r9,r10,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// bne 0x820f89e4
	if (!ctx.cr0.eq) goto loc_820F89E4;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// bl 0x82308fc8
	ctx.lr = 0x820F89A0;
	sub_82308FC8(ctx, base);
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r9,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// b 0x820f89f0
	goto loc_820F89F0;
loc_820F89E4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82308fc8
	ctx.lr = 0x820F89F0;
	sub_82308FC8(ctx, base);
loc_820F89F0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x820f8950
	if (ctx.cr6.lt) goto loc_820F8950;
loc_820F8A00:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f8a30
	if (ctx.cr6.eq) goto loc_820F8A30;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// bl 0x82308fc8
	ctx.lr = 0x820F8A30;
	sub_82308FC8(ctx, base);
loc_820F8A30:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,360
	ctx.r5.s64 = ctx.r31.s64 + 360;
	// lfs f12,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f9,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// lfs f31,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f5,f11,f31
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f4,f8,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82257540
	ctx.lr = 0x820F8A88;
	sub_82257540(ctx, base);
	// lfs f2,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f13,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f6,f11,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f5,f8,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,304(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F8AD0"))) PPC_WEAK_FUNC(sub_820F8AD0);
PPC_FUNC_IMPL(__imp__sub_820F8AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820F8AD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820f8bb4
	if (!ctx.cr6.lt) goto loc_820F8BB4;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mulli r10,r4,44
	ctx.r10.s64 = ctx.r4.s64 * 44;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f8b50
	if (ctx.cr6.eq) goto loc_820F8B50;
	// bl 0x820f7f48
	ctx.lr = 0x820F8B18;
	sub_820F7F48(ctx, base);
	// addi r29,r30,424
	ctx.r29.s64 = ctx.r30.s64 + 424;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257540
	ctx.lr = 0x820F8B2C;
	sub_82257540(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82257540
	ctx.lr = 0x820F8B3C;
	sub_82257540(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82257540
	ctx.lr = 0x820F8B4C;
	sub_82257540(ctx, base);
	// b 0x820f8b98
	goto loc_820F8B98;
loc_820F8B50:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_820F8B98:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8bb4
	if (ctx.cr6.eq) goto loc_820F8BB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,288(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// lwz r4,308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// bl 0x820f8590
	ctx.lr = 0x820F8BB4;
	sub_820F8590(ctx, base);
loc_820F8BB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F8BBC"))) PPC_WEAK_FUNC(sub_820F8BBC);
PPC_FUNC_IMPL(__imp__sub_820F8BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8BC0"))) PPC_WEAK_FUNC(sub_820F8BC0);
PPC_FUNC_IMPL(__imp__sub_820F8BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820F8BC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mulli r9,r5,44
	ctx.r9.s64 = ctx.r5.s64 * 44;
	// lwz r8,324(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r7,308(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// divwu r6,r3,r7
	ctx.r6.u32 = ctx.r3.u32 / ctx.r7.u32;
	// addi r29,r9,31376
	ctx.r29.s64 = ctx.r9.s64 + 31376;
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// subf r4,r5,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r5.s64;
	// fdivs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f0,224(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// mulli r9,r4,44
	ctx.r9.s64 = ctx.r4.s64 * 44;
	// twllei r7,0
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820f8c48
	if (ctx.cr6.lt) goto loc_820F8C48;
	// lfs f0,812(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 812);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820f8c4c
	if (!ctx.cr6.gt) goto loc_820F8C4C;
loc_820F8C48:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_820F8C4C:
	// addi r7,r6,12
	ctx.r7.s64 = ctx.r6.s64 + 12;
	// addi r5,r10,24
	ctx.r5.s64 = ctx.r10.s64 + 24;
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82308ea0
	ctx.lr = 0x820F8C60;
	sub_82308EA0(ctx, base);
	// addi r5,r31,360
	ctx.r5.s64 = ctx.r31.s64 + 360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82257600
	ctx.lr = 0x820F8C70;
	sub_82257600(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f11,f8
	ctx.f11.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x820f8cb8
	if (!ctx.cr6.gt) goto loc_820F8CB8;
	// lfs f10,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f8,8(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_820F8CB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F8CC0"))) PPC_WEAK_FUNC(sub_820F8CC0);
PPC_FUNC_IMPL(__imp__sub_820F8CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820F8CC8;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x820f7f48
	ctx.lr = 0x820F8CEC;
	sub_820F7F48(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f30,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x820f8d64
	if (ctx.cr6.gt) goto loc_820F8D64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f8d18
	if (ctx.cr6.eq) goto loc_820F8D18;
	// addi r5,r31,360
	ctx.r5.s64 = ctx.r31.s64 + 360;
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257540
	ctx.lr = 0x820F8D18;
	sub_82257540(ctx, base);
loc_820F8D18:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820f8d34
	if (ctx.cr6.eq) goto loc_820F8D34;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f8bc0
	ctx.lr = 0x820F8D34;
	sub_820F8BC0(ctx, base);
loc_820F8D34:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f8fdc
	if (ctx.cr6.eq) goto loc_820F8FDC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820F8D64:
	// lfs f7,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f31,f7
	ctx.cr6.compare(ctx.f31.f64, ctx.f7.f64);
	// blt cr6,0x820f8e4c
	if (ctx.cr6.lt) goto loc_820F8E4C;
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f8de4
	if (ctx.cr6.eq) goto loc_820F8DE4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f8d98
	if (ctx.cr6.eq) goto loc_820F8D98;
	// addi r5,r31,360
	ctx.r5.s64 = ctx.r31.s64 + 360;
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257540
	ctx.lr = 0x820F8D98;
	sub_82257540(ctx, base);
loc_820F8D98:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820f8db4
	if (ctx.cr6.eq) goto loc_820F8DB4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f8bc0
	ctx.lr = 0x820F8DB4;
	sub_820F8BC0(ctx, base);
loc_820F8DB4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f8fdc
	if (ctx.cr6.eq) goto loc_820F8FDC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820F8DE4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f8e0c
	if (ctx.cr6.eq) goto loc_820F8E0C;
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r5,r31,360
	ctx.r5.s64 = ctx.r31.s64 + 360;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82257540
	ctx.lr = 0x820F8E0C;
	sub_82257540(ctx, base);
loc_820F8E0C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820f8e2c
	if (ctx.cr6.eq) goto loc_820F8E2C;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// bl 0x820f8bc0
	ctx.lr = 0x820F8E2C;
	sub_820F8BC0(ctx, base);
loc_820F8E2C:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x820f8fdc
	if (ctx.cr6.eq) goto loc_820F8FDC;
	// lfs f0,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x820f8fd0
	goto loc_820F8FD0;
loc_820F8E4C:
	// lwz r7,320(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// bne cr6,0x820f8e68
	if (!ctx.cr6.eq) goto loc_820F8E68;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820f8e80
	goto loc_820F8E80;
loc_820F8E68:
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
loc_820F8E80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8ed4
	if (ctx.cr6.eq) goto loc_820F8ED4;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x820f8eb4
	if (ctx.cr6.lt) goto loc_820F8EB4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820f8eac
	if (!ctx.cr6.lt) goto loc_820F8EAC;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x820f8ed4
	goto loc_820F8ED4;
loc_820F8EAC:
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// b 0x820f8ed4
	goto loc_820F8ED4;
loc_820F8EB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8ec4
	if (ctx.cr6.eq) goto loc_820F8EC4;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// b 0x820f8ed4
	goto loc_820F8ED4;
loc_820F8EC4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820f8ed4
	if (!ctx.cr6.lt) goto loc_820F8ED4;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_820F8ED4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820f8ff0
	ctx.lr = 0x820F8EE0;
	sub_820F8FF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f8f98
	if (ctx.cr6.eq) goto loc_820F8F98;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x820f8f0c
	if (!ctx.cr6.eq) goto loc_820F8F0C;
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
	// b 0x820f8f18
	goto loc_820F8F18;
loc_820F8F0C:
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_820F8F18:
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,360
	ctx.r5.s64 = ctx.r31.s64 + 360;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f31,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fdivs f1,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// fmuls f12,f8,f1
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f5,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82257540
	ctx.lr = 0x820F8F98;
	sub_82257540(ctx, base);
loc_820F8F98:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820f8fc0
	if (ctx.cr6.eq) goto loc_820F8FC0;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divwu r5,r30,r11
	ctx.r5.u32 = ctx.r30.u32 / ctx.r11.u32;
	// twllei r11,0
	// bl 0x820f8bc0
	ctx.lr = 0x820F8FC0;
	sub_820F8BC0(ctx, base);
loc_820F8FC0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f8fdc
	if (ctx.cr6.eq) goto loc_820F8FDC;
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_820F8FD0:
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_820F8FDC:
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

__attribute__((alias("__imp__sub_820F8FEC"))) PPC_WEAK_FUNC(sub_820F8FEC);
PPC_FUNC_IMPL(__imp__sub_820F8FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8FF0"))) PPC_WEAK_FUNC(sub_820F8FF0);
PPC_FUNC_IMPL(__imp__sub_820F8FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r9,324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f13,60(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
loc_820F9000:
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820f9058
	if (ctx.cr6.lt) goto loc_820F9058;
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f90d0
	if (ctx.cr6.eq) goto loc_820F90D0;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820f90d0
	if (ctx.cr6.lt) goto loc_820F90D0;
	// lwz r10,284(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820f906c
	if (ctx.cr6.eq) goto loc_820F906C;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x820f906c
	if (!ctx.cr6.eq) goto loc_820F906C;
loc_820F9050:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
loc_820F9058:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820f9050
	if (!ctx.cr6.lt) goto loc_820F9050;
loc_820F906C:
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820f90d0
	if (ctx.cr6.eq) goto loc_820F90D0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f8.u64);
	// lwz r11,-4(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820f90c0
	if (!ctx.cr6.lt) goto loc_820F90C0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x820f9000
	goto loc_820F9000;
loc_820F90C0:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820f90d8
	if (!ctx.cr6.gt) goto loc_820F90D8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x820f9000
	goto loc_820F9000;
loc_820F90D0:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
loc_820F90D8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F90E0"))) PPC_WEAK_FUNC(sub_820F90E0);
PPC_FUNC_IMPL(__imp__sub_820F90E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x820F90E8;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lfs f13,300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,292(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,296(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f0,f9,f9,f2
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f13,f5,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x820f9158
	if (!ctx.cr6.gt) goto loc_820F9158;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
loc_820F9144:
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
loc_820F9158:
	// addi r5,r24,424
	ctx.r5.s64 = ctx.r24.s64 + 424;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82257540
	ctx.lr = 0x820F9168;
	sub_82257540(ctx, base);
	// lfs f0,12(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r24,328
	ctx.r3.s64 = ctx.r24.s64 + 328;
	// bl 0x82309738
	ctx.lr = 0x820F917C;
	sub_82309738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// beq cr6,0x820f9144
	if (ctx.cr6.eq) goto loc_820F9144;
	// lwz r20,352(r24)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r24.u32 + 352);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r30,320(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 320);
	// addi r19,r11,31376
	ctx.r19.s64 = ctx.r11.s64 + 31376;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x820f92a8
	if (ctx.cr6.eq) goto loc_820F92A8;
	// lfs f31,48(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// li r21,0
	ctx.r21.s64 = 0;
loc_820F91AC:
	// lwz r11,356(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 356);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x82309738
	ctx.lr = 0x820F91BC;
	sub_82309738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f9298
	if (ctx.cr6.eq) goto loc_820F9298;
	// lwz r11,288(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 288);
	// lwz r25,324(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 324);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r29,r11,r23
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwzx r28,r11,r25
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r27,4(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,8(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bge cr6,0x820f9298
	if (!ctx.cr6.lt) goto loc_820F9298;
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
loc_820F91F8:
	// divwu r11,r31,r30
	ctx.r11.u32 = ctx.r31.u32 / ctx.r30.u32;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwzx r28,r11,r25
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// twllei r30,0
	// lwz r27,4(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r26,8(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x820fa1a8
	ctx.lr = 0x820F927C;
	sub_820FA1A8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820f92b8
	if (!ctx.cr6.eq) goto loc_820F92B8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x820f91f8
	if (ctx.cr6.lt) goto loc_820F91F8;
loc_820F9298:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r21,r21,24
	ctx.r21.s64 = ctx.r21.s64 + 24;
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x820f91ac
	if (ctx.cr6.lt) goto loc_820F91AC;
loc_820F92A8:
	// lfs f1,32(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
loc_820F92B8:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,316(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fdivs f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F92E0"))) PPC_WEAK_FUNC(sub_820F92E0);
PPC_FUNC_IMPL(__imp__sub_820F92E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820F92E8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8233fa2c
	ctx.lr = 0x820F92F0;
	__savefpr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x820f7f48
	ctx.lr = 0x820F930C;
	sub_820F7F48(ctx, base);
	// addi r5,r30,424
	ctx.r5.s64 = ctx.r30.s64 + 424;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82257540
	ctx.lr = 0x820F931C;
	sub_82257540(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,320(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lfs f12,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r11,31376
	ctx.r4.s64 = ctx.r11.s64 + 31376;
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f0,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x820f9480
	if (ctx.cr6.lt) goto loc_820F9480;
	// lwz r6,324(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r7,-3
	ctx.r5.s64 = ctx.r7.s64 + -3;
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
loc_820F9360:
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lfsx f7,r6,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmuls f1,f10,f6
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f7,f9,f4
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f6,f8,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f5,f7,f7
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f4,f6,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f7,f1,f1,f4
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f4.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x820f93a4
	if (!ctx.cr6.lt) goto loc_820F93A4;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_820F93A4:
	// lfs f7,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// lfs f5,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// lfs f3,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fmuls f1,f9,f6
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f7,f8,f4
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f6,f10,f2
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f5,f1,f1
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f7,f6,f6,f4
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x820f93e4
	if (!ctx.cr6.lt) goto loc_820F93E4;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_820F93E4:
	// addi r9,r8,48
	ctx.r9.s64 = ctx.r8.s64 + 48;
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfs f7,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// lfs f5,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// lfs f3,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fmuls f1,f9,f6
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f7,f8,f4
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f6,f10,f2
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f5,f1,f1
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f7,f6,f6,f4
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x820f942c
	if (!ctx.cr6.lt) goto loc_820F942C;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
loc_820F942C:
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfsx f7,r6,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmuls f1,f10,f6
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f7,f9,f4
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f6,f8,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f5,f7,f7
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f4,f6,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f7,f1,f1,f4
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f4.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x820f9470
	if (!ctx.cr6.lt) goto loc_820F9470;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
loc_820F9470:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x820f9360
	if (ctx.cr6.lt) goto loc_820F9360;
loc_820F9480:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x820f94f4
	if (!ctx.cr6.lt) goto loc_820F94F4;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lwz r8,324(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lfs f9,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F94A4:
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfsx f10,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmuls f1,f9,f6
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f10,f8,f4
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f6,f7,f2
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f6,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f10,f1,f1,f4
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f4.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x820f94e8
	if (!ctx.cr6.lt) goto loc_820F94E8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_820F94E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x820f94a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F94A4;
loc_820F94F4:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f2,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,284(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lfs f8,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lfs f29,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// bne cr6,0x820f96d4
	if (!ctx.cr6.eq) goto loc_820F96D4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f9668
	if (ctx.cr6.eq) goto loc_820F9668;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x820f96d4
	if (!ctx.cr6.eq) goto loc_820F96D4;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_820F9578:
	// lwz r8,324(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f9,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// lfs f7,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f7.f64 = double(temp.f32);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// lfs f1,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fmuls f7,f9,f7
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// fmuls f1,f8,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// fmuls f4,f8,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// fmuls f8,f0,f3
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fsubs f0,f12,f7
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fsubs f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fsubs f3,f11,f1
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fsubs f11,f4,f1
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f3,f11,f8
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f4,f11,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f3,f10,f9,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f1,f9,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fdivs f0,f3,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x820f9674
	if (!ctx.cr6.lt) goto loc_820F9674;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// b 0x820f9680
	goto loc_820F9680;
loc_820F9668:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x820f9578
	goto loc_820F9578;
loc_820F9674:
	// fcmpu cr6,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// ble cr6,0x820f9680
	if (!ctx.cr6.gt) goto loc_820F9680;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
loc_820F9680:
	// lfs f11,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fadds f13,f2,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x820f9988
	goto loc_820F9988;
loc_820F96D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// beq cr6,0x820f96e4
	if (ctx.cr6.eq) goto loc_820F96E4;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
loc_820F96E4:
	// lwz r8,324(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f9,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// divwu r6,r9,r7
	ctx.r6.u32 = ctx.r9.u32 / ctx.r7.u32;
	// twllei r7,0
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r5,r5,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r5.s64;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// lwz r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r24,8(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// lfs f7,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// fmuls f1,f9,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// lfs f6,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f6.f64 = double(temp.f32);
	// stw r5,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// fmuls f7,f9,f6
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f6,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f31,f8,f4
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// lfs f4,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f28,f0,f4
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f27,f0,f3
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// fsubs f26,f12,f7
	ctx.f26.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fsubs f13,f1,f7
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// fsubs f12,f6,f31
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f31.f64));
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f1,f11,f31
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fsubs f11,f28,f27
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f27.f64));
	// fsubs f0,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fmuls f28,f26,f13
	ctx.f28.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fsubs f25,f10,f27
	ctx.f25.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// fsubs f10,f8,f31
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fsubs f9,f6,f27
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f27.f64));
	// fmuls f6,f26,f0
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmadds f7,f1,f12,f28
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f28.f64));
	// fmadds f1,f1,f10,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f7,f25,f11,f7
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fabs f31,f7
	ctx.f31.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfs f8,224(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f25,f9,f1
	ctx.f6.f64 = double(float(ctx.f25.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fcmpu cr6,f31,f8
	ctx.cr6.compare(ctx.f31.f64, ctx.f8.f64);
	// bge cr6,0x820f9848
	if (!ctx.cr6.lt) goto loc_820F9848;
	// fabs f1,f6
	ctx.f1.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f1,f8
	ctx.cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// blt cr6,0x820f9850
	if (ctx.cr6.lt) goto loc_820F9850;
loc_820F9848:
	// fcmpu cr6,f7,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bne cr6,0x820f9860
	if (!ctx.cr6.eq) goto loc_820F9860;
loc_820F9850:
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x820f9994
	goto loc_820F9994;
loc_820F9860:
	// fcmpu cr6,f6,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f7.f64);
	// ble cr6,0x820f98cc
	if (!ctx.cr6.gt) goto loc_820F98CC;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f13,f10,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f9,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// ble cr6,0x820f9884
	if (!ctx.cr6.gt) goto loc_820F9884;
	// fdivs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 / ctx.f0.f64));
	// b 0x820f9888
	goto loc_820F9888;
loc_820F9884:
	// fmr f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f5.f64;
loc_820F9888:
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f9,f11,f3
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// b 0x820f992c
	goto loc_820F992C;
loc_820F98CC:
	// fmuls f0,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// ble cr6,0x820f98e8
	if (!ctx.cr6.gt) goto loc_820F98E8;
	// fdivs f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f0.f64));
	// b 0x820f98ec
	goto loc_820F98EC;
loc_820F98E8:
	// fmr f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f5.f64;
loc_820F98EC:
	// lfs f12,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f4,f3
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_820F992C:
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// fcmpu cr6,f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x820f9940
	if (!ctx.cr6.lt) goto loc_820F9940;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// b 0x820f994c
	goto loc_820F994C;
loc_820F9940:
	// fcmpu cr6,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// ble cr6,0x820f994c
	if (!ctx.cr6.gt) goto loc_820F994C;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
loc_820F994C:
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_820F9988:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_820F9994:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f9,f9
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f1,f7,f7,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f13,f4,f4,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmadds f31,f12,f30,f3
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f3.f64));
	// fcmpu cr6,f31,f5
	ctx.cr6.compare(ctx.f31.f64, ctx.f5.f64);
	// bge cr6,0x820f99ec
	if (!ctx.cr6.lt) goto loc_820F99EC;
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// b 0x820f99f8
	goto loc_820F99F8;
loc_820F99EC:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x820f99f8
	if (!ctx.cr6.gt) goto loc_820F99F8;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_820F99F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f9a10
	if (ctx.cr6.eq) goto loc_820F9A10;
	// addi r5,r30,360
	ctx.r5.s64 = ctx.r30.s64 + 360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257540
	ctx.lr = 0x820F9A10;
	sub_82257540(ctx, base);
loc_820F9A10:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820f9a6c
	if (ctx.cr6.eq) goto loc_820F9A6C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bne cr6,0x820f9a4c
	if (!ctx.cr6.eq) goto loc_820F9A4C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820f9a48
	if (!ctx.cr6.eq) goto loc_820F9A48;
	// lwz r10,284(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f9a4c
	if (ctx.cr6.eq) goto loc_820F9A4C;
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820f9a4c
	goto loc_820F9A4C;
loc_820F9A48:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
loc_820F9A4C:
	// lwz r10,288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divwu r5,r11,r10
	ctx.r5.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// bl 0x820f8bc0
	ctx.lr = 0x820F9A6C;
	sub_820F8BC0(ctx, base);
loc_820F9A6C:
	// lfs f0,316(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8233fa78
	ctx.lr = 0x820F9A80;
	__restfpr_25(ctx, base);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F9A84"))) PPC_WEAK_FUNC(sub_820F9A84);
PPC_FUNC_IMPL(__imp__sub_820F9A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F9A88"))) PPC_WEAK_FUNC(sub_820F9A88);
PPC_FUNC_IMPL(__imp__sub_820F9A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x820F9A90;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,308(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x820f9d4c
	if (ctx.cr6.gt) goto loc_820F9D4C;
	// lis r11,1489
	ctx.r11.s64 = 97583104;
	// addi r18,r28,1
	ctx.r18.s64 = ctx.r28.s64 + 1;
	// ori r10,r11,29789
	ctx.r10.u64 = ctx.r11.u64 | 29789;
	// li r21,-1
	ctx.r21.s64 = -1;
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r18,44
	ctx.r3.s64 = ctx.r18.s64 * 44;
	// ble cr6,0x820f9ad0
	if (!ctx.cr6.gt) goto loc_820F9AD0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_820F9AD0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820F9AE0;
	sub_82082030(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x820f9b64
	if (ctx.cr6.eq) goto loc_820F9B64;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// subfic r30,r3,-36
	ctx.xer.ca = ctx.r3.u32 <= 4294967260;
	ctx.r30.s64 = -36 - ctx.r3.s64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_820F9AFC:
	// lwz r11,312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r31,-40
	ctx.r9.s64 = ctx.r31.s64 + -40;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_820F9B20:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x820f9b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F9B20;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f9b40
	if (!ctx.cr6.eq) goto loc_820F9B40;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x820f9b54
	goto loc_820F9B54;
loc_820F9B40:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820debc0
	ctx.lr = 0x820F9B50;
	sub_820DEBC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820F9B54:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bne 0x820f9afc
	if (!ctx.cr0.eq) goto loc_820F9AFC;
loc_820F9B64:
	// cmplw cr6,r22,r28
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x820f9c84
	if (!ctx.cr6.lt) goto loc_820F9C84;
	// mulli r11,r22,44
	ctx.r11.s64 = ctx.r22.s64 * 44;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// subf r26,r22,r28
	ctx.r26.s64 = ctx.r28.s64 - ctx.r22.s64;
	// subfic r27,r23,-80
	ctx.xer.ca = ctx.r23.u32 <= 4294967216;
	ctx.r27.s64 = -80 - ctx.r23.s64;
	// addi r30,r11,80
	ctx.r30.s64 = ctx.r11.s64 + 80;
	// lis r28,-32197
	ctx.r28.s64 = -2110062592;
loc_820F9B84:
	// lwz r11,312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r30,-40
	ctx.r9.s64 = ctx.r30.s64 + -40;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_820F9BA8:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x820f9ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F9BA8;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f9bc8
	if (!ctx.cr6.eq) goto loc_820F9BC8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x820f9c74
	goto loc_820F9C74;
loc_820F9BC8:
	// lwz r3,-27096(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82388734
	ctx.lr = 0x820F9BD4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f9be0
	if (!ctx.cr6.eq) goto loc_820F9BE0;
	// bl 0x821b3000
	ctx.lr = 0x820F9BE0;
	sub_821B3000(ctx, base);
loc_820F9BE0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x820f9c04
	if (!ctx.cr6.lt) goto loc_820F9C04;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r24,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r24.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_820F9C04:
	// bl 0x820def78
	ctx.lr = 0x820F9C08;
	sub_820DEF78(ctx, base);
	// lwz r11,-27096(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82388734
	ctx.lr = 0x820F9C18;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f9c24
	if (!ctx.cr6.eq) goto loc_820F9C24;
	// bl 0x821b3000
	ctx.lr = 0x820F9C24;
	sub_821B3000(ctx, base);
loc_820F9C24:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f9c38
	if (ctx.cr6.eq) goto loc_820F9C38;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820F9C38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f9c4c
	if (ctx.cr6.eq) goto loc_820F9C4C;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// b 0x820f9c50
	goto loc_820F9C50;
loc_820F9C4C:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_820F9C50:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r21,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x820de708
	ctx.lr = 0x820F9C6C;
	sub_820DE708(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
loc_820F9C74:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// bne 0x820f9b84
	if (!ctx.cr0.eq) goto loc_820F9B84;
loc_820F9C84:
	// lwz r11,312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f9c9c
	if (ctx.cr6.eq) goto loc_820F9C9C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820F9C9C;
	sub_82080000(ctx, base);
loc_820F9C9C:
	// mulli r11,r22,44
	ctx.r11.s64 = ctx.r22.s64 * 44;
	// stw r23,312(r25)
	PPC_STORE_U32(ctx.r25.u32 + 312, ctx.r23.u32);
	// clrlwi r10,r19,24
	ctx.r10.u64 = ctx.r19.u32 & 0xFF;
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f9cf4
	if (ctx.cr6.eq) goto loc_820F9CF4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820f7f48
	ctx.lr = 0x820F9CBC;
	sub_820F7F48(ctx, base);
	// addi r30,r25,424
	ctx.r30.s64 = ctx.r25.s64 + 424;
	// addi r4,r20,12
	ctx.r4.s64 = ctx.r20.s64 + 12;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257540
	ctx.lr = 0x820F9CD0;
	sub_82257540(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82257540
	ctx.lr = 0x820F9CE0;
	sub_82257540(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r20,24
	ctx.r4.s64 = ctx.r20.s64 + 24;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82257540
	ctx.lr = 0x820F9CF0;
	sub_82257540(ctx, base);
	// b 0x820f9d3c
	goto loc_820F9D3C;
loc_820F9CF4:
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,16(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,20(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,4(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,8(r20)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,28(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r3,32(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_820F9D3C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,288(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 288);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820f8590
	ctx.lr = 0x820F9D4C;
	sub_820F8590(ctx, base);
loc_820F9D4C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F9D54"))) PPC_WEAK_FUNC(sub_820F9D54);
PPC_FUNC_IMPL(__imp__sub_820F9D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F9D58"))) PPC_WEAK_FUNC(sub_820F9D58);
PPC_FUNC_IMPL(__imp__sub_820F9D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820F9D60;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,308(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x820f9ed4
	if (!ctx.cr6.lt) goto loc_820F9ED4;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// ble cr6,0x820f9ed4
	if (!ctx.cr6.gt) goto loc_820F9ED4;
	// lis r11,1489
	ctx.r11.s64 = 97583104;
	// addi r24,r26,-1
	ctx.r24.s64 = ctx.r26.s64 + -1;
	// ori r10,r11,29789
	ctx.r10.u64 = ctx.r11.u64 | 29789;
	// mulli r3,r24,44
	ctx.r3.s64 = ctx.r24.s64 * 44;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f9d9c
	if (!ctx.cr6.gt) goto loc_820F9D9C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820F9D9C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820F9DAC;
	sub_82082030(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820f9e10
	if (ctx.cr6.eq) goto loc_820F9E10;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// subfic r30,r3,-36
	ctx.xer.ca = ctx.r3.u32 <= 4294967260;
	ctx.r30.s64 = -36 - ctx.r3.s64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_820F9DC4:
	// lwz r9,312(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r31,-40
	ctx.r8.s64 = ctx.r31.s64 + -40;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_820F9DE8:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x820f9de8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F9DE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x820deb48
	ctx.lr = 0x820F9E00;
	sub_820DEB48(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bne 0x820f9dc4
	if (!ctx.cr0.eq) goto loc_820F9DC4;
loc_820F9E10:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x820f9e9c
	if (!ctx.cr6.lt) goto loc_820F9E9C;
	// mulli r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 * 44;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// subfic r30,r25,8
	ctx.xer.ca = ctx.r25.u32 <= 8;
	ctx.r30.s64 = 8 - ctx.r25.s64;
	// addi r31,r10,-8
	ctx.r31.s64 = ctx.r10.s64 + -8;
	// subf r29,r11,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r11.s64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_820F9E34:
	// lwz r9,312(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r31,-40
	ctx.r8.s64 = ctx.r31.s64 + -40;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_820F9E58:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x820f9e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F9E58;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f9e78
	if (!ctx.cr6.eq) goto loc_820F9E78;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x820f9e8c
	goto loc_820F9E8C;
loc_820F9E78:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820debc0
	ctx.lr = 0x820F9E88;
	sub_820DEBC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820F9E8C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bne 0x820f9e34
	if (!ctx.cr0.eq) goto loc_820F9E34;
loc_820F9E9C:
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f9eb4
	if (ctx.cr6.eq) goto loc_820F9EB4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820F9EB4;
	sub_82080000(ctx, base);
loc_820F9EB4:
	// stw r25,312(r28)
	PPC_STORE_U32(ctx.r28.u32 + 312, ctx.r25.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,288(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// bl 0x820f8590
	ctx.lr = 0x820F9EC8;
	sub_820F8590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_820F9ED4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F9EE0"))) PPC_WEAK_FUNC(sub_820F9EE0);
PPC_FUNC_IMPL(__imp__sub_820F9EE0) {
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
	// beq cr6,0x820f9fdc
	if (ctx.cr6.eq) goto loc_820F9FDC;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,29380
	ctx.r31.s64 = ctx.r11.s64 + 29380;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820F9F14;
	sub_823052D8(ctx, base);
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
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
	// bne cr6,0x820f9fd0
	if (!ctx.cr6.eq) goto loc_820F9FD0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f9fd0
	if (ctx.cr6.eq) goto loc_820F9FD0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820f9fd0
	if (!ctx.cr6.lt) goto loc_820F9FD0;
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
	// beq cr6,0x820f9fa8
	if (ctx.cr6.eq) goto loc_820F9FA8;
loc_820F9F80:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f9fa0
	if (ctx.cr6.eq) goto loc_820F9FA0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820f9f80
	if (!ctx.cr6.eq) goto loc_820F9F80;
	// b 0x820f9fa8
	goto loc_820F9FA8;
loc_820F9FA0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820F9FA8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f9fc0
	if (!ctx.cr6.eq) goto loc_820F9FC0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_820F9FC0:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820F9FCC;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_820F9FD0:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820F9FDC;
	sub_823051A8(ctx, base);
loc_820F9FDC:
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

__attribute__((alias("__imp__sub_820F9FF4"))) PPC_WEAK_FUNC(sub_820F9FF4);
PPC_FUNC_IMPL(__imp__sub_820F9FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F9FF8"))) PPC_WEAK_FUNC(sub_820F9FF8);
PPC_FUNC_IMPL(__imp__sub_820F9FF8) {
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,29380
	ctx.r31.s64 = ctx.r11.s64 + 29380;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820FA020;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fa044
	if (ctx.cr6.eq) goto loc_820FA044;
loc_820FA02C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fa074
	if (!ctx.cr6.eq) goto loc_820FA074;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fa02c
	if (!ctx.cr6.eq) goto loc_820FA02C;
loc_820FA044:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fa09c
	if (!ctx.cr6.eq) goto loc_820FA09C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820fa0f8
	ctx.lr = 0x820FA058;
	sub_820FA0F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fa09c
	if (!ctx.cr6.eq) goto loc_820FA09C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820FA06C;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820fa0e0
	goto loc_820FA0E0;
loc_820FA074:
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
	// b 0x820fa0d0
	goto loc_820FA0D0;
loc_820FA09C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,492
	ctx.r10.s64 = ctx.r11.s64 + 492;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,492(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
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
loc_820FA0D0:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820FA0DC;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820FA0E0:
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

__attribute__((alias("__imp__sub_820FA0F8"))) PPC_WEAK_FUNC(sub_820FA0F8);
PPC_FUNC_IMPL(__imp__sub_820FA0F8) {
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
	// mulli r11,r3,496
	ctx.r11.s64 = ctx.r3.s64 * 496;
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
	ctx.lr = 0x820FA124;
	sub_82082030(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r11,r11,29380
	ctx.r11.s64 = ctx.r11.s64 + 29380;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fa140
	if (ctx.cr6.eq) goto loc_820FA140;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x820fa144
	goto loc_820FA144;
loc_820FA140:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_820FA144:
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
	// beq cr6,0x820fa184
	if (ctx.cr6.eq) goto loc_820FA184;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_820FA17C:
	// stwu r3,496(r10)
	ea = 496 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820fa17c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FA17C;
loc_820FA184:
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

__attribute__((alias("__imp__sub_820FA1A4"))) PPC_WEAK_FUNC(sub_820FA1A4);
PPC_FUNC_IMPL(__imp__sub_820FA1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA1A8"))) PPC_WEAK_FUNC(sub_820FA1A8);
PPC_FUNC_IMPL(__imp__sub_820FA1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f1,f12,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f3,f11,f11,f1
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmadds f2,f5,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fsqrts f11,f3
	ctx.f11.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmadds f0,f9,f9,f2
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmuls f6,f1,f4
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f4,f12,f1
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f3,f1,f10
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fnmsubs f12,f7,f7,f0
	ctx.f12.f64 = double(float(-(ctx.f7.f64 * ctx.f7.f64 - ctx.f0.f64)));
	// fmuls f2,f9,f6
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// fmadds f1,f5,f4,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f0,f8,f3,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f1.f64));
	// ble cr6,0x820fa248
	if (!ctx.cr6.gt) goto loc_820FA248;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820fa248
	if (!ctx.cr6.gt) goto loc_820FA248;
loc_820FA240:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820FA248:
	// fmsubs f12,f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820fa240
	if (ctx.cr6.lt) goto loc_820FA240;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x820fa240
	if (ctx.cr6.gt) goto loc_820FA240;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FA280"))) PPC_WEAK_FUNC(sub_820FA280);
PPC_FUNC_IMPL(__imp__sub_820FA280) {
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
	// beq cr6,0x820fa37c
	if (ctx.cr6.eq) goto loc_820FA37C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,29436
	ctx.r31.s64 = ctx.r11.s64 + 29436;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820FA2B4;
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
	// bne cr6,0x820fa370
	if (!ctx.cr6.eq) goto loc_820FA370;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820fa370
	if (ctx.cr6.eq) goto loc_820FA370;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820fa370
	if (!ctx.cr6.lt) goto loc_820FA370;
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
	// beq cr6,0x820fa348
	if (ctx.cr6.eq) goto loc_820FA348;
loc_820FA320:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820fa340
	if (ctx.cr6.eq) goto loc_820FA340;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820fa320
	if (!ctx.cr6.eq) goto loc_820FA320;
	// b 0x820fa348
	goto loc_820FA348;
loc_820FA340:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820FA348:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820fa360
	if (!ctx.cr6.eq) goto loc_820FA360;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_820FA360:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FA36C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_820FA370:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820FA37C;
	sub_823051A8(ctx, base);
loc_820FA37C:
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

__attribute__((alias("__imp__sub_820FA394"))) PPC_WEAK_FUNC(sub_820FA394);
PPC_FUNC_IMPL(__imp__sub_820FA394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA398"))) PPC_WEAK_FUNC(sub_820FA398);
PPC_FUNC_IMPL(__imp__sub_820FA398) {
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,29436
	ctx.r31.s64 = ctx.r11.s64 + 29436;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820FA3C0;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fa3e4
	if (ctx.cr6.eq) goto loc_820FA3E4;
loc_820FA3CC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fa414
	if (!ctx.cr6.eq) goto loc_820FA414;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fa3cc
	if (!ctx.cr6.eq) goto loc_820FA3CC;
loc_820FA3E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fa43c
	if (!ctx.cr6.eq) goto loc_820FA43C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820fa498
	ctx.lr = 0x820FA3F8;
	sub_820FA498(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fa43c
	if (!ctx.cr6.eq) goto loc_820FA43C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820FA40C;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820fa480
	goto loc_820FA480;
loc_820FA414:
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
	// b 0x820fa470
	goto loc_820FA470;
loc_820FA43C:
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
loc_820FA470:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820FA47C;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820FA480:
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

__attribute__((alias("__imp__sub_820FA498"))) PPC_WEAK_FUNC(sub_820FA498);
PPC_FUNC_IMPL(__imp__sub_820FA498) {
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
	ctx.lr = 0x820FA4C4;
	sub_82082030(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r11,r11,29436
	ctx.r11.s64 = ctx.r11.s64 + 29436;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fa4e0
	if (ctx.cr6.eq) goto loc_820FA4E0;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x820fa4e4
	goto loc_820FA4E4;
loc_820FA4E0:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_820FA4E4:
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
	// beq cr6,0x820fa524
	if (ctx.cr6.eq) goto loc_820FA524;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_820FA51C:
	// stwu r3,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820fa51c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FA51C;
loc_820FA524:
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

__attribute__((alias("__imp__sub_820FA544"))) PPC_WEAK_FUNC(sub_820FA544);
PPC_FUNC_IMPL(__imp__sub_820FA544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA548"))) PPC_WEAK_FUNC(sub_820FA548);
PPC_FUNC_IMPL(__imp__sub_820FA548) {
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
	ctx.lr = 0x820FA560;
	sub_82081C00(ctx, base);
	// bl 0x820fb7b0
	ctx.lr = 0x820FA564;
	sub_820FB7B0(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820FA574;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820fa588
	if (!ctx.cr6.eq) goto loc_820FA588;
	// bl 0x821b3000
	ctx.lr = 0x820FA584;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820FA588:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fa5a0
	if (ctx.cr6.eq) goto loc_820FA5A0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_820FA5A0:
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

__attribute__((alias("__imp__sub_820FA5B4"))) PPC_WEAK_FUNC(sub_820FA5B4);
PPC_FUNC_IMPL(__imp__sub_820FA5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA5B8"))) PPC_WEAK_FUNC(sub_820FA5B8);
PPC_FUNC_IMPL(__imp__sub_820FA5B8) {
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
	// li r5,262
	ctx.r5.s64 = 262;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820ef6d0
	ctx.lr = 0x820FA5D4;
	sub_820EF6D0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-30920
	ctx.r8.s64 = ctx.r10.s64 + -30920;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// lfs f0,92(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stw r7,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r7.u32);
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820FA66C"))) PPC_WEAK_FUNC(sub_820FA66C);
PPC_FUNC_IMPL(__imp__sub_820FA66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA670"))) PPC_WEAK_FUNC(sub_820FA670);
PPC_FUNC_IMPL(__imp__sub_820FA670) {
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
	// bl 0x820fac70
	ctx.lr = 0x820FA690;
	sub_820FAC70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fa6a8
	if (ctx.cr6.eq) goto loc_820FA6A8;
	// bl 0x820fb698
	ctx.lr = 0x820FA6A4;
	sub_820FB698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820FA6A8:
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

__attribute__((alias("__imp__sub_820FA6C0"))) PPC_WEAK_FUNC(sub_820FA6C0);
PPC_FUNC_IMPL(__imp__sub_820FA6C0) {
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
	// bl 0x820f12e0
	ctx.lr = 0x820FA6D8;
	sub_820F12E0(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fa71c
	if (ctx.cr6.eq) goto loc_820FA71C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r11,r11,2136
	ctx.r11.s64 = ctx.r11.s64 + 2136;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FA704:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820fa714
	if (!ctx.cr6.eq) goto loc_820FA714;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_820FA714:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820fa704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FA704;
loc_820FA71C:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fa77c
	if (ctx.cr6.eq) goto loc_820FA77C;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r7,r10,15352
	ctx.r7.s64 = ctx.r10.s64 + 15352;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r6,r7,4
	ctx.r6.s64 = ctx.r7.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820FA748:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820fa774
	if (!ctx.cr6.eq) goto loc_820FA774;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// beq cr6,0x820fa774
	if (ctx.cr6.eq) goto loc_820FA774;
	// lwz r11,272(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 272);
	// mulli r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// stw r8,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r8.u32);
loc_820FA774:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x820fa748
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FA748;
loc_820FA77C:
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

__attribute__((alias("__imp__sub_820FA790"))) PPC_WEAK_FUNC(sub_820FA790);
PPC_FUNC_IMPL(__imp__sub_820FA790) {
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
	// bl 0x820f1228
	ctx.lr = 0x820FA7A8;
	sub_820F1228(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fa7fc
	if (ctx.cr6.eq) goto loc_820FA7FC;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,20000
	ctx.r9.s64 = ctx.r10.s64 + 20000;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// addi r10,r10,2136
	ctx.r10.s64 = ctx.r10.s64 + 2136;
loc_820FA7CC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fa7ec
	if (ctx.cr6.eq) goto loc_820FA7EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x820fa7cc
	if (ctx.cr6.lt) goto loc_820FA7CC;
	// b 0x820fa7fc
	goto loc_820FA7FC;
loc_820FA7EC:
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,2136
	ctx.r10.s64 = ctx.r10.s64 + 2136;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
loc_820FA7FC:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fa864
	if (ctx.cr6.eq) goto loc_820FA864;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,15352
	ctx.r10.s64 = ctx.r10.s64 + 15352;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_820FA81C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fa84c
	if (ctx.cr6.eq) goto loc_820FA84C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820fa81c
	if (ctx.cr6.lt) goto loc_820FA81C;
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
loc_820FA84C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_820FA864:
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

__attribute__((alias("__imp__sub_820FA878"))) PPC_WEAK_FUNC(sub_820FA878);
PPC_FUNC_IMPL(__imp__sub_820FA878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820FA880;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820fa8c0
	if (!ctx.cr6.eq) goto loc_820FA8C0;
	// bl 0x820fa548
	ctx.lr = 0x820FA8A4;
	sub_820FA548(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fa8bc
	if (ctx.cr6.eq) goto loc_820FA8BC;
	// lwz r4,268(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// bl 0x820fa5b8
	ctx.lr = 0x820FA8B4;
	sub_820FA5B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820fa8c0
	goto loc_820FA8C0;
loc_820FA8BC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820FA8C0:
	// lfs f0,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lwz r10,292(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fa8e8
	if (ctx.cr6.eq) goto loc_820FA8E8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FA8E8;
	sub_82080000(ctx, base);
loc_820FA8E8:
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r9,r10,21845
	ctx.r9.u64 = ctx.r10.u64 | 21845;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x820fa910
	if (ctx.cr6.gt) goto loc_820FA910;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820fa914
	goto loc_820FA914;
loc_820FA910:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820FA914:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820FA924;
	sub_82082030(ctx, base);
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// lwz r4,288(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233e4e0
	ctx.lr = 0x820FA940;
	sub_8233E4E0(ctx, base);
	// lwz r9,296(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r10,r31,296
	ctx.r10.s64 = ctx.r31.s64 + 296;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
	// lwz r8,300(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// stw r8,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r8.u32);
	// lwz r7,304(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// stw r7,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r7.u32);
	// lwz r6,308(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// stw r6,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r6.u32);
	// lwz r5,312(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// stw r5,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r5.u32);
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// lwz r9,324(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// stw r9,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r9.u32);
	// lwz r8,328(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// stw r8,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r8.u32);
	// bl 0x820faea0
	ctx.lr = 0x820FA998;
	sub_820FAEA0(ctx, base);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,340(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stw r29,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r29.u32);
	// lwz r9,348(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// lfs f0,352(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// bl 0x820f0488
	ctx.lr = 0x820FA9D4;
	sub_820F0488(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FA9DC"))) PPC_WEAK_FUNC(sub_820FA9DC);
PPC_FUNC_IMPL(__imp__sub_820FA9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA9E0"))) PPC_WEAK_FUNC(sub_820FA9E0);
PPC_FUNC_IMPL(__imp__sub_820FA9E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,312
	ctx.r30.s64 = ctx.r3.s64 + 312;
	// addi r5,r3,32
	ctx.r5.s64 = ctx.r3.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// bl 0x82257540
	ctx.lr = 0x820FAA0C;
	sub_82257540(ctx, base);
	// lfs f0,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
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

__attribute__((alias("__imp__sub_820FAA30"))) PPC_WEAK_FUNC(sub_820FAA30);
PPC_FUNC_IMPL(__imp__sub_820FAA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820FAA38;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82257cb8
	ctx.lr = 0x820FAA64;
	sub_82257CB8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82257540
	ctx.lr = 0x820FAA74;
	sub_82257540(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r11,31376
	ctx.r7.s64 = ctx.r11.s64 + 31376;
	// lfs f0,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// bge cr6,0x820faa98
	if (!ctx.cr6.lt) goto loc_820FAA98;
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// b 0x820faaac
	goto loc_820FAAAC;
loc_820FAA98:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820faaa8
	if (!ctx.cr6.gt) goto loc_820FAAA8;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// b 0x820faaac
	goto loc_820FAAAC;
loc_820FAAA8:
	// fmr f2,f13
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f13.f64;
loc_820FAAAC:
	// fcmpu cr6,f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f2.f64);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x820faabc
	if (ctx.cr6.eq) goto loc_820FAABC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_820FAABC:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lfs f8,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// lfs f7,92(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fac04
	if (ctx.cr6.eq) goto loc_820FAC04;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r6,288(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lfs f3,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_820FAB00:
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x820fab20
	if (!ctx.cr6.lt) goto loc_820FAB20;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bge cr6,0x820fab34
	if (!ctx.cr6.lt) goto loc_820FAB34;
loc_820FAB20:
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bge cr6,0x820fab68
	if (!ctx.cr6.lt) goto loc_820FAB68;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x820fab68
	if (ctx.cr6.lt) goto loc_820FAB68;
loc_820FAB34:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fdivs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fmadds f11,f12,f0,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// bge cr6,0x820fab68
	if (!ctx.cr6.lt) goto loc_820FAB68;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r28,r7,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_820FAB68:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f8,f12
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f31,f0,f0
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f1,f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f31,f13,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fdivs f10,f1,f31
	ctx.f10.f64 = double(float(ctx.f1.f64 / ctx.f31.f64));
	// fcmpu cr6,f10,f6
	ctx.cr6.compare(ctx.f10.f64, ctx.f6.f64);
	// bge cr6,0x820faba8
	if (!ctx.cr6.lt) goto loc_820FABA8;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// b 0x820fabb4
	goto loc_820FABB4;
loc_820FABA8:
	// fcmpu cr6,f10,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f3.f64);
	// ble cr6,0x820fabb4
	if (!ctx.cr6.gt) goto loc_820FABB4;
	// fmr f10,f3
	ctx.f10.f64 = ctx.f3.f64;
loc_820FABB4:
	// fmuls f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f11,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// ble cr6,0x820fabf8
	if (!ctx.cr6.gt) goto loc_820FABF8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfs f4,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
loc_820FABF8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// bdnz 0x820fab00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FAB00;
loc_820FAC04:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fac48
	if (ctx.cr6.eq) goto loc_820FAC48;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fac40
	if (ctx.cr6.eq) goto loc_820FAC40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820FAC40:
	// fmr f5,f8
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
loc_820FAC48:
	// stfs f5,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82257540
	ctx.lr = 0x820FAC64;
	sub_82257540(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FAC70"))) PPC_WEAK_FUNC(sub_820FAC70);
PPC_FUNC_IMPL(__imp__sub_820FAC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820FAC78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-30920
	ctx.r10.s64 = ctx.r11.s64 + -30920;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820ef8a0
	ctx.lr = 0x820FAC90;
	sub_820EF8A0(ctx, base);
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820faca8
	if (ctx.cr6.eq) goto loc_820FACA8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FACA8;
	sub_82080000(ctx, base);
loc_820FACA8:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fad34
	if (ctx.cr6.eq) goto loc_820FAD34;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820fad00
	if (!ctx.cr6.gt) goto loc_820FAD00;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820FACC8:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820face8
	if (ctx.cr6.eq) goto loc_820FACE8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FACE8;
	sub_82080000(ctx, base);
loc_820FACE8:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820facc8
	if (ctx.cr6.lt) goto loc_820FACC8;
loc_820FAD00:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fad1c
	if (ctx.cr6.eq) goto loc_820FAD1C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FAD1C;
	sub_82080000(ctx, base);
loc_820FAD1C:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fad34
	if (ctx.cr6.eq) goto loc_820FAD34;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FAD34;
	sub_82080000(ctx, base);
loc_820FAD34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef958
	ctx.lr = 0x820FAD3C;
	sub_820EF958(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FAD44"))) PPC_WEAK_FUNC(sub_820FAD44);
PPC_FUNC_IMPL(__imp__sub_820FAD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FAD48"))) PPC_WEAK_FUNC(sub_820FAD48);
PPC_FUNC_IMPL(__imp__sub_820FAD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820FAD50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// lfs f0,84(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// lwz r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r10,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r10.u32);
	// lwz r4,92(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x820fad90
	if (!ctx.cr6.eq) goto loc_820FAD90;
	// stw r29,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r29.u32);
	// b 0x820fad9c
	goto loc_820FAD9C;
loc_820FAD90:
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82176838
	ctx.lr = 0x820FAD98;
	sub_82176838(ctx, base);
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
loc_820FAD9C:
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x820fadb0
	if (!ctx.cr6.eq) goto loc_820FADB0;
	// stw r29,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r29.u32);
	// b 0x820fadbc
	goto loc_820FADBC;
loc_820FADB0:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82176838
	ctx.lr = 0x820FADB8;
	sub_82176838(ctx, base);
	// stw r3,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
loc_820FADBC:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820fae0c
	if (ctx.cr6.eq) goto loc_820FAE0C;
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// bl 0x82087078
	ctx.lr = 0x820FADD0;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fae0c
	if (ctx.cr6.eq) goto loc_820FAE0C;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820fae08
	if (!ctx.cr6.gt) goto loc_820FAE08;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fae08
	if (ctx.cr6.eq) goto loc_820FAE08;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fae08
	if (ctx.cr6.eq) goto loc_820FAE08;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
loc_820FAE08:
	// bl 0x82172d60
	ctx.lr = 0x820FAE0C;
	sub_82172D60(ctx, base);
loc_820FAE0C:
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// beq cr6,0x820fae2c
	if (ctx.cr6.eq) goto loc_820FAE2C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FAE2C;
	sub_82080000(ctx, base);
loc_820FAE2C:
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// ori r9,r10,21845
	ctx.r9.u64 = ctx.r10.u64 | 21845;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x820fae50
	if (ctx.cr6.gt) goto loc_820FAE50;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820fae54
	goto loc_820FAE54;
loc_820FAE50:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820FAE54:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820FAE64;
	sub_82082030(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8208cfb0
	ctx.lr = 0x820FAE88;
	sub_8208CFB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb1d0
	ctx.lr = 0x820FAE90;
	sub_820FB1D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FAE9C"))) PPC_WEAK_FUNC(sub_820FAE9C);
PPC_FUNC_IMPL(__imp__sub_820FAE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FAEA0"))) PPC_WEAK_FUNC(sub_820FAEA0);
PPC_FUNC_IMPL(__imp__sub_820FAEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820FAEA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 332);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820faf44
	if (ctx.cr6.eq) goto loc_820FAF44;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820faf10
	if (!ctx.cr6.gt) goto loc_820FAF10;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_820FAED8:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820faef8
	if (ctx.cr6.eq) goto loc_820FAEF8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FAEF8;
	sub_82080000(ctx, base);
loc_820FAEF8:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820faed8
	if (ctx.cr6.lt) goto loc_820FAED8;
loc_820FAF10:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820faf2c
	if (ctx.cr6.eq) goto loc_820FAF2C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FAF2C;
	sub_82080000(ctx, base);
loc_820FAF2C:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820faf44
	if (ctx.cr6.eq) goto loc_820FAF44;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FAF44;
	sub_82080000(ctx, base);
loc_820FAF44:
	// stw r27,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r27.u32);
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb050
	if (ctx.cr6.eq) goto loc_820FB050;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82082030
	ctx.lr = 0x820FAF68;
	sub_82082030(ctx, base);
	// stw r3,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r3.u32);
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
loc_820FAF88:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820faf88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FAF88;
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r9,332(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r29.u32);
	// ble cr6,0x820fafbc
	if (!ctx.cr6.gt) goto loc_820FAFBC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820FAFBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820FAFCC;
	sub_82082030(ctx, base);
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// beq cr6,0x820fb050
	if (ctx.cr6.eq) goto loc_820FB050;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_820FAFE0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82082030
	ctx.lr = 0x820FAFF4;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fb00c
	if (ctx.cr6.eq) goto loc_820FB00C;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// b 0x820fb010
	goto loc_820FB010;
loc_820FB00C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_820FB010:
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stwx r11,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r8,332(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r6,332(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwzx r4,r5,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r3,r7,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// bne 0x820fafe0
	if (!ctx.cr0.eq) goto loc_820FAFE0;
loc_820FB050:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FB058"))) PPC_WEAK_FUNC(sub_820FB058);
PPC_FUNC_IMPL(__imp__sub_820FB058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820FB060;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb088
	if (ctx.cr6.eq) goto loc_820FB088;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FB088;
	sub_82080000(ctx, base);
loc_820FB088:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82082030
	ctx.lr = 0x820FB09C;
	sub_82082030(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r3,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r3.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// bl 0x82161240
	ctx.lr = 0x820FB0CC;
	sub_82161240(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r26,332(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// bl 0x8208d070
	ctx.lr = 0x820FB0D8;
	sub_8208D070(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8208cfb0
	ctx.lr = 0x820FB0F0;
	sub_8208CFB0(ctx, base);
	// stb r28,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r28.u8);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// sth r31,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r31.u16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r31,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r31.u16);
	// bl 0x82161240
	ctx.lr = 0x820FB114;
	sub_82161240(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208d070
	ctx.lr = 0x820FB11C;
	sub_8208D070(ctx, base);
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820fb140
	if (!ctx.cr6.gt) goto loc_820FB140;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820FB140:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820FB150;
	sub_82082030(ctx, base);
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// beq cr6,0x820fb1c4
	if (ctx.cr6.eq) goto loc_820FB1C4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_820FB164:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82082030
	ctx.lr = 0x820FB178;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fb190
	if (ctx.cr6.eq) goto loc_820FB190;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// b 0x820fb194
	goto loc_820FB194;
loc_820FB190:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_820FB194:
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stwx r11,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r11.u32);
	// lwz r8,332(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lwzx r4,r7,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// bl 0x8208cfb0
	ctx.lr = 0x820FB1B8;
	sub_8208CFB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x820fb164
	if (!ctx.cr0.eq) goto loc_820FB164;
loc_820FB1C4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FB1CC"))) PPC_WEAK_FUNC(sub_820FB1CC);
PPC_FUNC_IMPL(__imp__sub_820FB1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB1D0"))) PPC_WEAK_FUNC(sub_820FB1D0);
PPC_FUNC_IMPL(__imp__sub_820FB1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r3,296
	ctx.r11.s64 = ctx.r3.s64 + 296;
	// addi r7,r10,31376
	ctx.r7.s64 = ctx.r10.s64 + 31376;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,296(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// stfs f0,304(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x820fb24c
	if (!ctx.cr6.gt) goto loc_820FB24C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_820FB200:
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820fb200
	if (ctx.cr6.lt) goto loc_820FB200;
loc_820FB24C:
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lfs f13,36(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fdivs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f1,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f11,f4,f1
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r8,292(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// stfs f0,308(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x820fb320
	if (!ctx.cr6.gt) goto loc_820FB320;
	// lwz r8,288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// li r10,0
	ctx.r10.s64 = 0;
loc_820FB2C8:
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmuls f4,f7,f7
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f3,f5,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmadds f0,f10,f10,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x820fb30c
	if (!ctx.cr6.gt) goto loc_820FB30C;
	// stfs f0,308(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
loc_820FB30C:
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fb2c8
	if (ctx.cr6.lt) goto loc_820FB2C8;
loc_820FB320:
	// lfs f0,308(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f13,308(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB330"))) PPC_WEAK_FUNC(sub_820FB330);
PPC_FUNC_IMPL(__imp__sub_820FB330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820FB338;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r3,312
	ctx.r3.s64 = ctx.r3.s64 + 312;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,296
	ctx.r4.s64 = ctx.r29.s64 + 296;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82257540
	ctx.lr = 0x820FB35C;
	sub_82257540(ctx, base);
	// lfs f0,308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 324, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,316(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f12,320(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f11,312(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f8,f8
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f3,f0,f0
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f0,f4,f4,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// blt cr6,0x820fb3c4
	if (ctx.cr6.lt) goto loc_820FB3C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FB3C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb68c
	if (ctx.cr6.eq) goto loc_820FB68C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82257cb8
	ctx.lr = 0x820FB3E0;
	sub_82257CB8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82257540
	ctx.lr = 0x820FB3F0;
	sub_82257540(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820fb68c
	if (ctx.cr6.lt) goto loc_820FB68C;
	// lfs f0,284(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820fb68c
	if (ctx.cr6.gt) goto loc_820FB68C;
	// lwz r5,292(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x820fb5e0
	if (ctx.cr6.lt) goto loc_820FB5E0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,288(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// addi r4,r5,-3
	ctx.r4.s64 = ctx.r5.s64 + -3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_820FB448:
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820fb468
	if (!ctx.cr6.lt) goto loc_820FB468;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820fb47c
	if (!ctx.cr6.lt) goto loc_820FB47C;
loc_820FB468:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820fb4ac
	if (!ctx.cr6.lt) goto loc_820FB4AC;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x820fb4ac
	if (ctx.cr6.lt) goto loc_820FB4AC;
loc_820FB47C:
	// fsubs f10,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fdivs f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// fmadds f4,f5,f6,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fcmpu cr6,f4,f11
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// bge cr6,0x820fb4ac
	if (!ctx.cr6.lt) goto loc_820FB4AC;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r28,r9,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_820FB4AC:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820fb4c4
	if (!ctx.cr6.lt) goto loc_820FB4C4;
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820fb4d8
	if (!ctx.cr6.lt) goto loc_820FB4D8;
loc_820FB4C4:
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820fb508
	if (!ctx.cr6.lt) goto loc_820FB508;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x820fb508
	if (ctx.cr6.lt) goto loc_820FB508;
loc_820FB4D8:
	// fsubs f10,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fdivs f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// fmadds f4,f5,f6,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fcmpu cr6,f4,f11
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// bge cr6,0x820fb508
	if (!ctx.cr6.lt) goto loc_820FB508;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r28,r9,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_820FB508:
	// addi r10,r8,36
	ctx.r10.s64 = ctx.r8.s64 + 36;
	// lfs f12,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bge cr6,0x820fb528
	if (!ctx.cr6.lt) goto loc_820FB528;
	// lfs f13,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820fb53c
	if (!ctx.cr6.lt) goto loc_820FB53C;
loc_820FB528:
	// lfs f13,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820fb56c
	if (!ctx.cr6.lt) goto loc_820FB56C;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x820fb56c
	if (ctx.cr6.lt) goto loc_820FB56C;
loc_820FB53C:
	// fsubs f10,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f7,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fdivs f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// fmadds f4,f5,f6,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fcmpu cr6,f4,f11
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// bge cr6,0x820fb56c
	if (!ctx.cr6.lt) goto loc_820FB56C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r3,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
loc_820FB56C:
	// lfs f12,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820fb588
	if (!ctx.cr6.lt) goto loc_820FB588;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820fb59c
	if (!ctx.cr6.lt) goto loc_820FB59C;
loc_820FB588:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820fb5cc
	if (!ctx.cr6.lt) goto loc_820FB5CC;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x820fb5cc
	if (ctx.cr6.lt) goto loc_820FB5CC;
loc_820FB59C:
	// fsubs f10,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fdivs f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// fmadds f4,f5,f6,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fcmpu cr6,f4,f11
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// bge cr6,0x820fb5cc
	if (!ctx.cr6.lt) goto loc_820FB5CC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r9,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_820FB5CC:
	// addi r11,r7,3
	ctx.r11.s64 = ctx.r7.s64 + 3;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x820fb448
	if (ctx.cr6.lt) goto loc_820FB448;
loc_820FB5E0:
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x820fb680
	if (!ctx.cr6.lt) goto loc_820FB680;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,288(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r7,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r7.s64;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_820FB60C:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820fb62c
	if (!ctx.cr6.lt) goto loc_820FB62C;
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820fb640
	if (!ctx.cr6.lt) goto loc_820FB640;
loc_820FB62C:
	// lfs f13,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820fb674
	if (!ctx.cr6.lt) goto loc_820FB674;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x820fb674
	if (ctx.cr6.lt) goto loc_820FB674;
loc_820FB640:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fdivs f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// fmadds f4,f5,f6,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fcmpu cr6,f4,f11
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// bge cr6,0x820fb674
	if (!ctx.cr6.lt) goto loc_820FB674;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r9,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_820FB674:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x820fb60c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FB60C;
loc_820FB680:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820FB68C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FB698"))) PPC_WEAK_FUNC(sub_820FB698);
PPC_FUNC_IMPL(__imp__sub_820FB698) {
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
	// beq cr6,0x820fb794
	if (ctx.cr6.eq) goto loc_820FB794;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,-3244
	ctx.r31.s64 = ctx.r11.s64 + -3244;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820FB6CC;
	sub_823052D8(ctx, base);
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
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
	// bne cr6,0x820fb788
	if (!ctx.cr6.eq) goto loc_820FB788;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820fb788
	if (ctx.cr6.eq) goto loc_820FB788;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820fb788
	if (!ctx.cr6.lt) goto loc_820FB788;
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
	// beq cr6,0x820fb760
	if (ctx.cr6.eq) goto loc_820FB760;
loc_820FB738:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820fb758
	if (ctx.cr6.eq) goto loc_820FB758;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820fb738
	if (!ctx.cr6.eq) goto loc_820FB738;
	// b 0x820fb760
	goto loc_820FB760;
loc_820FB758:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820FB760:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820fb778
	if (!ctx.cr6.eq) goto loc_820FB778;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_820FB778:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FB784;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_820FB788:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820FB794;
	sub_823051A8(ctx, base);
loc_820FB794:
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

__attribute__((alias("__imp__sub_820FB7AC"))) PPC_WEAK_FUNC(sub_820FB7AC);
PPC_FUNC_IMPL(__imp__sub_820FB7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB7B0"))) PPC_WEAK_FUNC(sub_820FB7B0);
PPC_FUNC_IMPL(__imp__sub_820FB7B0) {
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
	// addi r31,r11,-3244
	ctx.r31.s64 = ctx.r11.s64 + -3244;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820FB7D8;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb7fc
	if (ctx.cr6.eq) goto loc_820FB7FC;
loc_820FB7E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fb82c
	if (!ctx.cr6.eq) goto loc_820FB82C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fb7e4
	if (!ctx.cr6.eq) goto loc_820FB7E4;
loc_820FB7FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fb854
	if (!ctx.cr6.eq) goto loc_820FB854;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820fb8b0
	ctx.lr = 0x820FB810;
	sub_820FB8B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fb854
	if (!ctx.cr6.eq) goto loc_820FB854;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820FB824;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820fb898
	goto loc_820FB898;
loc_820FB82C:
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
	// b 0x820fb888
	goto loc_820FB888;
loc_820FB854:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,356
	ctx.r10.s64 = ctx.r11.s64 + 356;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,356(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
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
loc_820FB888:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820FB894;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820FB898:
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

__attribute__((alias("__imp__sub_820FB8B0"))) PPC_WEAK_FUNC(sub_820FB8B0);
PPC_FUNC_IMPL(__imp__sub_820FB8B0) {
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
	// mulli r11,r3,368
	ctx.r11.s64 = ctx.r3.s64 * 368;
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
	ctx.lr = 0x820FB8DC;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,-3244
	ctx.r11.s64 = ctx.r11.s64 + -3244;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fb8f8
	if (ctx.cr6.eq) goto loc_820FB8F8;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x820fb8fc
	goto loc_820FB8FC;
loc_820FB8F8:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_820FB8FC:
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
	// beq cr6,0x820fb93c
	if (ctx.cr6.eq) goto loc_820FB93C;
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_820FB934:
	// stwu r3,368(r10)
	ea = 368 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820fb934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FB934;
loc_820FB93C:
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

__attribute__((alias("__imp__sub_820FB95C"))) PPC_WEAK_FUNC(sub_820FB95C);
PPC_FUNC_IMPL(__imp__sub_820FB95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB960"))) PPC_WEAK_FUNC(sub_820FB960);
PPC_FUNC_IMPL(__imp__sub_820FB960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// addi r8,r10,-30888
	ctx.r8.s64 = ctx.r10.s64 + -30888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB9E0"))) PPC_WEAK_FUNC(sub_820FB9E0);
PPC_FUNC_IMPL(__imp__sub_820FB9E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8208cfb0
	ctx.lr = 0x820FBA04;
	sub_8208CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fba28
	ctx.lr = 0x820FBA10;
	sub_820FBA28(ctx, base);
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

__attribute__((alias("__imp__sub_820FBA24"))) PPC_WEAK_FUNC(sub_820FBA24);
PPC_FUNC_IMPL(__imp__sub_820FBA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBA28"))) PPC_WEAK_FUNC(sub_820FBA28);
PPC_FUNC_IMPL(__imp__sub_820FBA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820fba3c
	if (ctx.cr6.lt) goto loc_820FBA3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x820fba40
	if (ctx.cr6.eq) goto loc_820FBA40;
loc_820FBA3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FBA40:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f11,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f5.f64));
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// lfs f0,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// fmuls f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f13,f10,f1
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmuls f12,f9,f1
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lhz r8,30(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 30);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f10,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,52(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f9,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f8,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,60(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f7,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,64(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f6,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,68(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f5,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,72(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f3,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,76(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f2,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,80(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f5,84(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lwz r7,72(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// lhz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 28);
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBB28"))) PPC_WEAK_FUNC(sub_820FBB28);
PPC_FUNC_IMPL(__imp__sub_820FBB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r6,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r6.u32);
	// lwz r5,28(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r5,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r5.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r9,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// sth r8,46(r4)
	PPC_STORE_U16(ctx.r4.u32 + 46, ctx.r8.u16);
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,56(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,60(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f10,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,64(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f9,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,68(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f8,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,72(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// lfs f7,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,76(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f6,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,80(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lfs f5,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,84(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lwz r6,88(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r6,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBBE4"))) PPC_WEAK_FUNC(sub_820FBBE4);
PPC_FUNC_IMPL(__imp__sub_820FBBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBBE8"))) PPC_WEAK_FUNC(sub_820FBBE8);
PPC_FUNC_IMPL(__imp__sub_820FBBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// lwz r5,28(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// lhz r8,46(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 46);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f13,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f12,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f11,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f10,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,64(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f9,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,68(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f8,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,72(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f7,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,76(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f6,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,80(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f5,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,84(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lwz r7,88(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBCA4"))) PPC_WEAK_FUNC(sub_820FBCA4);
PPC_FUNC_IMPL(__imp__sub_820FBCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBCA8"))) PPC_WEAK_FUNC(sub_820FBCA8);
PPC_FUNC_IMPL(__imp__sub_820FBCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r6,r7,-30860
	ctx.r6.s64 = ctx.r7.s64 + -30860;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBD38"))) PPC_WEAK_FUNC(sub_820FBD38);
PPC_FUNC_IMPL(__imp__sub_820FBD38) {
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
	// addi r9,r11,-30888
	ctx.r9.s64 = ctx.r11.s64 + -30888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820fbd70
	if (ctx.cr6.eq) goto loc_820FBD70;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FBD70;
	sub_82080000(ctx, base);
loc_820FBD70:
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

__attribute__((alias("__imp__sub_820FBD88"))) PPC_WEAK_FUNC(sub_820FBD88);
PPC_FUNC_IMPL(__imp__sub_820FBD88) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwinm r6,r10,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// addi r31,r30,184
	ctx.r31.s64 = ctx.r30.s64 + 184;
	// bl 0x820edaa0
	ctx.lr = 0x820FBDC8;
	sub_820EDAA0(ctx, base);
	// lfs f13,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stfs f12,184(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 184, temp.u32);
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// lfs f11,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f10,188(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 188, temp.u32);
	// lfs f9,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f0,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f8,192(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 192, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x820fbe04
	if (ctx.cr6.lt) goto loc_820FBE04;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820FBE04:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820fbe20
	if (!ctx.cr6.lt) goto loc_820FBE20;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x820fbe24
	goto loc_820FBE24;
loc_820FBE20:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_820FBE24:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820fbe40
	if (!ctx.cr6.lt) goto loc_820FBE40;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x820fbe44
	goto loc_820FBE44;
loc_820FBE40:
	// fsubs f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f0.f64));
loc_820FBE44:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
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

__attribute__((alias("__imp__sub_820FBE64"))) PPC_WEAK_FUNC(sub_820FBE64);
PPC_FUNC_IMPL(__imp__sub_820FBE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBE68"))) PPC_WEAK_FUNC(sub_820FBE68);
PPC_FUNC_IMPL(__imp__sub_820FBE68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r11,184
	ctx.r6.s64 = ctx.r11.s64 + 184;
	// b 0x820eeb78
	sub_820EEB78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FBE80"))) PPC_WEAK_FUNC(sub_820FBE80);
PPC_FUNC_IMPL(__imp__sub_820FBE80) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820fbb28
	ctx.lr = 0x820FBEA4;
	sub_820FBB28(ctx, base);
	// lfs f0,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lfs f13,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// lfs f12,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,100(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
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

__attribute__((alias("__imp__sub_820FBED4"))) PPC_WEAK_FUNC(sub_820FBED4);
PPC_FUNC_IMPL(__imp__sub_820FBED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBED8"))) PPC_WEAK_FUNC(sub_820FBED8);
PPC_FUNC_IMPL(__imp__sub_820FBED8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x82082030
	ctx.lr = 0x820FBF04;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fbf18
	if (ctx.cr6.eq) goto loc_820FBF18;
	// bl 0x820fbca8
	ctx.lr = 0x820FBF10;
	sub_820FBCA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820fbf1c
	goto loc_820FBF1C;
loc_820FBF18:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820FBF1C:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x8233e4e0
	ctx.lr = 0x820FBF2C;
	sub_8233E4E0(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// lwz r9,180(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_820FBF60"))) PPC_WEAK_FUNC(sub_820FBF60);
PPC_FUNC_IMPL(__imp__sub_820FBF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r6,r7,-30832
	ctx.r6.s64 = ctx.r7.s64 + -30832;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBFF4"))) PPC_WEAK_FUNC(sub_820FBFF4);
PPC_FUNC_IMPL(__imp__sub_820FBFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBFF8"))) PPC_WEAK_FUNC(sub_820FBFF8);
PPC_FUNC_IMPL(__imp__sub_820FBFF8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r9,r3,96
	ctx.r9.s64 = ctx.r3.s64 + 96;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// addi r4,r3,188
	ctx.r4.s64 = ctx.r3.s64 + 188;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// b 0x820ee1e0
	sub_820EE1E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC014"))) PPC_WEAK_FUNC(sub_820FC014);
PPC_FUNC_IMPL(__imp__sub_820FC014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC018"))) PPC_WEAK_FUNC(sub_820FC018);
PPC_FUNC_IMPL(__imp__sub_820FC018) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r8,r11,172
	ctx.r8.s64 = ctx.r11.s64 + 172;
	// addi r7,r11,188
	ctx.r7.s64 = ctx.r11.s64 + 188;
	// addi r6,r11,96
	ctx.r6.s64 = ctx.r11.s64 + 96;
	// b 0x820ee998
	sub_820EE998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC038"))) PPC_WEAK_FUNC(sub_820FC038);
PPC_FUNC_IMPL(__imp__sub_820FC038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8208cfb0
	ctx.lr = 0x820FC05C;
	sub_8208CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fba28
	ctx.lr = 0x820FC068;
	sub_820FBA28(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f12,180(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f11,184(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
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

__attribute__((alias("__imp__sub_820FC09C"))) PPC_WEAK_FUNC(sub_820FC09C);
PPC_FUNC_IMPL(__imp__sub_820FC09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC0A0"))) PPC_WEAK_FUNC(sub_820FC0A0);
PPC_FUNC_IMPL(__imp__sub_820FC0A0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820fbb28
	ctx.lr = 0x820FC0C4;
	sub_820FBB28(ctx, base);
	// lfs f0,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// lfs f13,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lfs f12,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,100(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// lfs f11,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,104(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
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

__attribute__((alias("__imp__sub_820FC0FC"))) PPC_WEAK_FUNC(sub_820FC0FC);
PPC_FUNC_IMPL(__imp__sub_820FC0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC100"))) PPC_WEAK_FUNC(sub_820FC100);
PPC_FUNC_IMPL(__imp__sub_820FC100) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820fbbe8
	ctx.lr = 0x820FC124;
	sub_820FBBE8(ctx, base);
	// lfs f0,96(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f13,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,176(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f12,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,180(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lfs f11,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,184(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
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

__attribute__((alias("__imp__sub_820FC15C"))) PPC_WEAK_FUNC(sub_820FC15C);
PPC_FUNC_IMPL(__imp__sub_820FC15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC160"))) PPC_WEAK_FUNC(sub_820FC160);
PPC_FUNC_IMPL(__imp__sub_820FC160) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,212
	ctx.r3.s64 = 212;
	// bl 0x82082030
	ctx.lr = 0x820FC18C;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fc1a0
	if (ctx.cr6.eq) goto loc_820FC1A0;
	// bl 0x820fbf60
	ctx.lr = 0x820FC198;
	sub_820FBF60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820fc1a4
	goto loc_820FC1A4;
loc_820FC1A0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820FC1A4:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x8233e4e0
	ctx.lr = 0x820FC1B4;
	sub_8233E4E0(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// lwz r9,180(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// lwz r8,184(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r8,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_820FC1F0"))) PPC_WEAK_FUNC(sub_820FC1F0);
PPC_FUNC_IMPL(__imp__sub_820FC1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r6,r7,-30804
	ctx.r6.s64 = ctx.r7.s64 + -30804;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FC278"))) PPC_WEAK_FUNC(sub_820FC278);
PPC_FUNC_IMPL(__imp__sub_820FC278) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r3,96
	ctx.r8.s64 = ctx.r3.s64 + 96;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// b 0x820ede20
	sub_820EDE20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC28C"))) PPC_WEAK_FUNC(sub_820FC28C);
PPC_FUNC_IMPL(__imp__sub_820FC28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC290"))) PPC_WEAK_FUNC(sub_820FC290);
PPC_FUNC_IMPL(__imp__sub_820FC290) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r11,96
	ctx.r6.s64 = ctx.r11.s64 + 96;
	// b 0x820ee4b0
	sub_820EE4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC2A8"))) PPC_WEAK_FUNC(sub_820FC2A8);
PPC_FUNC_IMPL(__imp__sub_820FC2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8208cfb0
	ctx.lr = 0x820FC2CC;
	sub_8208CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fba28
	ctx.lr = 0x820FC2D8;
	sub_820FBA28(ctx, base);
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
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

__attribute__((alias("__imp__sub_820FC2F4"))) PPC_WEAK_FUNC(sub_820FC2F4);
PPC_FUNC_IMPL(__imp__sub_820FC2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC2F8"))) PPC_WEAK_FUNC(sub_820FC2F8);
PPC_FUNC_IMPL(__imp__sub_820FC2F8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820fbbe8
	ctx.lr = 0x820FC31C;
	sub_820FBBE8(ctx, base);
	// lfs f0,92(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
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

__attribute__((alias("__imp__sub_820FC33C"))) PPC_WEAK_FUNC(sub_820FC33C);
PPC_FUNC_IMPL(__imp__sub_820FC33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC340"))) PPC_WEAK_FUNC(sub_820FC340);
PPC_FUNC_IMPL(__imp__sub_820FC340) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82082030
	ctx.lr = 0x820FC36C;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fc380
	if (ctx.cr6.eq) goto loc_820FC380;
	// bl 0x820fc1f0
	ctx.lr = 0x820FC378;
	sub_820FC1F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820fc384
	goto loc_820FC384;
loc_820FC380:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820FC384:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x8233e4e0
	ctx.lr = 0x820FC394;
	sub_8233E4E0(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820FC3B8"))) PPC_WEAK_FUNC(sub_820FC3B8);
PPC_FUNC_IMPL(__imp__sub_820FC3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r6,r7,-30776
	ctx.r6.s64 = ctx.r7.s64 + -30776;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FC440"))) PPC_WEAK_FUNC(sub_820FC440);
PPC_FUNC_IMPL(__imp__sub_820FC440) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r9,r3,96
	ctx.r9.s64 = ctx.r3.s64 + 96;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// addi r4,r3,176
	ctx.r4.s64 = ctx.r3.s64 + 176;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// b 0x820edfc8
	sub_820EDFC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC45C"))) PPC_WEAK_FUNC(sub_820FC45C);
PPC_FUNC_IMPL(__imp__sub_820FC45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC460"))) PPC_WEAK_FUNC(sub_820FC460);
PPC_FUNC_IMPL(__imp__sub_820FC460) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r11,176
	ctx.r6.s64 = ctx.r11.s64 + 176;
	// b 0x820ee898
	sub_820EE898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC478"))) PPC_WEAK_FUNC(sub_820FC478);
PPC_FUNC_IMPL(__imp__sub_820FC478) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820fbb28
	ctx.lr = 0x820FC49C;
	sub_820FBB28(ctx, base);
	// lfs f0,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
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

__attribute__((alias("__imp__sub_820FC4BC"))) PPC_WEAK_FUNC(sub_820FC4BC);
PPC_FUNC_IMPL(__imp__sub_820FC4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC4C0"))) PPC_WEAK_FUNC(sub_820FC4C0);
PPC_FUNC_IMPL(__imp__sub_820FC4C0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82082030
	ctx.lr = 0x820FC4EC;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fc500
	if (ctx.cr6.eq) goto loc_820FC500;
	// bl 0x820fc3b8
	ctx.lr = 0x820FC4F8;
	sub_820FC3B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820fc504
	goto loc_820FC504;
loc_820FC500:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820FC504:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x8233e4e0
	ctx.lr = 0x820FC514;
	sub_8233E4E0(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820FC538"))) PPC_WEAK_FUNC(sub_820FC538);
PPC_FUNC_IMPL(__imp__sub_820FC538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// li r8,5
	ctx.r8.s64 = 5;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r6,r7,-30748
	ctx.r6.s64 = ctx.r7.s64 + -30748;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FC5C8"))) PPC_WEAK_FUNC(sub_820FC5C8);
PPC_FUNC_IMPL(__imp__sub_820FC5C8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r9,r3,96
	ctx.r9.s64 = ctx.r3.s64 + 96;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// addi r4,r3,184
	ctx.r4.s64 = ctx.r3.s64 + 184;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// b 0x820ee0b0
	sub_820EE0B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC5E4"))) PPC_WEAK_FUNC(sub_820FC5E4);
PPC_FUNC_IMPL(__imp__sub_820FC5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC5E8"))) PPC_WEAK_FUNC(sub_820FC5E8);
PPC_FUNC_IMPL(__imp__sub_820FC5E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r7,r11,184
	ctx.r7.s64 = ctx.r11.s64 + 184;
	// addi r6,r11,96
	ctx.r6.s64 = ctx.r11.s64 + 96;
	// b 0x820ee650
	sub_820EE650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC604"))) PPC_WEAK_FUNC(sub_820FC604);
PPC_FUNC_IMPL(__imp__sub_820FC604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC608"))) PPC_WEAK_FUNC(sub_820FC608);
PPC_FUNC_IMPL(__imp__sub_820FC608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8208cfb0
	ctx.lr = 0x820FC62C;
	sub_8208CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fba28
	ctx.lr = 0x820FC638;
	sub_820FBA28(ctx, base);
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f12,180(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
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

__attribute__((alias("__imp__sub_820FC664"))) PPC_WEAK_FUNC(sub_820FC664);
PPC_FUNC_IMPL(__imp__sub_820FC664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC668"))) PPC_WEAK_FUNC(sub_820FC668);
PPC_FUNC_IMPL(__imp__sub_820FC668) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820fbbe8
	ctx.lr = 0x820FC68C;
	sub_820FBBE8(ctx, base);
	// lfs f0,92(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f13,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,176(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f12,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,180(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
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

__attribute__((alias("__imp__sub_820FC6BC"))) PPC_WEAK_FUNC(sub_820FC6BC);
PPC_FUNC_IMPL(__imp__sub_820FC6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC6C0"))) PPC_WEAK_FUNC(sub_820FC6C0);
PPC_FUNC_IMPL(__imp__sub_820FC6C0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82082030
	ctx.lr = 0x820FC6EC;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fc700
	if (ctx.cr6.eq) goto loc_820FC700;
	// bl 0x820fc538
	ctx.lr = 0x820FC6F8;
	sub_820FC538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820fc704
	goto loc_820FC704;
loc_820FC700:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820FC704:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x8233e4e0
	ctx.lr = 0x820FC714;
	sub_8233E4E0(ctx, base);
	// lfs f0,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lfs f12,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,180(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
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

__attribute__((alias("__imp__sub_820FC748"))) PPC_WEAK_FUNC(sub_820FC748);
PPC_FUNC_IMPL(__imp__sub_820FC748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820FC750;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820e08b8
	ctx.lr = 0x820FC760;
	sub_820E08B8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r28,r11,31376
	ctx.r28.s64 = ctx.r11.s64 + 31376;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r10,-30720
	ctx.r7.s64 = ctx.r10.s64 + -30720;
	// addi r6,r9,-30688
	ctx.r6.s64 = ctx.r9.s64 + -30688;
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// addi r5,r8,-30684
	ctx.r5.s64 = ctx.r8.s64 + -30684;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r6.u32);
	// lfs f31,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// stfs f31,656(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 656, temp.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// stw r5,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r5.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// addi r29,r31,648
	ctx.r29.s64 = ctx.r31.s64 + 648;
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x820FC7C8;
	sub_82305000(ctx, base);
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// addi r3,r31,684
	ctx.r3.s64 = ctx.r31.s64 + 684;
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// stw r30,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x820FC7E8;
	sub_82305000(ctx, base);
	// lfs f0,32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// stw r30,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// stw r30,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r30.u32);
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// stw r30,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r30.u32);
	// stfs f31,808(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 808, temp.u32);
	// stfs f0,812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 812, temp.u32);
	// stfs f31,816(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 816, temp.u32);
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FC82C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC83C"))) PPC_WEAK_FUNC(sub_820FC83C);
PPC_FUNC_IMPL(__imp__sub_820FC83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC840"))) PPC_WEAK_FUNC(sub_820FC840);
PPC_FUNC_IMPL(__imp__sub_820FC840) {
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
	// bl 0x820fc890
	ctx.lr = 0x820FC860;
	sub_820FC890(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fc878
	if (ctx.cr6.eq) goto loc_820FC878;
	// bl 0x820f2238
	ctx.lr = 0x820FC874;
	sub_820F2238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820FC878:
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

__attribute__((alias("__imp__sub_820FC890"))) PPC_WEAK_FUNC(sub_820FC890);
PPC_FUNC_IMPL(__imp__sub_820FC890) {
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
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r10,-30720
	ctx.r8.s64 = ctx.r10.s64 + -30720;
	// addi r7,r9,-30688
	ctx.r7.s64 = ctx.r9.s64 + -30688;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r7,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r7.u32);
	// beq cr6,0x820fc8d4
	if (ctx.cr6.eq) goto loc_820FC8D4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820FC8D4;
	sub_82080000(ctx, base);
loc_820FC8D4:
	// lwz r10,692(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// addi r11,r31,684
	ctx.r11.s64 = ctx.r31.s64 + 684;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fc8ec
	if (ctx.cr6.eq) goto loc_820FC8EC;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x820FC8EC;
	sub_82246E18(ctx, base);
loc_820FC8EC:
	// lwz r10,672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// addi r11,r31,664
	ctx.r11.s64 = ctx.r31.s64 + 664;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fc904
	if (ctx.cr6.eq) goto loc_820FC904;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x820FC904;
	sub_82246E18(ctx, base);
loc_820FC904:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-31400
	ctx.r10.s64 = ctx.r11.s64 + -31400;
	// stw r10,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r10.u32);
	// bl 0x820e0bb8
	ctx.lr = 0x820FC918;
	sub_820E0BB8(ctx, base);
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

__attribute__((alias("__imp__sub_820FC92C"))) PPC_WEAK_FUNC(sub_820FC92C);
PPC_FUNC_IMPL(__imp__sub_820FC92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC930"))) PPC_WEAK_FUNC(sub_820FC930);
PPC_FUNC_IMPL(__imp__sub_820FC930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x820FC938;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,792(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r17,0
	ctx.r17.s64 = 0;
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r18,r10,r11
	ctx.r18.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r17,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r17.u32);
	// ori r29,r8,65535
	ctx.r29.u64 = ctx.r8.u64 | 65535;
	// lwz r7,796(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stwx r17,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r17.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r6,800(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplw cr6,r18,r29
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r29.u32, ctx.xer);
	// stwx r17,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r17.u32);
	// rlwinm r4,r18,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820fc990
	if (!ctx.cr6.gt) goto loc_820FC990;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_820FC990:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82087010
	ctx.lr = 0x820FC998;
	sub_82087010(ctx, base);
	// lwz r11,804(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 804);
	// cmplw cr6,r18,r29
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r29.u32, ctx.xer);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// rlwinm r4,r18,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ble cr6,0x820fc9b8
	if (!ctx.cr6.gt) goto loc_820FC9B8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_820FC9B8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82087010
	ctx.lr = 0x820FC9C0;
	sub_82087010(ctx, base);
	// lwz r11,796(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 796);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r10,796(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 796);
	// lwzx r25,r10,r31
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// beq cr6,0x820fca70
	if (ctx.cr6.eq) goto loc_820FCA70;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// subf r6,r25,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r25.s64;
loc_820FC9E4:
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// lwzx r10,r6,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fca60
	if (ctx.cr6.eq) goto loc_820FCA60;
	// lwz r11,488(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 488);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fca60
	if (ctx.cr6.eq) goto loc_820FCA60;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_820FCA10:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820fca28
	if (!ctx.cr6.eq) goto loc_820FCA28;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x820fca38
	if (ctx.cr6.eq) goto loc_820FCA38;
loc_820FCA28:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fca10
	if (!ctx.cr6.eq) goto loc_820FCA10;
	// b 0x820fca60
	goto loc_820FCA60;
loc_820FCA38:
	// lwz r10,800(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 800);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// lwz r11,800(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 800);
	// lwz r3,16(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_820FCA60:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x820fc9e4
	if (ctx.cr6.lt) goto loc_820FC9E4;
loc_820FCA70:
	// lwz r11,800(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 800);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fca90
	if (!ctx.cr6.eq) goto loc_820FCA90;
	// lwz r11,796(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 796);
	// stwx r17,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r17.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
loc_820FCA90:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x820fcac0
	if (!ctx.cr6.lt) goto loc_820FCAC0;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// bge cr6,0x820fcaac
	if (!ctx.cr6.lt) goto loc_820FCAAC;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
loc_820FCAAC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x820FCAB8;
	sub_82080478(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
loc_820FCAC0:
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r9,792(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 792);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r8,800(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 800);
	// lwzx r28,r8,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210c7d8
	ctx.lr = 0x820FCAF0;
	sub_8210C7D8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82298060
	ctx.lr = 0x820FCB0C;
	sub_82298060(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822986a8
	ctx.lr = 0x820FCB18;
	sub_822986A8(ctx, base);
	// lwz r7,800(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 800);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x820FCB2C;
	sub_8233EAF0(ctx, base);
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x820fcc64
	if (ctx.cr6.eq) goto loc_820FCC64;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// subf r19,r25,r29
	ctx.r19.s64 = ctx.r29.s64 - ctx.r25.s64;
	// subf r21,r25,r24
	ctx.r21.s64 = ctx.r24.s64 - ctx.r25.s64;
	// addi r20,r11,4760
	ctx.r20.s64 = ctx.r11.s64 + 4760;
loc_820FCB48:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r9,r25,r19
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r19.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820fcc54
	if (ctx.cr6.eq) goto loc_820FCC54;
	// lwz r11,488(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 488);
	// add r24,r10,r22
	ctx.r24.u64 = ctx.r10.u64 + ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fcc54
	if (ctx.cr6.eq) goto loc_820FCC54;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_820FCB6C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820fcb84
	if (!ctx.cr6.eq) goto loc_820FCB84;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x820fcb94
	if (ctx.cr6.eq) goto loc_820FCB94;
loc_820FCB84:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fcb6c
	if (!ctx.cr6.eq) goto loc_820FCB6C;
	// b 0x820fcc54
	goto loc_820FCC54;
loc_820FCB94:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r9,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x820fcbac
	if (ctx.cr6.lt) goto loc_820FCBAC;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// b 0x820fcbd4
	goto loc_820FCBD4;
loc_820FCBAC:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r20,20
	ctx.r8.s64 = ctx.r20.s64 + 20;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x820fcbcc
	if (ctx.cr6.eq) goto loc_820FCBCC;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// b 0x820fcbd4
	goto loc_820FCBD4;
loc_820FCBCC:
	// addi r9,r20,24
	ctx.r9.s64 = ctx.r20.s64 + 24;
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_820FCBD4:
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r29,r9,0,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x820fcc14
	if (!ctx.cr6.lt) goto loc_820FCC14;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x820fcc00
	if (!ctx.cr6.lt) goto loc_820FCC00;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_820FCC00:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x820FCC0C;
	sub_82080478(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
loc_820FCC14:
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x82212590
	ctx.lr = 0x820FCC3C;
	sub_82212590(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8233e4e0
	ctx.lr = 0x820FCC4C;
	sub_8233E4E0(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stwx r8,r21,r25
	PPC_STORE_U32(ctx.r21.u32 + ctx.r25.u32, ctx.r8.u32);
loc_820FCC54:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r23,r18
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x820fcb48
	if (ctx.cr6.lt) goto loc_820FCB48;
loc_820FCC64:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FCC6C"))) PPC_WEAK_FUNC(sub_820FCC6C);
PPC_FUNC_IMPL(__imp__sub_820FCC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FCC70"))) PPC_WEAK_FUNC(sub_820FCC70);
PPC_FUNC_IMPL(__imp__sub_820FCC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x820FCC78;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 780);
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// stwx r24,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r7,784(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 784);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stwx r24,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r24.u32);
	// lwz r6,788(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// stwx r24,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r24.u32);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r25,8(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r4,r27,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820fcce0
	if (!ctx.cr6.gt) goto loc_820FCCE0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_820FCCE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82087010
	ctx.lr = 0x820FCCE8;
	sub_82087010(ctx, base);
	// lwz r11,784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r9,784(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// lwzx r26,r31,r9
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x820ac008
	ctx.lr = 0x820FCD04;
	sub_820AC008(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r22,8(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// lhz r23,152(r6)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r6.u32 + 152);
	// lfs f31,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x820fcdc0
	if (ctx.cr6.eq) goto loc_820FCDC0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// subf r5,r26,r25
	ctx.r5.s64 = ctx.r25.s64 - ctx.r26.s64;
loc_820FCD30:
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// lwzx r7,r5,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwz r11,28(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fcdb8
	if (ctx.cr6.eq) goto loc_820FCDB8;
	// lwz r9,36(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820fcdb8
	if (ctx.cr6.eq) goto loc_820FCDB8;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// subf r9,r22,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r22.s64;
loc_820FCD60:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fcd78
	if (ctx.cr6.eq) goto loc_820FCD78;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820fcd8c
	if (!ctx.cr6.eq) goto loc_820FCD8C;
loc_820FCD78:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x820fcd60
	if (ctx.cr6.lt) goto loc_820FCD60;
	// b 0x820fcdb8
	goto loc_820FCDB8;
loc_820FCD8C:
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
loc_820FCDB8:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x820fcd30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FCD30;
loc_820FCDC0:
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fcde8
	if (!ctx.cr6.eq) goto loc_820FCDE8;
	// lwz r11,784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// stwx r24,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_820FCDE8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x820fce18
	if (!ctx.cr6.lt) goto loc_820FCE18;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// bge cr6,0x820fce04
	if (!ctx.cr6.lt) goto loc_820FCE04;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
loc_820FCE04:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x820FCE10;
	sub_82080478(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
loc_820FCE18:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r8,780(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 780);
	// stwx r29,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r29.u32);
	// lwz r7,788(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// lwzx r21,r7,r31
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8210c7d8
	ctx.lr = 0x820FCE48;
	sub_8210C7D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82298060
	ctx.lr = 0x820FCE64;
	sub_82298060(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822986a8
	ctx.lr = 0x820FCE70;
	sub_822986A8(ctx, base);
	// lwz r6,788(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x820FCE84;
	sub_8233EAF0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fd084
	if (ctx.cr6.eq) goto loc_820FD084;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// subf r29,r26,r25
	ctx.r29.s64 = ctx.r25.s64 - ctx.r26.s64;
loc_820FCE94:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fd078
	if (ctx.cr6.eq) goto loc_820FD078;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820fd078
	if (ctx.cr6.eq) goto loc_820FD078;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820fd078
	if (ctx.cr6.eq) goto loc_820FD078;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r31,r11,r22
	ctx.r31.s64 = ctx.r22.s64 - ctx.r11.s64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_820FCED0:
	// lfsx f0,r31,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820fd06c
	if (ctx.cr6.eq) goto loc_820FD06C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fd06c
	if (ctx.cr6.eq) goto loc_820FD06C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820fd06c
	if (ctx.cr6.eq) goto loc_820FD06C;
loc_820FCEF8:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x820fcff8
	if (ctx.cr6.lt) goto loc_820FCFF8;
	// addi r7,r8,-3
	ctx.r7.s64 = ctx.r8.s64 + -3;
loc_820FCF24:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// lfs f30,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f13,f1,f0,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f12,f30,f0,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f11,f1,f0,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f10,f30,f0,f10
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f9,f1,f0,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f8,f30,f0,f8
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f7,f1,f0,f7
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f6,f30,f0,f6
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f6.f64));
	// lfs f5,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f5,f1,f0,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f4,f30,f0,f4
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f3,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f3,f1,f0,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f2,f30,f0,f2
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f5,32(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f4,36(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// blt cr6,0x820fcf24
	if (ctx.cr6.lt) goto loc_820FCF24;
loc_820FCFF8:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x820fd050
	if (!ctx.cr6.lt) goto loc_820FD050;
	// subf r26,r9,r8
	ctx.r26.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_820FD018:
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f0,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f8,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f0,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfsx f9,r11,r10
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fmadds f5,f6,f0,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,8(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stfsu f5,12(r9)
	temp.f32 = float(ctx.f5.f64);
	ea = 12 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x820fd018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FD018;
loc_820FD050:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzux r11,r6,r10
	ea = ctx.r6.u32 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820fcef8
	if (!ctx.cr6.eq) goto loc_820FCEF8;
loc_820FD06C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x820fced0
	if (!ctx.cr0.eq) goto loc_820FCED0;
loc_820FD078:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x820fce94
	if (!ctx.cr0.eq) goto loc_820FCE94;
loc_820FD084:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FD094"))) PPC_WEAK_FUNC(sub_820FD094);
PPC_FUNC_IMPL(__imp__sub_820FD094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FD098"))) PPC_WEAK_FUNC(sub_820FD098);
PPC_FUNC_IMPL(__imp__sub_820FD098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820FD0A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,684
	ctx.r24.s64 = ctx.r3.s64 + 684;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x823052d8
	ctx.lr = 0x820FD0C4;
	sub_823052D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820FD0CC;
	sub_820AC008(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwz r28,984(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x820fd10c
	if (ctx.cr6.eq) goto loc_820FD10C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fcc70
	ctx.lr = 0x820FD104;
	sub_820FCC70(ctx, base);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stwx r28,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r28.u32);
loc_820FD10C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823051a8
	ctx.lr = 0x820FD114;
	sub_823051A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FD11C"))) PPC_WEAK_FUNC(sub_820FD11C);
PPC_FUNC_IMPL(__imp__sub_820FD11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FD120"))) PPC_WEAK_FUNC(sub_820FD120);
PPC_FUNC_IMPL(__imp__sub_820FD120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820FD128;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,684
	ctx.r24.s64 = ctx.r3.s64 + 684;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x823052d8
	ctx.lr = 0x820FD14C;
	sub_823052D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820FD154;
	sub_820AC008(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwz r28,984(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x820fd194
	if (ctx.cr6.eq) goto loc_820FD194;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc930
	ctx.lr = 0x820FD18C;
	sub_820FC930(ctx, base);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// stwx r28,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r28.u32);
loc_820FD194:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823051a8
	ctx.lr = 0x820FD19C;
	sub_823051A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FD1A4"))) PPC_WEAK_FUNC(sub_820FD1A4);
PPC_FUNC_IMPL(__imp__sub_820FD1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FD1A8"))) PPC_WEAK_FUNC(sub_820FD1A8);
PPC_FUNC_IMPL(__imp__sub_820FD1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820FD1B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,684
	ctx.r25.s64 = ctx.r3.s64 + 684;
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823052d8
	ctx.lr = 0x820FD1D0;
	sub_823052D8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r9,400(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r11,984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820fd274
	if (ctx.cr6.eq) goto loc_820FD274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ac008
	ctx.lr = 0x820FD1F0;
	sub_820AC008(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fd210
	if (!ctx.cr6.eq) goto loc_820FD210;
	// stw r11,644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 644, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823051a8
	ctx.lr = 0x820FD208;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820FD210:
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// lwz r31,80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r28,40(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// lwz r27,76(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r4,r31,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820fd234
	if (!ctx.cr6.gt) goto loc_820FD234;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_820FD234:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82087010
	ctx.lr = 0x820FD23C;
	sub_82087010(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r3,644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 644, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// beq cr6,0x820fd274
	if (ctx.cr6.eq) goto loc_820FD274;
	// addi r30,r27,64
	ctx.r30.s64 = ctx.r27.s64 + 64;
loc_820FD250:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82257b38
	ctx.lr = 0x820FD260;
	sub_82257B38(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r28,r28,144
	ctx.r28.s64 = ctx.r28.s64 + 144;
	// bne 0x820fd250
	if (!ctx.cr0.eq) goto loc_820FD250;
loc_820FD274:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823051a8
	ctx.lr = 0x820FD27C;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FD284"))) PPC_WEAK_FUNC(sub_820FD284);
PPC_FUNC_IMPL(__imp__sub_820FD284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FD288"))) PPC_WEAK_FUNC(sub_820FD288);
PPC_FUNC_IMPL(__imp__sub_820FD288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820FD290;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd3c4
	if (ctx.cr6.eq) goto loc_820FD3C4;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r8,r10,22200
	ctx.r8.s64 = ctx.r10.s64 + 22200;
	// lwz r11,984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 984);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// ble cr6,0x820fd3c4
	if (!ctx.cr6.gt) goto loc_820FD3C4;
	// lwz r10,520(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// addi r29,r3,80
	ctx.r29.s64 = ctx.r3.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,520(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// rlwinm r25,r8,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne cr6,0x820fd318
	if (!ctx.cr6.eq) goto loc_820FD318;
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820fd318
	if (!ctx.cr6.eq) goto loc_820FD318;
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820fd31c
	if (ctx.cr6.eq) goto loc_820FD31C;
loc_820FD318:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FD31C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd3e8
	if (ctx.cr6.eq) goto loc_820FD3E8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820fd38c
	if (ctx.cr6.eq) goto loc_820FD38C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820fd378
	if (!ctx.cr6.eq) goto loc_820FD378;
	// bl 0x820ddca8
	ctx.lr = 0x820FD344;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fd354
	if (ctx.cr6.eq) goto loc_820FD354;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820fd358
	goto loc_820FD358;
loc_820FD354:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820FD358:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820fd38c
	if (ctx.cr6.eq) goto loc_820FD38C;
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// addi r11,r11,-262
	ctx.r11.s64 = ctx.r11.s64 + -262;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
	// b 0x820fd554
	goto loc_820FD554;
loc_820FD378:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820fd3cc
	if (!ctx.cr6.eq) goto loc_820FD3CC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820FD38C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_820FD390:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820fd3a8
	if (!ctx.cr6.eq) goto loc_820FD3A8;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fd3c4
	if (ctx.cr6.eq) goto loc_820FD3C4;
loc_820FD3A8:
	// lwz r10,360(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 360);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fd3c4
	if (ctx.cr6.eq) goto loc_820FD3C4;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82100178
	ctx.lr = 0x820FD3C4;
	sub_82100178(ctx, base);
loc_820FD3C4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820FD3CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,262
	ctx.r6.s64 = 262;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820FD3E0;
	sub_820F3178(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820fd554
	goto loc_820FD554;
loc_820FD3E8:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,20000
	ctx.r10.s64 = ctx.r11.s64 + 20000;
	// li r27,16
	ctx.r27.s64 = 16;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r31,r11,2136
	ctx.r31.s64 = ctx.r11.s64 + 2136;
loc_820FD400:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fd468
	if (ctx.cr6.eq) goto loc_820FD468;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820fb330
	ctx.lr = 0x820FD414;
	sub_820FB330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd468
	if (ctx.cr6.eq) goto loc_820FD468;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820fd430
	if (!ctx.cr6.eq) goto loc_820FD430;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x820fd468
	goto loc_820FD468;
loc_820FD430:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd444
	if (ctx.cr6.eq) goto loc_820FD444;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x820fd448
	goto loc_820FD448;
loc_820FD444:
	// li r9,0
	ctx.r9.s64 = 0;
loc_820FD448:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fd468
	if (ctx.cr6.eq) goto loc_820FD468;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820fd468
	if (!ctx.cr6.lt) goto loc_820FD468;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_820FD468:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820fd400
	if (!ctx.cr0.eq) goto loc_820FD400;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// beq cr6,0x820fd53c
	if (ctx.cr6.eq) goto loc_820FD53C;
	// lwz r11,520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 520);
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fd53c
	if (ctx.cr6.eq) goto loc_820FD53C;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwz r31,332(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82257cb8
	ctx.lr = 0x820FD4B8;
	sub_82257CB8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82257680
	ctx.lr = 0x820FD4F0;
	sub_82257680(ctx, base);
	// lfs f11,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// stfs f7,16(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fdivs f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 / ctx.f6.f64));
	// stfs f2,20(r28)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r28.u32 + 20, temp.u32);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// stfs f11,24(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 24, temp.u32);
	// b 0x820fd554
	goto loc_820FD554;
loc_820FD53C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 24, temp.u32);
	// stfs f0,20(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 20, temp.u32);
	// stfs f0,16(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
loc_820FD554:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820fd38c
	if (ctx.cr6.eq) goto loc_820FD38C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820fd574
	if (!ctx.cr6.eq) goto loc_820FD574;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820FD570;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820FD574:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// b 0x820fd390
	goto loc_820FD390;
}

__attribute__((alias("__imp__sub_820FD57C"))) PPC_WEAK_FUNC(sub_820FD57C);
PPC_FUNC_IMPL(__imp__sub_820FD57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FD580"))) PPC_WEAK_FUNC(sub_820FD580);
PPC_FUNC_IMPL(__imp__sub_820FD580) {
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
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x820fd648
	if (ctx.cr6.eq) goto loc_820FD648;
	// lwz r4,396(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// addi r5,r3,524
	ctx.r5.s64 = ctx.r3.s64 + 524;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b3c0
	ctx.lr = 0x820FD5B8;
	sub_8215B3C0(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd5cc
	if (ctx.cr6.eq) goto loc_820FD5CC;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// b 0x820fd614
	goto loc_820FD614;
loc_820FD5CC:
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lwz r11,5544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5544);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fd5e8
	if (!ctx.cr6.eq) goto loc_820FD5E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,5544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5544, ctx.r11.u32);
loc_820FD5E8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// addi r7,r10,5548
	ctx.r7.s64 = ctx.r10.s64 + 5548;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,5548(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 5548, temp.u32);
	// stfs f13,12(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
loc_820FD614:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r8,r31,620
	ctx.r8.s64 = ctx.r31.s64 + 620;
	// addi r7,r31,616
	ctx.r7.s64 = ctx.r31.s64 + 616;
	// addi r6,r31,544
	ctx.r6.s64 = ctx.r31.s64 + 544;
	// lwz r3,25540(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25540);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8215bb28
	ctx.lr = 0x820FD640;
	sub_8215BB28(ctx, base);
	// stw r3,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r3.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
loc_820FD648:
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

__attribute__((alias("__imp__sub_820FD660"))) PPC_WEAK_FUNC(sub_820FD660);
PPC_FUNC_IMPL(__imp__sub_820FD660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820FD668;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,400(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r11,22200
	ctx.r9.s64 = ctx.r11.s64 + 22200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r30,984(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 984);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820fd7c4
	if (ctx.cr6.eq) goto loc_820FD7C4;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stw r10,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fd6c0
	if (ctx.cr6.eq) goto loc_820FD6C0;
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// bl 0x820fd1a8
	ctx.lr = 0x820FD6B0;
	sub_820FD1A8(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r10,644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// stw r10,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r10.u32);
	// b 0x820fd6c8
	goto loc_820FD6C8;
loc_820FD6C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fd1a8
	ctx.lr = 0x820FD6C8;
	sub_820FD1A8(ctx, base);
loc_820FD6C8:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fd79c
	if (ctx.cr6.eq) goto loc_820FD79C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// rlwinm r8,r11,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// addi r7,r9,31376
	ctx.r7.s64 = ctx.r9.s64 + 31376;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f0,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x820fd728
	if (ctx.cr6.eq) goto loc_820FD728;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd75c
	if (ctx.cr6.eq) goto loc_820FD75C;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r7,r11,92
	ctx.r7.s64 = ctx.r11.s64 + 92;
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x820fd748
	goto loc_820FD748;
loc_820FD728:
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd75c
	if (ctx.cr6.eq) goto loc_820FD75C;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
loc_820FD748:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820FD75C:
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r31,704
	ctx.r5.s64 = ctx.r31.s64 + 704;
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,396(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82106e98
	ctx.lr = 0x820FD79C;
	sub_82106E98(ctx, base);
loc_820FD79C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fd288
	ctx.lr = 0x820FD7A4;
	sub_820FD288(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,296
	ctx.r8.u64 = ctx.r10.u64 | 296;
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r11,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r11.u32);
loc_820FD7C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FD7CC"))) PPC_WEAK_FUNC(sub_820FD7CC);
PPC_FUNC_IMPL(__imp__sub_820FD7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FD7D0"))) PPC_WEAK_FUNC(sub_820FD7D0);
PPC_FUNC_IMPL(__imp__sub_820FD7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820FD7D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// bl 0x82087010
	ctx.lr = 0x820FD808;
	sub_82087010(ctx, base);
	// li r24,52
	ctx.r24.s64 = 52;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// beq cr6,0x820fd82c
	if (ctx.cr6.eq) goto loc_820FD82C;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stb r23,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r23.u8);
	// b 0x820fd830
	goto loc_820FD830;
loc_820FD82C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820FD830:
	// rlwinm r11,r29,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r18,-1
	ctx.r18.s64 = -1;
	// ori r17,r10,65535
	ctx.r17.u64 = ctx.r10.u64 | 65535;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd884
	if (ctx.cr6.eq) goto loc_820FD884;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// addi r11,r26,72
	ctx.r11.s64 = ctx.r26.s64 + 72;
	// stb r22,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r22.u8);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// lwz r10,76(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdbb0
	if (ctx.cr6.eq) goto loc_820FDBB0;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x820fdbb8
	goto loc_820FDBB8;
loc_820FD884:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd8c0
	if (ctx.cr6.eq) goto loc_820FD8C0;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r11,r26,72
	ctx.r11.s64 = ctx.r26.s64 + 72;
	// stb r22,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r22.u8);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// lwz r10,76(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdbb0
	if (ctx.cr6.eq) goto loc_820FDBB0;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x820fdbb8
	goto loc_820FDBB8;
loc_820FD8C0:
	// rlwinm r11,r29,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd8fc
	if (ctx.cr6.eq) goto loc_820FD8FC;
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r22,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r22.u8);
	// addi r11,r26,72
	ctx.r11.s64 = ctx.r26.s64 + 72;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// lwz r10,76(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdbb0
	if (ctx.cr6.eq) goto loc_820FDBB0;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x820fdbb8
	goto loc_820FDBB8;
loc_820FD8FC:
	// rlwinm r11,r29,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fdb0c
	if (ctx.cr6.eq) goto loc_820FDB0C;
	// lwz r21,324(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r22,1
	ctx.r22.s64 = 1;
	// li r25,8
	ctx.r25.s64 = 8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x820fda84
	if (ctx.cr6.eq) goto loc_820FDA84;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// subf r16,r21,r16
	ctx.r16.s64 = ctx.r16.s64 - ctx.r21.s64;
	// bl 0x82087010
	ctx.lr = 0x820FD92C;
	sub_82087010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fd948
	if (ctx.cr6.eq) goto loc_820FD948;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stb r23,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r23.u8);
	// b 0x820fd94c
	goto loc_820FD94C;
loc_820FD948:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_820FD94C:
	// cmplw cr6,r21,r17
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r17.u32, ctx.xer);
	// rlwinm r4,r21,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820fd95c
	if (!ctx.cr6.gt) goto loc_820FD95C;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
loc_820FD95C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82087010
	ctx.lr = 0x820FD964;
	sub_82087010(ctx, base);
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// stw r21,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r21.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820fd998
	if (ctx.cr6.gt) goto loc_820FD998;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820fd99c
	goto loc_820FD99C;
loc_820FD998:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
loc_820FD99C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82087010
	ctx.lr = 0x820FD9A4;
	sub_82087010(ctx, base);
	// stw r3,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r3.u32);
	// addi r4,r31,544
	ctx.r4.s64 = ctx.r31.s64 + 544;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233e4e0
	ctx.lr = 0x820FD9C0;
	sub_8233E4E0(ctx, base);
	// lwz r8,616(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r28,184
	ctx.r10.s64 = ctx.r28.s64 + 184;
	// addi r9,r31,616
	ctx.r9.s64 = ctx.r31.s64 + 616;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r8,180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 180, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820FD9DC:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820fd9dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FD9DC;
	// lwz r10,776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r11,r26,48
	ctx.r11.s64 = ctx.r26.s64 + 48;
	// stw r23,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r23.u32);
	// stb r22,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r22.u8);
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// lwz r10,52(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fda10
	if (ctx.cr6.eq) goto loc_820FDA10;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// b 0x820fda18
	goto loc_820FDA18;
loc_820FDA10:
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_820FDA18:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82087010
	ctx.lr = 0x820FDA28;
	sub_82087010(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fda44
	if (ctx.cr6.eq) goto loc_820FDA44;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stb r23,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r23.u8);
	// b 0x820fda48
	goto loc_820FDA48;
loc_820FDA44:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_820FDA48:
	// stb r22,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r22.u8);
	// addi r10,r26,24
	ctx.r10.s64 = ctx.r26.s64 + 24;
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r25,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r25.u32);
	// stw r19,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r19.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r21,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r21.u32);
	// lwz r9,28(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fda78
	if (ctx.cr6.eq) goto loc_820FDA78;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x820fda80
	goto loc_820FDA80;
loc_820FDA78:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_820FDA80:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_820FDA84:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82087010
	ctx.lr = 0x820FDA90;
	sub_82087010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fdaac
	if (ctx.cr6.eq) goto loc_820FDAAC;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stb r23,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r23.u8);
	// b 0x820fdab0
	goto loc_820FDAB0;
loc_820FDAAC:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_820FDAB0:
	// stb r22,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r22.u8);
	// addi r11,r26,24
	ctx.r11.s64 = ctx.r26.s64 + 24;
	// stw r23,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r23.u32);
	// stw r25,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r25.u32);
	// stw r28,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r28.u32);
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdad8
	if (ctx.cr6.eq) goto loc_820FDAD8;
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// b 0x820fdae0
	goto loc_820FDAE0;
loc_820FDAD8:
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_820FDAE0:
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// addi r11,r26,48
	ctx.r11.s64 = ctx.r26.s64 + 48;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stb r22,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r22.u8);
	// lwz r10,52(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdbb0
	if (ctx.cr6.eq) goto loc_820FDBB0;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x820fdbb8
	goto loc_820FDBB8;
loc_820FDB0C:
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// ori r9,r10,21845
	ctx.r9.u64 = ctx.r10.u64 | 21845;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x820fdb34
	if (ctx.cr6.gt) goto loc_820FDB34;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820fdb38
	goto loc_820FDB38;
loc_820FDB34:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
loc_820FDB38:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82087010
	ctx.lr = 0x820FDB40;
	sub_82087010(ctx, base);
	// stw r3,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r3.u32);
	// addi r4,r31,544
	ctx.r4.s64 = ctx.r31.s64 + 544;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233e4e0
	ctx.lr = 0x820FDB5C;
	sub_8233E4E0(ctx, base);
	// lwz r8,616(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r28,184
	ctx.r10.s64 = ctx.r28.s64 + 184;
	// addi r9,r31,616
	ctx.r9.s64 = ctx.r31.s64 + 616;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r8,180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 180, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820FDB78:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820fdb78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FDB78;
	// lwz r10,776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// addi r11,r26,48
	ctx.r11.s64 = ctx.r26.s64 + 48;
	// stb r22,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r22.u8);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lwz r10,52(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdbb0
	if (ctx.cr6.eq) goto loc_820FDBB0;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x820fdbb8
	goto loc_820FDBB8;
loc_820FDBB0:
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_820FDBB8:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplw cr6,r16,r17
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r17.u32, ctx.xer);
	// rlwinm r4,r16,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820fdbcc
	if (!ctx.cr6.gt) goto loc_820FDBCC;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
loc_820FDBCC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82087010
	ctx.lr = 0x820FDBD4;
	sub_82087010(ctx, base);
	// stw r16,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r16.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// beq cr6,0x820fdbec
	if (ctx.cr6.eq) goto loc_820FDBEC;
	// stw r3,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r3.u32);
	// stw r16,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r16.u32);
loc_820FDBEC:
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// add r8,r11,r19
	ctx.r8.u64 = ctx.r11.u64 + ctx.r19.u64;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_820FDBFC:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x820fdc0c
	if (!ctx.cr6.eq) goto loc_820FDC0C;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x820fdc88
	if (ctx.cr6.eq) goto loc_820FDC88;
loc_820FDC0C:
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820fdc7c
	if (!ctx.cr6.eq) goto loc_820FDC7C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x820fdc70
	if (ctx.cr6.eq) goto loc_820FDC70;
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r6,r7,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820fdc4c
	if (ctx.cr6.eq) goto loc_820FDC4C;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r7,r10,0,21,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7E0;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// rlwinm r7,r7,0,26,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFC3F;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fdc50
	if (ctx.cr6.eq) goto loc_820FDC50;
loc_820FDC4C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_820FDC50:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fdc70
	if (!ctx.cr6.eq) goto loc_820FDC70;
	// stwu r11,-4(r8)
	ea = -4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x820fdbfc
	goto loc_820FDBFC;
loc_820FDC70:
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
	// rlwinm r10,r16,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_820FDC7C:
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x820fdbfc
	goto loc_820FDBFC;
loc_820FDC88:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FDC90"))) PPC_WEAK_FUNC(sub_820FDC90);
PPC_FUNC_IMPL(__imp__sub_820FDC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820FDC98;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa34
	ctx.lr = 0x820FDCA0;
	__savefpr_27(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r10,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r10.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r4,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r4.u32);
	// addi r17,r11,31376
	ctx.r17.s64 = ctx.r11.s64 + 31376;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r10,r9,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r9,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r9.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lfs f27,48(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 48);
	ctx.f27.f64 = double(temp.f32);
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdcec
	if (ctx.cr6.eq) goto loc_820FDCEC;
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// beq cr6,0x820fe8a0
	if (ctx.cr6.eq) goto loc_820FE8A0;
loc_820FDCEC:
	// lwz r18,340(r22)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r22.u32 + 340);
	// li r4,328
	ctx.r4.s64 = 328;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r15,48(r18)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	// stw r15,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r15.u32);
	// bl 0x82087010
	ctx.lr = 0x820FDD04;
	sub_82087010(ctx, base);
	// lwz r11,268(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 268);
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,304(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,208(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lfs f12,304(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f11,212(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lwz r10,644(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 644);
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// stw r14,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r14.u32);
	// stw r14,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r14.u32);
	// lwz r9,492(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 492);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fdd68
	if (ctx.cr6.eq) goto loc_820FDD68;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82087010
	ctx.lr = 0x820FDD54;
	sub_82087010(ctx, base);
	// stw r3,324(r21)
	PPC_STORE_U32(ctx.r21.u32 + 324, ctx.r3.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,492(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 492);
	// bl 0x8233e4e0
	ctx.lr = 0x820FDD64;
	sub_8233E4E0(ctx, base);
	// b 0x820fdd6c
	goto loc_820FDD6C;
loc_820FDD68:
	// stw r14,324(r21)
	PPC_STORE_U32(ctx.r21.u32 + 324, ctx.r14.u32);
loc_820FDD6C:
	// lwz r11,300(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 300);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fde34
	if (ctx.cr6.eq) goto loc_820FDE34;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82087010
	ctx.lr = 0x820FDD88;
	sub_82087010(ctx, base);
	// stw r3,292(r21)
	PPC_STORE_U32(ctx.r21.u32 + 292, ctx.r3.u32);
	// lwz r10,704(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 704);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,708(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 708);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,712(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 712);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,716(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 716);
	// lwz r11,292(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 292);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r6,720(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 720);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r5,724(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 724);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r11,292(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 292);
	// lwz r4,728(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 728);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r3,732(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 732);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// lwz r10,736(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 736);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,292(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 292);
	// lwz r9,740(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 740);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,744(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 744);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,748(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 748);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// lwz r11,292(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 292);
	// lwz r6,752(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 752);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// lwz r5,756(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 756);
	// stw r5,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// lwz r4,760(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 760);
	// stw r4,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// lwz r11,292(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 292);
	// lwz r3,764(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 764);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r10,768(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 768);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r9,772(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 772);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
loc_820FDE34:
	// lwz r11,356(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fde60
	if (ctx.cr6.eq) goto loc_820FDE60;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82087010
	ctx.lr = 0x820FDE4C;
	sub_82087010(ctx, base);
	// stw r3,320(r21)
	PPC_STORE_U32(ctx.r21.u32 + 320, ctx.r3.u32);
	// li r5,88
	ctx.r5.s64 = 88;
	// lwz r4,356(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 356);
	// bl 0x8233e4e0
	ctx.lr = 0x820FDE5C;
	sub_8233E4E0(ctx, base);
	// b 0x820fde64
	goto loc_820FDE64;
loc_820FDE60:
	// stw r14,320(r21)
	PPC_STORE_U32(ctx.r21.u32 + 320, ctx.r14.u32);
loc_820FDE64:
	// addi r24,r22,32
	ctx.r24.s64 = ctx.r22.s64 + 32;
	// addi r25,r21,92
	ctx.r25.s64 = ctx.r21.s64 + 92;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820FDE7C;
	sub_8233E4E0(ctx, base);
	// mulli r11,r23,108
	ctx.r11.s64 = ctx.r23.s64 * 108;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// rlwinm r10,r16,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x2;
	// addi r31,r11,212
	ctx.r31.s64 = ctx.r11.s64 + 212;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// beq cr6,0x820fdea8
	if (ctx.cr6.eq) goto loc_820FDEA8;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r3,r21,28
	ctx.r3.s64 = ctx.r21.s64 + 28;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820FDEA8;
	sub_8233E4E0(ctx, base);
loc_820FDEA8:
	// lwz r11,300(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 300);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdec0
	if (ctx.cr6.eq) goto loc_820FDEC0;
	// oris r29,r29,112
	ctx.r29.u64 = ctx.r29.u64 | 7340032;
loc_820FDEC0:
	// rlwinm r11,r29,0,9,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x700000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fdf2c
	if (ctx.cr6.eq) goto loc_820FDF2C;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820FDEDC;
	sub_8233E4E0(ctx, base);
	// lwz r4,160(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 160);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820fdf14
	if (ctx.cr6.eq) goto loc_820FDF14;
	// lwz r5,132(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820fdf04
	if (ctx.cr6.eq) goto loc_820FDF04;
	// bl 0x822578d8
	ctx.lr = 0x820FDEFC;
	sub_822578D8(ctx, base);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// b 0x820fdf18
	goto loc_820FDF18;
loc_820FDF04:
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820FDF0C;
	sub_8233E4E0(ctx, base);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// b 0x820fdf18
	goto loc_820FDF18;
loc_820FDF14:
	// li r6,0
	ctx.r6.s64 = 0;
loc_820FDF18:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r30,24
	ctx.r5.s64 = ctx.r30.s64 + 24;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82306a50
	ctx.lr = 0x820FDF2C;
	sub_82306A50(ctx, base);
loc_820FDF2C:
	// lwz r11,488(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 488);
	// lhz r10,152(r15)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r15.u32 + 152);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x820fdf60
	if (ctx.cr6.eq) goto loc_820FDF60;
	// lwz r10,300(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 300);
	// rlwinm r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fdf60
	if (!ctx.cr6.eq) goto loc_820FDF60;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x820fdf68
	goto loc_820FDF68;
loc_820FDF60:
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_820FDF68:
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// stw r14,296(r21)
	PPC_STORE_U32(ctx.r21.u32 + 296, ctx.r14.u32);
	// li r19,-1
	ctx.r19.s64 = -1;
	// stw r14,300(r21)
	PPC_STORE_U32(ctx.r21.u32 + 300, ctx.r14.u32);
	// stw r14,304(r21)
	PPC_STORE_U32(ctx.r21.u32 + 304, ctx.r14.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r14,308(r21)
	PPC_STORE_U32(ctx.r21.u32 + 308, ctx.r14.u32);
	// stw r14,312(r21)
	PPC_STORE_U32(ctx.r21.u32 + 312, ctx.r14.u32);
	// stw r14,316(r21)
	PPC_STORE_U32(ctx.r21.u32 + 316, ctx.r14.u32);
	// bne cr6,0x820fdf9c
	if (!ctx.cr6.eq) goto loc_820FDF9C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe090
	if (ctx.cr6.eq) goto loc_820FE090;
loc_820FDF9C:
	// lwz r11,300(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdfb4
	if (ctx.cr6.eq) goto loc_820FDFB4;
	// lwz r29,328(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 328);
	// b 0x820fdfb8
	goto loc_820FDFB8;
loc_820FDFB4:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_820FDFB8:
	// addi r26,r22,664
	ctx.r26.s64 = ctx.r22.s64 + 664;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823052d8
	ctx.lr = 0x820FDFC8;
	sub_823052D8(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe010
	if (ctx.cr6.eq) goto loc_820FE010;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fd098
	ctx.lr = 0x820FDFE8;
	sub_820FD098(ctx, base);
	// lwz r10,780(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 780);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,296(r21)
	PPC_STORE_U32(ctx.r21.u32 + 296, ctx.r9.u32);
	// lwz r8,784(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 784);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r7,300(r21)
	PPC_STORE_U32(ctx.r21.u32 + 300, ctx.r7.u32);
	// lwz r6,788(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 788);
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r5,304(r21)
	PPC_STORE_U32(ctx.r21.u32 + 304, ctx.r5.u32);
loc_820FE010:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fe088
	if (ctx.cr6.eq) goto loc_820FE088;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fd120
	ctx.lr = 0x820FE02C;
	sub_820FD120(ctx, base);
	// lwz r10,792(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 792);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,308(r21)
	PPC_STORE_U32(ctx.r21.u32 + 308, ctx.r9.u32);
	// lwz r8,796(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r7,312(r21)
	PPC_STORE_U32(ctx.r21.u32 + 312, ctx.r7.u32);
	// lwz r6,804(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 804);
	// lwzx r11,r6,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r11,316(r21)
	PPC_STORE_U32(ctx.r21.u32 + 316, ctx.r11.u32);
	// lfs f0,308(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 216, temp.u32);
	// bl 0x82257cb8
	ctx.lr = 0x820FE06C;
	sub_82257CB8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x822578d8
	ctx.lr = 0x820FE07C;
	sub_822578D8(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r21,220
	ctx.r3.s64 = ctx.r21.s64 + 220;
	// bl 0x82257a50
	ctx.lr = 0x820FE088;
	sub_82257A50(ctx, base);
loc_820FE088:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823051a8
	ctx.lr = 0x820FE090;
	sub_823051A8(ctx, base);
loc_820FE090:
	// lwz r11,524(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 524);
	// rlwinm r10,r16,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xC000;
	// addi r9,r22,524
	ctx.r9.s64 = ctx.r22.s64 + 524;
	// addi r8,r21,160
	ctx.r8.s64 = ctx.r21.s64 + 160;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,160(r21)
	PPC_STORE_U32(ctx.r21.u32 + 160, ctx.r11.u32);
	// lwz r7,528(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 528);
	// stw r7,164(r21)
	PPC_STORE_U32(ctx.r21.u32 + 164, ctx.r7.u32);
	// lwz r6,532(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 532);
	// stw r6,168(r21)
	PPC_STORE_U32(ctx.r21.u32 + 168, ctx.r6.u32);
	// lwz r5,536(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 536);
	// stw r5,172(r21)
	PPC_STORE_U32(ctx.r21.u32 + 172, ctx.r5.u32);
	// lwz r4,300(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 300);
	// rlwinm r3,r4,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0x1;
	// stb r14,11(r21)
	PPC_STORE_U8(ctx.r21.u32 + 11, ctx.r14.u8);
	// stb r3,10(r21)
	PPC_STORE_U8(ctx.r21.u32 + 10, ctx.r3.u8);
	// beq cr6,0x820fe270
	if (ctx.cr6.eq) goto loc_820FE270;
	// lbz r11,347(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 347);
	// rlwinm r10,r16,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x4000;
	// rlwinm r9,r11,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r9,9(r21)
	PPC_STORE_U8(ctx.r21.u32 + 9, ctx.r9.u8);
	// beq cr6,0x820fe164
	if (ctx.cr6.eq) goto loc_820FE164;
	// stb r30,10(r21)
	PPC_STORE_U8(ctx.r21.u32 + 10, ctx.r30.u8);
	// lfs f0,244(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,8(r21)
	PPC_STORE_U8(ctx.r21.u32 + 8, ctx.r30.u8);
	// lfs f13,36(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,346(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 346);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lbz r8,344(r22)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r22.u32 + 344);
	// lfd f7,120(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lbz r6,345(r22)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r22.u32 + 345);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// stfs f13,24(r21)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r21.u32 + 24, temp.u32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f1,20(r21)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r21.u32 + 20, temp.u32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f8,12(r21)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r21.u32 + 12, temp.u32);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f2,16(r21)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r21.u32 + 16, temp.u32);
	// lfs f0,348(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,208(r21)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r21.u32 + 208, temp.u32);
	// b 0x820fe174
	goto loc_820FE174;
loc_820FE164:
	// stfs f27,208(r21)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r21.u32 + 208, temp.u32);
	// stb r30,11(r21)
	PPC_STORE_U8(ctx.r21.u32 + 11, ctx.r30.u8);
	// stb r14,10(r21)
	PPC_STORE_U8(ctx.r21.u32 + 10, ctx.r14.u8);
loc_820FE170:
	// stb r14,8(r21)
	PPC_STORE_U8(ctx.r21.u32 + 8, ctx.r14.u8);
loc_820FE174:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r27,108(r15)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r15.u32 + 108);
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820FE184;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820fe190
	if (!ctx.cr6.eq) goto loc_820FE190;
	// bl 0x821b3000
	ctx.lr = 0x820FE190;
	sub_821B3000(ctx, base);
loc_820FE190:
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// addi r11,r27,15
	ctx.r11.s64 = ctx.r27.s64 + 15;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// lis r25,-13569
	ctx.r25.s64 = -889257984;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820fe1c8
	if (!ctx.cr6.gt) goto loc_820FE1C8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,4492
	ctx.r10.s64 = ctx.r11.s64 + 4492;
	// stw r10,-13570(r25)
	PPC_STORE_U32(ctx.r25.u32 + -13570, ctx.r10.u32);
loc_820FE1C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,230
	ctx.r9.s64 = 15073280;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ori r8,r9,49844
	ctx.r8.u64 = ctx.r9.u64 | 49844;
	// add r15,r10,r11
	ctx.r15.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// mulli r11,r27,284
	ctx.r11.s64 = ctx.r27.s64 * 284;
	// ble cr6,0x820fe1f4
	if (!ctx.cr6.gt) goto loc_820FE1F4;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_820FE1F4:
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r29,r11,0,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x820fe22c
	if (!ctx.cr6.lt) goto loc_820FE22C;
	// lwz r28,0(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x820fe218
	if (!ctx.cr6.lt) goto loc_820FE218;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
loc_820FE218:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x820FE224;
	sub_82080478(ctx, base);
	// stw r3,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r3.u32);
	// stw r28,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r28.u32);
loc_820FE22C:
	// lwz r26,4(r20)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// add r10,r29,r26
	ctx.r10.u64 = ctx.r29.u64 + ctx.r26.u64;
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r10,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r9,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r9.u32);
	// beq cr6,0x820fe324
	if (ctx.cr6.eq) goto loc_820FE324;
	// addic. r29,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r29.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// blt 0x820fe328
	if (ctx.cr0.lt) goto loc_820FE328;
loc_820FE258:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821007e8
	ctx.lr = 0x820FE260;
	sub_821007E8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,284
	ctx.r28.s64 = ctx.r28.s64 + 284;
	// bge 0x820fe258
	if (!ctx.cr0.lt) goto loc_820FE258;
	// b 0x820fe328
	goto loc_820FE328;
loc_820FE270:
	// lwz r11,300(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 300);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe2fc
	if (ctx.cr6.eq) goto loc_820FE2FC;
	// stb r30,8(r21)
	PPC_STORE_U8(ctx.r21.u32 + 8, ctx.r30.u8);
	// lfs f0,244(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,352(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 352);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,12(r21)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r21.u32 + 12, temp.u32);
	// lbz r8,353(r22)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r22.u32 + 353);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,16(r21)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r21.u32 + 16, temp.u32);
	// lbz r6,354(r22)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r22.u32 + 354);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,20(r21)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r21.u32 + 20, temp.u32);
	// lbz r4,355(r22)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r22.u32 + 355);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f1,104(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,24(r21)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r21.u32 + 24, temp.u32);
	// b 0x820fe174
	goto loc_820FE174;
loc_820FE2FC:
	// rlwinm r11,r16,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe170
	if (ctx.cr6.eq) goto loc_820FE170;
	// lfs f0,36(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,8(r21)
	PPC_STORE_U8(ctx.r21.u32 + 8, ctx.r30.u8);
	// stfs f0,12(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 12, temp.u32);
	// stfs f0,16(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 16, temp.u32);
	// stfs f0,20(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 20, temp.u32);
	// stfs f0,24(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 24, temp.u32);
	// b 0x820fe174
	goto loc_820FE174;
loc_820FE324:
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
loc_820FE328:
	// lwz r11,360(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 360);
	// lwz r16,12(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// stb r14,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r14.u8);
	// beq cr6,0x820fe3a8
	if (ctx.cr6.eq) goto loc_820FE3A8;
	// lwz r11,520(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe3a8
	if (ctx.cr6.eq) goto loc_820FE3A8;
	// lwz r11,676(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fe3a8
	if (!ctx.cr6.eq) goto loc_820FE3A8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82087010
	ctx.lr = 0x820FE36C;
	sub_82087010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fe398
	if (ctx.cr6.eq) goto loc_820FE398;
	// lwz r10,520(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 520);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// b 0x820fe39c
	goto loc_820FE39C;
loc_820FE398:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_820FE39C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,288(r21)
	PPC_STORE_U32(ctx.r21.u32 + 288, ctx.r11.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
loc_820FE3A8:
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fe858
	if (ctx.cr6.eq) goto loc_820FE858;
	// mulli r11,r27,284
	ctx.r11.s64 = ctx.r27.s64 * 284;
	// lwz r10,676(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// lfs f28,1364(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 1364);
	ctx.f28.f64 = double(temp.f32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r24,r27,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r23,r27,960
	ctx.r23.s64 = ctx.r27.s64 * 960;
	// addi r27,r11,28
	ctx.r27.s64 = ctx.r11.s64 + 28;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r31,r10,25,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// rlwinm r30,r9,29,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// rlwinm r14,r8,27,31,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r18,r10,30,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// addi r17,r11,20000
	ctx.r17.s64 = ctx.r11.s64 + 20000;
loc_820FE3F0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r23,r23,-960
	ctx.r23.s64 = ctx.r23.s64 + -960;
	// addi r24,r24,-4
	ctx.r24.s64 = ctx.r24.s64 + -4;
	// addi r19,r19,-1
	ctx.r19.s64 = ctx.r19.s64 + -1;
	// addi r27,r27,-284
	ctx.r27.s64 = ctx.r27.s64 + -284;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwzx r28,r16,r24
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r24.u32);
	// add r25,r11,r23
	ctx.r25.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm r11,r9,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// rlwinm r9,r10,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x820fe444
	if (ctx.cr6.eq) goto loc_820FE444;
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe444
	if (ctx.cr6.eq) goto loc_820FE444;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820fe4a0
	goto loc_820FE4A0;
loc_820FE444:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe464
	if (ctx.cr6.eq) goto loc_820FE464;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe464
	if (ctx.cr6.eq) goto loc_820FE464;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820fe4a0
	goto loc_820FE4A0;
loc_820FE464:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe480
	if (ctx.cr6.eq) goto loc_820FE480;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe480
	if (ctx.cr6.eq) goto loc_820FE480;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820fe4a0
	goto loc_820FE4A0;
loc_820FE480:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe49c
	if (ctx.cr6.eq) goto loc_820FE49C;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820fe4a0
	if (!ctx.cr6.eq) goto loc_820FE4A0;
loc_820FE49C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FE4A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe830
	if (ctx.cr6.eq) goto loc_820FE830;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820fe4c4
	if (ctx.cr6.eq) goto loc_820FE4C4;
	// lbz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe830
	if (ctx.cr6.eq) goto loc_820FE830;
loc_820FE4C4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r15,r19
	PPC_STORE_U8(ctx.r15.u32 + ctx.r19.u32, ctx.r9.u8);
	// stw r25,-16(r27)
	PPC_STORE_U32(ctx.r27.u32 + -16, ctx.r25.u32);
	// stw r9,248(r27)
	PPC_STORE_U32(ctx.r27.u32 + 248, ctx.r9.u32);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe5fc
	if (ctx.cr6.eq) goto loc_820FE5FC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,65512
	ctx.r8.u64 = ctx.r10.u64 | 65512;
	// ori r9,r11,65516
	ctx.r9.u64 = ctx.r11.u64 | 65516;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwzx r6,r17,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r8.u32);
	// lwzx r7,r17,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r9.u32);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// frsp f29,f12
	ctx.f29.f64 = double(float(ctx.f12.f64));
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// beq cr6,0x820fe52c
	if (ctx.cr6.eq) goto loc_820FE52C;
	// lfs f31,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820fe530
	goto loc_820FE530;
loc_820FE52C:
	// lfs f31,496(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 496);
	ctx.f31.f64 = double(temp.f32);
loc_820FE530:
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x820fe560
	if (!ctx.cr6.lt) goto loc_820FE560;
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// bge cr6,0x820fe54c
	if (!ctx.cr6.lt) goto loc_820FE54C;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
loc_820FE54C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x820FE558;
	sub_82080478(ctx, base);
	// stw r3,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r3.u32);
	// stw r29,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r29.u32);
loc_820FE560:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r10,-16
	ctx.r8.s64 = ctx.r10.s64 + -16;
	// stw r9,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r8.u32);
	// beq cr6,0x820fe5c0
	if (ctx.cr6.eq) goto loc_820FE5C0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820fe590
	if (ctx.cr6.eq) goto loc_820FE590;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820fe594
	goto loc_820FE594;
loc_820FE590:
	// lfs f0,500(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
loc_820FE594:
	// fdivs f13,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 / ctx.f30.f64));
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fdivs f12,f28,f29
	ctx.f12.f64 = double(float(ctx.f28.f64 / ctx.f29.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x820fe5c8
	goto loc_820FE5C8;
loc_820FE5C0:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_820FE5C8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820fe5dc
	if (ctx.cr6.eq) goto loc_820FE5DC;
	// lbz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// rlwinm r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// b 0x820fe5e0
	goto loc_820FE5E0;
loc_820FE5DC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_820FE5E0:
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// stw r10,-8(r27)
	PPC_STORE_U32(ctx.r27.u32 + -8, ctx.r10.u32);
	// lwz r11,684(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r10,604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// stw r8,604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 604, ctx.r8.u32);
	// b 0x820fe604
	goto loc_820FE604;
loc_820FE5FC:
	// stb r9,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r9.u8);
	// stw r9,-8(r27)
	PPC_STORE_U32(ctx.r27.u32 + -8, ctx.r9.u32);
loc_820FE604:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820fe6b8
	if (ctx.cr6.eq) goto loc_820FE6B8;
	// lfs f0,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bne cr6,0x820fe630
	if (!ctx.cr6.eq) goto loc_820FE630;
	// lfs f0,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bne cr6,0x820fe630
	if (!ctx.cr6.eq) goto loc_820FE630;
	// lfs f0,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x820fe6b8
	if (ctx.cr6.eq) goto loc_820FE6B8;
loc_820FE630:
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x820fe660
	if (!ctx.cr6.lt) goto loc_820FE660;
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// bge cr6,0x820fe64c
	if (!ctx.cr6.lt) goto loc_820FE64C;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
loc_820FE64C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x820FE658;
	sub_82080478(ctx, base);
	// stw r3,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r3.u32);
	// stw r29,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r29.u32);
loc_820FE660:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r10,-16
	ctx.r8.s64 = ctx.r10.s64 + -16;
	// stw r9,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x820fe6ac
	if (ctx.cr6.eq) goto loc_820FE6AC;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,28(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,32(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r11,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r11.u32);
	// b 0x820fe6bc
	goto loc_820FE6BC;
loc_820FE6AC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r9.u32);
	// b 0x820fe6bc
	goto loc_820FE6BC;
loc_820FE6B8:
	// stw r9,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r9.u32);
loc_820FE6BC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820fe73c
	if (ctx.cr6.eq) goto loc_820FE73C;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820fe73c
	if (ctx.cr6.eq) goto loc_820FE73C;
	// lwz r11,488(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 488);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe73c
	if (ctx.cr6.eq) goto loc_820FE73C;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmplwi cr6,r11,496
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 496, ctx.xer);
	// bge cr6,0x820fe710
	if (!ctx.cr6.lt) goto loc_820FE710;
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r29,496
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 496, ctx.xer);
	// bge cr6,0x820fe6fc
	if (!ctx.cr6.lt) goto loc_820FE6FC;
	// addi r29,r29,496
	ctx.r29.s64 = ctx.r29.s64 + 496;
loc_820FE6FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x820FE708;
	sub_82080478(ctx, base);
	// stw r3,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r3.u32);
	// stw r29,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r29.u32);
loc_820FE710:
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// li r5,484
	ctx.r5.s64 = 484;
	// addi r10,r3,496
	ctx.r10.s64 = ctx.r3.s64 + 496;
	// addi r9,r11,-496
	ctx.r9.s64 = ctx.r11.s64 + -496;
	// stw r10,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r10.u32);
	// stw r9,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r9.u32);
	// stw r3,-12(r27)
	PPC_STORE_U32(ctx.r27.u32 + -12, ctx.r3.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x820FE738;
	sub_8233E4E0(ctx, base);
	// b 0x820fe740
	goto loc_820FE740;
loc_820FE73C:
	// stw r9,-12(r27)
	PPC_STORE_U32(ctx.r27.u32 + -12, ctx.r9.u32);
loc_820FE740:
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe7d4
	if (ctx.cr6.eq) goto loc_820FE7D4;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe7d4
	if (ctx.cr6.eq) goto loc_820FE7D4;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x820fe78c
	if (!ctx.cr6.lt) goto loc_820FE78C;
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// bge cr6,0x820fe778
	if (!ctx.cr6.lt) goto loc_820FE778;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
loc_820FE778:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x820FE784;
	sub_82080478(ctx, base);
	// stw r3,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r3.u32);
	// stw r29,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r29.u32);
loc_820FE78C:
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r8,r10,-16
	ctx.r8.s64 = ctx.r10.s64 + -16;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r8,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r8.u32);
	// stw r9,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r9.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// lwz r7,360(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 360);
	// lwzx r6,r7,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x820fe7dc
	goto loc_820FE7DC;
loc_820FE7D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_820FE7DC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fe810
	if (ctx.cr6.eq) goto loc_820FE810;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm r10,r11,0,21,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r10,0,26,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFC3F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe814
	if (ctx.cr6.eq) goto loc_820FE814;
loc_820FE810:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE814:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fe838
	if (!ctx.cr6.eq) goto loc_820FE838;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// b 0x820fe838
	goto loc_820FE838;
loc_820FE830:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r15,r19
	PPC_STORE_U8(ctx.r15.u32 + ctx.r19.u32, ctx.r11.u8);
loc_820FE838:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x820fe3f0
	if (!ctx.cr6.eq) goto loc_820FE3F0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fe8b4
	if (!ctx.cr6.eq) goto loc_820FE8B4;
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r25,-13569
	ctx.r25.s64 = -889257984;
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_820FE858:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x820fe8a0
	if (ctx.cr6.eq) goto loc_820FE8A0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// ble cr6,0x820fe878
	if (!ctx.cr6.gt) goto loc_820FE878;
	// stw r9,-13570(r25)
	PPC_STORE_U32(ctx.r25.u32 + -13570, ctx.r9.u32);
loc_820FE878:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x820fe894
	if (ctx.cr6.eq) goto loc_820FE894;
	// stw r9,-13570(r25)
	PPC_STORE_U32(ctx.r25.u32 + -13570, ctx.r9.u32);
loc_820FE894:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_820FE8A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa80
	ctx.lr = 0x820FE8B0;
	__restfpr_27(ctx, base);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_820FE8B4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// lwz r27,676(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,636(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820fd7d0
	ctx.lr = 0x820FE8E4;
	sub_820FD7D0(ctx, base);
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lhz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820fe948
	if (ctx.cr6.eq) goto loc_820FE948;
	// rlwinm r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe948
	if (ctx.cr6.eq) goto loc_820FE948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820fe948
	if (ctx.cr6.eq) goto loc_820FE948;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820FE910:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820fea90
	ctx.lr = 0x820FE938;
	sub_820FEA90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x820fe910
	if (ctx.cr6.lt) goto loc_820FE910;
loc_820FE948:
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe9ac
	if (ctx.cr6.eq) goto loc_820FE9AC;
	// rlwinm r10,r27,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe9ac
	if (ctx.cr6.eq) goto loc_820FE9AC;
	// lhz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x820fe9ac
	if (!ctx.cr6.lt) goto loc_820FE9AC;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_820FE974:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820fea90
	ctx.lr = 0x820FE99C;
	sub_820FEA90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x820fe974
	if (ctx.cr6.lt) goto loc_820FE974;
loc_820FE9AC:
	// lhz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fea1c
	if (ctx.cr6.eq) goto loc_820FEA1C;
	// rlwinm r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fea1c
	if (ctx.cr6.eq) goto loc_820FEA1C;
	// lhz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x820fea1c
	if (!ctx.cr6.lt) goto loc_820FEA1C;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_820FE9E4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820fea90
	ctx.lr = 0x820FEA0C;
	sub_820FEA90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x820fe9e4
	if (ctx.cr6.lt) goto loc_820FE9E4;
loc_820FEA1C:
	// stw r27,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r27.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x820fea78
	if (ctx.cr6.eq) goto loc_820FEA78;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820fea4c
	if (!ctx.cr6.gt) goto loc_820FEA4C;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820FEA4C:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x820fea6c
	if (ctx.cr6.eq) goto loc_820FEA6C;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820FEA6C:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_820FEA78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa80
	ctx.lr = 0x820FEA88;
	__restfpr_27(ctx, base);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FEA8C"))) PPC_WEAK_FUNC(sub_820FEA8C);
PPC_FUNC_IMPL(__imp__sub_820FEA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FEA90"))) PPC_WEAK_FUNC(sub_820FEA90);
PPC_FUNC_IMPL(__imp__sub_820FEA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820FEA98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fead0
	if (ctx.cr6.eq) goto loc_820FEAD0;
	// lhz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
loc_820FEAD0:
	// lbzx r11,r28,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fecf8
	if (!ctx.cr6.eq) goto loc_820FECF8;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// rlwinm r31,r11,28,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820feaf8
	if (ctx.cr6.eq) goto loc_820FEAF8;
	// rlwinm r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fecf8
	if (ctx.cr6.eq) goto loc_820FECF8;
loc_820FEAF8:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82087010
	ctx.lr = 0x820FEB04;
	sub_82087010(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x820feb2c
	if (ctx.cr6.eq) goto loc_820FEB2C;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r7,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r7.u8);
	// b 0x820feb30
	goto loc_820FEB30;
loc_820FEB2C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_820FEB30:
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r31,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r31.u8);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r10,300(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820feb60
	if (ctx.cr6.eq) goto loc_820FEB60;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x820feb64
	if (!ctx.cr6.eq) goto loc_820FEB64;
loc_820FEB60:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_820FEB64:
	// lwz r8,32(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// subfic r4,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r8.s64;
	// stb r5,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r5.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// beq cr6,0x820feba0
	if (ctx.cr6.eq) goto loc_820FEBA0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// b 0x820febac
	goto loc_820FEBAC;
loc_820FEBA0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820febac
	if (ctx.cr6.eq) goto loc_820FEBAC;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_820FEBAC:
	// lwz r10,312(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820febcc
	if (ctx.cr6.eq) goto loc_820FEBCC;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x820febd0
	if (!ctx.cr6.eq) goto loc_820FEBD0;
loc_820FEBCC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_820FEBD0:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mulli r10,r28,284
	ctx.r10.s64 = ctx.r28.s64 * 284;
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820fec7c
	if (ctx.cr6.eq) goto loc_820FEC7C;
	// addi r10,r9,7
	ctx.r10.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fec18
	if (!ctx.cr6.eq) goto loc_820FEC18;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// beq cr6,0x820fec1c
	if (ctx.cr6.eq) goto loc_820FEC1C;
loc_820FEC18:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_820FEC1C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fec34
	if (ctx.cr6.eq) goto loc_820FEC34;
	// lwz r9,276(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 276);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 276, ctx.r9.u32);
loc_820FEC34:
	// stb r6,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r6.u8);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fec60
	if (ctx.cr6.eq) goto loc_820FEC60;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// stw r11,280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 280, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820FEC60:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// stw r11,280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 280, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820FEC7C:
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fecac
	if (!ctx.cr6.eq) goto loc_820FECAC;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// beq cr6,0x820fecb0
	if (ctx.cr6.eq) goto loc_820FECB0;
loc_820FECAC:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_820FECB0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fecc8
	if (ctx.cr6.eq) goto loc_820FECC8;
	// lwz r9,276(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 276);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 276, ctx.r9.u32);
loc_820FECC8:
	// stb r6,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r6.u8);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fecec
	if (ctx.cr6.eq) goto loc_820FECEC;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820FECEC:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_820FECF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FED00"))) PPC_WEAK_FUNC(sub_820FED00);
PPC_FUNC_IMPL(__imp__sub_820FED00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820FED08;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,340(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r4.u32);
	// li r4,328
	ctx.r4.s64 = 328;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r7,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r7.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r18,48(r22)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x82087010
	ctx.lr = 0x820FED40;
	sub_82087010(ctx, base);
	// li r5,328
	ctx.r5.s64 = 328;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x820FED50;
	sub_8233EAF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r9,268(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 268);
	// li r15,-1
	ctx.r15.s64 = -1;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r15,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r15.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lfs f31,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,208(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lwz r8,644(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// lwz r7,300(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// rlwinm r6,r7,0,20,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820fee60
	if (ctx.cr6.eq) goto loc_820FEE60;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82087010
	ctx.lr = 0x820FEDB4;
	sub_82087010(ctx, base);
	// stw r3,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r3.u32);
	// lwz r10,704(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 704);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,708(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 708);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,712(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 712);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r7,716(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 716);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r6,720(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 720);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r5,724(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 724);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r4,728(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 728);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r3,732(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 732);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// lwz r10,736(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 736);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r9,740(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 740);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,744(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 744);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,748(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 748);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r6,752(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 752);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// lwz r5,756(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 756);
	// stw r5,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// lwz r4,760(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 760);
	// stw r4,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r3,764(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 764);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r10,768(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 768);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r9,772(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 772);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
loc_820FEE60:
	// addi r30,r27,32
	ctx.r30.s64 = ctx.r27.s64 + 32;
	// addi r28,r31,92
	ctx.r28.s64 = ctx.r31.s64 + 92;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820FEE78;
	sub_8233E4E0(ctx, base);
	// mulli r11,r24,108
	ctx.r11.s64 = ctx.r24.s64 * 108;
	// lwz r10,300(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// addi r17,r11,212
	ctx.r17.s64 = ctx.r11.s64 + 212;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r26,224(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// beq cr6,0x820fee9c
	if (ctx.cr6.eq) goto loc_820FEE9C;
	// oris r26,r26,112
	ctx.r26.u64 = ctx.r26.u64 | 7340032;
loc_820FEE9C:
	// rlwinm r11,r26,0,9,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x700000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fef08
	if (ctx.cr6.eq) goto loc_820FEF08;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820FEEB8;
	sub_8233E4E0(ctx, base);
	// lwz r4,160(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820feef0
	if (ctx.cr6.eq) goto loc_820FEEF0;
	// lwz r5,132(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820feee0
	if (ctx.cr6.eq) goto loc_820FEEE0;
	// bl 0x822578d8
	ctx.lr = 0x820FEED8;
	sub_822578D8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// b 0x820feef4
	goto loc_820FEEF4;
loc_820FEEE0:
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820FEEE8;
	sub_8233E4E0(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// b 0x820feef4
	goto loc_820FEEF4;
loc_820FEEF0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_820FEEF4:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r5,r23,24
	ctx.r5.s64 = ctx.r23.s64 + 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82306a50
	ctx.lr = 0x820FEF08;
	sub_82306A50(ctx, base);
loc_820FEF08:
	// lwz r11,488(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 488);
	// li r16,1
	ctx.r16.s64 = 1;
	// lhz r10,152(r18)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r18.u32 + 152);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x820fef38
	if (ctx.cr6.eq) goto loc_820FEF38;
	// lwz r10,300(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// rlwinm r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fef3c
	if (ctx.cr6.eq) goto loc_820FEF3C;
loc_820FEF38:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_820FEF3C:
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// stw r29,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r29.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r29.u32);
	// stw r29,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r29.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r29,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r29.u32);
	// stw r29,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r29.u32);
	// stw r29,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r29.u32);
	// bne cr6,0x820fef6c
	if (!ctx.cr6.eq) goto loc_820FEF6C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff034
	if (ctx.cr6.eq) goto loc_820FF034;
loc_820FEF6C:
	// lwz r11,300(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fef84
	if (ctx.cr6.eq) goto loc_820FEF84;
	// lwz r30,328(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 328);
	// b 0x820fef88
	goto loc_820FEF88;
loc_820FEF84:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_820FEF88:
	// addi r26,r27,664
	ctx.r26.s64 = ctx.r27.s64 + 664;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823052d8
	ctx.lr = 0x820FEF98;
	sub_823052D8(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fefe0
	if (ctx.cr6.eq) goto loc_820FEFE0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fd098
	ctx.lr = 0x820FEFB8;
	sub_820FD098(ctx, base);
	// lwz r10,780(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 780);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
	// lwz r8,784(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r7,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r7.u32);
	// lwz r6,788(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r5,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r5.u32);
loc_820FEFE0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820ff02c
	if (ctx.cr6.eq) goto loc_820FF02C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fd120
	ctx.lr = 0x820FEFFC;
	sub_820FD120(ctx, base);
	// lwz r10,792(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
	// lwz r8,796(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r7,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r7.u32);
	// lwz r6,804(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 804);
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r5,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r5.u32);
	// lfs f0,308(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
loc_820FF02C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823051a8
	ctx.lr = 0x820FF034;
	sub_823051A8(ctx, base);
loc_820FF034:
	// stb r16,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r16.u8);
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r22,12(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// lwz r30,108(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 108);
	// bl 0x82388734
	ctx.lr = 0x820FF05C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ff068
	if (!ctx.cr6.eq) goto loc_820FF068;
	// bl 0x821b3000
	ctx.lr = 0x820FF068;
	sub_821B3000(ctx, base);
loc_820FF068:
	// addi r10,r30,15
	ctx.r10.s64 = ctx.r30.s64 + 15;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r14,r3,20
	ctx.r14.s64 = ctx.r3.s64 + 20;
	// rlwinm r21,r10,0,0,27
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820ff09c
	if (!ctx.cr6.gt) goto loc_820FF09C;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4492
	ctx.r9.s64 = ctx.r10.s64 + 4492;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820FF09C:
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lis r9,230
	ctx.r9.s64 = 15073280;
	// lwz r10,8(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// add r7,r11,r21
	ctx.r7.u64 = ctx.r11.u64 + ctx.r21.u64;
	// ori r8,r9,49844
	ctx.r8.u64 = ctx.r9.u64 | 49844;
	// add r19,r11,r10
	ctx.r19.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r7.u32);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// mulli r11,r30,284
	ctx.r11.s64 = ctx.r30.s64 * 284;
	// ble cr6,0x820ff0cc
	if (!ctx.cr6.gt) goto loc_820FF0CC;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_820FF0CC:
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r28,r11,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x820ff104
	if (!ctx.cr6.lt) goto loc_820FF104;
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x820ff0f0
	if (!ctx.cr6.lt) goto loc_820FF0F0;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
loc_820FF0F0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x820FF0FC;
	sub_82080478(ctx, base);
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// stw r26,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r26.u32);
loc_820FF104:
	// lwz r24,4(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r10,r24,r28
	ctx.r10.u64 = ctx.r24.u64 + ctx.r28.u64;
	// subf r9,r28,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// beq cr6,0x820ff148
	if (ctx.cr6.eq) goto loc_820FF148;
	// addic. r28,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r28.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// blt 0x820ff14c
	if (ctx.cr0.lt) goto loc_820FF14C;
loc_820FF130:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821007e8
	ctx.lr = 0x820FF138;
	sub_821007E8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r26,r26,284
	ctx.r26.s64 = ctx.r26.s64 + 284;
	// bge 0x820ff130
	if (!ctx.cr0.lt) goto loc_820FF130;
	// b 0x820ff14c
	goto loc_820FF14C;
loc_820FF148:
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
loc_820FF14C:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ff274
	if (ctx.cr6.eq) goto loc_820FF274;
	// mulli r11,r30,284
	ctx.r11.s64 = ctx.r30.s64 * 284;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mulli r23,r30,960
	ctx.r23.s64 = ctx.r30.s64 * 960;
	// add r22,r10,r22
	ctx.r22.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r30,r11,276
	ctx.r30.s64 = ctx.r11.s64 + 276;
loc_820FF170:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lwz r11,84(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 84);
	// addi r23,r23,-960
	ctx.r23.s64 = ctx.r23.s64 + -960;
	// addi r30,r30,-284
	ctx.r30.s64 = ctx.r30.s64 + -284;
	// add r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 + ctx.r11.u64;
	// stbx r29,r19,r26
	PPC_STORE_U8(ctx.r19.u32 + ctx.r26.u32, ctx.r29.u8);
	// lwzu r11,-4(r22)
	ea = -4 + ctx.r22.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r22.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff1a4
	if (ctx.cr6.eq) goto loc_820FF1A4;
	// lbz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rlwinm r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ff1b4
	if (ctx.cr6.eq) goto loc_820FF1B4;
loc_820FF1A4:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ff1bc
	if (ctx.cr6.eq) goto loc_820FF1BC;
loc_820FF1B4:
	// stbx r16,r19,r26
	PPC_STORE_U8(ctx.r19.u32 + ctx.r26.u32, ctx.r16.u8);
	// b 0x820ff264
	goto loc_820FF264;
loc_820FF1BC:
	// stw r29,-256(r30)
	PPC_STORE_U32(ctx.r30.u32 + -256, ctx.r29.u32);
	// stw r29,-252(r30)
	PPC_STORE_U32(ctx.r30.u32 + -252, ctx.r29.u32);
	// stw r10,-264(r30)
	PPC_STORE_U32(ctx.r30.u32 + -264, ctx.r10.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stb r29,-248(r30)
	PPC_STORE_U8(ctx.r30.u32 + -248, ctx.r29.u8);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff254
	if (ctx.cr6.eq) goto loc_820FF254;
	// lwz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x820ff254
	if (ctx.cr6.eq) goto loc_820FF254;
	// lwz r11,488(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 488);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ff254
	if (ctx.cr6.eq) goto loc_820FF254;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,496
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 496, ctx.xer);
	// bge cr6,0x820ff228
	if (!ctx.cr6.lt) goto loc_820FF228;
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r28,496
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 496, ctx.xer);
	// bge cr6,0x820ff214
	if (!ctx.cr6.lt) goto loc_820FF214;
	// addi r28,r28,496
	ctx.r28.s64 = ctx.r28.s64 + 496;
loc_820FF214:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x820FF220;
	sub_82080478(ctx, base);
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// stw r28,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r28.u32);
loc_820FF228:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r21,4
	ctx.r4.s64 = ctx.r21.s64 + 4;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r5,484
	ctx.r5.s64 = 484;
	// addi r10,r3,496
	ctx.r10.s64 = ctx.r3.s64 + 496;
	// addi r9,r11,-496
	ctx.r9.s64 = ctx.r11.s64 + -496;
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// stw r3,-260(r30)
	PPC_STORE_U32(ctx.r30.u32 + -260, ctx.r3.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x820FF250;
	sub_8233E4E0(ctx, base);
	// b 0x820ff258
	goto loc_820FF258;
loc_820FF254:
	// stw r29,-260(r30)
	PPC_STORE_U32(ctx.r30.u32 + -260, ctx.r29.u32);
loc_820FF258:
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// stw r29,-244(r30)
	PPC_STORE_U32(ctx.r30.u32 + -244, ctx.r29.u32);
loc_820FF264:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x820ff170
	if (!ctx.cr6.eq) goto loc_820FF170;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x820ff2d4
	if (!ctx.cr6.eq) goto loc_820FF2D4;
loc_820FF274:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x820ff2c4
	if (ctx.cr6.eq) goto loc_820FF2C4;
	// lwz r10,4(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplw cr6,r21,r10
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r10.u32, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// ble cr6,0x820ff298
	if (!ctx.cr6.gt) goto loc_820FF298;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820FF298:
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r10,8(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x820ff2b8
	if (ctx.cr6.eq) goto loc_820FF2B8;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820FF2B8:
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// subf r10,r21,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r21.s64;
	// stw r10,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r10.u32);
loc_820FF2C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_820FF2D4:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x820ff304
	if (!ctx.cr6.lt) goto loc_820FF304;
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// bge cr6,0x820ff2f0
	if (!ctx.cr6.lt) goto loc_820FF2F0;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
loc_820FF2F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x820FF2FC;
	sub_82080478(ctx, base);
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// stw r30,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r30.u32);
loc_820FF304:
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// beq cr6,0x820ff338
	if (ctx.cr6.eq) goto loc_820FF338;
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stb r29,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r29.u8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x820ff33c
	goto loc_820FF33C;
loc_820FF338:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_820FF33C:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820ff354
	if (!ctx.cr6.gt) goto loc_820FF354;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_820FF354:
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r28,r11,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x820ff38c
	if (!ctx.cr6.lt) goto loc_820FF38C;
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x820ff378
	if (!ctx.cr6.lt) goto loc_820FF378;
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
loc_820FF378:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x820FF384;
	sub_82080478(ctx, base);
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// stw r26,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r26.u32);
loc_820FF38C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r7,r28,r11
	ctx.r7.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r6,412(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// subf r5,r28,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r28.s64;
	// stw r7,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r7.u32);
	// addi r10,r6,72
	ctx.r10.s64 = ctx.r6.s64 + 72;
	// stw r5,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r5.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r20,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r20.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// stb r16,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r16.u8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ff3dc
	if (ctx.cr6.eq) goto loc_820FF3DC;
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// b 0x820ff3e4
	goto loc_820FF3E4;
loc_820FF3DC:
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
loc_820FF3E4:
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820FF3F8:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820ff40c
	if (!ctx.cr6.eq) goto loc_820FF40C;
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
	// stwu r11,-4(r9)
	ea = -4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
loc_820FF40C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x820ff3f8
	if (!ctx.cr6.eq) goto loc_820FF3F8;
	// lhz r28,0(r17)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// lwz r26,436(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820ff478
	if (ctx.cr6.eq) goto loc_820FF478;
	// rlwinm r11,r26,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff478
	if (ctx.cr6.eq) goto loc_820FF478;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820ff478
	if (ctx.cr6.eq) goto loc_820FF478;
loc_820FF444:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x820ff5a8
	ctx.lr = 0x820FF468;
	sub_820FF5A8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x820ff444
	if (ctx.cr6.lt) goto loc_820FF444;
loc_820FF478:
	// lhz r11,2(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff4d8
	if (ctx.cr6.eq) goto loc_820FF4D8;
	// rlwinm r10,r26,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ff4d8
	if (ctx.cr6.eq) goto loc_820FF4D8;
	// lhz r30,0(r17)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x820ff4d8
	if (!ctx.cr6.lt) goto loc_820FF4D8;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_820FF4A4:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x820ff5a8
	ctx.lr = 0x820FF4C8;
	sub_820FF5A8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x820ff4a4
	if (ctx.cr6.lt) goto loc_820FF4A4;
loc_820FF4D8:
	// lhz r9,4(r17)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r17.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ff544
	if (ctx.cr6.eq) goto loc_820FF544;
	// rlwinm r11,r26,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff544
	if (ctx.cr6.eq) goto loc_820FF544;
	// lhz r10,2(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 2);
	// lhz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x820ff544
	if (!ctx.cr6.lt) goto loc_820FF544;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_820FF510:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x820ff5a8
	ctx.lr = 0x820FF534;
	sub_820FF5A8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x820ff510
	if (ctx.cr6.lt) goto loc_820FF510;
loc_820FF544:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x820ff594
	if (ctx.cr6.eq) goto loc_820FF594;
	// lwz r10,4(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplw cr6,r21,r10
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r10.u32, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// ble cr6,0x820ff568
	if (!ctx.cr6.gt) goto loc_820FF568;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820FF568:
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r10,8(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x820ff588
	if (ctx.cr6.eq) goto loc_820FF588;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820FF588:
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// subf r10,r21,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r21.s64;
	// stw r10,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r10.u32);
loc_820FF594:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FF5A4"))) PPC_WEAK_FUNC(sub_820FF5A4);
PPC_FUNC_IMPL(__imp__sub_820FF5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FF5A8"))) PPC_WEAK_FUNC(sub_820FF5A8);
PPC_FUNC_IMPL(__imp__sub_820FF5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820FF5B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff5e8
	if (ctx.cr6.eq) goto loc_820FF5E8;
	// lhz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
loc_820FF5E8:
	// lbzx r11,r28,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ff760
	if (!ctx.cr6.eq) goto loc_820FF760;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82087010
	ctx.lr = 0x820FF600;
	sub_82087010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x820ff628
	if (ctx.cr6.eq) goto loc_820FF628;
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r7,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r7.u8);
	// b 0x820ff62c
	goto loc_820FF62C;
loc_820FF628:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_820FF62C:
	// stw r31,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r31.u32);
	// stw r29,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r29.u32);
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff654
	if (ctx.cr6.eq) goto loc_820FF654;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x820ff658
	if (!ctx.cr6.eq) goto loc_820FF658;
loc_820FF654:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_820FF658:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// subfic r6,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r6.s64 = 1 - ctx.r9.s64;
	// stb r10,20(r8)
	PPC_STORE_U8(ctx.r8.u32 + 20, ctx.r10.u8);
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// beq cr6,0x820ff690
	if (ctx.cr6.eq) goto loc_820FF690;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x820ff694
	if (!ctx.cr6.eq) goto loc_820FF694;
loc_820FF690:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_820FF694:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,21(r8)
	PPC_STORE_U8(ctx.r8.u32 + 21, ctx.r11.u8);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ff6c0
	if (ctx.cr6.eq) goto loc_820FF6C0;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x820ff6d0
	goto loc_820FF6D0;
loc_820FF6C0:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ff6d0
	if (ctx.cr6.eq) goto loc_820FF6D0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FF6D0:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mulli r9,r28,284
	ctx.r9.s64 = ctx.r28.s64 * 284;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwzx r6,r11,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820ff708
	if (!ctx.cr6.eq) goto loc_820FF708;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x820ff70c
	if (ctx.cr6.eq) goto loc_820FF70C;
loc_820FF708:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_820FF70C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff72c
	if (ctx.cr6.eq) goto loc_820FF72C;
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + ctx.r27.u64;
	// addi r9,r11,276
	ctx.r9.s64 = ctx.r11.s64 + 276;
	// lwz r9,276(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r9.u32);
loc_820FF72C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stb r11,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r11.u8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff754
	if (ctx.cr6.eq) goto loc_820FF754;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820FF754:
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_820FF760:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FF768"))) PPC_WEAK_FUNC(sub_820FF768);
PPC_FUNC_IMPL(__imp__sub_820FF768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x820FF770;
	__savegprlr_17(ctx, base);
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r22,324(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r26,48(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// bl 0x82100728
	ctx.lr = 0x820FF7B4;
	sub_82100728(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ff7d8
	if (!ctx.cr6.eq) goto loc_820FF7D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
loc_820FF7D8:
	// addi r30,r28,664
	ctx.r30.s64 = ctx.r28.s64 + 664;
	// li r17,-1
	ctx.r17.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x823052d8
	ctx.lr = 0x820FF7EC;
	sub_823052D8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820fd660
	ctx.lr = 0x820FF7FC;
	sub_820FD660(ctx, base);
	// rlwinm r10,r22,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x20000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r25,r11,31376
	ctx.r25.s64 = ctx.r11.s64 + 31376;
	// beq cr6,0x820ff834
	if (ctx.cr6.eq) goto loc_820FF834;
	// lfs f0,36(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,524(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 524, temp.u32);
	// stfs f0,528(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 528, temp.u32);
	// stfs f0,532(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 532, temp.u32);
	// stfs f0,536(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 536, temp.u32);
	// stw r31,776(r28)
	PPC_STORE_U32(ctx.r28.u32 + 776, ctx.r31.u32);
	// stw r31,616(r28)
	PPC_STORE_U32(ctx.r28.u32 + 616, ctx.r31.u32);
	// b 0x820ff840
	goto loc_820FF840;
loc_820FF834:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820fd580
	ctx.lr = 0x820FF840;
	sub_820FD580(ctx, base);
loc_820FF840:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x820FF848;
	sub_823051A8(ctx, base);
	// cmplwi cr6,r18,15
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 15, ctx.xer);
	// bne cr6,0x820ff858
	if (!ctx.cr6.eq) goto loc_820FF858;
	// lwz r11,148(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// addi r18,r11,-1
	ctx.r18.s64 = ctx.r11.s64 + -1;
loc_820FF858:
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82087010
	ctx.lr = 0x820FF864;
	sub_82087010(ctx, base);
	// li r27,42
	ctx.r27.s64 = 42;
	// li r30,6
	ctx.r30.s64 = 6;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ff8e0
	if (ctx.cr6.eq) goto loc_820FF8E0;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r31.u8);
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
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
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// stb r31,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r31.u8);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stw r31,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r31.u32);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// stb r31,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r31.u8);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r31.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// stw r26,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r26.u32);
	// b 0x820ff8e4
	goto loc_820FF8E4;
loc_820FF8E0:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_820FF8E4:
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r18,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r18.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stb r19,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r19.u8);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff908
	if (ctx.cr6.eq) goto loc_820FF908;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x820ff910
	goto loc_820FF910;
loc_820FF908:
	// stw r29,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r29.u32);
	// stw r29,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r29.u32);
loc_820FF910:
	// stw r29,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820ff9d8
	if (ctx.cr6.eq) goto loc_820FF9D8;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82087010
	ctx.lr = 0x820FF928;
	sub_82087010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ff99c
	if (ctx.cr6.eq) goto loc_820FF99C;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r31.u8);
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
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
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// stb r31,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r31.u8);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stw r31,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r31.u32);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// stb r31,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r31.u8);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r31.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// stw r26,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r26.u32);
	// b 0x820ff9a0
	goto loc_820FF9A0;
loc_820FF99C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_820FF9A0:
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820FF9B0;
	sub_8233E4E0(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stb r19,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r19.u8);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff9cc
	if (ctx.cr6.eq) goto loc_820FF9CC;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// b 0x820ff9d4
	goto loc_820FF9D4;
loc_820FF9CC:
	// stw r30,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r30.u32);
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
loc_820FF9D4:
	// stw r30,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r30.u32);
loc_820FF9D8:
	// rlwinm r11,r22,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x200;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x820ffa04
	if (ctx.cr6.eq) goto loc_820FFA04;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// rlwinm r7,r22,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x820fed00
	ctx.lr = 0x820FFA00;
	sub_820FED00(ctx, base);
	// b 0x820ffa18
	goto loc_820FFA18;
loc_820FFA04:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// rlwinm r9,r22,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFE;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820fdc90
	ctx.lr = 0x820FFA18;
	sub_820FDC90(ctx, base);
loc_820FFA18:
	// clrlwi r11,r22,31
	ctx.r11.u64 = ctx.r22.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ffc70
	if (ctx.cr6.eq) goto loc_820FFC70;
	// lwz r28,224(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820ffc70
	if (ctx.cr6.eq) goto loc_820FFC70;
	// lfs f29,48(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// li r27,66
	ctx.r27.s64 = 66;
loc_820FFA38:
	// lwz r11,280(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x820ffaac
	if (!ctx.cr6.eq) goto loc_820FFAAC;
	// lwz r11,340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// rlwinm r10,r22,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// beq cr6,0x820ffa60
	if (ctx.cr6.eq) goto loc_820FFA60;
	// lbz r8,193(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 193);
loc_820FFA60:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ffa78
	if (ctx.cr6.eq) goto loc_820FFA78;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820ffa78
	if (ctx.cr6.lt) goto loc_820FFA78;
	// li r8,15
	ctx.r8.s64 = 15;
loc_820FFA78:
	// lwz r11,288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ffc64
	if (ctx.cr6.eq) goto loc_820FFC64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ff768
	ctx.lr = 0x820FFAA8;
	sub_820FF768(ctx, base);
	// b 0x820ffc64
	goto loc_820FFC64;
loc_820FFAAC:
	// rlwinm r10,r22,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ffc64
	if (ctx.cr6.eq) goto loc_820FFC64;
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// bne cr6,0x820ffc64
	if (!ctx.cr6.eq) goto loc_820FFC64;
	// li r4,3564
	ctx.r4.s64 = 3564;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82087010
	ctx.lr = 0x820FFACC;
	sub_82087010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ffb44
	if (ctx.cr6.eq) goto loc_820FFB44;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r11,r3,3464
	ctx.r11.s64 = ctx.r3.s64 + 3464;
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stb r31,3368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3368, ctx.r31.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r31,2744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2744, ctx.r31.u32);
	// stw r31,2748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2748, ctx.r31.u32);
loc_820FFB04:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820ffb04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FFB04;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,3496
	ctx.r11.s64 = ctx.r3.s64 + 3496;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FFB1C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820ffb1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FFB1C;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,3528
	ctx.r11.s64 = ctx.r3.s64 + 3528;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FFB34:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820ffb34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FFB34;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x820ffb48
	goto loc_820FFB48;
loc_820FFB44:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_820FFB48:
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82101540
	ctx.lr = 0x820FFB68;
	sub_82101540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ffc64
	if (ctx.cr6.eq) goto loc_820FFC64;
	// stb r19,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r19.u8);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ffb90
	if (ctx.cr6.eq) goto loc_820FFB90;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x820ffb98
	goto loc_820FFB98;
loc_820FFB90:
	// stw r29,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r29.u32);
	// stw r29,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r29.u32);
loc_820FFB98:
	// stw r29,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820ffc64
	if (ctx.cr6.eq) goto loc_820FFC64;
	// li r4,3564
	ctx.r4.s64 = 3564;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82087010
	ctx.lr = 0x820FFBB0;
	sub_82087010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ffc28
	if (ctx.cr6.eq) goto loc_820FFC28;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r11,r3,3464
	ctx.r11.s64 = ctx.r3.s64 + 3464;
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stb r31,3368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3368, ctx.r31.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r31,2744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2744, ctx.r31.u32);
	// stw r31,2748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2748, ctx.r31.u32);
loc_820FFBE8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820ffbe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FFBE8;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,3496
	ctx.r11.s64 = ctx.r3.s64 + 3496;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FFC00:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820ffc00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FFC00;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,3528
	ctx.r11.s64 = ctx.r3.s64 + 3528;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FFC18:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820ffc18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FFC18;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820ffc2c
	goto loc_820FFC2C;
loc_820FFC28:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_820FFC2C:
	// li r5,3564
	ctx.r5.s64 = 3564;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820FFC3C;
	sub_8233E4E0(ctx, base);
	// stb r19,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r19.u8);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ffc58
	if (ctx.cr6.eq) goto loc_820FFC58;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// b 0x820ffc60
	goto loc_820FFC60;
loc_820FFC58:
	// stw r30,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r30.u32);
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
loc_820FFC60:
	// stw r30,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r30.u32);
loc_820FFC64:
	// lwz r28,232(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820ffa38
	if (!ctx.cr6.eq) goto loc_820FFA38;
loc_820FFC70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FFC88"))) PPC_WEAK_FUNC(sub_820FFC88);
PPC_FUNC_IMPL(__imp__sub_820FFC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820FFC90;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r4,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r4.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r8.u32);
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lwz r18,48(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x82100728
	ctx.lr = 0x820FFCCC;
	sub_82100728(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ffcec
	if (!ctx.cr6.eq) goto loc_820FFCEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_820FFCEC:
	// addi r31,r29,664
	ctx.r31.s64 = ctx.r29.s64 + 664;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823052d8
	ctx.lr = 0x820FFCFC;
	sub_823052D8(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fd660
	ctx.lr = 0x820FFD0C;
	sub_820FD660(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r10,r23,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x20000;
	// addi r28,r11,31376
	ctx.r28.s64 = ctx.r11.s64 + 31376;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,36(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x820ffd44
	if (ctx.cr6.eq) goto loc_820FFD44;
	// stfs f30,524(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 524, temp.u32);
	// stfs f30,528(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 528, temp.u32);
	// stfs f30,532(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 532, temp.u32);
	// stfs f30,536(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 536, temp.u32);
	// stw r22,776(r29)
	PPC_STORE_U32(ctx.r29.u32 + 776, ctx.r22.u32);
	// stw r22,616(r29)
	PPC_STORE_U32(ctx.r29.u32 + 616, ctx.r22.u32);
	// b 0x820ffd50
	goto loc_820FFD50;
loc_820FFD44:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fd580
	ctx.lr = 0x820FFD50;
	sub_820FD580(ctx, base);
loc_820FFD50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823051a8
	ctx.lr = 0x820FFD58;
	sub_823051A8(ctx, base);
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// bne cr6,0x820ffd68
	if (!ctx.cr6.eq) goto loc_820FFD68;
	// lwz r11,148(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 148);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_820FFD68:
	// mulli r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 * 108;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r20,r11,212
	ctx.r20.s64 = ctx.r11.s64 + 212;
	// lhz r9,216(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// lhz r11,214(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 214);
	// lhz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r20.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82100108
	if (ctx.cr0.eq) goto loc_82100108;
	// lfs f31,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// li r15,32
	ctx.r15.s64 = 32;
	// li r17,1
	ctx.r17.s64 = 1;
loc_820FFDA0:
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r10,340(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// lwzx r25,r11,r19
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ffdc8
	if (ctx.cr6.eq) goto loc_820FFDC8;
	// lhz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
loc_820FFDC8:
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,84(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 84);
	// mulli r11,r11,960
	ctx.r11.s64 = ctx.r11.s64 * 960;
	// lwzx r27,r24,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820ffdf4
	if (ctx.cr6.eq) goto loc_820FFDF4;
	// lbz r11,6(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821000f8
	if (ctx.cr6.eq) goto loc_821000F8;
loc_820FFDF4:
	// rlwinm r23,r23,0,29,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820ffe10
	if (ctx.cr6.eq) goto loc_820FFE10;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821000f4
	if (!ctx.cr6.eq) goto loc_821000F4;
loc_820FFE10:
	// lwz r11,524(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ffe30
	if (ctx.cr6.eq) goto loc_820FFE30;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821000f4
	if (!ctx.cr6.eq) goto loc_821000F4;
loc_820FFE30:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821000f4
	if (ctx.cr6.eq) goto loc_821000F4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821000f4
	if (ctx.cr6.eq) goto loc_821000F4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821000f4
	if (ctx.cr6.eq) goto loc_821000F4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821000f4
	if (ctx.cr6.eq) goto loc_821000F4;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821000f4
	if (ctx.cr6.eq) goto loc_821000F4;
	// addic. r28,r26,40
	ctx.xer.ca = ctx.r26.u32 > 4294967255;
	ctx.r28.s64 = ctx.r26.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x821000f4
	if (ctx.cr0.eq) goto loc_821000F4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821000f4
	if (ctx.cr6.eq) goto loc_821000F4;
	// li r4,240
	ctx.r4.s64 = 240;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82087010
	ctx.lr = 0x820FFE8C;
	sub_82087010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ffeb4
	if (ctx.cr6.eq) goto loc_820FFEB4;
	// stw r15,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r15.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r22,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r22.u32);
	// stb r22,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r22.u8);
	// stw r22,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r22.u32);
	// stw r22,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r22.u32);
	// stw r22,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r22.u32);
	// b 0x820ffeb8
	goto loc_820FFEB8;
loc_820FFEB4:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_820FFEB8:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// lwz r5,16(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82184418
	ctx.lr = 0x820FFED4;
	sub_82184418(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821000f4
	if (ctx.cr6.eq) goto loc_821000F4;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,12(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r7,48(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fff00
	if (!ctx.cr6.eq) goto loc_820FFF00;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// b 0x820fff18
	goto loc_820FFF18;
loc_820FFF00:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82184b28
	ctx.lr = 0x820FFF14;
	sub_82184B28(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820FFF18:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821000f4
	if (ctx.cr6.eq) goto loc_821000F4;
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// lwz r11,776(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 776);
	// addi r4,r29,544
	ctx.r4.s64 = ctx.r29.s64 + 544;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// lwz r10,524(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 524);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r9,528(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 528);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lwz r8,532(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 532);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// lwz r7,536(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// lwz r6,616(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 616);
	// stw r6,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x820FFF68;
	sub_8233E4E0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fffa8
	if (ctx.cr6.eq) goto loc_820FFFA8;
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fffa8
	if (ctx.cr6.eq) goto loc_820FFFA8;
	// li r4,484
	ctx.r4.s64 = 484;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82087010
	ctx.lr = 0x820FFF90;
	sub_82087010(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,484
	ctx.r5.s64 = 484;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x820FFFA4;
	sub_8233E4E0(ctx, base);
	// b 0x820fffac
	goto loc_820FFFAC;
loc_820FFFA8:
	// stw r22,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r22.u32);
loc_820FFFAC:
	// stw r22,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r22.u32);
	// lwz r11,520(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210000c
	if (ctx.cr6.eq) goto loc_8210000C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8210000c
	if (!ctx.cr6.eq) goto loc_8210000C;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210000c
	if (ctx.cr6.eq) goto loc_8210000C;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82087010
	ctx.lr = 0x820FFFE0;
	sub_82087010(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
loc_8210000C:
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// li r5,64
	ctx.r5.s64 = 64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821000c0
	if (!ctx.cr6.eq) goto loc_821000C0;
	// lwz r10,52(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,644(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82100034;
	sub_8233E4E0(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r29,32
	ctx.r5.s64 = ctx.r29.s64 + 32;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f11,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f10,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f3.f64 = double(temp.f32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f4,136(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x822578d8
	ctx.lr = 0x821000B4;
	sub_822578D8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x821000c4
	goto loc_821000C4;
loc_821000C0:
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
loc_821000C4:
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x8233e4e0
	ctx.lr = 0x821000CC;
	sub_8233E4E0(ctx, base);
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// stb r17,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r17.u8);
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821000e8
	if (ctx.cr6.eq) goto loc_821000E8;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// b 0x821000f0
	goto loc_821000F0;
loc_821000E8:
	// stw r31,8(r14)
	PPC_STORE_U32(ctx.r14.u32 + 8, ctx.r31.u32);
	// stw r31,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r31.u32);
loc_821000F0:
	// stw r31,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r31.u32);
loc_821000F4:
	// lwz r23,524(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
loc_821000F8:
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// bne 0x820ffda0
	if (!ctx.cr0.eq) goto loc_820FFDA0;
	// lwz r27,492(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
loc_82100108:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100160
	if (ctx.cr6.eq) goto loc_82100160;
	// lwz r31,224(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82100160
	if (ctx.cr6.eq) goto loc_82100160;
loc_82100120:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x82100154
	if (!ctx.cr6.eq) goto loc_82100154;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100154
	if (ctx.cr6.eq) goto loc_82100154;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// li r7,15
	ctx.r7.s64 = 15;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ffc88
	ctx.lr = 0x82100154;
	sub_820FFC88(ctx, base);
loc_82100154:
	// lwz r31,232(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82100120
	if (!ctx.cr6.eq) goto loc_82100120;
loc_82100160:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82100174"))) PPC_WEAK_FUNC(sub_82100174);
PPC_FUNC_IMPL(__imp__sub_82100174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82100178"))) PPC_WEAK_FUNC(sub_82100178);
PPC_FUNC_IMPL(__imp__sub_82100178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x82100180;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r19,48(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,108(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821003ac
	if (ctx.cr6.eq) goto loc_821003AC;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r25,r11,-7224
	ctx.r25.s64 = ctx.r11.s64 + -7224;
	// addi r29,r10,20000
	ctx.r29.s64 = ctx.r10.s64 + 20000;
loc_821001BC:
	// lwz r11,84(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 84);
	// add r30,r23,r11
	ctx.r30.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210039c
	if (ctx.cr6.eq) goto loc_8210039C;
	// lwz r11,360(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// ble cr6,0x8210039c
	if (!ctx.cr6.gt) goto loc_8210039C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// addi r27,r30,265
	ctx.r27.s64 = ctx.r30.s64 + 265;
loc_821001F4:
	// lhz r11,-5(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + -5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82100384
	if (ctx.cr6.eq) goto loc_82100384;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82100384
	if (ctx.cr6.eq) goto loc_82100384;
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82100384
	if (!ctx.cr6.lt) goto loc_82100384;
	// addi r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 10;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821002e0
	if (!ctx.cr6.eq) goto loc_821002E0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82100384
	if (!ctx.cr6.eq) goto loc_82100384;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821002e0
	if (!ctx.cr6.eq) goto loc_821002E0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821002e0
	if (!ctx.cr6.eq) goto loc_821002E0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,1980
	ctx.r9.u64 = ctx.r10.u64 | 1980;
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821002c0
	if (ctx.cr6.eq) goto loc_821002C0;
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// addi r10,r10,1984
	ctx.r10.s64 = ctx.r10.s64 + 1984;
loc_82100298:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821002cc
	if (ctx.cr6.eq) goto loc_821002CC;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r8,r9,1980
	ctx.r8.u64 = ctx.r9.u64 | 1980;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwzx r7,r29,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82100298
	if (ctx.cr6.lt) goto loc_82100298;
loc_821002C0:
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r31,r11,1984
	ctx.r31.s64 = ctx.r11.s64 + 1984;
	// b 0x82100350
	goto loc_82100350;
loc_821002CC:
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,1984
	ctx.r10.s64 = ctx.r10.s64 + 1984;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82100350
	goto loc_82100350;
loc_821002E0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82100340
	if (ctx.cr6.eq) goto loc_82100340;
	// lwz r11,332(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100340
	if (ctx.cr6.eq) goto loc_82100340;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82100340
	if (ctx.cr6.eq) goto loc_82100340;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210030C:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82100330
	if (ctx.cr6.eq) goto loc_82100330;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8210030c
	if (ctx.cr6.lt) goto loc_8210030C;
	// b 0x82100340
	goto loc_82100340;
loc_82100330:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82100350
	if (!ctx.cr6.eq) goto loc_82100350;
loc_82100340:
	// bl 0x821110e8
	ctx.lr = 0x82100344;
	sub_821110E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100384
	if (ctx.cr6.eq) goto loc_82100384;
loc_82100350:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100370
	if (ctx.cr6.eq) goto loc_82100370;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82100384
	if (ctx.cr6.eq) goto loc_82100384;
	// bl 0x82172d60
	ctx.lr = 0x82100370;
	sub_82172D60(ctx, base);
loc_82100370:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82176780
	ctx.lr = 0x82100380;
	sub_82176780(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_82100384:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,6
	ctx.r27.s64 = ctx.r27.s64 + 6;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821001f4
	if (ctx.cr6.lt) goto loc_821001F4;
loc_8210039C:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r23,r23,960
	ctx.r23.s64 = ctx.r23.s64 + 960;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x821001bc
	if (!ctx.cr0.eq) goto loc_821001BC;
loc_821003AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821003B4"))) PPC_WEAK_FUNC(sub_821003B4);
PPC_FUNC_IMPL(__imp__sub_821003B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821003B8"))) PPC_WEAK_FUNC(sub_821003B8);
PPC_FUNC_IMPL(__imp__sub_821003B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821003C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// beq cr6,0x82100460
	if (ctx.cr6.eq) goto loc_82100460;
	// lwz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// lwz r7,84(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100460
	if (ctx.cr6.eq) goto loc_82100460;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r7,16
	ctx.r6.s64 = ctx.r7.s64 + 16;
loc_821003F8:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82100454
	if (ctx.cr6.eq) goto loc_82100454;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82100410:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r4,260(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 260);
	// rlwinm r3,r4,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821004cc
	if (!ctx.cr6.eq) goto loc_821004CC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82100410
	if (ctx.cr6.lt) goto loc_82100410;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82100444:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100454
	if (ctx.cr6.eq) goto loc_82100454;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82100454:
	// addi r6,r6,960
	ctx.r6.s64 = ctx.r6.s64 + 960;
	// addi r8,r8,160
	ctx.r8.s64 = ctx.r8.s64 + 160;
	// bdnz 0x821003f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821003F8;
loc_82100460:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821004dc
	if (ctx.cr6.eq) goto loc_821004DC;
	// lwz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821004d4
	if (!ctx.cr6.eq) goto loc_821004D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82082030
	ctx.lr = 0x8210048C;
	sub_82082030(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r3.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r8,520(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r7,520(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// stb r29,28(r7)
	PPC_STORE_U8(ctx.r7.u32 + 28, ctx.r29.u8);
	// lwz r6,520(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// stw r30,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821004CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82100444
	goto loc_82100444;
loc_821004D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821004f8
	if (!ctx.cr6.eq) goto loc_821004F8;
loc_821004DC:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821004f8
	if (ctx.cr6.eq) goto loc_821004F8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821004F4;
	sub_82080000(ctx, base);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
loc_821004F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82100500"))) PPC_WEAK_FUNC(sub_82100500);
PPC_FUNC_IMPL(__imp__sub_82100500) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821005d8
	if (ctx.cr6.eq) goto loc_821005D8;
	// lhz r11,152(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 152);
	// lwz r8,148(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100544
	if (ctx.cr6.eq) goto loc_82100544;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 780, ctx.r7.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 784, ctx.r11.u32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, ctx.r9.u32);
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
loc_82100544:
	// lhz r11,154(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 154);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100588
	if (ctx.cr6.eq) goto loc_82100588;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 792, ctx.r8.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r10,796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 796, ctx.r10.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r9,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 804, ctx.r10.u32);
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
loc_82100588:
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,108(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// rlwinm r8,r10,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lwz r10,84(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r8.u32);
	// beq cr6,0x821005d8
	if (ctx.cr6.eq) goto loc_821005D8;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_821005AC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821005d0
	if (!ctx.cr6.eq) goto loc_821005D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,960
	ctx.r10.s64 = ctx.r10.s64 + 960;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821005ac
	if (ctx.cr6.lt) goto loc_821005AC;
	// b 0x821005d8
	goto loc_821005D8;
loc_821005D0:
	// ori r11,r8,16
	ctx.r11.u64 = ctx.r8.u64 | 16;
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
loc_821005D8:
	// b 0x821003b8
	sub_821003B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821005DC"))) PPC_WEAK_FUNC(sub_821005DC);
PPC_FUNC_IMPL(__imp__sub_821005DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821005E0"))) PPC_WEAK_FUNC(sub_821005E0);
PPC_FUNC_IMPL(__imp__sub_821005E0) {
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
	// bl 0x820ac008
	ctx.lr = 0x82100600;
	sub_820AC008(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82100614
	if (!ctx.cr6.eq) goto loc_82100614;
loc_8210060C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821006a4
	goto loc_821006A4;
loc_82100614:
	// lhz r8,214(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 214);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// lhz r9,212(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 212);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add. r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8210060c
	if (ctx.cr0.eq) goto loc_8210060C;
	// lwz r7,220(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82100638:
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r6,28(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// rlwinm r5,r6,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82100658
	if (ctx.cr6.eq) goto loc_82100658;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82100670
	if (ctx.cr6.eq) goto loc_82100670;
loc_82100658:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82100638
	if (ctx.cr6.lt) goto loc_82100638;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821006a4
	goto loc_821006A4;
loc_82100670:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r11,r31,960
	ctx.r11.s64 = ctx.r31.s64 * 960;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8210060c
	if (ctx.cr6.eq) goto loc_8210060C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8210060c
	if (ctx.cr6.eq) goto loc_8210060C;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_821006A4:
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

__attribute__((alias("__imp__sub_821006BC"))) PPC_WEAK_FUNC(sub_821006BC);
PPC_FUNC_IMPL(__imp__sub_821006BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821006C0"))) PPC_WEAK_FUNC(sub_821006C0);
PPC_FUNC_IMPL(__imp__sub_821006C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-284
	ctx.r3.s64 = ctx.r3.s64 + -284;
	// b 0x820fc840
	sub_820FC840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821006C8"))) PPC_WEAK_FUNC(sub_821006C8);
PPC_FUNC_IMPL(__imp__sub_821006C8) {
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
	// addi r10,r11,-30672
	ctx.r10.s64 = ctx.r11.s64 + -30672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8210cbf8
	ctx.lr = 0x821006F4;
	sub_8210CBF8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8210070c
	if (ctx.cr6.eq) goto loc_8210070C;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8210070C;
	sub_82080000(ctx, base);
loc_8210070C:
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

__attribute__((alias("__imp__sub_82100728"))) PPC_WEAK_FUNC(sub_82100728);
PPC_FUNC_IMPL(__imp__sub_82100728) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x82100770
	if (!ctx.cr6.eq) goto loc_82100770;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,31,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r11,129
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 129, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82100774
	if (ctx.cr6.eq) goto loc_82100774;
loc_82100770:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82100774:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821007c8
	if (ctx.cr6.eq) goto loc_821007C8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821007c8
	if (ctx.cr6.eq) goto loc_821007C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82172e00
	ctx.lr = 0x82100790;
	sub_82172E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821007c8
	if (ctx.cr6.eq) goto loc_821007C8;
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821007c0
	if (ctx.cr6.eq) goto loc_821007C0;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// clrlwi r9,r10,19
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r9,r9,0,31,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF001;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821007c8
	if (ctx.cr6.eq) goto loc_821007C8;
loc_821007C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821007cc
	goto loc_821007CC;
loc_821007C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821007CC:
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

__attribute__((alias("__imp__sub_821007E4"))) PPC_WEAK_FUNC(sub_821007E4);
PPC_FUNC_IMPL(__imp__sub_821007E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821007E8"))) PPC_WEAK_FUNC(sub_821007E8);
PPC_FUNC_IMPL(__imp__sub_821007E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,51
	ctx.r9.s64 = 51;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r9,r3,36
	ctx.r9.s64 = ctx.r3.s64 + 36;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// addi r9,r3,156
	ctx.r9.s64 = ctx.r3.s64 + 156;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r11.u8);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, ctx.r11.u8);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stb r11,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, ctx.r11.u8);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r10,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stb r11,212(r3)
	PPC_STORE_U8(ctx.r3.u32 + 212, ctx.r11.u8);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r10,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stb r11,236(r3)
	PPC_STORE_U8(ctx.r3.u32 + 236, ctx.r11.u8);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// stw r10,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r10.u32);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stb r11,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r11.u8);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82100900"))) PPC_WEAK_FUNC(sub_82100900);
PPC_FUNC_IMPL(__imp__sub_82100900) {
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
	// bl 0x82100950
	ctx.lr = 0x82100920;
	sub_82100950(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100938
	if (ctx.cr6.eq) goto loc_82100938;
	// bl 0x820f2238
	ctx.lr = 0x82100934;
	sub_820F2238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82100938:
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

__attribute__((alias("__imp__sub_82100950"))) PPC_WEAK_FUNC(sub_82100950);
PPC_FUNC_IMPL(__imp__sub_82100950) {
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
	// lwz r3,676(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 676);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-30668
	ctx.r10.s64 = ctx.r11.s64 + -30668;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82100980
	if (ctx.cr6.eq) goto loc_82100980;
	// bl 0x82172d60
	ctx.lr = 0x82100980;
	sub_82172D60(ctx, base);
loc_82100980:
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210099c
	if (ctx.cr6.eq) goto loc_8210099C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82178200
	ctx.lr = 0x82100994;
	sub_82178200(ctx, base);
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// bl 0x82172d60
	ctx.lr = 0x8210099C;
	sub_82172D60(ctx, base);
loc_8210099C:
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821009b8
	if (ctx.cr6.eq) goto loc_821009B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82178200
	ctx.lr = 0x821009B0;
	sub_82178200(ctx, base);
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// bl 0x82172d60
	ctx.lr = 0x821009B8;
	sub_82172D60(ctx, base);
loc_821009B8:
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821009c8
	if (ctx.cr6.eq) goto loc_821009C8;
	// bl 0x82172d60
	ctx.lr = 0x821009C8;
	sub_82172D60(ctx, base);
loc_821009C8:
	// addi r3,r31,780
	ctx.r3.s64 = ctx.r31.s64 + 780;
	// bl 0x82218450
	ctx.lr = 0x821009D0;
	sub_82218450(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-31232
	ctx.r10.s64 = ctx.r11.s64 + -31232;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x820f02b8
	ctx.lr = 0x821009E4;
	sub_820F02B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef958
	ctx.lr = 0x821009EC;
	sub_820EF958(ctx, base);
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

__attribute__((alias("__imp__sub_82100A00"))) PPC_WEAK_FUNC(sub_82100A00);
PPC_FUNC_IMPL(__imp__sub_82100A00) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 792, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,780
	ctx.r3.s64 = ctx.r3.s64 + 780;
	// stw r11,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stb r10,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r10.u8);
	// bl 0x821dbdd8
	ctx.lr = 0x82100A3C;
	sub_821DBDD8(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// stw r7,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r7.u32);
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82100a60
	if (!ctx.cr6.gt) goto loc_82100A60;
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
loc_82100A60:
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82100a7c
	if (!ctx.cr6.gt) goto loc_82100A7C;
	// lfs f13,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82100a7c
	if (!ctx.cr6.gt) goto loc_82100A7C;
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
loc_82100A7C:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lbz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82100a9c
	if (ctx.cr6.eq) goto loc_82100A9C;
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// stb r11,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r11.u8);
	// oris r8,r10,4096
	ctx.r8.u64 = ctx.r10.u64 | 268435456;
	// stw r8,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r8.u32);
loc_82100A9C:
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
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

__attribute__((alias("__imp__sub_82100ABC"))) PPC_WEAK_FUNC(sub_82100ABC);
PPC_FUNC_IMPL(__imp__sub_82100ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82100AC0"))) PPC_WEAK_FUNC(sub_82100AC0);
PPC_FUNC_IMPL(__imp__sub_82100AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82100AC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r4,r3,384
	ctx.r4.s64 = ctx.r3.s64 + 384;
	// addi r3,r7,384
	ctx.r3.s64 = ctx.r7.s64 + 384;
	// li r5,308
	ctx.r5.s64 = 308;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82100AF0;
	sub_8233E4E0(ctx, base);
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100b1c
	if (ctx.cr6.eq) goto loc_82100B1C;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
loc_82100B00:
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
	// bne 0x82100b00
	if (!ctx.cr0.eq) goto loc_82100B00;
loc_82100B1C:
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100b60
	if (ctx.cr6.eq) goto loc_82100B60;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
loc_82100B2C:
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
	// bne 0x82100b2c
	if (!ctx.cr0.eq) goto loc_82100B2C;
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100b60
	if (ctx.cr6.eq) goto loc_82100B60;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82177f68
	ctx.lr = 0x82100B60;
	sub_82177F68(ctx, base);
loc_82100B60:
	// lwz r11,684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100ba4
	if (ctx.cr6.eq) goto loc_82100BA4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
loc_82100B70:
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
	// bne 0x82100b70
	if (!ctx.cr0.eq) goto loc_82100B70;
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100ba4
	if (ctx.cr6.eq) goto loc_82100BA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82177f68
	ctx.lr = 0x82100BA4;
	sub_82177F68(ctx, base);
loc_82100BA4:
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100bd0
	if (ctx.cr6.eq) goto loc_82100BD0;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
loc_82100BB4:
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
	// bne 0x82100bb4
	if (!ctx.cr0.eq) goto loc_82100BB4;
loc_82100BD0:
	// addi r4,r31,692
	ctx.r4.s64 = ctx.r31.s64 + 692;
	// addi r3,r30,692
	ctx.r3.s64 = ctx.r30.s64 + 692;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x8233e4e0
	ctx.lr = 0x82100BE0;
	sub_8233E4E0(ctx, base);
	// lfs f0,764(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,764(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 764, temp.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f13,768(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stfs f13,768(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 768, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lfs f12,772(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f12,772(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 772, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,776(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,776(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 776, temp.u32);
	// bl 0x820e7338
	ctx.lr = 0x82100C18;
	sub_820E7338(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82100C20"))) PPC_WEAK_FUNC(sub_82100C20);
PPC_FUNC_IMPL(__imp__sub_82100C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lbz r10,380(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 380);
	// lwz r6,320(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// addi r7,r11,20000
	ctx.r7.s64 = ctx.r11.s64 + 20000;
	// lwz r9,316(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r4,324(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// addis r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 65536;
	// lwz r31,328(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addis r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 65536;
	// lfs f10,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r11,-20
	ctx.r7.s64 = ctx.r11.s64 + -20;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// addi r6,r10,-24
	ctx.r6.s64 = ctx.r10.s64 + -24;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r4,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r4.u32);
	// addi r11,r3,348
	ctx.r11.s64 = ctx.r3.s64 + 348;
	// stw r31,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r31.u32);
	// lfs f7,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f6.f64 = double(temp.f32);
	// lwzx r9,r5,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lfs f9,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// lwzx r8,r5,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lfs f8,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f8.f64 = double(temp.f32);
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// lfd f5,-32(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// lfd f4,-32(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fcfid f2,f5
	ctx.f2.f64 = double(ctx.f5.s64);
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// frsp f11,f2
	ctx.f11.f64 = double(float(ctx.f2.f64));
	// fmuls f0,f1,f9
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fmuls f12,f1,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fmuls f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f11,-20(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bne cr6,0x82100cf8
	if (!ctx.cr6.eq) goto loc_82100CF8;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82100cf8
	if (!ctx.cr6.eq) goto loc_82100CF8;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82100cf8
	if (!ctx.cr6.eq) goto loc_82100CF8;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x82100cfc
	if (ctx.cr6.eq) goto loc_82100CFC;
loc_82100CF8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82100CFC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82100d1c
	if (ctx.cr6.eq) goto loc_82100D1C;
	// lwz r10,364(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// oris r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 268435456;
	// stw r9,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r9.u32);
loc_82100D1C:
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82100D48"))) PPC_WEAK_FUNC(sub_82100D48);
PPC_FUNC_IMPL(__imp__sub_82100D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82100D50;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa30
	ctx.lr = 0x82100D58;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82100d74
	if (!ctx.cr6.eq) goto loc_82100D74;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,712(r3)
	PPC_STORE_U8(ctx.r3.u32 + 712, ctx.r11.u8);
	// b 0x82100d80
	goto loc_82100D80;
loc_82100D74:
	// addi r3,r31,692
	ctx.r3.s64 = ctx.r31.s64 + 692;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x8233e4e0
	ctx.lr = 0x82100D80;
	sub_8233E4E0(ctx, base);
loc_82100D80:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,708(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r11,31376
	ctx.r28.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82100da0
	if (!ctx.cr6.eq) goto loc_82100DA0;
	// lfs f0,92(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 708, temp.u32);
loc_82100DA0:
	// lbz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100ee0
	if (ctx.cr6.eq) goto loc_82100EE0;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// addi r30,r31,692
	ctx.r30.s64 = ctx.r31.s64 + 692;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82100dc4
	if (!ctx.cr6.lt) goto loc_82100DC4;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82100dd4
	goto loc_82100DD4;
loc_82100DC4:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r29,4
	ctx.r29.s64 = 4;
	// bgt cr6,0x82100dd4
	if (ctx.cr6.gt) goto loc_82100DD4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82100DD4:
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100eb8
	if (ctx.cr6.eq) goto loc_82100EB8;
	// lfs f31,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82100dfc
	if (ctx.cr6.gt) goto loc_82100DFC;
	// fadds f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
loc_82100DFC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82100eb8
	if (ctx.cr6.eq) goto loc_82100EB8;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// fdivs f29,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fsubs f27,f0,f31
	ctx.f27.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f28,f13
	ctx.f28.f64 = double(float(ctx.f13.f64));
loc_82100E24:
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fdivs f26,f11,f28
	ctx.f26.f64 = double(float(ctx.f11.f64 / ctx.f28.f64));
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// bl 0x8233c318
	ctx.lr = 0x82100E4C;
	sub_8233C318(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f27,f26,f31
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f26.f64 + ctx.f31.f64));
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// fsubs f7,f30,f9
	ctx.f7.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmadds f4,f8,f7,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f5.f64));
	// stfs f4,28(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bne cr6,0x82100e84
	if (!ctx.cr6.eq) goto loc_82100E84;
	// stfs f31,24(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// b 0x82100eac
	goto loc_82100EAC;
loc_82100E84:
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 3;
	// lfs f13,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f12,r8,r30
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fnmsubs f10,f11,f13,f0
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// stfsx f10,r7,r30
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, temp.u32);
loc_82100EAC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82100e24
	if (ctx.cr6.lt) goto loc_82100E24;
loc_82100EB8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82100ee0
	if (ctx.cr6.lt) goto loc_82100EE0;
	// lfs f0,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82100EE0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa7c
	ctx.lr = 0x82100EEC;
	__restfpr_26(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82100EF0"))) PPC_WEAK_FUNC(sub_82100EF0);
PPC_FUNC_IMPL(__imp__sub_82100EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82100EF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,784(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 784);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82100f28
	if (!ctx.cr6.gt) goto loc_82100F28;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82100F1C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82100f1c
	if (ctx.cr6.lt) goto loc_82100F1C;
loc_82100F28:
	// lbz r11,804(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 804);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82100f90
	if (ctx.cr6.eq) goto loc_82100F90;
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// addi r31,r30,780
	ctx.r31.s64 = ctx.r30.s64 + 780;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100f84
	if (ctx.cr6.eq) goto loc_82100F84;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / ctx.r11.u32;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82100f7c
	if (ctx.cr6.gt) goto loc_82100F7C;
	// bge cr6,0x82100f84
	if (!ctx.cr6.lt) goto loc_82100F84;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100f84
	if (ctx.cr6.eq) goto loc_82100F84;
loc_82100F7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dbdd8
	ctx.lr = 0x82100F84;
	sub_821DBDD8(ctx, base);
loc_82100F84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r29,804(r30)
	PPC_STORE_U8(ctx.r30.u32 + 804, ctx.r29.u8);
loc_82100F90:
	// lwz r11,780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 780);
	// addi r31,r30,780
	ctx.r31.s64 = ctx.r30.s64 + 780;
	// lwz r10,784(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82100fd4
	if (!ctx.cr6.eq) goto loc_82100FD4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82100fc0
	if (!ctx.cr6.eq) goto loc_82100FC0;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4944
	ctx.r9.s64 = ctx.r10.s64 + 4944;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_82100FC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821dbdd8
	ctx.lr = 0x82100FD4;
	sub_821DBDD8(ctx, base);
loc_82100FD4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stwx r28,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82100FF4"))) PPC_WEAK_FUNC(sub_82100FF4);
PPC_FUNC_IMPL(__imp__sub_82100FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82100FF8"))) PPC_WEAK_FUNC(sub_82100FF8);
PPC_FUNC_IMPL(__imp__sub_82100FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82101000;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// beq cr6,0x8210112c
	if (ctx.cr6.eq) goto loc_8210112C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82101038
	if (!ctx.cr6.gt) goto loc_82101038;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82101038:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82087078
	ctx.lr = 0x82101040;
	sub_82087078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82101054
	if (!ctx.cr6.eq) goto loc_82101054;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// b 0x82101064
	goto loc_82101064;
loc_82101054:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82177f68
	ctx.lr = 0x82101064;
	sub_82177F68(ctx, base);
loc_82101064:
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82101080
	if (ctx.cr6.eq) goto loc_82101080;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82178200
	ctx.lr = 0x82101078;
	sub_82178200(ctx, base);
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// bl 0x82172d60
	ctx.lr = 0x82101080;
	sub_82172D60(ctx, base);
loc_82101080:
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821010e4
	if (ctx.cr6.eq) goto loc_821010E4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821010e4
	if (ctx.cr6.eq) goto loc_821010E4;
	// bl 0x82087078
	ctx.lr = 0x8210109C;
	sub_82087078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821010b0
	if (!ctx.cr6.eq) goto loc_821010B0;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// b 0x821010c0
	goto loc_821010C0;
loc_821010B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82177f68
	ctx.lr = 0x821010C0;
	sub_82177F68(ctx, base);
loc_821010C0:
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821010dc
	if (ctx.cr6.eq) goto loc_821010DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82178200
	ctx.lr = 0x821010D4;
	sub_82178200(ctx, base);
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// bl 0x82172d60
	ctx.lr = 0x821010DC;
	sub_82172D60(ctx, base);
loc_821010DC:
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// b 0x82101104
	goto loc_82101104;
loc_821010E4:
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82101104
	if (ctx.cr6.eq) goto loc_82101104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82178200
	ctx.lr = 0x821010F8;
	sub_82178200(ctx, base);
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// bl 0x82172d60
	ctx.lr = 0x82101100;
	sub_82172D60(ctx, base);
	// stw r28,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r28.u32);
loc_82101104:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r31,572
	ctx.r10.s64 = ctx.r31.s64 + 572;
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r8,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r8.u32);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r7,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r7.u32);
	// b 0x82101190
	goto loc_82101190;
loc_8210112C:
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210114c
	if (ctx.cr6.eq) goto loc_8210114C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82178200
	ctx.lr = 0x82101140;
	sub_82178200(ctx, base);
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// bl 0x82172d60
	ctx.lr = 0x82101148;
	sub_82172D60(ctx, base);
	// stw r28,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r28.u32);
loc_8210114C:
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210116c
	if (ctx.cr6.eq) goto loc_8210116C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82178200
	ctx.lr = 0x82101160;
	sub_82178200(ctx, base);
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// bl 0x82172d60
	ctx.lr = 0x82101168;
	sub_82172D60(ctx, base);
	// stw r28,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r28.u32);
loc_8210116C:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f13,584(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
loc_82101190:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// bne cr6,0x821011a8
	if (!ctx.cr6.eq) goto loc_821011A8;
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_821011A8:
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821011B4"))) PPC_WEAK_FUNC(sub_821011B4);
PPC_FUNC_IMPL(__imp__sub_821011B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821011B8"))) PPC_WEAK_FUNC(sub_821011B8);
PPC_FUNC_IMPL(__imp__sub_821011B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lfs f0,116(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,228(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,96(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,68(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f9,64(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f8,68(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f6,28(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f5,32(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f4,36(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f3,40(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82101248"))) PPC_WEAK_FUNC(sub_82101248);
PPC_FUNC_IMPL(__imp__sub_82101248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// addi r9,r3,204
	ctx.r9.s64 = ctx.r3.s64 + 204;
	// addi r9,r3,112
	ctx.r9.s64 = ctx.r3.s64 + 112;
	// addi r9,r3,164
	ctx.r9.s64 = ctx.r3.s64 + 164;
	// lfs f12,256(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f12,232(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f12,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// lfs f12,112(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, ctx.r11.u8);
	// stfs f12,64(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f11,104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f10,220(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,72(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f13,88(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f13,96(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stb r11,136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 136, ctx.r11.u8);
	// lfs f12,964(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 964);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f12,140(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f13,168(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f12,216(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,180(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f11,184(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// stfs f13,200(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stw r10,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// lfs f13,148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,572(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 572);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,576(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 576);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,580(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 580);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,208(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f12,212(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f11,216(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f10,220(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stb r11,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r11.u8);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// lfs f12,208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,68(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stb r11,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r11.u8);
	// lfs f10,116(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,212(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f12,244(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f13,248(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f11,252(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stfs f10,256(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f9,260(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f8,264(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stfs f0,268(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stfs f0,276(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// stfs f0,280(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821013F4"))) PPC_WEAK_FUNC(sub_821013F4);
PPC_FUNC_IMPL(__imp__sub_821013F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821013F8"))) PPC_WEAK_FUNC(sub_821013F8);
PPC_FUNC_IMPL(__imp__sub_821013F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820e7948
	ctx.lr = 0x82101414;
	sub_820E7948(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r6,r10,-30636
	ctx.r6.s64 = ctx.r10.s64 + -30636;
	// addi r5,r9,-30604
	ctx.r5.s64 = ctx.r9.s64 + -30604;
	// addi r4,r7,-30600
	ctx.r4.s64 = ctx.r7.s64 + -30600;
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r5.u32);
	// stfs f0,672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// stw r4,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r4.u32);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r30.u32);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210146C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// stw r30,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r30.u32);
	// stw r30,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r30.u32);
	// stw r30,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// stw r30,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r30.u32);
	// stw r30,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r30.u32);
	// stw r30,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r30.u32);
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
	// stw r30,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821014C8"))) PPC_WEAK_FUNC(sub_821014C8);
PPC_FUNC_IMPL(__imp__sub_821014C8) {
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,-30636
	ctx.r8.s64 = ctx.r11.s64 + -30636;
	// addi r7,r10,-30604
	ctx.r7.s64 = ctx.r10.s64 + -30604;
	// addi r6,r9,-31400
	ctx.r6.s64 = ctx.r9.s64 + -31400;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820e7b08
	ctx.lr = 0x8210150C;
	sub_820E7B08(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82101524
	if (ctx.cr6.eq) goto loc_82101524;
	// bl 0x820f2238
	ctx.lr = 0x82101520;
	sub_820F2238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82101524:
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

__attribute__((alias("__imp__sub_8210153C"))) PPC_WEAK_FUNC(sub_8210153C);
PPC_FUNC_IMPL(__imp__sub_8210153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82101540"))) PPC_WEAK_FUNC(sub_82101540);
PPC_FUNC_IMPL(__imp__sub_82101540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e434
	ctx.lr = 0x82101548;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x8233fa38
	ctx.lr = 0x82101550;
	__savefpr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// bl 0x82102c68
	ctx.lr = 0x82101578;
	sub_82102C68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821015b8
	if (!ctx.cr6.eq) goto loc_821015B8;
	// lwz r11,508(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210159c
	if (ctx.cr6.eq) goto loc_8210159C;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821015b8
	if (ctx.cr6.eq) goto loc_821015B8;
loc_8210159C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x8233fa84
	ctx.lr = 0x821015B4;
	__restfpr_28(ctx, base);
	// b 0x8233e484
	__restgprlr_15(ctx, base);
	return;
loc_821015B8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r16,-1
	ctx.r16.s64 = -1;
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
	// lwz r29,25540(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25540);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f31,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x82101614
	if (ctx.cr6.eq) goto loc_82101614;
	// addi r3,r25,2752
	ctx.r3.s64 = ctx.r25.s64 + 2752;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x821015F4;
	sub_8233E4E0(ctx, base);
	// lfs f0,376(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// stfs f0,3360(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 3360, temp.u32);
	// stfs f13,3364(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 3364, temp.u32);
	// bl 0x82153328
	ctx.lr = 0x8210160C;
	sub_82153328(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// b 0x8210165c
	goto loc_8210165C;
loc_82101614:
	// stfs f31,2808(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2808, temp.u32);
	// stfs f31,2804(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2804, temp.u32);
	// stfs f31,2800(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2800, temp.u32);
	// stfs f31,2796(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2796, temp.u32);
	// stfs f31,2788(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2788, temp.u32);
	// stfs f31,2784(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2784, temp.u32);
	// stfs f31,2780(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2780, temp.u32);
	// stfs f31,2776(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2776, temp.u32);
	// stfs f31,2768(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2768, temp.u32);
	// stfs f31,2764(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2764, temp.u32);
	// stfs f31,2760(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2760, temp.u32);
	// stfs f31,2756(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2756, temp.u32);
	// stfs f28,2812(r25)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2812, temp.u32);
	// stfs f28,2792(r25)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2792, temp.u32);
	// stfs f28,2772(r25)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2772, temp.u32);
	// stfs f28,2752(r25)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2752, temp.u32);
	// stfs f31,3360(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 3360, temp.u32);
	// stfs f31,3364(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 3364, temp.u32);
loc_8210165C:
	// lwz r11,268(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 268);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// stw r11,3464(r25)
	PPC_STORE_U32(ctx.r25.u32 + 3464, ctx.r11.u32);
	// bne cr6,0x82101674
	if (!ctx.cr6.eq) goto loc_82101674;
	// lwz r11,308(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 308);
	// b 0x82101678
	goto loc_82101678;
loc_82101674:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82101678:
	// lwz r4,520(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 520);
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821016d0
	if (ctx.cr6.eq) goto loc_821016D0;
	// stb r18,3369(r25)
	PPC_STORE_U8(ctx.r25.u32 + 3369, ctx.r18.u8);
	// addi r5,r25,3372
	ctx.r5.s64 = ctx.r25.s64 + 3372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215b3c0
	ctx.lr = 0x8210169C;
	sub_8215B3C0(ctx, base);
	// addi r3,r24,284
	ctx.r3.s64 = ctx.r24.s64 + 284;
	// bl 0x82102c00
	ctx.lr = 0x821016A4;
	sub_82102C00(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,520(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 520);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r22,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r22.u8);
	// addi r7,r25,3460
	ctx.r7.s64 = ctx.r25.s64 + 3460;
	// addi r6,r25,3388
	ctx.r6.s64 = ctx.r25.s64 + 3388;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215bb28
	ctx.lr = 0x821016CC;
	sub_8215BB28(ctx, base);
	// b 0x821016d4
	goto loc_821016D4;
loc_821016D0:
	// stb r22,3369(r25)
	PPC_STORE_U8(ctx.r25.u32 + 3369, ctx.r22.u8);
loc_821016D4:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// fmr f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f28.f64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// ble cr6,0x82101b40
	if (!ctx.cr6.gt) goto loc_82101B40;
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// addi r20,r25,2816
	ctx.r20.s64 = ctx.r25.s64 + 2816;
	// addi r21,r25,3468
	ctx.r21.s64 = ctx.r25.s64 + 3468;
	// addi r31,r25,140
	ctx.r31.s64 = ctx.r25.s64 + 140;
loc_82101704:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82101714
	if (ctx.cr6.eq) goto loc_82101714;
	// lwz r26,0(r19)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x82101718
	goto loc_82101718;
loc_82101714:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82101718:
	// addi r10,r26,78
	ctx.r10.s64 = ctx.r26.s64 + 78;
	// stw r22,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r22.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,-116
	ctx.r10.s64 = ctx.r31.s64 + -116;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r28,r27,r24
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// lwz r30,20(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lfs f0,124(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r11,r30,76
	ctx.r11.s64 = ctx.r30.s64 + 76;
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// stfs f13,208(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// addi r11,r30,592
	ctx.r11.s64 = ctx.r30.s64 + 592;
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f12,316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,196(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f11,216(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r9,-116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -116, ctx.r9.u32);
	// stfs f10,220(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stfs f9,212(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
loc_8210177C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8210177c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210177C;
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// lwz r29,304(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// beq cr6,0x821017f4
	if (ctx.cr6.eq) goto loc_821017F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82172e00
	ctx.lr = 0x821017A8;
	sub_82172E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821017f4
	if (ctx.cr6.eq) goto loc_821017F4;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821017cc
	if (ctx.cr6.eq) goto loc_821017CC;
	// bl 0x820b91d0
	ctx.lr = 0x821017C4;
	sub_820B91D0(ctx, base);
	// stw r3,-80(r31)
	PPC_STORE_U32(ctx.r31.u32 + -80, ctx.r3.u32);
	// b 0x821017f8
	goto loc_821017F8;
loc_821017CC:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821017e4
	if (ctx.cr6.eq) goto loc_821017E4;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// stw r3,-80(r31)
	PPC_STORE_U32(ctx.r31.u32 + -80, ctx.r3.u32);
	// b 0x821017f8
	goto loc_821017F8;
loc_821017E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b90a0
	ctx.lr = 0x821017EC;
	sub_820B90A0(ctx, base);
	// stw r3,-80(r31)
	PPC_STORE_U32(ctx.r31.u32 + -80, ctx.r3.u32);
	// b 0x821017f8
	goto loc_821017F8;
loc_821017F4:
	// stw r22,-80(r31)
	PPC_STORE_U32(ctx.r31.u32 + -80, ctx.r22.u32);
loc_821017F8:
	// lwz r29,308(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8210185c
	if (ctx.cr6.eq) goto loc_8210185C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82172e00
	ctx.lr = 0x82101810;
	sub_82172E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210185c
	if (ctx.cr6.eq) goto loc_8210185C;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82101834
	if (ctx.cr6.eq) goto loc_82101834;
	// bl 0x820b91d0
	ctx.lr = 0x8210182C;
	sub_820B91D0(ctx, base);
	// stw r3,-76(r31)
	PPC_STORE_U32(ctx.r31.u32 + -76, ctx.r3.u32);
	// b 0x82101860
	goto loc_82101860;
loc_82101834:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210184c
	if (ctx.cr6.eq) goto loc_8210184C;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// stw r3,-76(r31)
	PPC_STORE_U32(ctx.r31.u32 + -76, ctx.r3.u32);
	// b 0x82101860
	goto loc_82101860;
loc_8210184C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b90a0
	ctx.lr = 0x82101854;
	sub_820B90A0(ctx, base);
	// stw r3,-76(r31)
	PPC_STORE_U32(ctx.r31.u32 + -76, ctx.r3.u32);
	// b 0x82101860
	goto loc_82101860;
loc_8210185C:
	// stw r22,-76(r31)
	PPC_STORE_U32(ctx.r31.u32 + -76, ctx.r22.u32);
loc_82101860:
	// lwz r29,312(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821018c4
	if (ctx.cr6.eq) goto loc_821018C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82172e00
	ctx.lr = 0x82101878;
	sub_82172E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821018c4
	if (ctx.cr6.eq) goto loc_821018C4;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210189c
	if (ctx.cr6.eq) goto loc_8210189C;
	// bl 0x820b91d0
	ctx.lr = 0x82101894;
	sub_820B91D0(ctx, base);
	// stw r3,-72(r31)
	PPC_STORE_U32(ctx.r31.u32 + -72, ctx.r3.u32);
	// b 0x821018c8
	goto loc_821018C8;
loc_8210189C:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821018b4
	if (ctx.cr6.eq) goto loc_821018B4;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// stw r3,-72(r31)
	PPC_STORE_U32(ctx.r31.u32 + -72, ctx.r3.u32);
	// b 0x821018c8
	goto loc_821018C8;
loc_821018B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b90a0
	ctx.lr = 0x821018BC;
	sub_820B90A0(ctx, base);
	// stw r3,-72(r31)
	PPC_STORE_U32(ctx.r31.u32 + -72, ctx.r3.u32);
	// b 0x821018c8
	goto loc_821018C8;
loc_821018C4:
	// stw r22,-72(r31)
	PPC_STORE_U32(ctx.r31.u32 + -72, ctx.r22.u32);
loc_821018C8:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r4,r30,356
	ctx.r4.s64 = ctx.r30.s64 + 356;
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r3,r31,-44
	ctx.r3.s64 = ctx.r31.s64 + -44;
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r5,240
	ctx.r5.s64 = 240;
	// lwz r8,92(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r7,96(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// addi r30,r31,-60
	ctx.r30.s64 = ctx.r31.s64 + -60;
	// stw r10,-68(r31)
	PPC_STORE_U32(ctx.r31.u32 + -68, ctx.r10.u32);
	// stw r9,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r9.u32);
	// stw r11,-60(r31)
	PPC_STORE_U32(ctx.r31.u32 + -60, ctx.r11.u32);
	// stw r8,-56(r31)
	PPC_STORE_U32(ctx.r31.u32 + -56, ctx.r8.u32);
	// stw r7,-52(r31)
	PPC_STORE_U32(ctx.r31.u32 + -52, ctx.r7.u32);
	// stw r6,-48(r31)
	PPC_STORE_U32(ctx.r31.u32 + -48, ctx.r6.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x82101910;
	sub_8233E4E0(ctx, base);
	// lwz r5,300(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 300);
	// rlwinm r10,r5,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210194c
	if (ctx.cr6.eq) goto loc_8210194C;
	// addi r9,r26,86
	ctx.r9.s64 = ctx.r26.s64 + 86;
	// lwz r11,508(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 508);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82101b20
	if (ctx.cr6.eq) goto loc_82101B20;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82101960
	if (!ctx.cr6.eq) goto loc_82101960;
	// b 0x82101b20
	goto loc_82101B20;
loc_8210194C:
	// addi r11,r26,86
	ctx.r11.s64 = ctx.r26.s64 + 86;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82101b20
	if (ctx.cr6.eq) goto loc_82101B20;
loc_82101960:
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82101b20
	if (ctx.cr6.eq) goto loc_82101B20;
	// lfs f0,116(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x821019a8
	if (ctx.cr6.eq) goto loc_821019A8;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x821019a8
	if (!ctx.cr6.gt) goto loc_821019A8;
	// lwz r11,-116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// stw r10,-116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -116, ctx.r10.u32);
	// beq cr6,0x821019a0
	if (ctx.cr6.eq) goto loc_821019A0;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821019a8
	if (ctx.cr6.eq) goto loc_821019A8;
loc_821019A0:
	// stw r22,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r22.u32);
	// b 0x82101b20
	goto loc_82101B20;
loc_821019A8:
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 4, ctx.xer);
	// bge cr6,0x821019fc
	if (!ctx.cr6.lt) goto loc_821019FC;
	// lfs f13,120(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821019d8
	if (!ctx.cr6.gt) goto loc_821019D8;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x821019d8
	if (!ctx.cr6.gt) goto loc_821019D8;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x821019d8
	if (ctx.cr6.gt) goto loc_821019D8;
	// fcmpu cr6,f29,f13
	ctx.cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bgt cr6,0x821019dc
	if (ctx.cr6.gt) goto loc_821019DC;
loc_821019D8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_821019DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821019f8
	if (ctx.cr6.eq) goto loc_821019F8;
	// fsubs f12,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// b 0x821019fc
	goto loc_821019FC;
loc_821019F8:
	// fmr f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f28.f64;
loc_821019FC:
	// lfs f0,240(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82101b20
	if (ctx.cr6.eq) goto loc_82101B20;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82101a80
	if (!ctx.cr6.lt) goto loc_82101A80;
	// lwz r11,-116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -116);
	// rlwinm r10,r11,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,-116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -116, ctx.r10.u32);
	// lfs f13,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,-16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,32(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f5,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f3,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,64(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f1,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f12,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,96(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
loc_82101A80:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82101aac
	if (ctx.cr6.eq) goto loc_82101AAC;
	// addi r5,r28,176
	ctx.r5.s64 = ctx.r28.s64 + 176;
	// addi r4,r24,32
	ctx.r4.s64 = ctx.r24.s64 + 32;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822578d8
	ctx.lr = 0x82101AA0;
	sub_822578D8(ctx, base);
	// add r11,r23,r25
	ctx.r11.u64 = ctx.r23.u64 + ctx.r25.u64;
	// stb r18,2744(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2744, ctx.r18.u8);
	// b 0x82101ad4
	goto loc_82101AD4;
loc_82101AAC:
	// lwz r11,-116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -116);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82101acc
	if (ctx.cr6.eq) goto loc_82101ACC;
	// addi r5,r28,176
	ctx.r5.s64 = ctx.r28.s64 + 176;
	// addi r4,r24,32
	ctx.r4.s64 = ctx.r24.s64 + 32;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822578d8
	ctx.lr = 0x82101ACC;
	sub_822578D8(ctx, base);
loc_82101ACC:
	// add r11,r23,r25
	ctx.r11.u64 = ctx.r23.u64 + ctx.r25.u64;
	// stb r22,2744(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2744, ctx.r22.u8);
loc_82101AD4:
	// lwz r11,-116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -116);
	// rlwinm r10,r11,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82101ae8
	if (ctx.cr6.eq) goto loc_82101AE8;
	// stw r22,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r22.u32);
loc_82101AE8:
	// lfs f0,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82101b00
	if (!ctx.cr6.eq) goto loc_82101B00;
	// lfs f0,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82101b04
	if (ctx.cr6.eq) goto loc_82101B04;
loc_82101B00:
	// stw r22,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r22.u32);
loc_82101B04:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82101b20
	if (!ctx.cr6.eq) goto loc_82101B20;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// bl 0x82101b58
	ctx.lr = 0x82101B20;
	sub_82101B58(ctx, base);
loc_82101B20:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r20,r20,64
	ctx.r20.s64 = ctx.r20.s64 + 64;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addi r31,r31,340
	ctx.r31.s64 = ctx.r31.s64 + 340;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82101704
	if (ctx.cr6.lt) goto loc_82101704;
loc_82101B40:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x8233fa84
	ctx.lr = 0x82101B50;
	__restfpr_28(ctx, base);
	// b 0x8233e484
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82101B54"))) PPC_WEAK_FUNC(sub_82101B54);
PPC_FUNC_IMPL(__imp__sub_82101B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82101B58"))) PPC_WEAK_FUNC(sub_82101B58);
PPC_FUNC_IMPL(__imp__sub_82101B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82101B60;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa10
	ctx.lr = 0x82101B68;
	__savefpr_18(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r19,0(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r15,8(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r17,0
	ctx.r17.s64 = 0;
	// mulli r11,r19,340
	ctx.r11.s64 = ctx.r19.s64 * 340;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// stw r19,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r19.u32);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r26,68(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// addi r16,r15,2752
	ctx.r16.s64 = ctx.r15.s64 + 2752;
	// addi r20,r11,24
	ctx.r20.s64 = ctx.r11.s64 + 24;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r8,r11,0,7,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1800000;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// rlwinm r6,r11,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// rlwinm r5,r11,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// subfe r4,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r6,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r6.u8);
	// rlwinm r3,r11,8,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// stb r5,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r5.u8);
	// rlwinm r9,r11,12,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// stb r4,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r4.u8);
	// rlwinm r27,r11,7,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// stb r3,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r3.u8);
	// rlwinm r28,r11,31,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82101c10
	if (!ctx.cr6.eq) goto loc_82101C10;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82101c10
	if (!ctx.cr6.eq) goto loc_82101C10;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// b 0x82101c14
	goto loc_82101C14;
loc_82101C10:
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r17.u8);
loc_82101C14:
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// lfs f0,320(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,324(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f18,f0,f0
	ctx.f18.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f19,f13,f13
	ctx.f19.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// beq cr6,0x82101c78
	if (ctx.cr6.eq) goto loc_82101C78;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82101c44
	if (ctx.cr6.eq) goto loc_82101C44;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82101cb4
	goto loc_82101CB4;
loc_82101C44:
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82101c58
	if (ctx.cr6.eq) goto loc_82101C58;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82101cb4
	goto loc_82101CB4;
loc_82101C58:
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82101c6c
	if (ctx.cr6.eq) goto loc_82101C6C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82101cb4
	goto loc_82101CB4;
loc_82101C6C:
	// rlwinm r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82101cb4
	goto loc_82101CB4;
loc_82101C78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82101c8c
	if (ctx.cr6.eq) goto loc_82101C8C;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,17,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x2;
	// b 0x82101cb4
	goto loc_82101CB4;
loc_82101C8C:
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82101cb0
	if (ctx.cr6.eq) goto loc_82101CB0;
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82101cb4
	goto loc_82101CB4;
loc_82101CB0:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82101CB4:
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r8,28400
	ctx.r11.s64 = ctx.r8.s64 + 28400;
	// lwz r3,-27096(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27096);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82388734
	ctx.lr = 0x82101CD0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82101cdc
	if (!ctx.cr6.eq) goto loc_82101CDC;
	// bl 0x821b3000
	ctx.lr = 0x82101CDC;
	sub_821B3000(ctx, base);
loc_82101CDC:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r18,r3,20
	ctx.r18.s64 = ctx.r3.s64 + 20;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82087010
	ctx.lr = 0x82101CEC;
	sub_82087010(ctx, base);
	// addi r11,r19,875
	ctx.r11.s64 = ctx.r19.s64 + 875;
	// mulli r24,r26,240
	ctx.r24.s64 = ctx.r26.s64 * 240;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stwx r3,r10,r15
	PPC_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8210c7d8
	ctx.lr = 0x82101D08;
	sub_8210C7D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82298060
	ctx.lr = 0x82101D24;
	sub_82298060(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822986a8
	ctx.lr = 0x82101D30;
	sub_822986A8(ctx, base);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r9,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82101d64
	if (!ctx.cr6.gt) goto loc_82101D64;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,4492
	ctx.r8.s64 = ctx.r9.s64 + 4492;
	// stw r8,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r8.u32);
loc_82101D64:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// add r6,r15,r19
	ctx.r6.u64 = ctx.r15.u64 + ctx.r19.u64;
	// lwz r7,8(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// mr r14,r17
	ctx.r14.u64 = ctx.r17.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r5,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r5.u32);
	// lwz r9,52(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 52);
	// lwz r8,56(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 56);
	// lwz r10,48(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// lbz r11,2744(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r11,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
	// beq cr6,0x82101de4
	if (ctx.cr6.eq) goto loc_82101DE4;
	// addi r11,r19,44
	ctx.r11.s64 = ctx.r19.s64 + 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// add r14,r11,r15
	ctx.r14.u64 = ctx.r11.u64 + ctx.r15.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// bl 0x82257cb8
	ctx.lr = 0x82101DD4;
	sub_82257CB8(ctx, base);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82257540
	ctx.lr = 0x82101DE4;
	sub_82257540(ctx, base);
loc_82101DE4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f27,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f26.f64 = double(temp.f32);
	// beq cr6,0x82101e24
	if (ctx.cr6.eq) goto loc_82101E24;
	// lfs f0,0(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfs f11,8(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f26
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fmuls f9,f11,f26
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82101e30
	goto loc_82101E30;
loc_82101E24:
	// stfs f26,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f27,96(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82101E30:
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// lwz r21,96(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r22,92(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82101e70
	if (ctx.cr6.eq) goto loc_82101E70;
	// lfs f0,20(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfs f11,24(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f26
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fmuls f9,f11,f26
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82101e7c
	goto loc_82101E7C;
loc_82101E70:
	// stfs f26,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f27,96(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82101E7C:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// lfs f31,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmr f20,f31
	ctx.f20.f64 = ctx.f31.f64;
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// beq cr6,0x82101f04
	if (ctx.cr6.eq) goto loc_82101F04;
	// lfs f0,36(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,40(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,336(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f6,f9,f10,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fnmadds f0,f7,f8,f6
	ctx.f0.f64 = double(float(-(ctx.f7.f64 * ctx.f8.f64 + ctx.f6.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82101ed8
	if (!ctx.cr6.lt) goto loc_82101ED8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82101ee4
	goto loc_82101EE4;
loc_82101ED8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82101ee4
	if (!ctx.cr6.gt) goto loc_82101EE4;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82101EE4:
	// lfs f13,332(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 332);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82101ef8
	if (ctx.cr6.lt) goto loc_82101EF8;
	// fmr f20,f31
	ctx.f20.f64 = ctx.f31.f64;
	// b 0x82101f04
	goto loc_82101F04;
loc_82101EF8:
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f20,f0,f13
	ctx.f20.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82101F04:
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82102600
	if (ctx.cr6.eq) goto loc_82102600;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f25,980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	ctx.f25.f64 = double(temp.f32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f21,408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	ctx.f21.f64 = double(temp.f32);
	// lfs f24,364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	ctx.f24.f64 = double(temp.f32);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// lfs f22,328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f22.f64 = double(temp.f32);
	// addi r27,r10,-4
	ctx.r27.s64 = ctx.r10.s64 + -4;
	// lfs f23,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f23.f64 = double(temp.f32);
	// addi r30,r9,24
	ctx.r30.s64 = ctx.r9.s64 + 24;
loc_82101F3C:
	// lfs f28,-24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	ctx.f28.f64 = double(temp.f32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fcmpu cr6,f28,f27
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// blt cr6,0x821025e8
	if (ctx.cr6.lt) goto loc_821025E8;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f21
	ctx.cr6.compare(ctx.f13.f64, ctx.f21.f64);
	// bne cr6,0x82101f60
	if (!ctx.cr6.eq) goto loc_82101F60;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x82101fbc
	goto loc_82101FBC;
loc_82101F60:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f19
	ctx.cr6.compare(ctx.f0.f64, ctx.f19.f64);
	// blt cr6,0x82101fa0
	if (ctx.cr6.lt) goto loc_82101FA0;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x82101fbc
	goto loc_82101FBC;
loc_82101FA0:
	// fcmpu cr6,f0,f18
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f18.f64);
	// ble cr6,0x821025e8
	if (!ctx.cr6.gt) goto loc_821025E8;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f12,324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f29,f10,f11
	ctx.f29.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
loc_82101FBC:
	// lbz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82101fe4
	if (ctx.cr6.eq) goto loc_82101FE4;
	// lwz r23,52(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r22,56(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r21,60(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r26,40(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r25,44(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r24,48(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
loc_82101FE4:
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,-12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lbz r28,102(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// beq cr6,0x8210232c
	if (ctx.cr6.eq) goto loc_8210232C;
	// lfs f0,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f22
	ctx.cr6.compare(ctx.f10.f64, ctx.f22.f64);
	// ble cr6,0x8210232c
	if (!ctx.cr6.gt) goto loc_8210232C;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x821020a8
	if (ctx.cr6.eq) goto loc_821020A8;
	// lwz r8,332(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821020a8
	if (ctx.cr6.eq) goto loc_821020A8;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82257600
	ctx.lr = 0x8210204C;
	sub_82257600(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82257540
	ctx.lr = 0x8210205C;
	sub_82257540(ctx, base);
	// lfs f12,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f9,352(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f6,356(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// lwz r10,352(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lfs f0,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,360(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x821020fc
	goto loc_821020FC;
loc_821020A8:
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f9,308(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f6,312(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// lwz r7,312(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r6,308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lfs f0,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,304(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// lwz r8,304(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
loc_821020FC:
	// lfs f12,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lbz r10,103(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f6,f13,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f5,f10,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f4,f0,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f3,f9,f9,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fsqrts f2,f4
	ctx.f2.f64 = double(float(sqrt(ctx.f4.f64)));
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f8,f31,f2
	ctx.f8.f64 = double(float(ctx.f31.f64 / ctx.f2.f64));
	// fdivs f7,f31,f1
	ctx.f7.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f8,f11,f7
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// beq cr6,0x82102218
	if (ctx.cr6.eq) goto loc_82102218;
	// lfs f11,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r10,92
	ctx.r11.s64 = ctx.r10.s64 + 92;
	// fmuls f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f6,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f5,f6,f13,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f4,f11,f0,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f25
	ctx.cr6.compare(ctx.f4.f64, ctx.f25.f64);
	// bge cr6,0x82102218
	if (!ctx.cr6.lt) goto loc_82102218;
	// fmuls f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lbz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmsubs f10,f6,f0,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfs f10,244(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// fmsubs f9,f13,f11,f5
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f5.f64));
	// stfs f9,248(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fmsubs f11,f12,f8,f4
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 - ctx.f4.f64));
	// stfs f11,240(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lwz r8,248(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lwz r6,240(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// beq cr6,0x82102254
	if (ctx.cr6.eq) goto loc_82102254;
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmsubs f5,f9,f13,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f5,256(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fmsubs f4,f12,f11,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f7.f64));
	// stfs f4,260(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fmsubs f3,f10,f0,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f6.f64));
	// stfs f3,264(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,264(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// b 0x82102248
	goto loc_82102248;
loc_82102218:
	// fmuls f11,f8,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f5,f10,f12,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f11.f64));
	// stfs f5,272(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmsubs f4,f8,f0,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfs f4,276(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fmsubs f3,f13,f9,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f3,280(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r8,280(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
loc_82102248:
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_82102254:
	// fmuls f11,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f27
	ctx.cr6.compare(ctx.f9.f64, ctx.f27.f64);
	// beq cr6,0x82102330
	if (ctx.cr6.eq) goto loc_82102330;
	// lfs f11,328(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 328);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f27
	ctx.cr6.compare(ctx.f11.f64, ctx.f27.f64);
	// beq cr6,0x821022d4
	if (ctx.cr6.eq) goto loc_821022D4;
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f23
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f23.f64));
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f4,f6,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmuls f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmuls f11,f2,f26
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f26.f64));
	// fcmpu cr6,f11,f24
	ctx.cr6.compare(ctx.f11.f64, ctx.f24.f64);
	// ble cr6,0x821025e8
	if (!ctx.cr6.gt) goto loc_821025E8;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,296(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f11,292(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r6,296(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r7,292(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// b 0x821022f8
	goto loc_821022F8;
loc_821022D4:
	// fmuls f11,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// stfs f11,320(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// fmuls f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// stfs f12,328(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// lwz r7,324(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r6,328(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
loc_821022F8:
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f26
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fmuls f9,f11,f26
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// stfs f12,336(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f10,340(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f9,344(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r9,344(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// b 0x82102348
	goto loc_82102348;
loc_8210232C:
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82102330:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82102348:
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// beq cr6,0x82102448
	if (ctx.cr6.eq) goto loc_82102448;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82102384
	if (!ctx.cr6.eq) goto loc_82102384;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82102384
	if (!ctx.cr6.eq) goto loc_82102384;
	// fmr f30,f20
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f20.f64;
	// b 0x82102448
	goto loc_82102448;
loc_82102384:
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f5,36(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmsubs f2,f10,f11,f8
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f8.f64));
	// fmsubs f1,f9,f13,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// fmsubs f0,f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 - ctx.f6.f64));
	// fmuls f13,f2,f2
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f12,f1,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 / ctx.f10.f64));
	// fmuls f8,f2,f9
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f7,f1,f9
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmadds f4,f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fnmadds f0,f6,f3,f4
	ctx.f0.f64 = double(float(-(ctx.f6.f64 * ctx.f3.f64 + ctx.f4.f64)));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82102404
	if (!ctx.cr6.lt) goto loc_82102404;
	// lbz r3,101(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82102404
	if (ctx.cr6.eq) goto loc_82102404;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82102404:
	// lfs f13,336(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82102418
	if (!ctx.cr6.lt) goto loc_82102418;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82102424
	goto loc_82102424;
loc_82102418:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82102424
	if (!ctx.cr6.gt) goto loc_82102424;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82102424:
	// lfs f13,332(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 332);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82102438
	if (ctx.cr6.lt) goto loc_82102438;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x82102448
	goto loc_82102448;
loc_82102438:
	// lfs f12,336(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f30,f11,f10
	ctx.f30.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
loc_82102448:
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f30,f29
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// lfs f12,-20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f28,f12
	ctx.f10.f64 = double(float(ctx.f28.f64 / ctx.f12.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lfs f8,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,-24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + -24, temp.u32);
	// stfs f11,-16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// stfs f9,-20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + -20, temp.u32);
	// stfs f10,-12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
	// lfs f7,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,-8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f3,-4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f1,44(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f9,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,52(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f8,64(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f5,56(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f6,60(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,96(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f2,100(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f3,104(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f10,108(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f12,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,112(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f6,116(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f11,120(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f8,124(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// stw r6,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f10,168(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f3,156(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f4,160(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f5,164(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f12,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f2,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,172(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f1,176(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f9,180(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f10,184(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stw r8,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r8.u32);
	// stfs f13,212(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r7,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r7.u32);
	// stw r6,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r6.u32);
	// addi r31,r31,240
	ctx.r31.s64 = ctx.r31.s64 + 240;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stwu r20,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r27.u32 = ea;
loc_821025E8:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82101f3c
	if (ctx.cr6.lt) goto loc_82101F3C;
	// lwz r19,348(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
loc_82102600:
	// addi r11,r19,867
	ctx.r11.s64 = ctx.r19.s64 + 867;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r17,r10,r15
	PPC_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r17.u32);
	// bne cr6,0x82102658
	if (!ctx.cr6.eq) goto loc_82102658;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821026e0
	if (ctx.cr6.eq) goto loc_821026E0;
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82102640
	if (!ctx.cr6.gt) goto loc_82102640;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_82102640:
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// b 0x821026c8
	goto loc_821026C8;
loc_82102658:
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lwz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210268c
	if (ctx.cr6.eq) goto loc_8210268C;
	// lwz r11,740(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821026f0
	ctx.lr = 0x8210268C;
	sub_821026F0(ctx, base);
loc_8210268C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821026e0
	if (ctx.cr6.eq) goto loc_821026E0;
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821026b4
	if (!ctx.cr6.gt) goto loc_821026B4;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_821026B4:
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
loc_821026C8:
	// beq cr6,0x821026d4
	if (ctx.cr6.eq) goto loc_821026D4;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_821026D4:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r10,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r10.u32);
loc_821026E0:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa5c
	ctx.lr = 0x821026EC;
	__restfpr_18(ctx, base);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821026F0"))) PPC_WEAK_FUNC(sub_821026F0);
PPC_FUNC_IMPL(__imp__sub_821026F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x821026F8;
	__savegprlr_19(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lbz r7,2744(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2744);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// beq cr6,0x82102768
	if (ctx.cr6.eq) goto loc_82102768;
	// addi r11,r5,44
	ctx.r11.s64 = ctx.r5.s64 + 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r5,r11,r22
	ctx.r5.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x82257cb8
	ctx.lr = 0x82102758;
	sub_82257CB8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82257600
	ctx.lr = 0x82102768;
	sub_82257600(ctx, base);
loc_82102768:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82102774;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82102780
	if (!ctx.cr6.eq) goto loc_82102780;
	// bl 0x821b3000
	ctx.lr = 0x82102780;
	sub_821B3000(ctx, base);
loc_82102780:
	// rlwinm r25,r29,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r28,r3,20
	ctx.r28.s64 = ctx.r3.s64 + 20;
	// addi r9,r25,15
	ctx.r9.s64 = ctx.r25.s64 + 15;
	// lis r19,-13569
	ctx.r19.s64 = -889257984;
	// rlwinm r23,r9,0,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// add r8,r23,r11
	ctx.r8.u64 = ctx.r23.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821027b4
	if (!ctx.cr6.gt) goto loc_821027B4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,4492
	ctx.r10.s64 = ctx.r11.s64 + 4492;
	// stw r10,-13570(r19)
	PPC_STORE_U32(ctx.r19.u32 + -13570, ctx.r10.u32);
loc_821027B4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r24,r11,r9
	ctx.r24.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x821028e0
	if (ctx.cr6.lt) goto loc_821028E0;
	// addi r7,r29,-3
	ctx.r7.s64 = ctx.r29.s64 + -3;
	// addi r9,r27,-4
	ctx.r9.s64 = ctx.r27.s64 + -4;
loc_821027E4:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// mulli r8,r8,112
	ctx.r8.s64 = ctx.r8.s64 * 112;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f11,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// lfs f10,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f7,f11,f0,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f6,f10,f13,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mulli r8,r3,112
	ctx.r8.s64 = ctx.r3.s64 * 112;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmadds f12,f2,f5,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f11,f1,f4,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f12.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mulli r8,r8,112
	ctx.r8.s64 = ctx.r8.s64 * 112;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmadds f3,f7,f10,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f2,f6,f9,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f3.f64));
	// stfs f2,20(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwzu r8,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// mulli r8,r8,112
	ctx.r8.s64 = ctx.r8.s64 * 112;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f8,f12,f1,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmadds f7,f11,f0,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// blt cr6,0x821027e4
	if (ctx.cr6.lt) goto loc_821027E4;
loc_821028E0:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82102940
	if (!ctx.cr6.lt) goto loc_82102940;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r10,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r10.s64;
	// add r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 + ctx.r27.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82102900:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f13,f0,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f12,f8,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfsu f6,8(r9)
	temp.f32 = float(ctx.f6.f64);
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82102900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82102900;
loc_82102940:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// stb r20,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r20.u8);
	// stb r20,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r20.u8);
	// stb r20,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r20.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x82102980
	if (!ctx.cr6.gt) goto loc_82102980;
	// addi r6,r29,-1
	ctx.r6.s64 = ctx.r29.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82102ad8
	ctx.lr = 0x82102980;
	sub_82102AD8(ctx, base);
loc_82102980:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x821029b0
	if (!ctx.cr6.lt) goto loc_821029B0;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x8210299c
	if (!ctx.cr6.lt) goto loc_8210299C;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
loc_8210299C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x821029A8;
	sub_82080478(ctx, base);
	// stw r3,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
loc_821029B0:
	// addi r10,r21,883
	ctx.r10.s64 = ctx.r21.s64 + 883;
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,32
	ctx.r8.s64 = ctx.r31.s64 + 32;
	// addi r7,r11,-32
	ctx.r7.s64 = ctx.r11.s64 + -32;
	// stw r8,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r8.u32);
	// stw r7,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r7.u32);
	// stwx r31,r9,r22
	PPC_STORE_U32(ctx.r9.u32 + ctx.r22.u32, ctx.r31.u32);
	// bl 0x8210c7d8
	ctx.lr = 0x821029DC;
	sub_8210C7D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822980f8
	ctx.lr = 0x821029FC;
	sub_822980F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822986a8
	ctx.lr = 0x82102A08;
	sub_822986A8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82102a58
	if (ctx.cr6.eq) goto loc_82102A58;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// subf r9,r30,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r30.s64;
loc_82102A1C:
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r10,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r10.u16);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// addi r6,r10,3
	ctx.r6.s64 = ctx.r10.s64 + 3;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r5,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r5.u16);
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82102a1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82102A1C;
loc_82102A58:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82102aac
	if (ctx.cr6.eq) goto loc_82102AAC;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// ble cr6,0x82102a80
	if (!ctx.cr6.gt) goto loc_82102A80;
	// stw r9,-13570(r19)
	PPC_STORE_U32(ctx.r19.u32 + -13570, ctx.r9.u32);
loc_82102A80:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82102a9c
	if (ctx.cr6.eq) goto loc_82102A9C;
	// stw r9,-13570(r19)
	PPC_STORE_U32(ctx.r19.u32 + -13570, ctx.r9.u32);
loc_82102A9C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r10,r23,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r23.s64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82102AAC:
	// lbz r9,129(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82102acc
	if (ctx.cr6.eq) goto loc_82102ACC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82102acc
	if (ctx.cr6.eq) goto loc_82102ACC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82102ACC;
	sub_82080000(ctx, base);
loc_82102ACC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82102AD4"))) PPC_WEAK_FUNC(sub_82102AD4);
PPC_FUNC_IMPL(__imp__sub_82102AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82102AD8"))) PPC_WEAK_FUNC(sub_82102AD8);
PPC_FUNC_IMPL(__imp__sub_82102AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82102AE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_82102AF0:
	// add r11,r5,r29
	ctx.r11.u64 = ctx.r5.u64 + ctx.r29.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_82102B18:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_82102B20:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82102b38
	if (ctx.cr6.gt) goto loc_82102B38;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82102B38:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82102b50
	if (ctx.cr6.eq) goto loc_82102B50;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82102b20
	goto loc_82102B20;
loc_82102B50:
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
loc_82102B54:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82102b6c
	if (ctx.cr6.gt) goto loc_82102B6C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82102B6C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82102b84
	if (ctx.cr6.eq) goto loc_82102B84;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// b 0x82102b54
	goto loc_82102B54;
loc_82102B84:
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82102bc8
	if (ctx.cr6.gt) goto loc_82102BC8;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stdx r4,r11,r10
	PPC_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u64);
	// ble cr6,0x82102b18
	if (!ctx.cr6.gt) goto loc_82102B18;
loc_82102BC8:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82102bdc
	if (!ctx.cr6.lt) goto loc_82102BDC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82102ad8
	ctx.lr = 0x82102BDC;
	sub_82102AD8(ctx, base);
loc_82102BDC:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82102bec
	if (!ctx.cr6.lt) goto loc_82102BEC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x82102af0
	goto loc_82102AF0;
loc_82102BEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82102BF4"))) PPC_WEAK_FUNC(sub_82102BF4);
PPC_FUNC_IMPL(__imp__sub_82102BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82102BF8"))) PPC_WEAK_FUNC(sub_82102BF8);
PPC_FUNC_IMPL(__imp__sub_82102BF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-284
	ctx.r3.s64 = ctx.r3.s64 + -284;
	// b 0x821014c8
	sub_821014C8(ctx, base);
	return;
}

