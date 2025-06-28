#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8226E1A8"))) PPC_WEAK_FUNC(sub_8226E1A8);
PPC_FUNC_IMPL(__imp__sub_8226E1A8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226e22c
	if (!ctx.cr6.lt) goto loc_8226E22C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11088(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11088);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5256);
	ctx.f13.f64 = double(temp.f32);
loc_8226E1FC:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stfs f13,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226e1fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226E1FC;
loc_8226E22C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e248
	if (ctx.cr6.eq) goto loc_8226E248;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226E248;
	sub_822666B0(ctx, base);
loc_8226E248:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e264
	if (ctx.cr6.eq) goto loc_8226E264;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226E264;
	sub_82266A80(ctx, base);
loc_8226E264:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E274"))) PPC_WEAK_FUNC(sub_8226E274);
PPC_FUNC_IMPL(__imp__sub_8226E274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226E278"))) PPC_WEAK_FUNC(sub_8226E278);
PPC_FUNC_IMPL(__imp__sub_8226E278) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226e31c
	if (!ctx.cr6.lt) goto loc_8226E31C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11088);
	ctx.f0.f64 = double(temp.f32);
loc_8226E2D4:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226e2d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226E2D4;
loc_8226E31C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e338
	if (ctx.cr6.eq) goto loc_8226E338;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226E338;
	sub_822666B0(ctx, base);
loc_8226E338:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e354
	if (ctx.cr6.eq) goto loc_8226E354;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226E354;
	sub_82266A80(ctx, base);
