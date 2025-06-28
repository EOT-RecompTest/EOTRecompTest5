#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820DDCA4"))) PPC_WEAK_FUNC(sub_820DDCA4);
PPC_FUNC_IMPL(__imp__sub_820DDCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DDCA8"))) PPC_WEAK_FUNC(sub_820DDCA8);
PPC_FUNC_IMPL(__imp__sub_820DDCA8) {
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
	ctx.lr = 0x820DDCC0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ddccc
	if (!ctx.cr6.eq) goto loc_820DDCCC;
	// bl 0x821b3000
	ctx.lr = 0x820DDCCC;
	sub_821B3000(ctx, base);
loc_820DDCCC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ddcf4
	if (ctx.cr6.eq) goto loc_820DDCF4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820DDCF4:
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

__attribute__((alias("__imp__sub_820DDD08"))) PPC_WEAK_FUNC(sub_820DDD08);
PPC_FUNC_IMPL(__imp__sub_820DDD08) {
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
	ctx.lr = 0x820DDD20;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ddd2c
	if (!ctx.cr6.eq) goto loc_820DDD2C;
	// bl 0x821b3000
	ctx.lr = 0x820DDD2C;
	sub_821B3000(ctx, base);
loc_820DDD2C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820ddd4c
	if (!ctx.cr6.gt) goto loc_820DDD4C;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820DDD4C:
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

__attribute__((alias("__imp__sub_820DDD60"))) PPC_WEAK_FUNC(sub_820DDD60);
PPC_FUNC_IMPL(__imp__sub_820DDD60) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DDD80;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ddd8c
	if (!ctx.cr6.eq) goto loc_820DDD8C;
	// bl 0x821b3000
	ctx.lr = 0x820DDD8C;
	sub_821B3000(ctx, base);
loc_820DDD8C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x820dddb4
	if (!ctx.cr6.lt) goto loc_820DDDB4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_820DDDB4:
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

__attribute__((alias("__imp__sub_820DDDC8"))) PPC_WEAK_FUNC(sub_820DDDC8);
PPC_FUNC_IMPL(__imp__sub_820DDDC8) {
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
	ctx.lr = 0x820DDDE0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dddec
	if (!ctx.cr6.eq) goto loc_820DDDEC;
	// bl 0x821b3000
	ctx.lr = 0x820DDDEC;
	sub_821B3000(ctx, base);
loc_820DDDEC:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dde00
	if (ctx.cr6.eq) goto loc_820DDE00;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_820DDE00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DDE10"))) PPC_WEAK_FUNC(sub_820DDE10);
PPC_FUNC_IMPL(__imp__sub_820DDE10) {
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
	// bl 0x820ddca8
	ctx.lr = 0x820DDE20;
	sub_820DDCA8(ctx, base);
loc_820DDE20:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dde40
	if (ctx.cr6.eq) goto loc_820DDE40;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dde44
	if (!ctx.cr6.eq) goto loc_820DDE44;
loc_820DDE40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820DDE44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dde58
	if (ctx.cr6.eq) goto loc_820DDE58;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// b 0x820dde20
	goto loc_820DDE20;
loc_820DDE58:
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820ddea4
	if (!ctx.cr6.eq) goto loc_820DDEA4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ddea4
	if (ctx.cr6.eq) goto loc_820DDEA4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,31,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r11,129
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 129, ctx.xer);
	// bne cr6,0x820ddea4
	if (!ctx.cr6.eq) goto loc_820DDEA4;
	// rlwinm r11,r10,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ddea4
	if (!ctx.cr6.eq) goto loc_820DDEA4;
	// bl 0x820dd298
	ctx.lr = 0x820DDEA4;
	sub_820DD298(ctx, base);
loc_820DDEA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DDEB4"))) PPC_WEAK_FUNC(sub_820DDEB4);
PPC_FUNC_IMPL(__imp__sub_820DDEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DDEB8"))) PPC_WEAK_FUNC(sub_820DDEB8);
PPC_FUNC_IMPL(__imp__sub_820DDEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820DDEC0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r28,r11,-21792
	ctx.r28.s64 = ctx.r11.s64 + -21792;
	// lwz r11,14544(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ddf78
	if (ctx.cr6.eq) goto loc_820DDF78;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r23,10
	ctx.r23.s64 = 10;
	// addi r24,r28,14504
	ctx.r24.s64 = ctx.r28.s64 + 14504;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_820DDEFC:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lbz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 38);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ddf6c
	if (!ctx.cr6.eq) goto loc_820DDF6C;
	// lbz r11,37(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ddf6c
	if (ctx.cr6.eq) goto loc_820DDF6C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82247250
	ctx.lr = 0x820DDF28;
	sub_82247250(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stb r26,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r26.u8);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// beq cr6,0x820ddf54
	if (ctx.cr6.eq) goto loc_820DDF54;
	// li r4,135
	ctx.r4.s64 = 135;
	// bl 0x820daf68
	ctx.lr = 0x820DDF54;
	sub_820DAF68(ctx, base);
loc_820DDF54:
	// lhz r11,242(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 242);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// sth r10,242(r30)
	PPC_STORE_U16(ctx.r30.u32 + 242, ctx.r10.u16);
	// lwz r11,14544(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14544);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,14544(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14544, ctx.r11.u32);
loc_820DDF6C:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x820ddefc
	if (!ctx.cr0.eq) goto loc_820DDEFC;
loc_820DDF78:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820dff78
	ctx.lr = 0x820DDF80;
	sub_820DFF78(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DDF8C"))) PPC_WEAK_FUNC(sub_820DDF8C);
PPC_FUNC_IMPL(__imp__sub_820DDF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DDF90"))) PPC_WEAK_FUNC(sub_820DDF90);
PPC_FUNC_IMPL(__imp__sub_820DDF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820DDF98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ddfb8
	if (!ctx.cr6.eq) goto loc_820DDFB8;
loc_820DDFAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820DDFB8:
	// bl 0x820ddca8
	ctx.lr = 0x820DDFBC;
	sub_820DDCA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ddfac
	if (ctx.cr6.eq) goto loc_820DDFAC;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r30,r11,-21792
	ctx.r30.s64 = ctx.r11.s64 + -21792;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,14548
	ctx.r3.s64 = ctx.r30.s64 + 14548;
	// bl 0x823052d8
	ctx.lr = 0x820DDFE0;
	sub_823052D8(ctx, base);
	// li r10,14504
	ctx.r10.s64 = 14504;
	// addi r11,r30,14504
	ctx.r11.s64 = ctx.r30.s64 + 14504;
loc_820DDFE8:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,38(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 38);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820de01c
	if (!ctx.cr6.eq) goto loc_820DE01C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,14544
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14544, ctx.xer);
	// blt cr6,0x820ddfe8
	if (ctx.cr6.lt) goto loc_820DDFE8;
	// addi r3,r30,14548
	ctx.r3.s64 = ctx.r30.s64 + 14548;
	// bl 0x823051a8
	ctx.lr = 0x820DE010;
	sub_823051A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820DE01C:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lhz r11,242(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 242);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,242(r10)
	PPC_STORE_U16(ctx.r10.u32 + 242, ctx.r9.u16);
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stb r29,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r29.u8);
	// stb r29,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r29.u8);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82247218
	ctx.lr = 0x820DE04C;
	sub_82247218(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x822471d8
	ctx.lr = 0x820DE054;
	sub_822471D8(ctx, base);
	// lwz r11,14544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14544);
	// addi r3,r30,14548
	ctx.r3.s64 = ctx.r30.s64 + 14548;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,14544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14544, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x820DE06C;
	sub_823051A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DE078"))) PPC_WEAK_FUNC(sub_820DE078);
PPC_FUNC_IMPL(__imp__sub_820DE078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DE080;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r11,-31408
	ctx.r10.s64 = ctx.r11.s64 + -31408;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822471d8
	ctx.lr = 0x820DE0A8;
	sub_822471D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82305448
	ctx.lr = 0x820DE0B0;
	sub_82305448(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82246e18
	ctx.lr = 0x820DE0B8;
	sub_82246E18(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82246e18
	ctx.lr = 0x820DE0C0;
	sub_82246E18(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,4344
	ctx.r8.s64 = ctx.r9.s64 + 4344;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x82305448
	ctx.lr = 0x820DE0D8;
	sub_82305448(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// clrlwi r6,r29,31
	ctx.r6.u64 = ctx.r29.u32 & 0x1;
	// addi r5,r7,4352
	ctx.r5.s64 = ctx.r7.s64 + 4352;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// beq cr6,0x820de0fc
	if (ctx.cr6.eq) goto loc_820DE0FC;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DE0FC;
	sub_82080000(ctx, base);
loc_820DE0FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DE108"))) PPC_WEAK_FUNC(sub_820DE108);
PPC_FUNC_IMPL(__imp__sub_820DE108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DE110;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820de178
	if (!ctx.cr6.eq) goto loc_820DE178;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r30,1
	ctx.r30.s64 = 1;
loc_820DE12C:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82247218
	ctx.lr = 0x820DE134;
	sub_82247218(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82247250
	ctx.lr = 0x820DE140;
	sub_82247250(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820de178
	if (!ctx.cr6.eq) goto loc_820DE178;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820DE160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r30.u8);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x822471d8
	ctx.lr = 0x820DE16C;
	sub_822471D8(ctx, base);
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820de12c
	if (ctx.cr6.eq) goto loc_820DE12C;
loc_820DE178:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DE184"))) PPC_WEAK_FUNC(sub_820DE184);
PPC_FUNC_IMPL(__imp__sub_820DE184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE188"))) PPC_WEAK_FUNC(sub_820DE188);
PPC_FUNC_IMPL(__imp__sub_820DE188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x820DE190;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x820dfcb0
	ctx.lr = 0x820DE19C;
	sub_820DFCB0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r28,14548
	ctx.r3.s64 = ctx.r28.s64 + 14548;
	// stw r30,14548(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14548, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,14552(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14552, ctx.r30.u32);
	// stw r30,14556(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14556, ctx.r30.u32);
	// stw r30,14560(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14560, ctx.r30.u32);
	// stw r30,14564(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14564, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x820DE1C0;
	sub_82305000(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r30,14544(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14544, ctx.r30.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// addi r22,r28,14500
	ctx.r22.s64 = ctx.r28.s64 + 14500;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r26,-32197
	ctx.r26.s64 = -2110062592;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r27,r10,-31408
	ctx.r27.s64 = ctx.r10.s64 + -31408;
	// addi r23,r11,-32288
	ctx.r23.s64 = ctx.r11.s64 + -32288;
loc_820DE1E8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233cc00
	ctx.lr = 0x820DE1F8;
	sub_8233CC00(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82082030
	ctx.lr = 0x820DE20C;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820de2a4
	if (ctx.cr6.eq) goto loc_820DE2A4;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// stb r30,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r30.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,21424
	ctx.r10.s64 = ctx.r11.s64 + 21424;
	// stb r30,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r30.u8);
	// stb r30,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stb r24,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r24.u8);
	// bl 0x82246e60
	ctx.lr = 0x820DE268;
	sub_82246E60(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82246e60
	ctx.lr = 0x820DE280;
	sub_82246E60(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,-27100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -27100);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24576
	ctx.r5.s64 = ctx.r11.s64 + 24576;
	// bl 0x82081680
	ctx.lr = 0x820DE2A0;
	sub_82081680(ctx, base);
	// b 0x820de2a8
	goto loc_820DE2A8;
loc_820DE2A4:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_820DE2A8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stwu r31,4(r22)
	ea = 4 + ctx.r22.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r22.u32 = ea;
	// cmplwi cr6,r25,10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 10, ctx.xer);
	// blt cr6,0x820de1e8
	if (ctx.cr6.lt) goto loc_820DE1E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DE2C4"))) PPC_WEAK_FUNC(sub_820DE2C4);
PPC_FUNC_IMPL(__imp__sub_820DE2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE2C8"))) PPC_WEAK_FUNC(sub_820DE2C8);
PPC_FUNC_IMPL(__imp__sub_820DE2C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820de2e0
	if (!ctx.cr6.eq) goto loc_820DE2E0;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x820de2ec
	goto loc_820DE2EC;
loc_820DE2E0:
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_820DE2EC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820de304
	if (!ctx.cr6.eq) goto loc_820DE304;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x820de310
	goto loc_820DE310;
loc_820DE304:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_820DE310:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE32C"))) PPC_WEAK_FUNC(sub_820DE32C);
PPC_FUNC_IMPL(__imp__sub_820DE32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE330"))) PPC_WEAK_FUNC(sub_820DE330);
PPC_FUNC_IMPL(__imp__sub_820DE330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31260
	ctx.r3.s64 = ctx.r11.s64 + 31260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE33C"))) PPC_WEAK_FUNC(sub_820DE33C);
PPC_FUNC_IMPL(__imp__sub_820DE33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE340"))) PPC_WEAK_FUNC(sub_820DE340);
PPC_FUNC_IMPL(__imp__sub_820DE340) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE348"))) PPC_WEAK_FUNC(sub_820DE348);
PPC_FUNC_IMPL(__imp__sub_820DE348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31172
	ctx.r3.s64 = ctx.r11.s64 + 31172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE354"))) PPC_WEAK_FUNC(sub_820DE354);
PPC_FUNC_IMPL(__imp__sub_820DE354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE358"))) PPC_WEAK_FUNC(sub_820DE358);
PPC_FUNC_IMPL(__imp__sub_820DE358) {
	PPC_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE360"))) PPC_WEAK_FUNC(sub_820DE360);
PPC_FUNC_IMPL(__imp__sub_820DE360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31196
	ctx.r3.s64 = ctx.r11.s64 + 31196;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE36C"))) PPC_WEAK_FUNC(sub_820DE36C);
PPC_FUNC_IMPL(__imp__sub_820DE36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE370"))) PPC_WEAK_FUNC(sub_820DE370);
PPC_FUNC_IMPL(__imp__sub_820DE370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31156
	ctx.r3.s64 = ctx.r11.s64 + 31156;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE37C"))) PPC_WEAK_FUNC(sub_820DE37C);
PPC_FUNC_IMPL(__imp__sub_820DE37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE380"))) PPC_WEAK_FUNC(sub_820DE380);
PPC_FUNC_IMPL(__imp__sub_820DE380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31016
	ctx.r3.s64 = ctx.r11.s64 + 31016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE38C"))) PPC_WEAK_FUNC(sub_820DE38C);
PPC_FUNC_IMPL(__imp__sub_820DE38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE390"))) PPC_WEAK_FUNC(sub_820DE390);
PPC_FUNC_IMPL(__imp__sub_820DE390) {
	PPC_FUNC_PROLOGUE();
	// li r3,42
	ctx.r3.s64 = 42;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE398"))) PPC_WEAK_FUNC(sub_820DE398);
PPC_FUNC_IMPL(__imp__sub_820DE398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30900
	ctx.r3.s64 = ctx.r11.s64 + 30900;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE3A4"))) PPC_WEAK_FUNC(sub_820DE3A4);
PPC_FUNC_IMPL(__imp__sub_820DE3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE3A8"))) PPC_WEAK_FUNC(sub_820DE3A8);
PPC_FUNC_IMPL(__imp__sub_820DE3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31184
	ctx.r3.s64 = ctx.r11.s64 + 31184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE3B4"))) PPC_WEAK_FUNC(sub_820DE3B4);
PPC_FUNC_IMPL(__imp__sub_820DE3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE3B8"))) PPC_WEAK_FUNC(sub_820DE3B8);
PPC_FUNC_IMPL(__imp__sub_820DE3B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE3C0"))) PPC_WEAK_FUNC(sub_820DE3C0);
PPC_FUNC_IMPL(__imp__sub_820DE3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30840
	ctx.r3.s64 = ctx.r11.s64 + 30840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE3CC"))) PPC_WEAK_FUNC(sub_820DE3CC);
PPC_FUNC_IMPL(__imp__sub_820DE3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE3D0"))) PPC_WEAK_FUNC(sub_820DE3D0);
PPC_FUNC_IMPL(__imp__sub_820DE3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31220
	ctx.r3.s64 = ctx.r11.s64 + 31220;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE3DC"))) PPC_WEAK_FUNC(sub_820DE3DC);
PPC_FUNC_IMPL(__imp__sub_820DE3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE3E0"))) PPC_WEAK_FUNC(sub_820DE3E0);
PPC_FUNC_IMPL(__imp__sub_820DE3E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE3E8"))) PPC_WEAK_FUNC(sub_820DE3E8);
PPC_FUNC_IMPL(__imp__sub_820DE3E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE3F0"))) PPC_WEAK_FUNC(sub_820DE3F0);
PPC_FUNC_IMPL(__imp__sub_820DE3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30968
	ctx.r3.s64 = ctx.r11.s64 + 30968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE3FC"))) PPC_WEAK_FUNC(sub_820DE3FC);
PPC_FUNC_IMPL(__imp__sub_820DE3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE400"))) PPC_WEAK_FUNC(sub_820DE400);
PPC_FUNC_IMPL(__imp__sub_820DE400) {
	PPC_FUNC_PROLOGUE();
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE408"))) PPC_WEAK_FUNC(sub_820DE408);
PPC_FUNC_IMPL(__imp__sub_820DE408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30980
	ctx.r3.s64 = ctx.r11.s64 + 30980;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE414"))) PPC_WEAK_FUNC(sub_820DE414);
PPC_FUNC_IMPL(__imp__sub_820DE414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE418"))) PPC_WEAK_FUNC(sub_820DE418);
PPC_FUNC_IMPL(__imp__sub_820DE418) {
	PPC_FUNC_PROLOGUE();
	// li r3,62
	ctx.r3.s64 = 62;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE420"))) PPC_WEAK_FUNC(sub_820DE420);
PPC_FUNC_IMPL(__imp__sub_820DE420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30912
	ctx.r3.s64 = ctx.r11.s64 + 30912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE42C"))) PPC_WEAK_FUNC(sub_820DE42C);
PPC_FUNC_IMPL(__imp__sub_820DE42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE430"))) PPC_WEAK_FUNC(sub_820DE430);
PPC_FUNC_IMPL(__imp__sub_820DE430) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE438"))) PPC_WEAK_FUNC(sub_820DE438);
PPC_FUNC_IMPL(__imp__sub_820DE438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31048
	ctx.r3.s64 = ctx.r11.s64 + 31048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE444"))) PPC_WEAK_FUNC(sub_820DE444);
PPC_FUNC_IMPL(__imp__sub_820DE444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE448"))) PPC_WEAK_FUNC(sub_820DE448);
PPC_FUNC_IMPL(__imp__sub_820DE448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31080
	ctx.r3.s64 = ctx.r11.s64 + 31080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE454"))) PPC_WEAK_FUNC(sub_820DE454);
PPC_FUNC_IMPL(__imp__sub_820DE454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE458"))) PPC_WEAK_FUNC(sub_820DE458);
PPC_FUNC_IMPL(__imp__sub_820DE458) {
	PPC_FUNC_PROLOGUE();
	// li r3,72
	ctx.r3.s64 = 72;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE460"))) PPC_WEAK_FUNC(sub_820DE460);
PPC_FUNC_IMPL(__imp__sub_820DE460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30924
	ctx.r3.s64 = ctx.r11.s64 + 30924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE46C"))) PPC_WEAK_FUNC(sub_820DE46C);
PPC_FUNC_IMPL(__imp__sub_820DE46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE470"))) PPC_WEAK_FUNC(sub_820DE470);
PPC_FUNC_IMPL(__imp__sub_820DE470) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE478"))) PPC_WEAK_FUNC(sub_820DE478);
PPC_FUNC_IMPL(__imp__sub_820DE478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30936
	ctx.r3.s64 = ctx.r11.s64 + 30936;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE484"))) PPC_WEAK_FUNC(sub_820DE484);
PPC_FUNC_IMPL(__imp__sub_820DE484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE488"))) PPC_WEAK_FUNC(sub_820DE488);
PPC_FUNC_IMPL(__imp__sub_820DE488) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE490"))) PPC_WEAK_FUNC(sub_820DE490);
PPC_FUNC_IMPL(__imp__sub_820DE490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30848
	ctx.r3.s64 = ctx.r11.s64 + 30848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE49C"))) PPC_WEAK_FUNC(sub_820DE49C);
PPC_FUNC_IMPL(__imp__sub_820DE49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE4A0"))) PPC_WEAK_FUNC(sub_820DE4A0);
PPC_FUNC_IMPL(__imp__sub_820DE4A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE4A8"))) PPC_WEAK_FUNC(sub_820DE4A8);
PPC_FUNC_IMPL(__imp__sub_820DE4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30872
	ctx.r3.s64 = ctx.r11.s64 + 30872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE4B4"))) PPC_WEAK_FUNC(sub_820DE4B4);
PPC_FUNC_IMPL(__imp__sub_820DE4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE4B8"))) PPC_WEAK_FUNC(sub_820DE4B8);
PPC_FUNC_IMPL(__imp__sub_820DE4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30860
	ctx.r3.s64 = ctx.r11.s64 + 30860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE4C4"))) PPC_WEAK_FUNC(sub_820DE4C4);
PPC_FUNC_IMPL(__imp__sub_820DE4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE4C8"))) PPC_WEAK_FUNC(sub_820DE4C8);
PPC_FUNC_IMPL(__imp__sub_820DE4C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,29
	ctx.r3.s64 = 29;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE4D0"))) PPC_WEAK_FUNC(sub_820DE4D0);
PPC_FUNC_IMPL(__imp__sub_820DE4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30992
	ctx.r3.s64 = ctx.r11.s64 + 30992;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE4DC"))) PPC_WEAK_FUNC(sub_820DE4DC);
PPC_FUNC_IMPL(__imp__sub_820DE4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE4E0"))) PPC_WEAK_FUNC(sub_820DE4E0);
PPC_FUNC_IMPL(__imp__sub_820DE4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31104
	ctx.r3.s64 = ctx.r11.s64 + 31104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE4EC"))) PPC_WEAK_FUNC(sub_820DE4EC);
PPC_FUNC_IMPL(__imp__sub_820DE4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE4F0"))) PPC_WEAK_FUNC(sub_820DE4F0);
PPC_FUNC_IMPL(__imp__sub_820DE4F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,34
	ctx.r3.s64 = 34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE4F8"))) PPC_WEAK_FUNC(sub_820DE4F8);
PPC_FUNC_IMPL(__imp__sub_820DE4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30956
	ctx.r3.s64 = ctx.r11.s64 + 30956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE504"))) PPC_WEAK_FUNC(sub_820DE504);
PPC_FUNC_IMPL(__imp__sub_820DE504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE508"))) PPC_WEAK_FUNC(sub_820DE508);
PPC_FUNC_IMPL(__imp__sub_820DE508) {
	PPC_FUNC_PROLOGUE();
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE510"))) PPC_WEAK_FUNC(sub_820DE510);
PPC_FUNC_IMPL(__imp__sub_820DE510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31132
	ctx.r3.s64 = ctx.r11.s64 + 31132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE51C"))) PPC_WEAK_FUNC(sub_820DE51C);
PPC_FUNC_IMPL(__imp__sub_820DE51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE520"))) PPC_WEAK_FUNC(sub_820DE520);
PPC_FUNC_IMPL(__imp__sub_820DE520) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE528"))) PPC_WEAK_FUNC(sub_820DE528);
PPC_FUNC_IMPL(__imp__sub_820DE528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30888
	ctx.r3.s64 = ctx.r11.s64 + 30888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE534"))) PPC_WEAK_FUNC(sub_820DE534);
PPC_FUNC_IMPL(__imp__sub_820DE534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE538"))) PPC_WEAK_FUNC(sub_820DE538);
PPC_FUNC_IMPL(__imp__sub_820DE538) {
	PPC_FUNC_PROLOGUE();
	// li r3,26
	ctx.r3.s64 = 26;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE540"))) PPC_WEAK_FUNC(sub_820DE540);
PPC_FUNC_IMPL(__imp__sub_820DE540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30880
	ctx.r3.s64 = ctx.r11.s64 + 30880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE54C"))) PPC_WEAK_FUNC(sub_820DE54C);
PPC_FUNC_IMPL(__imp__sub_820DE54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE550"))) PPC_WEAK_FUNC(sub_820DE550);
PPC_FUNC_IMPL(__imp__sub_820DE550) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE558"))) PPC_WEAK_FUNC(sub_820DE558);
PPC_FUNC_IMPL(__imp__sub_820DE558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31268
	ctx.r3.s64 = ctx.r11.s64 + 31268;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE564"))) PPC_WEAK_FUNC(sub_820DE564);
PPC_FUNC_IMPL(__imp__sub_820DE564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE568"))) PPC_WEAK_FUNC(sub_820DE568);
PPC_FUNC_IMPL(__imp__sub_820DE568) {
	PPC_FUNC_PROLOGUE();
	// li r3,107
	ctx.r3.s64 = 107;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE570"))) PPC_WEAK_FUNC(sub_820DE570);
PPC_FUNC_IMPL(__imp__sub_820DE570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31232
	ctx.r3.s64 = ctx.r11.s64 + 31232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE57C"))) PPC_WEAK_FUNC(sub_820DE57C);
PPC_FUNC_IMPL(__imp__sub_820DE57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE580"))) PPC_WEAK_FUNC(sub_820DE580);
PPC_FUNC_IMPL(__imp__sub_820DE580) {
	PPC_FUNC_PROLOGUE();
	// li r3,79
	ctx.r3.s64 = 79;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE588"))) PPC_WEAK_FUNC(sub_820DE588);
PPC_FUNC_IMPL(__imp__sub_820DE588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,30944
	ctx.r3.s64 = ctx.r11.s64 + 30944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE594"))) PPC_WEAK_FUNC(sub_820DE594);
PPC_FUNC_IMPL(__imp__sub_820DE594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE598"))) PPC_WEAK_FUNC(sub_820DE598);
PPC_FUNC_IMPL(__imp__sub_820DE598) {
	PPC_FUNC_PROLOGUE();
	// li r3,137
	ctx.r3.s64 = 137;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE5A0"))) PPC_WEAK_FUNC(sub_820DE5A0);
PPC_FUNC_IMPL(__imp__sub_820DE5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31208
	ctx.r3.s64 = ctx.r11.s64 + 31208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE5AC"))) PPC_WEAK_FUNC(sub_820DE5AC);
PPC_FUNC_IMPL(__imp__sub_820DE5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE5B0"))) PPC_WEAK_FUNC(sub_820DE5B0);
PPC_FUNC_IMPL(__imp__sub_820DE5B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE5B8"))) PPC_WEAK_FUNC(sub_820DE5B8);
PPC_FUNC_IMPL(__imp__sub_820DE5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31072
	ctx.r3.s64 = ctx.r11.s64 + 31072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE5C4"))) PPC_WEAK_FUNC(sub_820DE5C4);
PPC_FUNC_IMPL(__imp__sub_820DE5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE5C8"))) PPC_WEAK_FUNC(sub_820DE5C8);
PPC_FUNC_IMPL(__imp__sub_820DE5C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,95
	ctx.r3.s64 = 95;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE5D0"))) PPC_WEAK_FUNC(sub_820DE5D0);
PPC_FUNC_IMPL(__imp__sub_820DE5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31036
	ctx.r3.s64 = ctx.r11.s64 + 31036;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE5DC"))) PPC_WEAK_FUNC(sub_820DE5DC);
PPC_FUNC_IMPL(__imp__sub_820DE5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE5E0"))) PPC_WEAK_FUNC(sub_820DE5E0);
PPC_FUNC_IMPL(__imp__sub_820DE5E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE5E8"))) PPC_WEAK_FUNC(sub_820DE5E8);
PPC_FUNC_IMPL(__imp__sub_820DE5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31060
	ctx.r3.s64 = ctx.r11.s64 + 31060;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE5F4"))) PPC_WEAK_FUNC(sub_820DE5F4);
PPC_FUNC_IMPL(__imp__sub_820DE5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE5F8"))) PPC_WEAK_FUNC(sub_820DE5F8);
PPC_FUNC_IMPL(__imp__sub_820DE5F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,69
	ctx.r3.s64 = 69;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE600"))) PPC_WEAK_FUNC(sub_820DE600);
PPC_FUNC_IMPL(__imp__sub_820DE600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31092
	ctx.r3.s64 = ctx.r11.s64 + 31092;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE60C"))) PPC_WEAK_FUNC(sub_820DE60C);
PPC_FUNC_IMPL(__imp__sub_820DE60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE610"))) PPC_WEAK_FUNC(sub_820DE610);
PPC_FUNC_IMPL(__imp__sub_820DE610) {
	PPC_FUNC_PROLOGUE();
	// li r3,68
	ctx.r3.s64 = 68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE618"))) PPC_WEAK_FUNC(sub_820DE618);
PPC_FUNC_IMPL(__imp__sub_820DE618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31120
	ctx.r3.s64 = ctx.r11.s64 + 31120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE624"))) PPC_WEAK_FUNC(sub_820DE624);
PPC_FUNC_IMPL(__imp__sub_820DE624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE628"))) PPC_WEAK_FUNC(sub_820DE628);
PPC_FUNC_IMPL(__imp__sub_820DE628) {
	PPC_FUNC_PROLOGUE();
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE630"))) PPC_WEAK_FUNC(sub_820DE630);
PPC_FUNC_IMPL(__imp__sub_820DE630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31244
	ctx.r3.s64 = ctx.r11.s64 + 31244;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE63C"))) PPC_WEAK_FUNC(sub_820DE63C);
PPC_FUNC_IMPL(__imp__sub_820DE63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE640"))) PPC_WEAK_FUNC(sub_820DE640);
PPC_FUNC_IMPL(__imp__sub_820DE640) {
	PPC_FUNC_PROLOGUE();
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE648"))) PPC_WEAK_FUNC(sub_820DE648);
PPC_FUNC_IMPL(__imp__sub_820DE648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6736
	ctx.r3.s64 = ctx.r11.s64 + -6736;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE654"))) PPC_WEAK_FUNC(sub_820DE654);
PPC_FUNC_IMPL(__imp__sub_820DE654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE658"))) PPC_WEAK_FUNC(sub_820DE658);
PPC_FUNC_IMPL(__imp__sub_820DE658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31004
	ctx.r3.s64 = ctx.r11.s64 + 31004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE664"))) PPC_WEAK_FUNC(sub_820DE664);
PPC_FUNC_IMPL(__imp__sub_820DE664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE668"))) PPC_WEAK_FUNC(sub_820DE668);
PPC_FUNC_IMPL(__imp__sub_820DE668) {
	PPC_FUNC_PROLOGUE();
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE670"))) PPC_WEAK_FUNC(sub_820DE670);
PPC_FUNC_IMPL(__imp__sub_820DE670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820de68c
	if (!ctx.cr6.eq) goto loc_820DE68C;
	// lhz r3,22(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// blr 
	return;
loc_820DE68C:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lhz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DE698"))) PPC_WEAK_FUNC(sub_820DE698);
PPC_FUNC_IMPL(__imp__sub_820DE698) {
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
	ctx.lr = 0x820DE6B0;
	sub_82081C00(ctx, base);
	// bl 0x820def78
	ctx.lr = 0x820DE6B4;
	sub_820DEF78(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DE6C4;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820de6d8
	if (!ctx.cr6.eq) goto loc_820DE6D8;
	// bl 0x821b3000
	ctx.lr = 0x820DE6D4;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820DE6D8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820de6f0
	if (ctx.cr6.eq) goto loc_820DE6F0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_820DE6F0:
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

__attribute__((alias("__imp__sub_820DE704"))) PPC_WEAK_FUNC(sub_820DE704);
PPC_FUNC_IMPL(__imp__sub_820DE704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE708"))) PPC_WEAK_FUNC(sub_820DE708);
PPC_FUNC_IMPL(__imp__sub_820DE708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DE710;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820de74c
	if (!ctx.cr6.eq) goto loc_820DE74C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820de73c
	if (ctx.cr6.eq) goto loc_820DE73C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DE73C;
	sub_82080000(ctx, base);
loc_820DE73C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820DE74C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820de7bc
	if (ctx.cr6.eq) goto loc_820DE7BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820de76c
	if (ctx.cr6.eq) goto loc_820DE76C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x820de770
	goto loc_820DE770;
loc_820DE76C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820DE770:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820de7ac
	if (ctx.cr6.eq) goto loc_820DE7AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820de78c
	if (ctx.cr6.eq) goto loc_820DE78C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DE78C;
	sub_82080000(ctx, base);
loc_820DE78C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82082030
	ctx.lr = 0x820DE7A8;
	sub_82082030(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_820DE7AC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820DE7BC;
	sub_8233E4E0(ctx, base);
loc_820DE7BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DE7C4"))) PPC_WEAK_FUNC(sub_820DE7C4);
PPC_FUNC_IMPL(__imp__sub_820DE7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE7C8"))) PPC_WEAK_FUNC(sub_820DE7C8);
PPC_FUNC_IMPL(__imp__sub_820DE7C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,2036
	ctx.r3.s64 = 2036;
	// bl 0x82082030
	ctx.lr = 0x820DE7FC;
	sub_82082030(ctx, base);
	// li r10,509
	ctx.r10.s64 = 509;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820DE80C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r30,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820de80c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DE80C;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x820DE840;
	sub_82305000(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,2180
	ctx.r3.s64 = 2180;
	// bl 0x82082030
	ctx.lr = 0x820DE854;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820de874
	if (ctx.cr6.eq) goto loc_820DE874;
	// li r10,109
	ctx.r10.s64 = 109;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820DE868:
	// stwu r30,20(r11)
	ea = 20 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820de868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DE868;
	// b 0x820de878
	goto loc_820DE878;
loc_820DE874:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820DE878:
	// li r11,109
	ctx.r11.s64 = 109;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820DE888:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// bdnz 0x820de888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DE888;
	// li r11,109
	ctx.r11.s64 = 109;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820DE8C8"))) PPC_WEAK_FUNC(sub_820DE8C8);
PPC_FUNC_IMPL(__imp__sub_820DE8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820DE8D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r28,r11,6348
	ctx.r28.s64 = ctx.r11.s64 + 6348;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820de960
	if (ctx.cr6.eq) goto loc_820DE960;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_820DE8F4:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f63e0
	ctx.lr = 0x820DE904;
	sub_820F63E0(ctx, base);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820de940
	if (ctx.cr6.eq) goto loc_820DE940;
loc_820DE910:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820de92c
	if (ctx.cr6.eq) goto loc_820DE92C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DE92C;
	sub_82080000(ctx, base);
loc_820DE92C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820df228
	ctx.lr = 0x820DE934;
	sub_820DF228(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820de910
	if (!ctx.cr6.eq) goto loc_820DE910;
loc_820DE940:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820de8f4
	if (ctx.cr6.lt) goto loc_820DE8F4;
loc_820DE960:
	// stw r25,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r25.u32);
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// bl 0x820df128
	ctx.lr = 0x820DE96C;
	sub_820DF128(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820de984
	if (ctx.cr6.eq) goto loc_820DE984;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DE984;
	sub_82080000(ctx, base);
loc_820DE984:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820de998
	if (ctx.cr6.eq) goto loc_820DE998;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x82246e18
	ctx.lr = 0x820DE998;
	sub_82246E18(ctx, base);
loc_820DE998:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820de9b0
	if (ctx.cr6.eq) goto loc_820DE9B0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DE9B0;
	sub_82080000(ctx, base);
loc_820DE9B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DE9B8"))) PPC_WEAK_FUNC(sub_820DE9B8);
PPC_FUNC_IMPL(__imp__sub_820DE9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DE9C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dea14
	if (ctx.cr6.eq) goto loc_820DEA14;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x820dea20
	if (!ctx.cr6.eq) goto loc_820DEA20;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x820dea14
	if (!ctx.cr0.eq) goto loc_820DEA14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dea04
	if (ctx.cr6.eq) goto loc_820DEA04;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DEA04;
	sub_82080000(ctx, base);
loc_820DEA04:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x820dee60
	ctx.lr = 0x820DEA14;
	sub_820DEE60(ctx, base);
loc_820DEA14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820DEA20:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r30,r11,6348
	ctx.r30.s64 = ctx.r11.s64 + 6348;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x823052d8
	ctx.lr = 0x820DEA34;
	sub_823052D8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// divwu r9,r31,r11
	ctx.r9.u32 = ctx.r31.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r6,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820dea74
	if (ctx.cr6.eq) goto loc_820DEA74;
loc_820DEA5C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820dea74
	if (ctx.cr6.eq) goto loc_820DEA74;
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820dea5c
	if (!ctx.cr6.eq) goto loc_820DEA5C;
loc_820DEA74:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bne 0x820deb30
	if (!ctx.cr0.eq) goto loc_820DEB30;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// divwu r8,r31,r11
	ctx.r8.u32 = ctx.r31.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r6,r7,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r7.s64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820deaf4
	if (ctx.cr6.eq) goto loc_820DEAF4;
loc_820DEAB0:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820dead0
	if (ctx.cr6.eq) goto loc_820DEAD0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820deab0
	if (!ctx.cr6.eq) goto loc_820DEAB0;
	// b 0x820deaf4
	goto loc_820DEAF4;
loc_820DEAD0:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820deae4
	if (ctx.cr6.eq) goto loc_820DEAE4;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x820deae8
	goto loc_820DEAE8;
loc_820DEAE4:
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
loc_820DEAE8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_820DEAF4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820deb0c
	if (ctx.cr6.eq) goto loc_820DEB0C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DEB0C;
	sub_82080000(ctx, base);
loc_820DEB0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x820dee60
	ctx.lr = 0x820DEB1C;
	sub_820DEE60(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x823051a8
	ctx.lr = 0x820DEB24;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820DEB30:
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x823051a8
	ctx.lr = 0x820DEB38;
	sub_823051A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DEB44"))) PPC_WEAK_FUNC(sub_820DEB44);
PPC_FUNC_IMPL(__imp__sub_820DEB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DEB48"))) PPC_WEAK_FUNC(sub_820DEB48);
PPC_FUNC_IMPL(__imp__sub_820DEB48) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820deb6c
	if (!ctx.cr6.eq) goto loc_820DEB6C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820DEB6C:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820deba0
	if (ctx.cr6.eq) goto loc_820DEBA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820debc0
	ctx.lr = 0x820DEB8C;
	sub_820DEBC0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820DEBA0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DEBBC"))) PPC_WEAK_FUNC(sub_820DEBBC);
PPC_FUNC_IMPL(__imp__sub_820DEBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DEBC0"))) PPC_WEAK_FUNC(sub_820DEBC0);
PPC_FUNC_IMPL(__imp__sub_820DEBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DEBC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820de698
	ctx.lr = 0x820DEBD8;
	sub_820DE698(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x820debf4
	if (ctx.cr6.eq) goto loc_820DEBF4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// b 0x820debf8
	goto loc_820DEBF8;
loc_820DEBF4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820DEBF8:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820de708
	ctx.lr = 0x820DEC20;
	sub_820DE708(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DEC30"))) PPC_WEAK_FUNC(sub_820DEC30);
PPC_FUNC_IMPL(__imp__sub_820DEC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820DEC38;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,5009
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5009, ctx.xer);
	// beq cr6,0x820dec68
	if (ctx.cr6.eq) goto loc_820DEC68;
	// cmpwi cr6,r11,3201
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3201, ctx.xer);
	// beq cr6,0x820dec68
	if (ctx.cr6.eq) goto loc_820DEC68;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820DEC68:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r25,r11,-4
	ctx.r25.s64 = ctx.r11.s64 + -4;
	// bl 0x8208d070
	ctx.lr = 0x820DEC78;
	sub_8208D070(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dec90
	if (ctx.cr6.eq) goto loc_820DEC90;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_820DEC90:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x820ded94
	if (ctx.cr6.eq) goto loc_820DED94;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r31,r11,6348
	ctx.r31.s64 = ctx.r11.s64 + 6348;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x823052d8
	ctx.lr = 0x820DECB0;
	sub_823052D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820decf0
	if (ctx.cr6.eq) goto loc_820DECF0;
loc_820DECD8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820ded0c
	if (ctx.cr6.eq) goto loc_820DED0C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820decd8
	if (!ctx.cr6.eq) goto loc_820DECD8;
loc_820DECF0:
	// bl 0x820de698
	ctx.lr = 0x820DECF4;
	sub_820DE698(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ded2c
	if (ctx.cr6.eq) goto loc_820DED2C;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// b 0x820ded30
	goto loc_820DED30;
loc_820DED0C:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x823051a8
	ctx.lr = 0x820DED28;
	sub_823051A8(ctx, base);
	// b 0x820dedd4
	goto loc_820DEDD4;
loc_820DED2C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_820DED30:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// twllei r11,0
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// divwu r6,r7,r11
	ctx.r6.u32 = ctx.r7.u32 / ctx.r11.u32;
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r8,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x820DED90;
	sub_823051A8(ctx, base);
	// b 0x820dedd4
	goto loc_820DEDD4;
loc_820DED94:
	// bl 0x820de698
	ctx.lr = 0x820DED98;
	sub_820DE698(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dedb0
	if (ctx.cr6.eq) goto loc_820DEDB0;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// b 0x820dedb4
	goto loc_820DEDB4;
loc_820DEDB0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_820DEDB4:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r28.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r27,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r27.u32);
loc_820DEDD4:
	// cmplwi cr6,r25,12
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 12, ctx.xer);
	// ble cr6,0x820dee50
	if (!ctx.cr6.gt) goto loc_820DEE50;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820dee1c
	if (!ctx.cr6.eq) goto loc_820DEE1C;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrldi r10,r25,32
	ctx.r10.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820DEE10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820DEE1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82082030
	ctx.lr = 0x820DEE30;
	sub_82082030(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8208cfb0
	ctx.lr = 0x820DEE50;
	sub_8208CFB0(ctx, base);
loc_820DEE50:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DEE5C"))) PPC_WEAK_FUNC(sub_820DEE5C);
PPC_FUNC_IMPL(__imp__sub_820DEE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DEE60"))) PPC_WEAK_FUNC(sub_820DEE60);
PPC_FUNC_IMPL(__imp__sub_820DEE60) {
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
	// beq cr6,0x820def5c
	if (ctx.cr6.eq) goto loc_820DEF5C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,28732
	ctx.r31.s64 = ctx.r11.s64 + 28732;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820DEE94;
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
	// bne cr6,0x820def50
	if (!ctx.cr6.eq) goto loc_820DEF50;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820def50
	if (ctx.cr6.eq) goto loc_820DEF50;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820def50
	if (!ctx.cr6.lt) goto loc_820DEF50;
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
	// beq cr6,0x820def28
	if (ctx.cr6.eq) goto loc_820DEF28;
loc_820DEF00:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820def20
	if (ctx.cr6.eq) goto loc_820DEF20;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820def00
	if (!ctx.cr6.eq) goto loc_820DEF00;
	// b 0x820def28
	goto loc_820DEF28;
loc_820DEF20:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820DEF28:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820def40
	if (!ctx.cr6.eq) goto loc_820DEF40;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_820DEF40:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DEF4C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_820DEF50:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DEF5C;
	sub_823051A8(ctx, base);
loc_820DEF5C:
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

__attribute__((alias("__imp__sub_820DEF74"))) PPC_WEAK_FUNC(sub_820DEF74);
PPC_FUNC_IMPL(__imp__sub_820DEF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DEF78"))) PPC_WEAK_FUNC(sub_820DEF78);
PPC_FUNC_IMPL(__imp__sub_820DEF78) {
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
	// addi r31,r11,28732
	ctx.r31.s64 = ctx.r11.s64 + 28732;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820DEFA0;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820defc4
	if (ctx.cr6.eq) goto loc_820DEFC4;
loc_820DEFAC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820deff4
	if (!ctx.cr6.eq) goto loc_820DEFF4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820defac
	if (!ctx.cr6.eq) goto loc_820DEFAC;
loc_820DEFC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820df01c
	if (!ctx.cr6.eq) goto loc_820DF01C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820df078
	ctx.lr = 0x820DEFD8;
	sub_820DF078(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820df01c
	if (!ctx.cr6.eq) goto loc_820DF01C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DEFEC;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820df060
	goto loc_820DF060;
loc_820DEFF4:
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
	// b 0x820df050
	goto loc_820DF050;
loc_820DF01C:
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
loc_820DF050:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DF05C;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820DF060:
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

__attribute__((alias("__imp__sub_820DF078"))) PPC_WEAK_FUNC(sub_820DF078);
PPC_FUNC_IMPL(__imp__sub_820DF078) {
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
	ctx.lr = 0x820DF0A4;
	sub_82082030(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,28732
	ctx.r11.s64 = ctx.r11.s64 + 28732;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820df0c0
	if (ctx.cr6.eq) goto loc_820DF0C0;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x820df0c4
	goto loc_820DF0C4;
loc_820DF0C0:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_820DF0C4:
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
	// beq cr6,0x820df104
	if (ctx.cr6.eq) goto loc_820DF104;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_820DF0FC:
	// stwu r3,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820df0fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DF0FC;
loc_820DF104:
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

__attribute__((alias("__imp__sub_820DF124"))) PPC_WEAK_FUNC(sub_820DF124);
PPC_FUNC_IMPL(__imp__sub_820DF124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF128"))) PPC_WEAK_FUNC(sub_820DF128);
PPC_FUNC_IMPL(__imp__sub_820DF128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820DF130;
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
	// ble cr6,0x820df218
	if (!ctx.cr6.gt) goto loc_820DF218;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_820DF154:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
loc_820DF160:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820df184
	if (!ctx.cr6.eq) goto loc_820DF184;
	// stwcx. r26,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820df160
	if (!ctx.cr0.eq) goto loc_820DF160;
	// b 0x820df18c
	goto loc_820DF18C;
loc_820DF184:
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_820DF18C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820df1d8
	if (!ctx.cr6.eq) goto loc_820DF1D8;
loc_820DF198:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82247328
	ctx.lr = 0x820DF1A0;
	sub_82247328(ctx, base);
loc_820DF1A0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820df1c4
	if (!ctx.cr6.eq) goto loc_820DF1C4;
	// stwcx. r26,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820df1a0
	if (!ctx.cr0.eq) goto loc_820DF1A0;
	// b 0x820df1cc
	goto loc_820DF1CC;
loc_820DF1C4:
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_820DF1CC:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820df198
	if (ctx.cr6.eq) goto loc_820DF198;
loc_820DF1D8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820df1f8
	if (ctx.cr6.eq) goto loc_820DF1F8;
loc_820DF1E4:
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x820df228
	ctx.lr = 0x820DF1EC;
	sub_820DF228(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820df1e4
	if (!ctx.cr6.eq) goto loc_820DF1E4;
loc_820DF1F8:
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
	// blt cr6,0x820df154
	if (ctx.cr6.lt) goto loc_820DF154;
loc_820DF218:
	// stw r28,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DF224"))) PPC_WEAK_FUNC(sub_820DF224);
PPC_FUNC_IMPL(__imp__sub_820DF224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF228"))) PPC_WEAK_FUNC(sub_820DF228);
PPC_FUNC_IMPL(__imp__sub_820DF228) {
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
	// beq cr6,0x820df324
	if (ctx.cr6.eq) goto loc_820DF324;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,10608
	ctx.r31.s64 = ctx.r11.s64 + 10608;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820DF25C;
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
	// bne cr6,0x820df318
	if (!ctx.cr6.eq) goto loc_820DF318;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820df318
	if (ctx.cr6.eq) goto loc_820DF318;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820df318
	if (!ctx.cr6.lt) goto loc_820DF318;
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
	// beq cr6,0x820df2f0
	if (ctx.cr6.eq) goto loc_820DF2F0;
loc_820DF2C8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820df2e8
	if (ctx.cr6.eq) goto loc_820DF2E8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820df2c8
	if (!ctx.cr6.eq) goto loc_820DF2C8;
	// b 0x820df2f0
	goto loc_820DF2F0;
loc_820DF2E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820DF2F0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820df308
	if (!ctx.cr6.eq) goto loc_820DF308;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_820DF308:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DF314;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_820DF318:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DF324;
	sub_823051A8(ctx, base);
loc_820DF324:
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

__attribute__((alias("__imp__sub_820DF33C"))) PPC_WEAK_FUNC(sub_820DF33C);
PPC_FUNC_IMPL(__imp__sub_820DF33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF340"))) PPC_WEAK_FUNC(sub_820DF340);
PPC_FUNC_IMPL(__imp__sub_820DF340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DF348;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 | 1;
	// ori r29,r10,6
	ctx.r29.u64 = ctx.r10.u64 | 6;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x820df380
	if (!ctx.cr6.eq) goto loc_820DF380;
	// bl 0x820ddca8
	ctx.lr = 0x820DF370;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820df390
	if (ctx.cr6.eq) goto loc_820DF390;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820df3b0
	goto loc_820DF3B0;
loc_820DF380:
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x820df4a4
	if (ctx.cr6.eq) goto loc_820DF4A4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820df398
	if (!ctx.cr6.eq) goto loc_820DF398;
loc_820DF390:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820df3b0
	goto loc_820DF3B0;
loc_820DF398:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820DF3AC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820DF3B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820df4a4
	if (ctx.cr6.eq) goto loc_820DF4A4;
	// lhz r11,178(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 178);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820df4a4
	if (!ctx.cr6.lt) goto loc_820DF4A4;
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
	// beq cr6,0x820df4a4
	if (ctx.cr6.eq) goto loc_820DF4A4;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820df400
	if (ctx.cr6.eq) goto loc_820DF400;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820df4a4
	if (ctx.cr6.eq) goto loc_820DF4A4;
loc_820DF400:
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820df4a4
	if (!ctx.cr6.eq) goto loc_820DF4A4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820df498
	if (!ctx.cr6.eq) goto loc_820DF498;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r10,r11,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820df498
	if (ctx.cr6.eq) goto loc_820DF498;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820ddd60
	ctx.lr = 0x820DF434;
	sub_820DDD60(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x820df454
	if (!ctx.cr6.eq) goto loc_820DF454;
	// bl 0x820ddca8
	ctx.lr = 0x820DF444;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820df45c
	if (ctx.cr6.eq) goto loc_820DF45C;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820df48c
	goto loc_820DF48C;
loc_820DF454:
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820df464
	if (!ctx.cr6.eq) goto loc_820DF464;
loc_820DF45C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820df48c
	goto loc_820DF48C;
loc_820DF464:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820df474
	if (!ctx.cr6.eq) goto loc_820DF474;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820df488
	goto loc_820DF488;
loc_820DF474:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820DF488;
	sub_820F3178(ctx, base);
loc_820DF488:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820DF48C:
	// bl 0x820dddc8
	ctx.lr = 0x820DF490;
	sub_820DDDC8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820df4a4
	if (!ctx.cr6.eq) goto loc_820DF4A4;
loc_820DF498:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820DF4A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DF4B0"))) PPC_WEAK_FUNC(sub_820DF4B0);
PPC_FUNC_IMPL(__imp__sub_820DF4B0) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820df4f0
	if (!ctx.cr6.eq) goto loc_820DF4F0;
	// bl 0x820ddca8
	ctx.lr = 0x820DF4E0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820df508
	if (ctx.cr6.eq) goto loc_820DF508;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820df528
	goto loc_820DF528;
loc_820DF4F0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820df544
	if (ctx.cr6.eq) goto loc_820DF544;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820df510
	if (!ctx.cr6.eq) goto loc_820DF510;
loc_820DF508:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820df528
	goto loc_820DF528;
loc_820DF510:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820DF524;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820DF528:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820df544
	if (ctx.cr6.eq) goto loc_820DF544;
	// lhz r10,246(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 246);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sth r9,246(r11)
	PPC_STORE_U16(ctx.r11.u32 + 246, ctx.r9.u16);
	// b 0x820df54c
	goto loc_820DF54C;
loc_820DF544:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_820DF54C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820df5ec
	if (ctx.cr6.eq) goto loc_820DF5EC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x820ddd60
	ctx.lr = 0x820DF560;
	sub_820DDD60(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,264
	ctx.r6.s64 = 264;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820DF578;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820df5c0
	if (ctx.cr6.eq) goto loc_820DF5C0;
loc_820DF584:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820df59c
	if (ctx.cr6.eq) goto loc_820DF59C;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x820daf68
	ctx.lr = 0x820DF59C;
	sub_820DAF68(ctx, base);
loc_820DF59C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,264
	ctx.r6.s64 = 264;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820DF5B4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820df584
	if (!ctx.cr6.eq) goto loc_820DF584;
loc_820DF5C0:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DF5CC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820df5d8
	if (!ctx.cr6.eq) goto loc_820DF5D8;
	// bl 0x821b3000
	ctx.lr = 0x820DF5D8;
	sub_821B3000(ctx, base);
loc_820DF5D8:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820df5ec
	if (ctx.cr6.eq) goto loc_820DF5EC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_820DF5EC:
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

__attribute__((alias("__imp__sub_820DF604"))) PPC_WEAK_FUNC(sub_820DF604);
PPC_FUNC_IMPL(__imp__sub_820DF604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF608"))) PPC_WEAK_FUNC(sub_820DF608);
PPC_FUNC_IMPL(__imp__sub_820DF608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820DF610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// beq cr6,0x820df67c
	if (ctx.cr6.eq) goto loc_820DF67C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r9,56
	ctx.r3.s64 = ctx.r9.s64 + 56;
	// bl 0x82082030
	ctx.lr = 0x820DF65C;
	sub_82082030(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820DF66C;
	sub_8233E4E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x820df6a0
	goto loc_820DF6A0;
loc_820DF67C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x820df6bc
	if (ctx.cr6.eq) goto loc_820DF6BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82082030
	ctx.lr = 0x820DF69C;
	sub_82082030(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
loc_820DF6A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820df6bc
	if (ctx.cr6.eq) goto loc_820DF6BC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820DF6B8;
	sub_8233E4E0(ctx, base);
	// b 0x820df6c0
	goto loc_820DF6C0;
loc_820DF6BC:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_820DF6C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// beq cr6,0x820df70c
	if (ctx.cr6.eq) goto loc_820DF70C;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820df70c
	if (ctx.cr6.eq) goto loc_820DF70C;
	// lhz r11,246(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 246);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// sth r9,246(r30)
	PPC_STORE_U16(ctx.r30.u32 + 246, ctx.r9.u16);
	// bne cr6,0x820df704
	if (!ctx.cr6.eq) goto loc_820DF704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820DF700;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820DF704:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_820DF70C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DF718"))) PPC_WEAK_FUNC(sub_820DF718);
PPC_FUNC_IMPL(__imp__sub_820DF718) {
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
	// beq cr6,0x820df814
	if (ctx.cr6.eq) goto loc_820DF814;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,28788
	ctx.r31.s64 = ctx.r11.s64 + 28788;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820DF74C;
	sub_823052D8(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
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
	// bne cr6,0x820df808
	if (!ctx.cr6.eq) goto loc_820DF808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820df808
	if (ctx.cr6.eq) goto loc_820DF808;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820df808
	if (!ctx.cr6.lt) goto loc_820DF808;
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
	// beq cr6,0x820df7e0
	if (ctx.cr6.eq) goto loc_820DF7E0;
loc_820DF7B8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820df7d8
	if (ctx.cr6.eq) goto loc_820DF7D8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820df7b8
	if (!ctx.cr6.eq) goto loc_820DF7B8;
	// b 0x820df7e0
	goto loc_820DF7E0;
loc_820DF7D8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820DF7E0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820df7f8
	if (!ctx.cr6.eq) goto loc_820DF7F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_820DF7F8:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DF804;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_820DF808:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DF814;
	sub_823051A8(ctx, base);
loc_820DF814:
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

__attribute__((alias("__imp__sub_820DF82C"))) PPC_WEAK_FUNC(sub_820DF82C);
PPC_FUNC_IMPL(__imp__sub_820DF82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF830"))) PPC_WEAK_FUNC(sub_820DF830);
PPC_FUNC_IMPL(__imp__sub_820DF830) {
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
	// addi r31,r11,28788
	ctx.r31.s64 = ctx.r11.s64 + 28788;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820DF858;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820df87c
	if (ctx.cr6.eq) goto loc_820DF87C;
loc_820DF864:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820df8ac
	if (!ctx.cr6.eq) goto loc_820DF8AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820df864
	if (!ctx.cr6.eq) goto loc_820DF864;
loc_820DF87C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820df8d4
	if (!ctx.cr6.eq) goto loc_820DF8D4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820dfb48
	ctx.lr = 0x820DF890;
	sub_820DFB48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820df8d4
	if (!ctx.cr6.eq) goto loc_820DF8D4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DF8A4;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820df918
	goto loc_820DF918;
loc_820DF8AC:
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
	// b 0x820df908
	goto loc_820DF908;
loc_820DF8D4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
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
loc_820DF908:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DF914;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820DF918:
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

__attribute__((alias("__imp__sub_820DF930"))) PPC_WEAK_FUNC(sub_820DF930);
PPC_FUNC_IMPL(__imp__sub_820DF930) {
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
	// beq cr6,0x820dfa2c
	if (ctx.cr6.eq) goto loc_820DFA2C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,28844
	ctx.r31.s64 = ctx.r11.s64 + 28844;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820DF964;
	sub_823052D8(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
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
	// bne cr6,0x820dfa20
	if (!ctx.cr6.eq) goto loc_820DFA20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820dfa20
	if (ctx.cr6.eq) goto loc_820DFA20;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820dfa20
	if (!ctx.cr6.lt) goto loc_820DFA20;
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
	// beq cr6,0x820df9f8
	if (ctx.cr6.eq) goto loc_820DF9F8;
loc_820DF9D0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820df9f0
	if (ctx.cr6.eq) goto loc_820DF9F0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820df9d0
	if (!ctx.cr6.eq) goto loc_820DF9D0;
	// b 0x820df9f8
	goto loc_820DF9F8;
loc_820DF9F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820DF9F8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820dfa10
	if (!ctx.cr6.eq) goto loc_820DFA10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_820DFA10:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DFA1C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_820DFA20:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DFA2C;
	sub_823051A8(ctx, base);
loc_820DFA2C:
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

__attribute__((alias("__imp__sub_820DFA44"))) PPC_WEAK_FUNC(sub_820DFA44);
PPC_FUNC_IMPL(__imp__sub_820DFA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DFA48"))) PPC_WEAK_FUNC(sub_820DFA48);
PPC_FUNC_IMPL(__imp__sub_820DFA48) {
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
	// addi r31,r11,28844
	ctx.r31.s64 = ctx.r11.s64 + 28844;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820DFA70;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dfa94
	if (ctx.cr6.eq) goto loc_820DFA94;
loc_820DFA7C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dfac4
	if (!ctx.cr6.eq) goto loc_820DFAC4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dfa7c
	if (!ctx.cr6.eq) goto loc_820DFA7C;
loc_820DFA94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dfaec
	if (!ctx.cr6.eq) goto loc_820DFAEC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820dfc00
	ctx.lr = 0x820DFAA8;
	sub_820DFC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dfaec
	if (!ctx.cr6.eq) goto loc_820DFAEC;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DFABC;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820dfb30
	goto loc_820DFB30;
loc_820DFAC4:
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
	// b 0x820dfb20
	goto loc_820DFB20;
loc_820DFAEC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
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
loc_820DFB20:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DFB2C;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820DFB30:
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

__attribute__((alias("__imp__sub_820DFB48"))) PPC_WEAK_FUNC(sub_820DFB48);
PPC_FUNC_IMPL(__imp__sub_820DFB48) {
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
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82082030
	ctx.lr = 0x820DFB7C;
	sub_82082030(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,28788
	ctx.r11.s64 = ctx.r11.s64 + 28788;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dfb98
	if (ctx.cr6.eq) goto loc_820DFB98;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x820dfb9c
	goto loc_820DFB9C;
loc_820DFB98:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_820DFB9C:
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
	// beq cr6,0x820dfbdc
	if (ctx.cr6.eq) goto loc_820DFBDC;
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_820DFBD4:
	// stwu r3,48(r10)
	ea = 48 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820dfbd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DFBD4;
loc_820DFBDC:
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

__attribute__((alias("__imp__sub_820DFBFC"))) PPC_WEAK_FUNC(sub_820DFBFC);
PPC_FUNC_IMPL(__imp__sub_820DFBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DFC00"))) PPC_WEAK_FUNC(sub_820DFC00);
PPC_FUNC_IMPL(__imp__sub_820DFC00) {
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
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
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
	ctx.lr = 0x820DFC2C;
	sub_82082030(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,28844
	ctx.r11.s64 = ctx.r11.s64 + 28844;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dfc48
	if (ctx.cr6.eq) goto loc_820DFC48;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x820dfc4c
	goto loc_820DFC4C;
loc_820DFC48:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_820DFC4C:
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
	// beq cr6,0x820dfc8c
	if (ctx.cr6.eq) goto loc_820DFC8C;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_820DFC84:
	// stwu r3,64(r10)
	ea = 64 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820dfc84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DFC84;
loc_820DFC8C:
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

__attribute__((alias("__imp__sub_820DFCAC"))) PPC_WEAK_FUNC(sub_820DFCAC);
PPC_FUNC_IMPL(__imp__sub_820DFCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DFCB0"))) PPC_WEAK_FUNC(sub_820DFCB0);
PPC_FUNC_IMPL(__imp__sub_820DFCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DFCB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820dc6f8
	ctx.lr = 0x820DFCC4;
	sub_820DC6F8(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r11,r31,484
	ctx.r11.s64 = ctx.r31.s64 + 484;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r11,25448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25448, ctx.r11.u32);
	// addi r11,r31,760
	ctx.r11.s64 = ctx.r31.s64 + 760;
	// addi r10,r31,1104
	ctx.r10.s64 = ctx.r31.s64 + 1104;
	// stw r11,25396(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25396, ctx.r11.u32);
	// addi r11,r31,1536
	ctx.r11.s64 = ctx.r31.s64 + 1536;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// stw r10,25460(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25460, ctx.r10.u32);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// stw r11,25456(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25456, ctx.r11.u32);
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// addi r9,r31,1384
	ctx.r9.s64 = ctx.r31.s64 + 1384;
	// addi r10,r31,1920
	ctx.r10.s64 = ctx.r31.s64 + 1920;
	// addi r11,r31,2732
	ctx.r11.s64 = ctx.r31.s64 + 2732;
	// stw r9,25468(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25468, ctx.r9.u32);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// stw r10,25392(r5)
	PPC_STORE_U32(ctx.r5.u32 + 25392, ctx.r10.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r11,25388(r4)
	PPC_STORE_U32(ctx.r4.u32 + 25388, ctx.r11.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// addi r9,r31,2180
	ctx.r9.s64 = ctx.r31.s64 + 2180;
	// addi r10,r31,3052
	ctx.r10.s64 = ctx.r31.s64 + 3052;
	// addi r11,r31,3548
	ctx.r11.s64 = ctx.r31.s64 + 3548;
	// stw r9,25476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 25476, ctx.r9.u32);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// stw r10,25380(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25380, ctx.r10.u32);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// stw r11,25408(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25408, ctx.r11.u32);
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// addi r9,r31,3484
	ctx.r9.s64 = ctx.r31.s64 + 3484;
	// addi r10,r31,3656
	ctx.r10.s64 = ctx.r31.s64 + 3656;
	// addi r11,r31,3916
	ctx.r11.s64 = ctx.r31.s64 + 3916;
	// stw r9,25404(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25404, ctx.r9.u32);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// stw r10,25400(r5)
	PPC_STORE_U32(ctx.r5.u32 + 25400, ctx.r10.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r11,25420(r4)
	PPC_STORE_U32(ctx.r4.u32 + 25420, ctx.r11.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// addi r9,r31,3788
	ctx.r9.s64 = ctx.r31.s64 + 3788;
	// addi r10,r31,4056
	ctx.r10.s64 = ctx.r31.s64 + 4056;
	// addi r11,r31,4160
	ctx.r11.s64 = ctx.r31.s64 + 4160;
	// stw r9,25416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 25416, ctx.r9.u32);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// stw r10,25424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25424, ctx.r10.u32);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// stw r11,25412(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25412, ctx.r11.u32);
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// addi r9,r31,4108
	ctx.r9.s64 = ctx.r31.s64 + 4108;
	// addi r10,r31,4252
	ctx.r10.s64 = ctx.r31.s64 + 4252;
	// addi r11,r31,4372
	ctx.r11.s64 = ctx.r31.s64 + 4372;
	// stw r9,25428(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25428, ctx.r9.u32);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// stw r10,25432(r5)
	PPC_STORE_U32(ctx.r5.u32 + 25432, ctx.r10.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r11,25440(r4)
	PPC_STORE_U32(ctx.r4.u32 + 25440, ctx.r11.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// addi r9,r31,6148
	ctx.r9.s64 = ctx.r31.s64 + 6148;
	// addi r10,r31,4424
	ctx.r10.s64 = ctx.r31.s64 + 4424;
	// addi r11,r31,4776
	ctx.r11.s64 = ctx.r31.s64 + 4776;
	// stw r9,25436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 25436, ctx.r9.u32);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// stw r10,25444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25444, ctx.r10.u32);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// stw r11,25464(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25464, ctx.r11.u32);
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r31,4484
	ctx.r9.s64 = ctx.r31.s64 + 4484;
	// addi r10,r31,4848
	ctx.r10.s64 = ctx.r31.s64 + 4848;
	// stw r3,14500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14500, ctx.r3.u32);
	// addi r11,r31,4948
	ctx.r11.s64 = ctx.r31.s64 + 4948;
	// stw r9,25452(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25452, ctx.r9.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r10,25480(r5)
	PPC_STORE_U32(ctx.r5.u32 + 25480, ctx.r10.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r11,25472(r4)
	PPC_STORE_U32(ctx.r4.u32 + 25472, ctx.r11.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r11,r31,5020
	ctx.r11.s64 = ctx.r31.s64 + 5020;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// stw r11,25484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25484, ctx.r11.u32);
	// addi r10,r31,5992
	ctx.r10.s64 = ctx.r31.s64 + 5992;
	// addi r9,r31,6016
	ctx.r9.s64 = ctx.r31.s64 + 6016;
	// stw r10,25512(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25512, ctx.r10.u32);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// stw r9,25516(r5)
	PPC_STORE_U32(ctx.r5.u32 + 25516, ctx.r9.u32);
	// addi r11,r31,5272
	ctx.r11.s64 = ctx.r31.s64 + 5272;
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// stw r11,25488(r4)
	PPC_STORE_U32(ctx.r4.u32 + 25488, ctx.r11.u32);
	// addi r9,r31,5408
	ctx.r9.s64 = ctx.r31.s64 + 5408;
	// addi r10,r31,5328
	ctx.r10.s64 = ctx.r31.s64 + 5328;
	// stw r9,25496(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25496, ctx.r9.u32);
	// addi r11,r31,5432
	ctx.r11.s64 = ctx.r31.s64 + 5432;
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// stw r10,25492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 25492, ctx.r10.u32);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// stw r11,25500(r5)
	PPC_STORE_U32(ctx.r5.u32 + 25500, ctx.r11.u32);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// addi r10,r31,5464
	ctx.r10.s64 = ctx.r31.s64 + 5464;
	// addi r11,r31,6164
	ctx.r11.s64 = ctx.r31.s64 + 6164;
	// stw r10,25504(r4)
	PPC_STORE_U32(ctx.r4.u32 + 25504, ctx.r10.u32);
	// addi r9,r31,5752
	ctx.r9.s64 = ctx.r31.s64 + 5752;
	// stw r11,25520(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25520, ctx.r11.u32);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// stw r9,25508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 25508, ctx.r9.u32);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// addi r10,r31,6248
	ctx.r10.s64 = ctx.r31.s64 + 6248;
	// addi r9,r8,-14688
	ctx.r9.s64 = ctx.r8.s64 + -14688;
	// addi r11,r7,-14624
	ctx.r11.s64 = ctx.r7.s64 + -14624;
	// stw r10,25384(r5)
	PPC_STORE_U32(ctx.r5.u32 + 25384, ctx.r10.u32);
	// stw r9,25524(r4)
	PPC_STORE_U32(ctx.r4.u32 + 25524, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25528(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25528, ctx.r11.u32);
	// bl 0x82081c00
	ctx.lr = 0x820DFEA4;
	sub_82081C00(ctx, base);
	// lis r5,-32172
	ctx.r5.s64 = -2108424192;
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r29,r5,8720
	ctx.r29.s64 = ctx.r5.s64 + 8720;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,8720(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8720, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// bl 0x821b3968
	ctx.lr = 0x820DFEC4;
	sub_821B3968(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// lis r30,-32197
	ctx.r30.s64 = -2110062592;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// ori r11,r4,128
	ctx.r11.u64 = ctx.r4.u64 | 128;
	// stb r11,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r11.u8);
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DFEE4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dfef0
	if (!ctx.cr6.eq) goto loc_820DFEF0;
	// bl 0x821b3000
	ctx.lr = 0x820DFEF0;
	sub_821B3000(ctx, base);
loc_820DFEF0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dff04
	if (ctx.cr6.eq) goto loc_820DFF04;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820DFF04:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x820DFF0C;
	sub_82081C00(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r29,r9,8776
	ctx.r29.s64 = ctx.r9.s64 + 8776;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,8776(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8776, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// bl 0x821b3a18
	ctx.lr = 0x820DFF2C;
	sub_821B3A18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r8,44(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// stb r11,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x820DFF48;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dff54
	if (!ctx.cr6.eq) goto loc_820DFF54;
	// bl 0x821b3000
	ctx.lr = 0x820DFF54;
	sub_821B3000(ctx, base);
loc_820DFF54:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dff70
	if (ctx.cr6.eq) goto loc_820DFF70;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_820DFF70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DFF78"))) PPC_WEAK_FUNC(sub_820DFF78);
PPC_FUNC_IMPL(__imp__sub_820DFF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820DFF80;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa34
	ctx.lr = 0x820DFF88;
	__savefpr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r15,-32197
	ctx.r15.s64 = -2110062592;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r3,-27096(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DFF9C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dffa8
	if (!ctx.cr6.eq) goto loc_820DFFA8;
	// bl 0x821b3000
	ctx.lr = 0x820DFFA8;
	sub_821B3000(ctx, base);
loc_820DFFA8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r18,r3,20
	ctx.r18.s64 = ctx.r3.s64 + 20;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r11,16384
	ctx.r9.s64 = ctx.r11.s64 + 16384;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820dffd0
	if (!ctx.cr6.gt) goto loc_820DFFD0;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4492
	ctx.r9.s64 = ctx.r10.s64 + 4492;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820DFFD0:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// addi r9,r11,16384
	ctx.r9.s64 = ctx.r11.s64 + 16384;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// stw r9,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r9.u32);
	// add r14,r11,r10
	ctx.r14.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821b3348
	ctx.lr = 0x820DFFF4;
	sub_821B3348(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r26,3
	ctx.r26.s64 = 3;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r21,r11,-31384
	ctx.r21.s64 = ctx.r11.s64 + -31384;
	// beq cr6,0x820e0020
	if (ctx.cr6.eq) goto loc_820E0020;
	// stfs f28,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r20,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r20.u32);
	// b 0x820e0024
	goto loc_820E0024;
loc_820E0020:
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_820E0024:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r31,r10,31376
	ctx.r31.s64 = ctx.r10.s64 + 31376;
	// addi r8,r9,22200
	ctx.r8.s64 = ctx.r9.s64 + 22200;
	// addi r16,r11,-21792
	ctx.r16.s64 = ctx.r11.s64 + -21792;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r16,88
	ctx.r3.s64 = ctx.r16.s64 + 88;
	// lfs f27,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f27.f64 = double(temp.f32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lfs f30,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// bl 0x823052d8
	ctx.lr = 0x820E0058;
	sub_823052D8(ctx, base);
	// lfs f29,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r17,r11,-29208
	ctx.r17.s64 = ctx.r11.s64 + -29208;
	// lwz r31,76(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 76);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e0314
	if (ctx.cr6.eq) goto loc_820E0314;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r23,r14,-4
	ctx.r23.s64 = ctx.r14.s64 + -4;
	// addi r22,r16,6304
	ctx.r22.s64 = ctx.r16.s64 + 6304;
	// addi r24,r11,-31392
	ctx.r24.s64 = ctx.r11.s64 + -31392;
loc_820E0080:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r25,128(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r10,r11,0,20,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// rlwinm r10,r10,0,22,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e0308
	if (!ctx.cr6.eq) goto loc_820E0308;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e0308
	if (ctx.cr6.eq) goto loc_820E0308;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,31,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r9,129
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 129, ctx.xer);
	// bne cr6,0x820e0308
	if (!ctx.cr6.eq) goto loc_820E0308;
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e0148
	if (ctx.cr6.eq) goto loc_820E0148;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x820da900
	ctx.lr = 0x820E00D8;
	sub_820DA900(ctx, base);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e0134
	if (ctx.cr6.eq) goto loc_820E0134;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e0620
	ctx.lr = 0x820E00F0;
	sub_820E0620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// bne cr6,0x820e0108
	if (!ctx.cr6.eq) goto loc_820E0108;
	// rlwinm r10,r11,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
loc_820E0108:
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e06d0
	ctx.lr = 0x820E0118;
	sub_820E06D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// bne cr6,0x820e0130
	if (!ctx.cr6.eq) goto loc_820E0130;
	// rlwinm r10,r11,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
loc_820E0130:
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
loc_820E0134:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r10,129
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 129, ctx.xer);
	// bne cr6,0x820e0308
	if (!ctx.cr6.eq) goto loc_820E0308;
loc_820E0148:
	// lhz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e0170
	if (!ctx.cr6.eq) goto loc_820E0170;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bge cr6,0x820e0170
	if (!ctx.cr6.lt) goto loc_820E0170;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r31,4(r22)
	ea = 4 + ctx.r22.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r22.u32 = ea;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_820E0170:
	// lhz r11,178(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 178);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x820e01a8
	if (ctx.cr6.eq) goto loc_820E01A8;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820e01a4
	if (!ctx.cr6.lt) goto loc_820E01A4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r17,8
	ctx.r10.s64 = ctx.r17.s64 + 8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e01a4
	if (ctx.cr6.eq) goto loc_820E01A4;
	// lfs f31,472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820e01a8
	goto loc_820E01A8;
loc_820E01A4:
	// fmr f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f27.f64;
loc_820E01A8:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e02c0
	if (ctx.cr6.eq) goto loc_820E02C0;
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0264
	if (ctx.cr6.eq) goto loc_820E0264;
	// stfs f29,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x820da6f8
	ctx.lr = 0x820E01E0;
	sub_820DA6F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0308
	if (ctx.cr6.eq) goto loc_820E0308;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x820E01F4;
	sub_82081C00(ctx, base);
	// bl 0x821b3650
	ctx.lr = 0x820E01F8;
	sub_821B3650(ctx, base);
	// lwz r11,-27096(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + -27096);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82388734
	ctx.lr = 0x820E0208;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e0214
	if (!ctx.cr6.eq) goto loc_820E0214;
	// bl 0x821b3000
	ctx.lr = 0x820E0214;
	sub_821B3000(ctx, base);
loc_820E0214:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0228
	if (ctx.cr6.eq) goto loc_820E0228;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820E0228:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e0254
	if (ctx.cr6.eq) goto loc_820E0254;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821b60c0
	ctx.lr = 0x820E0250;
	sub_821B60C0(ctx, base);
	// b 0x820e0308
	goto loc_820E0308;
loc_820E0254:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821b60c0
	ctx.lr = 0x820E0260;
	sub_821B60C0(ctx, base);
	// b 0x820e0308
	goto loc_820E0308;
loc_820E0264:
	// lwz r11,264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r31.u32);
	// lwz r11,264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,264(r27)
	PPC_STORE_U32(ctx.r27.u32 + 264, ctx.r11.u32);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820e0308
	if (ctx.cr6.lt) goto loc_820E0308;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b60c0
	ctx.lr = 0x820E0294;
	sub_821B60C0(ctx, base);
	// bl 0x821b3348
	ctx.lr = 0x820E0298;
	sub_821B3348(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e02b8
	if (ctx.cr6.eq) goto loc_820E02B8;
	// stfs f28,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r20,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r20.u32);
	// b 0x820e0308
	goto loc_820E0308;
loc_820E02B8:
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// b 0x820e0308
	goto loc_820E0308;
loc_820E02C0:
	// cmplwi cr6,r29,4096
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4096, ctx.xer);
	// bge cr6,0x820e02d4
	if (!ctx.cr6.lt) goto loc_820E02D4;
	// stwu r31,4(r23)
	ea = 4 + ctx.r23.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r23.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x820e0308
	goto loc_820E0308;
loc_820E02D4:
	// stfs f29,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x820da6f8
	ctx.lr = 0x820E02F0;
	sub_820DA6F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0308
	if (ctx.cr6.eq) goto loc_820E0308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820daa80
	ctx.lr = 0x820E0308;
	sub_820DAA80(ctx, base);
loc_820E0308:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x820e0080
	if (!ctx.cr6.eq) goto loc_820E0080;
loc_820E0314:
	// addi r3,r16,88
	ctx.r3.s64 = ctx.r16.s64 + 88;
	// bl 0x823051a8
	ctx.lr = 0x820E031C;
	sub_823051A8(ctx, base);
	// lwz r11,264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0338
	if (ctx.cr6.eq) goto loc_820E0338;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b60c0
	ctx.lr = 0x820E0334;
	sub_821B60C0(ctx, base);
	// b 0x820e034c
	goto loc_820E034C;
loc_820E0338:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E034C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E034C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17344
	ctx.r11.s64 = ctx.r11.s64 + -17344;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820e0368
	if (!ctx.cr6.eq) goto loc_820E0368;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
loc_820E0368:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820e03f4
	if (ctx.cr6.eq) goto loc_820E03F4;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
loc_820E0374:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r11,178(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 178);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x820e03b4
	if (ctx.cr6.eq) goto loc_820E03B4;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820e03b0
	if (!ctx.cr6.lt) goto loc_820E03B0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r17,8
	ctx.r10.s64 = ctx.r17.s64 + 8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e03b0
	if (ctx.cr6.eq) goto loc_820E03B0;
	// lfs f31,472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820e03b4
	goto loc_820E03B4;
loc_820E03B0:
	// fmr f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f27.f64;
loc_820E03B4:
	// stfs f29,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x820da6f8
	ctx.lr = 0x820E03D0;
	sub_820DA6F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e03e8
	if (ctx.cr6.eq) goto loc_820E03E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820daa80
	ctx.lr = 0x820E03E8;
	sub_820DAA80(ctx, base);
loc_820E03E8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x820e0374
	if (!ctx.cr0.eq) goto loc_820E0374;
loc_820E03F4:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x820e045c
	if (ctx.cr6.eq) goto loc_820E045C;
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// bge cr6,0x820e0418
	if (!ctx.cr6.lt) goto loc_820E0418;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820E0418:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x820e0438
	if (ctx.cr6.eq) goto loc_820E0438;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820E0438:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,-16384
	ctx.r9.s64 = ctx.r11.s64 + -16384;
	// stw r9,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r9.u32);
	// stw r10,14500(r16)
	PPC_STORE_U32(ctx.r16.u32 + 14500, ctx.r10.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa80
	ctx.lr = 0x820E0458;
	__restfpr_27(ctx, base);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_820E045C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,14500(r16)
	PPC_STORE_U32(ctx.r16.u32 + 14500, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa80
	ctx.lr = 0x820E0470;
	__restfpr_27(ctx, base);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E0474"))) PPC_WEAK_FUNC(sub_820E0474);
PPC_FUNC_IMPL(__imp__sub_820E0474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0478"))) PPC_WEAK_FUNC(sub_820E0478);
PPC_FUNC_IMPL(__imp__sub_820E0478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820E0480;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r30,r11,-21792
	ctx.r30.s64 = ctx.r11.s64 + -21792;
	// lwz r11,14500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e057c
	if (ctx.cr6.eq) goto loc_820E057C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// addi r28,r30,6308
	ctx.r28.s64 = ctx.r30.s64 + 6308;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820E04A8:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e0560
	if (!ctx.cr6.eq) goto loc_820E0560;
	// rlwinm r11,r11,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e0560
	if (!ctx.cr6.eq) goto loc_820E0560;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x823052d8
	ctx.lr = 0x820E04D4;
	sub_823052D8(ctx, base);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// rlwimi r9,r11,17,26,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x20) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFDF);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwimi r9,r11,17,14,14
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x20000) | (ctx.r9.u64 & 0xFFFFFFFFFFFDFFFF);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// bne cr6,0x820e0558
	if (!ctx.cr6.eq) goto loc_820E0558;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e0514
	if (!ctx.cr6.eq) goto loc_820E0514;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// b 0x820e0520
	goto loc_820E0520;
loc_820E0514:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
loc_820E0520:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e0538
	if (!ctx.cr6.eq) goto loc_820E0538;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// b 0x820e0544
	goto loc_820E0544;
loc_820E0538:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
loc_820E0544:
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
loc_820E0558:
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x823051a8
	ctx.lr = 0x820E0560;
	sub_823051A8(ctx, base);
loc_820E0560:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x820e04a8
	if (!ctx.cr0.eq) goto loc_820E04A8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,14500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14500, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820E057C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14500, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E058C"))) PPC_WEAK_FUNC(sub_820E058C);
PPC_FUNC_IMPL(__imp__sub_820E058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0590"))) PPC_WEAK_FUNC(sub_820E0590);
PPC_FUNC_IMPL(__imp__sub_820E0590) {
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
	// addi r9,r11,-31400
	ctx.r9.s64 = ctx.r11.s64 + -31400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820e05c4
	if (ctx.cr6.eq) goto loc_820E05C4;
	// bl 0x821b3750
	ctx.lr = 0x820E05C0;
	sub_821B3750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E05C4:
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

__attribute__((alias("__imp__sub_820E05D8"))) PPC_WEAK_FUNC(sub_820E05D8);
PPC_FUNC_IMPL(__imp__sub_820E05D8) {
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
	// addi r9,r11,-31400
	ctx.r9.s64 = ctx.r11.s64 + -31400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820e060c
	if (ctx.cr6.eq) goto loc_820E060C;
	// bl 0x821b3538
	ctx.lr = 0x820E0608;
	sub_821B3538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E060C:
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

__attribute__((alias("__imp__sub_820E0620"))) PPC_WEAK_FUNC(sub_820E0620);
PPC_FUNC_IMPL(__imp__sub_820E0620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820E0628;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r28,18(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x820e0648
	if (!ctx.cr6.gt) goto loc_820E0648;
	// lwz r31,20(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// b 0x820e064c
	goto loc_820E064C;
loc_820E0648:
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
loc_820E064C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820e06b4
	if (ctx.cr6.eq) goto loc_820E06B4;
loc_820E0658:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x820e0684
	if (ctx.cr6.eq) goto loc_820E0684;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mulli r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 * 104;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e06c0
	if (!ctx.cr6.eq) goto loc_820E06C0;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x820e069c
	goto loc_820E069C;
loc_820E0684:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e06a4
	if (ctx.cr6.eq) goto loc_820E06A4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820e0620
	ctx.lr = 0x820E0698;
	sub_820E0620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_820E069C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e06c0
	if (!ctx.cr6.eq) goto loc_820E06C0;
loc_820E06A4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x820e0658
	if (ctx.cr6.lt) goto loc_820E0658;
loc_820E06B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820E06C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E06CC"))) PPC_WEAK_FUNC(sub_820E06CC);
PPC_FUNC_IMPL(__imp__sub_820E06CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E06D0"))) PPC_WEAK_FUNC(sub_820E06D0);
PPC_FUNC_IMPL(__imp__sub_820E06D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820E06D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r28,18(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x820e06f8
	if (!ctx.cr6.gt) goto loc_820E06F8;
	// lwz r31,20(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// b 0x820e06fc
	goto loc_820E06FC;
loc_820E06F8:
	// addi r31,r29,20
	ctx.r31.s64 = ctx.r29.s64 + 20;
loc_820E06FC:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820e075c
	if (ctx.cr6.eq) goto loc_820E075C;
loc_820E0708:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x820e072c
	if (ctx.cr6.eq) goto loc_820E072C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 * 104;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x820e0748
	goto loc_820E0748;
loc_820E072C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e074c
	if (ctx.cr6.eq) goto loc_820E074C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820e06d0
	ctx.lr = 0x820E0740;
	sub_820E06D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_820E0748:
	// bne cr6,0x820e0768
	if (!ctx.cr6.eq) goto loc_820E0768;
loc_820E074C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x820e0708
	if (ctx.cr6.lt) goto loc_820E0708;
loc_820E075C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820E0768:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E0774"))) PPC_WEAK_FUNC(sub_820E0774);
PPC_FUNC_IMPL(__imp__sub_820E0774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0778"))) PPC_WEAK_FUNC(sub_820E0778);
PPC_FUNC_IMPL(__imp__sub_820E0778) {
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
	ctx.lr = 0x820E0790;
	sub_82081C00(ctx, base);
	// bl 0x820e5f18
	ctx.lr = 0x820E0794;
	sub_820E5F18(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820E07A4;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e07b8
	if (!ctx.cr6.eq) goto loc_820E07B8;
	// bl 0x821b3000
	ctx.lr = 0x820E07B4;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820E07B8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e07d0
	if (ctx.cr6.eq) goto loc_820E07D0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_820E07D0:
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

__attribute__((alias("__imp__sub_820E07E4"))) PPC_WEAK_FUNC(sub_820E07E4);
PPC_FUNC_IMPL(__imp__sub_820E07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E07E8"))) PPC_WEAK_FUNC(sub_820E07E8);
PPC_FUNC_IMPL(__imp__sub_820E07E8) {
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
	ctx.lr = 0x820E0800;
	sub_82081C00(ctx, base);
	// bl 0x820e6348
	ctx.lr = 0x820E0804;
	sub_820E6348(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820E0814;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e0828
	if (!ctx.cr6.eq) goto loc_820E0828;
	// bl 0x821b3000
	ctx.lr = 0x820E0824;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820E0828:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e0840
	if (ctx.cr6.eq) goto loc_820E0840;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_820E0840:
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

__attribute__((alias("__imp__sub_820E0854"))) PPC_WEAK_FUNC(sub_820E0854);
PPC_FUNC_IMPL(__imp__sub_820E0854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0858"))) PPC_WEAK_FUNC(sub_820E0858);
PPC_FUNC_IMPL(__imp__sub_820E0858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820E0860;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
	// li r31,16
	ctx.r31.s64 = 16;
	// lfs f31,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f31.f64 = double(temp.f32);
loc_820E0880:
	// bl 0x8233c830
	ctx.lr = 0x820E0884;
	sub_8233C830(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsu f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// bne 0x820e0880
	if (!ctx.cr0.eq) goto loc_820E0880;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E08B8"))) PPC_WEAK_FUNC(sub_820E08B8);
PPC_FUNC_IMPL(__imp__sub_820E08B8) {
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
	// li r5,258
	ctx.r5.s64 = 258;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820ef6d0
	ctx.lr = 0x820E08D4;
	sub_820EF6D0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r7,r11,31376
	ctx.r7.s64 = ctx.r11.s64 + 31376;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r3,r10,-31304
	ctx.r3.s64 = ctx.r10.s64 + -31304;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// addi r10,r6,-31340
	ctx.r10.s64 = ctx.r6.s64 + -31340;
	// lfs f0,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r8.u32);
	// addi r6,r5,-31308
	ctx.r6.s64 = ctx.r5.s64 + -31308;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r5,r4,-31304
	ctx.r5.s64 = ctx.r4.s64 + -31304;
	// lfs f13,92(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r6.u32);
	// lfs f12,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stfs f12,304(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stfs f12,308(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// sth r11,332(r31)
	PPC_STORE_U16(ctx.r31.u32 + 332, ctx.r11.u16);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// sth r11,334(r31)
	PPC_STORE_U16(ctx.r31.u32 + 334, ctx.r11.u16);
	// stfs f13,316(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stfs f13,320(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stfs f13,324(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r8,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r8.u32);
	// stw r9,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r9.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r5,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r5.u32);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stb r11,384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 384, ctx.r11.u8);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r4,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r4.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stb r10,416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 416, ctx.r10.u8);
	// stfs f0,420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stb r10,417(r31)
	PPC_STORE_U8(ctx.r31.u32 + 417, ctx.r10.u8);
	// stfs f0,424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stb r10,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r10.u8);
	// stfs f0,432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// stb r10,429(r31)
	PPC_STORE_U8(ctx.r31.u32 + 429, ctx.r10.u8);
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stb r10,440(r31)
	PPC_STORE_U8(ctx.r31.u32 + 440, ctx.r10.u8);
	// stfs f0,444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// stb r10,441(r31)
	PPC_STORE_U8(ctx.r31.u32 + 441, ctx.r10.u8);
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stb r10,452(r31)
	PPC_STORE_U8(ctx.r31.u32 + 452, ctx.r10.u8);
	// stb r10,453(r31)
	PPC_STORE_U8(ctx.r31.u32 + 453, ctx.r10.u8);
	// stfs f0,460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// sth r11,456(r31)
	PPC_STORE_U16(ctx.r31.u32 + 456, ctx.r11.u16);
	// stfs f0,476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// sth r11,458(r31)
	PPC_STORE_U16(ctx.r31.u32 + 458, ctx.r11.u16);
	// stfs f0,484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// sth r11,464(r31)
	PPC_STORE_U16(ctx.r31.u32 + 464, ctx.r11.u16);
	// sth r11,466(r31)
	PPC_STORE_U16(ctx.r31.u32 + 466, ctx.r11.u16);
	// sth r11,472(r31)
	PPC_STORE_U16(ctx.r31.u32 + 472, ctx.r11.u16);
	// sth r11,474(r31)
	PPC_STORE_U16(ctx.r31.u32 + 474, ctx.r11.u16);
	// sth r11,480(r31)
	PPC_STORE_U16(ctx.r31.u32 + 480, ctx.r11.u16);
	// sth r11,482(r31)
	PPC_STORE_U16(ctx.r31.u32 + 482, ctx.r11.u16);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820E0A40"))) PPC_WEAK_FUNC(sub_820E0A40);
PPC_FUNC_IMPL(__imp__sub_820E0A40) {
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
	// bl 0x820e0bb8
	ctx.lr = 0x820E0A60;
	sub_820E0BB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0a78
	if (ctx.cr6.eq) goto loc_820E0A78;
	// bl 0x820f2238
	ctx.lr = 0x820E0A74;
	sub_820F2238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E0A78:
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

__attribute__((alias("__imp__sub_820E0A90"))) PPC_WEAK_FUNC(sub_820E0A90);
PPC_FUNC_IMPL(__imp__sub_820E0A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820E0A98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,488(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e0b44
	if (ctx.cr6.eq) goto loc_820E0B44;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r11.u32);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r27,r11,-7224
	ctx.r27.s64 = ctx.r11.s64 + -7224;
loc_820E0AC0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820e0ad0
	if (ctx.cr6.eq) goto loc_820E0AD0;
	// bl 0x822130d0
	ctx.lr = 0x820E0AD0;
	sub_822130D0(ctx, base);
loc_820E0AD0:
	// lwz r30,488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 488);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e0ae4
	if (ctx.cr6.eq) goto loc_820E0AE4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,488(r29)
	PPC_STORE_U32(ctx.r29.u32 + 488, ctx.r11.u32);
loc_820E0AE4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0b04
	if (ctx.cr6.eq) goto loc_820E0B04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E0B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E0B04:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E0B10;
	sub_82080000(ctx, base);
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0b3c
	if (ctx.cr6.eq) goto loc_820E0B3C;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// addi r3,r27,16696
	ctx.r3.s64 = ctx.r27.s64 + 16696;
	// sth r28,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r28.u16);
	// bl 0x82173038
	ctx.lr = 0x820E0B3C;
	sub_82173038(ctx, base);
loc_820E0B3C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820e0ac0
	if (!ctx.cr6.eq) goto loc_820E0AC0;
loc_820E0B44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E0B4C"))) PPC_WEAK_FUNC(sub_820E0B4C);
PPC_FUNC_IMPL(__imp__sub_820E0B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0B50"))) PPC_WEAK_FUNC(sub_820E0B50);
PPC_FUNC_IMPL(__imp__sub_820E0B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e0b68
	if (ctx.cr6.eq) goto loc_820E0B68;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820e0b74
	goto loc_820E0B74;
loc_820E0B68:
	// lhz r11,246(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 246);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_820E0B74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e0b88
	if (!ctx.cr6.eq) goto loc_820E0B88;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820E0B88:
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e0bac
	if (!ctx.cr6.eq) goto loc_820E0BAC;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_820E0BAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E0BB4"))) PPC_WEAK_FUNC(sub_820E0BB4);
PPC_FUNC_IMPL(__imp__sub_820E0BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0BB8"))) PPC_WEAK_FUNC(sub_820E0BB8);
PPC_FUNC_IMPL(__imp__sub_820E0BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820E0BC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r4,392(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,-31340
	ctx.r9.s64 = ctx.r11.s64 + -31340;
	// addi r8,r10,-31308
	ctx.r8.s64 = ctx.r10.s64 + -31308;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// stw r8,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r8.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r7,20000
	ctx.r11.s64 = ctx.r7.s64 + 20000;
	// addi r3,r11,10704
	ctx.r3.s64 = ctx.r11.s64 + 10704;
	// bl 0x821413f8
	ctx.lr = 0x820E0BF4;
	sub_821413F8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r29,r30,492
	ctx.r29.s64 = ctx.r30.s64 + 492;
	// stw r6,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r6.u32);
	// li r28,5
	ctx.r28.s64 = 5;
	// li r27,0
	ctx.r27.s64 = 0;
loc_820E0C08:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e0c28
	if (ctx.cr6.eq) goto loc_820E0C28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e6a18
	ctx.lr = 0x820E0C1C;
	sub_820E6A18(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E0C28;
	sub_82080000(ctx, base);
loc_820E0C28:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwu r27,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r29.u32 = ea;
	// bne 0x820e0c08
	if (!ctx.cr0.eq) goto loc_820E0C08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e0a90
	ctx.lr = 0x820E0C3C;
	sub_820E0A90(ctx, base);
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0c4c
	if (ctx.cr6.eq) goto loc_820E0C4C;
	// bl 0x8214a0f0
	ctx.lr = 0x820E0C4C;
	sub_8214A0F0(ctx, base);
loc_820E0C4C:
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0c64
	if (ctx.cr6.eq) goto loc_820E0C64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E0C64;
	sub_82080000(ctx, base);
loc_820E0C64:
	// lwz r3,492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0c74
	if (ctx.cr6.eq) goto loc_820E0C74;
	// bl 0x820e6230
	ctx.lr = 0x820E0C74;
	sub_820E6230(ctx, base);
loc_820E0C74:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,-31304
	ctx.r10.s64 = ctx.r11.s64 + -31304;
	// stw r10,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r10.u32);
	// stw r10,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r10.u32);
	// bl 0x820ef958
	ctx.lr = 0x820E0C8C;
	sub_820EF958(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E0C94"))) PPC_WEAK_FUNC(sub_820E0C94);
PPC_FUNC_IMPL(__imp__sub_820E0C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0C98"))) PPC_WEAK_FUNC(sub_820E0C98);
PPC_FUNC_IMPL(__imp__sub_820E0C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820E0CA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820f1228
	ctx.lr = 0x820E0CAC;
	sub_820F1228(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r4,r30,284
	ctx.r4.s64 = ctx.r30.s64 + 284;
	// bne cr6,0x820e0cbc
	if (!ctx.cr6.eq) goto loc_820E0CBC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820E0CBC:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r25,r11,20000
	ctx.r25.s64 = ctx.r11.s64 + 20000;
	// addi r3,r25,9164
	ctx.r3.s64 = ctx.r25.s64 + 9164;
	// bl 0x8213a0d0
	ctx.lr = 0x820E0CCC;
	sub_8213A0D0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r30,284
	ctx.r10.s64 = ctx.r30.s64 + 284;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0d34
	if (ctx.cr6.eq) goto loc_820E0D34;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,92(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_820E0D34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e2e18
	ctx.lr = 0x820E0D3C;
	sub_820E2E18(ctx, base);
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e0e18
	if (!ctx.cr6.eq) goto loc_820E0E18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ac008
	ctx.lr = 0x820E0D54;
	sub_820AC008(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820e0e00
	if (ctx.cr6.eq) goto loc_820E0E00;
	// lwz r26,108(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820e0e00
	if (ctx.cr6.eq) goto loc_820E0E00;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_820E0D7C:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r9,24(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e0df0
	if (ctx.cr6.eq) goto loc_820E0DF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820e0da8
	if (ctx.cr6.lt) goto loc_820E0DA8;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x820e0db0
	goto loc_820E0DB0;
loc_820E0DA8:
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
loc_820E0DB0:
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// clrlwi r5,r7,30
	ctx.r5.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820e0dd4
	if (!ctx.cr6.eq) goto loc_820E0DD4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820e0da8
	if (ctx.cr6.lt) goto loc_820E0DA8;
	// b 0x820e0df0
	goto loc_820E0DF0;
loc_820E0DD4:
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r7,r27,3,0,30
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r27.u32, 3) & 0xFFFFFFFE) | (ctx.r7.u64 & 0xFFFFFFFF00000001);
	// li r8,-1
	ctx.r8.s64 = -1;
	// rlwinm r5,r31,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e2c70
	ctx.lr = 0x820E0DF0;
	sub_820E2C70(ctx, base);
loc_820E0DF0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,960
	ctx.r29.s64 = ctx.r29.s64 + 960;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x820e0d7c
	if (ctx.cr6.lt) goto loc_820E0D7C;
loc_820E0E00:
	// lwz r3,216(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0e18
	if (ctx.cr6.eq) goto loc_820E0E18;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82177f68
	ctx.lr = 0x820E0E18;
	sub_82177F68(ctx, base);
loc_820E0E18:
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e0e4c
	if (ctx.cr6.eq) goto loc_820E0E4C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e0e40
	if (!ctx.cr6.eq) goto loc_820E0E40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820E0E3C;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820E0E40:
	// lhz r4,820(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 820);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82104598
	ctx.lr = 0x820E0E4C;
	sub_82104598(ctx, base);
loc_820E0E4C:
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e0eb8
	if (ctx.cr6.eq) goto loc_820E0EB8;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e0e74
	if (!ctx.cr6.eq) goto loc_820E0E74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820E0E70;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820E0E74:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,49096
	ctx.r10.u64 = ctx.r11.u64 | 49096;
	// lwzx r10,r25,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bge cr6,0x820e0eb8
	if (!ctx.cr6.lt) goto loc_820E0EB8;
	// addis r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 65536;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-16488
	ctx.r7.s64 = ctx.r11.s64 + -16488;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r8,49096
	ctx.r5.u64 = ctx.r8.u64 | 49096;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r3,r4,49096
	ctx.r3.u64 = ctx.r4.u64 | 49096;
	// stwx r9,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwzx r11,r25,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r25,r3
	PPC_STORE_U32(ctx.r25.u32 + ctx.r3.u32, ctx.r11.u32);
loc_820E0EB8:
	// lbz r11,347(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 347);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e0ef4
	if (ctx.cr6.eq) goto loc_820E0EF4;
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e0ef4
	if (!ctx.cr6.eq) goto loc_820E0EF4;
	// oris r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 524288;
	// addis r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 65536;
	// stw r10,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16512
	ctx.r3.s64 = ctx.r11.s64 + -16512;
	// bl 0x82106098
	ctx.lr = 0x820E0EF4;
	sub_82106098(ctx, base);
loc_820E0EF4:
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e0f10
	if (ctx.cr6.eq) goto loc_820E0F10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ac150
	ctx.lr = 0x820E0F10;
	sub_820AC150(ctx, base);
loc_820E0F10:
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e0f2c
	if (ctx.cr6.eq) goto loc_820E0F2C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ac250
	ctx.lr = 0x820E0F2C;
	sub_820AC250(ctx, base);
loc_820E0F2C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E0F34"))) PPC_WEAK_FUNC(sub_820E0F34);
PPC_FUNC_IMPL(__imp__sub_820E0F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0F38"))) PPC_WEAK_FUNC(sub_820E0F38);
PPC_FUNC_IMPL(__imp__sub_820E0F38) {
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
	// bl 0x820f12e0
	ctx.lr = 0x820E0F54;
	sub_820F12E0(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r4,r31,364
	ctx.r4.s64 = ctx.r31.s64 + 364;
	// addi r30,r11,20000
	ctx.r30.s64 = ctx.r11.s64 + 20000;
	// lbz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0f7c
	if (ctx.cr6.eq) goto loc_820E0F7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,9244
	ctx.r3.s64 = ctx.r30.s64 + 9244;
	// stb r11,20(r4)
	PPC_STORE_U8(ctx.r4.u32 + 20, ctx.r11.u8);
	// bl 0x82139fe8
	ctx.lr = 0x820E0F7C;
	sub_82139FE8(ctx, base);
loc_820E0F7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// bne cr6,0x820e0f8c
	if (!ctx.cr6.eq) goto loc_820E0F8C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820E0F8C:
	// addi r3,r30,9164
	ctx.r3.s64 = ctx.r30.s64 + 9164;
	// bl 0x82139fe8
	ctx.lr = 0x820E0F94;
	sub_82139FE8(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e0fc0
	if (!ctx.cr6.eq) goto loc_820E0FC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820E0FAC;
	sub_820AC008(ctx, base);
	// lwz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0fc0
	if (ctx.cr6.eq) goto loc_820E0FC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82178200
	ctx.lr = 0x820E0FC0;
	sub_82178200(ctx, base);
loc_820E0FC0:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e0ff0
	if (ctx.cr6.eq) goto loc_820E0FF0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e0fe8
	if (!ctx.cr6.eq) goto loc_820E0FE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820E0FE4;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820E0FE8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82104840
	ctx.lr = 0x820E0FF0;
	sub_82104840(ctx, base);
loc_820E0FF0:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e1020
	if (ctx.cr6.eq) goto loc_820E1020;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e1018
	if (!ctx.cr6.eq) goto loc_820E1018;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820E1014;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820E1018:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82104508
	ctx.lr = 0x820E1020;
	sub_82104508(ctx, base);
loc_820E1020:
	// lbz r11,347(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 347);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e105c
	if (ctx.cr6.eq) goto loc_820E105C;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e105c
	if (ctx.cr6.eq) goto loc_820E105C;
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
	ctx.lr = 0x820E105C;
	sub_822184B8(ctx, base);
loc_820E105C:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e1078
	if (ctx.cr6.eq) goto loc_820E1078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac1d0
	ctx.lr = 0x820E1078;
	sub_820AC1D0(ctx, base);
loc_820E1078:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e1094
	if (ctx.cr6.eq) goto loc_820E1094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac2d0
	ctx.lr = 0x820E1094;
	sub_820AC2D0(ctx, base);
loc_820E1094:
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

__attribute__((alias("__imp__sub_820E10AC"))) PPC_WEAK_FUNC(sub_820E10AC);
PPC_FUNC_IMPL(__imp__sub_820E10AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E10B0"))) PPC_WEAK_FUNC(sub_820E10B0);
PPC_FUNC_IMPL(__imp__sub_820E10B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820E10B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x820fc748
	ctx.lr = 0x820E10D4;
	sub_820FC748(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r28,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r28.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-31376
	ctx.r8.s64 = ctx.r10.s64 + -31376;
	// addi r7,r9,-31344
	ctx.r7.s64 = ctx.r9.s64 + -31344;
	// sth r11,820(r31)
	PPC_STORE_U16(ctx.r31.u32 + 820, ctx.r11.u16);
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820e112c
	if (ctx.cr6.eq) goto loc_820E112C;
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r31,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r31.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// sth r11,332(r31)
	PPC_STORE_U16(ctx.r31.u32 + 332, ctx.r11.u16);
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820E112C:
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x820e40c0
	ctx.lr = 0x820E1138;
	sub_820E40C0(ctx, base);
	// stw r31,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E1148"))) PPC_WEAK_FUNC(sub_820E1148);
PPC_FUNC_IMPL(__imp__sub_820E1148) {
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
	// bl 0x820e1198
	ctx.lr = 0x820E1168;
	sub_820E1198(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1180
	if (ctx.cr6.eq) goto loc_820E1180;
	// bl 0x820e5e00
	ctx.lr = 0x820E117C;
	sub_820E5E00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E1180:
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

__attribute__((alias("__imp__sub_820E1198"))) PPC_WEAK_FUNC(sub_820E1198);
PPC_FUNC_IMPL(__imp__sub_820E1198) {
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,-31376
	ctx.r9.s64 = ctx.r11.s64 + -31376;
	// addi r8,r10,-31344
	ctx.r8.s64 = ctx.r10.s64 + -31344;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r8.u32);
	// bl 0x820ef8a0
	ctx.lr = 0x820E11C8;
	sub_820EF8A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f02b8
	ctx.lr = 0x820E11D0;
	sub_820F02B8(ctx, base);
	// lwz r7,300(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820e11ec
	if (!ctx.cr6.eq) goto loc_820E11EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3550
	ctx.lr = 0x820E11E8;
	sub_820E3550(ctx, base);
	// b 0x820e1234
	goto loc_820E1234;
loc_820E11EC:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1204
	if (ctx.cr6.eq) goto loc_820E1204;
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// b 0x820e1208
	goto loc_820E1208;
loc_820E1204:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820E1208:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3180
	ctx.lr = 0x820E1210;
	sub_820E3180(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e1234
	if (!ctx.cr6.eq) goto loc_820E1234;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_820E1234:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc890
	ctx.lr = 0x820E123C;
	sub_820FC890(ctx, base);
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

__attribute__((alias("__imp__sub_820E1250"))) PPC_WEAK_FUNC(sub_820E1250);
PPC_FUNC_IMPL(__imp__sub_820E1250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820E1258;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x820ac008
	ctx.lr = 0x820E1270;
	sub_820AC008(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e12cc
	if (ctx.cr6.eq) goto loc_820E12CC;
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r10.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// bl 0x820e0778
	ctx.lr = 0x820E129C;
	sub_820E0778(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e12c0
	if (ctx.cr6.eq) goto loc_820E12C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,268(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820e10b0
	ctx.lr = 0x820E12B4;
	sub_820E10B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r30.u32);
	// b 0x820e1310
	goto loc_820E1310;
loc_820E12C0:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// b 0x820e1310
	goto loc_820E1310;
loc_820E12CC:
	// bl 0x820e0778
	ctx.lr = 0x820E12D0;
	sub_820E0778(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e12f0
	if (ctx.cr6.eq) goto loc_820E12F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,268(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820e10b0
	ctx.lr = 0x820E12E8;
	sub_820E10B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820e12f4
	goto loc_820E12F4;
loc_820E12F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820E12F4:
	// sth r28,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r28.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820E1300;
	sub_820AC008(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e3718
	ctx.lr = 0x820E1310;
	sub_820E3718(ctx, base);
loc_820E1310:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e1328
	if (!ctx.cr6.eq) goto loc_820E1328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820E1324;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820E1328:
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r28,4096
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4096, ctx.xer);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lfs f0,316(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lfs f13,312(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,312(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// lwz r10,344(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// lwz r9,348(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// lbz r8,352(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 352);
	// stb r8,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r8.u8);
	// lbz r7,353(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 353);
	// stb r7,353(r31)
	PPC_STORE_U8(ctx.r31.u32 + 353, ctx.r7.u8);
	// lbz r6,354(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 354);
	// stb r6,354(r31)
	PPC_STORE_U8(ctx.r31.u32 + 354, ctx.r6.u8);
	// lbz r5,355(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 355);
	// stb r5,355(r31)
	PPC_STORE_U8(ctx.r31.u32 + 355, ctx.r5.u8);
	// lfs f12,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,304(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lfs f11,320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,320(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// lfs f10,324(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,324(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// blt cr6,0x820e1398
	if (ctx.cr6.lt) goto loc_820E1398;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820e13ac
	goto loc_820E13AC;
loc_820E1398:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_820E13AC:
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// lwz r10,492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e13e8
	if (ctx.cr6.eq) goto loc_820E13E8;
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e13e8
	if (!ctx.cr6.eq) goto loc_820E13E8;
	// bl 0x820e07e8
	ctx.lr = 0x820E13D0;
	sub_820E07E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e13e0
	if (ctx.cr6.eq) goto loc_820E13E0;
	// bl 0x820e0858
	ctx.lr = 0x820E13DC;
	sub_820E0858(ctx, base);
	// b 0x820e13e4
	goto loc_820E13E4;
loc_820E13E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820E13E4:
	// stw r3,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r3.u32);
loc_820E13E8:
	// lis r12,161
	ctx.r12.s64 = 10551296;
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r12,r12,24418
	ctx.r12.u64 = ctx.r12.u64 | 24418;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r8.u32);
	// bl 0x820e1440
	ctx.lr = 0x820E1414;
	sub_820E1440(ctx, base);
	// lhz r11,820(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 820);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// sth r11,820(r31)
	PPC_STORE_U16(ctx.r31.u32 + 820, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f0488
	ctx.lr = 0x820E1434;
	sub_820F0488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E1440"))) PPC_WEAK_FUNC(sub_820E1440);
PPC_FUNC_IMPL(__imp__sub_820E1440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820E1448;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-3536(r1)
	ea = -3536 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e15e0
	if (ctx.cr6.eq) goto loc_820E15E0;
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820e15e0
	if (ctx.cr6.eq) goto loc_820E15E0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r28,39
	ctx.r28.s64 = 39;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820E1490:
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r27,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r27.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r6,r11,-21912
	ctx.r6.s64 = ctx.r11.s64 + -21912;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x820867a0
	ctx.lr = 0x820E14BC;
	sub_820867A0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820E14CC:
	// stwu r27,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r10.u32 = ea;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820e14cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E14CC;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// bge 0x820e1490
	if (!ctx.cr0.lt) goto loc_820E1490;
	// lwz r28,392(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 392);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// addi r26,r11,20000
	ctx.r26.s64 = ctx.r11.s64 + 20000;
	// beq cr6,0x820e1570
	if (ctx.cr6.eq) goto loc_820E1570;
	// cmpwi cr6,r28,2048
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2048, ctx.xer);
	// bge cr6,0x820e1570
	if (!ctx.cr6.lt) goto loc_820E1570;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r26,10724
	ctx.r10.s64 = ctx.r26.s64 + 10724;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1570
	if (ctx.cr6.eq) goto loc_820E1570;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x820e153c
	if (ctx.cr6.eq) goto loc_820E153C;
	// cmpwi cr6,r28,2048
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2048, ctx.xer);
	// bge cr6,0x820e153c
	if (!ctx.cr6.lt) goto loc_820E153C;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r26,10728
	ctx.r9.s64 = ctx.r26.s64 + 10728;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x820e1540
	goto loc_820E1540;
loc_820E153C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_820E1540:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e1570
	if (ctx.cr6.eq) goto loc_820E1570;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,200
	ctx.r30.s64 = ctx.r11.s64 + 200;
loc_820E1550:
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820E1560;
	sub_8233E4E0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,432
	ctx.r30.s64 = ctx.r30.s64 + 432;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// bne 0x820e1550
	if (!ctx.cr0.eq) goto loc_820E1550;
loc_820E1570:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e15ac
	if (ctx.cr6.eq) goto loc_820E15AC;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x820e15a0
	if (ctx.cr6.eq) goto loc_820E15A0;
	// cmpwi cr6,r28,2048
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2048, ctx.xer);
	// bge cr6,0x820e15a0
	if (!ctx.cr6.lt) goto loc_820E15A0;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r26,10728
	ctx.r10.s64 = ctx.r26.s64 + 10728;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x820e15d4
	goto loc_820E15D4;
loc_820E15A0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// b 0x820e15d4
	goto loc_820E15D4;
loc_820E15AC:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x820e15cc
	if (ctx.cr6.eq) goto loc_820E15CC;
	// cmpwi cr6,r28,2048
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2048, ctx.xer);
	// bge cr6,0x820e15cc
	if (!ctx.cr6.lt) goto loc_820E15CC;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r26,10728
	ctx.r10.s64 = ctx.r26.s64 + 10728;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x820e15d0
	goto loc_820E15D0;
loc_820E15CC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_820E15D0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_820E15D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820e2b70
	ctx.lr = 0x820E15E0;
	sub_820E2B70(ctx, base);
loc_820E15E0:
	// addi r1,r1,3536
	ctx.r1.s64 = ctx.r1.s64 + 3536;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E15EC"))) PPC_WEAK_FUNC(sub_820E15EC);
PPC_FUNC_IMPL(__imp__sub_820E15EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E15F0"))) PPC_WEAK_FUNC(sub_820E15F0);
PPC_FUNC_IMPL(__imp__sub_820E15F0) {
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
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r10,31376
	ctx.r30.s64 = ctx.r10.s64 + 31376;
	// beq cr6,0x820e16c0
	if (ctx.cr6.eq) goto loc_820E16C0;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r10,20000
	ctx.r8.s64 = ctx.r10.s64 + 20000;
	// ori r7,r9,65512
	ctx.r7.u64 = ctx.r9.u64 | 65512;
	// ori r5,r6,65516
	ctx.r5.u64 = ctx.r6.u64 | 65516;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r3,r8,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f7.f64));
	// fdivs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 / ctx.f4.f64));
	// stfs f3,68(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fadds f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fadds f12,f8,f3
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fnmsubs f11,f12,f0,f13
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f11,72(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f4
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// stfs f9,76(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fadds f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f7,80(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f6,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fnmsubs f3,f4,f0,f5
	ctx.f3.f64 = double(float(-(ctx.f4.f64 * ctx.f0.f64 - ctx.f5.f64)));
	// stfs f3,84(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
loc_820E16C0:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e16dc
	if (ctx.cr6.eq) goto loc_820E16DC;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820E16DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1734
	if (ctx.cr6.eq) goto loc_820E1734;
	// bl 0x820ac008
	ctx.lr = 0x820E16F0;
	sub_820AC008(ctx, base);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lfs f1,328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820e1710
	if (ctx.cr6.gt) goto loc_820E1710;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
loc_820E1710:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x820e1730
	if (!ctx.cr6.eq) goto loc_820E1730;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1738
	if (ctx.cr6.eq) goto loc_820E1738;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1600
	ctx.lr = 0x820E172C;
	sub_820F1600(ctx, base);
	// b 0x820e1738
	goto loc_820E1738;
loc_820E1730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E1734:
	// bl 0x820e1750
	ctx.lr = 0x820E1738;
	sub_820E1750(ctx, base);
loc_820E1738:
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

__attribute__((alias("__imp__sub_820E1750"))) PPC_WEAK_FUNC(sub_820E1750);
PPC_FUNC_IMPL(__imp__sub_820E1750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820E1758;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa38
	ctx.lr = 0x820E1760;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820ef818
	ctx.lr = 0x820E1770;
	sub_820EF818(ctx, base);
	// lwz r11,300(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 300);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e17c0
	if (ctx.cr6.eq) goto loc_820E17C0;
	// lwz r11,340(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 340);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1a9c
	if (ctx.cr6.eq) goto loc_820E1A9C;
	// lhz r4,332(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 332);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820e1a9c
	if (ctx.cr6.eq) goto loc_820E1A9C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820e3180
	ctx.lr = 0x820E17A8;
	sub_820E3180(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820e30a8
	ctx.lr = 0x820E17B0;
	sub_820E30A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa84
	ctx.lr = 0x820E17BC;
	__restfpr_28(ctx, base);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_820E17C0:
	// rlwinm r10,r11,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r10,300(r26)
	PPC_STORE_U32(ctx.r26.u32 + 300, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r24,r11,31376
	ctx.r24.s64 = ctx.r11.s64 + 31376;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// lfs f29,48(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x820ac008
	ctx.lr = 0x820E17E8;
	sub_820AC008(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e17fc
	if (ctx.cr6.eq) goto loc_820E17FC;
	// bl 0x82186df0
	ctx.lr = 0x820E17FC;
	sub_82186DF0(ctx, base);
loc_820E17FC:
	// lwz r10,152(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// addi r31,r11,-16112
	ctx.r31.s64 = ctx.r11.s64 + -16112;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e1848
	if (ctx.cr6.eq) goto loc_820E1848;
	// addi r3,r26,284
	ctx.r3.s64 = ctx.r26.s64 + 284;
	// lwz r7,244(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820dc610
	ctx.lr = 0x820E182C;
	sub_820DC610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e1844
	if (!ctx.cr6.eq) goto loc_820E1844;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820f1d50
	ctx.lr = 0x820E1844;
	sub_820F1D50(ctx, base);
loc_820E1844:
	// lbz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_820E1848:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e18b4
	if (!ctx.cr6.eq) goto loc_820E18B4;
	// lbz r11,347(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 347);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e18b4
	if (ctx.cr6.eq) goto loc_820E18B4;
	// rlwinm r11,r11,30,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e18b4
	if (ctx.cr6.eq) goto loc_820E18B4;
	// lwz r11,296(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e18a0
	if (ctx.cr6.eq) goto loc_820E18A0;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r11,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820e18a4
	goto loc_820E18A4;
loc_820E18A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E18A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e18b4
	if (ctx.cr6.eq) goto loc_820E18B4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_820E18B4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f28,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// addi r31,r28,80
	ctx.r31.s64 = ctx.r28.s64 + 80;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// addi r25,r11,22200
	ctx.r25.s64 = ctx.r11.s64 + 22200;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,988(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 988);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820dc4f8
	ctx.lr = 0x820E18DC;
	sub_820DC4F8(ctx, base);
	// lwz r11,340(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 340);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e18f8
	if (ctx.cr6.eq) goto loc_820E18F8;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820E18F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e1914
	if (!ctx.cr6.eq) goto loc_820E1914;
	// lwz r11,300(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 300);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e191c
	if (ctx.cr6.eq) goto loc_820E191C;
loc_820E1914:
	// stfs f31,160(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 160, temp.u32);
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
loc_820E191C:
	// rlwinm r29,r3,0,27,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820e194c
	if (ctx.cr6.eq) goto loc_820E194C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f31,160(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x820aec50
	ctx.lr = 0x820E1940;
	sub_820AEC50(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820e1ea8
	ctx.lr = 0x820E194C;
	sub_820E1EA8(ctx, base);
loc_820E194C:
	// lwz r27,12(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lhz r30,64(r28)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + 64);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820e19f4
	if (ctx.cr6.eq) goto loc_820E19F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e19f4
	if (ctx.cr6.eq) goto loc_820E19F4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820e197c
	if (!ctx.cr6.eq) goto loc_820E197C;
	// lwz r11,300(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 300);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e19f4
	if (ctx.cr6.eq) goto loc_820E19F4;
loc_820E197C:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e1994
	if (!ctx.cr6.eq) goto loc_820E1994;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820E1990;
	sub_820F5F90(ctx, base);
	// stw r3,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r3.u32);
loc_820E1994:
	// lwz r11,300(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 300);
	// lwz r29,28(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e19ac
	if (ctx.cr6.eq) goto loc_820E19AC;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_820E19AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e19f4
	if (ctx.cr6.eq) goto loc_820E19F4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820E19B8:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e19e8
	if (ctx.cr6.eq) goto loc_820E19E8;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e19e8
	if (ctx.cr6.eq) goto loc_820E19E8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8218ae68
	ctx.lr = 0x820E19E8;
	sub_8218AE68(ctx, base);
loc_820E19E8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820e19b8
	if (!ctx.cr0.eq) goto loc_820E19B8;
loc_820E19F4:
	// lwz r9,404(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 404);
	// addi r11,r26,408
	ctx.r11.s64 = ctx.r26.s64 + 408;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e1a94
	if (ctx.cr6.eq) goto loc_820E1A94;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lfs f11,36(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r10,r10,20000
	ctx.r10.s64 = ctx.r10.s64 + 20000;
loc_820E1A1C:
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820e1a80
	if (ctx.cr6.eq) goto loc_820E1A80;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r6,48888
	ctx.r5.u64 = ctx.r6.u64 | 48888;
	// lfsx f12,r10,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// beq cr6,0x820e1a60
	if (ctx.cr6.eq) goto loc_820E1A60;
	// lfs f13,24(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,980(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x820e1a68
	if (!ctx.cr6.gt) goto loc_820E1A68;
loc_820E1A60:
	// stfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
loc_820E1A68:
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// bne cr6,0x820e1a80
	if (!ctx.cr6.eq) goto loc_820E1A80;
	// lwz r6,404(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 404);
	// andc r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// stw r5,404(r26)
	PPC_STORE_U32(ctx.r26.u32 + 404, ctx.r5.u32);
loc_820E1A80:
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820e1a1c
	if (!ctx.cr6.eq) goto loc_820E1A1C;
loc_820E1A94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820e1ab0
	ctx.lr = 0x820E1A9C;
	sub_820E1AB0(ctx, base);
loc_820E1A9C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa84
	ctx.lr = 0x820E1AA8;
	__restfpr_28(ctx, base);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E1AAC"))) PPC_WEAK_FUNC(sub_820E1AAC);
PPC_FUNC_IMPL(__imp__sub_820E1AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1AB0"))) PPC_WEAK_FUNC(sub_820E1AB0);
PPC_FUNC_IMPL(__imp__sub_820E1AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x820E1AB8;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8233fa30
	ctx.lr = 0x820E1AC0;
	__savefpr_26(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x820ac008
	ctx.lr = 0x820E1ACC;
	sub_820AC008(ctx, base);
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// rlwinm r11,r10,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1e94
	if (ctx.cr6.eq) goto loc_820E1E94;
	// lwz r9,340(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1e94
	if (ctx.cr6.eq) goto loc_820E1E94;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820e1e94
	if (ctx.cr6.eq) goto loc_820E1E94;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x820e1e94
	if (!ctx.cr6.lt) goto loc_820E1E94;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,40(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// addic. r5,r27,32
	ctx.xer.ca = ctx.r27.u32 > 4294967263;
	ctx.r5.s64 = ctx.r27.s64 + 32;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq 0x820e1b34
	if (ctx.cr0.eq) goto loc_820E1B34;
	// bl 0x822578d8
	ctx.lr = 0x820E1B30;
	sub_822578D8(ctx, base);
	// b 0x820e1b3c
	goto loc_820E1B3C;
loc_820E1B34:
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820E1B3C;
	sub_8233E4E0(ctx, base);
loc_820E1B3C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,288(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// lwz r9,396(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 396);
	// lis r8,-25747
	ctx.r8.s64 = -1687355392;
	// addi r25,r11,31376
	ctx.r25.s64 = ctx.r11.s64 + 31376;
	// lwz r7,320(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r6,324(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lis r3,-25747
	ctx.r3.s64 = -1687355392;
	// lwz r4,328(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// ori r11,r8,4
	ctx.r11.u64 = ctx.r8.u64 | 4;
	// stw r9,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f31,48(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// ori r23,r3,5
	ctx.r23.u64 = ctx.r3.u64 | 5;
	// lfs f26,36(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	ctx.f26.f64 = double(temp.f32);
	// li r9,92
	ctx.r9.s64 = 92;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r8,13222
	ctx.r8.s64 = 866516992;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r30,56
	ctx.r30.s64 = 56;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// li r28,7
	ctx.r28.s64 = 7;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// li r22,52
	ctx.r22.s64 = 52;
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r21,r1,112
	ctx.r21.s64 = ctx.r1.s64 + 112;
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r20,r1,368
	ctx.r20.s64 = ctx.r1.s64 + 368;
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r19,r1,336
	ctx.r19.s64 = ctx.r1.s64 + 336;
	// stfs f31,256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stfs f26,140(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r21,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r21.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// stw r20,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// stw r19,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r19.u32);
	// bl 0x82107a20
	ctx.lr = 0x820E1C54;
	sub_82107A20(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bne cr6,0x820e1c94
	if (!ctx.cr6.eq) goto loc_820E1C94;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x820abeb0
	ctx.lr = 0x820E1C84;
	sub_820ABEB0(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8233fa7c
	ctx.lr = 0x820E1C90;
	__restfpr_26(ctx, base);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
loc_820E1C94:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// beq cr6,0x820e1da0
	if (ctx.cr6.eq) goto loc_820E1DA0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// ori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 | 1;
	// ori r26,r10,6
	ctx.r26.u64 = ctx.r10.u64 | 6;
loc_820E1CC4:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820e1d0c
	if (!ctx.cr6.eq) goto loc_820E1D0C;
	// bl 0x820ddca8
	ctx.lr = 0x820E1CD8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e1ce8
	if (ctx.cr6.eq) goto loc_820E1CE8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820e1cec
	goto loc_820E1CEC;
loc_820E1CE8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_820E1CEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1d44
	if (ctx.cr6.eq) goto loc_820E1D44;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-260
	ctx.r10.s64 = ctx.r10.s64 + -260;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// b 0x820e1d44
	goto loc_820E1D44;
loc_820E1D0C:
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820e1d1c
	if (!ctx.cr6.eq) goto loc_820E1D1C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x820e1d44
	goto loc_820E1D44;
loc_820E1D1C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820e1d2c
	if (!ctx.cr6.eq) goto loc_820E1D2C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x820e1d44
	goto loc_820E1D44;
loc_820E1D2C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820E1D40;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820E1D44:
	// lwz r9,312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r8,304(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r30,r7
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fadds f27,f11,f27
	ctx.f27.f64 = double(float(ctx.f11.f64 + ctx.f27.f64));
	// fadds f29,f9,f29
	ctx.f29.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// fadds f30,f10,f30
	ctx.f30.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// fadds f28,f8,f28
	ctx.f28.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// blt cr6,0x820e1cc4
	if (ctx.cr6.lt) goto loc_820E1CC4;
loc_820E1DA0:
	// fdivs f13,f26,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f26.f64 / ctx.f27.f64));
	// fmuls f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820e1dc0
	if (!ctx.cr6.lt) goto loc_820E1DC0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820e1dcc
	goto loc_820E1DCC;
loc_820E1DC0:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x820e1dcc
	if (!ctx.cr6.gt) goto loc_820E1DCC;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
loc_820E1DCC:
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x820e1ddc
	if (!ctx.cr6.lt) goto loc_820E1DDC;
	// fmr f11,f31
	ctx.f11.f64 = ctx.f31.f64;
	// b 0x820e1de8
	goto loc_820E1DE8;
loc_820E1DDC:
	// fcmpu cr6,f11,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f26.f64);
	// ble cr6,0x820e1de8
	if (!ctx.cr6.gt) goto loc_820E1DE8;
	// fmr f11,f26
	ctx.f11.f64 = ctx.f26.f64;
loc_820E1DE8:
	// fcmpu cr6,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x820e1df8
	if (!ctx.cr6.lt) goto loc_820E1DF8;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x820e1e04
	goto loc_820E1E04;
loc_820E1DF8:
	// fcmpu cr6,f12,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f26.f64);
	// ble cr6,0x820e1e04
	if (!ctx.cr6.gt) goto loc_820E1E04;
	// fmr f12,f26
	ctx.f12.f64 = ctx.f26.f64;
loc_820E1E04:
	// lfs f13,388(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f27,f13
	ctx.cr6.compare(ctx.f27.f64, ctx.f13.f64);
	// ble cr6,0x820e1e20
	if (!ctx.cr6.gt) goto loc_820E1E20;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x820e1e2c
	goto loc_820E1E2C;
loc_820E1E20:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_820E1E2C:
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r28,-2
	ctx.r28.s64 = -2;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldicr r6,r29,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820abeb0
	ctx.lr = 0x820E1E4C;
	sub_820ABEB0(ctx, base);
	// lwz r11,256(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 256);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e1e94
	if (ctx.cr6.eq) goto loc_820E1E94;
	// lwz r31,224(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 224);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e1e94
	if (ctx.cr6.eq) goto loc_820E1E94;
loc_820E1E68:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x820e1e88
	if (!ctx.cr6.eq) goto loc_820E1E88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820abeb0
	ctx.lr = 0x820E1E88;
	sub_820ABEB0(ctx, base);
loc_820E1E88:
	// lwz r31,232(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820e1e68
	if (!ctx.cr6.eq) goto loc_820E1E68;
loc_820E1E94:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8233fa7c
	ctx.lr = 0x820E1EA0;
	__restfpr_26(ctx, base);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E1EA4"))) PPC_WEAK_FUNC(sub_820E1EA4);
PPC_FUNC_IMPL(__imp__sub_820E1EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1EA8"))) PPC_WEAK_FUNC(sub_820E1EA8);
PPC_FUNC_IMPL(__imp__sub_820E1EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820E1EB0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820ac008
	ctx.lr = 0x820E1EC4;
	sub_820AC008(ctx, base);
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e21a4
	if (ctx.cr6.eq) goto loc_820E21A4;
	// lwz r11,300(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e1f24
	if (ctx.cr6.eq) goto loc_820E1F24;
	// lwz r11,296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1f14
	if (ctx.cr6.eq) goto loc_820E1F14;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r10,-16112
	ctx.r7.s64 = ctx.r10.s64 + -16112;
	// lwz r11,244(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 244);
	// and r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 & ctx.r11.u64;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r11,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820e1f18
	goto loc_820E1F18;
loc_820E1F14:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_820E1F18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e21a4
	if (ctx.cr6.eq) goto loc_820E21A4;
loc_820E1F24:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f9,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x820e1f5c
	if (!ctx.cr6.gt) goto loc_820E1F5C;
	// lwz r10,296(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e1f50
	if (ctx.cr6.eq) goto loc_820E1F50;
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820e1f54
	goto loc_820E1F54;
loc_820E1F50:
	// lfs f0,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
loc_820E1F54:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820e21a4
	if (ctx.cr6.lt) goto loc_820E21A4;
loc_820E1F5C:
	// lfs f0,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,392(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f0,1316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820e1f88
	if (!ctx.cr6.gt) goto loc_820E1F88;
	// lfs f0,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// b 0x820e1f8c
	goto loc_820E1F8C;
loc_820E1F88:
	// lfs f10,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
loc_820E1F8C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// addi r4,r11,20000
	ctx.r4.s64 = ctx.r11.s64 + 20000;
	// beq cr6,0x820e1fb4
	if (ctx.cr6.eq) goto loc_820E1FB4;
	// cmpwi cr6,r5,2048
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2048, ctx.xer);
	// bge cr6,0x820e1fb4
	if (!ctx.cr6.lt) goto loc_820E1FB4;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r4,10728
	ctx.r10.s64 = ctx.r4.s64 + 10728;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x820e1fb8
	goto loc_820E1FB8;
loc_820E1FB4:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_820E1FB8:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e2074
	if (ctx.cr6.eq) goto loc_820E2074;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_820E1FC8:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x820e2064
	if (ctx.cr6.eq) goto loc_820E2064;
	// cmpwi cr6,r5,2048
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2048, ctx.xer);
	// bge cr6,0x820e2064
	if (!ctx.cr6.lt) goto loc_820E2064;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r4,10704
	ctx.r11.s64 = ctx.r4.s64 + 10704;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820e2064
	if (!ctx.cr6.lt) goto loc_820E2064;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e2064
	if (ctx.cr6.eq) goto loc_820E2064;
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820e2064
	if (ctx.cr6.eq) goto loc_820E2064;
	// lbz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e2064
	if (!ctx.cr6.eq) goto loc_820E2064;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82140af0
	ctx.lr = 0x820E2024;
	sub_82140AF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e2064
	if (!ctx.cr6.eq) goto loc_820E2064;
	// lwz r11,376(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e204c
	if (ctx.cr6.eq) goto loc_820E204C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820e204c
	if (ctx.cr6.eq) goto loc_820E204C;
	// lfs f0,544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820e2050
	goto loc_820E2050;
loc_820E204C:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
loc_820E2050:
	// fdivs f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820e2064
	if (!ctx.cr6.lt) goto loc_820E2064;
	// li r30,1
	ctx.r30.s64 = 1;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820E2064:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,432
	ctx.r6.s64 = ctx.r6.s64 + 432;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x820e1fc8
	if (ctx.cr6.lt) goto loc_820E1FC8;
loc_820E2074:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// fmr f31,f11
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f11.f64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e20b4
	if (ctx.cr6.eq) goto loc_820E20B4;
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f31,f11,f9
	ctx.f31.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
loc_820E20B4:
	// stw r5,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r5.u32);
	// stfs f11,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e2104
	if (ctx.cr6.eq) goto loc_820E2104;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// lwz r11,984(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 984);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// bl 0x821980f8
	ctx.lr = 0x820E20FC;
	sub_821980F8(ctx, base);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
loc_820E2104:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e2130
	if (ctx.cr6.eq) goto loc_820E2130;
loc_820E2110:
	// stfs f31,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x82187020
	ctx.lr = 0x820E2124;
	sub_82187020(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x820e2110
	if (ctx.cr6.lt) goto loc_820E2110;
loc_820E2130:
	// lwz r11,236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e2144
	if (ctx.cr6.eq) goto loc_820E2144;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x82186ee8
	ctx.lr = 0x820E2144;
	sub_82186EE8(ctx, base);
loc_820E2144:
	// lwz r31,72(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e215c
	if (!ctx.cr6.eq) goto loc_820E215C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E215C:
	// bl 0x821986c8
	ctx.lr = 0x820E2160;
	sub_821986C8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e218c
	if (ctx.cr6.eq) goto loc_820E218C;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e2184
	if (!ctx.cr6.eq) goto loc_820E2184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82187fe0
	ctx.lr = 0x820E2184;
	sub_82187FE0(ctx, base);
loc_820E2184:
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
loc_820E218C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r9,300(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,300(r28)
	PPC_STORE_U32(ctx.r28.u32 + 300, ctx.r8.u32);
loc_820E21A4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E21B0"))) PPC_WEAK_FUNC(sub_820E21B0);
PPC_FUNC_IMPL(__imp__sub_820E21B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820E21B8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,224(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e231c
	if (ctx.cr6.eq) goto loc_820E231C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820E21DC:
	// lbz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820e223c
	if (ctx.cr6.eq) goto loc_820E223C;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r5,r9,32
	ctx.xer.ca = ctx.r9.u32 > 4294967263;
	ctx.r5.s64 = ctx.r9.s64 + 32;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,340(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// lwz r10,40(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq 0x820e2224
	if (ctx.cr0.eq) goto loc_820E2224;
	// bl 0x822578d8
	ctx.lr = 0x820E2214;
	sub_822578D8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820f2508
	ctx.lr = 0x820E2220;
	sub_820F2508(ctx, base);
	// b 0x820e2290
	goto loc_820E2290;
loc_820E2224:
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820E222C;
	sub_8233E4E0(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820f2508
	ctx.lr = 0x820E2238;
	sub_820F2508(ctx, base);
	// b 0x820e2290
	goto loc_820E2290;
loc_820E223C:
	// lwz r4,160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820e2260
	if (!ctx.cr6.eq) goto loc_820E2260;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820E225C;
	sub_8233E4E0(ctx, base);
	// b 0x820e2290
	goto loc_820E2290;
loc_820E2260:
	// lwz r5,132(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820e2278
	if (ctx.cr6.eq) goto loc_820E2278;
	// bl 0x822578d8
	ctx.lr = 0x820E2274;
	sub_822578D8(ctx, base);
	// b 0x820e2280
	goto loc_820E2280;
loc_820E2278:
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820E2280;
	sub_8233E4E0(ctx, base);
loc_820E2280:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822578d8
	ctx.lr = 0x820E2290;
	sub_822578D8(ctx, base);
loc_820E2290:
	// lwz r31,224(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e22ec
	if (ctx.cr6.eq) goto loc_820E22EC;
loc_820E229C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820efed0
	ctx.lr = 0x820E22A4;
	sub_820EFED0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e22e0
	if (ctx.cr6.eq) goto loc_820E22E0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820e22e0
	if (ctx.cr6.eq) goto loc_820E22E0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x820e22e0
	if (ctx.cr6.eq) goto loc_820E22E0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e22d8
	if (ctx.cr6.eq) goto loc_820E22D8;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
loc_820E22D8:
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_820E22E0:
	// lwz r31,232(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820e229c
	if (!ctx.cr6.eq) goto loc_820E229C;
loc_820E22EC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e2310
	if (ctx.cr6.eq) goto loc_820E2310;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E2310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E2310:
	// lwz r30,232(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820e21dc
	if (!ctx.cr6.eq) goto loc_820E21DC;
loc_820E231C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E2328"))) PPC_WEAK_FUNC(sub_820E2328);
PPC_FUNC_IMPL(__imp__sub_820E2328) {
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
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2354
	if (ctx.cr6.eq) goto loc_820E2354;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// b 0x820e2358
	goto loc_820E2358;
loc_820E2354:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E2358:
	// lhz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 332);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820e2374
	if (ctx.cr6.eq) goto loc_820E2374;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3180
	ctx.lr = 0x820E236C;
	sub_820E3180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e30a8
	ctx.lr = 0x820E2374;
	sub_820E30A8(ctx, base);
loc_820E2374:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e21b0
	ctx.lr = 0x820E237C;
	sub_820E21B0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
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

__attribute__((alias("__imp__sub_820E23AC"))) PPC_WEAK_FUNC(sub_820E23AC);
PPC_FUNC_IMPL(__imp__sub_820E23AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E23B0"))) PPC_WEAK_FUNC(sub_820E23B0);
PPC_FUNC_IMPL(__imp__sub_820E23B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r10,129
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 129, ctx.xer);
	// beq cr6,0x820e23cc
	if (ctx.cr6.eq) goto loc_820E23CC;
loc_820E23C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820E23CC:
	// lwz r5,340(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r7,48(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e23c4
	if (ctx.cr6.eq) goto loc_820E23C4;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// lfs f13,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x820e2478
	if (ctx.cr6.lt) goto loc_820E2478;
	// addi r9,r7,136
	ctx.r9.s64 = ctx.r7.s64 + 136;
	// addi r10,r5,20
	ctx.r10.s64 = ctx.r5.s64 + 20;
loc_820E2400:
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e2410
	if (!ctx.cr6.lt) goto loc_820E2410;
	// lfs f0,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
loc_820E2410:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x820e24dc
	if (ctx.cr6.gt) goto loc_820E24DC;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e2428
	if (!ctx.cr6.lt) goto loc_820E2428;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_820E2428:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x820e24c8
	if (ctx.cr6.gt) goto loc_820E24C8;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e2440
	if (!ctx.cr6.lt) goto loc_820E2440;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_820E2440:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x820e24d0
	if (ctx.cr6.gt) goto loc_820E24D0;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e2458
	if (!ctx.cr6.lt) goto loc_820E2458;
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_820E2458:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x820e24d8
	if (ctx.cr6.gt) goto loc_820E24D8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r6,-3
	ctx.r8.s64 = ctx.r6.s64 + -3;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820e2400
	if (ctx.cr6.lt) goto loc_820E2400;
loc_820E2478:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820e24dc
	if (!ctx.cr6.lt) goto loc_820E24DC;
	// addi r10,r11,33
	ctx.r10.s64 = ctx.r11.s64 + 33;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
loc_820E2498:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e24a8
	if (!ctx.cr6.lt) goto loc_820E24A8;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_820E24A8:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x820e24dc
	if (ctx.cr6.gt) goto loc_820E24DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820e2498
	if (ctx.cr6.lt) goto loc_820E2498;
	// b 0x820e24dc
	goto loc_820E24DC;
loc_820E24C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x820e24dc
	goto loc_820E24DC;
loc_820E24D0:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x820e24dc
	goto loc_820E24DC;
loc_820E24D8:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_820E24DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E24F0"))) PPC_WEAK_FUNC(sub_820E24F0);
PPC_FUNC_IMPL(__imp__sub_820E24F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820E24F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e25ec
	if (ctx.cr6.eq) goto loc_820E25EC;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820e25ec
	if (!ctx.cr6.lt) goto loc_820E25EC;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,300(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r28,r4,32
	ctx.r28.s64 = ctx.r4.s64 + 32;
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r27,228(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// rlwinm r25,r9,30,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r24,r9,6,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x820e2564
	if (!ctx.cr6.eq) goto loc_820E2564;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x820e25ec
	if (ctx.cr6.eq) goto loc_820E25EC;
	// b 0x820e256c
	goto loc_820E256C;
loc_820E2564:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f0038
	ctx.lr = 0x820E256C;
	sub_820F0038(ctx, base);
loc_820E256C:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e25a8
	if (!ctx.cr6.eq) goto loc_820E25A8;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e25a8
	if (!ctx.cr6.eq) goto loc_820E25A8;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e25a0
	if (ctx.cr6.eq) goto loc_820E25A0;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x820e25ac
	if (ctx.cr6.eq) goto loc_820E25AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r11.u32);
loc_820E25A0:
	// stw r26,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r26.u32);
	// b 0x820e25ac
	goto loc_820E25AC;
loc_820E25A8:
	// stb r31,176(r30)
	PPC_STORE_U8(ctx.r30.u32 + 176, ctx.r31.u8);
loc_820E25AC:
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x820e25c0
	if (ctx.cr6.eq) goto loc_820E25C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f0960
	ctx.lr = 0x820E25C0;
	sub_820F0960(ctx, base);
loc_820E25C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820efed0
	ctx.lr = 0x820E25C8;
	sub_820EFED0(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e25e4
	if (ctx.cr6.eq) goto loc_820E25E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E25E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E25E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f16c0
	ctx.lr = 0x820E25EC;
	sub_820F16C0(ctx, base);
loc_820E25EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E25F4"))) PPC_WEAK_FUNC(sub_820E25F4);
PPC_FUNC_IMPL(__imp__sub_820E25F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E25F8"))) PPC_WEAK_FUNC(sub_820E25F8);
PPC_FUNC_IMPL(__imp__sub_820E25F8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x820e263c
	if (ctx.cr6.eq) goto loc_820E263C;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x820e2678
	goto loc_820E2678;
loc_820E263C:
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lwz r11,5544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5544);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820e2658
	if (!ctx.cr6.eq) goto loc_820E2658;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,5544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5544, ctx.r11.u32);
loc_820E2658:
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r10,5548
	ctx.r8.s64 = ctx.r10.s64 + 5548;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stfs f31,5548(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 5548, temp.u32);
	// stfs f31,8(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f31,4(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
loc_820E2678:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r4,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r30,224(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e27d8
	if (ctx.cr6.eq) goto loc_820E27D8;
	// lfs f29,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f30.f64 = double(temp.f32);
loc_820E26D4:
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x820e27cc
	if (!ctx.cr6.eq) goto loc_820E27CC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r10,129
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 129, ctx.xer);
	// bne cr6,0x820e27cc
	if (!ctx.cr6.eq) goto loc_820E27CC;
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// clrlwi r9,r10,19
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r9,r9,0,31,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF001;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e27cc
	if (ctx.cr6.eq) goto loc_820E27CC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e25f8
	ctx.lr = 0x820E2718;
	sub_820E25F8(ctx, base);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f9,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f6,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f12,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsqrts f11,f3
	ctx.f11.f64 = double(float(sqrt(ctx.f3.f64)));
	// fadds f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fsubs f6,f5,f7
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// ble cr6,0x820e27cc
	if (!ctx.cr6.gt) goto loc_820E27CC;
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// bge cr6,0x820e2798
	if (!ctx.cr6.lt) goto loc_820E2798;
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x820e27cc
	goto loc_820E27CC;
loc_820E2798:
	// fmuls f6,f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fdivs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
	// fadds f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fadds f0,f10,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f13,f9,f2
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f12,f8,f1
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_820E27CC:
	// lwz r30,232(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820e26d4
	if (!ctx.cr6.eq) goto loc_820E26D4;
loc_820E27D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_820E27FC"))) PPC_WEAK_FUNC(sub_820E27FC);
PPC_FUNC_IMPL(__imp__sub_820E27FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E2800"))) PPC_WEAK_FUNC(sub_820E2800);
PPC_FUNC_IMPL(__imp__sub_820E2800) {
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
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2874
	if (ctx.cr6.eq) goto loc_820E2874;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r6,r8,31376
	ctx.r6.s64 = ctx.r8.s64 + 31376;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lfs f0,48(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820e2928
	if (!ctx.cr6.eq) goto loc_820E2928;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820e5c88
	ctx.lr = 0x820E2870;
	sub_820E5C88(ctx, base);
	// b 0x820e2928
	goto loc_820E2928;
loc_820E2874:
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// addi r5,r3,32
	ctx.r5.s64 = ctx.r3.s64 + 32;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e28b4
	if (ctx.cr6.eq) goto loc_820E28B4;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,92
	ctx.r8.s64 = ctx.r11.s64 + 92;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// b 0x820e291c
	goto loc_820E291C;
loc_820E28B4:
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,9932
	ctx.r11.s64 = ctx.r11.s64 + 9932;
	// lwz r10,9948(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9948);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820e28f8
	if (!ctx.cr6.eq) goto loc_820E28F8;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// stw r10,9948(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9948, ctx.r10.u32);
	// lfs f0,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_820E28F8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
loc_820E291C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82257540
	ctx.lr = 0x820E2928;
	sub_82257540(ctx, base);
loc_820E2928:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e2948
	if (ctx.cr6.eq) goto loc_820E2948;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_820E2948:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e2958
	if (ctx.cr6.eq) goto loc_820E2958;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820E2958:
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

__attribute__((alias("__imp__sub_820E2970"))) PPC_WEAK_FUNC(sub_820E2970);
PPC_FUNC_IMPL(__imp__sub_820E2970) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820e25f8
	ctx.lr = 0x820E2990;
	sub_820E25F8(ctx, base);
	// lwz r3,388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2a80
	if (ctx.cr6.eq) goto loc_820E2A80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x820e2970
	ctx.lr = 0x820E29A4;
	sub_820E2970(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fsubs f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f11,f5,f8
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// lfs f6,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// fmadds f3,f11,f11,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmadds f2,f10,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fsqrts f13,f2
	ctx.f13.f64 = double(float(sqrt(ctx.f2.f64)));
	// fadds f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820e2a80
	if (!ctx.cr6.gt) goto loc_820E2A80;
	// fadds f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f5,f6
	ctx.cr6.compare(ctx.f5.f64, ctx.f6.f64);
	// bgt cr6,0x820e2a38
	if (ctx.cr6.gt) goto loc_820E2A38;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// b 0x820e2a80
	goto loc_820E2A80;
loc_820E2A38:
	// fadds f5,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f6,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// fadds f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fmuls f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// stfs f3,12(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fdivs f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f13.f64));
	// fmuls f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f13,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f12,f1,f10
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fadds f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_820E2A80:
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

__attribute__((alias("__imp__sub_820E2A98"))) PPC_WEAK_FUNC(sub_820E2A98);
PPC_FUNC_IMPL(__imp__sub_820E2A98) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r3,392(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820e2b68
	if (ctx.cr6.eq) goto loc_820E2B68;
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bge cr6,0x820e2b68
	if (!ctx.cr6.lt) goto loc_820E2B68;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
	// bne cr6,0x820e2b1c
	if (!ctx.cr6.eq) goto loc_820E2B1C;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r31,10704
	ctx.r10.s64 = ctx.r31.s64 + 10704;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820e2b1c
	if (!ctx.cr6.gt) goto loc_820E2B1C;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E2AE4:
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,200(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// beq cr6,0x820e2b00
	if (ctx.cr6.eq) goto loc_820E2B00;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// b 0x820e2b04
	goto loc_820E2B04;
loc_820E2B00:
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_820E2B04:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r8,200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 200, ctx.r8.u32);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820e2ae4
	if (ctx.cr6.lt) goto loc_820E2AE4;
loc_820E2B1C:
	// addi r10,r31,10704
	ctx.r10.s64 = ctx.r31.s64 + 10704;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820e2b68
	if (!ctx.cr6.lt) goto loc_820E2B68;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r10,r5,432
	ctx.r10.s64 = ctx.r5.s64 * 432;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// beq cr6,0x820e2b60
	if (ctx.cr6.eq) goto loc_820E2B60;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_820E2B60:
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
loc_820E2B68:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E2B70"))) PPC_WEAK_FUNC(sub_820E2B70);
PPC_FUNC_IMPL(__imp__sub_820E2B70) {
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
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,20000
	ctx.r8.s64 = ctx.r10.s64 + 20000;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r8,10736
	ctx.r9.s64 = ctx.r8.s64 + 10736;
loc_820E2B94:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e2bfc
	if (ctx.cr6.eq) goto loc_820E2BFC;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplwi cr6,r10,32800
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32800, ctx.xer);
	// blt cr6,0x820e2b94
	if (ctx.cr6.lt) goto loc_820E2B94;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_820E2BB8:
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// stw r11,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820e2c34
	if (!ctx.cr6.eq) goto loc_820E2C34;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820e2c3c
	if (!ctx.cr6.eq) goto loc_820E2C3C;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r8,10704
	ctx.r3.s64 = ctx.r8.s64 + 10704;
	// bl 0x821417d8
	ctx.lr = 0x820E2BE8;
	sub_821417D8(ctx, base);
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
loc_820E2BFC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r8,10736
	ctx.r7.s64 = ctx.r8.s64 + 10736;
	// ori r31,r10,43492
	ctx.r31.u64 = ctx.r10.u64 | 43492;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stwx r3,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820e2c24
	if (!ctx.cr6.gt) goto loc_820E2C24;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_820E2C24:
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r7,r9,43492
	ctx.r7.u64 = ctx.r9.u64 | 43492;
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// b 0x820e2bb8
	goto loc_820E2BB8;
loc_820E2C34:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820e2c44
	if (ctx.cr6.eq) goto loc_820E2C44;
loc_820E2C3C:
	// lwz r5,392(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 392);
	// b 0x820e2c4c
	goto loc_820E2C4C;
loc_820E2C44:
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r5,392(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 392);
loc_820E2C4C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r8,10704
	ctx.r3.s64 = ctx.r8.s64 + 10704;
	// bl 0x82141688
	ctx.lr = 0x820E2C58;
	sub_82141688(ctx, base);
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

__attribute__((alias("__imp__sub_820E2C6C"))) PPC_WEAK_FUNC(sub_820E2C6C);
PPC_FUNC_IMPL(__imp__sub_820E2C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E2C70"))) PPC_WEAK_FUNC(sub_820E2C70);
PPC_FUNC_IMPL(__imp__sub_820E2C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820E2C78;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820e2d2c
	if (ctx.cr6.eq) goto loc_820E2D2C;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2d2c
	if (ctx.cr6.eq) goto loc_820E2D2C;
	// bl 0x820ac008
	ctx.lr = 0x820E2CB0;
	sub_820AC008(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2d2c
	if (ctx.cr6.eq) goto loc_820E2D2C;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820e2d2c
	if (!ctx.cr6.lt) goto loc_820E2D2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820E2CD4;
	sub_820E5B68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e2d10
	if (!ctx.cr6.eq) goto loc_820E2D10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82082030
	ctx.lr = 0x820E2CF8;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2d08
	if (ctx.cr6.eq) goto loc_820E2D08;
	// bl 0x820e6948
	ctx.lr = 0x820E2D04;
	sub_820E6948(ctx, base);
	// b 0x820e2d0c
	goto loc_820E2D0C;
loc_820E2D08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820E2D0C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_820E2D10:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8218bc18
	ctx.lr = 0x820E2D2C;
	sub_8218BC18(ctx, base);
loc_820E2D2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E2D34"))) PPC_WEAK_FUNC(sub_820E2D34);
PPC_FUNC_IMPL(__imp__sub_820E2D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E2D38"))) PPC_WEAK_FUNC(sub_820E2D38);
PPC_FUNC_IMPL(__imp__sub_820E2D38) {
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
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2dfc
	if (ctx.cr6.eq) goto loc_820E2DFC;
	// bl 0x820ac008
	ctx.lr = 0x820E2D6C;
	sub_820AC008(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2dfc
	if (ctx.cr6.eq) goto loc_820E2DFC;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820e2dfc
	if (!ctx.cr6.lt) goto loc_820E2DFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820E2D90;
	sub_820E5B68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2dfc
	if (ctx.cr6.eq) goto loc_820E2DFC;
	// stfs f31,568(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 568, temp.u32);
	// lwz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r7,576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 576, ctx.r7.u32);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r11,520
	ctx.r10.s64 = ctx.r11.s64 + 520;
	// stw r6,580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 580, ctx.r6.u32);
	// stfs f31,520(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 520, temp.u32);
	// addi r8,r11,568
	ctx.r8.s64 = ctx.r11.s64 + 568;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_820E2DD0:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820e2dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E2DD0;
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// stfs f31,584(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 584, temp.u32);
	// stfs f31,588(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stfs f31,592(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 592, temp.u32);
	// stfs f31,596(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 596, temp.u32);
	// stfs f31,600(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 600, temp.u32);
	// stw r9,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r9.u32);
loc_820E2DFC:
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

__attribute__((alias("__imp__sub_820E2E18"))) PPC_WEAK_FUNC(sub_820E2E18);
PPC_FUNC_IMPL(__imp__sub_820E2E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f13,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820e2e68
	if (!ctx.cr6.gt) goto loc_820E2E68;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,31,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r9,129
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 129, ctx.xer);
	// bne cr6,0x820e2e68
	if (!ctx.cr6.eq) goto loc_820E2E68;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x820e2e6c
	if (!ctx.cr6.eq) goto loc_820E2E6C;
loc_820E2E68:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820E2E6C:
	// lbz r9,384(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 384);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r4,r3,364
	ctx.r4.s64 = ctx.r3.s64 + 364;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r10,20(r4)
	PPC_STORE_U8(ctx.r4.u32 + 20, ctx.r10.u8);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addi r3,r11,9244
	ctx.r3.s64 = ctx.r11.s64 + 9244;
	// beq cr6,0x820e2e9c
	if (ctx.cr6.eq) goto loc_820E2E9C;
	// b 0x8213a0d0
	sub_8213A0D0(ctx, base);
	return;
loc_820E2E9C:
	// b 0x82139fe8
	sub_82139FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E2EA0"))) PPC_WEAK_FUNC(sub_820E2EA0);
PPC_FUNC_IMPL(__imp__sub_820E2EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E2EA4"))) PPC_WEAK_FUNC(sub_820E2EA4);
PPC_FUNC_IMPL(__imp__sub_820E2EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E2EA8"))) PPC_WEAK_FUNC(sub_820E2EA8);
PPC_FUNC_IMPL(__imp__sub_820E2EA8) {
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
	// bl 0x820ac008
	ctx.lr = 0x820E2EC4;
	sub_820AC008(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820E2ED8;
	sub_8233E4E0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820e2ef8
	if (ctx.cr6.gt) goto loc_820E2EF8;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
loc_820E2EF8:
	// lfs f13,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820e2f14
	if (ctx.cr6.lt) goto loc_820E2F14;
	// lfs f0,828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 828);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
loc_820E2F14:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2f38
	if (ctx.cr6.eq) goto loc_820E2F38;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lbz r10,193(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 193);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820e2f38
	if (ctx.cr6.lt) goto loc_820E2F38;
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r11,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r11.u8);
loc_820E2F38:
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

__attribute__((alias("__imp__sub_820E2F50"))) PPC_WEAK_FUNC(sub_820E2F50);
PPC_FUNC_IMPL(__imp__sub_820E2F50) {
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
	// addi r11,r4,34
	ctx.r11.s64 = ctx.r4.s64 + 34;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// bl 0x820e23b0
	ctx.lr = 0x820E2F84;
	sub_820E23B0(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,300(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// rlwinm r6,r9,0,22,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x820e2fc8
	if (!ctx.cr6.eq) goto loc_820E2FC8;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,20000
	ctx.r8.s64 = ctx.r10.s64 + 20000;
	// ori r6,r9,48888
	ctx.r6.u64 = ctx.r9.u64 | 48888;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lfsx f13,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820e2fcc
	if (!ctx.cr6.eq) goto loc_820E2FCC;
loc_820E2FC8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820E2FCC:
	// lfs f13,312(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgt cr6,0x820e3048
	if (ctx.cr6.gt) goto loc_820E3048;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e3048
	if (ctx.cr6.eq) goto loc_820E3048;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r9,417(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 417);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x820e308c
	if (!ctx.cr6.eq) goto loc_820E308C;
	// lbz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x820e3028
	if (ctx.cr6.eq) goto loc_820E3028;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// beq cr6,0x820e3028
	if (ctx.cr6.eq) goto loc_820E3028;
	// stb r9,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r9.u8);
loc_820E3028:
	// lbz r11,417(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 417);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820e308c
	if (ctx.cr6.eq) goto loc_820E308C;
	// lwz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// slw r10,r7,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 404, ctx.r9.u32);
	// b 0x820e308c
	goto loc_820E308C;
loc_820E3048:
	// lbz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x820e3070
	if (ctx.cr6.eq) goto loc_820E3070;
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// beq cr6,0x820e3070
	if (ctx.cr6.eq) goto loc_820E3070;
	// stb r9,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r9.u8);
loc_820E3070:
	// li r11,255
	ctx.r11.s64 = 255;
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// slw r10,r7,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r9,404(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r8,404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 404, ctx.r8.u32);
loc_820E308C:
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

__attribute__((alias("__imp__sub_820E30A4"))) PPC_WEAK_FUNC(sub_820E30A4);
PPC_FUNC_IMPL(__imp__sub_820E30A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E30A8"))) PPC_WEAK_FUNC(sub_820E30A8);
PPC_FUNC_IMPL(__imp__sub_820E30A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820E30B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3178
	if (ctx.cr6.eq) goto loc_820E3178;
	// lwz r29,108(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820e3174
	if (ctx.cr6.eq) goto loc_820E3174;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,84(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// beq cr6,0x820e310c
	if (ctx.cr6.eq) goto loc_820E310C;
	// addi r11,r27,16
	ctx.r11.s64 = ctx.r27.s64 + 16;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_820E30F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e3104
	if (ctx.cr6.eq) goto loc_820E3104;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
loc_820E3104:
	// addi r11,r11,960
	ctx.r11.s64 = ctx.r11.s64 + 960;
	// bdnz 0x820e30f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E30F0;
loc_820E310C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82082030
	ctx.lr = 0x820E3120;
	sub_82082030(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x820E3130;
	sub_8233EAF0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// stw r31,360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 360, ctx.r31.u32);
	// beq cr6,0x820e3174
	if (ctx.cr6.eq) goto loc_820E3174;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r9,r27,16
	ctx.r9.s64 = ctx.r27.s64 + 16;
loc_820E314C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e3168
	if (ctx.cr6.eq) goto loc_820E3168;
	// lwz r8,360(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 360);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_820E3168:
	// addi r9,r9,960
	ctx.r9.s64 = ctx.r9.s64 + 960;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820e314c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E314C;
loc_820E3174:
	// sth r29,332(r26)
	PPC_STORE_U16(ctx.r26.u32 + 332, ctx.r29.u16);
loc_820E3178:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E3180"))) PPC_WEAK_FUNC(sub_820E3180);
PPC_FUNC_IMPL(__imp__sub_820E3180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820E3188;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3220
	if (ctx.cr6.eq) goto loc_820E3220;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e31f8
	if (ctx.cr6.eq) goto loc_820E31F8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_820E31B0:
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e31ec
	if (ctx.cr6.eq) goto loc_820E31EC;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_820E31C4:
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e31e0
	if (ctx.cr6.eq) goto loc_820E31E0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82172d60
	ctx.lr = 0x820E31E0;
	sub_82172D60(ctx, base);
loc_820E31E0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x820e31c4
	if (ctx.cr6.lt) goto loc_820E31C4;
loc_820E31EC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x820e31b0
	if (!ctx.cr0.eq) goto loc_820E31B0;
loc_820E31F8:
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3210
	if (ctx.cr6.eq) goto loc_820E3210;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E3210;
	sub_82080000(ctx, base);
loc_820E3210:
	// stw r27,360(r29)
	PPC_STORE_U32(ctx.r29.u32 + 360, ctx.r27.u32);
	// sth r27,332(r29)
	PPC_STORE_U16(ctx.r29.u32 + 332, ctx.r27.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820E3220:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,332(r29)
	PPC_STORE_U16(ctx.r29.u32 + 332, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E3230"))) PPC_WEAK_FUNC(sub_820E3230);
PPC_FUNC_IMPL(__imp__sub_820E3230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820E3238;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e3378
	if (ctx.cr6.eq) goto loc_820E3378;
	// lwz r30,340(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r28,48(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r27,44(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820e326c
	if (ctx.cr6.eq) goto loc_820E326C;
	// lwz r4,108(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// bl 0x820e3180
	ctx.lr = 0x820E326C;
	sub_820E3180(ctx, base);
loc_820E326C:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3284
	if (ctx.cr6.eq) goto loc_820E3284;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E3284;
	sub_82080000(ctx, base);
loc_820E3284:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r29,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e40c0
	ctx.lr = 0x820E32A8;
	sub_820E40C0(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r4,r30,176
	ctx.r4.s64 = ctx.r30.s64 + 176;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8233e4e0
	ctx.lr = 0x820E32BC;
	sub_8233E4E0(ctx, base);
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,216(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3318
	if (ctx.cr6.eq) goto loc_820E3318;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
loc_820E32D0:
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
	// bne 0x820e32d0
	if (!ctx.cr0.eq) goto loc_820E32D0;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r7,r8,6,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e3318
	if (ctx.cr6.eq) goto loc_820E3318;
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r3,216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e3318
	if (ctx.cr6.eq) goto loc_820E3318;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82177f68
	ctx.lr = 0x820E3318;
	sub_82177F68(ctx, base);
loc_820E3318:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lfs f0,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r29,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r29.u32);
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r3,72(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// bl 0x82188208
	ctx.lr = 0x820E333C;
	sub_82188208(ctx, base);
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// lwz r4,392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r11,r8,20000
	ctx.r11.s64 = ctx.r8.s64 + 20000;
	// addi r3,r11,10704
	ctx.r3.s64 = ctx.r11.s64 + 10704;
	// bl 0x821413f8
	ctx.lr = 0x820E3350;
	sub_821413F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x820e1440
	ctx.lr = 0x820E3360;
	sub_820E1440(ctx, base);
	// lwz r7,328(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r11,336(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 336);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// stw r29,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
loc_820E3378:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E3380"))) PPC_WEAK_FUNC(sub_820E3380);
PPC_FUNC_IMPL(__imp__sub_820E3380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820E3388;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// rlwinm r11,r9,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x1;
	// andc r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// rlwinm r28,r7,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e33c0
	if (ctx.cr6.eq) goto loc_820E33C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820f1fc8
	ctx.lr = 0x820E33C0;
	sub_820F1FC8(ctx, base);
loc_820E33C0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x820e33e0
	if (!ctx.cr6.gt) goto loc_820E33E0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_820E33CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1fc8
	ctx.lr = 0x820E33D8;
	sub_820F1FC8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x820e33cc
	if (!ctx.cr0.eq) goto loc_820E33CC;
loc_820E33E0:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e3404
	if (ctx.cr6.eq) goto loc_820E3404;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_820E3404:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e341c
	if (!ctx.cr6.eq) goto loc_820E341C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3550
	ctx.lr = 0x820E341C;
	sub_820E3550(ctx, base);
loc_820E341C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r4,392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addi r3,r11,10704
	ctx.r3.s64 = ctx.r11.s64 + 10704;
	// bl 0x821413f8
	ctx.lr = 0x820E3430;
	sub_821413F8(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r8,300(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// ori r7,r8,8
	ctx.r7.u64 = ctx.r8.u64 | 8;
	// stw r7,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r7.u32);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// lwz r5,300(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// ori r4,r5,4
	ctx.r4.u64 = ctx.r5.u64 | 4;
	// stw r4,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r4.u32);
	// lwz r3,336(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// sth r9,332(r31)
	PPC_STORE_U16(ctx.r31.u32 + 332, ctx.r9.u16);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x820e3494
	if (!ctx.cr6.eq) goto loc_820E3494;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820E3490;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820E3494:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// lwz r10,492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e34d0
	if (ctx.cr6.eq) goto loc_820E34D0;
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e34d0
	if (!ctx.cr6.eq) goto loc_820E34D0;
	// bl 0x820e07e8
	ctx.lr = 0x820E34B8;
	sub_820E07E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e34c8
	if (ctx.cr6.eq) goto loc_820E34C8;
	// bl 0x820e0858
	ctx.lr = 0x820E34C4;
	sub_820E0858(ctx, base);
	// b 0x820e34cc
	goto loc_820E34CC;
loc_820E34C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820E34CC:
	// stw r3,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r3.u32);
loc_820E34D0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e34fc
	if (ctx.cr6.eq) goto loc_820E34FC;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x821d2a60
	ctx.lr = 0x820E34E4;
	sub_821D2A60(ctx, base);
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e34fc
	if (ctx.cr6.eq) goto loc_820E34FC;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8216ff88
	ctx.lr = 0x820E34FC;
	sub_8216FF88(ctx, base);
loc_820E34FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e1440
	ctx.lr = 0x820E350C;
	sub_820E1440(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820e3524
	if (ctx.cr6.eq) goto loc_820E3524;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1f08
	ctx.lr = 0x820E3524;
	sub_820F1F08(ctx, base);
loc_820E3524:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x820e3548
	if (!ctx.cr6.gt) goto loc_820E3548;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_820E3530:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1f08
	ctx.lr = 0x820E3540;
	sub_820F1F08(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x820e3530
	if (!ctx.cr0.eq) goto loc_820E3530;
loc_820E3548:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E3550"))) PPC_WEAK_FUNC(sub_820E3550);
PPC_FUNC_IMPL(__imp__sub_820E3550) {
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
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e35d8
	if (ctx.cr6.eq) goto loc_820E35D8;
	// lwz r30,72(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e3594
	if (ctx.cr6.eq) goto loc_820E3594;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e6780
	ctx.lr = 0x820E3588;
	sub_820E6780(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E3594;
	sub_82080000(ctx, base);
loc_820E3594:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r3,216(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e35b4
	if (ctx.cr6.eq) goto loc_820E35B4;
	// bl 0x82172d60
	ctx.lr = 0x820E35B4;
	sub_82172D60(ctx, base);
loc_820E35B4:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r30.u32);
	// bl 0x820e3988
	ctx.lr = 0x820E35C4;
	sub_820E3988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3b70
	ctx.lr = 0x820E35CC;
	sub_820E3B70(ctx, base);
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// bl 0x820e6018
	ctx.lr = 0x820E35D4;
	sub_820E6018(ctx, base);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
loc_820E35D8:
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

__attribute__((alias("__imp__sub_820E35F0"))) PPC_WEAK_FUNC(sub_820E35F0);
PPC_FUNC_IMPL(__imp__sub_820E35F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lis r11,11565
	ctx.r11.s64 = 757923840;
	// li r10,36
	ctx.r10.s64 = 36;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-16512
	ctx.r11.s64 = -1082130432;
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// li r5,80
	ctx.r5.s64 = 80;
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// lfs f13,92(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// sth r30,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r30.u16);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x820E36F4;
	sub_8233EAF0(ctx, base);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_820E3714"))) PPC_WEAK_FUNC(sub_820E3714);
PPC_FUNC_IMPL(__imp__sub_820E3714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E3718"))) PPC_WEAK_FUNC(sub_820E3718);
PPC_FUNC_IMPL(__imp__sub_820E3718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820E3720;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stfs f0,76(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 76, temp.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r3,176
	ctx.r4.s64 = ctx.r3.s64 + 176;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r3,r5,176
	ctx.r3.s64 = ctx.r5.s64 + 176;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8233e4e0
	ctx.lr = 0x820E3754;
	sub_8233E4E0(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3780
	if (ctx.cr6.eq) goto loc_820E3780;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
loc_820E3764:
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
	// bne 0x820e3764
	if (!ctx.cr0.eq) goto loc_820E3764;
loc_820E3780:
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f11,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e37bc
	if (ctx.cr6.eq) goto loc_820E37BC;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e37bc
	if (ctx.cr6.eq) goto loc_820E37BC;
	// bl 0x82188208
	ctx.lr = 0x820E37BC;
	sub_82188208(ctx, base);
loc_820E37BC:
	// lwz r10,300(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 300);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r28,-32171
	ctx.r28.s64 = -2108358656;
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// addi r27,r11,5280
	ctx.r27.s64 = ctx.r11.s64 + 5280;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e3800
	if (ctx.cr6.eq) goto loc_820E3800;
	// lwz r11,5540(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5540);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e37f8
	if (!ctx.cr6.eq) goto loc_820E37F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,5540(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5540, ctx.r11.u32);
	// bl 0x820e35f0
	ctx.lr = 0x820E37F8;
	sub_820E35F0(ctx, base);
loc_820E37F8:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x820e3804
	goto loc_820E3804;
loc_820E3800:
	// lwz r29,336(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 336);
loc_820E3804:
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r31,r29,80
	ctx.r31.s64 = ctx.r29.s64 + 80;
	// addi r11,r30,80
	ctx.r11.s64 = ctx.r30.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r10.u32);
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r9,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r9.u32);
	// lfs f0,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 124, temp.u32);
	// lfs f13,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,128(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 128, temp.u32);
	// lfs f12,140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,140(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 140, temp.u32);
	// lfs f11,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,144(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 144, temp.u32);
	// lfs f10,132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,132(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 132, temp.u32);
	// lfs f9,136(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,136(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 136, temp.u32);
	// lfs f8,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,148(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 148, temp.u32);
	// lwz r8,80(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r8,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r8.u32);
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r7,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r7.u32);
	// lfs f7,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,88(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 88, temp.u32);
	// lfs f6,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,92(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 92, temp.u32);
	// lfs f5,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,104(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// lfs f4,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,108(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 108, temp.u32);
	// lfs f3,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,96(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 96, temp.u32);
	// lfs f2,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,100(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 100, temp.u32);
	// lfs f1,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,112(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 112, temp.u32);
	// bl 0x820aeba8
	ctx.lr = 0x820E38A4;
	sub_820AEBA8(ctx, base);
	// lfs f13,144(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f10,128(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r6,31376
	ctx.r5.s64 = ctx.r6.s64 + 31376;
	// lfs f8,92(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// lwz r4,152(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// lfs f7,108(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r11,r4,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lfs f1,172(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r11.u32);
	// stfs f0,160(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 160, temp.u32);
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
	// beq cr6,0x820e3900
	if (ctx.cr6.eq) goto loc_820E3900;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x820e3904
	goto loc_820E3904;
loc_820E3900:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_820E3904:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822275c8
	ctx.lr = 0x820E3910;
	sub_822275C8(ctx, base);
	// lwz r11,300(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x820e3954
	if (ctx.cr6.eq) goto loc_820E3954;
	// lwz r11,5540(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5540);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e394c
	if (!ctx.cr6.eq) goto loc_820E394C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,5540(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5540, ctx.r11.u32);
	// bl 0x820e35f0
	ctx.lr = 0x820E394C;
	sub_820E35F0(ctx, base);
loc_820E394C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x820e3958
	goto loc_820E3958;
loc_820E3954:
	// lwz r11,336(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 336);
loc_820E3958:
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stfs f29,164(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// stfs f30,168(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// ori r8,r9,5
	ctx.r8.u64 = ctx.r9.u64 | 5;
	// stfs f31,172(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stw r8,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E3988"))) PPC_WEAK_FUNC(sub_820E3988);
PPC_FUNC_IMPL(__imp__sub_820E3988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820E3990;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3b68
	if (ctx.cr6.eq) goto loc_820E3B68;
	// bl 0x820e0a90
	ctx.lr = 0x820E39A8;
	sub_820E0A90(ctx, base);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e3b28
	if (ctx.cr6.eq) goto loc_820E3B28;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r28,108(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e3a74
	if (ctx.cr6.eq) goto loc_820E3A74;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820e3a74
	if (ctx.cr6.eq) goto loc_820E3A74;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_820E39D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3a68
	if (ctx.cr6.eq) goto loc_820E3A68;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e3a08
	if (ctx.cr6.eq) goto loc_820E3A08;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8218bdc0
	ctx.lr = 0x820E39FC;
	sub_8218BDC0(ctx, base);
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E3A08;
	sub_82080000(ctx, base);
loc_820E3A08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3a60
	if (ctx.cr6.eq) goto loc_820E3A60;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3a3c
	if (ctx.cr6.eq) goto loc_820E3A3C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E3A30;
	sub_82080000(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
loc_820E3A3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3a58
	if (ctx.cr6.eq) goto loc_820E3A58;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E3A58;
	sub_82080000(ctx, base);
loc_820E3A58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
loc_820E3A60:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82108840
	ctx.lr = 0x820E3A68;
	sub_82108840(ctx, base);
loc_820E3A68:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820e39d8
	if (!ctx.cr0.eq) goto loc_820E39D8;
loc_820E3A74:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// lwz r9,360(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e3ae8
	if (ctx.cr6.eq) goto loc_820E3AE8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820e3ae4
	if (ctx.cr6.eq) goto loc_820E3AE4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_820E3A9C:
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e3ad8
	if (ctx.cr6.eq) goto loc_820E3AD8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_820E3AB0:
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e3acc
	if (ctx.cr6.eq) goto loc_820E3ACC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82172d60
	ctx.lr = 0x820E3ACC;
	sub_82172D60(ctx, base);
loc_820E3ACC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x820e3ab0
	if (ctx.cr6.lt) goto loc_820E3AB0;
loc_820E3AD8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x820e3a9c
	if (!ctx.cr0.eq) goto loc_820E3A9C;
loc_820E3AE4:
	// stw r27,360(r29)
	PPC_STORE_U32(ctx.r29.u32 + 360, ctx.r27.u32);
loc_820E3AE8:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3b0c
	if (ctx.cr6.eq) goto loc_820E3B0C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E3B04;
	sub_82080000(ctx, base);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r27,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r27.u32);
loc_820E3B0C:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// sth r27,64(r11)
	PPC_STORE_U16(ctx.r11.u32 + 64, ctx.r27.u16);
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82172d60
	ctx.lr = 0x820E3B20;
	sub_82172D60(ctx, base);
	// lwz r9,336(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r27,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r27.u32);
loc_820E3B28:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3b44
	if (ctx.cr6.eq) goto loc_820E3B44;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E3B44;
	sub_82080000(ctx, base);
loc_820E3B44:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,780(r29)
	PPC_STORE_U32(ctx.r29.u32 + 780, ctx.r27.u32);
	// stw r27,784(r29)
	PPC_STORE_U32(ctx.r29.u32 + 784, ctx.r27.u32);
	// stw r27,788(r29)
	PPC_STORE_U32(ctx.r29.u32 + 788, ctx.r27.u32);
	// stw r27,792(r29)
	PPC_STORE_U32(ctx.r29.u32 + 792, ctx.r27.u32);
	// stw r27,796(r29)
	PPC_STORE_U32(ctx.r29.u32 + 796, ctx.r27.u32);
	// stw r27,800(r29)
	PPC_STORE_U32(ctx.r29.u32 + 800, ctx.r27.u32);
	// stw r27,804(r29)
	PPC_STORE_U32(ctx.r29.u32 + 804, ctx.r27.u32);
loc_820E3B68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E3B70"))) PPC_WEAK_FUNC(sub_820E3B70);
PPC_FUNC_IMPL(__imp__sub_820E3B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820E3B78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3c6c
	if (ctx.cr6.eq) goto loc_820E3C6C;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3c48
	if (ctx.cr6.eq) goto loc_820E3C48;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e3c2c
	if (!ctx.cr6.eq) goto loc_820E3C2C;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,80(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r9,76(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e3bfc
	if (ctx.cr6.eq) goto loc_820E3BFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r10,r9,128
	ctx.r10.s64 = ctx.r9.s64 + 128;
loc_820E3BD4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x820e3bf0
	if (!ctx.cr6.eq) goto loc_820E3BF0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e3bf0
	if (ctx.cr6.eq) goto loc_820E3BF0;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_820E3BF0:
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// addi r10,r10,148
	ctx.r10.s64 = ctx.r10.s64 + 148;
	// bdnz 0x820e3bd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E3BD4;
loc_820E3BFC:
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e3c2c
	if (ctx.cr6.eq) goto loc_820E3C2C;
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
loc_820E3C0C:
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lwz r31,232(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820e3c20
	if (ctx.cr6.eq) goto loc_820E3C20;
	// bl 0x820f0038
	ctx.lr = 0x820E3C20;
	sub_820F0038(ctx, base);
loc_820E3C20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820e3c0c
	if (!ctx.cr6.eq) goto loc_820E3C0C;
loc_820E3C2C:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// bl 0x82172d60
	ctx.lr = 0x820E3C40;
	sub_82172D60(ctx, base);
	// lwz r9,336(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r28,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r28.u32);
loc_820E3C48:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3c64
	if (ctx.cr6.eq) goto loc_820E3C64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E3C64;
	sub_82080000(ctx, base);
loc_820E3C64:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_820E3C6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E3C74"))) PPC_WEAK_FUNC(sub_820E3C74);
PPC_FUNC_IMPL(__imp__sub_820E3C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E3C78"))) PPC_WEAK_FUNC(sub_820E3C78);
PPC_FUNC_IMPL(__imp__sub_820E3C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e3d84
	if (ctx.cr6.eq) goto loc_820E3D84;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lhz r3,152(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 152);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// lwz r6,148(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// lwz r8,108(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// lwz r31,84(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e3cbc
	if (!ctx.cr6.eq) goto loc_820E3CBC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_820E3CBC:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bne cr6,0x820e3d00
	if (!ctx.cr6.eq) goto loc_820E3D00;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e3ce8
	if (ctx.cr6.eq) goto loc_820E3CE8;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_820E3CE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e3d00
	if (!ctx.cr6.eq) goto loc_820E3D00;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_820E3D00:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820e3d3c
	if (ctx.cr6.eq) goto loc_820E3D3C;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// beq cr6,0x820e3d3c
	if (ctx.cr6.eq) goto loc_820E3D3C;
	// addi r11,r31,-944
	ctx.r11.s64 = ctx.r31.s64 + -944;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820E3D24:
	// lwzu r10,960(r11)
	ea = 960 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r10,2,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x10;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// bdnz 0x820e3d24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E3D24;
loc_820E3D3C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// beq cr6,0x820e3d68
	if (ctx.cr6.eq) goto loc_820E3D68;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_820E3D68:
	// lhz r11,154(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 154);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3d84
	if (ctx.cr6.eq) goto loc_820E3D84;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_820E3D84:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E3D8C"))) PPC_WEAK_FUNC(sub_820E3D8C);
PPC_FUNC_IMPL(__imp__sub_820E3D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E3D90"))) PPC_WEAK_FUNC(sub_820E3D90);
PPC_FUNC_IMPL(__imp__sub_820E3D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x820E3D98;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e3f3c
	if (ctx.cr6.eq) goto loc_820E3F3C;
	// lhz r28,152(r4)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r4.u32 + 152);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r26,148(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// lwz r29,108(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r23,84(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// beq cr6,0x820e3e0c
	if (ctx.cr6.eq) goto loc_820E3E0C;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e3e0c
	if (!ctx.cr6.eq) goto loc_820E3E0C;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r5,15
	ctx.r10.s64 = ctx.r5.s64 + 15;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x820E3E08;
	sub_8233EAF0(ctx, base);
	// b 0x820e3e10
	goto loc_820E3E10;
loc_820E3E0C:
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
loc_820E3E10:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x820e3e50
	if (ctx.cr6.eq) goto loc_820E3E50;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_820E3E34:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// stwx r25,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r25.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x820e3e34
	if (ctx.cr6.lt) goto loc_820E3E34;
loc_820E3E50:
	// lwz r11,300(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 300);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e3e88
	if (!ctx.cr6.eq) goto loc_820E3E88;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820e3e88
	if (ctx.cr6.eq) goto loc_820E3E88;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x820E3E84;
	sub_8233EAF0(ctx, base);
	// b 0x820e3e8c
	goto loc_820E3E8C;
loc_820E3E88:
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
loc_820E3E8C:
	// lwz r11,300(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 300);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e3ec0
	if (!ctx.cr6.eq) goto loc_820E3EC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x820E3EBC;
	sub_8233EAF0(ctx, base);
	// b 0x820e3ec4
	goto loc_820E3EC4;
loc_820E3EC0:
	// stw r25,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r25.u32);
loc_820E3EC4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820e3f2c
	if (ctx.cr6.eq) goto loc_820E3F2C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r11,360(r24)
	PPC_STORE_U32(ctx.r24.u32 + 360, ctx.r11.u32);
	// beq cr6,0x820e3f2c
	if (ctx.cr6.eq) goto loc_820E3F2C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r9,r23,16
	ctx.r9.s64 = ctx.r23.s64 + 16;
loc_820E3EF0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r10,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820e3f18
	if (ctx.cr6.eq) goto loc_820E3F18;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,360(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 360);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x820e3f20
	goto loc_820E3F20;
loc_820E3F18:
	// lwz r10,360(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 360);
	// stwx r25,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u32);
loc_820E3F20:
	// addi r9,r9,960
	ctx.r9.s64 = ctx.r9.s64 + 960;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820e3ef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E3EF0;
loc_820E3F2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_820E3F3C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82100500
	ctx.lr = 0x820E3F4C;
	sub_82100500(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E3F54"))) PPC_WEAK_FUNC(sub_820E3F54);
PPC_FUNC_IMPL(__imp__sub_820E3F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E3F58"))) PPC_WEAK_FUNC(sub_820E3F58);
PPC_FUNC_IMPL(__imp__sub_820E3F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820E3F60;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e40b8
	if (ctx.cr6.eq) goto loc_820E40B8;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e40ac
	if (!ctx.cr6.eq) goto loc_820E40AC;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
	// addi r8,r9,15
	ctx.r8.s64 = ctx.r9.s64 + 15;
	// rlwinm r9,r8,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// beq cr6,0x820e3fe4
	if (ctx.cr6.eq) goto loc_820E3FE4;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_820E3FC8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add. r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820e3fd8
	if (ctx.cr0.eq) goto loc_820E3FD8;
	// bl 0x820e66e0
	ctx.lr = 0x820E3FD8;
	sub_820E66E0(ctx, base);
loc_820E3FD8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// bne 0x820e3fc8
	if (!ctx.cr0.eq) goto loc_820E3FC8;
loc_820E3FE4:
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// lwz r26,40(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820e4094
	if (!ctx.cr6.gt) goto loc_820E4094;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r31,r26,128
	ctx.r31.s64 = ctx.r26.s64 + 128;
loc_820E4004:
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820E4018;
	sub_8233E4E0(ctx, base);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e404c
	if (!ctx.cr6.eq) goto loc_820E404C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e4044
	if (ctx.cr6.eq) goto loc_820E4044;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x820e4078
	if (ctx.cr6.eq) goto loc_820E4078;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_820E4044:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x820e4078
	goto loc_820E4078;
loc_820E404C:
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
	// beq cr6,0x820e4074
	if (ctx.cr6.eq) goto loc_820E4074;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820e4078
	if (ctx.cr6.eq) goto loc_820E4078;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_820E4074:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820E4078:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820e4004
	if (ctx.cr6.lt) goto loc_820E4004;
loc_820E4094:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_820E40AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82170098
	ctx.lr = 0x820E40B4;
	sub_82170098(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
loc_820E40B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E40C0"))) PPC_WEAK_FUNC(sub_820E40C0);
PPC_FUNC_IMPL(__imp__sub_820E40C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e434
	ctx.lr = 0x820E40C8;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// li r15,1
	ctx.r15.s64 = 1;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e4228
	if (ctx.cr6.eq) goto loc_820E4228;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x820e410c
	if (!ctx.cr6.eq) goto loc_820E410C;
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x820e4144
	goto loc_820E4144;
loc_820E410C:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e4144
	if (ctx.cr6.eq) goto loc_820E4144;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x820e4144
	if (ctx.cr6.eq) goto loc_820E4144;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x820e413c
	if (ctx.cr6.eq) goto loc_820E413C;
	// lhz r10,152(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 152);
	// lhz r9,152(r22)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r22.u32 + 152);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// bne cr6,0x820e4140
	if (!ctx.cr6.eq) goto loc_820E4140;
loc_820E413C:
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_820E4140:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
loc_820E4144:
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// bne cr6,0x820e4158
	if (!ctx.cr6.eq) goto loc_820E4158;
	// lwz r18,44(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// b 0x820e417c
	goto loc_820E417C;
loc_820E4158:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e417c
	if (ctx.cr6.eq) goto loc_820E417C;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x820e417c
	if (ctx.cr6.eq) goto loc_820E417C;
	// subf r10,r10,r18
	ctx.r10.s64 = ctx.r18.s64 - ctx.r10.s64;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
loc_820E417C:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e41c0
	if (ctx.cr6.eq) goto loc_820E41C0;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e41c0
	if (ctx.cr6.eq) goto loc_820E41C0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r16,8(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// beq cr6,0x820e41b8
	if (ctx.cr6.eq) goto loc_820E41B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e6780
	ctx.lr = 0x820E41AC;
	sub_820E6780(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820E41B8;
	sub_82080000(ctx, base);
loc_820E41B8:
	// lwz r11,336(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 336);
	// stw r17,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r17.u32);
loc_820E41C0:
	// lwz r11,336(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 336);
	// lwz r8,224(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 224);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r30,72(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// beq cr6,0x820e4228
	if (ctx.cr6.eq) goto loc_820E4228;
	// addi r7,r21,32
	ctx.r7.s64 = ctx.r21.s64 + 32;
	// li r6,144
	ctx.r6.s64 = 144;
loc_820E41DC:
	// lwz r9,160(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 160);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x820e421c
	if (ctx.cr6.eq) goto loc_820E421C;
	// lwz r5,336(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 336);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r4,40(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// subf r3,r4,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r4.s64;
	// divw r9,r3,r6
	ctx.r9.s32 = ctx.r3.s32 / ctx.r6.s32;
	// beq cr6,0x820e4214
	if (ctx.cr6.eq) goto loc_820E4214;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x820e4218
	if (ctx.cr6.eq) goto loc_820E4218;
	// stw r17,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r17.u32);
loc_820E4214:
	// stw r7,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r7.u32);
loc_820E4218:
	// stb r9,176(r8)
	PPC_STORE_U8(ctx.r8.u32 + 176, ctx.r9.u8);
loc_820E421C:
	// lwz r8,232(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820e41dc
	if (!ctx.cr6.eq) goto loc_820E41DC;
loc_820E4228:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x820e424c
	if (ctx.cr6.eq) goto loc_820E424C;
	// lwz r11,84(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 84);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e424c
	if (ctx.cr6.eq) goto loc_820E424C;
	// lwz r11,300(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 300);
	// oris r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 67108864;
	// b 0x820e4254
	goto loc_820E4254;
loc_820E424C:
	// lwz r11,300(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 300);
	// rlwinm r10,r11,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
loc_820E4254:
	// stw r10,300(r21)
	PPC_STORE_U32(ctx.r21.u32 + 300, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x820e3c78
	ctx.lr = 0x820E426C;
	sub_820E3C78(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x820e3988
	ctx.lr = 0x820E4274;
	sub_820E3988(ctx, base);
	// lwz r11,336(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e430c
	if (!ctx.cr6.eq) goto loc_820E430C;
	// lis r31,-32197
	ctx.r31.s64 = -2110062592;
	// lwz r3,-27096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820E428C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e4298
	if (!ctx.cr6.eq) goto loc_820E4298;
	// bl 0x821b3000
	ctx.lr = 0x820E4298;
	sub_821B3000(ctx, base);
loc_820E4298:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x820e42bc
	if (!ctx.cr6.lt) goto loc_820E42BC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r17,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r17.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_820E42BC:
	// bl 0x820e6130
	ctx.lr = 0x820E42C0;
	sub_820E6130(ctx, base);
	// lwz r11,-27096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27096);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82388734
	ctx.lr = 0x820E42D0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e42dc
	if (!ctx.cr6.eq) goto loc_820E42DC;
	// bl 0x821b3000
	ctx.lr = 0x820E42DC;
	sub_821B3000(ctx, base);
loc_820E42DC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e42f0
	if (ctx.cr6.eq) goto loc_820E42F0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820E42F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e4304
	if (ctx.cr6.eq) goto loc_820E4304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e35f0
	ctx.lr = 0x820E4300;
	sub_820E35F0(ctx, base);
	// b 0x820e4308
	goto loc_820E4308;
loc_820E4304:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_820E4308:
	// stw r3,336(r21)
	PPC_STORE_U32(ctx.r21.u32 + 336, ctx.r3.u32);
loc_820E430C:
	// lwz r11,336(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 336);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r11,340(r21)
	PPC_STORE_U32(ctx.r21.u32 + 340, ctx.r11.u32);
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// bne cr6,0x820e4328
	if (!ctx.cr6.eq) goto loc_820E4328;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x820e4868
	if (ctx.cr6.eq) goto loc_820E4868;
loc_820E4328:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r25,336(r21)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r21.u32 + 336);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82082030
	ctx.lr = 0x820E4344;
	sub_82082030(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x820E4354;
	sub_8233EAF0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820e3d90
	ctx.lr = 0x820E4370;
	sub_820E3D90(ctx, base);
	// lwz r10,300(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 300);
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// rlwinm r9,r10,0,10,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// rlwinm r9,r9,0,8,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r9,300(r21)
	PPC_STORE_U32(ctx.r21.u32 + 300, ctx.r9.u32);
	// beq cr6,0x820e4588
	if (ctx.cr6.eq) goto loc_820E4588;
	// stw r22,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r22.u32);
	// addi r11,r22,48
	ctx.r11.s64 = ctx.r22.s64 + 48;
loc_820E4394:
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
	// bne 0x820e4394
	if (!ctx.cr0.eq) goto loc_820E4394;
	// lwz r8,72(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820e43cc
	if (!ctx.cr6.eq) goto loc_820E43CC;
	// lhz r11,152(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bne cr6,0x820e43d0
	if (!ctx.cr6.eq) goto loc_820E43D0;
loc_820E43CC:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_820E43D0:
	// lwz r26,108(r22)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r22.u32 + 108);
	// clrlwi r20,r11,24
	ctx.r20.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820e4588
	if (ctx.cr6.eq) goto loc_820E4588;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// li r23,-1
	ctx.r23.s64 = -1;
	// ori r24,r11,65535
	ctx.r24.u64 = ctx.r11.u64 | 65535;
loc_820E43F4:
	// lwz r11,84(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 84);
	// add r29,r27,r11
	ctx.r29.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e4424
	if (ctx.cr6.eq) goto loc_820E4424;
	// lwz r11,300(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 300);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// oris r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 4194304;
	// stw r10,300(r21)
	PPC_STORE_U32(ctx.r21.u32 + 300, ctx.r10.u32);
	// bl 0x820e5b68
	ctx.lr = 0x820E4424;
	sub_820E5B68(ctx, base);
loc_820E4424:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e445c
	if (ctx.cr6.eq) goto loc_820E445C;
	// lwz r11,492(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e445c
	if (!ctx.cr6.eq) goto loc_820E445C;
	// bl 0x820e07e8
	ctx.lr = 0x820E4444;
	sub_820E07E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e4454
	if (ctx.cr6.eq) goto loc_820E4454;
	// bl 0x820e0858
	ctx.lr = 0x820E4450;
	sub_820E0858(ctx, base);
	// b 0x820e4458
	goto loc_820E4458;
loc_820E4454:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_820E4458:
	// stw r3,492(r21)
	PPC_STORE_U32(ctx.r21.u32 + 492, ctx.r3.u32);
loc_820E445C:
	// lwz r30,24(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820e4478
	if (!ctx.cr6.eq) goto loc_820E4478;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e453c
	if (ctx.cr6.eq) goto loc_820E453C;
loc_820E4478:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x820ac008
	ctx.lr = 0x820E4480;
	sub_820AC008(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e44b4
	if (!ctx.cr6.eq) goto loc_820E44B4;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r26,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820e44a0
	if (!ctx.cr6.gt) goto loc_820E44A0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_820E44A0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820E44B0;
	sub_82082030(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
loc_820E44B4:
	// lhz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 64);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r28,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r28.u32);
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r7.u16);
	// beq cr6,0x820e453c
	if (ctx.cr6.eq) goto loc_820E453C;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_820E44E4:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820e44f4
	if (ctx.cr6.lt) goto loc_820E44F4;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// b 0x820e44fc
	goto loc_820E44FC;
loc_820E44F4:
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
loc_820E44FC:
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// clrlwi r8,r7,30
	ctx.r8.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820e4520
	if (!ctx.cr6.eq) goto loc_820E4520;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x820e44e4
	if (ctx.cr6.lt) goto loc_820E44E4;
	// b 0x820e453c
	goto loc_820E453C;
loc_820E4520:
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r7,r15,3,0,30
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r15.u32, 3) & 0xFFFFFFFE) | (ctx.r7.u64 & 0xFFFFFFFF00000001);
	// li r8,-1
	ctx.r8.s64 = -1;
	// rlwinm r5,r28,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x820e2c70
	ctx.lr = 0x820E453C;
	sub_820E2C70(ctx, base);
loc_820E453C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e4578
	if (ctx.cr6.eq) goto loc_820E4578;
	// lwz r11,84(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 84);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e4568
	if (ctx.cr6.eq) goto loc_820E4568;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x820e456c
	goto loc_820E456C;
loc_820E4568:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_820E456C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x820e6678
	ctx.lr = 0x820E4578;
	sub_820E6678(ctx, base);
loc_820E4578:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,960
	ctx.r27.s64 = ctx.r27.s64 + 960;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x820e43f4
	if (ctx.cr6.lt) goto loc_820E43F4;
loc_820E4588:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x820e4734
	if (ctx.cr6.eq) goto loc_820E4734;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e4718
	if (!ctx.cr6.eq) goto loc_820E4718;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x820e3b70
	ctx.lr = 0x820E45A4;
	sub_820E3B70(ctx, base);
	// lwz r11,300(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 300);
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e45d0
	if (!ctx.cr6.eq) goto loc_820E45D0;
	// lwz r11,80(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 80);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// rlwinm r31,r10,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
loc_820E45D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082030
	ctx.lr = 0x820E45E4;
	sub_82082030(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x820E45F4;
	sub_8233EAF0(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820e3f58
	ctx.lr = 0x820E4610;
	sub_820E3F58(ctx, base);
	// lwz r8,24(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820e466c
	if (ctx.cr6.eq) goto loc_820E466C;
	// lwz r11,180(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// lwz r6,40(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e466c
	if (ctx.cr6.eq) goto loc_820E466C;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820E4634:
	// lwz r11,168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 168);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r11,224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x820e4650
	if (ctx.cr6.lt) goto loc_820E4650;
	// stw r6,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r6.u32);
	// b 0x820e4664
	goto loc_820E4664;
loc_820E4650:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
loc_820E4664:
	// addi r7,r7,236
	ctx.r7.s64 = ctx.r7.s64 + 236;
	// bdnz 0x820e4634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E4634;
loc_820E466C:
	// stw r18,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r18.u32);
	// addi r11,r18,48
	ctx.r11.s64 = ctx.r18.s64 + 48;
loc_820E4674:
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
	// bne 0x820e4674
	if (!ctx.cr0.eq) goto loc_820E4674;
	// lwz r10,224(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 224);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e46f0
	if (ctx.cr6.eq) goto loc_820E46F0;
	// li r6,255
	ctx.r6.s64 = 255;
loc_820E46A0:
	// lbz r11,176(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 176);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820e46e4
	if (ctx.cr6.eq) goto loc_820E46E4;
	// stb r6,176(r10)
	PPC_STORE_U8(ctx.r10.u32 + 176, ctx.r6.u8);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r7,40(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// beq cr6,0x820e46e0
	if (ctx.cr6.eq) goto loc_820E46E0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x820e46e4
	if (ctx.cr6.eq) goto loc_820E46E4;
	// stw r17,128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 128, ctx.r17.u32);
loc_820E46E0:
	// stw r8,128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 128, ctx.r8.u32);
loc_820E46E4:
	// lwz r10,232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e46a0
	if (!ctx.cr6.eq) goto loc_820E46A0;
loc_820E46F0:
	// lwz r11,72(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e4718
	if (ctx.cr6.eq) goto loc_820E4718;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x820ac008
	ctx.lr = 0x820E4704;
	sub_820AC008(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x821879a8
	ctx.lr = 0x820E4718;
	sub_821879A8(ctx, base);
loc_820E4718:
	// lwz r11,72(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e4738
	if (!ctx.cr6.eq) goto loc_820E4738;
	// lwz r11,300(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 300);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r20,r10,6,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// b 0x820e4738
	goto loc_820E4738;
loc_820E4734:
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
loc_820E4738:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e4868
	if (ctx.cr6.eq) goto loc_820E4868;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82082030
	ctx.lr = 0x820E4758;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e4770
	if (ctx.cr6.eq) goto loc_820E4770;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82186c38
	ctx.lr = 0x820E4768;
	sub_82186C38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820e4774
	goto loc_820E4774;
loc_820E4770:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_820E4774:
	// stw r31,72(r25)
	PPC_STORE_U32(ctx.r25.u32 + 72, ctx.r31.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x820e4810
	if (ctx.cr6.eq) goto loc_820E4810;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,8(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e47a4
	if (ctx.cr6.eq) goto loc_820E47A4;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e47a4
	if (ctx.cr6.eq) goto loc_820E47A4;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// b 0x820e47e4
	goto loc_820E47E4;
loc_820E47A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e47e0
	if (ctx.cr6.eq) goto loc_820E47E0;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r9,r11,92
	ctx.r9.s64 = ctx.r11.s64 + 92;
	// addi r8,r31,32
	ctx.r8.s64 = ctx.r31.s64 + 32;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
loc_820E47E0:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_820E47E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e4810
	if (ctx.cr6.eq) goto loc_820E4810;
	// bl 0x82087078
	ctx.lr = 0x820E47F4;
	sub_82087078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82198820
	ctx.lr = 0x820E4808;
	sub_82198820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82172d60
	ctx.lr = 0x820E4810;
	sub_82172D60(ctx, base);
loc_820E4810:
	// lwz r11,300(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e4850
	if (ctx.cr6.eq) goto loc_820E4850;
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
	// bne cr6,0x820e4854
	if (!ctx.cr6.eq) goto loc_820E4854;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,5540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5540, ctx.r11.u32);
	// bl 0x820e35f0
	ctx.lr = 0x820E484C;
	sub_820E35F0(ctx, base);
	// b 0x820e4854
	goto loc_820E4854;
loc_820E4850:
	// lwz r31,336(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 336);
loc_820E4854:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x821879a8
	ctx.lr = 0x820E4868;
	sub_821879A8(ctx, base);
loc_820E4868:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e484
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E4870"))) PPC_WEAK_FUNC(sub_820E4870);
PPC_FUNC_IMPL(__imp__sub_820E4870) {
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
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,224(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r10,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
	// beq cr6,0x820e48c4
	if (ctx.cr6.eq) goto loc_820E48C4;
loc_820E48A0:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x820e48b8
	if (!ctx.cr6.eq) goto loc_820E48B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e4870
	ctx.lr = 0x820E48B8;
	sub_820E4870(ctx, base);
loc_820E48B8:
	// lwz r31,232(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820e48a0
	if (!ctx.cr6.eq) goto loc_820E48A0;
loc_820E48C4:
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

__attribute__((alias("__imp__sub_820E48DC"))) PPC_WEAK_FUNC(sub_820E48DC);
PPC_FUNC_IMPL(__imp__sub_820E48DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E48E0"))) PPC_WEAK_FUNC(sub_820E48E0);
PPC_FUNC_IMPL(__imp__sub_820E48E0) {
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
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,224(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// andc r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r10,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
	// beq cr6,0x820e4934
	if (ctx.cr6.eq) goto loc_820E4934;
loc_820E4910:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x820e4928
	if (!ctx.cr6.eq) goto loc_820E4928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e48e0
	ctx.lr = 0x820E4928;
	sub_820E48E0(ctx, base);
loc_820E4928:
	// lwz r31,232(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820e4910
	if (!ctx.cr6.eq) goto loc_820E4910;
loc_820E4934:
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

__attribute__((alias("__imp__sub_820E494C"))) PPC_WEAK_FUNC(sub_820E494C);
PPC_FUNC_IMPL(__imp__sub_820E494C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E4950"))) PPC_WEAK_FUNC(sub_820E4950);
PPC_FUNC_IMPL(__imp__sub_820E4950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,22200
	ctx.r11.s64 = ctx.r11.s64 + 22200;
	// lwz r10,984(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x820e498c
	if (ctx.cr6.eq) goto loc_820E498C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_820E498C:
	// lfs f0,980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x820e49e4
	if (ctx.cr6.eq) goto loc_820E49E4;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// blr 
	return;
loc_820E49E4:
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// rlwinm r11,r10,0,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFE;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E4A1C"))) PPC_WEAK_FUNC(sub_820E4A1C);
PPC_FUNC_IMPL(__imp__sub_820E4A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E4A20"))) PPC_WEAK_FUNC(sub_820E4A20);
PPC_FUNC_IMPL(__imp__sub_820E4A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x820E4A28;
	__savegprlr_17(ctx, base);
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// bl 0x820ac008
	ctx.lr = 0x820E4A54;
	sub_820AC008(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e4ac0
	if (!ctx.cr6.eq) goto loc_820E4AC0;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x820E4A7C;
	sub_8233EAF0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820e4a94
	if (ctx.cr6.eq) goto loc_820E4A94;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x820E4A94;
	sub_8233EAF0(ctx, base);
loc_820E4A94:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x820e4fb0
	if (ctx.cr6.eq) goto loc_820E4FB0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x820E4AAC;
	sub_8233EAF0(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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
loc_820E4AC0:
	// lis r18,-32197
	ctx.r18.s64 = -2110062592;
	// lwz r25,40(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r27,76(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r3,-27096(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820E4AD8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e4ae4
	if (!ctx.cr6.eq) goto loc_820E4AE4;
	// bl 0x821b3000
	ctx.lr = 0x820E4AE4;
	sub_821B3000(ctx, base);
loc_820E4AE4:
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r17,-13569
	ctx.r17.s64 = -889257984;
	// rlwinm r19,r8,0,0,27
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// add r7,r19,r10
	ctx.r7.u64 = ctx.r19.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820e4b18
	if (!ctx.cr6.gt) goto loc_820E4B18;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4492
	ctx.r9.s64 = ctx.r10.s64 + 4492;
	// stw r9,-13570(r17)
	PPC_STORE_U32(ctx.r17.u32 + -13570, ctx.r9.u32);
loc_820E4B18:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r8,r10,r19
	ctx.r8.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r21,r9,r10
	ctx.r21.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// beq cr6,0x820e4b60
	if (ctx.cr6.eq) goto loc_820E4B60;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
loc_820E4B3C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822578d8
	ctx.lr = 0x820E4B4C;
	sub_822578D8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,148
	ctx.r27.s64 = ctx.r27.s64 + 148;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// addi r25,r25,144
	ctx.r25.s64 = ctx.r25.s64 + 144;
	// bne 0x820e4b3c
	if (!ctx.cr0.eq) goto loc_820E4B3C;
loc_820E4B60:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820e4f50
	if (ctx.cr6.eq) goto loc_820E4F50;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820e4c50
	if (!ctx.cr6.eq) goto loc_820E4C50;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x820e4f50
	if (!ctx.cr6.eq) goto loc_820E4F50;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x820e4f50
	if (ctx.cr6.eq) goto loc_820E4F50;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f29,244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
loc_820E4B94:
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r29,r30,40
	ctx.r29.s64 = ctx.r30.s64 + 40;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_820E4BA8:
	// lbzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f29
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x820e4c2c
	if (ctx.cr6.eq) goto loc_820E4C2C;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// rotlwi r11,r10,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// add r5,r11,r21
	ctx.r5.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x82257540
	ctx.lr = 0x820E4BE4;
	sub_82257540(ctx, base);
	// lfs f0,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// fadds f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// blt cr6,0x820e4ba8
	if (ctx.cr6.lt) goto loc_820E4BA8;
loc_820E4C2C:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257540
	ctx.lr = 0x820E4C3C;
	sub_82257540(ctx, base);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x820e4b94
	if (!ctx.cr0.eq) goto loc_820E4B94;
	// b 0x820e4f50
	goto loc_820E4F50;
loc_820E4C50:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x820e4d9c
	if (!ctx.cr6.eq) goto loc_820E4D9C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x820e4f50
	if (ctx.cr6.eq) goto loc_820E4F50;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// subf r26,r28,r23
	ctx.r26.s64 = ctx.r23.s64 - ctx.r28.s64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f29,244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
loc_820E4C74:
	// stfs f30,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r27,r30,40
	ctx.r27.s64 = ctx.r30.s64 + 40;
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_820E4C94:
	// lbzx r10,r27,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f29
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x820e4d68
	if (ctx.cr6.eq) goto loc_820E4D68;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// rotlwi r11,r10,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// add r29,r11,r21
	ctx.r29.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82257540
	ctx.lr = 0x820E4CD4;
	sub_82257540(ctx, base);
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// fadds f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82257600
	ctx.lr = 0x820E4D20;
	sub_82257600(ctx, base);
	// lfs f2,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f31
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f8,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// fadds f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f5,f11,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f5,144(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// blt cr6,0x820e4c94
	if (ctx.cr6.lt) goto loc_820E4C94;
loc_820E4D68:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// add r3,r26,r28
	ctx.r3.u64 = ctx.r26.u64 + ctx.r28.u64;
	// bl 0x82257540
	ctx.lr = 0x820E4D78;
	sub_82257540(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257600
	ctx.lr = 0x820E4D88;
	sub_82257600(ctx, base);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x820e4c74
	if (!ctx.cr0.eq) goto loc_820E4C74;
	// b 0x820e4f50
	goto loc_820E4F50;
loc_820E4D9C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x820e4f50
	if (ctx.cr6.eq) goto loc_820E4F50;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// subf r25,r28,r23
	ctx.r25.s64 = ctx.r23.s64 - ctx.r28.s64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// subf r23,r28,r22
	ctx.r23.s64 = ctx.r22.s64 - ctx.r28.s64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lfs f29,244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
loc_820E4DC4:
	// stfs f30,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r26,r31,40
	ctx.r26.s64 = ctx.r31.s64 + 40;
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f30,184(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f30,192(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
loc_820E4DF0:
	// lbzx r10,r26,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f29
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x820e4f10
	if (ctx.cr6.eq) goto loc_820E4F10;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// rotlwi r11,r10,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// add r29,r11,r21
	ctx.r29.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82257540
	ctx.lr = 0x820E4E30;
	sub_82257540(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f6,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fadds f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f4,156(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82257600
	ctx.lr = 0x820E4E7C;
	sub_82257600(ctx, base);
	// lfs f2,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f31
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f8,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fadds f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,172(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fadds f5,f11,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f5,176(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82257600
	ctx.lr = 0x820E4EC8;
	sub_82257600(ctx, base);
	// lfs f4,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f31
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f3,f31
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmuls f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lfs f10,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// fadds f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,188(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f7,192(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// blt cr6,0x820e4df0
	if (ctx.cr6.lt) goto loc_820E4DF0;
loc_820E4F10:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// add r3,r28,r25
	ctx.r3.u64 = ctx.r28.u64 + ctx.r25.u64;
	// bl 0x82257540
	ctx.lr = 0x820E4F20;
	sub_82257540(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257600
	ctx.lr = 0x820E4F30;
	sub_82257600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// add r3,r23,r28
	ctx.r3.u64 = ctx.r23.u64 + ctx.r28.u64;
	// bl 0x82257600
	ctx.lr = 0x820E4F40;
	sub_82257600(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x820e4dc4
	if (!ctx.cr0.eq) goto loc_820E4DC4;
loc_820E4F50:
	// lwz r3,-27096(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820E4F58;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e4f64
	if (!ctx.cr6.eq) goto loc_820E4F64;
	// bl 0x821b3000
	ctx.lr = 0x820E4F64;
	sub_821B3000(ctx, base);
loc_820E4F64:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x820e4fb0
	if (ctx.cr6.eq) goto loc_820E4FB0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r10,4520
	ctx.r8.s64 = ctx.r10.s64 + 4520;
	// cmplw cr6,r19,r9
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820e4f88
	if (!ctx.cr6.gt) goto loc_820E4F88;
	// stw r8,-13570(r17)
	PPC_STORE_U32(ctx.r17.u32 + -13570, ctx.r8.u32);
loc_820E4F88:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r19,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r19.s64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r21
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x820e4fa4
	if (ctx.cr6.eq) goto loc_820E4FA4;
	// stw r8,-13570(r17)
	PPC_STORE_U32(ctx.r17.u32 + -13570, ctx.r8.u32);
loc_820E4FA4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r19,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r19.s64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_820E4FB0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

__attribute__((alias("__imp__sub_820E4FC4"))) PPC_WEAK_FUNC(sub_820E4FC4);
PPC_FUNC_IMPL(__imp__sub_820E4FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E4FC8"))) PPC_WEAK_FUNC(sub_820E4FC8);
PPC_FUNC_IMPL(__imp__sub_820E4FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x820E4FD0;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x820ac008
	ctx.lr = 0x820E4FF8;
	sub_820AC008(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e5030
	if (!ctx.cr6.eq) goto loc_820E5030;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233eaf0
	ctx.lr = 0x820E501C;
	sub_8233EAF0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
loc_820E5030:
	// lis r21,-32197
	ctx.r21.s64 = -2110062592;
	// lwz r28,40(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r31,80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r30,76(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r3,-27096(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820E5048;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e5054
	if (!ctx.cr6.eq) goto loc_820E5054;
	// bl 0x821b3000
	ctx.lr = 0x820E5054;
	sub_821B3000(ctx, base);
loc_820E5054:
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r19,-13569
	ctx.r19.s64 = -889257984;
	// rlwinm r22,r8,0,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// add r7,r22,r10
	ctx.r7.u64 = ctx.r22.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820e5088
	if (!ctx.cr6.gt) goto loc_820E5088;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4492
	ctx.r9.s64 = ctx.r10.s64 + 4492;
	// stw r9,-13570(r19)
	PPC_STORE_U32(ctx.r19.u32 + -13570, ctx.r9.u32);
loc_820E5088:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r8,r10,r22
	ctx.r8.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r23,r9,r10
	ctx.r23.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// beq cr6,0x820e50d0
	if (ctx.cr6.eq) goto loc_820E50D0;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
loc_820E50AC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822578d8
	ctx.lr = 0x820E50BC;
	sub_822578D8(ctx, base);
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
	// bne 0x820e50ac
	if (!ctx.cr0.eq) goto loc_820E50AC;
loc_820E50D0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820e51c0
	if (ctx.cr6.eq) goto loc_820E51C0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r24,r24,24
	ctx.r24.u64 = ctx.r24.u32 & 0xFF;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r29,r25,36
	ctx.r29.s64 = ctx.r25.s64 + 36;
	// lfs f29,244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
loc_820E50F4:
	// addi r30,r29,-36
	ctx.r30.s64 = ctx.r29.s64 + -36;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x820e510c
	if (ctx.cr6.eq) goto loc_820E510C;
	// lfs f0,-24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x820e51b0
	if (!ctx.cr6.eq) goto loc_820E51B0;
loc_820E510C:
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_820E511C:
	// lbzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f29
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x820e51a0
	if (ctx.cr6.eq) goto loc_820E51A0;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// rotlwi r11,r10,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x82257540
	ctx.lr = 0x820E5158;
	sub_82257540(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// fadds f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// blt cr6,0x820e511c
	if (ctx.cr6.lt) goto loc_820E511C;
loc_820E51A0:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257540
	ctx.lr = 0x820E51B0;
	sub_82257540(ctx, base);
loc_820E51B0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x820e50f4
	if (!ctx.cr0.eq) goto loc_820E50F4;
loc_820E51C0:
	// lwz r3,-27096(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820E51C8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e51d4
	if (!ctx.cr6.eq) goto loc_820E51D4;
	// bl 0x821b3000
	ctx.lr = 0x820E51D4;
	sub_821B3000(ctx, base);
loc_820E51D4:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820e5220
	if (ctx.cr6.eq) goto loc_820E5220;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r10,4520
	ctx.r8.s64 = ctx.r10.s64 + 4520;
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820e51f8
	if (!ctx.cr6.gt) goto loc_820E51F8;
	// stw r8,-13570(r19)
	PPC_STORE_U32(ctx.r19.u32 + -13570, ctx.r8.u32);
loc_820E51F8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r22,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r22.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x820e5214
	if (ctx.cr6.eq) goto loc_820E5214;
	// stw r8,-13570(r19)
	PPC_STORE_U32(ctx.r19.u32 + -13570, ctx.r8.u32);
loc_820E5214:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r22,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r22.s64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_820E5220:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E5234"))) PPC_WEAK_FUNC(sub_820E5234);
PPC_FUNC_IMPL(__imp__sub_820E5234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5238"))) PPC_WEAK_FUNC(sub_820E5238);
PPC_FUNC_IMPL(__imp__sub_820E5238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820E5240;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x821005e0
	ctx.lr = 0x820E5260;
	sub_821005E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820e5278
	if (!ctx.cr6.eq) goto loc_820E5278;
loc_820E526C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820E5278:
	// lwz r11,488(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e529c
	if (ctx.cr6.eq) goto loc_820E529C;
loc_820E5284:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x820e526c
	if (ctx.cr6.eq) goto loc_820E526C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e5284
	if (!ctx.cr6.eq) goto loc_820E5284;
loc_820E529C:
	// lwz r11,340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e52b8
	if (ctx.cr6.eq) goto loc_820E52B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82177f68
	ctx.lr = 0x820E52B8;
	sub_82177F68(ctx, base);
loc_820E52B8:
	// lwz r11,340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x820e52d4
	if (ctx.cr6.gt) goto loc_820E52D4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x820e5308
	goto loc_820E5308;
loc_820E52D4:
	// lhz r9,216(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// lhz r10,214(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 214);
	// lhz r8,212(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 212);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820e52f8
	if (ctx.cr6.lt) goto loc_820E52F8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x820e5308
	goto loc_820E5308;
loc_820E52F8:
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
loc_820E5308:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x820ac008
	ctx.lr = 0x820E5320;
	sub_820AC008(ctx, base);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,220(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// lwzx r31,r7,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r5,r6,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820e526c
	if (ctx.cr6.eq) goto loc_820E526C;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82082030
	ctx.lr = 0x820E5358;
	sub_82082030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e526c
	if (ctx.cr6.eq) goto loc_820E526C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8210cab0
	ctx.lr = 0x820E536C;
	sub_8210CAB0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r10,r11,-30672
	ctx.r10.s64 = ctx.r11.s64 + -30672;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82213238
	ctx.lr = 0x820E5388;
	sub_82213238(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820e5470
	if (ctx.cr6.eq) goto loc_820E5470;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x820e53a8
	if (ctx.cr6.lt) goto loc_820E53A8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x820e53d8
	goto loc_820E53D8;
loc_820E53A8:
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820e53d0
	if (ctx.cr6.eq) goto loc_820E53D0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x820e53d8
	goto loc_820E53D8;
loc_820E53D0:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_820E53D8:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 564, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r10,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r10.u32);
	// stb r7,456(r11)
	PPC_STORE_U8(ctx.r11.u32 + 456, ctx.r7.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r5.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f0,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r4,16
	ctx.r4.s64 = 16;
	// lfs f13,232(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// li r3,20
	ctx.r3.s64 = 20;
	// lfs f12,1460(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,436(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 436, temp.u32);
	// stfs f13,440(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 440, temp.u32);
	// stfs f0,444(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 444, temp.u32);
	// stfs f12,428(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// bl 0x82082030
	ctx.lr = 0x820E542C;
	sub_82082030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e5444
	if (ctx.cr6.eq) goto loc_820E5444;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r26.u32);
	// b 0x820e5448
	goto loc_820E5448;
loc_820E5444:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_820E5448:
	// lwz r10,488(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r11,488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 488, ctx.r11.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820E5470:
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
	ctx.lr = 0x820E5488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E5494"))) PPC_WEAK_FUNC(sub_820E5494);
PPC_FUNC_IMPL(__imp__sub_820E5494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5498"))) PPC_WEAK_FUNC(sub_820E5498);
PPC_FUNC_IMPL(__imp__sub_820E5498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820E54A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e5754
	if (!ctx.cr6.eq) goto loc_820E5754;
	// bl 0x820abe28
	ctx.lr = 0x820E54CC;
	sub_820ABE28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e5754
	if (ctx.cr6.eq) goto loc_820E5754;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// lfs f10,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmuls f4,f13,f13
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f3,f0,f0
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f2,f10,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f1,f12,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f0,f11,f11,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f13,f7,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f11,f9,f9,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f10,f8,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsqrts f0,f11
	ctx.f0.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsqrts f13,f10
	ctx.f13.f64 = double(float(sqrt(ctx.f10.f64)));
	// beq cr6,0x820e5560
	if (ctx.cr6.eq) goto loc_820E5560;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
loc_820E5560:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820e5580
	if (ctx.cr6.eq) goto loc_820E5580;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
loc_820E5580:
	// lfs f10,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// lfs f11,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f6,f8,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f5,f7,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fdivs f3,f11,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 / ctx.f4.f64));
	// fmuls f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// stfs f2,4(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f1,f8,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f10,f7,f3
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmr f9,f2
	ctx.f9.f64 = ctx.f2.f64;
	// fmr f7,f1
	ctx.f7.f64 = ctx.f1.f64;
	// fmuls f3,f10,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmadds f1,f9,f8,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// fmr f8,f4
	ctx.f8.f64 = ctx.f4.f64;
	// fmadds f6,f7,f6,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmuls f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fsubs f7,f2,f3
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f9,f8,f1
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f8,f10,f4
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f3,f7,f7
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmadds f2,f8,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f1,f9,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fsqrts f10,f1
	ctx.f10.f64 = double(float(sqrt(ctx.f1.f64)));
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f6,f5,f9
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fmuls f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// fmuls f9,f8,f5
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fmsubs f8,f5,f6,f10
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f10.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f3,f6
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// fmsubs f6,f3,f1,f9
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 - ctx.f9.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f5,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f4,f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 - ctx.f7.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f0,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f11,4(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f10,8(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f2,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// beq cr6,0x820e5730
	if (ctx.cr6.eq) goto loc_820E5730;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r10.u32);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r8,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r8.u32);
loc_820E5730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x820E5738;
	sub_820AC008(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821879a8
	ctx.lr = 0x820E574C;
	sub_821879A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820efed0
	ctx.lr = 0x820E5754;
	sub_820EFED0(ctx, base);
loc_820E5754:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E575C"))) PPC_WEAK_FUNC(sub_820E575C);
PPC_FUNC_IMPL(__imp__sub_820E575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5760"))) PPC_WEAK_FUNC(sub_820E5760);
PPC_FUNC_IMPL(__imp__sub_820E5760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820E5768;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa38
	ctx.lr = 0x820E5770;
	__savefpr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// rlwinm r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e5b58
	if (!ctx.cr6.eq) goto loc_820E5B58;
	// bl 0x820abe28
	ctx.lr = 0x820E579C;
	sub_820ABE28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e5b58
	if (ctx.cr6.eq) goto loc_820E5B58;
	// lwz r4,128(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e5b58
	if (ctx.cr6.eq) goto loc_820E5B58;
	// lwz r11,300(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,300(r28)
	PPC_STORE_U32(ctx.r28.u32 + 300, ctx.r10.u32);
	// lwz r5,132(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820e57d8
	if (ctx.cr6.eq) goto loc_820E57D8;
	// bl 0x822578d8
	ctx.lr = 0x820E57D4;
	sub_822578D8(ctx, base);
	// b 0x820e57e0
	goto loc_820E57E0;
loc_820E57D8:
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820E57E0;
	sub_8233E4E0(ctx, base);
loc_820E57E0:
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f13,f13
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f2,f11,f11
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// lfs f5,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmadds f1,f10,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f4.f64));
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmadds f3,f9,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmadds f2,f8,f8,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f2.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fneg f29,f0
	ctx.f29.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f30.f64 = double(temp.f32);
	// lfs f4,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// fneg f30,f30
	ctx.f30.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fneg f4,f4
	ctx.f4.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fmadds f1,f7,f7,f1
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f0,f6,f6,f3
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f3,f5,f5,f2
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fdivs f2,f31,f1
	ctx.f2.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fdivs f3,f31,f3
	ctx.f3.f64 = double(float(ctx.f31.f64 / ctx.f3.f64));
	// fmuls f0,f13,f2
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f13,f9,f1
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f9,f2,f7
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f7,f6,f1
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f6,f12,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f12,f5,f3
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmuls f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f2,f30,f0
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f1,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f6,196(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmuls f0,f11,f30
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,176(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f8,184(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmadds f13,f29,f9,f2
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f11,f7,f29,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f1.f64));
	// fmadds f9,f12,f29,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f7,f4,f10,f13
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f7,208(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmadds f6,f6,f30,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f11.f64));
	// stfs f6,212(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmadds f5,f8,f4,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f9.f64));
	// stfs f5,216(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f4,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f4,f4
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// lfs f13,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f1
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f5,f3,f3,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fmadds f4,f2,f2,f11
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fmadds f3,f7,f7,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f2,f9,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f1,f8,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fsqrts f28,f3
	ctx.f28.f64 = double(float(sqrt(ctx.f3.f64)));
	// fsqrts f30,f2
	ctx.f30.f64 = double(float(sqrt(ctx.f2.f64)));
	// fsqrts f29,f1
	ctx.f29.f64 = double(float(sqrt(ctx.f1.f64)));
	// beq cr6,0x820e5980
	if (ctx.cr6.eq) goto loc_820E5980;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82257600
	ctx.lr = 0x820E5980;
	sub_82257600(ctx, base);
loc_820E5980:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820e5998
	if (ctx.cr6.eq) goto loc_820E5998;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257600
	ctx.lr = 0x820E5998;
	sub_82257600(ctx, base);
loc_820E5998:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f7,f31,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 / ctx.f8.f64));
	// fmuls f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f5,4(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f4,8(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f11,f6,f12
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f10,f2
	ctx.f10.f64 = ctx.f2.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmadds f9,f4,f2,f11
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fmadds f6,f5,f0,f9
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmuls f4,f1,f6
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f3,f3,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmuls f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fsubs f2,f0,f4
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f0,f10,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fsubs f1,f12,f5
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f10,f2,f2
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmr f11,f2
	ctx.f11.f64 = ctx.f2.f64;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmadds f9,f1,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f8,f0,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f6,f31,f7
	ctx.f6.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fmuls f5,f1,f6
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f4,f2,f6
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// fmuls f7,f11,f4
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f6,f1,f3,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 - ctx.f7.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f1,f5
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// fmuls f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmr f8,f4
	ctx.f8.f64 = ctx.f4.f64;
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
	// fmsubs f4,f4,f13,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 - ctx.f10.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f9,f11,f5,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 - ctx.f12.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f30,f5
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f5.f64));
	// fmuls f0,f2,f30
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f13,f30,f3
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f3.f64));
	// stfs f1,4(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f7,f11,f29
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f28,f6
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// fmuls f3,f4,f28
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f1,f28,f5
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f5.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// beq cr6,0x820e5b34
	if (ctx.cr6.eq) goto loc_820E5B34;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r29,48
	ctx.r3.s64 = ctx.r29.s64 + 48;
	// bl 0x82257540
	ctx.lr = 0x820E5B34;
	sub_82257540(ctx, base);
loc_820E5B34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ac008
	ctx.lr = 0x820E5B3C;
	sub_820AC008(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821879a8
	ctx.lr = 0x820E5B50;
	sub_821879A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820efed0
	ctx.lr = 0x820E5B58;
	sub_820EFED0(ctx, base);
loc_820E5B58:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa84
	ctx.lr = 0x820E5B64;
	__restfpr_28(ctx, base);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E5B68"))) PPC_WEAK_FUNC(sub_820E5B68);
PPC_FUNC_IMPL(__imp__sub_820E5B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820E5B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x820ac008
	ctx.lr = 0x820E5B80;
	sub_820AC008(ctx, base);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e5c78
	if (!ctx.cr6.eq) goto loc_820E5C78;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x820E5B9C;
	sub_82081C00(ctx, base);
	// bl 0x82108958
	ctx.lr = 0x820E5BA0;
	sub_82108958(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820E5BB0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e5bbc
	if (!ctx.cr6.eq) goto loc_820E5BBC;
	// bl 0x821b3000
	ctx.lr = 0x820E5BBC;
	sub_821B3000(ctx, base);
loc_820E5BBC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e5bd0
	if (ctx.cr6.eq) goto loc_820E5BD0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820E5BD0:
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r9,6(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// ori r8,r9,128
	ctx.r8.u64 = ctx.r9.u64 | 128;
	// stb r8,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r8.u8);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lwzx r7,r30,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r28,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r28.u16);
	// addi r4,r6,31376
	ctx.r4.s64 = ctx.r6.s64 + 31376;
	// lwzx r5,r30,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwzx r9,r30,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwzx r8,r30,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r6,r6,0,26,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stb r6,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r6.u8);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// bl 0x820ac008
	ctx.lr = 0x820E5C48;
	sub_820AC008(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e5c78
	if (ctx.cr6.eq) goto loc_820E5C78;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r10,r28,960
	ctx.r10.s64 = ctx.r28.s64 * 960;
	// lwzx r9,r30,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwzx r8,r30,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lfs f13,496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
loc_820E5C78:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E5C84"))) PPC_WEAK_FUNC(sub_820E5C84);
PPC_FUNC_IMPL(__imp__sub_820E5C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5C88"))) PPC_WEAK_FUNC(sub_820E5C88);
PPC_FUNC_IMPL(__imp__sub_820E5C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820E5C90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e5d64
	if (!ctx.cr6.eq) goto loc_820E5D64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r5,r3,32
	ctx.r5.s64 = ctx.r3.s64 + 32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e5cec
	if (ctx.cr6.eq) goto loc_820E5CEC;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r9,r11,92
	ctx.r9.s64 = ctx.r11.s64 + 92;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r7,100(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// lwz r6,104(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// bl 0x82257540
	ctx.lr = 0x820E5CE4;
	sub_82257540(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820E5CEC:
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,9912
	ctx.r11.s64 = ctx.r11.s64 + 9912;
	// lwz r10,9928(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9928);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820e5d30
	if (!ctx.cr6.eq) goto loc_820E5D30;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// stw r10,9928(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9928, ctx.r10.u32);
	// lfs f0,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_820E5D30:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
	// bl 0x82257540
	ctx.lr = 0x820E5D5C;
	sub_82257540(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820E5D64:
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,32
	ctx.r29.s64 = ctx.r11.s64 + 32;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82257540
	ctx.lr = 0x820E5D80;
	sub_82257540(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f5,f9,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f0,f8,f8,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f13,f7,f7,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820e5dbc
	if (!ctx.cr6.gt) goto loc_820E5DBC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E5DBC:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f13,f10,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820e5de0
	if (ctx.cr6.gt) goto loc_820E5DE0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E5DE0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82108388
	ctx.lr = 0x820E5DE8;
	sub_82108388(ctx, base);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E5DFC"))) PPC_WEAK_FUNC(sub_820E5DFC);
PPC_FUNC_IMPL(__imp__sub_820E5DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