loc_8226E354:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E364"))) PPC_WEAK_FUNC(sub_8226E364);
PPC_FUNC_IMPL(__imp__sub_8226E364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226E368"))) PPC_WEAK_FUNC(sub_8226E368);
PPC_FUNC_IMPL(__imp__sub_8226E368) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226e448
	if (!ctx.cr6.lt) goto loc_8226E448;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,11188(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11188);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f13.f64 = double(temp.f32);
loc_8226E3CC:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226e3cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226E3CC;
loc_8226E448:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e464
	if (ctx.cr6.eq) goto loc_8226E464;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226E464;
	sub_822666B0(ctx, base);
loc_8226E464:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e480
	if (ctx.cr6.eq) goto loc_8226E480;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226E480;
	sub_82266A80(ctx, base);
loc_8226E480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E490"))) PPC_WEAK_FUNC(sub_8226E490);
PPC_FUNC_IMPL(__imp__sub_8226E490) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226e5a8
	if (!ctx.cr6.lt) goto loc_8226E5A8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,5256(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,11156(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11156);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,11148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11148);
	ctx.f12.f64 = double(temp.f32);
loc_8226E4FC:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r10,30,2,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// srawi r9,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 3;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226e4fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226E4FC;
loc_8226E5A8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e5c4
	if (ctx.cr6.eq) goto loc_8226E5C4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226E5C4;
	sub_822666B0(ctx, base);
loc_8226E5C4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e5e0
	if (ctx.cr6.eq) goto loc_8226E5E0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226E5E0;
	sub_82266A80(ctx, base);
loc_8226E5E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E5F0"))) PPC_WEAK_FUNC(sub_8226E5F0);
PPC_FUNC_IMPL(__imp__sub_8226E5F0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226e6f0
	if (!ctx.cr6.lt) goto loc_8226E6F0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,5256(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,11188(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11188);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,11088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11088);
	ctx.f12.f64 = double(temp.f32);
loc_8226E65C:
	// lwz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3);
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226e65c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226E65C;
loc_8226E6F0:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e70c
	if (ctx.cr6.eq) goto loc_8226E70C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226E70C;
	sub_822666B0(ctx, base);
loc_8226E70C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e728
	if (ctx.cr6.eq) goto loc_8226E728;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226E728;
	sub_82266A80(ctx, base);
loc_8226E728:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E738"))) PPC_WEAK_FUNC(sub_8226E738);
PPC_FUNC_IMPL(__imp__sub_8226E738) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226e874
	if (!ctx.cr6.lt) goto loc_8226E874;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11188);
	ctx.f0.f64 = double(temp.f32);
loc_8226E798:
	// lwzu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// rlwinm r8,r11,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// rlwinm r11,r11,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// extsb r31,r8
	ctx.r31.s64 = ctx.r8.s8;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// add r11,r31,r8
	ctx.r11.u64 = ctx.r31.u64 + ctx.r8.u64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,8(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226e798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226E798;
loc_8226E874:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e890
	if (ctx.cr6.eq) goto loc_8226E890;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226E890;
	sub_822666B0(ctx, base);
loc_8226E890:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e8ac
	if (ctx.cr6.eq) goto loc_8226E8AC;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226E8AC;
	sub_82266A80(ctx, base);
loc_8226E8AC:
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

__attribute__((alias("__imp__sub_8226E8C0"))) PPC_WEAK_FUNC(sub_8226E8C0);
PPC_FUNC_IMPL(__imp__sub_8226E8C0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226e9a4
	if (!ctx.cr6.lt) goto loc_8226E9A4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,-32768
	ctx.r5.s64 = -32768;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,11196(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11196);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f13.f64 = double(temp.f32);
loc_8226E928:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226e928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226E928;
loc_8226E9A4:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e9c0
	if (ctx.cr6.eq) goto loc_8226E9C0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226E9C0;
	sub_822666B0(ctx, base);
loc_8226E9C0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e9dc
	if (ctx.cr6.eq) goto loc_8226E9DC;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226E9DC;
	sub_82266A80(ctx, base);
loc_8226E9DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E9EC"))) PPC_WEAK_FUNC(sub_8226E9EC);
PPC_FUNC_IMPL(__imp__sub_8226E9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226E9F0"))) PPC_WEAK_FUNC(sub_8226E9F0);
PPC_FUNC_IMPL(__imp__sub_8226E9F0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226eb34
	if (!ctx.cr6.lt) goto loc_8226EB34;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,11204(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11204);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8740(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8740);
	ctx.f13.f64 = double(temp.f32);
loc_8226EA54:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r8,r10,28,4,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFC0;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r5,r10,18,14,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFC0;
	// srawi r10,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 6;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// srawi r9,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// srawi r8,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 6;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r5,r5,512
	ctx.r5.s64 = ctx.r5.s64 + 512;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226ea54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226EA54;
loc_8226EB34:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226eb50
	if (ctx.cr6.eq) goto loc_8226EB50;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226EB50;
	sub_822666B0(ctx, base);
loc_8226EB50:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226eb6c
	if (ctx.cr6.eq) goto loc_8226EB6C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226EB6C;
	sub_82266A80(ctx, base);
loc_8226EB6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226EB7C"))) PPC_WEAK_FUNC(sub_8226EB7C);
PPC_FUNC_IMPL(__imp__sub_8226EB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226EB80"))) PPC_WEAK_FUNC(sub_8226EB80);
PPC_FUNC_IMPL(__imp__sub_8226EB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8226EB88;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226ecc4
	if (!ctx.cr6.lt) goto loc_8226ECC4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r10,-32768
	ctx.r10.s64 = -32768;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11196);
	ctx.f0.f64 = double(temp.f32);
loc_8226EBE0:
	// ldu r11,8(r5)
	ea = 8 + ctx.r5.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// rldicl r7,r11,48,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFF;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// rldicl r8,r11,16,48
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// rldicl r30,r11,32,32
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// subf r7,r10,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r10.s64;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf r29,r10,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cntlzw r7,r29
	ctx.r7.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// cntlzw r29,r31
	ctx.r29.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r9,r29,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// rlwinm r31,r7,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r7,r30,16
	ctx.r7.u64 = ctx.r30.u32 & 0xFFFF;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// add r11,r30,r7
	ctx.r11.u64 = ctx.r30.u64 + ctx.r7.u64;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,8(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226ebe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226EBE0;
loc_8226ECC4:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226ece0
	if (ctx.cr6.eq) goto loc_8226ECE0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226ECE0;
	sub_822666B0(ctx, base);
loc_8226ECE0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226ecfc
	if (ctx.cr6.eq) goto loc_8226ECFC;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226ECFC;
	sub_82266A80(ctx, base);
loc_8226ECFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226ED04"))) PPC_WEAK_FUNC(sub_8226ED04);
PPC_FUNC_IMPL(__imp__sub_8226ED04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226ED08"))) PPC_WEAK_FUNC(sub_8226ED08);
PPC_FUNC_IMPL(__imp__sub_8226ED08) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226ed9c
	if (!ctx.cr6.lt) goto loc_8226ED9C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,11176(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11176);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5256);
	ctx.f13.f64 = double(temp.f32);
loc_8226ED6C:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// stfs f13,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226ed6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226ED6C;
loc_8226ED9C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226edb8
	if (ctx.cr6.eq) goto loc_8226EDB8;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226EDB8;
	sub_822666B0(ctx, base);
loc_8226EDB8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226edd4
	if (ctx.cr6.eq) goto loc_8226EDD4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226EDD4;
	sub_82266A80(ctx, base);
loc_8226EDD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226EDE4"))) PPC_WEAK_FUNC(sub_8226EDE4);
PPC_FUNC_IMPL(__imp__sub_8226EDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226EDE8"))) PPC_WEAK_FUNC(sub_8226EDE8);
PPC_FUNC_IMPL(__imp__sub_8226EDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8226EDF0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8226ee64
	if (!ctx.cr6.lt) goto loc_8226EE64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f31.f64 = double(temp.f32);
loc_8226EE38:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822574e8
	ctx.lr = 0x8226EE48;
	sub_822574E8(ctx, base);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// stfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stfs f31,4(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// blt cr6,0x8226ee38
	if (ctx.cr6.lt) goto loc_8226EE38;
loc_8226EE64:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226ee84
	if (ctx.cr6.eq) goto loc_8226EE84;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226EE84;
	sub_822666B0(ctx, base);
loc_8226EE84:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226eea4
	if (ctx.cr6.eq) goto loc_8226EEA4;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226EEA4;
	sub_82266A80(ctx, base);
loc_8226EEA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226EEB0"))) PPC_WEAK_FUNC(sub_8226EEB0);
PPC_FUNC_IMPL(__imp__sub_8226EEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8226EEB8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8226ef28
	if (!ctx.cr6.lt) goto loc_8226EF28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f31.f64 = double(temp.f32);
loc_8226EF00:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822574e8
	ctx.lr = 0x8226EF10;
	sub_822574E8(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8226ef00
	if (ctx.cr6.lt) goto loc_8226EF00;
loc_8226EF28:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226ef48
	if (ctx.cr6.eq) goto loc_8226EF48;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226EF48;
	sub_822666B0(ctx, base);
loc_8226EF48:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226ef68
	if (ctx.cr6.eq) goto loc_8226EF68;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226EF68;
	sub_82266A80(ctx, base);
loc_8226EF68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226EF74"))) PPC_WEAK_FUNC(sub_8226EF74);
PPC_FUNC_IMPL(__imp__sub_8226EF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226EF78"))) PPC_WEAK_FUNC(sub_8226EF78);
PPC_FUNC_IMPL(__imp__sub_8226EF78) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x822574e8
	ctx.lr = 0x8226EFC0;
	sub_822574E8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226efd8
	if (ctx.cr6.eq) goto loc_8226EFD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822666b0
	ctx.lr = 0x8226EFD8;
	sub_822666B0(ctx, base);
loc_8226EFD8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226eff0
	if (ctx.cr6.eq) goto loc_8226EFF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266a80
	ctx.lr = 0x8226EFF0;
	sub_82266A80(ctx, base);
loc_8226EFF0:
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

__attribute__((alias("__imp__sub_8226F008"))) PPC_WEAK_FUNC(sub_8226F008);
PPC_FUNC_IMPL(__imp__sub_8226F008) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226f080
	if (!ctx.cr6.lt) goto loc_8226F080;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f0.f64 = double(temp.f32);
loc_8226F064:
	// lfsu f13,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226f064
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226F064;
loc_8226F080:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226f09c
	if (ctx.cr6.eq) goto loc_8226F09C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226F09C;
	sub_822666B0(ctx, base);
loc_8226F09C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226f0b8
	if (ctx.cr6.eq) goto loc_8226F0B8;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226F0B8;
	sub_82266A80(ctx, base);
loc_8226F0B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F0C8"))) PPC_WEAK_FUNC(sub_8226F0C8);
PPC_FUNC_IMPL(__imp__sub_8226F0C8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226f144
	if (!ctx.cr6.lt) goto loc_8226F144;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5256(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5256);
	ctx.f0.f64 = double(temp.f32);
loc_8226F124:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfsu f13,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226f124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226F124;
loc_8226F144:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226f160
	if (ctx.cr6.eq) goto loc_8226F160;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226F160;
	sub_822666B0(ctx, base);
loc_8226F160:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226f17c
	if (ctx.cr6.eq) goto loc_8226F17C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226F17C;
	sub_82266A80(ctx, base);
loc_8226F17C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F18C"))) PPC_WEAK_FUNC(sub_8226F18C);
PPC_FUNC_IMPL(__imp__sub_8226F18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226F190"))) PPC_WEAK_FUNC(sub_8226F190);
PPC_FUNC_IMPL(__imp__sub_8226F190) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8226F1D8;
	sub_8233E4E0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226f1f0
	if (ctx.cr6.eq) goto loc_8226F1F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822666b0
	ctx.lr = 0x8226F1F0;
	sub_822666B0(ctx, base);
loc_8226F1F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226f208
	if (ctx.cr6.eq) goto loc_8226F208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266a80
	ctx.lr = 0x8226F208;
	sub_82266A80(ctx, base);
loc_8226F208:
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

__attribute__((alias("__imp__sub_8226F220"))) PPC_WEAK_FUNC(sub_8226F220);
PPC_FUNC_IMPL(__imp__sub_8226F220) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226f2c4
	if (!ctx.cr6.lt) goto loc_8226F2C4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11176);
	ctx.f0.f64 = double(temp.f32);
loc_8226F27C:
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lhzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226f27c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226F27C;
loc_8226F2C4:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226f2e0
	if (ctx.cr6.eq) goto loc_8226F2E0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226F2E0;
	sub_822666B0(ctx, base);
loc_8226F2E0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226f2fc
	if (ctx.cr6.eq) goto loc_8226F2FC;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226F2FC;
	sub_82266A80(ctx, base);
loc_8226F2FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F30C"))) PPC_WEAK_FUNC(sub_8226F30C);
PPC_FUNC_IMPL(__imp__sub_8226F30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226F310"))) PPC_WEAK_FUNC(sub_8226F310);
PPC_FUNC_IMPL(__imp__sub_8226F310) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226f3d4
	if (!ctx.cr6.lt) goto loc_8226F3D4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,11176(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11176);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5256);
	ctx.f13.f64 = double(temp.f32);
loc_8226F374:
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhzu r10,6(r11)
	ea = 6 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8226f374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226F374;
loc_8226F3D4:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226f3f0
	if (ctx.cr6.eq) goto loc_8226F3F0;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x822666b0
	ctx.lr = 0x8226F3F0;
	sub_822666B0(ctx, base);
loc_8226F3F0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226f40c
	if (ctx.cr6.eq) goto loc_8226F40C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x8226F40C;
	sub_82266A80(ctx, base);
loc_8226F40C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F41C"))) PPC_WEAK_FUNC(sub_8226F41C);
PPC_FUNC_IMPL(__imp__sub_8226F41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226F420"))) PPC_WEAK_FUNC(sub_8226F420);
PPC_FUNC_IMPL(__imp__sub_8226F420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8226F428;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822660c8
	ctx.lr = 0x8226F440;
	sub_822660C8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,11208
	ctx.r10.s64 = ctx.r10.s64 + 11208;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82082c78
	ctx.lr = 0x8226F49C;
	sub_82082C78(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8226f4ac
	if (!ctx.cr0.eq) goto loc_8226F4AC;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
loc_8226F4AC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-75
	ctx.xer.ca = ctx.r11.u32 > 74;
	ctx.r11.s64 = ctx.r11.s64 + -75;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226f4ec
	if (ctx.cr0.eq) goto loc_8226F4EC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8226f4dc
	if (ctx.cr6.eq) goto loc_8226F4DC;
	// addis r11,r11,-504
	ctx.r11.s64 = ctx.r11.s64 + -33030144;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8226f4ec
	if (ctx.cr0.eq) goto loc_8226F4EC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8226f4f8
	if (!ctx.cr6.eq) goto loc_8226F4F8;
loc_8226F4DC:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// b 0x8226f4f8
	goto loc_8226F4F8;
loc_8226F4EC:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_8226F4F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226F504"))) PPC_WEAK_FUNC(sub_8226F504);
PPC_FUNC_IMPL(__imp__sub_8226F504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226F508"))) PPC_WEAK_FUNC(sub_8226F508);
PPC_FUNC_IMPL(__imp__sub_8226F508) {
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
	// bl 0x8233fa38
	ctx.lr = 0x8226F51C;
	__savefpr_28(ctx, base);
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8226f81c
	if (ctx.cr6.eq) goto loc_8226F81C;
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8226f81c
	if (ctx.cr6.eq) goto loc_8226F81C;
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lis r9,6184
	ctx.r9.s64 = 405274624;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r6,136(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// ori r4,r9,75
	ctx.r4.u64 = ctx.r9.u64 | 75;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mullw r8,r6,r3
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r31,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// blt cr6,0x8226f814
	if (ctx.cr6.lt) goto loc_8226F814;
	// lis r6,6184
	ctx.r6.s64 = 405274624;
	// ori r6,r6,76
	ctx.r6.u64 = ctx.r6.u64 | 76;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8226f75c
	if (!ctx.cr6.gt) goto loc_8226F75C;
	// lis r6,6688
	ctx.r6.s64 = 438304768;
	// ori r6,r6,74
	ctx.r6.u64 = ctx.r6.u64 | 74;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8226f814
	if (!ctx.cr6.gt) goto loc_8226F814;
	// lis r6,6688
	ctx.r6.s64 = 438304768;
	// ori r6,r6,76
	ctx.r6.u64 = ctx.r6.u64 | 76;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x8226f814
	if (ctx.cr6.gt) goto loc_8226F814;
	// lwz r8,140(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8226f814
	if (!ctx.cr6.lt) goto loc_8226F814;
	// addi r4,r7,-2
	ctx.r4.s64 = ctx.r7.s64 + -2;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f6,11252(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11252);
	ctx.f6.f64 = double(temp.f32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lfs f7,11248(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11248);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f8,11244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11244);
	ctx.f8.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f9,11240(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11240);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,11236(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11236);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,5268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,11232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11232);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,11228(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11228);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,11224(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11224);
	ctx.f13.f64 = double(temp.f32);
loc_8226F610:
	// lfs f5,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// lfs f2,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// lfs f31,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f31,f12
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lfs f28,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f5,f2,f12,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmsubs f3,f31,f10,f3
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f10.f64 - ctx.f3.f64));
	// fmadds f2,f31,f7,f1
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f1,f28,f13,f29
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f29.f64));
	// fmadds f5,f30,f13,f5
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fnmsubs f3,f28,f8,f3
	ctx.f3.f64 = double(float(-(ctx.f28.f64 * ctx.f8.f64 - ctx.f3.f64)));
	// fmsubs f2,f28,f10,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 - ctx.f2.f64));
	// fmadds f4,f4,f11,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fadds f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fctiwz f5,f5
	ctx.f5.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f5,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f5.u64);
	// fctiwz f5,f3
	ctx.f5.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// lwz r9,-60(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// fctiwz f3,f2
	ctx.f3.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f5,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f5.u64);
	// stfd f3,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f3.u64);
	// lwz r7,-52(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r8,-60(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// fctiwz f5,f4
	ctx.f5.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f5,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f5.u64);
	// lwz r6,-52(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// addi r5,r9,16
	ctx.r5.s64 = ctx.r9.s64 + 16;
	// addic. r6,r6,16
	ctx.xer.ca = ctx.r6.u32 > 4294967279;
	ctx.r6.s64 = ctx.r6.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r9,r7,128
	ctx.r9.s64 = ctx.r7.s64 + 128;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bge 0x8226f6b4
	if (!ctx.cr0.lt) goto loc_8226F6B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8226f6c0
	goto loc_8226F6C0;
loc_8226F6B4:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// ble cr6,0x8226f6c0
	if (!ctx.cr6.gt) goto loc_8226F6C0;
	// li r6,255
	ctx.r6.s64 = 255;
loc_8226F6C0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8226f6d0
	if (!ctx.cr6.lt) goto loc_8226F6D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8226f6dc
	goto loc_8226F6DC;
loc_8226F6D0:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// ble cr6,0x8226f6dc
	if (!ctx.cr6.gt) goto loc_8226F6DC;
	// li r5,255
	ctx.r5.s64 = 255;
loc_8226F6DC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x8226f6ec
	if (!ctx.cr6.lt) goto loc_8226F6EC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8226f6f8
	goto loc_8226F6F8;
loc_8226F6EC:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x8226f6f8
	if (!ctx.cr6.gt) goto loc_8226F6F8;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8226F6F8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8226f708
	if (!ctx.cr6.lt) goto loc_8226F708;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8226f714
	goto loc_8226F714;
loc_8226F708:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8226f714
	if (!ctx.cr6.gt) goto loc_8226F714;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8226F714:
	// lwz r7,168(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lwz r31,172(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// slw r8,r8,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r31.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r8,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r8.u16);
	// lwz r7,168(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// slw r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sthu r9,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r4.u32 = ea;
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8226f610
	if (ctx.cr6.lt) goto loc_8226F610;
	// b 0x8226f814
	goto loc_8226F814;
loc_8226F75C:
	// lwz r6,140(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8226f814
	if (!ctx.cr6.lt) goto loc_8226F814;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// lfs f13,11112(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5268(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5268);
	ctx.f0.f64 = double(temp.f32);
loc_8226F784:
	// lfs f12,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,172(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f11,f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lwz r6,168(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// fctiwz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f12,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r4,-52(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// slw r7,r4,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r7,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r7.u16);
	// lwz r7,168(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r6,172(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f12,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f11.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// slw r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sthu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// lwz r7,140(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8226f784
	if (ctx.cr6.lt) goto loc_8226F784;
loc_8226F814:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
loc_8226F81C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8233fa84
	ctx.lr = 0x8226F828;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F838"))) PPC_WEAK_FUNC(sub_8226F838);
PPC_FUNC_IMPL(__imp__sub_8226F838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8226F840;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa38
	ctx.lr = 0x8226F848;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8226f874
	if (!ctx.cr6.eq) goto loc_8226F874;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8226fc80
	goto loc_8226FC80;
loc_8226F874:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8226f8a4
	if (ctx.cr6.lt) goto loc_8226F8A4;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8226f8a4
	if (!ctx.cr6.lt) goto loc_8226F8A4;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8226f8a4
	if (ctx.cr6.lt) goto loc_8226F8A4;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8226fc7c
	if (ctx.cr6.lt) goto loc_8226FC7C;
loc_8226F8A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226f508
	ctx.lr = 0x8226F8AC;
	sub_8226F508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226fc80
	if (ctx.cr0.lt) goto loc_8226FC80;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// beq cr6,0x8226fc7c
	if (ctx.cr6.eq) goto loc_8226FC7C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,75
	ctx.r5.u64 = ctx.r5.u64 | 75;
	// rlwinm r10,r4,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// blt cr6,0x8226fc7c
	if (ctx.cr6.lt) goto loc_8226FC7C;
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// ori r8,r8,76
	ctx.r8.u64 = ctx.r8.u64 | 76;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8226fb9c
	if (!ctx.cr6.gt) goto loc_8226FB9C;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// ori r8,r8,74
	ctx.r8.u64 = ctx.r8.u64 | 74;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8226fc7c
	if (!ctx.cr6.gt) goto loc_8226FC7C;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// ori r8,r8,76
	ctx.r8.u64 = ctx.r8.u64 | 76;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8226fc7c
	if (ctx.cr6.gt) goto loc_8226FC7C;
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8226fc7c
	if (!ctx.cr6.lt) goto loc_8226FC7C;
	// addi r11,r6,-8
	ctx.r11.s64 = ctx.r6.s64 + -8;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f11,-28948(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -28948);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f12,5256(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5256);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f29,11280(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11280);
	ctx.f29.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f30,11276(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11276);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,11272(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 11272);
	ctx.f31.f64 = double(temp.f32);
	// lfs f4,11268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11268);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,11264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11264);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,11260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11260);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,11256(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11256);
	ctx.f3.f64 = double(temp.f32);
loc_8226F9A4:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// rlwinm r4,r8,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r6,r8,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r29,r7,8,16,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// stfs f12,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// rlwinm r28,r7,24,8,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// or r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 | ctx.r28.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r30,r8,8,16,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// srw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// or r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 | ctx.r8.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// srw r8,r8,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// srw r6,r6,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r5.u8 & 0x3F));
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// rlwinm r8,r7,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// rlwinm r7,r7,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// srw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fsubs f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fsubs f5,f9,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fmuls f28,f0,f4
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f6,f13,f29
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fsubs f13,f28,f9
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f9.f64));
	// fadds f0,f28,f8
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f8.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f10,f6,f28
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f28.f64));
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8226fab0
	if (!ctx.cr6.lt) goto loc_8226FAB0;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x8226fabc
	goto loc_8226FABC;
loc_8226FAB0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8226fabc
	if (!ctx.cr6.gt) goto loc_8226FABC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8226FABC:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8226fad0
	if (!ctx.cr6.lt) goto loc_8226FAD0;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x8226fadc
	goto loc_8226FADC;
loc_8226FAD0:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8226fadc
	if (!ctx.cr6.gt) goto loc_8226FADC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8226FADC:
	// stfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8226faf0
	if (!ctx.cr6.lt) goto loc_8226FAF0;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x8226fafc
	goto loc_8226FAFC;
loc_8226FAF0:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x8226fafc
	if (!ctx.cr6.gt) goto loc_8226FAFC;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_8226FAFC:
	// fmuls f13,f5,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fadds f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fadds f10,f13,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f13,f9,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8226fb34
	if (!ctx.cr6.lt) goto loc_8226FB34;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x8226fb40
	goto loc_8226FB40;
loc_8226FB34:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8226fb40
	if (!ctx.cr6.gt) goto loc_8226FB40;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8226FB40:
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8226fb54
	if (!ctx.cr6.lt) goto loc_8226FB54;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x8226fb60
	goto loc_8226FB60;
loc_8226FB54:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8226fb60
	if (!ctx.cr6.gt) goto loc_8226FB60;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8226FB60:
	// stfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8226fb74
	if (!ctx.cr6.lt) goto loc_8226FB74;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x8226fb80
	goto loc_8226FB80;
loc_8226FB74:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x8226fb80
	if (!ctx.cr6.gt) goto loc_8226FB80;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_8226FB80:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stfsu f10,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8226f9a4
	if (ctx.cr6.lt) goto loc_8226F9A4;
	// b 0x8226fc7c
	goto loc_8226FC7C;
loc_8226FB9C:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226fc7c
	if (!ctx.cr6.lt) goto loc_8226FC7C;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lfs f0,11088(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11088);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5256(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5256);
	ctx.f13.f64 = double(temp.f32);
loc_8226FBC4:
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// lhzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srw r5,r7,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// stfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// srw r3,r9,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// srw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// srw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8226fbc4
	if (ctx.cr6.lt) goto loc_8226FBC4;
loc_8226FC7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226FC80:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa84
	ctx.lr = 0x8226FC8C;
	__restfpr_28(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226FC90"))) PPC_WEAK_FUNC(sub_8226FC90);
PPC_FUNC_IMPL(__imp__sub_8226FC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8226FC98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226fcc4
	if (ctx.cr6.eq) goto loc_8226FCC4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82265a18
	ctx.lr = 0x8226FCC0;
	sub_82265A18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8226FCC4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226fce0
	if (ctx.cr6.eq) goto loc_8226FCE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266740
	ctx.lr = 0x8226FCDC;
	sub_82266740(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8226FCE0:
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subfe r6,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8226f838
	ctx.lr = 0x8226FD0C;
	sub_8226F838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226fd44
	if (ctx.cr0.lt) goto loc_8226FD44;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8226FD3C;
	sub_8233E4E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_8226FD44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226FD4C"))) PPC_WEAK_FUNC(sub_8226FD4C);
PPC_FUNC_IMPL(__imp__sub_8226FD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226FD50"))) PPC_WEAK_FUNC(sub_8226FD50);
PPC_FUNC_IMPL(__imp__sub_8226FD50) {
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
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8226f838
	ctx.lr = 0x8226FD84;
	sub_8226F838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226fde4
	if (ctx.cr0.lt) goto loc_8226FDE4;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8226FDB4;
	sub_8233E4E0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226fdcc
	if (ctx.cr6.eq) goto loc_8226FDCC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822666b0
	ctx.lr = 0x8226FDCC;
	sub_822666B0(ctx, base);
loc_8226FDCC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226fde4
	if (ctx.cr6.eq) goto loc_8226FDE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266a80
	ctx.lr = 0x8226FDE4;
	sub_82266A80(ctx, base);
loc_8226FDE4:
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

__attribute__((alias("__imp__sub_8226FDFC"))) PPC_WEAK_FUNC(sub_8226FDFC);
PPC_FUNC_IMPL(__imp__sub_8226FDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226FE00"))) PPC_WEAK_FUNC(sub_8226FE00);
PPC_FUNC_IMPL(__imp__sub_8226FE00) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822660c8
	ctx.lr = 0x8226FE28;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11796
	ctx.r11.s64 = ctx.r11.s64 + 11796;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-18
	ctx.xer.ca = ctx.r11.u32 > 17;
	ctx.r11.s64 = ctx.r11.s64 + -18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226fe88
	if (ctx.cr0.eq) goto loc_8226FE88;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8226fe70
	if (ctx.cr6.eq) goto loc_8226FE70;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8226fea8
	if (!ctx.cr6.eq) goto loc_8226FEA8;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,-18952
	ctx.r11.s64 = ctx.r11.s64 + -18952;
	// addi r10,r10,-19072
	ctx.r10.s64 = ctx.r10.s64 + -19072;
	// b 0x8226fe9c
	goto loc_8226FE9C;
loc_8226FE70:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,-18976
	ctx.r11.s64 = ctx.r11.s64 + -18976;
	// addi r10,r10,-19168
	ctx.r10.s64 = ctx.r10.s64 + -19168;
	// b 0x8226fe9c
	goto loc_8226FE9C;
loc_8226FE88:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,-21584
	ctx.r11.s64 = ctx.r11.s64 + -21584;
	// addi r10,r10,-23120
	ctx.r10.s64 = ctx.r10.s64 + -23120;
loc_8226FE9C:
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
loc_8226FEA8:
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x8233e4e0
	ctx.lr = 0x8226FEB8;
	sub_8233E4E0(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 + 3;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r8,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r8.u32);
	// rlwinm r7,r7,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r7,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r7.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// subf r9,r8,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// stw r7,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r7.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// stw r7,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r7.u32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// stw r6,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r6.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8226FFA8"))) PPC_WEAK_FUNC(sub_8226FFA8);
PPC_FUNC_IMPL(__imp__sub_8226FFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8226FFB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,11796
	ctx.r11.s64 = ctx.r11.s64 + 11796;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82270024
	if (ctx.cr6.eq) goto loc_82270024;
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82270024
	if (ctx.cr6.eq) goto loc_82270024;
	// lwz r28,212(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82270024
	if (!ctx.cr6.lt) goto loc_82270024;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_8226FFF0:
	// lwz r30,200(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// b 0x82270008
	goto loc_82270008;
loc_8226FFF8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwzu r3,8(r29)
	ea = 8 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82082d58
	ctx.lr = 0x82270004;
	sub_82082D58(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82270008:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8226fff8
	if (ctx.cr6.lt) goto loc_8226FFF8;
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8226fff0
	if (ctx.cr6.lt) goto loc_8226FFF0;
loc_82270024:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x82082d58
	ctx.lr = 0x82270030;
	sub_82082D58(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x82082d58
	ctx.lr = 0x8227003C;
	sub_82082D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266338
	ctx.lr = 0x82270044;
	sub_82266338(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227004C"))) PPC_WEAK_FUNC(sub_8227004C);
PPC_FUNC_IMPL(__imp__sub_8227004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82270050"))) PPC_WEAK_FUNC(sub_82270050);
PPC_FUNC_IMPL(__imp__sub_82270050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 | 19;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82270074
	if (!ctx.cr6.eq) goto loc_82270074;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,11152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11152);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8227007c
	goto loc_8227007C;
loc_82270074:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,11112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11112);
	ctx.f13.f64 = double(temp.f32);
loc_8227007C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,128(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,5268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5268);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f9,f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,11140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11140);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f7,f11,f12,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,5256(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5256);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lfs f12,11136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11136);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// fmadds f8,f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,11144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,11148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11148);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f9
	ctx.f11.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// fctiwz f11,f7
	ctx.f11.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f11.u64);
	// lwa r11,-28(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -28));
	// lwa r9,-12(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -12));
	// fctiwz f11,f10
	ctx.f11.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// stfd f11,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f11.u64);
	// lwa r10,-20(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -20));
	// fctiwz f11,f8
	ctx.f11.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f11,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwa r11,-20(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -20));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227016C"))) PPC_WEAK_FUNC(sub_8227016C);
PPC_FUNC_IMPL(__imp__sub_8227016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82270170"))) PPC_WEAK_FUNC(sub_82270170);
PPC_FUNC_IMPL(__imp__sub_82270170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x82270178;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// add r25,r11,r5
	ctx.r25.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r27,r4,r11
	ctx.r27.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bne cr6,0x822701dc
	if (!ctx.cr6.eq) goto loc_822701DC;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82082c78
	ctx.lr = 0x822701B8;
	sub_82082C78(ctx, base);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82270700
	if (ctx.cr0.eq) goto loc_82270700;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8233eaf0
	ctx.lr = 0x822701DC;
	sub_8233EAF0(ctx, base);
loc_822701DC:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// subf r11,r11,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// subf r7,r10,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r10.s64;
	// lwz r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r7,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82270244
	if (!ctx.cr6.eq) goto loc_82270244;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82082c78
	ctx.lr = 0x82270228;
	sub_82082C78(ctx, base);
	// stw r3,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82270700
	if (ctx.cr0.eq) goto loc_82270700;
	// stw r22,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r22.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
loc_82270244:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82270404
	if (!ctx.cr6.eq) goto loc_82270404;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r24,r27,0,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r24,4
	ctx.r10.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82270274
	if (!ctx.cr6.lt) goto loc_82270274;
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8227028c
	if (ctx.cr6.gt) goto loc_8227028C;
loc_82270274:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82270308
	if (!ctx.cr6.gt) goto loc_82270308;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82270308
	if (!ctx.cr6.lt) goto loc_82270308;
loc_8227028C:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r27,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r7,136(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r5,r25
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822703c4
	if (!ctx.cr6.lt) goto loc_822703C4;
loc_822702D4:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822702E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822702d4
	if (ctx.cr6.lt) goto loc_822702D4;
	// b 0x822703c4
	goto loc_822703C4;
loc_82270308:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82270364
	if (!ctx.cr6.lt) goto loc_82270364;
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82270364
	if (!ctx.cr6.gt) goto loc_82270364;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r8,r27,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r6,140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r7,r25
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82270364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82270364:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822703c4
	if (!ctx.cr6.gt) goto loc_822703C4;
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822703c4
	if (!ctx.cr6.lt) goto loc_822703C4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r27,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r6,140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r7,r25
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822703C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822703C4:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822703D0:
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822703ec
	if (ctx.cr6.lt) goto loc_822703EC;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822703fc
	if (ctx.cr6.lt) goto loc_822703FC;
loc_822703EC:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// slw r9,r21,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_822703FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822703d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822703D0;
loc_82270404:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82270420
	if (ctx.cr6.eq) goto loc_82270420;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265a18
	ctx.lr = 0x8227041C;
	sub_82265A18(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82270420:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227043c
	if (ctx.cr6.eq) goto loc_8227043C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266740
	ctx.lr = 0x82270438;
	sub_82266740(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_8227043C:
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r8,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r8.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822704b4
	if (!ctx.cr6.lt) goto loc_822704B4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82270470:
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r6,r9,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x82270470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82270470;
loc_822704B4:
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82270700
	if (!ctx.cr6.eq) goto loc_82270700;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r27,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r25
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82270698
	if (!ctx.cr6.lt) goto loc_82270698;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// rlwinm r27,r27,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
loc_8227052C:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// subf r6,r29,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r29.s64;
	// subf r4,r27,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r27.s64;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bge cr6,0x822705c8
	if (!ctx.cr6.lt) goto loc_822705C8;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822705c8
	if (ctx.cr6.eq) goto loc_822705C8;
loc_82270550:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bge cr6,0x822705c8
	if (!ctx.cr6.lt) goto loc_822705C8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r6,4
	ctx.xer.ca = ctx.r6.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r6.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82270578:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// or r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bdnz 0x82270578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82270578;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82270550
	if (ctx.cr6.lt) goto loc_82270550;
loc_822705C8:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x82270648
	if (!ctx.cr6.lt) goto loc_82270648;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822705E0:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822705F8:
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// bdnz 0x822705f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822705F8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x822705e0
	if (ctx.cr6.lt) goto loc_822705E0;
loc_82270648:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82270664
	if (!ctx.cr6.eq) goto loc_82270664;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82270668
	if (ctx.cr6.eq) goto loc_82270668;
loc_82270664:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_82270668:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227067C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8227052c
	if (ctx.cr6.lt) goto loc_8227052C;
loc_82270698:
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822706e4
	if (!ctx.cr6.lt) goto loc_822706E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822706e4
	if (!ctx.cr6.eq) goto loc_822706E4;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822706e4
	if (!ctx.cr6.eq) goto loc_822706E4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r22,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r22.u32);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// b 0x822706fc
	goto loc_822706FC;
loc_822706E4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82082d58
	ctx.lr = 0x822706F0;
	sub_82082D58(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
loc_822706FC:
	// stw r22,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r22.u32);
loc_82270700:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82270708"))) PPC_WEAK_FUNC(sub_82270708);
PPC_FUNC_IMPL(__imp__sub_82270708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82270710;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r9,240(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// add r26,r11,r4
	ctx.r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r30,r10,r5
	ctx.r30.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82270754
	if (!ctx.cr6.eq) goto loc_82270754;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82082c78
	ctx.lr = 0x82270748;
	sub_82082C78(ctx, base);
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822709e8
	if (ctx.cr0.eq) goto loc_822709E8;
loc_82270754:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// rlwinm r10,r26,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82270770
	if (!ctx.cr6.eq) goto loc_82270770;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822707f0
	if (ctx.cr6.eq) goto loc_822707F0;
loc_82270770:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r7,136(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// lwz r29,240(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r5,r30
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r28,r10,r8
	ctx.r28.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822707f0
	if (!ctx.cr6.lt) goto loc_822707F0;
loc_822707C0:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822707D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822707c0
	if (ctx.cr6.lt) goto loc_822707C0;
loc_822707F0:
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r8,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r8.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8227086c
	if (!ctx.cr6.lt) goto loc_8227086C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82270820:
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// bdnz 0x82270820
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82270820;
loc_8227086C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822709c8
	if (ctx.cr6.eq) goto loc_822709C8;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r27,r10,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822709c8
	if (!ctx.cr6.lt) goto loc_822709C8;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f10,11148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11148);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f11,11140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,11144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11144);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f0,5268(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11136(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f6.f64 = double(temp.f32);
loc_822708D4:
	// lfs f8,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f0.f64));
	// lfs f8,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f0.f64));
	// lfs f7,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f5,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f5,f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f4,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fctiwz f9,f9
	ctx.f9.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// fctiwz f9,f8
	ctx.f9.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwa r10,84(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// fctiwz f9,f7
	ctx.f9.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwa r9,84(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// fctiwz f9,f5
	ctx.f9.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwa r8,84(r1)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f5,112(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f7,104(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f7,f9,f4
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f4,f2,f12
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fcmpu cr6,f4,f3
	ctx.cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// fmuls f9,f5,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// bne cr6,0x822709c0
	if (!ctx.cr6.eq) goto loc_822709C0;
	// lfs f5,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f9,f5
	ctx.cr6.compare(ctx.f9.f64, ctx.f5.f64);
	// bne cr6,0x822709c0
	if (!ctx.cr6.eq) goto loc_822709C0;
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bne cr6,0x822709c0
	if (!ctx.cr6.eq) goto loc_822709C0;
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// bne cr6,0x822709c0
	if (!ctx.cr6.eq) goto loc_822709C0;
	// stfs f6,0(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f6,4(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f6,8(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f6,12(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
loc_822709C0:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// bdnz 0x822708d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822708D4;
loc_822709C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822709e8
	if (ctx.cr6.eq) goto loc_822709E8;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r11.s64;
	// bl 0x82266a80
	ctx.lr = 0x822709E8;
	sub_82266A80(ctx, base);
loc_822709E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822709F0"))) PPC_WEAK_FUNC(sub_822709F0);
PPC_FUNC_IMPL(__imp__sub_822709F0) {
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
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8226f508
	ctx.lr = 0x82270A14;
	sub_8226F508(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82270a28
	if (ctx.cr6.eq) goto loc_82270A28;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82082d58
	ctx.lr = 0x82270A28;
	sub_82082D58(ctx, base);
loc_82270A28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266338
	ctx.lr = 0x82270A30;
	sub_82266338(ctx, base);
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

__attribute__((alias("__imp__sub_82270A44"))) PPC_WEAK_FUNC(sub_82270A44);
PPC_FUNC_IMPL(__imp__sub_82270A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82270A48"))) PPC_WEAK_FUNC(sub_82270A48);
PPC_FUNC_IMPL(__imp__sub_82270A48) {
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
	// bl 0x82266338
	ctx.lr = 0x82270A68;
	sub_82266338(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82270a7c
	if (ctx.cr0.eq) goto loc_82270A7C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082d58
	ctx.lr = 0x82270A7C;
	sub_82082D58(ctx, base);
loc_82270A7C:
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

__attribute__((alias("__imp__sub_82270A98"))) PPC_WEAK_FUNC(sub_82270A98);
PPC_FUNC_IMPL(__imp__sub_82270A98) {
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
	// bl 0x8226ffa8
	ctx.lr = 0x82270AB8;
	sub_8226FFA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82270acc
	if (ctx.cr0.eq) goto loc_82270ACC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082d58
	ctx.lr = 0x82270ACC;
	sub_82082D58(ctx, base);
loc_82270ACC:
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

__attribute__((alias("__imp__sub_82270AE8"))) PPC_WEAK_FUNC(sub_82270AE8);
PPC_FUNC_IMPL(__imp__sub_82270AE8) {
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
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r10,43552
	ctx.r10.u64 = ctx.r10.u64 | 43552;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82271018
	if (ctx.cr6.gt) goto loc_82271018;
	// beq cr6,0x82270fe4
	if (ctx.cr6.eq) goto loc_82270FE4;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82270dc4
	if (ctx.cr6.gt) goto loc_82270DC4;
	// beq cr6,0x82270d98
	if (ctx.cr6.eq) goto loc_82270D98;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82270ca8
	if (ctx.cr6.gt) goto loc_82270CA8;
	// beq cr6,0x82270c7c
	if (ctx.cr6.eq) goto loc_82270C7C;
	// lis r10,1168
	ctx.r10.s64 = 76546048;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82270c48
	if (ctx.cr6.eq) goto loc_82270C48;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82270c14
	if (ctx.cr6.eq) goto loc_82270C14;
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82270be0
	if (ctx.cr0.eq) goto loc_82270BE0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82270bac
	if (ctx.cr6.eq) goto loc_82270BAC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x822714f0
	if (!ctx.cr6.eq) goto loc_822714F0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82082c78
	ctx.lr = 0x82270B8C;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226f420
	ctx.lr = 0x82270BA0;
	sub_8226F420(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270BAC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270BB8;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270BD4;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11284
	ctx.r11.s64 = ctx.r11.s64 + 11284;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270BE0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270BEC;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270C08;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11348
	ctx.r11.s64 = ctx.r11.s64 + 11348;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270C14:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270C20;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270C3C;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11524
	ctx.r11.s64 = ctx.r11.s64 + 11524;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270C48:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270C54;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270C70;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11380
	ctx.r11.s64 = ctx.r11.s64 + 11380;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270C7C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82082c78
	ctx.lr = 0x82270C88;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226f420
	ctx.lr = 0x82270C9C;
	sub_8226F420(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270CA8:
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-15
	ctx.xer.ca = ctx.r11.u32 > 14;
	ctx.r11.s64 = ctx.r11.s64 + -15;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82270d64
	if (ctx.cr0.eq) goto loc_82270D64;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// beq cr6,0x82270d30
	if (ctx.cr6.eq) goto loc_82270D30;
	// addis r11,r11,-504
	ctx.r11.s64 = ctx.r11.s64 + -33030144;
	// addic. r11,r11,9
	ctx.xer.ca = ctx.r11.u32 > 4294967286;
	ctx.r11.s64 = ctx.r11.s64 + 9;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82270cfc
	if (ctx.cr0.eq) goto loc_82270CFC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x822714f0
	if (!ctx.cr6.eq) goto loc_822714F0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82082c78
	ctx.lr = 0x82270CDC;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226f420
	ctx.lr = 0x82270CF0;
	sub_8226F420(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270CFC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270D08;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270D24;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11428
	ctx.r11.s64 = ctx.r11.s64 + 11428;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270D30:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270D3C;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270D58;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11476
	ctx.r11.s64 = ctx.r11.s64 + 11476;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270D64:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270D70;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270D8C;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11364
	ctx.r11.s64 = ctx.r11.s64 + 11364;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270D98:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82082c78
	ctx.lr = 0x82270DA4;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226f420
	ctx.lr = 0x82270DB8;
	sub_8226F420(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270DC4:
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,54
	ctx.r10.u64 = ctx.r10.u64 | 54;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82270ee8
	if (ctx.cr6.gt) goto loc_82270EE8;
	// beq cr6,0x82270eb4
	if (ctx.cr6.eq) goto loc_82270EB4;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-18
	ctx.xer.ca = ctx.r11.u32 > 17;
	ctx.r11.s64 = ctx.r11.s64 + -18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82270e88
	if (ctx.cr0.eq) goto loc_82270E88;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82270e5c
	if (ctx.cr6.eq) goto loc_82270E5C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82270e30
	if (ctx.cr6.eq) goto loc_82270E30;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x822714f0
	if (!ctx.cr6.eq) goto loc_822714F0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270E08;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270E24;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11492
	ctx.r11.s64 = ctx.r11.s64 + 11492;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270E30:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82082c78
	ctx.lr = 0x82270E3C;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226fe00
	ctx.lr = 0x82270E50;
	sub_8226FE00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11796
	ctx.r11.s64 = ctx.r11.s64 + 11796;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270E5C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82082c78
	ctx.lr = 0x82270E68;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226fe00
	ctx.lr = 0x82270E7C;
	sub_8226FE00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11796
	ctx.r11.s64 = ctx.r11.s64 + 11796;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270E88:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82082c78
	ctx.lr = 0x82270E94;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226fe00
	ctx.lr = 0x82270EA8;
	sub_8226FE00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11796
	ctx.r11.s64 = ctx.r11.s64 + 11796;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270EB4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270EC0;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270EDC;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11412
	ctx.r11.s64 = ctx.r11.s64 + 11412;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270EE8:
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-10806
	ctx.xer.ca = ctx.r11.u32 > 10805;
	ctx.r11.s64 = ctx.r11.s64 + -10806;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82270fb0
	if (ctx.cr0.eq) goto loc_82270FB0;
	// cmplwi cr6,r11,32720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32720, ctx.xer);
	// beq cr6,0x82270f7c
	if (ctx.cr6.eq) goto loc_82270F7C;
	// cmplwi cr6,r11,32740
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32740, ctx.xer);
	// beq cr6,0x82270f48
	if (ctx.cr6.eq) goto loc_82270F48;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,54754
	ctx.r10.u64 = ctx.r10.u64 | 54754;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822714f0
	if (!ctx.cr6.eq) goto loc_822714F0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270F20;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270F3C;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11652
	ctx.r11.s64 = ctx.r11.s64 + 11652;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270F48:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270F54;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270F70;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11636
	ctx.r11.s64 = ctx.r11.s64 + 11636;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270F7C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270F88;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270FA4;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11588
	ctx.r11.s64 = ctx.r11.s64 + 11588;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270FB0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270FBC;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82270FD8;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11620
	ctx.r11.s64 = ctx.r11.s64 + 11620;
	// b 0x822714dc
	goto loc_822714DC;
loc_82270FE4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82270FF0;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x8227100C;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11700
	ctx.r11.s64 = ctx.r11.s64 + 11700;
	// b 0x822714dc
	goto loc_822714DC;
loc_82271018:
	// lis r10,10784
	ctx.r10.s64 = 706740224;
	// ori r10,r10,2566
	ctx.r10.u64 = ctx.r10.u64 | 2566;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822712a4
	if (ctx.cr6.gt) goto loc_822712A4;
	// beq cr6,0x82271270
	if (ctx.cr6.eq) goto loc_82271270;
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82271178
	if (ctx.cr6.gt) goto loc_82271178;
	// beq cr6,0x82271144
	if (ctx.cr6.eq) goto loc_82271144;
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r10,r10,43558
	ctx.r10.u64 = ctx.r10.u64 | 43558;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82271110
	if (ctx.cr6.eq) goto loc_82271110;
	// addis r11,r11,-10240
	ctx.r11.s64 = ctx.r11.s64 + -671088640;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822710dc
	if (ctx.cr0.eq) goto loc_822710DC;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x822710a8
	if (ctx.cr6.eq) goto loc_822710A8;
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822714f0
	if (!ctx.cr6.eq) goto loc_822714F0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82271080;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x8227109C;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11332
	ctx.r11.s64 = ctx.r11.s64 + 11332;
	// b 0x822714dc
	goto loc_822714DC;
loc_822710A8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x822710B4;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x822710D0;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11652
	ctx.r11.s64 = ctx.r11.s64 + 11652;
	// b 0x822714dc
	goto loc_822714DC;
loc_822710DC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x822710E8;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82271104;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11508
	ctx.r11.s64 = ctx.r11.s64 + 11508;
	// b 0x822714dc
	goto loc_822714DC;
loc_82271110:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x8227111C;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82271138;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11748
	ctx.r11.s64 = ctx.r11.s64 + 11748;
	// b 0x822714dc
	goto loc_822714DC;
loc_82271144:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82271150;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x8227116C;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11316
	ctx.r11.s64 = ctx.r11.s64 + 11316;
	// b 0x822714dc
	goto loc_822714DC;
loc_82271178:
	// addis r11,r11,-10280
	ctx.r11.s64 = ctx.r11.s64 + -673710080;
	// addic. r11,r11,-6
	ctx.xer.ca = ctx.r11.u32 > 5;
	ctx.r11.s64 = ctx.r11.s64 + -6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227123c
	if (ctx.cr0.eq) goto loc_8227123C;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82271208
	if (ctx.cr6.eq) goto loc_82271208;
	// addis r11,r11,-504
	ctx.r11.s64 = ctx.r11.s64 + -33030144;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822711d4
	if (ctx.cr0.eq) goto loc_822711D4;
	// cmplwi cr6,r11,2559
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2559, ctx.xer);
	// bne cr6,0x822714f0
	if (!ctx.cr6.eq) goto loc_822714F0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x822711AC;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x822711C8;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11556
	ctx.r11.s64 = ctx.r11.s64 + 11556;
	// b 0x822714dc
	goto loc_822714DC;
loc_822711D4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x822711E0;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x822711FC;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11444
	ctx.r11.s64 = ctx.r11.s64 + 11444;
	// b 0x822714dc
	goto loc_822714DC;
loc_82271208:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82271214;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82271230;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11396
	ctx.r11.s64 = ctx.r11.s64 + 11396;
	// b 0x822714dc
	goto loc_822714DC;
loc_8227123C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82271248;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82271264;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11300
	ctx.r11.s64 = ctx.r11.s64 + 11300;
	// b 0x822714dc
	goto loc_822714DC;
loc_82271270:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x8227127C;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82271298;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11572
	ctx.r11.s64 = ctx.r11.s64 + 11572;
	// b 0x822714dc
	goto loc_822714DC;
loc_822712A4:
	// lis r10,11554
	ctx.r10.s64 = 757202944;
	// ori r10,r10,43557
	ctx.r10.u64 = ctx.r10.u64 | 43557;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822713e8
	if (ctx.cr6.gt) goto loc_822713E8;
	// beq cr6,0x822713b4
	if (ctx.cr6.eq) goto loc_822713B4;
	// addis r11,r11,-11552
	ctx.r11.s64 = ctx.r11.s64 + -757071872;
	// addic. r11,r11,-25
	ctx.xer.ca = ctx.r11.u32 > 24;
	ctx.r11.s64 = ctx.r11.s64 + -25;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82271380
	if (ctx.cr0.eq) goto loc_82271380;
	// cmplwi cr6,r11,43505
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43505, ctx.xer);
	// beq cr6,0x8227134c
	if (ctx.cr6.eq) goto loc_8227134C;
	// cmplwi cr6,r11,43520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43520, ctx.xer);
	// beq cr6,0x82271318
	if (ctx.cr6.eq) goto loc_82271318;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,43526
	ctx.r10.u64 = ctx.r10.u64 | 43526;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822714f0
	if (!ctx.cr6.eq) goto loc_822714F0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x822712F0;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x8227130C;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11684
	ctx.r11.s64 = ctx.r11.s64 + 11684;
	// b 0x822714dc
	goto loc_822714DC;
loc_82271318:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82271324;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82271340;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11604
	ctx.r11.s64 = ctx.r11.s64 + 11604;
	// b 0x822714dc
	goto loc_822714DC;
loc_8227134C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82271358;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82271374;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11540
	ctx.r11.s64 = ctx.r11.s64 + 11540;
	// b 0x822714dc
	goto loc_822714DC;
loc_82271380:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x8227138C;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x822713A8;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11460
	ctx.r11.s64 = ctx.r11.s64 + 11460;
	// b 0x822714dc
	goto loc_822714DC;
loc_822713B4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x822713C0;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x822713DC;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11732
	ctx.r11.s64 = ctx.r11.s64 + 11732;
	// b 0x822714dc
	goto loc_822714DC;
loc_822713E8:
	// addis r11,r11,-11683
	ctx.r11.s64 = ctx.r11.s64 + -765657088;
	// addic. r11,r11,21986
	ctx.xer.ca = ctx.r11.u32 > 4294945309;
	ctx.r11.s64 = ctx.r11.s64 + 21986;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822714ac
	if (ctx.cr0.eq) goto loc_822714AC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82271478
	if (ctx.cr6.eq) goto loc_82271478;
	// addis r11,r11,-2191
	ctx.r11.s64 = ctx.r11.s64 + -143589376;
	// addic. r11,r11,24029
	ctx.xer.ca = ctx.r11.u32 > 4294943266;
	ctx.r11.s64 = ctx.r11.s64 + 24029;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82271444
	if (ctx.cr0.eq) goto loc_82271444;
	// cmplwi cr6,r11,1503
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1503, ctx.xer);
	// bne cr6,0x822714f0
	if (!ctx.cr6.eq) goto loc_822714F0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x8227141C;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82271438;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11780
	ctx.r11.s64 = ctx.r11.s64 + 11780;
	// b 0x822714dc
	goto loc_822714DC;
loc_82271444:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82271450;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x8227146C;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11764
	ctx.r11.s64 = ctx.r11.s64 + 11764;
	// b 0x822714dc
	goto loc_822714DC;
loc_82271478:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x82271484;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x822714A0;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11716
	ctx.r11.s64 = ctx.r11.s64 + 11716;
	// b 0x822714dc
	goto loc_822714DC;
loc_822714AC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82082c78
	ctx.lr = 0x822714B8;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822714e4
	if (ctx.cr0.eq) goto loc_822714E4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x822714D4;
	sub_822660C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11668
	ctx.r11.s64 = ctx.r11.s64 + 11668;
loc_822714DC:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x822714e8
	goto loc_822714E8;
loc_822714E4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822714E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822714f8
	if (!ctx.cr6.eq) goto loc_822714F8;
loc_822714F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82271558
	goto loc_82271558;
loc_822714F8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82271534
	if (ctx.cr6.eq) goto loc_82271534;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266448
	ctx.lr = 0x82271510;
	sub_82266448(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82271534
	if (!ctx.cr0.lt) goto loc_82271534;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82271530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822714f0
	goto loc_822714F0;
loc_82271534:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82271554
	if (ctx.cr6.eq) goto loc_82271554;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82271554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82271554:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82271558:
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

__attribute__((alias("__imp__sub_82271570"))) PPC_WEAK_FUNC(sub_82271570);
PPC_FUNC_IMPL(__imp__sub_82271570) {
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
	// bl 0x822709f0
	ctx.lr = 0x82271590;
	sub_822709F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822715a4
	if (ctx.cr0.eq) goto loc_822715A4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082d58
	ctx.lr = 0x822715A4;
	sub_82082D58(ctx, base);
loc_822715A4:
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

__attribute__((alias("__imp__sub_822715C0"))) PPC_WEAK_FUNC(sub_822715C0);
PPC_FUNC_IMPL(__imp__sub_822715C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822715D4"))) PPC_WEAK_FUNC(sub_822715D4);
PPC_FUNC_IMPL(__imp__sub_822715D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822715D8"))) PPC_WEAK_FUNC(sub_822715D8);
PPC_FUNC_IMPL(__imp__sub_822715D8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// bne cr6,0x82271610
	if (!ctx.cr6.eq) goto loc_82271610;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82271610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82271610:
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

__attribute__((alias("__imp__sub_82271628"))) PPC_WEAK_FUNC(sub_82271628);
PPC_FUNC_IMPL(__imp__sub_82271628) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82082c78
	ctx.lr = 0x82271650;
	sub_82082C78(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82271668
	if (!ctx.cr0.eq) goto loc_82271668;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82271670
	goto loc_82271670;
loc_82271668:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82271670:
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

__attribute__((alias("__imp__sub_82271688"))) PPC_WEAK_FUNC(sub_82271688);
PPC_FUNC_IMPL(__imp__sub_82271688) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,26524
	ctx.r10.s64 = ctx.r10.s64 + 26524;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_822716AC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822716cc
	if (!ctx.cr0.eq) goto loc_822716CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822716ac
	if (!ctx.cr6.eq) goto loc_822716AC;
loc_822716CC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8227170c
	if (ctx.cr0.eq) goto loc_8227170C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,26508
	ctx.r10.s64 = ctx.r10.s64 + 26508;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_822716E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82271704
	if (!ctx.cr0.eq) goto loc_82271704;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822716e4
	if (!ctx.cr6.eq) goto loc_822716E4;
loc_82271704:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82271728
	if (!ctx.cr0.eq) goto loc_82271728;
loc_8227170C:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82271720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82271730
	goto loc_82271730;
loc_82271728:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
loc_82271730:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271740"))) PPC_WEAK_FUNC(sub_82271740);
PPC_FUNC_IMPL(__imp__sub_82271740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82271748;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822717a4
	if (!ctx.cr6.gt) goto loc_822717A4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82082c78
	ctx.lr = 0x8227176C;
	sub_82082C78(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82271780
	if (!ctx.cr0.eq) goto loc_82271780;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822717a8
	goto loc_822717A8;
loc_82271780:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8233e4e0
	ctx.lr = 0x82271790;
	sub_8233E4E0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82082d58
	ctx.lr = 0x8227179C;
	sub_82082D58(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_822717A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822717A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822717B0"))) PPC_WEAK_FUNC(sub_822717B0);
PPC_FUNC_IMPL(__imp__sub_822717B0) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,11852
	ctx.r11.s64 = ctx.r11.s64 + 11852;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82082d58
	ctx.lr = 0x822717E4;
	sub_82082D58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822717f8
	if (ctx.cr0.eq) goto loc_822717F8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082d58
	ctx.lr = 0x822717F8;
	sub_82082D58(ctx, base);
loc_822717F8:
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

__attribute__((alias("__imp__sub_82271814"))) PPC_WEAK_FUNC(sub_82271814);
PPC_FUNC_IMPL(__imp__sub_82271814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271818"))) PPC_WEAK_FUNC(sub_82271818);
PPC_FUNC_IMPL(__imp__sub_82271818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82271820;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82271840
	if (!ctx.cr6.eq) goto loc_82271840;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x822718dc
	goto loc_822718DC;
loc_82271840:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82082c78
	ctx.lr = 0x8227184C;
	sub_82082C78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227187c
	if (ctx.cr0.eq) goto loc_8227187C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,11852
	ctx.r10.s64 = ctx.r10.s64 + 11852;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x82271880
	goto loc_82271880;
loc_8227187C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82271880:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82271894
	if (!ctx.cr6.eq) goto loc_82271894;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822718dc
	goto loc_822718DC;
loc_82271894:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822718AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x822718d4
	if (!ctx.cr0.lt) goto loc_822718D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822718CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x822718dc
	goto loc_822718DC;
loc_822718D4:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822718DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822718E4"))) PPC_WEAK_FUNC(sub_822718E4);
PPC_FUNC_IMPL(__imp__sub_822718E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822718E8"))) PPC_WEAK_FUNC(sub_822718E8);
PPC_FUNC_IMPL(__imp__sub_822718E8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r6,r3,1548
	ctx.r6.s64 = ctx.r3.s64 + 1548;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r8,r9,11880
	ctx.r8.s64 = ctx.r9.s64 + 11880;
loc_82271924:
	// lbzx r9,r6,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r9,41
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 41, ctx.xer);
	// blt cr6,0x82271958
	if (ctx.cr6.lt) goto loc_82271958;
	// cmpwi cr6,r9,122
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 122, ctx.xer);
	// bgt cr6,0x82271958
	if (ctx.cr6.gt) goto loc_82271958;
	// cmpwi cr6,r9,90
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 90, ctx.xer);
	// ble cr6,0x8227194c
	if (!ctx.cr6.gt) goto loc_8227194C;
	// cmpwi cr6,r9,97
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 97, ctx.xer);
	// blt cr6,0x82271958
	if (ctx.cr6.lt) goto loc_82271958;
loc_8227194C:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x82271990
	goto loc_82271990;
loc_82271958:
	// li r5,91
	ctx.r5.s64 = 91;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r5,r3,28
	ctx.r5.u64 = ctx.r3.u32 & 0xF;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// li r3,93
	ctx.r3.s64 = 93;
	// lbzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r3,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
loc_82271990:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82271924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82271924;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822719a8
	if (!ctx.cr6.eq) goto loc_822719A8;
	// stbx r30,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u8);
	// b 0x822719d4
	goto loc_822719D4;
loc_822719A8:
	// li r9,58
	ctx.r9.s64 = 58;
	// li r8,32
	ctx.r8.s64 = 32;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x822719D0;
	sub_8233E4E0(ctx, base);
	// stb r30,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r30.u8);
loc_822719D4:
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

__attribute__((alias("__imp__sub_822719EC"))) PPC_WEAK_FUNC(sub_822719EC);
PPC_FUNC_IMPL(__imp__sub_822719EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822719F0"))) PPC_WEAK_FUNC(sub_822719F0);
PPC_FUNC_IMPL(__imp__sub_822719F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1352, ctx.r4.u32);
	// stw r5,1344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1344, ctx.r5.u32);
	// stw r6,1348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1348, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271A00"))) PPC_WEAK_FUNC(sub_82271A00);
PPC_FUNC_IMPL(__imp__sub_82271A00) {
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
	// lwz r11,1344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1344);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271a28
	if (ctx.cr6.eq) goto loc_82271A28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82271A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82271A28:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233fb50
	ctx.lr = 0x82271A34;
	sub_8233FB50(ctx, base);
}

__attribute__((alias("__imp__sub_82271A34"))) PPC_WEAK_FUNC(sub_82271A34);
PPC_FUNC_IMPL(__imp__sub_82271A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271A38"))) PPC_WEAK_FUNC(sub_82271A38);
PPC_FUNC_IMPL(__imp__sub_82271A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82271A4C"))) PPC_WEAK_FUNC(sub_82271A4C);
PPC_FUNC_IMPL(__imp__sub_82271A4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271A50"))) PPC_WEAK_FUNC(sub_82271A50);
PPC_FUNC_IMPL(__imp__sub_82271A50) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822718e8
	ctx.lr = 0x82271A70;
	sub_822718E8(ctx, base);
	// lwz r11,1344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271a8c
	if (ctx.cr6.eq) goto loc_82271A8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82271A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82271A8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233fb50
	ctx.lr = 0x82271A98;
	sub_8233FB50(ctx, base);
}

__attribute__((alias("__imp__sub_82271A98"))) PPC_WEAK_FUNC(sub_82271A98);
PPC_FUNC_IMPL(__imp__sub_82271A98) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822718e8
	ctx.lr = 0x82271AB8;
	sub_822718E8(ctx, base);
	// lwz r11,1348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271ad4
	if (ctx.cr6.eq) goto loc_82271AD4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82271AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82271AD4:
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

__attribute__((alias("__imp__sub_82271AE8"))) PPC_WEAK_FUNC(sub_82271AE8);
PPC_FUNC_IMPL(__imp__sub_82271AE8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// ble cr6,0x82271b50
	if (!ctx.cr6.gt) goto loc_82271B50;
	// li r5,8
	ctx.r5.s64 = 8;
loc_82271AF4:
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x82271b58
	if (ctx.cr6.gt) goto loc_82271B58;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x82271b0c
	if (!ctx.cr6.gt) goto loc_82271B0C;
	// subfic r5,r4,8
	ctx.xer.ca = ctx.r4.u32 <= 8;
	ctx.r5.s64 = 8 - ctx.r4.s64;
loc_82271B0C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r10,11896
	ctx.r10.s64 = ctx.r10.s64 + 11896;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82271B2C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82271b2c
	if (!ctx.cr6.eq) goto loc_82271B2C;
	// blr 
	return;
loc_82271B50:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bge cr6,0x82271af4
	if (!ctx.cr6.lt) goto loc_82271AF4;
loc_82271B58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271B60"))) PPC_WEAK_FUNC(sub_82271B60);
PPC_FUNC_IMPL(__imp__sub_82271B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82271B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mullw r29,r4,r5
	ctx.r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8227b6a0
	ctx.lr = 0x82271B78;
	sub_8227B6A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82271b88
	if (!ctx.cr0.eq) goto loc_82271B88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82271bc4
	goto loc_82271BC4;
loc_82271B88:
	// cmplwi cr6,r29,32768
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32768, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ble cr6,0x82271bb8
	if (!ctx.cr6.gt) goto loc_82271BB8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r31,r11,32768
	ctx.r31.u64 = ctx.r11.u64 | 32768;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82271BA8;
	sub_8233EAF0(ctx, base);
	// subf r5,r31,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r31.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// b 0x82271bbc
	goto loc_82271BBC;
loc_82271BB8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82271BBC:
	// bl 0x8233eaf0
	ctx.lr = 0x82271BC0;
	sub_8233EAF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82271BC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271BCC"))) PPC_WEAK_FUNC(sub_82271BCC);
PPC_FUNC_IMPL(__imp__sub_82271BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271BD0"))) PPC_WEAK_FUNC(sub_82271BD0);
PPC_FUNC_IMPL(__imp__sub_82271BD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8227b710
	sub_8227B710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271BD4"))) PPC_WEAK_FUNC(sub_82271BD4);
PPC_FUNC_IMPL(__imp__sub_82271BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271BD8"))) PPC_WEAK_FUNC(sub_82271BD8);
PPC_FUNC_IMPL(__imp__sub_82271BD8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227b758
	ctx.lr = 0x82271BFC;
	sub_8227B758(ctx, base);
	// stw r3,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82271C14"))) PPC_WEAK_FUNC(sub_82271C14);
PPC_FUNC_IMPL(__imp__sub_82271C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271C18"))) PPC_WEAK_FUNC(sub_82271C18);
PPC_FUNC_IMPL(__imp__sub_82271C18) {
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
	// lbz r11,1548(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1548);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	// beq 0x82271c4c
	if (ctx.cr0.eq) goto loc_82271C4C;
	// rlwinm r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x82271c54
	if (!ctx.cr6.eq) goto loc_82271C54;
	// b 0x82271c60
	goto loc_82271C60;
loc_82271C4C:
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82271c60
	if (!ctx.cr0.eq) goto loc_82271C60;
loc_82271C54:
	// lwz r3,1536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// bl 0x8227b758
	ctx.lr = 0x82271C5C;
	sub_8227B758(ctx, base);
	// stw r3,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r3.u32);
loc_82271C60:
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

__attribute__((alias("__imp__sub_82271C74"))) PPC_WEAK_FUNC(sub_82271C74);
PPC_FUNC_IMPL(__imp__sub_82271C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271C78"))) PPC_WEAK_FUNC(sub_82271C78);
PPC_FUNC_IMPL(__imp__sub_82271C78) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233eaf0
	sub_8233EAF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271C88"))) PPC_WEAK_FUNC(sub_82271C88);
PPC_FUNC_IMPL(__imp__sub_82271C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271C90"))) PPC_WEAK_FUNC(sub_82271C90);
PPC_FUNC_IMPL(__imp__sub_82271C90) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271ccc
	if (ctx.cr6.eq) goto loc_82271CCC;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8227b610
	ctx.lr = 0x82271CB0;
	sub_8227B610(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82271cc8
	if (ctx.cr0.eq) goto loc_82271CC8;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82271CC8;
	sub_8233EAF0(ctx, base);
loc_82271CC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82271CCC:
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

__attribute__((alias("__imp__sub_82271CE0"))) PPC_WEAK_FUNC(sub_82271CE0);
PPC_FUNC_IMPL(__imp__sub_82271CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82271CE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r4,62
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 62, ctx.xer);
	// beq cr6,0x82271d34
	if (ctx.cr6.eq) goto loc_82271D34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,62
	ctx.r9.s64 = 62;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r4.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82271D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82271D34:
	// cmplwi cr6,r29,472
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 472, ctx.xer);
	// beq cr6,0x82271d70
	if (ctx.cr6.eq) goto loc_82271D70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,21
	ctx.r10.s64 = 21;
	// li r9,472
	ctx.r9.s64 = 472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r29.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82271D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82271D70:
	// li r5,472
	ctx.r5.s64 = 472;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82271D88;
	sub_8233EAF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8227d198
	ctx.lr = 0x82271DA0;
	sub_8227D198(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r11,r31,168
	ctx.r11.s64 = ctx.r31.s64 + 168;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
loc_82271DC8:
	// stw r30,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82271dc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82271DC8;
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82274658
	ctx.lr = 0x82271DE0;
	sub_82274658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227c010
	ctx.lr = 0x82271DE8;
	sub_8227C010(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271DF8"))) PPC_WEAK_FUNC(sub_82271DF8);
PPC_FUNC_IMPL(__imp__sub_82271DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82271E00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82271fc4
	if (ctx.cr6.eq) goto loc_82271FC4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82271ebc
	if (ctx.cr6.eq) goto loc_82271EBC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82271e3c
	if (ctx.cr6.eq) goto loc_82271E3C;
	// stw r29,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r29.u32);
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// b 0x82271fcc
	goto loc_82271FCC;
loc_82271E3C:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// li r30,4
	ctx.r30.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82271eb0
	if (ctx.cr6.eq) goto loc_82271EB0;
	// lbz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271eb0
	if (ctx.cr6.eq) goto loc_82271EB0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82271ea0
	if (ctx.cr6.eq) goto loc_82271EA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,114
	ctx.r10.s64 = 114;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lbz r9,300(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82271E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// b 0x82271fcc
	goto loc_82271FCC;
loc_82271EA0:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82271fcc
	goto loc_82271FCC;
loc_82271EB0:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// b 0x82271fcc
	goto loc_82271FCC;
loc_82271EBC:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82271f4c
	if (!ctx.cr6.eq) goto loc_82271F4C;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82271f24
	if (ctx.cr6.eq) goto loc_82271F24;
	// lbz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82271f74
	if (ctx.cr6.lt) goto loc_82271F74;
	// beq cr6,0x82271f4c
	if (ctx.cr6.eq) goto loc_82271F4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,114
	ctx.r10.s64 = 114;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lbz r9,300(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82271F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// b 0x82271fcc
	goto loc_82271FCC;
loc_82271F24:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r8,168(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82271f5c
	if (!ctx.cr6.eq) goto loc_82271F5C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82271f80
	if (!ctx.cr6.eq) goto loc_82271F80;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82271f80
	if (!ctx.cr6.eq) goto loc_82271F80;
loc_82271F4C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82271fcc
	goto loc_82271FCC;
loc_82271F5C:
	// cmpwi cr6,r10,82
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 82, ctx.xer);
	// bne cr6,0x82271f80
	if (!ctx.cr6.eq) goto loc_82271F80;
	// cmpwi cr6,r9,71
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 71, ctx.xer);
	// bne cr6,0x82271f80
	if (!ctx.cr6.eq) goto loc_82271F80;
	// cmpwi cr6,r8,66
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 66, ctx.xer);
	// bne cr6,0x82271f80
	if (!ctx.cr6.eq) goto loc_82271F80;
loc_82271F74:
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// b 0x82271fcc
	goto loc_82271FCC;
loc_82271F80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,111
	ctx.r7.s64 = 111;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82271FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// b 0x82271fcc
	goto loc_82271FCC;
loc_82271FC4:
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
loc_82271FCC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// lfd f0,9024(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9024);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// stfd f0,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.f0.u64);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272020"))) PPC_WEAK_FUNC(sub_82272020);
PPC_FUNC_IMPL(__imp__sub_82272020) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-200
	ctx.r11.s64 = ctx.r11.s64 + -200;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82272114
	if (ctx.cr6.gt) goto loc_82272114;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8292
	ctx.r12.s64 = ctx.r12.s64 + 8292;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82272090;
	case 1:
		goto loc_822720C0;
	case 2:
		goto loc_822720F4;
	case 3:
		goto loc_822720FC;
	case 4:
		goto loc_822720FC;
	case 5:
		goto loc_822720FC;
	case 6:
		goto loc_822720FC;
	case 7:
		goto loc_822720FC;
	case 8:
		goto loc_822720FC;
	case 9:
		goto loc_82272114;
	case 10:
		goto loc_822720FC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,8336(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8336);
	// lwz r17,8384(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8384);
	// lwz r17,8436(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8436);
	// lwz r17,8444(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8444);
	// lwz r17,8444(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8444);
	// lwz r17,8444(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8444);
	// lwz r17,8444(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8444);
	// lwz r17,8444(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8444);
	// lwz r17,8444(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8444);
	// lwz r17,8468(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8468);
	// lwz r17,8444(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8444);
loc_82272090:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822720A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822720B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,201
	ctx.r7.s64 = 201;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
loc_822720C0:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822720D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82272140
	if (!ctx.cr6.eq) goto loc_82272140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271df8
	ctx.lr = 0x822720E8;
	sub_82271DF8(ctx, base);
	// li r11,202
	ctx.r11.s64 = 202;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82272140
	goto loc_82272140;
loc_822720F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82272144
	goto loc_82272144;
loc_822720FC:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82272110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82272144
	goto loc_82272144;
loc_82272114:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82272140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272140:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82272144:
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

__attribute__((alias("__imp__sub_8227215C"))) PPC_WEAK_FUNC(sub_8227215C);
PPC_FUNC_IMPL(__imp__sub_8227215C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272160"))) PPC_WEAK_FUNC(sub_82272160);
PPC_FUNC_IMPL(__imp__sub_82272160) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,205
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 205, ctx.xer);
	// beq cr6,0x82272188
	if (ctx.cr6.eq) goto loc_82272188;
	// cmpwi cr6,r11,206
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 206, ctx.xer);
	// bne cr6,0x822721e4
	if (!ctx.cr6.eq) goto loc_822721E4;
loc_82272188:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822721e4
	if (!ctx.cr6.eq) goto loc_822721E4;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822721c4
	if (!ctx.cr6.lt) goto loc_822721C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,67
	ctx.r10.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822721C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822721C4:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822721D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,210
	ctx.r9.s64 = 210;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x8227222c
	goto loc_8227222C;
loc_822721E4:
	// cmpwi cr6,r11,207
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 207, ctx.xer);
	// bne cr6,0x822721f8
	if (!ctx.cr6.eq) goto loc_822721F8;
	// li r11,210
	ctx.r11.s64 = 210;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8227222c
	goto loc_8227222C;
loc_822721F8:
	// cmpwi cr6,r11,210
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 210, ctx.xer);
	// beq cr6,0x8227222c
	if (ctx.cr6.eq) goto loc_8227222C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8227222C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227222C:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82272268
	if (!ctx.cr6.eq) goto loc_82272268;
loc_8227223C:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82272250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8227229c
	if (ctx.cr6.eq) goto loc_8227229C;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8227223c
	if (ctx.cr6.eq) goto loc_8227223C;
loc_82272268:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8227227C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227d2c0
	ctx.lr = 0x82272284;
	sub_8227D2C0(ctx, base);
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
loc_8227229C:
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

__attribute__((alias("__imp__sub_822722B4"))) PPC_WEAK_FUNC(sub_822722B4);
PPC_FUNC_IMPL(__imp__sub_822722B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822722B8"))) PPC_WEAK_FUNC(sub_822722B8);
PPC_FUNC_IMPL(__imp__sub_822722B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// beq cr6,0x82272310
	if (ctx.cr6.eq) goto loc_82272310;
	// cmpwi cr6,r11,201
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 201, ctx.xer);
	// beq cr6,0x82272310
	if (ctx.cr6.eq) goto loc_82272310;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82272310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272310:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272020
	ctx.lr = 0x82272318;
	sub_82272020(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82272360
	if (ctx.cr6.eq) goto loc_82272360;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82272364
	if (!ctx.cr6.eq) goto loc_82272364;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82272350
	if (ctx.cr6.eq) goto loc_82272350;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,51
	ctx.r10.s64 = 51;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82272350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272350:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227d2c0
	ctx.lr = 0x82272358;
	sub_8227D2C0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82272364
	goto loc_82272364;
loc_82272360:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82272364:
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

__attribute__((alias("__imp__sub_8227237C"))) PPC_WEAK_FUNC(sub_8227237C);
PPC_FUNC_IMPL(__imp__sub_8227237C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272380"))) PPC_WEAK_FUNC(sub_82272380);
PPC_FUNC_IMPL(__imp__sub_82272380) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,204
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 204, ctx.xer);
	// beq cr6,0x822723c4
	if (ctx.cr6.eq) goto loc_822723C4;
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822723B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,204
	ctx.r8.s64 = 204;
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
loc_822723C4:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82272404
	if (ctx.cr6.eq) goto loc_82272404;
	// li r30,48
	ctx.r30.s64 = 48;
loc_822723D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822723F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,424(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822723d8
	if (!ctx.cr6.eq) goto loc_822723D8;
loc_82272404:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,205
	ctx.r8.s64 = ctx.r11.s64 + 205;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82272438"))) PPC_WEAK_FUNC(sub_82272438);
PPC_FUNC_IMPL(__imp__sub_82272438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82272440;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,205
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 205, ctx.xer);
	// beq cr6,0x82272484
	if (ctx.cr6.eq) goto loc_82272484;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82272484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272484:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822724c4
	if (ctx.cr6.lt) goto loc_822724C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,123
	ctx.r10.s64 = 123;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822724B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_822724C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822724f4
	if (ctx.cr6.eq) goto loc_822724F4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822724F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822724F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8227251C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272534"))) PPC_WEAK_FUNC(sub_82272534);
PPC_FUNC_IMPL(__imp__sub_82272534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272538"))) PPC_WEAK_FUNC(sub_82272538);
PPC_FUNC_IMPL(__imp__sub_82272538) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,202
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 202, ctx.xer);
	// bne cr6,0x82272590
	if (!ctx.cr6.eq) goto loc_82272590;
	// bl 0x8227dd10
	ctx.lr = 0x8227255C;
	sub_8227DD10(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272588
	if (ctx.cr6.eq) goto loc_82272588;
	// li r11,207
	ctx.r11.s64 = 207;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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
loc_82272588:
	// li r11,203
	ctx.r11.s64 = 203;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82272590:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,203
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 203, ctx.xer);
	// bne cr6,0x8227265c
	if (!ctx.cr6.eq) goto loc_8227265C;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82272650
	if (ctx.cr6.eq) goto loc_82272650;
loc_822725AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822725c8
	if (ctx.cr6.eq) goto loc_822725C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822725C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822725C8:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822725DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82272638
	if (ctx.cr6.eq) goto loc_82272638;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82272650
	if (ctx.cr6.eq) goto loc_82272650;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822725ac
	if (ctx.cr6.eq) goto loc_822725AC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82272608
	if (ctx.cr6.eq) goto loc_82272608;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822725ac
	if (!ctx.cr6.eq) goto loc_822725AC;
loc_82272608:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822725ac
	if (ctx.cr6.lt) goto loc_822725AC;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x822725ac
	goto loc_822725AC;
loc_82272638:
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
loc_82272650:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// b 0x82272690
	goto loc_82272690;
loc_8227265C:
	// cmpwi cr6,r11,204
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 204, ctx.xer);
	// beq cr6,0x82272690
	if (ctx.cr6.eq) goto loc_82272690;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82272690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272690:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272380
	ctx.lr = 0x82272698;
	sub_82272380(ctx, base);
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

__attribute__((alias("__imp__sub_822726AC"))) PPC_WEAK_FUNC(sub_822726AC);
PPC_FUNC_IMPL(__imp__sub_822726AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822726B0"))) PPC_WEAK_FUNC(sub_822726B0);
PPC_FUNC_IMPL(__imp__sub_822726B0) {
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
	// li r10,102
	ctx.r10.s64 = 102;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822726E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,444(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82272714
	if (ctx.cr6.eq) goto loc_82272714;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,61
	ctx.r10.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82272714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272714:
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r31,232
	ctx.r8.s64 = ctx.r31.s64 + 232;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r7,r31,248
	ctx.r7.s64 = ctx.r31.s64 + 248;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r31,264
	ctx.r6.s64 = ctx.r31.s64 + 264;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
loc_82272738:
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r5,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82272738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82272738;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// stw r10,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
	// stb r9,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r9.u8);
	// stb r9,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r9.u8);
	// stb r10,290(r31)
	PPC_STORE_U8(ctx.r31.u32 + 290, ctx.r10.u8);
	// sth r9,292(r31)
	PPC_STORE_U16(ctx.r31.u32 + 292, ctx.r9.u16);
	// sth r9,294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 294, ctx.r9.u16);
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// stb r10,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r10.u8);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82272798"))) PPC_WEAK_FUNC(sub_82272798);
PPC_FUNC_IMPL(__imp__sub_82272798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x822727A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,24(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r4,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r5,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r5.u32);
	// bne cr6,0x822727ec
	if (!ctx.cr6.eq) goto loc_822727EC;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822727D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822727e4
	if (!ctx.cr6.eq) goto loc_822727E4;
loc_822727D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_822727E4:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_822727EC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r30,r9,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x82272820
	if (!ctx.cr0.eq) goto loc_82272820;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822727d8
	if (ctx.cr6.eq) goto loc_822727D8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82272820:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bne 0x82272854
	if (!ctx.cr0.eq) goto loc_82272854;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822727d8
	if (ctx.cr6.eq) goto loc_822727D8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82272854:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// bne 0x82272888
	if (!ctx.cr0.eq) goto loc_82272888;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822727d8
	if (ctx.cr6.eq) goto loc_822727D8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82272888:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// bne 0x822728c0
	if (!ctx.cr0.eq) goto loc_822728C0;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822728B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822727d8
	if (ctx.cr6.eq) goto loc_822727D8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_822728C0:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne 0x822728fc
	if (!ctx.cr0.eq) goto loc_822728FC;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822728EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822727d8
	if (ctx.cr6.eq) goto loc_822727D8;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_822728FC:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// bne 0x82272934
	if (!ctx.cr0.eq) goto loc_82272934;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822727d8
	if (ctx.cr6.eq) goto loc_822727D8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82272934:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bne 0x82272970
	if (!ctx.cr0.eq) goto loc_82272970;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822727d8
	if (ctx.cr6.eq) goto loc_822727D8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82272970:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// lwz r6,420(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// addi r29,r9,-1
	ctx.r29.s64 = ctx.r9.s64 + -1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822729CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,444(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822729fc
	if (ctx.cr6.eq) goto loc_822729FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,58
	ctx.r10.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822729FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822729FC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82272a20
	if (!ctx.cr6.gt) goto loc_82272A20;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82272a20
	if (!ctx.cr6.gt) goto loc_82272A20;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82272a40
	if (ctx.cr6.gt) goto loc_82272A40;
loc_82272A20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82272A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272A40:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82272a74
	if (ctx.cr6.eq) goto loc_82272A74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82272A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272A74:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272aa4
	if (!ctx.cr6.eq) goto loc_82272AA4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r5,r10,84
	ctx.r5.s64 = ctx.r10.s64 * 84;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82272AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
loc_82272AA4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82272bc8
	if (!ctx.cr6.gt) goto loc_82272BC8;
	// addi r30,r11,-68
	ctx.r30.s64 = ctx.r11.s64 + -68;
	// li r25,101
	ctx.r25.s64 = 101;
loc_82272AC0:
	// stw r26,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r26.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82272aec
	if (!ctx.cr6.eq) goto loc_82272AEC;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822727d8
	if (ctx.cr6.eq) goto loc_822727D8;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82272AEC:
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addic. r10,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r9,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r9.u32);
	// bne 0x82272b20
	if (!ctx.cr0.eq) goto loc_82272B20;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822727d8
	if (ctx.cr6.eq) goto loc_822727D8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82272B20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// clrlwi r7,r9,28
	ctx.r7.u64 = ctx.r9.u32 & 0xF;
	// clrlwi r6,r8,28
	ctx.r6.u64 = ctx.r8.u32 & 0xF;
	// stw r7,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r7.u32);
	// stw r6,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r6.u32);
	// bne 0x82272b64
	if (!ctx.cr0.eq) goto loc_82272B64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822727d8
	if (ctx.cr6.eq) goto loc_822727D8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82272B64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r7,76(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// lwzu r10,84(r30)
	ea = 84 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r25.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82272BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82272ac0
	if (ctx.cr6.lt) goto loc_82272AC0;
loc_82272BC8:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272BE8"))) PPC_WEAK_FUNC(sub_82272BE8);
PPC_FUNC_IMPL(__imp__sub_82272BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x82272BF0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r25,24(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82272c30
	if (!ctx.cr6.eq) goto loc_82272C30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82272C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272C30:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82272c64
	if (!ctx.cr6.eq) goto loc_82272C64;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82272c5c
	if (!ctx.cr6.eq) goto loc_82272C5C;
loc_82272C50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_82272C5C:
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82272C64:
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addic. r10,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rotlwi r30,r9,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x82272c98
	if (!ctx.cr0.eq) goto loc_82272C98;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82272c50
	if (ctx.cr6.eq) goto loc_82272C50;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82272C98:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bne 0x82272ccc
	if (!ctx.cr0.eq) goto loc_82272CCC;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82272c50
	if (ctx.cr6.eq) goto loc_82272C50;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82272CCC:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,103
	ctx.r8.s64 = 103;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r23.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82272D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r23,3
	ctx.r4.s64 = ctx.r23.s64 + 3;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82272d24
	if (!ctx.cr6.eq) goto loc_82272D24;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// blt cr6,0x82272d24
	if (ctx.cr6.lt) goto loc_82272D24;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// ble cr6,0x82272d44
	if (!ctx.cr6.gt) goto loc_82272D44;
loc_82272D24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82272D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272D44:
	// stw r23,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r23.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82272e78
	if (!ctx.cr6.gt) goto loc_82272E78;
	// addi r22,r31,332
	ctx.r22.s64 = ctx.r31.s64 + 332;
	// li r20,5
	ctx.r20.s64 = 5;
	// li r21,104
	ctx.r21.s64 = 104;
loc_82272D60:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82272d88
	if (!ctx.cr6.eq) goto loc_82272D88;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82272c50
	if (ctx.cr6.eq) goto loc_82272C50;
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r26,4(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82272D88:
	// lbz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addic. r10,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r10.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// bne 0x82272db8
	if (!ctx.cr0.eq) goto loc_82272DB8;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82272c50
	if (ctx.cr6.eq) goto loc_82272C50;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82272DB8:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// lwz r30,220(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82272df8
	if (!ctx.cr6.gt) goto loc_82272DF8;
loc_82272DD8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82272e1c
	if (ctx.cr6.eq) goto loc_82272E1C;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82272dd8
	if (ctx.cr6.lt) goto loc_82272DD8;
loc_82272DF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r20,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r20.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r27.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82272E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272E1C:
	// srawi r11,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 4;
	// stwu r30,4(r22)
	ea = 4 + ctx.r22.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r22.u32 = ea;
	// clrlwi r10,r29,28
	ctx.r10.u64 = ctx.r29.u32 & 0xF;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r21,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r21.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82272d60
	if (ctx.cr6.lt) goto loc_82272D60;
loc_82272E78:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82272ea0
	if (!ctx.cr6.eq) goto loc_82272EA0;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82272c50
	if (ctx.cr6.eq) goto loc_82272C50;
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r26,4(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82272EA0:
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addic. r10,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r10.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r9,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// bne 0x82272ed4
	if (!ctx.cr0.eq) goto loc_82272ED4;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82272c50
	if (ctx.cr6.eq) goto loc_82272C50;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82272ED4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r29,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r29.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stw r9,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r9.u32);
	// bne 0x82272f08
	if (!ctx.cr0.eq) goto loc_82272F08;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82272c50
	if (ctx.cr6.eq) goto loc_82272C50;
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82272F08:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r9,105
	ctx.r9.s64 = 105;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// srawi r8,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// lwz r7,404(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r5,r8,28
	ctx.r5.u64 = ctx.r8.u32 & 0xF;
	// stw r6,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r5.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// lwz r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r8,412(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r7,416(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,444(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// addi r8,r29,-1
	ctx.r8.s64 = ctx.r29.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// stw r8,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272F9C"))) PPC_WEAK_FUNC(sub_82272F9C);
PPC_FUNC_IMPL(__imp__sub_82272F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272FA0"))) PPC_WEAK_FUNC(sub_82272FA0);
PPC_FUNC_IMPL(__imp__sub_82272FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x82272FA8;
	__savegprlr_18(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,24(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82272fec
	if (!ctx.cr6.eq) goto loc_82272FEC;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82272fe4
	if (!ctx.cr6.eq) goto loc_82272FE4;
loc_82272FD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
loc_82272FE4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_82272FEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r29,r9,8
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x82273020
	if (!ctx.cr0.eq) goto loc_82273020;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82272fd8
	if (ctx.cr6.eq) goto loc_82272FD8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_82273020:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r26,r11,-2
	ctx.r26.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r26,16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 16, ctx.xer);
	// ble cr6,0x82273300
	if (!ctx.cr6.gt) goto loc_82273300;
	// li r21,80
	ctx.r21.s64 = 80;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,86
	ctx.r23.s64 = 86;
	// li r19,8
	ctx.r19.s64 = 8;
	// li r20,30
	ctx.r20.s64 = 30;
loc_82273050:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82273078
	if (!ctx.cr6.eq) goto loc_82273078;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82272fd8
	if (ctx.cr6.eq) goto loc_82272FD8;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r28,4(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_82273078:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r25,0(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r21,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r21.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r25,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r25.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822730AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// li r29,1
	ctx.r29.s64 = 1;
loc_822730B8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822730e0
	if (!ctx.cr6.eq) goto loc_822730E0;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822730D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82272fd8
	if (ctx.cr6.eq) goto loc_82272FD8;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r28,4(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_822730E0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// ble cr6,0x822730b8
	if (!ctx.cr6.gt) goto loc_822730B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r26,r26,-17
	ctx.r26.s64 = ctx.r26.s64 + -17;
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r18,88(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r29,87(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stw r29,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r29.u32);
	// stw r18,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r18.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r23,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r23.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r7,89(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r5,90(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r10,93(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// lbz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// lbz r18,96(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r29,95(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stw r29,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r29.u32);
	// stw r18,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r18.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r23,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r23.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822731E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r27,256
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 256, ctx.xer);
	// bgt cr6,0x822731f0
	if (ctx.cr6.gt) goto loc_822731F0;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x8227320c
	if (!ctx.cr6.gt) goto loc_8227320C;
loc_822731F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r19,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r19.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8227320C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227320C:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82273260
	if (!ctx.cr6.gt) goto loc_82273260;
loc_82273218:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82273240
	if (!ctx.cr6.eq) goto loc_82273240;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82272fd8
	if (ctx.cr6.eq) goto loc_82272FD8;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r28,4(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_82273240:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stbx r11,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82273218
	if (ctx.cr6.lt) goto loc_82273218;
loc_82273260:
	// rlwinm r11,r25,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x10;
	// subf r26,r27,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r27.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227327c
	if (ctx.cr6.eq) goto loc_8227327C;
	// addi r25,r25,-16
	ctx.r25.s64 = ctx.r25.s64 + -16;
	// addi r11,r25,50
	ctx.r11.s64 = ctx.r25.s64 + 50;
	// b 0x82273280
	goto loc_82273280;
loc_8227327C:
	// addi r11,r25,46
	ctx.r11.s64 = ctx.r25.s64 + 46;
loc_82273280:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x82273298
	if (ctx.cr6.lt) goto loc_82273298;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x822732bc
	if (ctx.cr6.lt) goto loc_822732BC;
loc_82273298:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r20,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r20.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r25,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r25.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822732BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822732BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822732d4
	if (!ctx.cr6.eq) goto loc_822732D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227d3b8
	ctx.lr = 0x822732D0;
	sub_8227D3B8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_822732D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,17
	ctx.r5.s64 = 17;
	// bl 0x8233e4e0
	ctx.lr = 0x822732E4;
	sub_8233E4E0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,17
	ctx.r3.s64 = ctx.r11.s64 + 17;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x8233e4e0
	ctx.lr = 0x822732F8;
	sub_8233E4E0(ctx, base);
	// cmpwi cr6,r26,16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 16, ctx.xer);
	// bgt cr6,0x82273050
	if (ctx.cr6.gt) goto loc_82273050;
loc_82273300:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82273328
	if (ctx.cr6.eq) goto loc_82273328;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82273328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82273328:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r28.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227333C"))) PPC_WEAK_FUNC(sub_8227333C);
PPC_FUNC_IMPL(__imp__sub_8227333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82273340"))) PPC_WEAK_FUNC(sub_82273340);
PPC_FUNC_IMPL(__imp__sub_82273340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x82273348;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,24(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8227338c
	if (!ctx.cr6.eq) goto loc_8227338C;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82273384
	if (!ctx.cr6.eq) goto loc_82273384;
loc_82273378:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
loc_82273384:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_8227338C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r31,r9,8
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x822733c0
	if (!ctx.cr0.eq) goto loc_822733C0;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822733B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273378
	if (ctx.cr6.eq) goto loc_82273378;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_822733C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addic. r21,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r21.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble 0x82273614
	if (!ctx.cr0.gt) goto loc_82273614;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r20,81
	ctx.r20.s64 = 81;
	// li r19,31
	ctx.r19.s64 = 31;
	// li r22,93
	ctx.r22.s64 = 93;
	// addi r23,r11,27600
	ctx.r23.s64 = ctx.r11.s64 + 27600;
loc_822733EC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82273414
	if (!ctx.cr6.eq) goto loc_82273414;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273378
	if (ctx.cr6.eq) goto loc_82273378;
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r27,4(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_82273414:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// clrlwi r31,r10,28
	ctx.r31.u64 = ctx.r10.u32 & 0xF;
	// srawi r24,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 4;
	// stw r20,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r20.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r31.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r24,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r24.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82273458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82273484
	if (ctx.cr6.lt) goto loc_82273484;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r19,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r19.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r31.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82273484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82273484:
	// addi r11,r31,42
	ctx.r11.s64 = ctx.r31.s64 + 42;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822734a4
	if (!ctx.cr6.eq) goto loc_822734A4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227d378
	ctx.lr = 0x822734A0;
	sub_8227D378(ctx, base);
	// stwx r3,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r3.u32);
loc_822734A4:
	// lwzx r25,r31,r28
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_822734AC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82273524
	if (ctx.cr6.eq) goto loc_82273524;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822734dc
	if (!ctx.cr6.eq) goto loc_822734DC;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822734CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273378
	if (ctx.cr6.eq) goto loc_82273378;
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r27,4(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_822734DC:
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addic. r10,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r10.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rotlwi r31,r9,8
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x82273510
	if (!ctx.cr0.eq) goto loc_82273510;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273378
	if (ctx.cr6.eq) goto loc_82273378;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_82273510:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// b 0x82273558
	goto loc_82273558;
loc_82273524:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8227354c
	if (!ctx.cr6.eq) goto loc_8227354C;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227353C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273378
	if (ctx.cr6.eq) goto loc_82273378;
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r27,4(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_8227354C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82273558:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r23,256
	ctx.r7.s64 = ctx.r23.s64 + 256;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// sthx r9,r8,r25
	PPC_STORE_U16(ctx.r8.u32 + ctx.r25.u32, ctx.r9.u16);
	// blt cr6,0x822734ac
	if (ctx.cr6.lt) goto loc_822734AC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x822735fc
	if (ctx.cr6.lt) goto loc_822735FC;
	// addi r31,r25,-2
	ctx.r31.s64 = ctx.r25.s64 + -2;
	// li r30,8
	ctx.r30.s64 = 8;
loc_82273590:
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lhz r5,6(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lhz r7,10(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// lhz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// lhzu r8,16(r31)
	ea = 16 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r22,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r22.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822735F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82273590
	if (!ctx.cr0.eq) goto loc_82273590;
loc_822735FC:
	// addi r21,r21,-65
	ctx.r21.s64 = ctx.r21.s64 + -65;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8227360c
	if (ctx.cr6.eq) goto loc_8227360C;
	// addi r21,r21,-64
	ctx.r21.s64 = ctx.r21.s64 + -64;
loc_8227360C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bgt cr6,0x822733ec
	if (ctx.cr6.gt) goto loc_822733EC;
loc_82273614:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8227363c
	if (ctx.cr6.eq) goto loc_8227363C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8227363C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227363C:
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82273650"))) PPC_WEAK_FUNC(sub_82273650);
PPC_FUNC_IMPL(__imp__sub_82273650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82273658;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8227369c
	if (!ctx.cr6.eq) goto loc_8227369C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82273694
	if (!ctx.cr6.eq) goto loc_82273694;
loc_82273688:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82273694:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8227369C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r27,r9,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x822736d0
	if (!ctx.cr0.eq) goto loc_822736D0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822736C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273688
	if (ctx.cr6.eq) goto loc_82273688;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_822736D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + ctx.r27.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82273708
	if (ctx.cr6.eq) goto loc_82273708;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82273708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82273708:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82273730
	if (!ctx.cr6.eq) goto loc_82273730;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273688
	if (ctx.cr6.eq) goto loc_82273688;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82273730:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addic. r27,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r27.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rotlwi r28,r11,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// bne 0x82273764
	if (!ctx.cr0.eq) goto loc_82273764;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273688
	if (ctx.cr6.eq) goto loc_82273688;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82273764:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,82
	ctx.r9.s64 = 82;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r28.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82273798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// addi r4,r27,-1
	ctx.r4.s64 = ctx.r27.s64 + -1;
	// stw r28,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r28.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822737B8"))) PPC_WEAK_FUNC(sub_822737B8);
PPC_FUNC_IMPL(__imp__sub_822737B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x822737C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r29,r5,r6
	ctx.r29.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cmplwi cr6,r5,14
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 14, ctx.xer);
	// blt cr6,0x82273998
	if (ctx.cr6.lt) goto loc_82273998;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,74
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 74, ctx.xer);
	// bne cr6,0x82273998
	if (!ctx.cr6.eq) goto loc_82273998;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bne cr6,0x82273998
	if (!ctx.cr6.eq) goto loc_82273998;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,73
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 73, ctx.xer);
	// bne cr6,0x82273998
	if (!ctx.cr6.eq) goto loc_82273998;
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bne cr6,0x82273998
	if (!ctx.cr6.eq) goto loc_82273998;
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273998
	if (!ctx.cr6.eq) goto loc_82273998;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// stb r10,288(r3)
	PPC_STORE_U8(ctx.r3.u32 + 288, ctx.r10.u8);
	// lbz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r9,289(r3)
	PPC_STORE_U8(ctx.r3.u32 + 289, ctx.r9.u8);
	// lbz r8,7(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// stb r8,290(r3)
	PPC_STORE_U8(ctx.r3.u32 + 290, ctx.r8.u8);
	// lbz r11,9(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// lbz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,288(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 288);
	// sth r6,292(r3)
	PPC_STORE_U16(ctx.r3.u32 + 292, ctx.r6.u16);
	// lbz r10,11(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r3,10(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// rotlwi r11,r3,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// sth r11,294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 294, ctx.r11.u16);
	// beq cr6,0x822738a4
	if (ctx.cr6.eq) goto loc_822738A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,119
	ctx.r10.s64 = 119;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lbz r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 288);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r6,289(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 289);
	// stw r6,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822738A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822738A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,87
	ctx.r10.s64 = 87;
	// lbz r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 288);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lbz r8,289(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 289);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lhz r7,292(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lhz r6,294(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 294);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lbz r5,290(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 290);
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822738F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,13(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// lbz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82273944
	if (ctx.cr6.eq) goto loc_82273944;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,90
	ctx.r10.s64 = 90;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r6,13(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// stw r6,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82273944:
	// lbz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// addi r10,r29,-14
	ctx.r10.s64 = ctx.r29.s64 + -14;
	// lbz r11,13(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82273ac0
	if (ctx.cr6.eq) goto loc_82273AC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,88
	ctx.r9.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82273990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82273998:
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// blt cr6,0x82273a94
	if (ctx.cr6.lt) goto loc_82273A94;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,74
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 74, ctx.xer);
	// bne cr6,0x82273a94
	if (!ctx.cr6.eq) goto loc_82273A94;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bne cr6,0x82273a94
	if (!ctx.cr6.eq) goto loc_82273A94;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// bne cr6,0x82273a94
	if (!ctx.cr6.eq) goto loc_82273A94;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// bne cr6,0x82273a94
	if (!ctx.cr6.eq) goto loc_82273A94;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273a94
	if (!ctx.cr6.eq) goto loc_82273A94;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82273a8c
	if (ctx.cr6.eq) goto loc_82273A8C;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82273a60
	if (ctx.cr6.eq) goto loc_82273A60;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x82273a38
	if (ctx.cr6.eq) goto loc_82273A38;
	// li r10,89
	ctx.r10.s64 = 89;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r8,5(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r29.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82273A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82273A38:
	// li r10,110
	ctx.r10.s64 = 110;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r29.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82273A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82273A60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,109
	ctx.r10.s64 = 109;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r29.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82273A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82273A8C:
	// li r10,108
	ctx.r10.s64 = 108;
	// b 0x82273a98
	goto loc_82273A98;
loc_82273A94:
	// li r10,77
	ctx.r10.s64 = 77;
loc_82273A98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r29.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82273AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82273AC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82273AC8"))) PPC_WEAK_FUNC(sub_82273AC8);
PPC_FUNC_IMPL(__imp__sub_82273AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82273AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// blt cr6,0x82273ba0
	if (ctx.cr6.lt) goto loc_82273BA0;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x82273ba0
	if (!ctx.cr6.eq) goto loc_82273BA0;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// bne cr6,0x82273ba0
	if (!ctx.cr6.eq) goto loc_82273BA0;
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// bne cr6,0x82273ba0
	if (!ctx.cr6.eq) goto loc_82273BA0;
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r10,98
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 98, ctx.xer);
	// bne cr6,0x82273ba0
	if (!ctx.cr6.eq) goto loc_82273BA0;
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,101
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 101, ctx.xer);
	// bne cr6,0x82273ba0
	if (!ctx.cr6.eq) goto loc_82273BA0;
	// lbz r8,9(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// li r30,76
	ctx.r30.s64 = 76;
	// lbz r10,7(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r8,r5,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,10(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbz r29,11(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// stw r8,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r29,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r29.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r30.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82273B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r29,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r29.u8);
	// stw r4,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82273BA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,78
	ctx.r10.s64 = 78;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82273BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82273BD8"))) PPC_WEAK_FUNC(sub_82273BD8);
PPC_FUNC_IMPL(__imp__sub_82273BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82273BE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,24(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82273c24
	if (!ctx.cr6.eq) goto loc_82273C24;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273C08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82273c1c
	if (!ctx.cr6.eq) goto loc_82273C1C;
loc_82273C10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82273C1C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82273C24:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r30,r9,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x82273c58
	if (!ctx.cr0.eq) goto loc_82273C58;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273c10
	if (ctx.cr6.eq) goto loc_82273C10;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82273C58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r26,r11,-2
	ctx.r26.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r26,14
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 14, ctx.xer);
	// blt cr6,0x82273c7c
	if (ctx.cr6.lt) goto loc_82273C7C;
	// li r28,14
	ctx.r28.s64 = 14;
	// b 0x82273c8c
	goto loc_82273C8C;
loc_82273C7C:
	// subfic r11,r26,0
	ctx.xer.ca = ctx.r26.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r26.s64;
	// rlwinm r10,r26,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// addme r9,r10
	temp.u64 = ctx.r10.u64 + ctx.xer.ca - 1;
	ctx.xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && ctx.xer.ca);
	ctx.r9.u64 = temp.u64;
	// and r28,r9,r26
	ctx.r28.u64 = ctx.r9.u64 & ctx.r26.u64;
loc_82273C8C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82273ce0
	if (ctx.cr6.eq) goto loc_82273CE0;
loc_82273C98:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82273cc0
	if (!ctx.cr6.eq) goto loc_82273CC0;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273c10
	if (ctx.cr6.eq) goto loc_82273C10;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82273CC0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stbx r11,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82273c98
	if (ctx.cr6.lt) goto loc_82273C98;
loc_82273CE0:
	// lwz r11,420(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 420);
	// subf r30,r28,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r28.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// beq cr6,0x82273d3c
	if (ctx.cr6.eq) goto loc_82273D3C;
	// cmpwi cr6,r11,238
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 238, ctx.xer);
	// beq cr6,0x82273d28
	if (ctx.cr6.eq) goto loc_82273D28;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r10,68
	ctx.r10.s64 = 68;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r8,420(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 420);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82273D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82273d4c
	goto loc_82273D4C;
loc_82273D28:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82273ac8
	ctx.lr = 0x82273D38;
	sub_82273AC8(ctx, base);
	// b 0x82273d4c
	goto loc_82273D4C;
loc_82273D3C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822737b8
	ctx.lr = 0x82273D4C;
	sub_822737B8(ctx, base);
loc_82273D4C:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// ble cr6,0x82273d74
	if (!ctx.cr6.gt) goto loc_82273D74;
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82273D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82273D74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82273D80"))) PPC_WEAK_FUNC(sub_82273D80);
PPC_FUNC_IMPL(__imp__sub_82273D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82273D88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82273dcc
	if (!ctx.cr6.eq) goto loc_82273DCC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82273dc4
	if (!ctx.cr6.eq) goto loc_82273DC4;
loc_82273DB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82273DC4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82273DCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r27,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r27.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// rotlwi r29,r9,8
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x82273e00
	if (!ctx.cr0.eq) goto loc_82273E00;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273db8
	if (ctx.cr6.eq) goto loc_82273DB8;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82273E00:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,91
	ctx.r9.s64 = 91;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,420(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// stw r7,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r29.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// ble cr6,0x82273e74
	if (!ctx.cr6.gt) goto loc_82273E74;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82273E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82273E74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82273E80"))) PPC_WEAK_FUNC(sub_82273E80);
PPC_FUNC_IMPL(__imp__sub_82273E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82273E88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82273E9C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82273ec4
	if (!ctx.cr6.eq) goto loc_82273EC4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273f8c
	if (ctx.cr6.eq) goto loc_82273F8C;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82273EC4:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x82273f2c
	if (ctx.cr6.eq) goto loc_82273F2C;
loc_82273ED8:
	// lwz r11,444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 444);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bne cr6,0x82273f18
	if (!ctx.cr6.eq) goto loc_82273F18;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273f8c
	if (ctx.cr6.eq) goto loc_82273F8C;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82273F18:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x82273ed8
	if (!ctx.cr6.eq) goto loc_82273ED8;
loc_82273F2C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82273f54
	if (!ctx.cr6.eq) goto loc_82273F54;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82273f8c
	if (ctx.cr6.eq) goto loc_82273F8C;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82273F54:
	// lbz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r28,255
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 255, ctx.xer);
	// beq cr6,0x82273f2c
	if (ctx.cr6.eq) goto loc_82273F2C;
	// lwz r11,444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 444);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bne cr6,0x82273f98
	if (!ctx.cr6.eq) goto loc_82273F98;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// b 0x82273e9c
	goto loc_82273E9C;
loc_82273F8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82273F98:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82273fe8
	if (ctx.cr6.eq) goto loc_82273FE8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,116
	ctx.r10.s64 = 116;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,444(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 444);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r7,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r28,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r28.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,444(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
loc_82273FE8:
	// stw r28,420(r27)
	PPC_STORE_U32(ctx.r27.u32 + 420, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274000"))) PPC_WEAK_FUNC(sub_82274000);
PPC_FUNC_IMPL(__imp__sub_82274000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82274008;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8227404c
	if (!ctx.cr6.eq) goto loc_8227404C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82274044
	if (!ctx.cr6.eq) goto loc_82274044;
loc_82274038:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82274044:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8227404C:
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8227407c
	if (!ctx.cr0.eq) goto loc_8227407C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227406C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82274038
	if (ctx.cr6.eq) goto loc_82274038;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8227407C:
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r28,255
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 255, ctx.xer);
	// bne cr6,0x82274098
	if (!ctx.cr6.eq) goto loc_82274098;
	// cmpwi cr6,r30,216
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 216, ctx.xer);
	// beq cr6,0x822740c8
	if (ctx.cr6.eq) goto loc_822740C8;
loc_82274098:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,53
	ctx.r10.s64 = 53;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r28,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r28.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r30.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822740C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822740C8:
	// stw r30,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822740E0"))) PPC_WEAK_FUNC(sub_822740E0);
PPC_FUNC_IMPL(__imp__sub_822740E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x822740E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,60
	ctx.r27.s64 = 60;
	// li r28,92
	ctx.r28.s64 = 92;
	// li r29,68
	ctx.r29.s64 = 68;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82274100:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82274134
	if (!ctx.cr6.eq) goto loc_82274134;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82274128
	if (!ctx.cr6.eq) goto loc_82274128;
	// bl 0x82274000
	ctx.lr = 0x82274124;
	sub_82274000(ctx, base);
	// b 0x8227412c
	goto loc_8227412C;
loc_82274128:
	// bl 0x82273e80
	ctx.lr = 0x8227412C;
	sub_82273E80(ctx, base);
loc_8227412C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822743e0
	if (ctx.cr6.eq) goto loc_822743E0;
loc_82274134:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r11,207
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 207, ctx.xer);
	// bgt cr6,0x82274244
	if (ctx.cr6.gt) goto loc_82274244;
	// cmpwi cr6,r11,205
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 205, ctx.xer);
	// bge cr6,0x82274214
	if (!ctx.cr6.lt) goto loc_82274214;
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bgt cr6,0x822741c0
	if (ctx.cr6.gt) goto loc_822741C0;
	// cmpwi cr6,r11,197
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 197, ctx.xer);
	// bge cr6,0x82274214
	if (!ctx.cr6.lt) goto loc_82274214;
	// cmpwi cr6,r11,194
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 194, ctx.xer);
	// bgt cr6,0x822741a4
	if (ctx.cr6.gt) goto loc_822741A4;
	// beq cr6,0x82274190
	if (ctx.cr6.eq) goto loc_82274190;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822742ac
	if (ctx.cr6.eq) goto loc_822742AC;
	// cmpwi cr6,r11,191
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 191, ctx.xer);
	// ble cr6,0x82274338
	if (!ctx.cr6.gt) goto loc_82274338;
	// cmpwi cr6,r11,193
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 193, ctx.xer);
	// bgt cr6,0x82274338
	if (ctx.cr6.gt) goto loc_82274338;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272798
	ctx.lr = 0x8227418C;
	sub_82272798(ctx, base);
	// b 0x8227437c
	goto loc_8227437C;
loc_82274190:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272798
	ctx.lr = 0x822741A0;
	sub_82272798(ctx, base);
	// b 0x8227437c
	goto loc_8227437C;
loc_822741A4:
	// cmpwi cr6,r11,195
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 195, ctx.xer);
	// beq cr6,0x82274214
	if (ctx.cr6.eq) goto loc_82274214;
	// cmpwi cr6,r11,196
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 196, ctx.xer);
	// bne cr6,0x82274338
	if (!ctx.cr6.eq) goto loc_82274338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272fa0
	ctx.lr = 0x822741BC;
	sub_82272FA0(ctx, base);
	// b 0x8227437c
	goto loc_8227437C;
loc_822741C0:
	// addi r11,r11,-201
	ctx.r11.s64 = ctx.r11.s64 + -201;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82274338
	if (ctx.cr6.gt) goto loc_82274338;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822741f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822741F4;
	// bdzf 4*cr6+eq,0x82274214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82274214;
	// bne cr6,0x82274208
	if (!ctx.cr6.eq) goto loc_82274208;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272798
	ctx.lr = 0x822741F0;
	sub_82272798(ctx, base);
	// b 0x8227437c
	goto loc_8227437C;
loc_822741F4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272798
	ctx.lr = 0x82274204;
	sub_82272798(ctx, base);
	// b 0x8227437c
	goto loc_8227437C;
loc_82274208:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82273d80
	ctx.lr = 0x82274210;
	sub_82273D80(ctx, base);
	// b 0x8227437c
	goto loc_8227437C;
loc_82274214:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8227423C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// b 0x82274100
	goto loc_82274100;
loc_82274244:
	// cmpwi cr6,r11,219
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 219, ctx.xer);
	// bgt cr6,0x822742ec
	if (ctx.cr6.gt) goto loc_822742EC;
	// beq cr6,0x822742e0
	if (ctx.cr6.eq) goto loc_822742E0;
	// addi r11,r11,-208
	ctx.r11.s64 = ctx.r11.s64 + -208;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82274338
	if (ctx.cr6.gt) goto loc_82274338;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17012
	ctx.r12.s64 = ctx.r12.s64 + 17012;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822742AC;
	case 1:
		goto loc_822742AC;
	case 2:
		goto loc_822742AC;
	case 3:
		goto loc_822742AC;
	case 4:
		goto loc_822742AC;
	case 5:
		goto loc_822742AC;
	case 6:
		goto loc_822742AC;
	case 7:
		goto loc_822742AC;
	case 8:
		goto loc_822742A0;
	case 9:
		goto loc_822743AC;
	case 10:
		goto loc_8227438C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,17068(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17068);
	// lwz r17,17068(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17068);
	// lwz r17,17068(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17068);
	// lwz r17,17068(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17068);
	// lwz r17,17068(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17068);
	// lwz r17,17068(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17068);
	// lwz r17,17068(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17068);
	// lwz r17,17068(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17068);
	// lwz r17,17056(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17056);
	// lwz r17,17324(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17324);
	// lwz r17,17292(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17292);
loc_822742A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822726b0
	ctx.lr = 0x822742A8;
	sub_822726B0(ctx, base);
	// b 0x8227437c
	goto loc_8227437C;
loc_822742AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r9,420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822742D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// b 0x82274100
	goto loc_82274100;
loc_822742E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82273340
	ctx.lr = 0x822742E8;
	sub_82273340(ctx, base);
	// b 0x8227437c
	goto loc_8227437C;
loc_822742EC:
	// cmpwi cr6,r11,239
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 239, ctx.xer);
	// bgt cr6,0x82274330
	if (ctx.cr6.gt) goto loc_82274330;
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// bge cr6,0x82274318
	if (!ctx.cr6.lt) goto loc_82274318;
	// cmpwi cr6,r11,220
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 220, ctx.xer);
	// beq cr6,0x82274208
	if (ctx.cr6.eq) goto loc_82274208;
	// cmpwi cr6,r11,221
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 221, ctx.xer);
	// bne cr6,0x82274338
	if (!ctx.cr6.eq) goto loc_82274338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82273650
	ctx.lr = 0x82274314;
	sub_82273650(ctx, base);
	// b 0x8227437c
	goto loc_8227437C;
loc_82274318:
	// addi r11,r11,-216
	ctx.r11.s64 = ctx.r11.s64 + -216;
	// lwz r10,444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x82274374
	goto loc_82274374;
loc_82274330:
	// cmpwi cr6,r11,254
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 254, ctx.xer);
	// beq cr6,0x82274368
	if (ctx.cr6.eq) goto loc_82274368;
loc_82274338:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82274360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// b 0x82274100
	goto loc_82274100;
loc_82274368:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82274374:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227437C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227437C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822743e0
	if (ctx.cr6.eq) goto loc_822743E0;
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// b 0x82274100
	goto loc_82274100;
loc_8227438C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272be8
	ctx.lr = 0x82274394;
	sub_82272BE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822743e0
	if (ctx.cr6.eq) goto loc_822743E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_822743AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,85
	ctx.r10.s64 = 85;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822743D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_822743E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822743EC"))) PPC_WEAK_FUNC(sub_822743EC);
PPC_FUNC_IMPL(__imp__sub_822743EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822743F0"))) PPC_WEAK_FUNC(sub_822743F0);
PPC_FUNC_IMPL(__imp__sub_822743F0) {
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
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82274434
	if (!ctx.cr6.eq) goto loc_82274434;
	// bl 0x82273e80
	ctx.lr = 0x82274414;
	sub_82273E80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82274434
	if (!ctx.cr6.eq) goto loc_82274434;
loc_8227441C:
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
loc_82274434:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r10,420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r4,208
	ctx.r9.s64 = ctx.r4.s64 + 208;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8227448c
	if (!ctx.cr6.eq) goto loc_8227448C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,98
	ctx.r10.s64 = 98;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,444(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82274480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r4.u32);
	// b 0x822744a8
	goto loc_822744A8;
loc_8227448C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822744A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8227441c
	if (ctx.cr6.eq) goto loc_8227441C;
loc_822744A8:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_822744D4"))) PPC_WEAK_FUNC(sub_822744D4);
PPC_FUNC_IMPL(__imp__sub_822744D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822744D8"))) PPC_WEAK_FUNC(sub_822744D8);
PPC_FUNC_IMPL(__imp__sub_822744D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x822744E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,121
	ctx.r10.s64 = 121;
	// lwz r30,420(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r30.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r28,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r28.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82274520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r27,97
	ctx.r27.s64 = 97;
loc_82274524:
	// cmpwi cr6,r30,192
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 192, ctx.xer);
	// bge cr6,0x82274534
	if (!ctx.cr6.lt) goto loc_82274534;
loc_8227452C:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x822745a0
	goto loc_822745A0;
loc_82274534:
	// cmpwi cr6,r30,208
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 208, ctx.xer);
	// blt cr6,0x8227459c
	if (ctx.cr6.lt) goto loc_8227459C;
	// cmpwi cr6,r30,215
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 215, ctx.xer);
	// bgt cr6,0x8227459c
	if (ctx.cr6.gt) goto loc_8227459C;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8227459c
	if (ctx.cr6.eq) goto loc_8227459C;
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8227459c
	if (ctx.cr6.eq) goto loc_8227459C;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8227452c
	if (ctx.cr6.eq) goto loc_8227452C;
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8227452c
	if (ctx.cr6.eq) goto loc_8227452C;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x822745a0
	goto loc_822745A0;
loc_8227459C:
	// li r31,3
	ctx.r31.s64 = 3;
loc_822745A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r31.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822745D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82274618
	if (ctx.cr6.eq) goto loc_82274618;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x822745f4
	if (ctx.cr6.eq) goto loc_822745F4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82274524
	if (!ctx.cr6.eq) goto loc_82274524;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_822745F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82273e80
	ctx.lr = 0x822745FC;
	sub_82273E80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8227460c
	if (ctx.cr6.eq) goto loc_8227460C;
	// lwz r30,420(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	// b 0x82274524
	goto loc_82274524;
loc_8227460C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82274618:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227462C"))) PPC_WEAK_FUNC(sub_8227462C);
PPC_FUNC_IMPL(__imp__sub_8227462C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274630"))) PPC_WEAK_FUNC(sub_82274630);
PPC_FUNC_IMPL(__imp__sub_82274630) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,444(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// stw r11,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274658"))) PPC_WEAK_FUNC(sub_82274658);
PPC_FUNC_IMPL(__imp__sub_82274658) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82274684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// stw r3,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r3.u32);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// lis r6,-32217
	ctx.r6.s64 = -2111373312;
	// lis r5,-32217
	ctx.r5.s64 = -2111373312;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r7,16608
	ctx.r10.s64 = ctx.r7.s64 + 16608;
	// addi r4,r8,17968
	ctx.r4.s64 = ctx.r8.s64 + 17968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r6,17392
	ctx.r8.s64 = ctx.r6.s64 + 17392;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r7,r5,15744
	ctx.r7.s64 = ctx.r5.s64 + 15744;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822746CC:
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r9,15744
	ctx.r8.s64 = ctx.r9.s64 + 15744;
	// stw r8,-64(r10)
	PPC_STORE_U32(ctx.r10.u32 + -64, ctx.r8.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822746cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822746CC;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r10,15320
	ctx.r8.s64 = ctx.r10.s64 + 15320;
	// addi r7,r9,15320
	ctx.r7.s64 = ctx.r9.s64 + 15320;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// lwz r6,444(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// stw r11,164(r6)
	PPC_STORE_U32(ctx.r6.u32 + 164, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8227472C"))) PPC_WEAK_FUNC(sub_8227472C);
PPC_FUNC_IMPL(__imp__sub_8227472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274730"))) PPC_WEAK_FUNC(sub_82274730);
PPC_FUNC_IMPL(__imp__sub_82274730) {
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82274754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227d328
	ctx.lr = 0x8227475C;
	sub_8227D328(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r9,17156
	ctx.r3.s64 = ctx.r9.s64 + 17156;
	// bl 0x8237ac00
	ctx.lr = 0x82274768;
	sub_8237AC00(ctx, base);
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

__attribute__((alias("__imp__sub_8227477C"))) PPC_WEAK_FUNC(sub_8227477C);
PPC_FUNC_IMPL(__imp__sub_8227477C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274780"))) PPC_WEAK_FUNC(sub_82274780);
PPC_FUNC_IMPL(__imp__sub_82274780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822747A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822747B0"))) PPC_WEAK_FUNC(sub_822747B0);
PPC_FUNC_IMPL(__imp__sub_822747B0) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82274810
	if (!ctx.cr6.lt) goto loc_82274810;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822747e4
	if (ctx.cr6.eq) goto loc_822747E4;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822747f0
	if (ctx.cr6.lt) goto loc_822747F0;
loc_822747E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822747F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822747F0:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
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
loc_82274810:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82274828
	if (ctx.cr6.lt) goto loc_82274828;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274828:
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

__attribute__((alias("__imp__sub_8227483C"))) PPC_WEAK_FUNC(sub_8227483C);
PPC_FUNC_IMPL(__imp__sub_8227483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274840"))) PPC_WEAK_FUNC(sub_82274840);
PPC_FUNC_IMPL(__imp__sub_82274840) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82274884
	if (!ctx.cr6.gt) goto loc_82274884;
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82274884
	if (ctx.cr6.gt) goto loc_82274884;
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x822748b4
	goto loc_822748B4;
loc_82274884:
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822748bc
	if (ctx.cr6.eq) goto loc_822748BC;
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822748bc
	if (ctx.cr6.lt) goto loc_822748BC;
	// lwz r6,128(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x822748bc
	if (ctx.cr6.gt) goto loc_822748BC;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
loc_822748B4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822748c8
	if (!ctx.cr6.eq) goto loc_822748C8;
loc_822748BC:
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_822748C8:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822748f8
	if (ctx.cr6.eq) goto loc_822748F8;
loc_822748DC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// beq cr6,0x82274940
	if (ctx.cr6.eq) goto loc_82274940;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822748dc
	if (!ctx.cr6.eq) goto loc_822748DC;
loc_822748F8:
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8233cc00
	ctx.lr = 0x82274928;
	sub_8233CC00(ctx, base);
loc_82274928:
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
loc_82274940:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,115
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 115, ctx.xer);
	// bne cr6,0x822748f8
	if (!ctx.cr6.eq) goto loc_822748F8;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8233cc00
	ctx.lr = 0x82274958;
	sub_8233CC00(ctx, base);
	// b 0x82274928
	goto loc_82274928;
}

__attribute__((alias("__imp__sub_8227495C"))) PPC_WEAK_FUNC(sub_8227495C);
PPC_FUNC_IMPL(__imp__sub_8227495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274960"))) PPC_WEAK_FUNC(sub_82274960);
PPC_FUNC_IMPL(__imp__sub_82274960) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274978"))) PPC_WEAK_FUNC(sub_82274978);
PPC_FUNC_IMPL(__imp__sub_82274978) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// lis r6,-32217
	ctx.r6.s64 = -2111373312;
	// addi r4,r10,18224
	ctx.r4.s64 = ctx.r10.s64 + 18224;
	// addi r10,r5,16656
	ctx.r10.s64 = ctx.r5.s64 + 16656;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r9,r9,18352
	ctx.r9.s64 = ctx.r9.s64 + 18352;
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// addi r8,r8,18304
	ctx.r8.s64 = ctx.r8.s64 + 18304;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// addi r7,r7,18496
	ctx.r7.s64 = ctx.r7.s64 + 18496;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r6,r6,18784
	ctx.r6.s64 = ctx.r6.s64 + 18784;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r5,123
	ctx.r5.s64 = 123;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r5,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r5.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822749E8"))) PPC_WEAK_FUNC(sub_822749E8);
PPC_FUNC_IMPL(__imp__sub_822749E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x822749F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r4,62
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 62, ctx.xer);
	// beq cr6,0x82274a3c
	if (ctx.cr6.eq) goto loc_82274A3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,62
	ctx.r9.s64 = 62;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r4.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82274A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274A3C:
	// cmplwi cr6,r29,384
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 384, ctx.xer);
	// beq cr6,0x82274a78
	if (ctx.cr6.eq) goto loc_82274A78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,21
	ctx.r10.s64 = 21;
	// li r9,384
	ctx.r9.s64 = 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r29.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82274A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274A78:
	// li r5,384
	ctx.r5.s64 = 384;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82274A90;
	sub_8233EAF0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x8227d198
	ctx.lr = 0x82274AA4;
	sub_8227D198(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
loc_82274AD0:
	// stw r30,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82274ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82274AD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lfd f0,9024(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9024);
	// stfd f0,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.f0.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274AFC"))) PPC_WEAK_FUNC(sub_82274AFC);
PPC_FUNC_IMPL(__imp__sub_82274AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274B00"))) PPC_WEAK_FUNC(sub_82274B00);
PPC_FUNC_IMPL(__imp__sub_82274B00) {
	PPC_FUNC_PROLOGUE();
	// b 0x8227d328
	sub_8227D328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274B04"))) PPC_WEAK_FUNC(sub_82274B04);
PPC_FUNC_IMPL(__imp__sub_82274B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274B08"))) PPC_WEAK_FUNC(sub_82274B08);
PPC_FUNC_IMPL(__imp__sub_82274B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274b18
	if (ctx.cr6.eq) goto loc_82274B18;
	// stw r4,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r4.u32);
loc_82274B18:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274b28
	if (ctx.cr6.eq) goto loc_82274B28;
	// stw r4,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r4.u32);
loc_82274B28:
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274b38
	if (ctx.cr6.eq) goto loc_82274B38;
	// stw r4,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r4.u32);
loc_82274B38:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274b48
	if (ctx.cr6.eq) goto loc_82274B48;
	// stw r4,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r4.u32);
loc_82274B48:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82274B54:
	// lwz r11,-16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274b64
	if (ctx.cr6.eq) goto loc_82274B64;
	// stw r4,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r4.u32);
loc_82274B64:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274b74
	if (ctx.cr6.eq) goto loc_82274B74;
	// stw r4,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r4.u32);
loc_82274B74:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82274b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82274B54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274B80"))) PPC_WEAK_FUNC(sub_82274B80);
PPC_FUNC_IMPL(__imp__sub_82274B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82274B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x82274bd4
	if (ctx.cr6.eq) goto loc_82274BD4;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// beq cr6,0x82274bd4
	if (ctx.cr6.eq) goto loc_82274BD4;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// beq cr6,0x82274c18
	if (ctx.cr6.eq) goto loc_82274C18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// b 0x82274c10
	goto loc_82274C10;
loc_82274BD4:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82274c04
	if (!ctx.cr6.lt) goto loc_82274C04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,67
	ctx.r10.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82274C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274C04:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82274C10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82274C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274C18:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82274cf0
	if (!ctx.cr6.eq) goto loc_82274CF0;
	// li r29,24
	ctx.r29.s64 = 24;
loc_82274C2C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82274ccc
	if (!ctx.cr6.gt) goto loc_82274CCC;
loc_82274C4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274c80
	if (ctx.cr6.eq) goto loc_82274C80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82274C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274C80:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82274C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82274cbc
	if (!ctx.cr6.eq) goto loc_82274CBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82274CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274CBC:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82274c4c
	if (ctx.cr6.lt) goto loc_82274C4C;
loc_82274CCC:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82274CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82274c2c
	if (ctx.cr6.eq) goto loc_82274C2C;
loc_82274CF0:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82274D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82274D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227d2c0
	ctx.lr = 0x82274D20;
	sub_8227D2C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274D28"))) PPC_WEAK_FUNC(sub_82274D28);
PPC_FUNC_IMPL(__imp__sub_82274D28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82274d78
	if (ctx.cr6.eq) goto loc_82274D78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82274D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274D78:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82274d8c
	if (ctx.cr6.eq) goto loc_82274D8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82274b08
	ctx.lr = 0x82274D8C;
	sub_82274B08(ctx, base);
loc_82274D8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82274DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82274DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f288
	ctx.lr = 0x82274DBC;
	sub_8227F288(ctx, base);
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82274DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// stw r5,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r5.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r10,r11,101
	ctx.r10.s64 = ctx.r11.s64 + 101;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82274E08"))) PPC_WEAK_FUNC(sub_82274E08);
PPC_FUNC_IMPL(__imp__sub_82274E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82274E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x82274e54
	if (ctx.cr6.eq) goto loc_82274E54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82274E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274E54:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82274e88
	if (ctx.cr6.lt) goto loc_82274E88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,123
	ctx.r10.s64 = 123;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82274E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274E88:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274ebc
	if (ctx.cr6.eq) goto loc_82274EBC;
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82274EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274EBC:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82274edc
	if (ctx.cr6.eq) goto loc_82274EDC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274EDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274EDC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82274ef4
	if (!ctx.cr6.gt) goto loc_82274EF4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82274EF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82274F1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r8,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274F34"))) PPC_WEAK_FUNC(sub_82274F34);
PPC_FUNC_IMPL(__imp__sub_82274F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274F38"))) PPC_WEAK_FUNC(sub_82274F38);
PPC_FUNC_IMPL(__imp__sub_82274F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82274F40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
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
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82274f8c
	if (ctx.cr6.eq) goto loc_82274F8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82274F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274F8C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82274f9c
	if (ctx.cr6.lt) goto loc_82274F9C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82274fc4
	if (ctx.cr6.lt) goto loc_82274FC4;
loc_82274F9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,31
	ctx.r10.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r30.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82274FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274FC4:
	// addi r11,r30,18
	ctx.r11.s64 = ctx.r30.s64 + 18;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82274fe4
	if (!ctx.cr6.eq) goto loc_82274FE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227d378
	ctx.lr = 0x82274FE0;
	sub_8227D378(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
loc_82274FE4:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r29,8
	ctx.r8.s64 = ctx.r29.s64 + 8;
	// li r6,100
	ctx.r6.s64 = 100;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82274FF8:
	// lwz r11,-8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// addi r10,r11,50
	ctx.r10.s64 = ctx.r11.s64 + 50;
	// divw. r11,r10,r6
	ctx.r11.s32 = ctx.r10.s32 / ctx.r6.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82275014
	if (ctx.cr0.gt) goto loc_82275014;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82275020
	goto loc_82275020;
loc_82275014:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82275020
	if (!ctx.cr6.gt) goto loc_82275020;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_82275020:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82275034
	if (ctx.cr6.eq) goto loc_82275034;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82275034
	if (!ctx.cr6.gt) goto loc_82275034;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82275034:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// sthx r11,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// lwz r5,-4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// mullw r11,r5,r28
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// addi r4,r11,50
	ctx.r4.s64 = ctx.r11.s64 + 50;
	// divw. r11,r4,r6
	ctx.r11.s32 = ctx.r4.s32 / ctx.r6.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82275058
	if (ctx.cr0.gt) goto loc_82275058;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82275064
	goto loc_82275064;
loc_82275058:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82275064
	if (!ctx.cr6.gt) goto loc_82275064;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_82275064:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82275078
	if (ctx.cr6.eq) goto loc_82275078;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82275078
	if (!ctx.cr6.gt) goto loc_82275078;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82275078:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mullw r11,r9,r28
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// addi r5,r11,50
	ctx.r5.s64 = ctx.r11.s64 + 50;
	// divw. r11,r5,r6
	ctx.r11.s32 = ctx.r5.s32 / ctx.r6.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x822750a0
	if (ctx.cr0.gt) goto loc_822750A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822750ac
	goto loc_822750AC;
loc_822750A0:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x822750ac
	if (!ctx.cr6.gt) goto loc_822750AC;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_822750AC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x822750c0
	if (ctx.cr6.eq) goto loc_822750C0;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x822750c0
	if (!ctx.cr6.gt) goto loc_822750C0;
	// li r11,255
	ctx.r11.s64 = 255;
loc_822750C0:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r9,r7,6
	ctx.r9.s64 = ctx.r7.s64 + 6;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r11,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r11.u16);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r11,r5,r28
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// addi r4,r11,50
	ctx.r4.s64 = ctx.r11.s64 + 50;
	// divw. r11,r4,r6
	ctx.r11.s32 = ctx.r4.s32 / ctx.r6.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x822750ec
	if (ctx.cr0.gt) goto loc_822750EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822750f8
	goto loc_822750F8;
loc_822750EC:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x822750f8
	if (!ctx.cr6.gt) goto loc_822750F8;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_822750F8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8227510c
	if (ctx.cr6.eq) goto loc_8227510C;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8227510c
	if (!ctx.cr6.gt) goto loc_8227510C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8227510C:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// sthx r5,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u16);
	// bdnz 0x82274ff8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82274FF8;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82275138"))) PPC_WEAK_FUNC(sub_82275138);
PPC_FUNC_IMPL(__imp__sub_82275138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82275140;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82275168
	if (!ctx.cr6.eq) goto loc_82275168;
	// bl 0x8227d3b8
	ctx.lr = 0x82275164;
	sub_8227D3B8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_82275168:
	// li r5,17
	ctx.r5.s64 = 17;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82275178;
	sub_8233E4E0(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
	// addi r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 3;
loc_822751A0:
	// lbzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbzx r4,r3,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822751a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822751A0;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// blt cr6,0x822751e4
	if (ctx.cr6.lt) goto loc_822751E4;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// ble cr6,0x82275204
	if (!ctx.cr6.gt) goto loc_82275204;
loc_822751E4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82275204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82275204:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,17
	ctx.r3.s64 = ctx.r11.s64 + 17;
	// bl 0x8233e4e0
	ctx.lr = 0x82275218;
	sub_8233E4E0(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 276, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227522C"))) PPC_WEAK_FUNC(sub_8227522C);
PPC_FUNC_IMPL(__imp__sub_8227522C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82275230"))) PPC_WEAK_FUNC(sub_82275230);
PPC_FUNC_IMPL(__imp__sub_82275230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82275238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82275278
	if (ctx.cr6.eq) goto loc_82275278;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82275278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82275278:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r28.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r30,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r30.u32);
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// stw r30,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r30.u32);
	// stw r31,224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 224, ctx.r31.u32);
	// stw r31,228(r29)
	PPC_STORE_U32(ctx.r29.u32 + 228, ctx.r31.u32);
	// bgt cr6,0x82275588
	if (ctx.cr6.gt) goto loc_82275588;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822754e8
	if (ctx.cr6.eq) goto loc_822754E8;
	// bdz 0x822752bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822752BC;
	// bdz 0x822752e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822752E8;
	// bdz 0x8227535c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8227535C;
	// bdz 0x822753c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822753C8;
	// b 0x8227545c
	goto loc_8227545C;
loc_822752BC:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r31,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r31.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_822752E8:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,82
	ctx.r9.s64 = 82;
	// stw r31,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r31.u32);
	// stw r10,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r10.u32);
	// li r8,71
	ctx.r8.s64 = 71;
	// li r7,66
	ctx.r7.s64 = 66;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// stw r31,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r31.u32);
	// stw r31,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r31.u32);
	// stw r30,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r30.u32);
	// stw r30,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r30.u32);
	// stw r30,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r30.u32);
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r7,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r7.u32);
	// stw r31,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r31.u32);
	// stw r31,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r31.u32);
	// stw r30,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r30.u32);
	// stw r30,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r30.u32);
	// stw r30,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8227535C:
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r31.u32);
	// stw r9,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r9.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r30,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r30.u32);
	// stw r30,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r30.u32);
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// stw r31,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r31.u32);
	// stw r31,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r31.u32);
	// stw r31,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r31.u32);
	// stw r31,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r31.u32);
	// stw r31,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r31.u32);
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r9,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r9.u32);
	// stw r31,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r31.u32);
	// stw r31,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r31.u32);
	// stw r31,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r31.u32);
	// stw r31,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r31.u32);
	// stw r31,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_822753C8:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,67
	ctx.r9.s64 = 67;
	// stw r31,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r31.u32);
	// stw r10,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r10.u32);
	// li r8,77
	ctx.r8.s64 = 77;
	// li r7,89
	ctx.r7.s64 = 89;
	// li r6,75
	ctx.r6.s64 = 75;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// stw r31,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r31.u32);
	// stw r31,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r31.u32);
	// stw r30,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r30.u32);
	// stw r30,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r30.u32);
	// stw r30,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r30.u32);
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r7,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r7.u32);
	// stw r31,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r31.u32);
	// stw r31,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r31.u32);
	// stw r30,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r30.u32);
	// stw r30,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r30.u32);
	// stw r30,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r30.u32);
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r6,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r6.u32);
	// stw r31,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r31.u32);
	// stw r31,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r31.u32);
	// stw r30,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r30.u32);
	// stw r30,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r30.u32);
	// stw r30,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8227545C:
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r31.u32);
	// stw r9,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r9.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r30,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r30.u32);
	// stw r30,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r30.u32);
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// stw r31,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r31.u32);
	// stw r31,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r31.u32);
	// stw r31,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r31.u32);
	// stw r31,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r31.u32);
	// stw r31,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r31.u32);
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r8,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r8.u32);
	// stw r31,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r31.u32);
	// stw r31,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r31.u32);
	// stw r31,184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 184, ctx.r31.u32);
	// stw r31,188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 188, ctx.r31.u32);
	// stw r31,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r31.u32);
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r9,252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 252, ctx.r9.u32);
	// stw r11,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, ctx.r11.u32);
	// stw r11,264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 264, ctx.r11.u32);
	// stw r30,268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 268, ctx.r30.u32);
	// stw r30,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r30.u32);
	// stw r30,276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 276, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_822754E8:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// blt cr6,0x82275500
	if (ctx.cr6.lt) goto loc_82275500;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x82275538
	if (!ctx.cr6.gt) goto loc_82275538;
loc_82275500:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,10
	ctx.r9.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,60(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// stw r7,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82275538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82275538:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822755a8
	if (!ctx.cr6.gt) goto loc_822755A8;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8227554C:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,84
	ctx.r9.s64 = ctx.r9.s64 + 84;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227554c
	if (ctx.cr6.lt) goto loc_8227554C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82275588:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822755A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822755A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822755B0"))) PPC_WEAK_FUNC(sub_822755B0);
PPC_FUNC_IMPL(__imp__sub_822755B0) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82275944
	if (ctx.cr6.gt) goto loc_82275944;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82275924
	if (ctx.cr6.eq) goto loc_82275924;
	// bdz 0x822755f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822755F8;
	// bdz 0x82275680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82275680;
	// bdz 0x82275680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82275680;
	// bdz 0x82275748
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82275748;
	// bdz 0x82275838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82275838;
	// bdz 0x82275680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82275680;
	// bdz 0x82275680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82275680;
loc_822755F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82275630
	if (ctx.cr6.eq) goto loc_82275630;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82275630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82275630:
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
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
loc_82275680:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x822756b8
	if (ctx.cr6.eq) goto loc_822756B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822756B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822756B8:
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r9,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r10,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r10.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r9,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r9.u32);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r8,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r8.u32);
	// stw r11,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r11.u32);
	// stw r11,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r11.u32);
	// stw r11,184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 184, ctx.r11.u32);
	// stw r11,188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 188, ctx.r11.u32);
	// stw r11,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
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
loc_82275748:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82275780
	if (ctx.cr6.eq) goto loc_82275780;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82275780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82275780:
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// li r8,67
	ctx.r8.s64 = 67;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// li r6,77
	ctx.r6.s64 = 77;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// li r5,89
	ctx.r5.s64 = 89;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// li r4,75
	ctx.r4.s64 = 75;
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r6,84(r9)
	PPC_STORE_U32(ctx.r9.u32 + 84, ctx.r6.u32);
	// stw r11,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, ctx.r11.u32);
	// stw r11,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r11.u32);
	// stw r10,100(r9)
	PPC_STORE_U32(ctx.r9.u32 + 100, ctx.r10.u32);
	// stw r10,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r10.u32);
	// stw r10,108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 108, ctx.r10.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r5,168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 168, ctx.r5.u32);
	// stw r11,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r11.u32);
	// stw r11,180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 180, ctx.r11.u32);
	// stw r10,184(r9)
	PPC_STORE_U32(ctx.r9.u32 + 184, ctx.r10.u32);
	// stw r10,188(r9)
	PPC_STORE_U32(ctx.r9.u32 + 188, ctx.r10.u32);
	// stw r10,192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 192, ctx.r10.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r4,252(r9)
	PPC_STORE_U32(ctx.r9.u32 + 252, ctx.r4.u32);
	// stw r11,260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 260, ctx.r11.u32);
	// stw r11,264(r9)
	PPC_STORE_U32(ctx.r9.u32 + 264, ctx.r11.u32);
	// stw r10,268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 268, ctx.r10.u32);
	// stw r10,272(r9)
	PPC_STORE_U32(ctx.r9.u32 + 272, ctx.r10.u32);
	// stw r10,276(r9)
	PPC_STORE_U32(ctx.r9.u32 + 276, ctx.r10.u32);
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
loc_82275838:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82275870
	if (ctx.cr6.eq) goto loc_82275870;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82275870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82275870:
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// stw r10,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r9,84(r8)
	PPC_STORE_U32(ctx.r8.u32 + 84, ctx.r9.u32);
	// stw r11,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r11.u32);
	// stw r11,96(r8)
	PPC_STORE_U32(ctx.r8.u32 + 96, ctx.r11.u32);
	// stw r11,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r11.u32);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r11.u32);
	// stw r11,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r11.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r5,168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 168, ctx.r5.u32);
	// stw r11,176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 176, ctx.r11.u32);
	// stw r11,180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 180, ctx.r11.u32);
	// stw r11,184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 184, ctx.r11.u32);
	// stw r11,188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 188, ctx.r11.u32);
	// stw r11,192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 192, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r7,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r7.u32);
	// stw r9,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r9.u32);
	// stw r9,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r9.u32);
	// stw r10,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// stw r10,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
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
loc_82275924:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275230
	ctx.lr = 0x82275930;
	sub_82275230(ctx, base);
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
loc_82275944:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82275964;
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
}

__attribute__((alias("__imp__sub_82275978"))) PPC_WEAK_FUNC(sub_82275978);
PPC_FUNC_IMPL(__imp__sub_82275978) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x822759c0
	if (ctx.cr6.eq) goto loc_822759C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822759C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822759C0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822759ec
	if (!ctx.cr6.eq) goto loc_822759EC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,840
	ctx.r5.s64 = 840;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822759E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
loc_822759EC:
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,17440
	ctx.r5.s64 = ctx.r10.s64 + 17440;
	// li r6,50
	ctx.r6.s64 = 50;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82274f38
	ctx.lr = 0x82275A10;
	sub_82274F38(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r9,17184
	ctx.r5.s64 = ctx.r9.s64 + 17184;
	// li r6,50
	ctx.r6.s64 = 50;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82274f38
	ctx.lr = 0x82275A2C;
	sub_82274F38(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,18112
	ctx.r6.s64 = ctx.r8.s64 + 18112;
	// addi r5,r7,18092
	ctx.r5.s64 = ctx.r7.s64 + 18092;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275138
	ctx.lr = 0x82275A48;
	sub_82275138(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r6,r6,17928
	ctx.r6.s64 = ctx.r6.s64 + 17928;
	// addi r5,r5,17904
	ctx.r5.s64 = ctx.r5.s64 + 17904;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275138
	ctx.lr = 0x82275A64;
	sub_82275138(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r6,r4,18112
	ctx.r6.s64 = ctx.r4.s64 + 18112;
	// addi r5,r3,17884
	ctx.r5.s64 = ctx.r3.s64 + 17884;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275138
	ctx.lr = 0x82275A80;
	sub_82275138(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,17720
	ctx.r6.s64 = ctx.r11.s64 + 17720;
	// addi r5,r10,17696
	ctx.r5.s64 = ctx.r10.s64 + 17696;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275138
	ctx.lr = 0x82275A9C;
	sub_82275138(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r31,120
	ctx.r8.s64 = ctx.r31.s64 + 120;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r7,r31,136
	ctx.r7.s64 = ctx.r31.s64 + 136;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r31,152
	ctx.r6.s64 = ctx.r31.s64 + 152;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
loc_82275AC0:
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r5,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82275ac0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82275AC0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// ble cr6,0x82275af8
	if (!ctx.cr6.gt) goto loc_82275AF8;
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
loc_82275AF8:
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// stb r9,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r9.u8);
	// stb r9,213(r31)
	PPC_STORE_U8(ctx.r31.u32 + 213, ctx.r9.u8);
	// stb r10,214(r31)
	PPC_STORE_U8(ctx.r31.u32 + 214, ctx.r10.u8);
	// sth r9,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r9.u16);
	// sth r9,218(r31)
	PPC_STORE_U16(ctx.r31.u32 + 218, ctx.r9.u16);
	// bl 0x822755b0
	ctx.lr = 0x82275B28;
	sub_822755B0(ctx, base);
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

__attribute__((alias("__imp__sub_82275B3C"))) PPC_WEAK_FUNC(sub_82275B3C);
PPC_FUNC_IMPL(__imp__sub_82275B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82275B40"))) PPC_WEAK_FUNC(sub_82275B40);
PPC_FUNC_IMPL(__imp__sub_82275B40) {
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
	// bl 0x8227f468
	ctx.lr = 0x82275B60;
	sub_8227F468(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lbz r9,27(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// lbz r8,26(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26);
	// lbz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r7,25(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8227f998
	ctx.lr = 0x82275B84;
	sub_8227F998(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275ba4
	if (ctx.cr0.eq) goto loc_82275BA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8227f480
	ctx.lr = 0x82275BA0;
	sub_8227F480(ctx, base);
	// b 0x82275bc0
	goto loc_82275BC0;
loc_82275BA4:
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82275bc0
	if (!ctx.cr6.eq) goto loc_82275BC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,18136
	ctx.r4.s64 = ctx.r11.s64 + 18136;
	// bl 0x82271a00
	ctx.lr = 0x82275BC0;
	sub_82271A00(ctx, base);
loc_82275BC0:
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

__attribute__((alias("__imp__sub_82275BD8"))) PPC_WEAK_FUNC(sub_82275BD8);
PPC_FUNC_IMPL(__imp__sub_82275BD8) {
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
	// lwz r11,1368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1368);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82275c04
	if (!ctx.cr0.eq) goto loc_82275C04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,18180
	ctx.r4.s64 = ctx.r11.s64 + 18180;
	// bl 0x82271a00
	ctx.lr = 0x82275C04;
	sub_82271A00(ctx, base);
loc_82275C04:
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
	// bl 0x8227fd40
	ctx.lr = 0x82275C18;
	sub_8227FD40(ctx, base);
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

__attribute__((alias("__imp__sub_82275C2C"))) PPC_WEAK_FUNC(sub_82275C2C);
PPC_FUNC_IMPL(__imp__sub_82275C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82275C30"))) PPC_WEAK_FUNC(sub_82275C30);
PPC_FUNC_IMPL(__imp__sub_82275C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82275C38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82275cec
	if (!ctx.cr6.eq) goto loc_82275CEC;
	// lbz r11,1556(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1556);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82275cec
	if (!ctx.cr0.eq) goto loc_82275CEC;
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275c74
	if (ctx.cr0.eq) goto loc_82275C74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,18380
	ctx.r4.s64 = ctx.r11.s64 + 18380;
	// bl 0x82271a38
	ctx.lr = 0x82275C74;
	sub_82271A38(ctx, base);
loc_82275C74:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275c90
	if (ctx.cr0.eq) goto loc_82275C90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18336
	ctx.r4.s64 = ctx.r11.s64 + 18336;
	// bl 0x82271a38
	ctx.lr = 0x82275C90;
	sub_82271A38(ctx, base);
loc_82275C90:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275cac
	if (ctx.cr0.eq) goto loc_82275CAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18292
	ctx.r4.s64 = ctx.r11.s64 + 18292;
	// bl 0x82271a38
	ctx.lr = 0x82275CAC;
	sub_82271A38(ctx, base);
loc_82275CAC:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275cc8
	if (ctx.cr0.eq) goto loc_82275CC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18252
	ctx.r4.s64 = ctx.r11.s64 + 18252;
	// bl 0x82271a38
	ctx.lr = 0x82275CC8;
	sub_82271A38(ctx, base);
loc_82275CC8:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275ce4
	if (ctx.cr0.eq) goto loc_82275CE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18208
	ctx.r4.s64 = ctx.r11.s64 + 18208;
	// bl 0x82271a38
	ctx.lr = 0x82275CE4;
	sub_82271A38(ctx, base);
loc_82275CE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f558
	ctx.lr = 0x82275CEC;
	sub_8227F558(ctx, base);
loc_82275CEC:
	// lbz r11,1555(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1555);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82275d40
	if (ctx.cr0.eq) goto loc_82275D40;
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275d40
	if (ctx.cr0.eq) goto loc_82275D40;
	// lbz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82275e94
	if (ctx.cr6.lt) goto loc_82275E94;
	// beq cr6,0x82275e78
	if (ctx.cr6.eq) goto loc_82275E78;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82275e64
	if (ctx.cr6.lt) goto loc_82275E64;
	// beq cr6,0x82275e4c
	if (ctx.cr6.eq) goto loc_82275E4C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82275e3c
	if (ctx.cr6.lt) goto loc_82275E3C;
	// beq cr6,0x82275e24
	if (ctx.cr6.eq) goto loc_82275E24;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x82275d40
	if (!ctx.cr6.lt) goto loc_82275D40;
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275ea0
	if (ctx.cr0.eq) goto loc_82275EA0;
loc_82275D40:
	// lbz r10,1563(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1563);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r9,1560(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1560);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lbz r11,1558(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1558);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r6,1476(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// stb r10,1530(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1530, ctx.r10.u8);
	// stb r9,1529(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1529, ctx.r9.u8);
	// stb r11,1528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1528, ctx.r11.u8);
	// stw r6,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r6.u32);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mullw r11,r10,r6
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// stb r10,1531(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1531, ctx.r10.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r30,r31,1520
	ctx.r30.s64 = ctx.r31.s64 + 1520;
	// rlwinm r6,r11,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r6,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r6.u32);
	// bl 0x8227b738
	ctx.lr = 0x82275D9C;
	sub_8227B738(ctx, base);
	// lbz r11,1555(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1555);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82275ddc
	if (ctx.cr0.eq) goto loc_82275DDC;
	// lbz r5,1556(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bge cr6,0x82275ddc
	if (!ctx.cr6.lt) goto loc_82275DDC;
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275ddc
	if (ctx.cr0.eq) goto loc_82275DDC;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8227f6e0
	ctx.lr = 0x82275DD0;
	sub_8227F6E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275ea0
	if (ctx.cr6.eq) goto loc_82275EA0;
loc_82275DDC:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275df0
	if (ctx.cr6.eq) goto loc_82275DF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234f138
	ctx.lr = 0x82275DF0;
	sub_8234F138(ctx, base);
loc_82275DF0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280080
	ctx.lr = 0x82275DFC;
	sub_82280080(ctx, base);
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275e1c
	if (ctx.cr6.eq) goto loc_82275E1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,1556(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// lwz r4,1492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82275E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82275E1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82275E24:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82275ea0
	if (!ctx.cr0.eq) goto loc_82275EA0;
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// b 0x82275e8c
	goto loc_82275E8C;
loc_82275E3C:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// b 0x82275e70
	goto loc_82275E70;
loc_82275E4C:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82275ea0
	if (!ctx.cr0.eq) goto loc_82275EA0;
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// b 0x82275e8c
	goto loc_82275E8C;
loc_82275E64:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
loc_82275E70:
	// beq cr6,0x82275d40
	if (ctx.cr6.eq) goto loc_82275D40;
	// b 0x82275ea0
	goto loc_82275EA0;
loc_82275E78:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82275ea0
	if (!ctx.cr0.eq) goto loc_82275EA0;
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
loc_82275E8C:
	// bge cr6,0x82275d40
	if (!ctx.cr6.lt) goto loc_82275D40;
	// b 0x82275ea0
	goto loc_82275EA0;
loc_82275E94:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275d40
	if (ctx.cr0.eq) goto loc_82275D40;
loc_82275EA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227fd90
	ctx.lr = 0x82275EA8;
	sub_8227FD90(ctx, base);
	// b 0x82275e1c
	goto loc_82275E1C;
}

__attribute__((alias("__imp__sub_82275EAC"))) PPC_WEAK_FUNC(sub_82275EAC);
PPC_FUNC_IMPL(__imp__sub_82275EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82275EB0"))) PPC_WEAK_FUNC(sub_82275EB0);
PPC_FUNC_IMPL(__imp__sub_82275EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82275EB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1472(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82275f74
	if (!ctx.cr6.lt) goto loc_82275F74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r3,1380
	ctx.r29.s64 = ctx.r3.s64 + 1380;
	// addi r30,r11,18424
	ctx.r30.s64 = ctx.r11.s64 + 18424;
loc_82275EDC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82280cd8
	ctx.lr = 0x82275EE8;
	sub_82280CD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82275f08
	if (ctx.cr0.eq) goto loc_82275F08;
	// lwz r4,1404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82275f04
	if (!ctx.cr6.eq) goto loc_82275F04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82275F04:
	// bl 0x82271a00
	ctx.lr = 0x82275F08;
	sub_82271A00(ctx, base);
loc_82275F08:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82275f38
	if (!ctx.cr6.eq) goto loc_82275F38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1440(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// bl 0x8227fcf0
	ctx.lr = 0x82275F24;
	sub_8227FCF0(ctx, base);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// b 0x82275edc
	goto loc_82275EDC;
loc_82275F38:
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82275f64
	if (ctx.cr6.eq) goto loc_82275F64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227fcf0
	ctx.lr = 0x82275F54;
	sub_8227FCF0(ctx, base);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
loc_82275F64:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// bl 0x822764d8
	ctx.lr = 0x82275F74;
	sub_822764D8(ctx, base);
loc_82275F74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82275F7C"))) PPC_WEAK_FUNC(sub_82275F7C);
PPC_FUNC_IMPL(__imp__sub_82275F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82275F80"))) PPC_WEAK_FUNC(sub_82275F80);
PPC_FUNC_IMPL(__imp__sub_82275F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82275F88;
	__savegprlr_28(ctx, base);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,1380
	ctx.r3.s64 = ctx.r3.s64 + 1380;
	// bl 0x822810c0
	ctx.lr = 0x82275F98;
	sub_822810C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// bl 0x8227b710
	ctx.lr = 0x82275FA4;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1500(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// bl 0x8227b710
	ctx.lr = 0x82275FB0;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// bl 0x8227b710
	ctx.lr = 0x82275FBC;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// bl 0x8227b710
	ctx.lr = 0x82275FC8;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// bl 0x8227b710
	ctx.lr = 0x82275FD4;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1512(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// bl 0x8227b710
	ctx.lr = 0x82275FE0;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// bl 0x8227b710
	ctx.lr = 0x82275FEC;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1668(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// bl 0x8227b710
	ctx.lr = 0x82275FF8;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// bl 0x8227b710
	ctx.lr = 0x82276004;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1676(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// bl 0x8227b710
	ctx.lr = 0x82276010;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// bl 0x8227b710
	ctx.lr = 0x8227601C;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1684(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	// bl 0x8227b710
	ctx.lr = 0x82276028;
	sub_8227B710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1344
	ctx.r5.s64 = 1344;
	// bl 0x8233e4e0
	ctx.lr = 0x82276038;
	sub_8233E4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1696
	ctx.r5.s64 = 1696;
	// lwz r30,1344(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,1348(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1348);
	// lwz r28,1352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1352);
	// bl 0x8233eaf0
	ctx.lr = 0x82276054;
	sub_8233EAF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1344
	ctx.r5.s64 = 1344;
	// stw r30,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r29.u32);
	// stw r28,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r28.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x82276070;
	sub_8233E4E0(ctx, base);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82276078"))) PPC_WEAK_FUNC(sub_82276078);
PPC_FUNC_IMPL(__imp__sub_82276078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82276080;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// blt cr6,0x822760b4
	if (ctx.cr6.lt) goto loc_822760B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,18464
	ctx.r4.s64 = ctx.r11.s64 + 18464;
	// bl 0x82271a38
	ctx.lr = 0x822760B0;
	sub_82271A38(ctx, base);
	// b 0x82276304
	goto loc_82276304;
loc_822760B4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822760c0
	if (!ctx.cr6.eq) goto loc_822760C0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_822760C0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822760d8
	if (ctx.cr6.lt) goto loc_822760D8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822760d8
	if (ctx.cr6.eq) goto loc_822760D8;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x822760dc
	if (!ctx.cr6.eq) goto loc_822760DC;
loc_822760D8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822760DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,1665(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1665, ctx.r30.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r4,1664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1664, ctx.r4.u8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfd f31,18456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 18456);
	// lfd f30,9016(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9016);
	// ble cr6,0x8227621c
	if (!ctx.cr6.gt) goto loc_8227621C;
	// lwz r11,1668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227613c
	if (!ctx.cr6.eq) goto loc_8227613C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b6a0
	ctx.lr = 0x82276114;
	sub_8227B6A0(ctx, base);
	// stw r3,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8227613c
	if (!ctx.cr6.gt) goto loc_8227613C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82276128:
	// lwz r10,1668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// li r9,255
	ctx.r9.s64 = 255;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82276128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82276128;
loc_8227613C:
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// li r29,256
	ctx.r29.s64 = 256;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82276198
	if (!ctx.cr6.eq) goto loc_82276198;
	// rlwinm r26,r30,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8227b6a0
	ctx.lr = 0x8227615C;
	sub_8227B6A0(ctx, base);
	// stw r3,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b6a0
	ctx.lr = 0x8227616C;
	sub_8227B6A0(ctx, base);
	// stw r3,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r3.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8227621c
	if (!ctx.cr6.gt) goto loc_8227621C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82276180:
	// lwz r10,1672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// sthx r29,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u16);
	// lwz r10,1676(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// sthx r29,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82276180
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82276180;
loc_82276198:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8227621c
	if (!ctx.cr6.gt) goto loc_8227621C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lfd f0,18448(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 18448);
loc_822761B4:
	// lfd f13,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x822761d4
	if (!ctx.cr6.lt) goto loc_822761D4;
	// lwz r9,1672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// sthx r29,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u16);
	// lwz r9,1676(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// sthx r29,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u16);
	// b 0x82276210
	goto loc_82276210;
loc_822761D4:
	// lfd f13,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r9,1676(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// fmadd f13,f13,f0,f31
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f31.f64;
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sthx r8,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u16);
	// lfd f13,0(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r9,1672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// fdiv f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 / ctx.f13.f64;
	// fadd f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 + ctx.f31.f64;
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sthx r8,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u16);
loc_82276210:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x822761b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822761B4;
loc_8227621C:
	// lwz r11,1680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// li r30,8
	ctx.r30.s64 = 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82276270
	if (!ctx.cr6.eq) goto loc_82276270;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b6a0
	ctx.lr = 0x82276238;
	sub_8227B6A0(ctx, base);
	// stw r3,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r3.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b6a0
	ctx.lr = 0x82276248;
	sub_8227B6A0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82276258:
	// lwz r10,1680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// sthx r30,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u16);
	// lwz r10,1684(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	// sthx r30,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82276258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82276258;
loc_82276270:
	// li r9,5
	ctx.r9.s64 = 5;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f12,9024(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 9024);
	// lfd f13,18440(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 18440);
loc_82276290:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822762e8
	if (ctx.cr6.eq) goto loc_822762E8;
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x822762e8
	if (ctx.cr6.lt) goto loc_822762E8;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x822762f8
	if (ctx.cr6.lt) goto loc_822762F8;
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// lwz r9,1684(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	// fadd f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 + ctx.f31.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sthx r8,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u16);
	// lfd f0,0(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r9,1680(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// fmadd f0,f0,f13,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64 + ctx.f31.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sthx r8,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u16);
	// b 0x822762f8
	goto loc_822762F8;
loc_822762E8:
	// lwz r9,1680(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// sthx r30,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u16);
	// lwz r9,1684(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	// sthx r30,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u16);
loc_822762F8:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82276290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82276290;
loc_82276304:
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

__attribute__((alias("__imp__sub_82276314"))) PPC_WEAK_FUNC(sub_82276314);
PPC_FUNC_IMPL(__imp__sub_82276314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82276318"))) PPC_WEAK_FUNC(sub_82276318);
PPC_FUNC_IMPL(__imp__sub_82276318) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// bl 0x8227b610
	ctx.lr = 0x82276340;
	sub_8227B610(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82276354
	if (!ctx.cr0.eq) goto loc_82276354;
loc_8227634C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822763fc
	goto loc_822763FC;
loc_82276354:
	// bl 0x82340080
	ctx.lr = 0x82276358;
	sub_82340080(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8227637c
	if (ctx.cr0.eq) goto loc_8227637C;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// bl 0x8227b710
	ctx.lr = 0x82276370;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b688
	ctx.lr = 0x82276378;
	sub_8227B688(ctx, base);
	// b 0x8227634c
	goto loc_8227634C;
loc_8227637C:
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x822719f0
	ctx.lr = 0x8227638C;
	sub_822719F0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822763a4
	if (ctx.cr6.eq) goto loc_822763A4;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// beq cr6,0x822763b4
	if (ctx.cr6.eq) goto loc_822763B4;
loc_822763A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18496
	ctx.r4.s64 = ctx.r11.s64 + 18496;
	// bl 0x82271a00
	ctx.lr = 0x822763B4;
	sub_82271A00(ctx, base);
loc_822763B4:
	// li r11,8192
	ctx.r11.s64 = 8192;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b6a0
	ctx.lr = 0x822763C8;
	sub_8227B6A0(ctx, base);
	// stw r3,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822764f0
	ctx.lr = 0x822763E0;
	sub_822764F0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276078
	ctx.lr = 0x822763F8;
	sub_82276078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822763FC:
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

__attribute__((alias("__imp__sub_82276410"))) PPC_WEAK_FUNC(sub_82276410);
PPC_FUNC_IMPL(__imp__sub_82276410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82276418;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82276444
	if (ctx.cr6.eq) goto loc_82276444;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r30,r4,-4
	ctx.r30.s64 = ctx.r4.s64 + -4;
loc_82276430:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82275c30
	ctx.lr = 0x8227643C;
	sub_82275C30(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82276430
	if (!ctx.cr0.eq) goto loc_82276430;
loc_82276444:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227644C"))) PPC_WEAK_FUNC(sub_8227644C);
PPC_FUNC_IMPL(__imp__sub_8227644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82276450"))) PPC_WEAK_FUNC(sub_82276450);
PPC_FUNC_IMPL(__imp__sub_82276450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82276458;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// beq cr6,0x82276478
	if (ctx.cr6.eq) goto loc_82276478;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82276478:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82276494
	if (ctx.cr6.eq) goto loc_82276494;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82276494
	if (ctx.cr6.eq) goto loc_82276494;
	// bl 0x8227b688
	ctx.lr = 0x82276490;
	sub_8227B688(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82276494:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822764b0
	if (ctx.cr6.eq) goto loc_822764B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82275f80
	ctx.lr = 0x822764A4;
	sub_82275F80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227b688
	ctx.lr = 0x822764AC;
	sub_8227B688(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_822764B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822764B8"))) PPC_WEAK_FUNC(sub_822764B8);
PPC_FUNC_IMPL(__imp__sub_822764B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822764cc
	if (ctx.cr6.eq) goto loc_822764CC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_822764CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,18552
	ctx.r4.s64 = ctx.r11.s64 + 18552;
	// b 0x82271a00
	sub_82271A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822764D8"))) PPC_WEAK_FUNC(sub_822764D8);
PPC_FUNC_IMPL(__imp__sub_822764D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822764EC"))) PPC_WEAK_FUNC(sub_822764EC);
PPC_FUNC_IMPL(__imp__sub_822764EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822764F0"))) PPC_WEAK_FUNC(sub_822764F0);
PPC_FUNC_IMPL(__imp__sub_822764F0) {
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
	// lwz r11,1360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,1364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1364, ctx.r4.u32);
	// stw r5,1356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1356, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,1568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1568, ctx.r6.u32);
	// beq cr6,0x82276540
	if (ctx.cr6.eq) goto loc_82276540;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,1360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1360, ctx.r11.u32);
	// addi r4,r10,18636
	ctx.r4.s64 = ctx.r10.s64 + 18636;
	// bl 0x82271a38
	ctx.lr = 0x82276530;
	sub_82271A38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18580
	ctx.r4.s64 = ctx.r11.s64 + 18580;
	// bl 0x82271a38
	ctx.lr = 0x82276540;
	sub_82271A38(ctx, base);
loc_82276540:
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

__attribute__((alias("__imp__sub_82276554"))) PPC_WEAK_FUNC(sub_82276554);
PPC_FUNC_IMPL(__imp__sub_82276554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82276558"))) PPC_WEAK_FUNC(sub_82276558);
PPC_FUNC_IMPL(__imp__sub_82276558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82276580"))) PPC_WEAK_FUNC(sub_82276580);
PPC_FUNC_IMPL(__imp__sub_82276580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82276588;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82276698
	if (ctx.cr6.eq) goto loc_82276698;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82276698
	if (ctx.cr6.eq) goto loc_82276698;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,16960
	ctx.r11.u64 = ctx.r11.u64 | 16960;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822765d4
	if (ctx.cr6.gt) goto loc_822765D4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822765e4
	if (!ctx.cr6.gt) goto loc_822765E4;
loc_822765D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,18756
	ctx.r4.s64 = ctx.r11.s64 + 18756;
	// bl 0x82271a00
	ctx.lr = 0x822765E4;
	sub_82271A00(ctx, base);
loc_822765E4:
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stb r11,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r11.u8);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// stb r25,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r25.u8);
	// stb r9,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r9.u8);
	// stb r26,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r26.u8);
	// beq cr6,0x82276620
	if (ctx.cr6.eq) goto loc_82276620;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,3
	ctx.r9.s64 = 3;
	// bne 0x82276624
	if (!ctx.cr0.eq) goto loc_82276624;
loc_82276620:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82276624:
	// stb r9,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r9.u8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227663c
	if (ctx.cr0.eq) goto loc_8227663C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r11.u8);
loc_8227663C:
	// lbz r11,29(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r10,r9,65535
	ctx.r10.u64 = ctx.r9.u64 | 65535;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// stb r11,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r11.u8);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82276688
	if (!ctx.cr6.gt) goto loc_82276688;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,18692
	ctx.r4.s64 = ctx.r11.s64 + 18692;
	// bl 0x82271a38
	ctx.lr = 0x82276680;
	sub_82271A38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82276694
	goto loc_82276694;
loc_82276688:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82276694:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82276698:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822766A0"))) PPC_WEAK_FUNC(sub_822766A0);
PPC_FUNC_IMPL(__imp__sub_822766A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r5.u32);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// sth r6,20(r4)
	PPC_STORE_U16(ctx.r4.u32 + 20, ctx.r6.u16);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822766C8"))) PPC_WEAK_FUNC(sub_822766C8);
PPC_FUNC_IMPL(__imp__sub_822766C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stb r5,44(r4)
	PPC_STORE_U8(ctx.r4.u32 + 44, ctx.r5.u8);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822766EC"))) PPC_WEAK_FUNC(sub_822766EC);
PPC_FUNC_IMPL(__imp__sub_822766EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822766F0"))) PPC_WEAK_FUNC(sub_822766F0);
PPC_FUNC_IMPL(__imp__sub_822766F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stb r5,44(r4)
	PPC_STORE_U8(ctx.r4.u32 + 44, ctx.r5.u8);
	// ori r10,r10,2049
	ctx.r10.u64 = ctx.r10.u64 | 2049;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lfs f0,18796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82276720"))) PPC_WEAK_FUNC(sub_82276720);
PPC_FUNC_IMPL(__imp__sub_82276720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8227673c
	if (ctx.cr6.eq) goto loc_8227673C;
	// stw r5,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r5.u32);
loc_8227673C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82276770
	if (ctx.cr6.eq) goto loc_82276770;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 + 52;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82276758:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82276758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82276758;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82276770
	if (!ctx.cr6.eq) goto loc_82276770;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82276770:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r6,22(r4)
	PPC_STORE_U16(ctx.r4.u32 + 22, ctx.r6.u16);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82276784"))) PPC_WEAK_FUNC(sub_82276784);
PPC_FUNC_IMPL(__imp__sub_82276784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82276788"))) PPC_WEAK_FUNC(sub_82276788);
PPC_FUNC_IMPL(__imp__sub_82276788) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// bl 0x8227b610
	ctx.lr = 0x822767B0;
	sub_8227B610(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822767c4
	if (!ctx.cr0.eq) goto loc_822767C4;
loc_822767BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822768d8
	goto loc_822768D8;
loc_822767C4:
	// bl 0x82340080
	ctx.lr = 0x822767C8;
	sub_82340080(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x822767ec
	if (ctx.cr0.eq) goto loc_822767EC;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// bl 0x8227b710
	ctx.lr = 0x822767E0;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b688
	ctx.lr = 0x822767E8;
	sub_8227B688(ctx, base);
	// b 0x822767bc
	goto loc_822767BC;
loc_822767EC:
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x822719f0
	ctx.lr = 0x822767FC;
	sub_822719F0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276814
	if (ctx.cr6.eq) goto loc_82276814;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// beq cr6,0x82276824
	if (ctx.cr6.eq) goto loc_82276824;
loc_82276814:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18496
	ctx.r4.s64 = ctx.r11.s64 + 18496;
	// bl 0x82271a00
	ctx.lr = 0x82276824;
	sub_82271A00(ctx, base);
loc_82276824:
	// li r11,8192
	ctx.r11.s64 = 8192;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b6a0
	ctx.lr = 0x82276838;
	sub_8227B6A0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stw r3,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r3.u32);
	// addi r11,r11,7008
	ctx.r11.s64 = ctx.r11.s64 + 7008;
	// addi r10,r10,7120
	ctx.r10.s64 = ctx.r10.s64 + 7120;
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r10.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r31,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r31.u32);
	// addi r4,r11,18984
	ctx.r4.s64 = ctx.r11.s64 + 18984;
	// addi r3,r31,1380
	ctx.r3.s64 = ctx.r31.s64 + 1380;
	// bl 0x822826c0
	ctx.lr = 0x8227686C;
	sub_822826C0(ctx, base);
	// cmpwi cr6,r3,-6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -6, ctx.xer);
	// beq cr6,0x822768a4
	if (ctx.cr6.eq) goto loc_822768A4;
	// cmpwi cr6,r3,-4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -4, ctx.xer);
	// beq cr6,0x82276898
	if (ctx.cr6.eq) goto loc_82276898;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82276898
	if (ctx.cr6.eq) goto loc_82276898;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822768b4
	if (ctx.cr6.eq) goto loc_822768B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,18964
	ctx.r4.s64 = ctx.r11.s64 + 18964;
	// b 0x822768ac
	goto loc_822768AC;
loc_82276898:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,18944
	ctx.r4.s64 = ctx.r11.s64 + 18944;
	// b 0x822768ac
	goto loc_822768AC;
loc_822768A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,18924
	ctx.r4.s64 = ctx.r11.s64 + 18924;
loc_822768AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271a00
	ctx.lr = 0x822768B4;
	sub_82271A00(ctx, base);
loc_822768B4:
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
	// bl 0x822793f8
	ctx.lr = 0x822768D4;
	sub_822793F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822768D8:
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

__attribute__((alias("__imp__sub_822768EC"))) PPC_WEAK_FUNC(sub_822768EC);
PPC_FUNC_IMPL(__imp__sub_822768EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822768F0"))) PPC_WEAK_FUNC(sub_822768F0);
PPC_FUNC_IMPL(__imp__sub_822768F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x822768F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r31,1564(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1564);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// bge cr6,0x82276984
	if (!ctx.cr6.lt) goto loc_82276984;
	// subfic r30,r31,8
	ctx.xer.ca = ctx.r31.u32 <= 8;
	ctx.r30.s64 = 8 - ctx.r31.s64;
	// add r11,r31,r4
	ctx.r11.u64 = ctx.r31.u64 + ctx.r4.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x822793d8
	ctx.lr = 0x82276924;
	sub_822793D8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r29,r27,32
	ctx.r29.s64 = ctx.r27.s64 + 32;
	// stb r11,1564(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1564, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82271ae8
	ctx.lr = 0x82276940;
	sub_82271AE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82276984
	if (ctx.cr0.eq) goto loc_82276984;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x82276974
	if (!ctx.cr6.lt) goto loc_82276974;
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82271ae8
	ctx.lr = 0x82276960;
	sub_82271AE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82276974
	if (ctx.cr0.eq) goto loc_82276974;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,19088
	ctx.r4.s64 = ctx.r11.s64 + 19088;
	// b 0x8227697c
	goto loc_8227697C;
loc_82276974:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,19048
	ctx.r4.s64 = ctx.r11.s64 + 19048;
loc_8227697C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82271a00
	ctx.lr = 0x82276984;
	sub_82271A00(ctx, base);
loc_82276984:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r28,1548
	ctx.r31.s64 = ctx.r28.s64 + 1548;
	// addi r30,r11,18916
	ctx.r30.s64 = ctx.r11.s64 + 18916;
loc_82276990:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822793d8
	ctx.lr = 0x822769A0;
	sub_822793D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822837a8
	ctx.lr = 0x822769AC;
	sub_822837A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82271bd8
	ctx.lr = 0x822769B8;
	sub_82271BD8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82282c20
	ctx.lr = 0x822769C8;
	sub_82282C20(ctx, base);
	// addi r10,r30,-48
	ctx.r10.s64 = ctx.r30.s64 + -48;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
loc_822769D4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822769f4
	if (!ctx.cr0.eq) goto loc_822769F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822769d4
	if (!ctx.cr6.eq) goto loc_822769D4;
loc_822769F4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82276a10
	if (!ctx.cr0.eq) goto loc_82276A10;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82283910
	ctx.lr = 0x82276A0C;
	sub_82283910(ctx, base);
	// b 0x82276990
	goto loc_82276990;
loc_82276A10:
	// addi r10,r30,-24
	ctx.r10.s64 = ctx.r30.s64 + -24;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
loc_82276A1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82276a3c
	if (!ctx.cr0.eq) goto loc_82276A3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82276a1c
	if (!ctx.cr6.eq) goto loc_82276A1C;
loc_82276A3C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82276a58
	if (!ctx.cr0.eq) goto loc_82276A58;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82283bd8
	ctx.lr = 0x82276A54;
	sub_82283BD8(ctx, base);
	// b 0x82276990
	goto loc_82276990;
loc_82276A58:
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
loc_82276A64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82276a84
	if (!ctx.cr0.eq) goto loc_82276A84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82276a64
	if (!ctx.cr6.eq) goto loc_82276A64;
loc_82276A84:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82276aa0
	if (!ctx.cr0.eq) goto loc_82276AA0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82283d90
	ctx.lr = 0x82276A9C;
	sub_82283D90(ctx, base);
	// b 0x82276990
	goto loc_82276990;
loc_82276AA0:
	// addi r10,r30,-40
	ctx.r10.s64 = ctx.r30.s64 + -40;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
loc_82276AAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82276acc
	if (!ctx.cr0.eq) goto loc_82276ACC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82276aac
	if (!ctx.cr6.eq) goto loc_82276AAC;
loc_82276ACC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82276bb4
	if (ctx.cr0.eq) goto loc_82276BB4;
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
loc_82276AE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82276b00
	if (!ctx.cr0.eq) goto loc_82276B00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82276ae0
	if (!ctx.cr6.eq) goto loc_82276AE0;
loc_82276B00:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82276b1c
	if (!ctx.cr0.eq) goto loc_82276B1C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82283e10
	ctx.lr = 0x82276B18;
	sub_82283E10(ctx, base);
	// b 0x82276990
	goto loc_82276990;
loc_82276B1C:
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
loc_82276B28:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82276b48
	if (!ctx.cr0.eq) goto loc_82276B48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82276b28
	if (!ctx.cr6.eq) goto loc_82276B28;
loc_82276B48:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82276b64
	if (!ctx.cr0.eq) goto loc_82276B64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82283fb0
	ctx.lr = 0x82276B60;
	sub_82283FB0(ctx, base);
	// b 0x82276990
	goto loc_82276990;
loc_82276B64:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
loc_82276B70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82276b90
	if (!ctx.cr0.eq) goto loc_82276B90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82276b70
	if (!ctx.cr6.eq) goto loc_82276B70;
loc_82276B90:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne 0x82276bac
	if (!ctx.cr0.eq) goto loc_82276BAC;
	// bl 0x82284120
	ctx.lr = 0x82276BA8;
	sub_82284120(ctx, base);
	// b 0x82276990
	goto loc_82276990;
loc_82276BAC:
	// bl 0x82284358
	ctx.lr = 0x82276BB0;
	sub_82284358(ctx, base);
	// b 0x82276990
	goto loc_82276990;
loc_82276BB4:
	// lwz r11,1368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82276bcc
	if (!ctx.cr0.eq) goto loc_82276BCC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,19020
	ctx.r4.s64 = ctx.r11.s64 + 19020;
	// b 0x82276be8
	goto loc_82276BE8;
loc_82276BCC:
	// lbz r10,1558(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1558);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82276bf0
	if (!ctx.cr6.eq) goto loc_82276BF0;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82276bf0
	if (!ctx.cr0.eq) goto loc_82276BF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,18992
	ctx.r4.s64 = ctx.r11.s64 + 18992;
loc_82276BE8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82271a00
	ctx.lr = 0x82276BF0;
	sub_82271A00(ctx, base);
loc_82276BF0:
	// lwz r11,1368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1368);
	// stw r29,1532(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1532, ctx.r29.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,1368(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1368, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82276C08"))) PPC_WEAK_FUNC(sub_82276C08);
PPC_FUNC_IMPL(__imp__sub_82276C08) {
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
	// lwz r11,1372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82276c34
	if (!ctx.cr0.eq) goto loc_82276C34;
	// bl 0x82283598
	ctx.lr = 0x82276C34;
	sub_82283598(ctx, base);
loc_82276C34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822777c0
	ctx.lr = 0x82276C40;
	sub_822777C0(ctx, base);
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

__attribute__((alias("__imp__sub_82276C58"))) PPC_WEAK_FUNC(sub_82276C58);
PPC_FUNC_IMPL(__imp__sub_82276C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82276C60;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82276c80
	if (!ctx.cr0.eq) goto loc_82276C80;
	// bl 0x82283598
	ctx.lr = 0x82276C80;
	sub_82283598(ctx, base);
loc_82276C80:
	// lbz r11,1555(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1555);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82276cd4
	if (ctx.cr0.eq) goto loc_82276CD4;
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82276cd4
	if (ctx.cr0.eq) goto loc_82276CD4;
	// lbz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82276f00
	if (ctx.cr6.lt) goto loc_82276F00;
	// beq cr6,0x82276ed8
	if (ctx.cr6.eq) goto loc_82276ED8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82276eb4
	if (ctx.cr6.lt) goto loc_82276EB4;
	// beq cr6,0x82276e8c
	if (ctx.cr6.eq) goto loc_82276E8C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82276e6c
	if (ctx.cr6.lt) goto loc_82276E6C;
	// beq cr6,0x82276e44
	if (ctx.cr6.eq) goto loc_82276E44;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x82276cd4
	if (!ctx.cr6.lt) goto loc_82276CD4;
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82276f24
	if (ctx.cr0.eq) goto loc_82276F24;
loc_82276CD4:
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82276cf0
	if (!ctx.cr0.eq) goto loc_82276CF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19172
	ctx.r4.s64 = ctx.r11.s64 + 19172;
	// bl 0x82271a00
	ctx.lr = 0x82276CF0;
	sub_82271A00(ctx, base);
loc_82276CF0:
	// lwz r11,1484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,1500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// addi r28,r9,19148
	ctx.r28.s64 = ctx.r9.s64 + 19148;
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r27,r11,18812
	ctx.r27.s64 = ctx.r11.s64 + 18812;
	// addi r29,r10,19128
	ctx.r29.s64 = ctx.r10.s64 + 19128;
loc_82276D18:
	// lwz r11,1384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82276e00
	if (!ctx.cr6.eq) goto loc_82276E00;
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82276dc4
	if (!ctx.cr6.eq) goto loc_82276DC4;
	// addi r30,r31,1548
	ctx.r30.s64 = ctx.r31.s64 + 1548;
loc_82276D34:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82283818
	ctx.lr = 0x82276D40;
	sub_82283818(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822793d8
	ctx.lr = 0x82276D50;
	sub_822793D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822837a8
	ctx.lr = 0x82276D5C;
	sub_822837A8(ctx, base);
	// stw r3,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271bd8
	ctx.lr = 0x82276D68;
	sub_82271BD8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282c20
	ctx.lr = 0x82276D78;
	sub_82282C20(ctx, base);
	// addi r10,r27,64
	ctx.r10.s64 = ctx.r27.s64 + 64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
loc_82276D84:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82276da4
	if (!ctx.cr0.eq) goto loc_82276DA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82276d84
	if (!ctx.cr6.eq) goto loc_82276D84;
loc_82276DA4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82276db8
	if (ctx.cr0.eq) goto loc_82276DB8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271a00
	ctx.lr = 0x82276DB8;
	sub_82271A00(ctx, base);
loc_82276DB8:
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276d34
	if (ctx.cr6.eq) goto loc_82276D34;
loc_82276DC4:
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r10,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r10.u32);
	// stw r4,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r4.u32);
	// ble cr6,0x82276de4
	if (!ctx.cr6.gt) goto loc_82276DE4;
	// stw r11,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
loc_82276DE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// bl 0x82282c20
	ctx.lr = 0x82276DF0;
	sub_82282C20(ctx, base);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// lwz r10,1384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
loc_82276E00:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1380
	ctx.r3.s64 = ctx.r31.s64 + 1380;
	// bl 0x822826d0
	ctx.lr = 0x82276E0C;
	sub_822826D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82276f30
	if (ctx.cr6.eq) goto loc_82276F30;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82276e34
	if (ctx.cr6.eq) goto loc_82276E34;
	// lwz r4,1404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82276e2c
	if (!ctx.cr6.eq) goto loc_82276E2C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82276E2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271a00
	ctx.lr = 0x82276E34;
	sub_82271A00(ctx, base);
loc_82276E34:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82276d18
	if (!ctx.cr6.eq) goto loc_82276D18;
	// b 0x82276f7c
	goto loc_82276F7C;
loc_82276E44:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82276e5c
	if (!ctx.cr0.eq) goto loc_82276E5C;
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82276cd4
	if (!ctx.cr6.lt) goto loc_82276CD4;
loc_82276E5C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82276f24
	if (ctx.cr6.eq) goto loc_82276F24;
	// li r5,85
	ctx.r5.s64 = 85;
	// b 0x82276f18
	goto loc_82276F18;
loc_82276E6C:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82276cd4
	if (ctx.cr6.eq) goto loc_82276CD4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82276f24
	if (ctx.cr6.eq) goto loc_82276F24;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82276ed0
	goto loc_82276ED0;
loc_82276E8C:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82276ea4
	if (!ctx.cr0.eq) goto loc_82276EA4;
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82276cd4
	if (!ctx.cr6.lt) goto loc_82276CD4;
loc_82276EA4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82276f24
	if (ctx.cr6.eq) goto loc_82276F24;
	// li r5,51
	ctx.r5.s64 = 51;
	// b 0x82276f18
	goto loc_82276F18;
loc_82276EB4:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82276cd4
	if (ctx.cr6.eq) goto loc_82276CD4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82276f24
	if (ctx.cr6.eq) goto loc_82276F24;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82276ED0:
	// beq 0x82276f24
	if (ctx.cr0.eq) goto loc_82276F24;
	// b 0x82276f14
	goto loc_82276F14;
loc_82276ED8:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82276ef0
	if (!ctx.cr0.eq) goto loc_82276EF0;
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82276cd4
	if (!ctx.cr6.lt) goto loc_82276CD4;
loc_82276EF0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82276f24
	if (ctx.cr6.eq) goto loc_82276F24;
	// li r5,15
	ctx.r5.s64 = 15;
	// b 0x82276f18
	goto loc_82276F18;
loc_82276F00:
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82276cd4
	if (ctx.cr0.eq) goto loc_82276CD4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82276f24
	if (ctx.cr6.eq) goto loc_82276F24;
loc_82276F14:
	// li r5,255
	ctx.r5.s64 = 255;
loc_82276F18:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282dc0
	ctx.lr = 0x82276F24;
	sub_82282DC0(ctx, base);
loc_82276F24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822843c8
	ctx.lr = 0x82276F2C;
	sub_822843C8(ctx, base);
	// b 0x822770d4
	goto loc_822770D4;
loc_82276F30:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82276f54
	if (!ctx.cr6.eq) goto loc_82276F54;
	// lwz r11,1384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82276f54
	if (!ctx.cr6.eq) goto loc_82276F54;
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276f64
	if (ctx.cr6.eq) goto loc_82276F64;
loc_82276F54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19104
	ctx.r4.s64 = ctx.r11.s64 + 19104;
	// bl 0x82271a00
	ctx.lr = 0x82276F64;
	sub_82271A00(ctx, base);
loc_82276F64:
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// lwz r10,1372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
	// stw r10,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r10.u32);
loc_82276F7C:
	// lbz r11,1561(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1561);
	// addi r30,r31,1520
	ctx.r30.s64 = ctx.r31.s64 + 1520;
	// lwz r9,1488(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lbz r7,1562(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1562);
	// lbz r6,1559(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1559);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lbz r8,1558(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1558);
	// stb r11,1531(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1531, ctx.r11.u8);
	// stw r9,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r9.u32);
	// stb r7,1530(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1530, ctx.r7.u8);
	// stb r6,1529(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1529, ctx.r6.u8);
	// stb r8,1528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1528, ctx.r8.u8);
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// lwz r9,1496(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r10,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r10.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82283360
	ctx.lr = 0x82276FDC;
	sub_82283360(ctx, base);
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1500(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r4,1496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// bl 0x8227b738
	ctx.lr = 0x82276FF4;
	sub_8227B738(ctx, base);
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277008
	if (ctx.cr6.eq) goto loc_82277008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82279218
	ctx.lr = 0x82277008;
	sub_82279218(ctx, base);
loc_82277008:
	// lbz r11,1555(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1555);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8227707c
	if (ctx.cr0.eq) goto loc_8227707C;
	// lwz r6,1376(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227707c
	if (ctx.cr0.eq) goto loc_8227707C;
	// lbz r5,1556(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bge cr6,0x8227703c
	if (!ctx.cr6.lt) goto loc_8227703C;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82283020
	ctx.lr = 0x8227703C;
	sub_82283020(ctx, base);
loc_8227703C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82277060
	if (ctx.cr6.eq) goto loc_82277060;
	// lbz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// addi r10,r27,28
	ctx.r10.s64 = ctx.r27.s64 + 28;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82282dc0
	ctx.lr = 0x82277060;
	sub_82282DC0(ctx, base);
loc_82277060:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822770ac
	if (ctx.cr6.eq) goto loc_822770AC;
	// lbz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// b 0x822770a4
	goto loc_822770A4;
loc_8227707C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82277094
	if (ctx.cr6.eq) goto loc_82277094;
	// li r5,255
	ctx.r5.s64 = 255;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282dc0
	ctx.lr = 0x82277094;
	sub_82282DC0(ctx, base);
loc_82277094:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822770ac
	if (ctx.cr6.eq) goto loc_822770AC;
	// li r5,255
	ctx.r5.s64 = 255;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_822770A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282dc0
	ctx.lr = 0x822770AC;
	sub_82282DC0(ctx, base);
loc_822770AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822843c8
	ctx.lr = 0x822770B4;
	sub_822843C8(ctx, base);
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822770d4
	if (ctx.cr6.eq) goto loc_822770D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,1556(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// lwz r4,1492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822770D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822770D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822770DC"))) PPC_WEAK_FUNC(sub_822770DC);
PPC_FUNC_IMPL(__imp__sub_822770DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822770E0"))) PPC_WEAK_FUNC(sub_822770E0);
PPC_FUNC_IMPL(__imp__sub_822770E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x822770E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82277590
	ctx.lr = 0x822770F8;
	sub_82277590(ctx, base);
	// lwz r28,1468(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1468);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,1472(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1472, ctx.r28.u32);
	// ble 0x8227713c
	if (!ctx.cr0.gt) goto loc_8227713C;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8227710C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82277134
	if (ctx.cr6.eq) goto loc_82277134;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_8227711C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82276c58
	ctx.lr = 0x8227712C;
	sub_82276C58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8227711c
	if (!ctx.cr0.eq) goto loc_8227711C;
loc_82277134:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x8227710c
	if (!ctx.cr0.eq) goto loc_8227710C;
loc_8227713C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82277144"))) PPC_WEAK_FUNC(sub_82277144);
PPC_FUNC_IMPL(__imp__sub_82277144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277148"))) PPC_WEAK_FUNC(sub_82277148);
PPC_FUNC_IMPL(__imp__sub_82277148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82277150;
	__savegprlr_28(ctx, base);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82277168
	if (ctx.cr6.eq) goto loc_82277168;
	// bl 0x82271c78
	ctx.lr = 0x82277168;
	sub_82271C78(ctx, base);
loc_82277168:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227717c
	if (ctx.cr6.eq) goto loc_8227717C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271c78
	ctx.lr = 0x8227717C;
	sub_82271C78(ctx, base);
loc_8227717C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// bl 0x8227b710
	ctx.lr = 0x82277188;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1500(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// bl 0x8227b710
	ctx.lr = 0x82277194;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// bl 0x8227b710
	ctx.lr = 0x822771A0;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// bl 0x8227b710
	ctx.lr = 0x822771AC;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1656(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// bl 0x8227b710
	ctx.lr = 0x822771B8;
	sub_8227B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// bl 0x8227b710
	ctx.lr = 0x822771C4;
	sub_8227B710(ctx, base);
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822771dc
	if (ctx.cr0.eq) goto loc_822771DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1540(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// bl 0x82271bd0
	ctx.lr = 0x822771DC;
	sub_82271BD0(ctx, base);
loc_822771DC:
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822771f4
	if (ctx.cr0.eq) goto loc_822771F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1628(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// bl 0x8227b710
	ctx.lr = 0x822771F4;
	sub_8227B710(ctx, base);
loc_822771F4:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277240
	if (ctx.cr6.eq) goto loc_82277240;
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r11,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r11.s64;
	// slw. r30,r10,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82277234
	if (!ctx.cr0.gt) goto loc_82277234;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82277218:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8227b710
	ctx.lr = 0x82277228;
	sub_8227B710(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82277218
	if (!ctx.cr0.eq) goto loc_82277218;
loc_82277234:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1604(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// bl 0x8227b710
	ctx.lr = 0x82277240;
	sub_8227B710(ctx, base);
loc_82277240:
	// addi r3,r31,1380
	ctx.r3.s64 = ctx.r31.s64 + 1380;
	// bl 0x822824e0
	ctx.lr = 0x82277248;
	sub_822824E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1344
	ctx.r5.s64 = 1344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82277258;
	sub_8233E4E0(ctx, base);
	// li r5,1696
	ctx.r5.s64 = 1696;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,1344(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,1348(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1348);
	// lwz r28,1352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1352);
	// bl 0x8233eaf0
	ctx.lr = 0x82277274;
	sub_8233EAF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1344
	ctx.r5.s64 = 1344;
	// stw r30,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r29.u32);
	// stw r28,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r28.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x82277290;
	sub_8233E4E0(ctx, base);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82277298"))) PPC_WEAK_FUNC(sub_82277298);
PPC_FUNC_IMPL(__imp__sub_82277298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x822772A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// beq cr6,0x822772cc
	if (ctx.cr6.eq) goto loc_822772CC;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_822772CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822772d8
	if (ctx.cr6.eq) goto loc_822772D8;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_822772D8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822772e4
	if (ctx.cr6.eq) goto loc_822772E4;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_822772E4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822772fc
	if (ctx.cr6.eq) goto loc_822772FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82277148
	ctx.lr = 0x822772FC;
	sub_82277148(ctx, base);
loc_822772FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82277310
	if (ctx.cr6.eq) goto loc_82277310;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b688
	ctx.lr = 0x8227730C;
	sub_8227B688(ctx, base);
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
loc_82277310:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82277324
	if (ctx.cr6.eq) goto loc_82277324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227b688
	ctx.lr = 0x82277320;
	sub_8227B688(ctx, base);
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
loc_82277324:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82277338
	if (ctx.cr6.eq) goto loc_82277338;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8227b688
	ctx.lr = 0x82277334;
	sub_8227B688(ctx, base);
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_82277338:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82277340"))) PPC_WEAK_FUNC(sub_82277340);
PPC_FUNC_IMPL(__imp__sub_82277340) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227735c
	if (ctx.cr6.eq) goto loc_8227735C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8227735c
	if (ctx.cr6.eq) goto loc_8227735C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// and r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 & ctx.r5.u64;
	// blr 
	return;
loc_8227735C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277364"))) PPC_WEAK_FUNC(sub_82277364);
PPC_FUNC_IMPL(__imp__sub_82277364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277368"))) PPC_WEAK_FUNC(sub_82277368);
PPC_FUNC_IMPL(__imp__sub_82277368) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82277380
	if (ctx.cr6.eq) goto loc_82277380;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82277380
	if (ctx.cr6.eq) goto loc_82277380;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// blr 
	return;
loc_82277380:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277388"))) PPC_WEAK_FUNC(sub_82277388);
PPC_FUNC_IMPL(__imp__sub_82277388) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822773a0
	if (ctx.cr6.eq) goto loc_822773A0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822773a0
	if (ctx.cr6.eq) goto loc_822773A0;
	// lbz r3,29(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// blr 
	return;
loc_822773A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822773A8"))) PPC_WEAK_FUNC(sub_822773A8);
PPC_FUNC_IMPL(__imp__sub_822773A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822773dc
	if (ctx.cr6.eq) goto loc_822773DC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822773dc
	if (ctx.cr6.eq) goto loc_822773DC;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822773dc
	if (ctx.cr0.eq) goto loc_822773DC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822773dc
	if (ctx.cr6.eq) goto loc_822773DC;
	// lfs f0,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// blr 
	return;
loc_822773DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822773E4"))) PPC_WEAK_FUNC(sub_822773E4);
PPC_FUNC_IMPL(__imp__sub_822773E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822773E8"))) PPC_WEAK_FUNC(sub_822773E8);
PPC_FUNC_IMPL(__imp__sub_822773E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227741c
	if (ctx.cr6.eq) goto loc_8227741C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8227741c
	if (ctx.cr6.eq) goto loc_8227741C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227741c
	if (ctx.cr0.eq) goto loc_8227741C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8227741c
	if (ctx.cr6.eq) goto loc_8227741C;
	// lbz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 44);
	// li r3,2048
	ctx.r3.s64 = 2048;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8227741C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277424"))) PPC_WEAK_FUNC(sub_82277424);
PPC_FUNC_IMPL(__imp__sub_82277424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277428"))) PPC_WEAK_FUNC(sub_82277428);
PPC_FUNC_IMPL(__imp__sub_82277428) {
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
	// beq cr6,0x82277520
	if (ctx.cr6.eq) goto loc_82277520;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82277520
	if (ctx.cr6.eq) goto loc_82277520;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82277520
	if (ctx.cr6.eq) goto loc_82277520;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82277520
	if (ctx.cr6.eq) goto loc_82277520;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82277520
	if (ctx.cr6.eq) goto loc_82277520;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82277520
	if (ctx.cr6.eq) goto loc_82277520;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82277494
	if (ctx.cr6.eq) goto loc_82277494;
	// lbz r11,26(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 26);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82277494:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822774a8
	if (ctx.cr6.eq) goto loc_822774A8;
	// lbz r10,27(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 27);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822774A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822774b8
	if (ctx.cr6.eq) goto loc_822774B8;
	// lbz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_822774B8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822774cc
	if (!ctx.cr6.eq) goto loc_822774CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822774d4
	goto loc_822774D4;
loc_822774CC:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_822774D4:
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822774e0
	if (ctx.cr0.eq) goto loc_822774E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822774E0:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// ori r10,r9,65535
	ctx.r10.u64 = ctx.r9.u64 | 65535;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// twllei r11,0
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82277518
	if (!ctx.cr6.gt) goto loc_82277518;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,19208
	ctx.r4.s64 = ctx.r11.s64 + 19208;
	// bl 0x82271a38
	ctx.lr = 0x82277518;
	sub_82271A38(ctx, base);
loc_82277518:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82277524
	goto loc_82277524;
loc_82277520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82277524:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277534"))) PPC_WEAK_FUNC(sub_82277534);
PPC_FUNC_IMPL(__imp__sub_82277534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277538"))) PPC_WEAK_FUNC(sub_82277538);
PPC_FUNC_IMPL(__imp__sub_82277538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277548"))) PPC_WEAK_FUNC(sub_82277548);
PPC_FUNC_IMPL(__imp__sub_82277548) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1559(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1559);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277564"))) PPC_WEAK_FUNC(sub_82277564);
PPC_FUNC_IMPL(__imp__sub_82277564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277568"))) PPC_WEAK_FUNC(sub_82277568);
PPC_FUNC_IMPL(__imp__sub_82277568) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1559(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1559);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// li r10,8
	ctx.r10.s64 = 8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r10,1560(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1560, ctx.r10.u8);
	// stw r11,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227758C"))) PPC_WEAK_FUNC(sub_8227758C);
PPC_FUNC_IMPL(__imp__sub_8227758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277590"))) PPC_WEAK_FUNC(sub_82277590);
PPC_FUNC_IMPL(__imp__sub_82277590) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,1555(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1555);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822775b4
	if (ctx.cr0.eq) goto loc_822775B4;
	// lwz r10,1376(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// li r3,7
	ctx.r3.s64 = 7;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,1376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1376, ctx.r10.u32);
	// blr 
	return;
loc_822775B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822775BC"))) PPC_WEAK_FUNC(sub_822775BC);
PPC_FUNC_IMPL(__imp__sub_822775BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822775C0"))) PPC_WEAK_FUNC(sub_822775C0);
PPC_FUNC_IMPL(__imp__sub_822775C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r10,1566(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1566, ctx.r10.u16);
	// stw r11,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// lwz r11,1372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	// bne cr6,0x822775e8
	if (!ctx.cr6.eq) goto loc_822775E8;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x822775ec
	goto loc_822775EC;
loc_822775E8:
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_822775EC:
	// stw r11,1372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1372, ctx.r11.u32);
	// lbz r11,1558(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1558);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82277604
	if (!ctx.cr6.eq) goto loc_82277604;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1563(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1563, ctx.r10.u8);
loc_82277604:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,1559(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1559);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,1563(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1563, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277624"))) PPC_WEAK_FUNC(sub_82277624);
PPC_FUNC_IMPL(__imp__sub_82277624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277628"))) PPC_WEAK_FUNC(sub_82277628);
PPC_FUNC_IMPL(__imp__sub_82277628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw. r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_8227764C:
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8227764c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227764C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277664"))) PPC_WEAK_FUNC(sub_82277664);
PPC_FUNC_IMPL(__imp__sub_82277664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277668"))) PPC_WEAK_FUNC(sub_82277668);
PPC_FUNC_IMPL(__imp__sub_82277668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm. r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x822776e4
	if (!ctx.cr6.eq) goto loc_822776E4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x822776b4
	if (!ctx.cr6.eq) goto loc_822776B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_8227769C:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,3(r11)
	ea = 3 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8227769c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227769C;
	// blr 
	return;
loc_822776B4:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
loc_822776CC:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stbu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822776cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822776CC;
	// blr 
	return;
loc_822776E4:
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x8227772c
	if (!ctx.cr6.eq) goto loc_8227772C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82277704:
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r11,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stbu r7,6(r10)
	ea = 6 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82277704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277704;
	// blr 
	return;
loc_8227772C:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r4,-3
	ctx.r10.s64 = ctx.r4.s64 + -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82277744:
	// lbz r11,3(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r11,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r11.u8);
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// stb r8,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r8.u8);
	// stbu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82277744
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227776C"))) PPC_WEAK_FUNC(sub_8227776C);
PPC_FUNC_IMPL(__imp__sub_8227776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277770"))) PPC_WEAK_FUNC(sub_82277770);
PPC_FUNC_IMPL(__imp__sub_82277770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,9024(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9024);
	// fmsub f13,f1,f2,f0
	ctx.f13.f64 = ctx.f1.f64 * ctx.f2.f64 - ctx.f0.f64;
	// lfd f0,19264(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 19264);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8227779c
	if (!ctx.cr6.gt) goto loc_8227779C;
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
loc_8227779C:
	// frsp f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64));
	// stfs f0,1584(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1584, temp.u32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,1588(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1588, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822777B0"))) PPC_WEAK_FUNC(sub_822777B0);
PPC_FUNC_IMPL(__imp__sub_822777B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822777C0"))) PPC_WEAK_FUNC(sub_822777C0);
PPC_FUNC_IMPL(__imp__sub_822777C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// li r10,8
	ctx.r10.s64 = 8;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82277830
	if (ctx.cr0.eq) goto loc_82277830;
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82277804
	if (!ctx.cr6.eq) goto loc_82277804;
	// lhz r11,1546(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1546);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r10.u8);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// sth r9,22(r4)
	PPC_STORE_U16(ctx.r4.u32 + 22, ctx.r9.u16);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r11,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r11.u8);
	// b 0x82277830
	goto loc_82277830;
loc_82277804:
	// lhz r9,1546(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1546);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82277818
	if (ctx.cr0.eq) goto loc_82277818;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r11.u8);
loc_82277818:
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82277828
	if (!ctx.cr6.lt) goto loc_82277828;
	// stb r10,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r10.u8);
loc_82277828:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,22(r4)
	PPC_STORE_U16(ctx.r4.u32 + 22, ctx.r11.u16);
loc_82277830:
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82277844
	if (ctx.cr0.eq) goto loc_82277844;
	// lfs f0,1584(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
loc_82277844:
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82277860
	if (ctx.cr0.eq) goto loc_82277860;
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82277860
	if (!ctx.cr6.eq) goto loc_82277860;
	// stb r10,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r10.u8);
loc_82277860:
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822778a0
	if (ctx.cr0.eq) goto loc_822778A0;
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82277884
	if (ctx.cr6.eq) goto loc_82277884;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x822778a0
	if (!ctx.cr6.eq) goto loc_822778A0;
loc_82277884:
	// lwz r11,1652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822778a0
	if (ctx.cr6.eq) goto loc_822778A0;
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x822778a0
	if (!ctx.cr6.eq) goto loc_822778A0;
	// stb r9,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r9.u8);
loc_822778A0:
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822778bc
	if (ctx.cr0.eq) goto loc_822778BC;
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x822778bc
	if (!ctx.cr6.lt) goto loc_822778BC;
	// stb r10,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r10.u8);
loc_822778BC:
	// lbz r10,25(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x822778d8
	if (ctx.cr6.eq) goto loc_822778D8;
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822778d8
	if (ctx.cr0.eq) goto loc_822778D8;
	// stb r9,29(r4)
	PPC_STORE_U8(ctx.r4.u32 + 29, ctx.r9.u8);
	// b 0x822778e0
	goto loc_822778E0;
loc_822778D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,29(r4)
	PPC_STORE_U8(ctx.r4.u32 + 29, ctx.r11.u8);
loc_822778E0:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822778f4
	if (ctx.cr0.eq) goto loc_822778F4;
	// lbz r11,29(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,29(r4)
	PPC_STORE_U8(ctx.r4.u32 + 29, ctx.r11.u8);
loc_822778F4:
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227791c
	if (ctx.cr0.eq) goto loc_8227791C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82277910
	if (ctx.cr6.eq) goto loc_82277910;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8227791c
	if (!ctx.cr6.eq) goto loc_8227791C;
loc_82277910:
	// lbz r11,29(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,29(r4)
	PPC_STORE_U8(ctx.r4.u32 + 29, ctx.r11.u8);
loc_8227791C:
	// lbz r10,29(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stb r10,30(r4)
	PPC_STORE_U8(ctx.r4.u32 + 30, ctx.r10.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277948"))) PPC_WEAK_FUNC(sub_82277948);
PPC_FUNC_IMPL(__imp__sub_82277948) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82277a38
	if (ctx.cr6.eq) goto loc_82277A38;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x822779d4
	if (ctx.cr6.eq) goto loc_822779D4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82277a94
	if (!ctx.cr6.eq) goto loc_82277A94;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r7,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r7.s64 = 1 - ctx.r8.s64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277a94
	if (ctx.cr6.eq) goto loc_82277A94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8227799C:
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// srw r10,r7,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// bne cr6,0x822779c4
	if (!ctx.cr6.eq) goto loc_822779C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x822779c8
	goto loc_822779C8;
loc_822779C4:
	// li r10,4
	ctx.r10.s64 = 4;
loc_822779C8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// bdnz 0x8227799c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227799C;
	// b 0x82277a94
	goto loc_82277A94;
loc_822779D4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r7,r8,3
	ctx.xer.ca = ctx.r8.u32 <= 3;
	ctx.r7.s64 = 3 - ctx.r8.s64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277a94
	if (ctx.cr6.eq) goto loc_82277A94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82277A00:
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// srw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// bne cr6,0x82277a28
	if (!ctx.cr6.eq) goto loc_82277A28;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x82277a2c
	goto loc_82277A2C;
loc_82277A28:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82277A2C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// bdnz 0x82277a00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277A00;
	// b 0x82277a94
	goto loc_82277A94;
loc_82277A38:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfic r10,r10,7
	ctx.xer.ca = ctx.r10.u32 <= 7;
	ctx.r10.s64 = 7 - ctx.r10.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277a94
	if (ctx.cr6.eq) goto loc_82277A94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82277A60:
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// srw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// bne cr6,0x82277a88
	if (!ctx.cr6.eq) goto loc_82277A88;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x82277a8c
	goto loc_82277A8C;
loc_82277A88:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82277A8C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// bdnz 0x82277a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277A60;
loc_82277A94:
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwinm r8,r10,3,24,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xF8;
	// stb r9,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r9.u8);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stb r8,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277AB4"))) PPC_WEAK_FUNC(sub_82277AB4);
PPC_FUNC_IMPL(__imp__sub_82277AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277AB8"))) PPC_WEAK_FUNC(sub_82277AB8);
PPC_FUNC_IMPL(__imp__sub_82277AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// beq cr6,0x82277ce8
	if (ctx.cr6.eq) goto loc_82277CE8;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r8,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq 0x82277b0c
	if (ctx.cr0.eq) goto loc_82277B0C;
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r10,3
	ctx.r10.s64 = 3;
	// lbz r4,1(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r31,2(r5)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// subf r4,r4,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r4.s64;
	// subf r31,r31,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// stw r4,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r4.u32);
	// stw r31,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r31.u32);
	// b 0x82277b1c
	goto loc_82277B1C;
loc_82277B0C:
	// lbz r9,3(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r4,9(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_82277B1C:
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// rlwinm. r8,r8,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82277b48
	if (ctx.cr0.eq) goto loc_82277B48;
	// lbz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,9(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// stwx r9,r8,r4
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r9,-32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
loc_82277B48:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82277b80
	if (!ctx.cr6.gt) goto loc_82277B80;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82277B58:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82277b70
	if (ctx.cr6.gt) goto loc_82277B70;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// b 0x82277b74
	goto loc_82277B74;
loc_82277B70:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82277B74:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82277b58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277B58;
	// lwz r9,-32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
loc_82277B80:
	// clrlwi. r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82277ce8
	if (ctx.cr0.eq) goto loc_82277CE8;
	// lbz r8,9(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x82277cbc
	if (ctx.cr6.eq) goto loc_82277CBC;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// beq cr6,0x82277c64
	if (ctx.cr6.eq) goto loc_82277C64;
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// beq cr6,0x82277c18
	if (ctx.cr6.eq) goto loc_82277C18;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// bne cr6,0x82277ce8
	if (!ctx.cr6.eq) goto loc_82277CE8;
	// mullw. r8,r7,r10
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82277ce8
	if (ctx.cr0.eq) goto loc_82277CE8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82277BBC:
	// divwu r8,r9,r10
	ctx.r8.u32 = ctx.r9.u32 / ctx.r10.u32;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// twllei r10,0
	// lwzx r6,r4,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// srw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82277bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277BBC;
	// b 0x82277ce8
	goto loc_82277CE8;
loc_82277C18:
	// mullw. r9,r7,r10
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x82277ce8
	if (ctx.cr0.eq) goto loc_82277CE8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82277C2C:
	// divwu r9,r8,r10
	ctx.r9.u32 = ctx.r8.u32 / ctx.r10.u32;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// twllei r10,0
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82277c2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277C2C;
	// b 0x82277ce8
	goto loc_82277CE8;
loc_82277C64:
	// li r8,240
	ctx.r8.s64 = 240;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,15
	ctx.r7.s64 = 15;
	// sraw r8,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r8.s64 = ctx.r8.s32 >> temp.u32;
	// rlwinm r8,r8,0,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0;
	// sraw r7,r7,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r7.s64 = ctx.r7.s32 >> temp.u32;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// beq cr6,0x82277ce8
	if (ctx.cr6.eq) goto loc_82277CE8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82277C9C:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82277c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277C9C;
	// b 0x82277ce8
	goto loc_82277CE8;
loc_82277CBC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82277ce8
	if (ctx.cr6.eq) goto loc_82277CE8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82277CD0:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r12,-43
	ctx.r12.s64 = -43;
	// rlwinm r10,r10,31,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7F;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82277cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277CD0;
loc_82277CE8:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277CF4"))) PPC_WEAK_FUNC(sub_82277CF4);
PPC_FUNC_IMPL(__imp__sub_82277CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277CF8"))) PPC_WEAK_FUNC(sub_82277CF8);
PPC_FUNC_IMPL(__imp__sub_82277CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mullw. r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82277d2c
	if (ctx.cr0.eq) goto loc_82277D2C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
loc_82277D20:
	// lbzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82277d20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277D20;
loc_82277D2C:
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,3,24,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xF8;
	// stb r10,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r10.u8);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stb r8,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277D50"))) PPC_WEAK_FUNC(sub_82277D50);
PPC_FUNC_IMPL(__imp__sub_82277D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r5,r5,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82277e90
	if (!ctx.cr0.eq) goto loc_82277E90;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82277df0
	if (!ctx.cr6.eq) goto loc_82277DF0;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm. r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq 0x82277dc4
	if (ctx.cr0.eq) goto loc_82277DC4;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82277da8
	if (!ctx.cr6.gt) goto loc_82277DA8;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82277D98:
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82277d98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277D98;
loc_82277DA8:
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,16
	ctx.r11.s64 = 16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_82277DB8:
	// stb r10,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// b 0x8227800c
	goto loc_8227800C;
loc_82277DC4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82277de0
	if (ctx.cr6.eq) goto loc_82277DE0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82277DD0:
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82277dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277DD0;
loc_82277DE0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82278004
	goto loc_82278004;
loc_82277DF0:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm. r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x82277e58
	if (ctx.cr0.eq) goto loc_82277E58;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82277e38
	if (!ctx.cr6.gt) goto loc_82277E38;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82277E1C:
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82277e1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277E1C;
loc_82277E38:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,32
	ctx.r8.s64 = 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82277E44:
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// stb r10,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// stb r8,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// b 0x8227800c
	goto loc_8227800C;
loc_82277E58:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82277e80
	if (ctx.cr6.eq) goto loc_82277E80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82277E64:
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82277e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277E64;
loc_82277E80:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82278004
	goto loc_82278004;
loc_82277E90:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82277f34
	if (!ctx.cr6.eq) goto loc_82277F34;
	// rlwinm. r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 * 3;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq 0x82277efc
	if (ctx.cr0.eq) goto loc_82277EFC;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82277ee8
	if (!ctx.cr6.gt) goto loc_82277EE8;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82277EC8:
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82277ec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277EC8;
loc_82277EE8:
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,32
	ctx.r11.s64 = 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82277db8
	goto loc_82277DB8;
loc_82277EFC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82277f28
	if (ctx.cr6.eq) goto loc_82277F28;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82277F08:
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82277f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277F08;
loc_82277F28:
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82278000
	goto loc_82278000;
loc_82277F34:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm. r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r11,r9,6
	ctx.r11.s64 = ctx.r9.s64 * 6;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x82277fb0
	if (ctx.cr0.eq) goto loc_82277FB0;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82277fa0
	if (!ctx.cr6.gt) goto loc_82277FA0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82277F64:
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82277f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277F64;
loc_82277FA0:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82277e44
	goto loc_82277E44;
loc_82277FB0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82277ff8
	if (ctx.cr6.eq) goto loc_82277FF8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82277FBC:
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82277fbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82277FBC;
loc_82277FF8:
	// li r10,64
	ctx.r10.s64 = 64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_82278000:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82278004:
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
loc_8227800C:
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82278014"))) PPC_WEAK_FUNC(sub_82278014);
PPC_FUNC_IMPL(__imp__sub_82278014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82278018"))) PPC_WEAK_FUNC(sub_82278018);
PPC_FUNC_IMPL(__imp__sub_82278018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82278020;
	__savegprlr_24(ctx, base);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bgt cr6,0x8227803c
	if (ctx.cr6.gt) goto loc_8227803C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8227804c
	if (!ctx.cr6.eq) goto loc_8227804C;
loc_8227803C:
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x8227848c
	if (!ctx.cr6.eq) goto loc_8227848C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8227848c
	if (ctx.cr6.eq) goto loc_8227848C;
loc_8227804C:
	// lbz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x822782e0
	if (ctx.cr0.eq) goto loc_822782E0;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x822781e4
	if (ctx.cr6.eq) goto loc_822781E4;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// beq cr6,0x8227816c
	if (ctx.cr6.eq) goto loc_8227816C;
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// bne cr6,0x8227848c
	if (!ctx.cr6.eq) goto loc_8227848C;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x822780b4
	if (!ctx.cr6.eq) goto loc_822780B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227848c
	if (ctx.cr6.eq) goto loc_8227848C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82278084:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82278084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278084;
	// b 0x8227848c
	goto loc_8227848C;
loc_822780B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227848c
	if (ctx.cr6.eq) goto loc_8227848C;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822780C4:
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lhzx r7,r7,r5
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r5,r7,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lhzx r7,r7,r5
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r5,r7,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r7,r7,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r3.u8 & 0x3F));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lhzx r7,r7,r5
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r5,r7,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// bdnz 0x822780c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822780C4;
	// b 0x8227848c
	goto loc_8227848C;
loc_8227816C:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x82278198
	if (!ctx.cr6.eq) goto loc_82278198;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227848c
	if (ctx.cr6.eq) goto loc_8227848C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
loc_82278184:
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// stbu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82278184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278184;
	// b 0x8227848c
	goto loc_8227848C;
loc_82278198:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227848c
	if (ctx.cr6.eq) goto loc_8227848C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r10,-3
	ctx.r11.s64 = ctx.r10.s64 + -3;
loc_822781AC:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lhzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// stbu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822781ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822781AC;
	// b 0x8227848c
	goto loc_8227848C;
loc_822781E4:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x82278228
	if (!ctx.cr6.eq) goto loc_82278228;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227848c
	if (ctx.cr6.eq) goto loc_8227848C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822781F8:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x822781f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822781F8;
	// b 0x8227848c
	goto loc_8227848C;
loc_82278228:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227848c
	if (ctx.cr6.eq) goto loc_8227848C;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82278238:
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r7,r5,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lhzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lhzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lhzx r7,r7,r5
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r5,r7,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// bdnz 0x82278238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278238;
	// b 0x8227848c
	goto loc_8227848C;
loc_822782E0:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x822783b0
	if (!ctx.cr6.eq) goto loc_822783B0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822783b0
	if (ctx.cr6.eq) goto loc_822783B0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82278304:
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r4,r8,30
	ctx.r4.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r31,r8,2,28,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r30,r8,0,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// or r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 | ctx.r4.u64;
	// rlwinm r29,r8,0,26,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30;
	// rlwinm r28,r8,2,26,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x30;
	// srawi r27,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r30.s32 >> 2;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// or r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 | ctx.r30.u64;
	// srawi r26,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r29.s32 >> 2;
	// or r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 | ctx.r4.u64;
	// or r26,r26,r29
	ctx.r26.u64 = ctx.r26.u64 | ctx.r29.u64;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r8,0,0,25
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r26,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 2;
	// or r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 | ctx.r27.u64;
	// srawi r24,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r25.s32 >> 2;
	// or r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 | ctx.r4.u64;
	// rlwinm r8,r8,2,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC0;
	// or r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 | ctx.r30.u64;
	// or r31,r24,r25
	ctx.r31.u64 = ctx.r24.u64 | ctx.r25.u64;
	// or r8,r26,r8
	ctx.r8.u64 = ctx.r26.u64 | ctx.r8.u64;
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// lbzx r4,r4,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | ctx.r29.u64;
	// lbzx r30,r30,r5
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// or r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 | ctx.r25.u64;
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// andi. r30,r30,207
	ctx.r30.u64 = ctx.r30.u64 & 207;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// lbzx r8,r8,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// or r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 | ctx.r4.u64;
	// or r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 | ctx.r25.u64;
	// rlwinm r4,r4,30,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3F;
	// andi. r8,r8,195
	ctx.r8.u64 = ctx.r8.u64 & 195;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// lbzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// rlwimi r4,r8,30,26,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 30) & 0x3F) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFC0);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82278304
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278304;
loc_822783B0:
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x82278410
	if (!ctx.cr6.eq) goto loc_82278410;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227848c
	if (ctx.cr6.eq) goto loc_8227848C;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822783D8:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// rlwinm r10,r10,4,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF0;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lbzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// rlwimi r9,r10,28,28,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822783d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822783D8;
	// b 0x8227848c
	goto loc_8227848C;
loc_82278410:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x8227843c
	if (!ctx.cr6.eq) goto loc_8227843C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227848c
	if (ctx.cr6.eq) goto loc_8227848C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82278428:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82278428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278428;
	// b 0x8227848c
	goto loc_8227848C;
loc_8227843C:
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x8227848c
	if (!ctx.cr6.eq) goto loc_8227848C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227848c
	if (ctx.cr6.eq) goto loc_8227848C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82278458:
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lhzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stbu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82278458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278458;
loc_8227848C:
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82278490"))) PPC_WEAK_FUNC(sub_82278490);
PPC_FUNC_IMPL(__imp__sub_82278490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82278498;
	__savegprlr_29(ctx, base);
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82278728
	if (!ctx.cr6.eq) goto loc_82278728;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r31,8
	ctx.r31.s64 = 8;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82278600
	if (!ctx.cr6.lt) goto loc_82278600;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82278594
	if (ctx.cr6.eq) goto loc_82278594;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8227852c
	if (ctx.cr6.eq) goto loc_8227852C;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x822785f4
	if (!ctx.cr6.eq) goto loc_822785F4;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r10,r11,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822785f4
	if (ctx.cr6.eq) goto loc_822785F4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822784F4:
	// lbz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// srw r30,r30,r29
	ctx.r30.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r29.u8 & 0x3F));
	// clrlwi r30,r30,28
	ctx.r30.u64 = ctx.r30.u32 & 0xF;
	// stb r30,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r30.u8);
	// bne cr6,0x8227851c
	if (!ctx.cr6.eq) goto loc_8227851C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82278520
	goto loc_82278520;
loc_8227851C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82278520:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x822784f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822784F4;
	// b 0x822785f4
	goto loc_822785F4;
loc_8227852C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subfic r30,r8,3
	ctx.xer.ca = ctx.r8.u32 <= 3;
	ctx.r30.s64 = 3 - ctx.r8.s64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822785f4
	if (ctx.cr6.eq) goto loc_822785F4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8227855C:
	// lbz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// srw r30,r30,r29
	ctx.r30.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r29.u8 & 0x3F));
	// clrlwi r30,r30,30
	ctx.r30.u64 = ctx.r30.u32 & 0x3;
	// stb r30,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r30.u8);
	// bne cr6,0x82278584
	if (!ctx.cr6.eq) goto loc_82278584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82278588
	goto loc_82278588;
loc_82278584:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82278588:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x8227855c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227855C;
	// b 0x822785f4
	goto loc_822785F4;
loc_82278594:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r30,r8,29
	ctx.r30.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subfic r10,r30,7
	ctx.xer.ca = ctx.r30.u32 <= 7;
	ctx.r10.s64 = 7 - ctx.r30.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822785f4
	if (ctx.cr6.eq) goto loc_822785F4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822785C0:
	// lbz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// srw r30,r30,r29
	ctx.r30.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r29.u8 & 0x3F));
	// clrlwi r30,r30,31
	ctx.r30.u64 = ctx.r30.u32 & 0x1;
	// stb r30,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r30.u8);
	// bne cr6,0x822785e8
	if (!ctx.cr6.eq) goto loc_822785E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x822785ec
	goto loc_822785EC;
loc_822785E8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822785EC:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x822785c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822785C0;
loc_822785F4:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r31,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r31.u8);
	// stb r31,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r31.u8);
loc_82278600:
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82278728
	if (!ctx.cr6.eq) goto loc_82278728;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beq cr6,0x822786a8
	if (ctx.cr6.eq) goto loc_822786A8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// beq cr6,0x82278694
	if (ctx.cr6.eq) goto loc_82278694;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82278638:
	// lbz r11,-1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// li r4,255
	ctx.r4.s64 = 255;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8227864c
	if (!ctx.cr6.lt) goto loc_8227864C;
	// lbzx r4,r11,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
loc_8227864C:
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stbu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// lbzu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// lbzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// stbu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// bdnz 0x82278638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278638;
loc_82278694:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x82278718
	goto loc_82278718;
loc_822786A8:
	// mulli r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 * 3;
	// add r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82278708
	if (ctx.cr6.eq) goto loc_82278708;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
loc_822786C8:
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// lbzu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// lbzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bdnz 0x822786c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822786C8;
loc_82278708:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
loc_82278718:
	// stb r9,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r9.u8);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// stb r31,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r31.u8);
loc_82278728:
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227872C"))) PPC_WEAK_FUNC(sub_8227872C);
PPC_FUNC_IMPL(__imp__sub_8227872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82278730"))) PPC_WEAK_FUNC(sub_82278730);
PPC_FUNC_IMPL(__imp__sub_82278730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82278738;
	__savegprlr_29(ctx, base);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82278a20
	if (!ctx.cr0.eq) goto loc_82278A20;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8227875c
	if (ctx.cr6.eq) goto loc_8227875C;
	// lhz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// b 0x82278760
	goto loc_82278760;
loc_8227875C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82278760:
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r6,255
	ctx.r6.s64 = 255;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82278918
	if (!ctx.cr6.lt) goto loc_82278918;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82278890
	if (ctx.cr6.eq) goto loc_82278890;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82278804
	if (ctx.cr6.eq) goto loc_82278804;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82278908
	if (!ctx.cr6.eq) goto loc_82278908;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// mulli r30,r10,17
	ctx.r30.s64 = ctx.r10.s64 * 17;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r29,r7,2,29,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x4;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r7,r30,16
	ctx.r7.u64 = ctx.r30.u32 & 0xFFFF;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subfic r11,r29,4
	ctx.xer.ca = ctx.r29.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r29.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82278908
	if (ctx.cr6.eq) goto loc_82278908;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822787C4:
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// srw r11,r30,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r29.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r30,r11,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 | ctx.r11.u64;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// bne cr6,0x822787f4
	if (!ctx.cr6.eq) goto loc_822787F4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x822787f8
	goto loc_822787F8;
loc_822787F4:
	// li r11,4
	ctx.r11.s64 = 4;
loc_822787F8:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x822787c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822787C4;
	// b 0x82278908
	goto loc_82278908;
loc_82278804:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mulli r30,r10,85
	ctx.r30.s64 = ctx.r10.s64 * 85;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r29,r7,3
	ctx.xer.ca = ctx.r7.u32 <= 3;
	ctx.r29.s64 = 3 - ctx.r7.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r7,r30,16
	ctx.r7.u64 = ctx.r30.u32 & 0xFFFF;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82278908
	if (ctx.cr6.eq) goto loc_82278908;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82278840:
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// srw r30,r30,r29
	ctx.r30.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r29.u8 & 0x3F));
	// clrlwi r30,r30,30
	ctx.r30.u64 = ctx.r30.u32 & 0x3;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// or r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 | ctx.r30.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// or r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 | ctx.r30.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// or r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stb r30,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r30.u8);
	// bne cr6,0x82278880
	if (!ctx.cr6.eq) goto loc_82278880;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x82278884
	goto loc_82278884;
loc_82278880:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82278884:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x82278840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278840;
	// b 0x82278908
	goto loc_82278908;
loc_82278890:
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// mulli r30,r10,255
	ctx.r30.s64 = ctx.r10.s64 * 255;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r29,r7,29
	ctx.r29.u64 = ctx.r7.u32 & 0x7;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r7,r30,16
	ctx.r7.u64 = ctx.r30.u32 & 0xFFFF;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subfic r11,r29,7
	ctx.xer.ca = ctx.r29.u32 <= 7;
	ctx.r11.s64 = 7 - ctx.r29.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82278908
	if (ctx.cr6.eq) goto loc_82278908;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822788C8:
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// srw r30,r30,r29
	ctx.r30.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r29.u8 & 0x3F));
	// clrlwi r30,r30,31
	ctx.r30.u64 = ctx.r30.u32 & 0x1;
	// subfic r30,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r30.s64 = 0 - ctx.r30.s64;
	// subfe r30,r30,r30
	temp.u8 = (~ctx.r30.u32 + ctx.r30.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r30.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 & ctx.r6.u64;
	// stb r30,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r30.u8);
	// bne cr6,0x822788fc
	if (!ctx.cr6.eq) goto loc_822788FC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x82278900
	goto loc_82278900;
loc_822788FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82278900:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x822788c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822788C8;
loc_82278908:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
loc_82278918:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82278bd4
	if (ctx.cr6.eq) goto loc_82278BD4;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82278984
	if (!ctx.cr6.eq) goto loc_82278984;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82278a04
	if (ctx.cr6.eq) goto loc_82278A04;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
loc_82278958:
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8227896c
	if (!ctx.cr6.eq) goto loc_8227896C;
	// stb r31,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r31.u8);
	// b 0x82278970
	goto loc_82278970;
loc_8227896C:
	// stb r6,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r6.u8);
loc_82278970:
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82278958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278958;
	// b 0x82278a04
	goto loc_82278A04;
loc_82278984:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82278a04
	if (!ctx.cr6.eq) goto loc_82278A04;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x82278a04
	if (ctx.cr6.eq) goto loc_82278A04;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822789B4:
	// lbz r5,-1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// lbz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x822789dc
	if (!ctx.cr6.eq) goto loc_822789DC;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stbu r31,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// b 0x822789e4
	goto loc_822789E4;
loc_822789DC:
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
loc_822789E4:
	// lbz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x822789b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822789B4;
loc_82278A04:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,4
	ctx.r8.s64 = 4;
	// rlwinm r11,r11,1,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFE;
	// stb r10,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// b 0x82278bc4
	goto loc_82278BC4;
loc_82278A20:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82278bd4
	if (!ctx.cr6.eq) goto loc_82278BD4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82278bd4
	if (ctx.cr6.eq) goto loc_82278BD4;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82278ad0
	if (!ctx.cr6.eq) goto loc_82278AD0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x82278bac
	if (ctx.cr6.eq) goto loc_82278BAC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
loc_82278A68:
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lhz r7,2(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82278aa0
	if (!ctx.cr6.eq) goto loc_82278AA0;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lhz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82278aa0
	if (!ctx.cr6.eq) goto loc_82278AA0;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lhz r7,6(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82278aa0
	if (!ctx.cr6.eq) goto loc_82278AA0;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// b 0x82278aa4
	goto loc_82278AA4;
loc_82278AA0:
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
loc_82278AA4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bdnz 0x82278a68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278A68;
	// b 0x82278bac
	goto loc_82278BAC;
loc_82278AD0:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82278bac
	if (!ctx.cr6.eq) goto loc_82278BAC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x82278bac
	if (ctx.cr6.eq) goto loc_82278BAC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
loc_82278B04:
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r7,-5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -5);
	// lhz r4,2(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82278b64
	if (!ctx.cr6.eq) goto loc_82278B64;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lhz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82278b64
	if (!ctx.cr6.eq) goto loc_82278B64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lhz r4,6(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82278b64
	if (!ctx.cr6.eq) goto loc_82278B64;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stbu r31,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r10.u32 = ea;
	// b 0x82278b6c
	goto loc_82278B6C;
loc_82278B64:
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stbu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r10.u32 = ea;
loc_82278B6C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bdnz 0x82278b04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278B04;
loc_82278BAC:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r8,4
	ctx.r8.s64 = 4;
	// rlwinm r11,r11,2,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stb r8,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r8.u8);
loc_82278BC4:
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82278BD4:
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82278BD8"))) PPC_WEAK_FUNC(sub_82278BD8);
PPC_FUNC_IMPL(__imp__sub_82278BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x82278c40
	if (!ctx.cr6.eq) goto loc_82278C40;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82278c40
	if (ctx.cr6.eq) goto loc_82278C40;
	// lbz r8,9(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// bne cr6,0x82278c40
	if (!ctx.cr6.eq) goto loc_82278C40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82278c98
	if (ctx.cr6.eq) goto loc_82278C98;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_82278C10:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r8,r7,5,19,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 5) & 0x1F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE0FF);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r7,r8,2,17,26
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x7FE0) | (ctx.r7.u64 & 0xFFFFFFFFFFFF801F);
	// clrlwi r8,r7,17
	ctx.r8.u64 = ctx.r7.u32 & 0x7FFF;
	// lbzx r8,r8,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82278c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278C10;
	// b 0x82278c98
	goto loc_82278C98;
loc_82278C40:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bne cr6,0x82278cc8
	if (!ctx.cr6.eq) goto loc_82278CC8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82278cc8
	if (ctx.cr6.eq) goto loc_82278CC8;
	// lbz r8,9(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// bne cr6,0x82278cc8
	if (!ctx.cr6.eq) goto loc_82278CC8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82278c98
	if (ctx.cr6.eq) goto loc_82278C98;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82278C6C:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r8,r7,5,19,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 5) & 0x1F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE0FF);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwimi r7,r8,2,17,26
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x7FE0) | (ctx.r7.u64 & 0xFFFFFFFFFFFF801F);
	// clrlwi r8,r7,17
	ctx.r8.u64 = ctx.r7.u32 & 0x7FFF;
	// lbzx r8,r8,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82278c6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278C6C;
loc_82278C98:
	// li r11,3
	ctx.r11.s64 = 3;
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stb r8,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r8.u8);
	// stb r9,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r9.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82278CC8:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82278CF4:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82278cf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278CF4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82278D08"))) PPC_WEAK_FUNC(sub_82278D08);
PPC_FUNC_IMPL(__imp__sub_82278D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82278D10;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa38
	ctx.lr = 0x82278D18;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f13,1584(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f0,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82279084
	if (ctx.cr6.eq) goto loc_82279084;
	// lbz r11,1559(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1559);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82278ddc
	if (ctx.cr6.gt) goto loc_82278DDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1588(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1588);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,19312(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 19312);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82278d68
	if (!ctx.cr6.gt) goto loc_82278D68;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfd f0,9024(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9024);
	// fdiv f28,f0,f13
	ctx.f28.f64 = ctx.f0.f64 / ctx.f13.f64;
	// b 0x82278d6c
	goto loc_82278D6C;
loc_82278D68:
	// lfd f28,9024(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9024);
loc_82278D6C:
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227b6a0
	ctx.lr = 0x82278D78;
	sub_8227B6A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,1592(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1592, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfd f29,18456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 18456);
	// lfd f30,19304(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 19304);
	// lfd f31,19296(r9)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 19296);
loc_82278D98:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 * ctx.f31.f64;
	// bl 0x8233c318
	ctx.lr = 0x82278DB4;
	sub_8233C318(ctx, base);
	// fmadd f0,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f30.f64 + ctx.f29.f64;
	// lwz r11,1592(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1592);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r10,95(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x82278d98
	if (ctx.cr6.lt) goto loc_82278D98;
	// b 0x82279084
	goto loc_82279084;
loc_82278DDC:
	// lbz r11,1558(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1558);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82278e10
	if (ctx.cr0.eq) goto loc_82278E10;
	// lbz r11,1616(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1616);
	// lbz r10,1617(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1617);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82278dfc
	if (!ctx.cr6.gt) goto loc_82278DFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82278DFC:
	// lbz r10,1618(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1618);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82278e14
	if (!ctx.cr6.gt) goto loc_82278E14;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82278e14
	goto loc_82278E14;
loc_82278E10:
	// lbz r11,1619(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1619);
loc_82278E14:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r11.s64;
	// bgt cr6,0x82278e24
	if (ctx.cr6.gt) goto loc_82278E24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82278E24:
	// lwz r10,1376(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1376);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82278e3c
	if (ctx.cr0.eq) goto loc_82278E3C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x82278e3c
	if (!ctx.cr6.lt) goto loc_82278E3C;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82278E3C:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82278e48
	if (!ctx.cr6.gt) goto loc_82278E48;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82278E48:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lfs f0,1588(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1588);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// and r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lfd f12,19312(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 19312);
	// subfic r25,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r25.s64 = 8 - ctx.r29.s64;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// stw r11,1580(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1580, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// slw r24,r8,r25
	ctx.r24.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r25.u8 & 0x3F));
	// addi r11,r11,9024
	ctx.r11.s64 = ctx.r11.s64 + 9024;
	// lfd f31,0(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ble cr6,0x82278e94
	if (!ctx.cr6.gt) goto loc_82278E94;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdiv f30,f31,f0
	ctx.f30.f64 = ctx.f31.f64 / ctx.f0.f64;
	// b 0x82278e98
	goto loc_82278E98;
loc_82278E94:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82278E98:
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227b6a0
	ctx.lr = 0x82278EA4;
	sub_8227B6A0(ctx, base);
	// lwz r11,1376(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1376);
	// stw r3,1604(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1604, ctx.r3.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// andi. r11,r11,1152
	ctx.r11.u64 = ctx.r11.u64 & 1152;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82278fd8
	if (ctx.cr0.eq) goto loc_82278FD8;
	// ble cr6,0x82278ee8
	if (!ctx.cr6.gt) goto loc_82278EE8;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82278EC8:
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227b6a0
	ctx.lr = 0x82278ED4;
	sub_8227B6A0(ctx, base);
	// lwz r11,1604(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1604);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82278ec8
	if (!ctx.cr0.eq) goto loc_82278EC8;
loc_82278EE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdiv f29,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64 / ctx.f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r26,r24,8,0,23
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFFFFFF00;
	// li r31,0
	ctx.r31.s64 = 0;
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f30,19288(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 19288);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfd f31,18456(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 18456);
	// fcfid f28,f0
	ctx.f28.f64 = double(ctx.f0.s64);
	// li r27,255
	ctx.r27.s64 = 255;
loc_82278F18:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fadd f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 + ctx.f31.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * ctx.f30.f64;
	// bl 0x8233c318
	ctx.lr = 0x82278F38;
	sub_8233C318(ctx, base);
	// fmul f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f28.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82278f90
	if (ctx.cr6.gt) goto loc_82278F90;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// sraw r9,r27,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r27.s32 < 0) & (((ctx.r27.s32 >> temp.u32) << temp.u32) != ctx.r27.s32);
	ctx.r9.s64 = ctx.r27.s32 >> temp.u32;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82278F6C:
	// and r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 & ctx.r31.u64;
	// lwz r8,1604(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1604);
	// srw r7,r31,r25
	ctx.r7.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r25.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// sthx r10,r11,r7
	PPC_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u16);
	// bdnz 0x82278f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278F6C;
loc_82278F90:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x82278f18
	if (ctx.cr6.lt) goto loc_82278F18;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82279084
	if (!ctx.cr6.lt) goto loc_82279084;
	// sraw r11,r27,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r27.s32 < 0) & (((ctx.r27.s32 >> temp.u32) << temp.u32) != ctx.r27.s32);
	ctx.r11.s64 = ctx.r27.s32 >> temp.u32;
loc_82278FA8:
	// and r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	// lwz r9,1604(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1604);
	// srw r8,r31,r25
	ctx.r8.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r25.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// sthx r7,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u16);
	// blt cr6,0x82278fa8
	if (ctx.cr6.lt) goto loc_82278FA8;
	// b 0x82279084
	goto loc_82279084;
loc_82278FD8:
	// li r27,0
	ctx.r27.s64 = 0;
	// ble cr6,0x82279084
	if (!ctx.cr6.gt) goto loc_82279084;
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r26,r11,4240
	ctx.r26.s64 = ctx.r11.s64 + 4240;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r25,r29,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f29,19280(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + 19280);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfd f28,19272(r11)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 19272);
	// lfd f31,18456(r9)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 18456);
loc_82279008:
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227b6a0
	ctx.lr = 0x82279014;
	sub_8227B6A0(ctx, base);
	// lwz r11,1604(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1604);
	// li r31,0
	ctx.r31.s64 = 0;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r11,r25,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// rlwinm r29,r11,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
loc_8227902C:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f1,f0,f29
	ctx.f1.f64 = ctx.f0.f64 * ctx.f29.f64;
	// bl 0x8233c318
	ctx.lr = 0x82279048;
	sub_8233C318(ctx, base);
	// fmadd f0,f1,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f28.f64 + ctx.f31.f64;
	// lwz r11,1604(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1604);
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r31,512
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 512, ctx.xer);
	// blt cr6,0x8227902c
	if (ctx.cr6.lt) goto loc_8227902C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82279008
	if (ctx.cr6.lt) goto loc_82279008;
loc_82279084:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa84
	ctx.lr = 0x82279090;
	__restfpr_28(ctx, base);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82279094"))) PPC_WEAK_FUNC(sub_82279094);
PPC_FUNC_IMPL(__imp__sub_82279094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82279098"))) PPC_WEAK_FUNC(sub_82279098);
PPC_FUNC_IMPL(__imp__sub_82279098) {
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
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r30,1558(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1558);
	// rlwinm r11,r11,0,9,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FE000;
	// rlwinm. r11,r11,0,18,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFE03FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227911c
	if (ctx.cr0.eq) goto loc_8227911C;
	// bl 0x82278d08
	ctx.lr = 0x822790C8;
	sub_82278D08(ctx, base);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x8227911c
	if (!ctx.cr6.eq) goto loc_8227911C;
	// lhz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1544);
	// lwz r10,1540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8227911c
	if (!ctx.cr0.gt) goto loc_8227911C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_822790E8:
	// lwz r9,1592(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lwz r10,1592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r10,1592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// lbzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stbu r10,3(r11)
	ea = 3 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822790e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822790E8;
loc_8227911C:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82279200
	if (ctx.cr0.eq) goto loc_82279200;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82279200
	if (!ctx.cr6.eq) goto loc_82279200;
	// lbz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// lbz r10,1617(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1617);
	// lbz r7,1618(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1618);
	// subfic r11,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r11.s64;
	// subfic r9,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r10.s64;
	// lhz r8,1544(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1544);
	// subfic r10,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r7.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8227915c
	if (ctx.cr6.lt) goto loc_8227915C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82279160
	if (!ctx.cr6.gt) goto loc_82279160;
loc_8227915C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82279160:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82279170
	if (ctx.cr6.lt) goto loc_82279170;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// ble cr6,0x82279174
	if (!ctx.cr6.gt) goto loc_82279174;
loc_82279170:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82279174:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82279184
	if (ctx.cr6.lt) goto loc_82279184;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// ble cr6,0x82279188
	if (!ctx.cr6.gt) goto loc_82279188;
loc_82279184:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82279188:
	// clrlwi. r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82279200
	if (ctx.cr0.eq) goto loc_82279200;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822791A0:
	// lwz r10,1540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// mulli r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 * 3;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r30,r6,24
	ctx.r30.u64 = ctx.r6.u32 & 0xFF;
	// srw r8,r8,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r3.u8 & 0x3F));
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,1540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// srw r8,r8,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r30.u8 & 0x3F));
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// lwz r10,1540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// srw r8,r10,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r3.u8 & 0x3F));
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// blt cr6,0x822791a0
	if (ctx.cr6.lt) goto loc_822791A0;
loc_82279200:
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

__attribute__((alias("__imp__sub_82279218"))) PPC_WEAK_FUNC(sub_82279218);
PPC_FUNC_IMPL(__imp__sub_82279218) {
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
	// lwz r11,1500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1500);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82279244
	if (!ctx.cr6.eq) goto loc_82279244;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,19356
	ctx.r4.s64 = ctx.r11.s64 + 19356;
	// bl 0x82271a00
	ctx.lr = 0x82279244;
	sub_82271A00(ctx, base);
loc_82279244:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227929c
	if (ctx.cr0.eq) goto loc_8227929C;
	// lbz r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1528);
	// addi r3,r31,1520
	ctx.r3.s64 = ctx.r31.s64 + 1520;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8227927c
	if (!ctx.cr6.eq) goto loc_8227927C;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// lhz r7,1546(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1546);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r6,1628(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// lwz r5,1540(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// bl 0x82278490
	ctx.lr = 0x82279278;
	sub_82278490(ctx, base);
	// b 0x8227929c
	goto loc_8227929C;
loc_8227927C:
	// lhz r11,1546(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1546);
	// addi r5,r31,1632
	ctx.r5.s64 = ctx.r31.s64 + 1632;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bne 0x82279298
	if (!ctx.cr0.eq) goto loc_82279298;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82279298:
	// bl 0x82278730
	ctx.lr = 0x8227929C;
	sub_82278730(ctx, base);
loc_8227929C:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822792d0
	if (ctx.cr0.eq) goto loc_822792D0;
	// lbz r11,1558(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1558);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822792d0
	if (ctx.cr6.eq) goto loc_822792D0;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = ctx.r31.s64 + 1520;
	// lwz r7,1580(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r6,1604(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lwz r5,1592(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// bl 0x82278018
	ctx.lr = 0x822792D0;
	sub_82278018(ctx, base);
loc_822792D0:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822792ec
	if (ctx.cr0.eq) goto loc_822792EC;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = ctx.r31.s64 + 1520;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82277cf8
	ctx.lr = 0x822792EC;
	sub_82277CF8(ctx, base);
loc_822792EC:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227932c
	if (ctx.cr0.eq) goto loc_8227932C;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = ctx.r31.s64 + 1520;
	// lwz r6,1656(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r5,1652(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// bl 0x82278bd8
	ctx.lr = 0x82279310;
	sub_82278BD8(ctx, base);
	// lwz r11,1524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227932c
	if (!ctx.cr6.eq) goto loc_8227932C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19320
	ctx.r4.s64 = ctx.r11.s64 + 19320;
	// bl 0x82271a00
	ctx.lr = 0x8227932C;
	sub_82271A00(ctx, base);
loc_8227932C:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227934c
	if (ctx.cr0.eq) goto loc_8227934C;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// addi r5,r31,1621
	ctx.r5.s64 = ctx.r31.s64 + 1621;
	// addi r3,r31,1520
	ctx.r3.s64 = ctx.r31.s64 + 1520;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82277ab8
	ctx.lr = 0x8227934C;
	sub_82277AB8(ctx, base);
loc_8227934C:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82279368
	if (ctx.cr0.eq) goto loc_82279368;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = ctx.r31.s64 + 1520;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82277948
	ctx.lr = 0x82279368;
	sub_82277948(ctx, base);
loc_82279368:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82279384
	if (ctx.cr0.eq) goto loc_82279384;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = ctx.r31.s64 + 1520;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82277668
	ctx.lr = 0x82279384;
	sub_82277668(ctx, base);
loc_82279384:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822793a8
	if (ctx.cr0.eq) goto loc_822793A8;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = ctx.r31.s64 + 1520;
	// lwz r6,1372(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lhz r5,1566(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1566);
	// bl 0x82277d50
	ctx.lr = 0x822793A8;
	sub_82277D50(ctx, base);
loc_822793A8:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822793c4
	if (ctx.cr0.eq) goto loc_822793C4;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = ctx.r31.s64 + 1520;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82277628
	ctx.lr = 0x822793C4;
	sub_82277628(ctx, base);
loc_822793C4:
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

__attribute__((alias("__imp__sub_822793D8"))) PPC_WEAK_FUNC(sub_822793D8);
PPC_FUNC_IMPL(__imp__sub_822793D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822793ec
	if (ctx.cr6.eq) goto loc_822793EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_822793EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,19372
	ctx.r4.s64 = ctx.r11.s64 + 19372;
	// b 0x82271a00
	sub_82271A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822793F8"))) PPC_WEAK_FUNC(sub_822793F8);
PPC_FUNC_IMPL(__imp__sub_822793F8) {
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
	// lwz r11,1356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,1364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1364, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,1360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1360, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82279448
	if (ctx.cr6.eq) goto loc_82279448;
	// stw r30,1356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1356, ctx.r30.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,19456
	ctx.r4.s64 = ctx.r11.s64 + 19456;
	// bl 0x82271a38
	ctx.lr = 0x82279438;
	sub_82271A38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19400
	ctx.r4.s64 = ctx.r11.s64 + 19400;
	// bl 0x82271a38
	ctx.lr = 0x82279448;
	sub_82271A38(ctx, base);
loc_82279448:
	// stw r30,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82279464"))) PPC_WEAK_FUNC(sub_82279464);
PPC_FUNC_IMPL(__imp__sub_82279464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82279468"))) PPC_WEAK_FUNC(sub_82279468);
PPC_FUNC_IMPL(__imp__sub_82279468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x82279494
	if (!ctx.cr6.eq) goto loc_82279494;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r11,26324
	ctx.r8.s64 = ctx.r11.s64 + 26324;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,26300
	ctx.r30.s64 = ctx.r11.s64 + 26300;
	// b 0x822794a4
	goto loc_822794A4;
loc_82279494:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r11,26268
	ctx.r8.s64 = ctx.r11.s64 + 26268;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,26236
	ctx.r30.s64 = ctx.r11.s64 + 26236;
loc_822794A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// lfs f31,5256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f31.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f5,-28948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28948);
	ctx.f5.f64 = double(temp.f32);
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// fmr f7,f5
	ctx.f7.f64 = ctx.f5.f64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x822794f8
	if (!ctx.cr6.eq) goto loc_822794F8;
loc_822794D0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x822794e0
	if (!ctx.cr6.lt) goto loc_822794E0;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_822794E0:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x822794ec
	if (!ctx.cr6.gt) goto loc_822794EC;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_822794EC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822794d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822794D0;
	// b 0x82279538
	goto loc_82279538;
loc_822794F8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82279510
	if (!ctx.cr6.lt) goto loc_82279510;
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// ble cr6,0x82279510
	if (!ctx.cr6.gt) goto loc_82279510;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_82279510:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x82279524
	if (!ctx.cr6.gt) goto loc_82279524;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82279524
	if (!ctx.cr6.lt) goto loc_82279524;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_82279524:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822794f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822794F8;
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// bne cr6,0x82279538
	if (!ctx.cr6.eq) goto loc_82279538;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
loc_82279538:
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r11.u64);
	// lfd f0,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,26228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26228);
	ctx.f2.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f4,5268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5268);
	ctx.f4.f64 = double(temp.f32);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lfs f3,26232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26232);
	ctx.f3.f64 = double(temp.f32);
loc_8227956C:
	// fsubs f0,f7,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// blt cr6,0x822796d8
	if (ctx.cr6.lt) goto loc_822796D8;
	// fdivs f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822795b4
	if (ctx.cr6.eq) goto loc_822795B4;
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// subf r10,r8,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r8.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_82279598:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f7,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f0.f64));
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82279598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82279598;
loc_822795B4:
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x822795c4
	if (!ctx.cr6.eq) goto loc_822795C4;
	// stfs f5,-40(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f31,-36(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
loc_822795C4:
	// li r11,16
	ctx.r11.s64 = 16;
	// fmr f9,f5
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f5.f64;
	// fmr f8,f5
	ctx.f8.f64 = ctx.f5.f64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// fmr f12,f5
	ctx.f12.f64 = ctx.f5.f64;
	// fmr f11,f5
	ctx.f11.f64 = ctx.f5.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822795E0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fcmpu cr6,f13,f5
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// bgt cr6,0x82279610
	if (ctx.cr6.gt) goto loc_82279610;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x82279608
	if (!ctx.cr6.eq) goto loc_82279608;
	// fmuls f13,f10,f4
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82279678
	if (!ctx.cr6.gt) goto loc_82279678;
loc_82279608:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82279648
	goto loc_82279648;
loc_82279610:
	// fcmpu cr6,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x82279638
	if (ctx.cr6.lt) goto loc_82279638;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x82279630
	if (!ctx.cr6.eq) goto loc_82279630;
	// fadds f13,f7,f31
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82279678
	if (!ctx.cr6.lt) goto loc_82279678;
loc_82279630:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82279648
	goto loc_82279648;
loc_82279638:
	// fadds f13,f13,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f13.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
loc_82279648:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82279678
	if (!ctx.cr6.lt) goto loc_82279678;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f30,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfsx f30,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f11,f30,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f11.f64));
	// fmadds f9,f13,f0,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f8,f30,f0,f8
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f8.f64));
loc_82279678:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822795e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822795E0;
	// fcmpu cr6,f12,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// ble cr6,0x82279690
	if (!ctx.cr6.gt) goto loc_82279690;
	// fdivs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
loc_82279690:
	// fcmpu cr6,f11,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f5.f64);
	// ble cr6,0x822796a0
	if (!ctx.cr6.gt) goto loc_822796A0;
	// fdivs f0,f8,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fsubs f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
loc_822796A0:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x822796b4
	if (!ctx.cr6.gt) goto loc_822796B4;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// fmr f10,f7
	ctx.f10.f64 = ctx.f7.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_822796B4:
	// fmuls f0,f9,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x822796cc
	if (!ctx.cr6.lt) goto loc_822796CC;
	// fmuls f0,f8,f8
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// blt cr6,0x822796d8
	if (ctx.cr6.lt) goto loc_822796D8;
loc_822796CC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x8227956c
	if (ctx.cr6.lt) goto loc_8227956C;
loc_822796D8:
	// fcmpu cr6,f10,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f5.f64);
	// bge cr6,0x822796e8
	if (!ctx.cr6.lt) goto loc_822796E8;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// b 0x822796fc
	goto loc_822796FC;
loc_822796E8:
	// fcmpu cr6,f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// ble cr6,0x822796f8
	if (!ctx.cr6.gt) goto loc_822796F8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x822796fc
	goto loc_822796FC;
loc_822796F8:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
loc_822796FC:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f7,f5
	ctx.cr6.compare(ctx.f7.f64, ctx.f5.f64);
	// bge cr6,0x82279710
	if (!ctx.cr6.lt) goto loc_82279710;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// b 0x82279724
	goto loc_82279724;
loc_82279710:
	// fcmpu cr6,f7,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// ble cr6,0x82279720
	if (!ctx.cr6.gt) goto loc_82279720;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82279724
	goto loc_82279724;
loc_82279720:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_82279724:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227973C"))) PPC_WEAK_FUNC(sub_8227973C);
PPC_FUNC_IMPL(__imp__sub_8227973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82279740"))) PPC_WEAK_FUNC(sub_82279740);
PPC_FUNC_IMPL(__imp__sub_82279740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82279748;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8233fa00
	ctx.lr = 0x82279750;
	__savefpr_14(ctx, base);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bne cr6,0x8227976c
	if (!ctx.cr6.eq) goto loc_8227976C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r11,-19796
	ctx.r31.s64 = ctx.r11.s64 + -19796;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-19808
	ctx.r30.s64 = ctx.r11.s64 + -19808;
	// b 0x8227977c
	goto loc_8227977C;
loc_8227976C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r11,26360
	ctx.r31.s64 = ctx.r11.s64 + 26360;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-19824
	ctx.r30.s64 = ctx.r11.s64 + -19824;
loc_8227977C:
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,4272
	ctx.r8.s64 = ctx.r11.s64 + 4272;
	// addi r7,r1,-272
	ctx.r7.s64 = ctx.r1.s64 + -272;
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r29,4272(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4272);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// lfs f0,-28948(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// lwz r28,8(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// stw r28,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r28.u32);
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// lfs f31,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f30.f64 = double(temp.f32);
loc_822797D8:
	// lfs f11,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bge cr6,0x822797e8
	if (!ctx.cr6.lt) goto loc_822797E8;
	// fmr f30,f11
	ctx.f30.f64 = ctx.f11.f64;
loc_822797E8:
	// lfs f12,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bge cr6,0x822797f8
	if (!ctx.cr6.lt) goto loc_822797F8;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
loc_822797F8:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x82279808
	if (!ctx.cr6.lt) goto loc_82279808;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_82279808:
	// fcmpu cr6,f11,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f26.f64);
	// ble cr6,0x82279814
	if (!ctx.cr6.gt) goto loc_82279814;
	// fmr f26,f11
	ctx.f26.f64 = ctx.f11.f64;
loc_82279814:
	// fcmpu cr6,f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// ble cr6,0x82279820
	if (!ctx.cr6.gt) goto loc_82279820;
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
loc_82279820:
	// fcmpu cr6,f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// ble cr6,0x8227982c
	if (!ctx.cr6.gt) goto loc_8227982C;
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
loc_8227982C:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x822797d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822797D8;
	// fsubs f13,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f11,f26,f30
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// lfs f10,26356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26356);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f9,f12,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f3,f11,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fcmpu cr6,f3,f10
	ctx.cr6.compare(ctx.f3.f64, ctx.f10.f64);
	// blt cr6,0x82279b9c
	if (ctx.cr6.lt) goto loc_82279B9C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f6,f26,f30
	ctx.f6.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// fadds f5,f29,f1
	ctx.f5.f64 = double(float(ctx.f29.f64 + ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fadds f4,f28,f31
	ctx.f4.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r5,-16
	ctx.r11.s64 = ctx.r5.s64 + -16;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfs f10,5256(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5256);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fdivs f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 / ctx.f3.f64));
	// lfs f27,5268(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5268);
	ctx.f27.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmuls f6,f6,f27
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f27.f64));
	// fmuls f5,f5,f27
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// fmuls f4,f4,f27
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f27.f64));
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
loc_822798B0:
	// lfs f2,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f25,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f24,f2,f6
	ctx.f24.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// lfsu f2,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f2.f64 = double(temp.f32);
	// fsubs f25,f25,f5
	ctx.f25.f64 = double(float(ctx.f25.f64 - ctx.f5.f64));
	// fsubs f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fmuls f24,f24,f11
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f11.f64));
	// fmuls f25,f25,f13
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// fmuls f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fsubs f23,f24,f25
	ctx.f23.f64 = double(float(ctx.f24.f64 - ctx.f25.f64));
	// fadds f22,f25,f24
	ctx.f22.f64 = double(float(ctx.f25.f64 + ctx.f24.f64));
	// fadds f25,f2,f25
	ctx.f25.f64 = double(float(ctx.f2.f64 + ctx.f25.f64));
	// fadds f21,f23,f2
	ctx.f21.f64 = double(float(ctx.f23.f64 + ctx.f2.f64));
	// fsubs f22,f22,f2
	ctx.f22.f64 = double(float(ctx.f22.f64 - ctx.f2.f64));
	// fadds f25,f25,f24
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f24.f64));
	// fsubs f2,f23,f2
	ctx.f2.f64 = double(float(ctx.f23.f64 - ctx.f2.f64));
	// fmadds f8,f21,f21,f8
	ctx.f8.f64 = double(float(ctx.f21.f64 * ctx.f21.f64 + ctx.f8.f64));
	// fmadds f9,f22,f22,f9
	ctx.f9.f64 = double(float(ctx.f22.f64 * ctx.f22.f64 + ctx.f9.f64));
	// fmadds f10,f25,f25,f10
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f25.f64 + ctx.f10.f64));
	// fmadds f7,f2,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f7.f64));
	// bdnz 0x822798b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822798B0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f7,-260(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// stfs f10,-272(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f9,-268(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f8,-264(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// addi r9,r1,-268
	ctx.r9.s64 = ctx.r1.s64 + -268;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82279928:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x8227993c
	if (!ctx.cr6.gt) goto loc_8227993C;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8227993C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82279928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82279928;
	// rlwinm. r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227995c
	if (ctx.cr0.eq) goto loc_8227995C;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
loc_8227995C:
	// clrlwi. r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82279970
	if (ctx.cr0.eq) goto loc_82279970;
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
loc_82279970:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,26352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26352);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-288(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fcmpu cr6,f3,f9
	ctx.cr6.compare(ctx.f3.f64, ctx.f9.f64);
	// blt cr6,0x82279b9c
	if (ctx.cr6.lt) goto loc_82279B9C;
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,-272(r1)
	PPC_STORE_U64(ctx.r1.u32 + -272, ctx.r11.u64);
	// lfd f13,-272(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f24,5280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5280);
	ctx.f24.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f23,8728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8728);
	ctx.f23.f64 = double(temp.f32);
	// frsp f25,f13
	ctx.f25.f64 = double(float(ctx.f13.f64));
	// lfs f22,26348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26348);
	ctx.f22.f64 = double(temp.f32);
	// b 0x822799c0
	goto loc_822799C0;
loc_822799BC:
	// lfs f9,-288(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f9.f64 = double(temp.f32);
loc_822799C0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82279a0c
	if (ctx.cr6.eq) goto loc_82279A0C;
	// addi r10,r1,-264
	ctx.r10.s64 = ctx.r1.s64 + -264;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
loc_822799D8:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfsx f11,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmadds f12,f11,f26,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f12.f64));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f12,f11,f29,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f10.f64));
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f13,f11,f28,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 + ctx.f13.f64));
	// stfsu f13,16(r10)
	temp.f32 = float(ctx.f13.f64);
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822799d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822799D8;
loc_82279A0C:
	// fsubs f13,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// fsubs f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f11,f26,f30
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f11,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x82279b9c
	if (ctx.cr6.lt) goto loc_82279B9C;
	// fdivs f21,f25,f10
	ctx.f21.f64 = double(float(ctx.f25.f64 / ctx.f10.f64));
	// li r10,16
	ctx.r10.s64 = 16;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// addi r11,r5,-16
	ctx.r11.s64 = ctx.r5.s64 + -16;
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmuls f11,f21,f11
	ctx.f11.f64 = double(float(ctx.f21.f64 * ctx.f11.f64));
	// fmuls f2,f21,f13
	ctx.f2.f64 = double(float(ctx.f21.f64 * ctx.f13.f64));
	// fmuls f12,f21,f12
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f12.f64));
loc_82279A68:
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f21,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f21.f64 = double(temp.f32);
	// fsubs f21,f21,f31
	ctx.f21.f64 = double(float(ctx.f21.f64 - ctx.f31.f64));
	// lfs f20,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f20,f20,f30
	ctx.f20.f64 = double(float(ctx.f20.f64 - ctx.f30.f64));
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmadds f13,f21,f12,f13
	ctx.f13.f64 = double(float(ctx.f21.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f20,f11,f13
	ctx.f13.f64 = double(float(ctx.f20.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// blt cr6,0x82279a9c
	if (ctx.cr6.lt) goto loc_82279A9C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82279aac
	goto loc_82279AAC;
loc_82279A9C:
	// fadds f13,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-272(r1)
	PPC_STORE_U64(ctx.r1.u32 + -272, ctx.f13.u64);
	// lwz r10,-268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
loc_82279AAC:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f21,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// addi r29,r1,-256
	ctx.r29.s64 = ctx.r1.s64 + -256;
	// lfs f20,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f20.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsu f13,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r1,-252
	ctx.r28.s64 = ctx.r1.s64 + -252;
	// addi r27,r1,-248
	ctx.r27.s64 = ctx.r1.s64 + -248;
	// lfsx f16,r9,r29
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	ctx.f16.f64 = double(temp.f32);
	// fsubs f21,f16,f21
	ctx.f21.f64 = double(float(ctx.f16.f64 - ctx.f21.f64));
	// lfsx f19,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f19.f64 = double(temp.f32);
	// lfsx f18,r10,r30
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f17,f19,f23
	ctx.f17.f64 = double(float(ctx.f19.f64 * ctx.f23.f64));
	// lfsx f14,r9,r28
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f15,f18,f23
	ctx.f15.f64 = double(float(ctx.f18.f64 * ctx.f23.f64));
	// lfsx f16,r9,r27
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	ctx.f16.f64 = double(temp.f32);
	// fsubs f20,f14,f20
	ctx.f20.f64 = double(float(ctx.f14.f64 - ctx.f20.f64));
	// fsubs f13,f16,f13
	ctx.f13.f64 = double(float(ctx.f16.f64 - ctx.f13.f64));
	// fmadds f10,f19,f17,f10
	ctx.f10.f64 = double(float(ctx.f19.f64 * ctx.f17.f64 + ctx.f10.f64));
	// fmadds f9,f18,f15,f9
	ctx.f9.f64 = double(float(ctx.f18.f64 * ctx.f15.f64 + ctx.f9.f64));
	// fmadds f8,f17,f21,f8
	ctx.f8.f64 = double(float(ctx.f17.f64 * ctx.f21.f64 + ctx.f8.f64));
	// fmadds f7,f17,f20,f7
	ctx.f7.f64 = double(float(ctx.f17.f64 * ctx.f20.f64 + ctx.f7.f64));
	// fmadds f6,f17,f13,f6
	ctx.f6.f64 = double(float(ctx.f17.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f5,f15,f21,f5
	ctx.f5.f64 = double(float(ctx.f15.f64 * ctx.f21.f64 + ctx.f5.f64));
	// fmadds f4,f15,f20,f4
	ctx.f4.f64 = double(float(ctx.f15.f64 * ctx.f20.f64 + ctx.f4.f64));
	// fmadds f3,f15,f13,f3
	ctx.f3.f64 = double(float(ctx.f15.f64 * ctx.f13.f64 + ctx.f3.f64));
	// bdnz 0x82279a68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82279A68;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82279b30
	if (!ctx.cr6.gt) goto loc_82279B30;
	// fdivs f13,f24,f10
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f10.f64));
	// fmadds f30,f13,f8,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f30.f64));
	// fmadds f1,f13,f7,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f31,f13,f6,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f31.f64));
loc_82279B30:
	// fcmpu cr6,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x82279b48
	if (!ctx.cr6.gt) goto loc_82279B48;
	// fdivs f13,f24,f9
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f9.f64));
	// fmadds f26,f13,f5,f26
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f26.f64));
	// fmadds f29,f13,f4,f29
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f29.f64));
	// fmadds f28,f13,f3,f28
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f28.f64));
loc_82279B48:
	// fmuls f13,f8,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x82279b90
	if (!ctx.cr6.lt) goto loc_82279B90;
	// fmuls f13,f7,f7
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x82279b90
	if (!ctx.cr6.lt) goto loc_82279B90;
	// fmuls f13,f6,f6
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x82279b90
	if (!ctx.cr6.lt) goto loc_82279B90;
	// fmuls f13,f5,f5
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x82279b90
	if (!ctx.cr6.lt) goto loc_82279B90;
	// fmuls f13,f4,f4
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x82279b90
	if (!ctx.cr6.lt) goto loc_82279B90;
	// fmuls f13,f3,f3
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// blt cr6,0x82279b9c
	if (ctx.cr6.lt) goto loc_82279B9C;
loc_82279B90:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// blt cr6,0x822799bc
	if (ctx.cr6.lt) goto loc_822799BC;
loc_82279B9C:
	// stfs f30,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f26,0(r4)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f29,4(r4)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f28,8(r4)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8233fa4c
	ctx.lr = 0x82279BBC;
	__restfpr_14(ctx, base);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82279BC0"))) PPC_WEAK_FUNC(sub_82279BC0);
PPC_FUNC_IMPL(__imp__sub_82279BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82279BC8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa14
	ctx.lr = 0x82279BD0;
	__savefpr_19(ctx, base);
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r6,1084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1084, ctx.r6.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f23,5268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5268);
	ctx.f23.f64 = double(temp.f32);
	// beq cr6,0x82279c50
	if (ctx.cr6.eq) goto loc_82279C50;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82279C04:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x82279c14
	if (!ctx.cr6.lt) goto loc_82279C14;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82279C14:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x82279c04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82279C04;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x82279c40
	if (!ctx.cr6.eq) goto loc_82279C40;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// b 0x8227a59c
	goto loc_8227A59C;
loc_82279C40:
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82279c54
	goto loc_82279C54;
loc_82279C50:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82279C54:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82279c70
	if (ctx.cr6.eq) goto loc_82279C70;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8233eaf0
	ctx.lr = 0x82279C70;
	sub_8233EAF0(ctx, base);
loc_82279C70:
	// addi r4,r1,532
	ctx.r4.s64 = ctx.r1.s64 + 532;
	// lwz r16,1084(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// addi r28,r1,328
	ctx.r28.s64 = ctx.r1.s64 + 328;
	// addi r9,r1,284
	ctx.r9.s64 = ctx.r1.s64 + 284;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r18,r1,344
	ctx.r18.s64 = ctx.r1.s64 + 344;
	// subf r3,r31,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r31.s64;
	// subf r4,r31,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r31.s64;
	// subf r24,r31,r9
	ctx.r24.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r21,r31,r6
	ctx.r21.s64 = ctx.r6.s64 - ctx.r31.s64;
	// subf r28,r31,r18
	ctx.r28.s64 = ctx.r18.s64 - ctx.r31.s64;
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r18,-32256
	ctx.r18.s64 = -2113929216;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r27,r1,332
	ctx.r27.s64 = ctx.r1.s64 + 332;
	// lfs f27,4272(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4272);
	ctx.f27.f64 = double(temp.f32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r17,r1,528
	ctx.r17.s64 = ctx.r1.s64 + 528;
	// lfs f19,11124(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11124);
	ctx.f19.f64 = double(temp.f32);
	// subf r23,r31,r8
	ctx.r23.s64 = ctx.r8.s64 - ctx.r31.s64;
	// lfs f21,11116(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 11116);
	ctx.f21.f64 = double(temp.f32);
	// subf r26,r31,r27
	ctx.r26.s64 = ctx.r27.s64 - ctx.r31.s64;
	// addi r27,r9,4272
	ctx.r27.s64 = ctx.r9.s64 + 4272;
	// stw r23,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r23.u32);
	// subf r19,r31,r5
	ctx.r19.s64 = ctx.r5.s64 - ctx.r31.s64;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// subf r8,r31,r17
	ctx.r8.s64 = ctx.r17.s64 - ctx.r31.s64;
	// stw r19,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r19.u32);
	// addi r7,r1,316
	ctx.r7.s64 = ctx.r1.s64 + 316;
	// addi r11,r1,348
	ctx.r11.s64 = ctx.r1.s64 + 348;
	// lfs f29,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f28,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lis r17,-32256
	ctx.r17.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r15,-32256
	ctx.r15.s64 = -2113929216;
	// lis r14,-32256
	ctx.r14.s64 = -2113929216;
	// lfs f20,11120(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11120);
	ctx.f20.f64 = double(temp.f32);
	// lis r18,-32256
	ctx.r18.s64 = -2113929216;
	// lfs f22,26380(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 26380);
	ctx.f22.f64 = double(temp.f32);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// lfs f6,5256(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5256);
	ctx.f6.f64 = double(temp.f32);
	// subf r22,r31,r7
	ctx.r22.s64 = ctx.r7.s64 - ctx.r31.s64;
	// lfs f30,11148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11148);
	ctx.f30.f64 = double(temp.f32);
	// subf r20,r31,r11
	ctx.r20.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r30,r1,280
	ctx.r30.s64 = ctx.r1.s64 + 280;
	// lfs f7,11140(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 11140);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r1,312
	ctx.r29.s64 = ctx.r1.s64 + 312;
	// lfs f31,11144(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 11144);
	ctx.f31.f64 = double(temp.f32);
	// addi r25,r1,336
	ctx.r25.s64 = ctx.r1.s64 + 336;
	// lfs f8,11136(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 11136);
	ctx.f8.f64 = double(temp.f32);
	// stw r22,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r22.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r20,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r20.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	// subf r25,r31,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82279D78:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82279db0
	if (ctx.cr6.eq) goto loc_82279DB0;
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r9,r1,276
	ctx.r9.s64 = ctx.r1.s64 + 276;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f11,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f11,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
loc_82279DB0:
	// fmadds f11,f13,f8,f23
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f23.f64));
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// fmadds f10,f12,f7,f23
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f23.f64));
	// addi r5,r1,532
	ctx.r5.s64 = ctx.r1.s64 + 532;
	// fmadds f9,f0,f8,f23
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f23.f64));
	// stfsx f6,r3,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f11.u64);
	// fctiwz f11,f10
	ctx.f11.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// lwa r9,196(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 196));
	// fctiwz f10,f9
	ctx.f10.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f10,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.f10.u64);
	// stfd f11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f11.u64);
	// std r9,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// lwa r17,244(r1)
	ctx.r17.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 244));
	// lfd f10,208(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// std r17,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r17.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwa r18,196(r1)
	ctx.r18.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 196));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r18,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r18.u64);
	// lfd f11,264(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f10,r10,r6
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfsx f11,r10,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfsx f9,r8,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x82279f00
	if (ctx.cr6.eq) goto loc_82279F00;
	// clrlwi r9,r7,30
	ctx.r9.u64 = ctx.r7.u32 & 0x3;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// beq cr6,0x82279e7c
	if (ctx.cr6.eq) goto loc_82279E7C;
	// lfsx f5,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f22,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f22.f64 + ctx.f5.f64));
	// lfsx f3,r23,r11
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f22,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f22.f64 + ctx.f4.f64));
	// fmadds f3,f0,f22,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f22.f64 + ctx.f3.f64));
	// stfsx f5,r30,r11
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r24,r11
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r23,r11
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r11.u32, temp.u32);
loc_82279E7C:
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// bge cr6,0x82279f00
	if (!ctx.cr6.lt) goto loc_82279F00;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82279eb0
	if (ctx.cr6.eq) goto loc_82279EB0;
	// lfsx f5,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r22,r11
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f21,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f21.f64 + ctx.f5.f64));
	// lfsx f3,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f21,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f21.f64 + ctx.f4.f64));
	// fmadds f3,f0,f21,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f21.f64 + ctx.f3.f64));
	// stfsx f5,r29,r11
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r22,r11
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r21,r11
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r21.u32 + ctx.r11.u32, temp.u32);
loc_82279EB0:
	// lfsx f5,r4,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// lfsx f4,r26,r11
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f20,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f20.f64 + ctx.f5.f64));
	// lfsx f3,r25,r11
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f20,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f20.f64 + ctx.f4.f64));
	// fmadds f3,f0,f20,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f20.f64 + ctx.f3.f64));
	// stfsx f5,r4,r11
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r26,r11
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r25,r11
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x82279f00
	if (ctx.cr6.eq) goto loc_82279F00;
	// lfsx f5,r28,r11
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f13,f19,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f19.f64 + ctx.f5.f64));
	// lfsx f4,r20,r11
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f5,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f12,f12,f19,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f19.f64 + ctx.f4.f64));
	// fmadds f0,f0,f19,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f19.f64 + ctx.f5.f64));
	// stfsx f13,r28,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, temp.u32);
	// stfsx f12,r20,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r19,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r19.u32 + ctx.r11.u32, temp.u32);
loc_82279F00:
	// fmuls f0,f10,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// stfsx f0,r10,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// fmuls f0,f11,f28
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfsx f0,r10,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fmuls f0,f9,f29
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82279d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82279D78;
	// lwz r18,96(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82279740
	ctx.lr = 0x82279F40;
	sub_82279740(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lfs f11,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,4288
	ctx.r10.s64 = ctx.r11.s64 + 4288;
	// lfs f10,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,4288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4288);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bl 0x822af3a0
	ctx.lr = 0x82279FA4;
	sub_822AF3A0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822af3a0
	ctx.lr = 0x82279FB0;
	sub_822AF3A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r18,4
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 4, ctx.xer);
	// bne cr6,0x82279fe4
	if (!ctx.cr6.eq) goto loc_82279FE4;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82279fe4
	if (!ctx.cr6.eq) goto loc_82279FE4;
	// lwz r10,1060(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// sth r3,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x8227a59c
	goto loc_8227A59C;
loc_82279FE4:
	// rlwinm r9,r8,21,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1F;
	// lwz r17,1060(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// std r9,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// rlwinm r7,r11,27,26,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// rlwinm r10,r11,21,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1F;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// rlwinm r9,r8,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3F;
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lfd f13,208(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// std r9,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r9.u64);
	// lfd f9,264(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f10,208(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// addi r6,r18,-3
	ctx.r6.s64 = ctx.r18.s64 + -3;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r5,-1
	ctx.r5.s64 = -1;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// subfc r10,r9,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// subfze r10,r5
	temp.u64 = ~ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r10.u64 = temp.u64;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f7,f0,f31
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f8,f12,f30
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f0,f27,f13
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fmuls f12,f11,f29
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f11,f10,f27
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmuls f13,f9,f28
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f10,f8,f28
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fmuls f9,f7,f29
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// bne cr6,0x8227a0e4
	if (!ctx.cr6.eq) goto loc_8227A0E4;
	// lfs f8,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// sth r8,0(r17)
	PPC_STORE_U16(ctx.r17.u32 + 0, ctx.r8.u16);
	// lfs f7,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// sth r11,2(r17)
	PPC_STORE_U16(ctx.r17.u32 + 2, ctx.r11.u16);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// b 0x8227a10c
	goto loc_8227A10C;
loc_8227A0E4:
	// lfs f8,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// sth r11,0(r17)
	PPC_STORE_U16(ctx.r17.u32 + 0, ctx.r11.u16);
	// lfs f7,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f7.f64 = double(temp.f32);
	// sth r8,2(r17)
	PPC_STORE_U16(ctx.r17.u32 + 2, ctx.r8.u16);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8227A10C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f7,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 3, ctx.xer);
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bne cr6,0x8227a1b8
	if (!ctx.cr6.eq) goto loc_8227A1B8;
	// addi r11,r1,127
	ctx.r11.s64 = ctx.r1.s64 + 127;
	// stfs f23,92(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f23,84(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,143
	ctx.r8.s64 = ctx.r1.s64 + 143;
	// stfs f23,88(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f23,80(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lvx128 v60,r0,r6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r6,4
	ctx.r6.s64 = 4;
	// vperm128 v63,v60,v61,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvsr v7,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r29,12
	ctx.r29.s64 = 12;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r28,r11,-19768
	ctx.r28.s64 = ctx.r11.s64 + -19768;
	// lvx128 v12,r0,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r30,r29
	ea = (ctx.r30.u32 + ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x8227a2fc
	goto loc_8227A2FC;
loc_8227A1B8:
	// addi r10,r1,127
	ctx.r10.s64 = ctx.r1.s64 + 127;
	// lwz r18,96(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r17,1060(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,143
	ctx.r6.s64 = ctx.r1.s64 + 143;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,12
	ctx.r11.s64 = 12;
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,4
	ctx.r8.s64 = 4;
	// lvx128 v60,r0,r6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v0,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f0,8740(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8740);
	ctx.f0.f64 = double(temp.f32);
	// vperm128 v63,v61,v60,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r22,r1,143
	ctx.r22.s64 = ctx.r1.s64 + 143;
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvsr v7,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r21,r1,128
	ctx.r21.s64 = ctx.r1.s64 + 128;
	// addi r23,r1,80
	ctx.r23.s64 = ctx.r1.s64 + 80;
	// addi r24,r1,112
	ctx.r24.s64 = ctx.r1.s64 + 112;
	// addi r29,r1,127
	ctx.r29.s64 = ctx.r1.s64 + 127;
	// lis r20,-32256
	ctx.r20.s64 = -2113929216;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// addi r19,r1,128
	ctx.r19.s64 = ctx.r1.s64 + 128;
	// addi r16,r1,160
	ctx.r16.s64 = ctx.r1.s64 + 160;
	// addi r15,r1,160
	ctx.r15.s64 = ctx.r1.s64 + 160;
	// lvsr v6,r0,r16
	temp.u32 = ctx.r16.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r16,r1,160
	ctx.r16.s64 = ctx.r1.s64 + 160;
	// lvx128 v12,r0,r3
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lvsl v7,r0,r19
	temp.u32 = ctx.r19.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvsl v0,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r19,r1,160
	ctx.r19.s64 = ctx.r1.s64 + 160;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,-19784
	ctx.r28.s64 = ctx.r11.s64 + -19784;
	// stvewx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stvewx128 v63,r30,r14
	ea = (ctx.r30.u32 + ctx.r14.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v61,r0,r22
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r22,236(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lvx128 v60,r0,r21
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r21,228(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lfs f0,26376(r20)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 26376);
	ctx.f0.f64 = double(temp.f32);
	// lwz r20,260(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lvx128 v63,r0,r29
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r24
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v61,v60,v61,v7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r24,224(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vsubfp128 v13,v61,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,r0,r23
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r23,256(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// stvewx128 v63,r0,r19
	ea = (ctx.r19.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r19,232(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stvewx128 v63,r16,r8
	ea = (ctx.r16.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r16,1084(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// stvewx128 v63,r15,r10
	ea = (ctx.r15.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r6,r14
	ea = (ctx.r6.u32 + ctx.r14.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
loc_8227A2FC:
	// addi r11,r18,-1
	ctx.r11.s64 = ctx.r18.s64 + -1;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lfs f26,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f26.f64 = double(temp.f32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f25,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// frsp f24,f0
	ctx.f24.f64 = double(float(ctx.f0.f64));
	// lfs f28,-28948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28948);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f25.f64));
	// beq cr6,0x8227a35c
	if (ctx.cr6.eq) goto loc_8227A35C;
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fdivs f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 / ctx.f0.f64));
	// b 0x8227a360
	goto loc_8227A360;
loc_8227A35C:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_8227A360:
	// fmuls f31,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// li r29,0
	ctx.r29.s64 = 0;
	// fmuls f30,f0,f12
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// fmuls f29,f0,f11
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// beq cr6,0x8227a388
	if (ctx.cr6.eq) goto loc_8227A388;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8233eaf0
	ctx.lr = 0x8227A388;
	sub_8233EAF0(ctx, base);
loc_8227A388:
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f10,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,536
	ctx.r7.s64 = ctx.r1.s64 + 536;
	// lfs f9,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,276
	ctx.r10.s64 = ctx.r1.s64 + 276;
	// addi r6,r1,292
	ctx.r6.s64 = ctx.r1.s64 + 292;
	// addi r5,r1,324
	ctx.r5.s64 = ctx.r1.s64 + 324;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r15,r1,356
	ctx.r15.s64 = ctx.r1.s64 + 356;
	// subf r3,r31,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r31.s64;
	// subf r7,r31,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r31.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r30,r31,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// subf r4,r31,r15
	ctx.r4.s64 = ctx.r15.s64 - ctx.r31.s64;
loc_8227A3D8:
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 3, ctx.xer);
	// bne cr6,0x8227a3f8
	if (!ctx.cr6.eq) goto loc_8227A3F8;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x8227a3f8
	if (!ctx.cr6.lt) goto loc_8227A3F8;
	// rlwinm r10,r29,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// oris r29,r10,49152
	ctx.r29.u64 = ctx.r10.u64 | 3221225472;
	// b 0x8227a584
	goto loc_8227A584;
loc_8227A3F8:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// fmuls f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// beq cr6,0x8227a434
	if (ctx.cr6.eq) goto loc_8227A434;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfsx f7,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfsx f0,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_8227A434:
	// fsubs f0,f12,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// fsubs f7,f11,f25
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f25.f64));
	// fsubs f6,f13,f27
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmadds f0,f7,f29,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f0,f6,f31,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x8227a45c
	if (ctx.cr6.gt) goto loc_8227A45C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8227a484
	goto loc_8227A484;
loc_8227A45C:
	// fcmpu cr6,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// blt cr6,0x8227a46c
	if (ctx.cr6.lt) goto loc_8227A46C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8227a484
	goto loc_8227A484;
loc_8227A46C:
	// fadds f0,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f23.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
loc_8227A484:
	// rlwinm r31,r10,30,0,1
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xC0000000;
	// rlwinm r29,r29,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// or r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 | ctx.r29.u64;
	// beq cr6,0x8227a584
	if (ctx.cr6.eq) goto loc_8227A584;
	// rlwinm r31,r10,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f7,r3,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// addi r15,r1,116
	ctx.r15.s64 = ctx.r1.s64 + 116;
	// addi r14,r1,120
	ctx.r14.s64 = ctx.r1.s64 + 120;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// lfsx f0,r31,r27
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// lfsx f6,r31,r15
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r15.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r31,r14
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r14.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f13,f12,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f12,f11,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// beq cr6,0x8227a500
	if (ctx.cr6.eq) goto loc_8227A500;
	// lfsx f11,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f7,r23,r11
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f22,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f22.f64 + ctx.f11.f64));
	// lfsx f6,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f13,f22,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f22.f64 + ctx.f7.f64));
	// fmadds f6,f12,f22,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f22.f64 + ctx.f6.f64));
	// stfsx f11,r24,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r23,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r11.u32, temp.u32);
	// stfsx f6,r6,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
loc_8227A500:
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bge cr6,0x8227a584
	if (!ctx.cr6.lt) goto loc_8227A584;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227a534
	if (ctx.cr6.eq) goto loc_8227A534;
	// lfsx f11,r22,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f7,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f21,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f21.f64 + ctx.f11.f64));
	// lfsx f6,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f13,f21,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f21.f64 + ctx.f7.f64));
	// fmadds f6,f12,f21,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f21.f64 + ctx.f6.f64));
	// stfsx f11,r22,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r21,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r21.u32 + ctx.r11.u32, temp.u32);
	// stfsx f6,r5,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
loc_8227A534:
	// lfsx f11,r26,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// lfsx f7,r25,r11
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f20,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f20.f64 + ctx.f11.f64));
	// lfsx f6,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f13,f20,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f20.f64 + ctx.f7.f64));
	// fmadds f6,f12,f20,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f20.f64 + ctx.f6.f64));
	// stfsx f11,r26,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r25,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, temp.u32);
	// stfsx f6,r7,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x8227a584
	if (ctx.cr6.eq) goto loc_8227A584;
	// lfsx f11,r20,r11
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f19,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f19.f64 + ctx.f11.f64));
	// lfsx f7,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f11,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f19,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f19.f64 + ctx.f7.f64));
	// fmadds f12,f12,f19,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f19.f64 + ctx.f11.f64));
	// stfsx f0,r20,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r11.u32, temp.u32);
	// stfsx f13,r19,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r19.u32 + ctx.r11.u32, temp.u32);
	// stfsx f12,r4,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
loc_8227A584:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x8227a3d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227A3D8;
	// rotlwi r11,r29,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 16);
	// stw r11,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r11.u32);
loc_8227A59C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa60
	ctx.lr = 0x8227A5AC;
	__restfpr_19(ctx, base);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227A5B0"))) PPC_WEAK_FUNC(sub_8227A5B0);
PPC_FUNC_IMPL(__imp__sub_8227A5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x8227A5B8;
	__savegprlr_20(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r6,r9,21,11,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r7,r11,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi r31,r9,27
	ctx.r31.u64 = ctx.r9.u32 & 0x1F;
	// lfs f12,11148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11148);
	ctx.f12.f64 = double(temp.f32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lfs f0,11144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11144);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,27,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// std r8,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.r8.u64);
	// lfd f11,-224(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r10,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.r10.u64);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// std r7,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r7.u64);
	// lfd f8,-192(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r10,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r10.u64);
	// lfd f7,-192(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// lfd f13,-224(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r31,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r31.u64);
	// lfd f9,-208(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// rlwinm r5,r9,27,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3F;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// addi r10,r1,-176
	ctx.r10.s64 = ctx.r1.s64 + -176;
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// std r6,-216(r1)
	PPC_STORE_U64(ctx.r1.u32 + -216, ctx.r6.u64);
	// lfd f10,-216(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f13,5256(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5256);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// stfs f13,-164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stfs f13,-148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// fcfid f13,f10
	ctx.f13.f64 = double(ctx.f10.s64);
	// fcfid f10,f9
	ctx.f10.f64 = double(ctx.f9.s64);
	// frsp f9,f7
	ctx.f9.f64 = double(float(ctx.f7.f64));
	// frsp f7,f6
	ctx.f7.f64 = double(float(ctx.f6.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,-160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,-168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f9,-172(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f9,-176(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,-156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,-152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// bgt cr6,0x8227a754
	if (ctx.cr6.gt) goto loc_8227A754;
	// addi r11,r1,-161
	ctx.r11.s64 = ctx.r1.s64 + -161;
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,-176
	ctx.r7.s64 = ctx.r1.s64 + -176;
	// lvx128 v60,r0,r8
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,-145
	ctx.r9.s64 = ctx.r1.s64 + -145;
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// addi r10,r1,-192
	ctx.r10.s64 = ctx.r1.s64 + -192;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// lvx128 v61,r0,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// lvsl v7,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v0,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// lfs f0,5268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5268);
	ctx.f0.f64 = double(temp.f32);
	// vperm128 v63,v60,v61,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stfs f0,-188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stfs f0,-180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// stfs f0,-184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// stfs f0,-192(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// lvsr v7,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r9,12
	ctx.r9.s64 = 12;
	// lis r31,-32249
	ctx.r31.s64 = -2113470464;
	// lvx128 v12,r0,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-28948(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// stfs f0,-124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// b 0x8227a870
	goto loc_8227A870;
loc_8227A754:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,-161
	ctx.r9.s64 = ctx.r1.s64 + -161;
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,-176
	ctx.r6.s64 = ctx.r1.s64 + -176;
	// addi r7,r1,-145
	ctx.r7.s64 = ctx.r1.s64 + -145;
	// addi r5,r1,-192
	ctx.r5.s64 = ctx.r1.s64 + -192;
	// lfs f0,8740(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8740);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-160
	ctx.r11.s64 = ctx.r1.s64 + -160;
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// lvsl v0,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// lvx128 v60,r0,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,4
	ctx.r9.s64 = 4;
	// vperm128 v0,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stfs f0,-180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// stfs f0,-184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// vperm128 v63,v61,v60,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stfs f0,-188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// stfs f0,-192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// lvx128 v12,r0,r5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,12
	ctx.r11.s64 = 12;
	// lvsr v7,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r27,r1,-145
	ctx.r27.s64 = ctx.r1.s64 + -145;
	// addi r26,r1,-160
	ctx.r26.s64 = ctx.r1.s64 + -160;
	// addi r28,r1,-192
	ctx.r28.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-161
	ctx.r31.s64 = ctx.r1.s64 + -161;
	// addi r29,r1,-176
	ctx.r29.s64 = ctx.r1.s64 + -176;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// addi r24,r1,-176
	ctx.r24.s64 = ctx.r1.s64 + -176;
	// addi r23,r1,-160
	ctx.r23.s64 = ctx.r1.s64 + -160;
	// addi r22,r1,-128
	ctx.r22.s64 = ctx.r1.s64 + -128;
	// addi r21,r1,-128
	ctx.r21.s64 = ctx.r1.s64 + -128;
	// addi r20,r1,-128
	ctx.r20.s64 = ctx.r1.s64 + -128;
	// lvsl v6,r0,r24
	temp.u32 = ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// lvsl v5,r0,r23
	temp.u32 = ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v63,v0,v0,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvsr v4,r0,r22
	temp.u32 = ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r24,r1,-128
	ctx.r24.s64 = ctx.r1.s64 + -128;
	// stvewx128 v63,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v61,r0,r27
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r26
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,26376(r25)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 26376);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v63,r0,r31
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r29
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v61,v60,v61,v5
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stfs f0,-180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// stfs f0,-184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// stfs f0,-188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// stfs f0,-192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// vsubfp128 v13,v61,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,r0,r28
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// stvewx128 v63,r0,r21
	ea = (ctx.r21.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r20,r9
	ea = (ctx.r20.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r24,r11
	ea = (ctx.r24.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
loc_8227A870:
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8227A884:
	// rlwinm r8,r9,4,26,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// addi r10,r1,-176
	ctx.r10.s64 = ctx.r1.s64 + -176;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8227a884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227A884;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227A8C0"))) PPC_WEAK_FUNC(sub_8227A8C0);
PPC_FUNC_IMPL(__imp__sub_8227A8C0) {
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
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8227a5b0
	ctx.lr = 0x8227A8E4;
	sub_8227A5B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227a968
	if (ctx.cr0.lt) goto loc_8227A968;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11156);
	ctx.f0.f64 = double(temp.f32);
loc_8227A908:
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,16(r9)
	temp.f32 = float(ctx.f13.f64);
	ea = 16 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8227a908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227A908;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r31,124
	ctx.r9.s64 = ctx.r31.s64 + 124;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8227A940:
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,16(r9)
	temp.f32 = float(ctx.f13.f64);
	ea = 16 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8227a940
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227A940;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227A968:
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

__attribute__((alias("__imp__sub_8227A980"))) PPC_WEAK_FUNC(sub_8227A980);
PPC_FUNC_IMPL(__imp__sub_8227A980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8227A988;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// rlwinm r7,r10,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r5,r9,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r30,r8,8,16,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// rlwinm r29,r6,8,16,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF00;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r6,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// or r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 | ctx.r9.u64;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// or r9,r30,r8
	ctx.r9.u64 = ctx.r30.u64 | ctx.r8.u64;
	// or r11,r29,r6
	ctx.r11.u64 = ctx.r29.u64 | ctx.r6.u64;
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// sth r9,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// bl 0x8227a5b0
	ctx.lr = 0x8227A9F4;
	sub_8227A5B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227aba4
	if (ctx.cr0.lt) goto loc_8227ABA4;
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,11088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11088);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ble cr6,0x8227aab4
	if (!ctx.cr6.gt) goto loc_8227AAB4;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,11160(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11160);
	ctx.f0.f64 = double(temp.f32);
loc_8227AA64:
	// subfic r9,r11,7
	ctx.xer.ca = ctx.r11.u32 <= 7;
	ctx.r9.s64 = 7 - ctx.r11.s64;
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8227aa64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227AA64;
	// b 0x8227ab28
	goto loc_8227AB28;
loc_8227AAB4:
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2104(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
loc_8227AAC4:
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// subfic r9,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r9.s64 = 5 - ctx.r11.s64;
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8227aac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227AAC4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5256);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_8227AB28:
	// lbz r8,99(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// li r10,8
	ctx.r10.s64 = 8;
	// lbz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// lbz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
loc_8227AB4C:
	// rlwinm r10,r11,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	ea = 16 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8227ab4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227AB4C;
	// lbz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// li r10,8
	ctx.r10.s64 = 8;
	// lbz r7,103(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// addi r9,r31,124
	ctx.r9.s64 = ctx.r31.s64 + 124;
	// lbz r11,101(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
loc_8227AB88:
	// rlwinm r10,r11,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	ea = 16 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8227ab88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227AB88;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227ABA4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227ABAC"))) PPC_WEAK_FUNC(sub_8227ABAC);
PPC_FUNC_IMPL(__imp__sub_8227ABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227ABB0"))) PPC_WEAK_FUNC(sub_8227ABB0);
PPC_FUNC_IMPL(__imp__sub_8227ABB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8227ABB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8227ace0
	if (ctx.cr6.eq) goto loc_8227ACE0;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8227ABD8:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8227abd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227ABD8;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lfs f10,11120(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11120);
	ctx.f10.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f9,11124(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11124);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lfs f11,11116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 11116);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// lfs f12,26380(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 26380);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,5268(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5268);
	ctx.f13.f64 = double(temp.f32);
loc_8227AC28:
	// lfs f8,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// lfs f8,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,-4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// lfs f7,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f8,f8
	ctx.f8.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwa r5,92(r1)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 92));
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// stfsx f8,r4,r11
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// beq cr6,0x8227ac8c
	if (ctx.cr6.eq) goto loc_8227AC8C;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f0,f12,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8227AC8C:
	// cmplwi cr6,r8,12
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 12, ctx.xer);
	// bge cr6,0x8227acc8
	if (!ctx.cr6.lt) goto loc_8227ACC8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8227aca8
	if (ctx.cr6.eq) goto loc_8227ACA8;
	// lfs f8,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f0,f11,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_8227ACA8:
	// lfs f8,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// fmadds f8,f0,f10,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// beq cr6,0x8227acc8
	if (ctx.cr6.eq) goto loc_8227ACC8;
	// lfs f8,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
loc_8227ACC8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8227ac28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227AC28;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_8227ACE0:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82279bc0
	ctx.lr = 0x8227ACE8;
	sub_82279BC0(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227ACF8"))) PPC_WEAK_FUNC(sub_8227ACF8);
PPC_FUNC_IMPL(__imp__sub_8227ACF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8227AD00;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// beq cr6,0x8227ad34
	if (ctx.cr6.eq) goto loc_8227AD34;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8227AD2C:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8227ad2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227AD2C;
loc_8227AD34:
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lfs f8,11120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,11116(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11116);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lfs f10,26380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 26380);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r4,12
	ctx.r3.s64 = ctx.r4.s64 + 12;
	// lfs f11,11156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11156);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,11124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11124);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,5268(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,11152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11152);
	ctx.f13.f64 = double(temp.f32);
loc_8227AD7C:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8227ad90
	if (ctx.cr6.eq) goto loc_8227AD90;
	// lfs f6,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
loc_8227AD90:
	// fmadds f6,f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// rlwinm r11,r9,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r10,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// fctiwz f6,f6
	ctx.f6.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r31,r10,28,0,3
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | ctx.r31.u64;
	// stwx r5,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// beq cr6,0x8227ae2c
	if (ctx.cr6.eq) goto loc_8227AE2C;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fnmsubs f0,f6,f11,f0
	ctx.f0.f64 = double(float(-(ctx.f6.f64 * ctx.f11.f64 - ctx.f0.f64)));
	// beq cr6,0x8227adf0
	if (ctx.cr6.eq) goto loc_8227ADF0;
	// lfs f6,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f6.f64));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8227ADF0:
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bge cr6,0x8227ae2c
	if (!ctx.cr6.lt) goto loc_8227AE2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227ae0c
	if (ctx.cr6.eq) goto loc_8227AE0C;
	// lfs f6,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f9,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f6,8(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_8227AE0C:
	// lfs f6,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// fmadds f6,f0,f8,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f6.f64));
	// stfs f6,12(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// beq cr6,0x8227ae2c
	if (ctx.cr6.eq) goto loc_8227AE2C;
	// lfs f6,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
loc_8227AE2C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8227ad7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227AD7C;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r7,8
	ctx.r3.s64 = ctx.r7.s64 + 8;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// bl 0x82279bc0
	ctx.lr = 0x8227AE60;
	sub_82279BC0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227AE68"))) PPC_WEAK_FUNC(sub_8227AE68);
PPC_FUNC_IMPL(__imp__sub_8227AE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8227AE70;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8233fa1c
	ctx.lr = 0x8227AE78;
	__savefpr_21(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f29,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// addi r30,r4,12
	ctx.r30.s64 = ctx.r4.s64 + 12;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8227aeb0
	if (ctx.cr6.eq) goto loc_8227AEB0;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8227AEA8:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8227aea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227AEA8;
loc_8227AEB0:
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lfs f22,11120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11120);
	ctx.f22.f64 = double(temp.f32);
	// lfs f23,11116(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11116);
	ctx.f23.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f24,26380(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 26380);
	ctx.f24.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f30,11088(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11088);
	ctx.f30.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f21,11124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11124);
	ctx.f21.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f27,5268(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5268);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,11112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11112);
	ctx.f31.f64 = double(temp.f32);
loc_8227AEFC:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8227af14
	if (ctx.cr6.eq) goto loc_8227AF14;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_8227AF14:
	// fmadds f0,f13,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f27.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwa r9,92(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 92));
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x8227af50
	if (!ctx.cr6.lt) goto loc_8227AF50;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// b 0x8227af5c
	goto loc_8227AF5C;
loc_8227AF50:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x8227af5c
	if (!ctx.cr6.gt) goto loc_8227AF5C;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
loc_8227AF5C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8227afcc
	if (ctx.cr6.eq) goto loc_8227AFCC;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x8227af84
	if (ctx.cr6.eq) goto loc_8227AF84;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f24,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f24.f64 + ctx.f13.f64));
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_8227AF84:
	// cmplwi cr6,r8,12
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 12, ctx.xer);
	// bge cr6,0x8227afcc
	if (!ctx.cr6.lt) goto loc_8227AFCC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8227afa4
	if (ctx.cr6.eq) goto loc_8227AFA4;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f23,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f23.f64 + ctx.f13.f64));
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_8227AFA4:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f22,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f22.f64 + ctx.f13.f64));
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// beq cr6,0x8227afcc
	if (ctx.cr6.eq) goto loc_8227AFCC;
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f21,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f21.f64 + ctx.f13.f64));
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_8227AFCC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8227aefc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227AEFC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82279bc0
	ctx.lr = 0x8227AFEC;
	sub_82279BC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227b410
	if (ctx.cr0.lt) goto loc_8227B410;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f25,5256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f25.f64 = double(temp.f32);
	// fcmpu cr6,f29,f25
	ctx.cr6.compare(ctx.f29.f64, ctx.f25.f64);
	// bne cr6,0x8227b024
	if (!ctx.cr6.eq) goto loc_8227B024;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
loc_8227B00C:
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x8233eaf0
	ctx.lr = 0x8227B020;
	sub_8233EAF0(ctx, base);
	// b 0x8227b40c
	goto loc_8227B40C;
loc_8227B024:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f26,-28948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f26.f64 = double(temp.f32);
	// fcmpu cr6,f29,f26
	ctx.cr6.compare(ctx.f29.f64, ctx.f26.f64);
	// beq cr6,0x8227b040
	if (ctx.cr6.eq) goto loc_8227B040;
	// fcmpu cr6,f28,f25
	ctx.cr6.compare(ctx.f28.f64, ctx.f25.f64);
	// li r6,8
	ctx.r6.s64 = 8;
	// bne cr6,0x8227b044
	if (!ctx.cr6.eq) goto loc_8227B044;
loc_8227B040:
	// li r6,6
	ctx.r6.s64 = 6;
loc_8227B044:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82279468
	ctx.lr = 0x8227B054;
	sub_82279468(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f27.f64));
	// fmadds f13,f13,f31,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f27.f64));
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// bne cr6,0x8227b0cc
	if (!ctx.cr6.eq) goto loc_8227B0CC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8227b15c
	if (!ctx.cr6.eq) goto loc_8227B15C;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// b 0x8227b00c
	goto loc_8227B00C;
loc_8227B0CC:
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x8227b15c
	if (!ctx.cr6.eq) goto loc_8227B15C;
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
loc_8227B0FC:
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// subfic r9,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r9.s64 = 5 - ctx.r11.s64;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8227b0fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227B0FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f26,120(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f25,124(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r29,r11,26416
	ctx.r29.s64 = ctx.r11.s64 + 26416;
	// b 0x8227b1d8
	goto loc_8227B1D8;
loc_8227B15C:
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,11160(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11160);
	ctx.f0.f64 = double(temp.f32);
loc_8227B184:
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// subfic r8,r11,7
	ctx.xer.ca = ctx.r11.u32 <= 7;
	ctx.r8.s64 = 7 - ctx.r11.s64;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8227b184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227B184;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r11,26384
	ctx.r29.s64 = ctx.r11.s64 + 26384;
loc_8227B1D8:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x8227b20c
	if (ctx.cr6.eq) goto loc_8227B20C;
	// fsubs f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fdivs f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// b 0x8227b210
	goto loc_8227B210;
loc_8227B20C:
	// fmr f11,f26
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f26.f64;
loc_8227B210:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8227b230
	if (ctx.cr6.eq) goto loc_8227B230;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8227B228:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8227b228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227B228;
loc_8227B230:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8227B240:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8227b384
	if (!ctx.cr6.lt) goto loc_8227B384;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8227B268:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8227b27c
	if (ctx.cr6.eq) goto loc_8227B27C;
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_8227B27C:
	// fsubs f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bgt cr6,0x8227b2b0
	if (ctx.cr6.gt) goto loc_8227B2B0;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x8227b2a8
	if (!ctx.cr6.eq) goto loc_8227B2A8;
	// fmuls f0,f12,f27
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8227b2a8
	if (ctx.cr6.gt) goto loc_8227B2A8;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8227b2f8
	goto loc_8227B2F8;
loc_8227B2A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8227b2f8
	goto loc_8227B2F8;
loc_8227B2B0:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x8227b2e0
	if (ctx.cr6.lt) goto loc_8227B2E0;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x8227b2d8
	if (!ctx.cr6.eq) goto loc_8227B2D8;
	// fadds f0,f10,f25
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f25.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8227b2d8
	if (ctx.cr6.lt) goto loc_8227B2D8;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8227b2f8
	goto loc_8227B2F8;
loc_8227B2D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8227b2f8
	goto loc_8227B2F8;
loc_8227B2E0:
	// fadds f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
loc_8227B2F8:
	// rlwinm r30,r30,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r27,r11,21,0,10
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFE00000;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// or r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 | ctx.r30.u64;
	// beq cr6,0x8227b370
	if (ctx.cr6.eq) goto loc_8227B370;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lfsx f0,r27,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// beq cr6,0x8227b334
	if (ctx.cr6.eq) goto loc_8227B334;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f24,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f24.f64 + ctx.f13.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8227B334:
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// bge cr6,0x8227b370
	if (!ctx.cr6.lt) goto loc_8227B370;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227b350
	if (ctx.cr6.eq) goto loc_8227B350;
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f23,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f23.f64 + ctx.f13.f64));
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_8227B350:
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// fmadds f13,f0,f22,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f22.f64 + ctx.f13.f64));
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// beq cr6,0x8227b370
	if (ctx.cr6.eq) goto loc_8227B370;
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f21,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f21.f64 + ctx.f13.f64));
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
loc_8227B370:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8227b268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227B268;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_8227B384:
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// stb r8,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r8.u8);
	// stbu r3,3(r4)
	ea = 3 + ctx.r4.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r4.u32 = ea;
	// blt cr6,0x8227b240
	if (ctx.cr6.lt) goto loc_8227B240;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// rlwinm r10,r9,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 6;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_8227B40C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227B410:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8233fa68
	ctx.lr = 0x8227B41C;
	__restfpr_21(ctx, base);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227B420"))) PPC_WEAK_FUNC(sub_8227B420);
PPC_FUNC_IMPL(__imp__sub_8227B420) {
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
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// subf r8,r8,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r8.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8227B444:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8227b444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227B444;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227acf8
	ctx.lr = 0x8227B484;
	sub_8227ACF8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227B49C"))) PPC_WEAK_FUNC(sub_8227B49C);
PPC_FUNC_IMPL(__imp__sub_8227B49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B4A0"))) PPC_WEAK_FUNC(sub_8227B4A0);
PPC_FUNC_IMPL(__imp__sub_8227B4A0) {
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
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// subf r8,r8,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r8.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8227B4C4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8227b4c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227B4C4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227ae68
	ctx.lr = 0x8227B504;
	sub_8227AE68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227B51C"))) PPC_WEAK_FUNC(sub_8227B51C);
PPC_FUNC_IMPL(__imp__sub_8227B51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B520"))) PPC_WEAK_FUNC(sub_8227B520);
PPC_FUNC_IMPL(__imp__sub_8227B520) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227b564
	if (ctx.cr6.eq) goto loc_8227B564;
	// bl 0x8227a8c0
	ctx.lr = 0x8227B548;
	sub_8227A8C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227b568
	if (ctx.cr0.lt) goto loc_8227B568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af2f8
	ctx.lr = 0x8227B558;
	sub_822AF2F8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x8227b568
	goto loc_8227B568;
loc_8227B564:
	// bl 0x8227a8c0
	ctx.lr = 0x8227B568;
	sub_8227A8C0(ctx, base);
loc_8227B568:
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

__attribute__((alias("__imp__sub_8227B57C"))) PPC_WEAK_FUNC(sub_8227B57C);
PPC_FUNC_IMPL(__imp__sub_8227B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B580"))) PPC_WEAK_FUNC(sub_8227B580);
PPC_FUNC_IMPL(__imp__sub_8227B580) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227b5c4
	if (ctx.cr6.eq) goto loc_8227B5C4;
	// bl 0x8227a980
	ctx.lr = 0x8227B5A8;
	sub_8227A980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227b5c8
	if (ctx.cr0.lt) goto loc_8227B5C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af2f8
	ctx.lr = 0x8227B5B8;
	sub_822AF2F8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x8227b5c8
	goto loc_8227B5C8;
loc_8227B5C4:
	// bl 0x8227a980
	ctx.lr = 0x8227B5C8;
	sub_8227A980(ctx, base);
loc_8227B5C8:
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

__attribute__((alias("__imp__sub_8227B5DC"))) PPC_WEAK_FUNC(sub_8227B5DC);
PPC_FUNC_IMPL(__imp__sub_8227B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B5E0"))) PPC_WEAK_FUNC(sub_8227B5E0);
PPC_FUNC_IMPL(__imp__sub_8227B5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lwz r11,2280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227b5f4
	if (ctx.cr6.eq) goto loc_8227B5F4;
	// b 0x8227b420
	sub_8227B420(ctx, base);
	return;
loc_8227B5F4:
	// b 0x8227acf8
	sub_8227ACF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227B5F8"))) PPC_WEAK_FUNC(sub_8227B5F8);
PPC_FUNC_IMPL(__imp__sub_8227B5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lwz r11,2280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227b60c
	if (ctx.cr6.eq) goto loc_8227B60C;
	// b 0x8227b4a0
	sub_8227B4A0(ctx, base);
	return;
loc_8227B60C:
	// b 0x8227ae68
	sub_8227AE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227B610"))) PPC_WEAK_FUNC(sub_8227B610);
PPC_FUNC_IMPL(__imp__sub_8227B610) {
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
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8227b634
	if (!ctx.cr6.eq) goto loc_8227B634;
	// li r30,64
	ctx.r30.s64 = 64;
	// b 0x8227b640
	goto loc_8227B640;
loc_8227B634:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8227b66c
	if (!ctx.cr6.eq) goto loc_8227B66C;
	// li r30,1696
	ctx.r30.s64 = 1696;
loc_8227B640:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82082c78
	ctx.lr = 0x8227B64C;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8227b664
	if (ctx.cr0.eq) goto loc_8227B664;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x8227B664;
	sub_8233EAF0(ctx, base);
loc_8227B664:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8227b670
	goto loc_8227B670;
loc_8227B66C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227B670:
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

__attribute__((alias("__imp__sub_8227B688"))) PPC_WEAK_FUNC(sub_8227B688);
PPC_FUNC_IMPL(__imp__sub_8227B688) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82082d58
	sub_82082D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227B698"))) PPC_WEAK_FUNC(sub_8227B698);
PPC_FUNC_IMPL(__imp__sub_8227B698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227B69C"))) PPC_WEAK_FUNC(sub_8227B69C);
PPC_FUNC_IMPL(__imp__sub_8227B69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B6A0"))) PPC_WEAK_FUNC(sub_8227B6A0);
PPC_FUNC_IMPL(__imp__sub_8227B6A0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227b6f4
	if (ctx.cr6.eq) goto loc_8227B6F4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8227b6f4
	if (ctx.cr6.eq) goto loc_8227B6F4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82082c78
	ctx.lr = 0x8227B6D4;
	sub_82082C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8227b6ec
	if (!ctx.cr0.eq) goto loc_8227B6EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,26540
	ctx.r4.s64 = ctx.r11.s64 + 26540;
	// bl 0x82271a00
	ctx.lr = 0x8227B6EC;
	sub_82271A00(ctx, base);
loc_8227B6EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8227b6f8
	goto loc_8227B6F8;
loc_8227B6F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227B6F8:
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

__attribute__((alias("__imp__sub_8227B710"))) PPC_WEAK_FUNC(sub_8227B710);
PPC_FUNC_IMPL(__imp__sub_8227B710) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82082d58
	sub_82082D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227B730"))) PPC_WEAK_FUNC(sub_8227B730);
PPC_FUNC_IMPL(__imp__sub_8227B730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227B734"))) PPC_WEAK_FUNC(sub_8227B734);
PPC_FUNC_IMPL(__imp__sub_8227B734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B738"))) PPC_WEAK_FUNC(sub_8227B738);
PPC_FUNC_IMPL(__imp__sub_8227B738) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x8233e4e0
	sub_8233E4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227B748"))) PPC_WEAK_FUNC(sub_8227B748);
PPC_FUNC_IMPL(__imp__sub_8227B748) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x8233eaf0
	sub_8233EAF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227B758"))) PPC_WEAK_FUNC(sub_8227B758);
PPC_FUNC_IMPL(__imp__sub_8227B758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8227b76c
	if (!ctx.cr6.eq) goto loc_8227B76C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227b884
	goto loc_8227B884;
loc_8227B76C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// not r10,r3
	ctx.r10.u64 = ~ctx.r3.u64;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// addi r11,r11,26560
	ctx.r11.s64 = ctx.r11.s64 + 26560;
	// blt cr6,0x8227b854
	if (ctx.cr6.lt) goto loc_8227B854;
	// rlwinm r9,r5,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8227B788:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lbzu r9,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// lbzu r8,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// xor r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lbzu r3,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lbzu r31,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// xor r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// bdnz 0x8227b788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227B788;
loc_8227B854:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8227b880
	if (ctx.cr6.eq) goto loc_8227B880;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_8227B860:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// rlwinm r7,r10,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// bne 0x8227b860
	if (!ctx.cr0.eq) goto loc_8227B860;
loc_8227B880:
	// not r3,r10
	ctx.r3.u64 = ~ctx.r10.u64;
loc_8227B884:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227B88C"))) PPC_WEAK_FUNC(sub_8227B88C);
PPC_FUNC_IMPL(__imp__sub_8227B88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

