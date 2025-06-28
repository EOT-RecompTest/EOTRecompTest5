#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822147D0"))) PPC_WEAK_FUNC(sub_822147D0);
PPC_FUNC_IMPL(__imp__sub_822147D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x822147D8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8233fa34
	ctx.lr = 0x822147E0;
	__savefpr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,20
	ctx.r28.s64 = ctx.r11.s64 + 20;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r27,r10,20
	ctx.r27.s64 = ctx.r10.s64 + 20;
	// bl 0x822578d8
	ctx.lr = 0x82214810;
	sub_822578D8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822578d8
	ctx.lr = 0x82214820;
	sub_822578D8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,31376
	ctx.r4.s64 = ctx.r10.s64 + 31376;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r26,232(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f9,56(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,48(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f6,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fneg f2,f5
	ctx.f2.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fneg f1,f4
	ctx.f1.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fneg f6,f3
	ctx.f6.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fneg f5,f2
	ctx.f5.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fneg f4,f1
	ctx.f4.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f4,8(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfsx f2,r11,r10
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f1,4(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfsx f3,r9,r10
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f2,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f10,f2
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// lfs f6,52(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// lfs f5,48(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fneg f3,f1
	ctx.f3.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f4,8(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fsubs f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fneg f6,f4
	ctx.f6.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfsx f1,r11,r10
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fsubs f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r30,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 + ctx.r5.u64;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f1,8(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfsx f6,r9,r10
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stfs f2,4(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f30,f1,f2
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f13,f5,f30
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// fmuls f12,f4,f30
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// stfsx f12,r11,r3
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// fmuls f11,f3,f30
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stfsx f11,r9,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// fneg f5,f12
	ctx.f5.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r26,136(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r25,12(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfsx f10,r25,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r10.u32, temp.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// fneg f6,f13
	ctx.f6.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// fneg f28,f10
	ctx.f28.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfsx f12,r11,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fneg f27,f9
	ctx.f27.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fneg f4,f7
	ctx.f4.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fneg f29,f11
	ctx.f29.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfsx f11,r11,r8
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfsx f9,r9,r7
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// stfsx f4,r6,r10
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfsx f5,r11,r5
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfsx f29,r6,r8
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f28,4(r5)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfsx f27,r3,r7
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, temp.u32);
	// lfs f5,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f6,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f29,f6,f3
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmsubs f29,f5,f1,f29
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 - ctx.f29.f64));
	// lfs f4,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f28,f4,f1
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmsubs f5,f4,f3,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 - ctx.f5.f64));
	// fmuls f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmsubs f4,f6,f2,f28
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 - ctx.f28.f64));
	// fmadds f12,f5,f7,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f11,f5,f11,f9
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f9,f13,f4,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fmadds f7,f10,f4,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fmuls f6,f9,f30
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// stfsx f6,r11,r10
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fmuls f5,f7,f30
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stfsx f5,r10,r8
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// rlwinm r8,r11,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82214b34
	if (ctx.cr6.eq) goto loc_82214B34;
	// lfs f13,184(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f12,180(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f13,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82214b34
	if (ctx.cr6.gt) goto loc_82214B34;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82214B34:
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214b48
	if (ctx.cr6.eq) goto loc_82214B48;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82214B48:
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214dd0
	if (ctx.cr6.eq) goto loc_82214DD0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// fneg f12,f3
	ctx.f12.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fneg f11,f2
	ctx.f11.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r7,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f3,4(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfsx f2,r10,r5
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfsx f13,r7,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfsx f11,r3,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, temp.u32);
	// lfs f10,168(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,164(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x82214bc8
	if (ctx.cr6.eq) goto loc_82214BC8;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x82214bc8
	if (!ctx.cr6.eq) goto loc_82214BC8;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82214BC8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x82214ca8
	if (ctx.cr6.eq) goto loc_82214CA8;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfs f13,196(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// bgt cr6,0x82214c70
	if (ctx.cr6.gt) goto loc_82214C70;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x82214c6c
	if (ctx.cr6.eq) goto loc_82214C6C;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f6,188(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 / ctx.f7.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82214c3c
	if (!ctx.cr6.lt) goto loc_82214C3C;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x82214c30
	if (ctx.cr6.lt) goto loc_82214C30;
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bge cr6,0x82214c30
	if (!ctx.cr6.lt) goto loc_82214C30;
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fdivs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// b 0x82214c70
	goto loc_82214C70;
loc_82214C30:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82214c70
	if (!ctx.cr6.lt) goto loc_82214C70;
	// b 0x82214c6c
	goto loc_82214C6C;
loc_82214C3C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82214c6c
	if (!ctx.cr6.gt) goto loc_82214C6C;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bgt cr6,0x82214c64
	if (ctx.cr6.gt) goto loc_82214C64;
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x82214c64
	if (!ctx.cr6.gt) goto loc_82214C64;
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fdivs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// b 0x82214c70
	goto loc_82214C70;
loc_82214C64:
	// fcmpu cr6,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x82214c70
	if (!ctx.cr6.gt) goto loc_82214C70;
loc_82214C6C:
	// fmr f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f0.f64;
loc_82214C70:
	// lfs f13,188(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f12,184(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfsx f7,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfsx f6,r10,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f5,192(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfsx f4,r10,r11
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f13,192(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r8,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
loc_82214CA8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82214dd0
	if (ctx.cr6.eq) goto loc_82214DD0;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfsx f10,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f31,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bne cr6,0x82214cf8
	if (!ctx.cr6.eq) goto loc_82214CF8;
	// lfs f13,408(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r10,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f12,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r8,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// b 0x82214d24
	goto loc_82214D24;
loc_82214CF8:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82214d14
	if (!ctx.cr6.eq) goto loc_82214D14;
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfs f13,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stfsx f13,r8,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// b 0x82214d24
	goto loc_82214D24;
loc_82214D14:
	// lfs f13,408(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r10,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
loc_82214D24:
	// lfs f12,176(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82214dbc
	if (!ctx.cr6.gt) goto loc_82214DBC;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lfs f13,476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 476);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f9,f11,f3
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// lfs f8,480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 480);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 480);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,472(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 472);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f8,f2,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f3,f7,f2,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fmadds f2,f6,f1,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f4.f64));
	// fmadds f1,f1,f5,f3
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// bne cr6,0x82214d98
	if (!ctx.cr6.eq) goto loc_82214D98;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82214dbc
	if (!ctx.cr6.lt) goto loc_82214DBC;
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82214dbc
	if (!ctx.cr6.gt) goto loc_82214DBC;
	// b 0x82214db8
	goto loc_82214DB8;
loc_82214D98:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82214dbc
	if (!ctx.cr6.gt) goto loc_82214DBC;
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82214dbc
	if (!ctx.cr6.lt) goto loc_82214DBC;
loc_82214DB8:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_82214DBC:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f0,172(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f12,r10,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_82214DD0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8233fa80
	ctx.lr = 0x82214DDC;
	__restfpr_27(ctx, base);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214DE0"))) PPC_WEAK_FUNC(sub_82214DE0);
PPC_FUNC_IMPL(__imp__sub_82214DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82214DE8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r26,r3,32
	ctx.r26.s64 = ctx.r3.s64 + 32;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
	// lwz r24,24(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r28,r10,20
	ctx.r28.s64 = ctx.r10.s64 + 20;
	// bl 0x82257540
	ctx.lr = 0x82214E20;
	sub_82257540(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r31,r24,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r11,31376
	ctx.r23.s64 = ctx.r11.s64 + 31376;
	// rlwinm r29,r24,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,36(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// bl 0x82257600
	ctx.lr = 0x82214E64;
	sub_82257600(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lfs f31,48(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r27,44
	ctx.r4.s64 = ctx.r27.s64 + 44;
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fneg f8,f12
	ctx.f8.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfsx f12,r11,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// stfs f31,4(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fneg f6,f9
	ctx.f6.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfsx f6,r11,r29
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f31,8(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// bl 0x82257600
	ctx.lr = 0x82214ECC;
	sub_82257600(ctx, base);
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lfs f5,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfsx f2,r11,r31
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// stfs f31,4(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfsx f11,r11,r29
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// stfs f31,8(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r7,28(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lfs f10,48(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f7,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r6,r24,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// fsubs f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// lfs f6,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f7,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fsubs f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fmuls f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,28(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lfs f12,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fmuls f6,f7,f3
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// stfsx f6,r31,r5
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, temp.u32);
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// lwz r4,28(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lfs f4,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,56(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fsubs f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fsubs f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fmuls f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfsx f11,r6,r4
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214FB4"))) PPC_WEAK_FUNC(sub_82214FB4);
PPC_FUNC_IMPL(__imp__sub_82214FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214FB8"))) PPC_WEAK_FUNC(sub_82214FB8);
PPC_FUNC_IMPL(__imp__sub_82214FB8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r10,-23388
	ctx.r8.s64 = ctx.r10.s64 + -23388;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f13,56(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r5.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82257cb8
	ctx.lr = 0x8221505C;
	sub_82257CB8(ctx, base);
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

__attribute__((alias("__imp__sub_82215074"))) PPC_WEAK_FUNC(sub_82215074);
PPC_FUNC_IMPL(__imp__sub_82215074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215078"))) PPC_WEAK_FUNC(sub_82215078);
PPC_FUNC_IMPL(__imp__sub_82215078) {
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
	// addi r9,r11,-23388
	ctx.r9.s64 = ctx.r11.s64 + -23388;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x822150b0
	if (ctx.cr6.eq) goto loc_822150B0;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822150B0;
	sub_82080000(ctx, base);
loc_822150B0:
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

__attribute__((alias("__imp__sub_822150C8"))) PPC_WEAK_FUNC(sub_822150C8);
PPC_FUNC_IMPL(__imp__sub_822150C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822150E8"))) PPC_WEAK_FUNC(sub_822150E8);
PPC_FUNC_IMPL(__imp__sub_822150E8) {
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
	// bl 0x82214fb8
	ctx.lr = 0x82215104;
	sub_82214FB8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r6,r11,31376
	ctx.r6.s64 = ctx.r11.s64 + 31376;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23376
	ctx.r5.s64 = ctx.r10.s64 + -23376;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r4,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r4.u16);
	// lfs f0,60(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lis r10,20031
	ctx.r10.s64 = 1312751616;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// li r9,56
	ctx.r9.s64 = 56;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// ori r8,r10,9
	ctx.r8.u64 = ctx.r10.u64 | 9;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lfs f11,56(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// lfs f13,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lfs f10,228(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 228);
	ctx.f10.f64 = double(temp.f32);
	// sth r11,224(r31)
	PPC_STORE_U16(ctx.r31.u32 + 224, ctx.r11.u16);
	// lfs f9,156(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// sth r11,226(r31)
	PPC_STORE_U16(ctx.r31.u32 + 226, ctx.r11.u16);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lfs f0,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lfs f12,92(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// addi r3,r31,680
	ctx.r3.s64 = ctx.r31.s64 + 680;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stfs f11,252(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// stfs f10,256(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stw r8,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r8.u32);
	// stfs f13,260(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// addi r9,r31,168
	ctx.r9.s64 = ctx.r31.s64 + 168;
	// stfs f9,268(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// addi r9,r31,232
	ctx.r9.s64 = ctx.r31.s64 + 232;
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// addi r7,r31,392
	ctx.r7.s64 = ctx.r31.s64 + 392;
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stfs f12,280(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lfs f11,320(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 320);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r31,712
	ctx.r6.s64 = ctx.r31.s64 + 712;
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f11,244(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stw r5,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r5.u32);
	// stfs f13,296(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stfs f13,300(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stfs f13,324(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f13,328(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stfs f13,332(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stw r10,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r4,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r4.u32);
	// stw r10,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r10.u32);
	// stb r11,408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 408, ctx.r11.u8);
	// stb r11,409(r31)
	PPC_STORE_U8(ctx.r31.u32 + 409, ctx.r11.u8);
	// stw r3,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r3.u32);
	// stfs f0,456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// addi r10,r31,432
	ctx.r10.s64 = ctx.r31.s64 + 432;
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
	// stb r11,672(r31)
	PPC_STORE_U8(ctx.r31.u32 + 672, ctx.r11.u8);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stb r11,673(r31)
	PPC_STORE_U8(ctx.r31.u32 + 673, ctx.r11.u8);
	// stw r8,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r8.u32);
	// stw r8,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r8.u32);
	// stw r6,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r6.u32);
	// lfs f10,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// stfs f9,288(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f8,292(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
loc_8221529C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8221529c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221529C;
	// stfs f12,640(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// stfs f0,564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stfs f0,556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stfs f0,536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stfs f0,600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stfs f0,596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f0,592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stfs f0,588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stfs f0,584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f0,572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// stfs f0,636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// stfs f0,632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stfs f0,624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stfs f0,620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stfs f0,616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stfs f0,612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfs f0,604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// stfs f0,460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stfs f0,464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// stfs f0,476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f0,320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f13,388(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f0,508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stfs f0,528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// stfs f0,524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// stfs f0,520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// stfs f0,504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stfs f0,500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f0,496(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f0,492(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stfs f0,488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f0,484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// lwz r3,20(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233eaf0
	ctx.lr = 0x82215390;
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

__attribute__((alias("__imp__sub_822153AC"))) PPC_WEAK_FUNC(sub_822153AC);
PPC_FUNC_IMPL(__imp__sub_822153AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822153B0"))) PPC_WEAK_FUNC(sub_822153B0);
PPC_FUNC_IMPL(__imp__sub_822153B0) {
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
	// bl 0x82215410
	ctx.lr = 0x822153D0;
	sub_82215410(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822153f0
	if (ctx.cr6.eq) goto loc_822153F0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822153f0
	if (ctx.cr6.eq) goto loc_822153F0;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x822153F0;
	sub_82080000(ctx, base);
loc_822153F0:
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

__attribute__((alias("__imp__sub_8221540C"))) PPC_WEAK_FUNC(sub_8221540C);
PPC_FUNC_IMPL(__imp__sub_8221540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215410"))) PPC_WEAK_FUNC(sub_82215410);
PPC_FUNC_IMPL(__imp__sub_82215410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82215418;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r29,r11,4536
	ctx.r29.s64 = ctx.r11.s64 + 4536;
	// addi r9,r10,-23376
	ctx.r9.s64 = ctx.r10.s64 + -23376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r28,236(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822154a4
	if (ctx.cr6.eq) goto loc_822154A4;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82215448:
	// lwz r11,252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	// lwzx r31,r27,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82215474
	if (ctx.cr6.eq) goto loc_82215474;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82215474
	if (ctx.cr6.eq) goto loc_82215474;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x8221549c
	goto loc_8221549C;
loc_82215474:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820d6940
	ctx.lr = 0x82215480;
	sub_820D6940(ctx, base);
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
	ctx.lr = 0x82215498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_8221549C:
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82215448
	if (ctx.cr6.lt) goto loc_82215448;
loc_822154A4:
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822154f8
	if (!ctx.cr6.gt) goto loc_822154F8;
	// addi r29,r30,392
	ctx.r29.s64 = ctx.r30.s64 + 392;
loc_822154B4:
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x822184b8
	ctx.lr = 0x822154CC;
	sub_822184B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822154ec
	if (ctx.cr6.eq) goto loc_822154EC;
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
	ctx.lr = 0x822154EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822154EC:
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x822154b4
	if (ctx.cr6.gt) goto loc_822154B4;
loc_822154F8:
	// addi r3,r30,656
	ctx.r3.s64 = ctx.r30.s64 + 656;
	// bl 0x82218450
	ctx.lr = 0x82215500;
	sub_82218450(ctx, base);
	// addi r3,r30,392
	ctx.r3.s64 = ctx.r30.s64 + 392;
	// bl 0x82218450
	ctx.lr = 0x82215508;
	sub_82218450(ctx, base);
	// addi r31,r30,168
	ctx.r31.s64 = ctx.r30.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2510
	ctx.lr = 0x82215514;
	sub_821D2510(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221553c
	if (ctx.cr6.eq) goto loc_8221553C;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221553c
	if (ctx.cr6.eq) goto loc_8221553C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221553C;
	sub_82080000(ctx, base);
loc_8221553C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-23388
	ctx.r10.s64 = ctx.r11.s64 + -23388;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215550"))) PPC_WEAK_FUNC(sub_82215550);
PPC_FUNC_IMPL(__imp__sub_82215550) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r4,20
	ctx.r3.s64 = ctx.r4.s64 + 20;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x8221558C;
	sub_8233E4E0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r30,84
	ctx.r4.s64 = ctx.r30.s64 + 84;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221559C;
	sub_8233E4E0(ctx, base);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r5,156(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// bl 0x821d27b0
	ctx.lr = 0x822155B0;
	sub_821D27B0(ctx, base);
	// addi r4,r30,232
	ctx.r4.s64 = ctx.r30.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82215998
	ctx.lr = 0x822155BC;
	sub_82215998(ctx, base);
	// lwz r4,304(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// rlwinm r10,r4,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822155d8
	if (ctx.cr6.eq) goto loc_822155D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c04b0
	ctx.lr = 0x822155D4;
	sub_820C04B0(ctx, base);
	// b 0x822155e4
	goto loc_822155E4;
loc_822155D8:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_822155E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,640(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82217ca0
	ctx.lr = 0x822155F0;
	sub_82217CA0(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// lfs f0,388(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lwz r8,648(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// addi r11,r30,528
	ctx.r11.s64 = ctx.r30.s64 + 528;
	// stw r8,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r9,304(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// oris r7,r9,4
	ctx.r7.u64 = ctx.r9.u64 | 262144;
	// stw r7,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r7.u32);
loc_82215620:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82215620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82215620;
	// addi r4,r31,568
	ctx.r4.s64 = ctx.r31.s64 + 568;
	// bl 0x82305d28
	ctx.lr = 0x82215634;
	sub_82305D28(ctx, base);
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82215654
	if (ctx.cr6.eq) goto loc_82215654;
	// addi r4,r30,312
	ctx.r4.s64 = ctx.r30.s64 + 312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217b38
	ctx.lr = 0x82215650;
	sub_82217B38(ctx, base);
	// b 0x82215660
	goto loc_82215660;
loc_82215654:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_82215660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82215678"))) PPC_WEAK_FUNC(sub_82215678);
PPC_FUNC_IMPL(__imp__sub_82215678) {
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
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822157d0
	if (!ctx.cr6.eq) goto loc_822157D0;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822157d0
	if (ctx.cr6.eq) goto loc_822157D0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822156b8
	if (ctx.cr6.eq) goto loc_822156B8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822156bc
	if (!ctx.cr6.eq) goto loc_822156BC;
loc_822156B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822156BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822157cc
	if (ctx.cr6.eq) goto loc_822157CC;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822156e0
	if (ctx.cr6.eq) goto loc_822156E0;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822157cc
	if (!ctx.cr6.eq) goto loc_822157CC;
loc_822156E0:
	// lwz r10,244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lfs f0,640(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,248(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// lfs f13,496(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// lfs f12,500(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,504(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r11,r3,496
	ctx.r11.s64 = ctx.r3.s64 + 496;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
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
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// addi r6,r7,31376
	ctx.r6.s64 = ctx.r7.s64 + 31376;
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// addi r11,r3,508
	ctx.r11.s64 = ctx.r3.s64 + 508;
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f0,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f4,496(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// addi r11,r3,520
	ctx.r11.s64 = ctx.r3.s64 + 520;
	// addi r11,r3,484
	ctx.r11.s64 = ctx.r3.s64 + 484;
	// fadds f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f3,500(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// fadds f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f2,504(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// lfs f11,508(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f4,f11
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f9,496(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// fmr f10,f4
	ctx.f10.f64 = ctx.f4.f64;
	// lfs f8,512(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f3
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfs f7,500(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// fmr f13,f3
	ctx.f13.f64 = ctx.f3.f64;
	// lfs f6,516(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f2
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// stfs f5,504(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
	// lfs f4,488(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,492(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,484(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f12,484(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 484, temp.u32);
	// lfs f11,524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f10,488(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 488, temp.u32);
	// lfs f9,528(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f3,f9
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f8,492(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 492, temp.u32);
	// stfs f0,516(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// stfs f0,512(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// stfs f0,508(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 508, temp.u32);
	// stfs f0,528(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// stfs f0,524(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// stfs f0,520(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
loc_822157CC:
	// bl 0x82217828
	ctx.lr = 0x822157D0;
	sub_82217828(ctx, base);
loc_822157D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822157E0"))) PPC_WEAK_FUNC(sub_822157E0);
PPC_FUNC_IMPL(__imp__sub_822157E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,464(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,460(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,468(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmadds f8,f12,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// bge cr6,0x82215854
	if (!ctx.cr6.lt) goto loc_82215854;
	// lfs f0,476(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,480(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,292(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmadds f8,f12,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// bge cr6,0x82215854
	if (!ctx.cr6.lt) goto loc_82215854;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f2,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
loc_82215854:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82215870
	if (ctx.cr6.eq) goto loc_82215870;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
loc_82215870:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221588C"))) PPC_WEAK_FUNC(sub_8221588C);
PPC_FUNC_IMPL(__imp__sub_8221588C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215890"))) PPC_WEAK_FUNC(sub_82215890);
PPC_FUNC_IMPL(__imp__sub_82215890) {
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
	// lwz r11,648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8221597c
	if (ctx.cr6.eq) goto loc_8221597C;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82215934
	if (!ctx.cr6.eq) goto loc_82215934;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r3,928
	ctx.r4.s64 = ctx.r3.s64 + 928;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822158dc
	if (ctx.cr6.lt) goto loc_822158DC;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// b 0x822158e8
	goto loc_822158E8;
loc_822158DC:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 * 236;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822158E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82215920
	if (ctx.cr6.eq) goto loc_82215920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201220
	ctx.lr = 0x82215900;
	sub_82201220(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r8,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r8.u32);
	// b 0x82215968
	goto loc_82215968;
loc_82215920:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r9,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r9.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 652, ctx.r9.u32);
	// b 0x8221597c
	goto loc_8221597C;
loc_82215934:
	// lhz r11,814(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 814);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82215950
	if (ctx.cr6.eq) goto loc_82215950;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// b 0x8221597c
	goto loc_8221597C;
loc_82215950:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// stw r9,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r9.u32);
loc_82215968:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r11,652(r9)
	PPC_STORE_U32(ctx.r9.u32 + 652, ctx.r11.u32);
loc_8221597C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82215994"))) PPC_WEAK_FUNC(sub_82215994);
PPC_FUNC_IMPL(__imp__sub_82215994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215998"))) PPC_WEAK_FUNC(sub_82215998);
PPC_FUNC_IMPL(__imp__sub_82215998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x822159A0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82215aa0
	if (ctx.cr6.eq) goto loc_82215AA0;
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f0,276(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// stfs f13,260(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,252(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// lfs f11,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,268(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// stfs f10,272(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,256(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,264(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfd f31,344(r29)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r29.u32 + 344);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// lfs f30,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r10,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r10.u32);
	// fsubs f1,f30,f10
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r9,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r9.u32);
	// bl 0x8233c318
	ctx.lr = 0x82215A2C;
	sub_8233C318(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,296(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f5,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f1,f30,f5
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f5.f64));
	// bl 0x8233c318
	ctx.lr = 0x82215A44;
	sub_8233C318(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,300(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r8,48
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 48, ctx.xer);
	// ble cr6,0x82215a60
	if (!ctx.cr6.gt) goto loc_82215A60;
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
loc_82215A60:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// ble cr6,0x82215a74
	if (!ctx.cr6.gt) goto loc_82215A74;
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82215A74:
	// lfs f0,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,288(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stfs f12,292(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// ble cr6,0x82215aa0
	if (!ctx.cr6.gt) goto loc_82215AA0;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82215AA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215AB0"))) PPC_WEAK_FUNC(sub_82215AB0);
PPC_FUNC_IMPL(__imp__sub_82215AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82215AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// addi r30,r3,392
	ctx.r30.s64 = ctx.r3.s64 + 392;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221ad18
	ctx.lr = 0x82215AE8;
	sub_8221AD18(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x82215b14
	if (!ctx.cr6.gt) goto loc_82215B14;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82218540
	ctx.lr = 0x82215B14;
	sub_82218540(ctx, base);
loc_82215B14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82215d10
	ctx.lr = 0x82215B1C;
	sub_82215D10(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215B28"))) PPC_WEAK_FUNC(sub_82215B28);
PPC_FUNC_IMPL(__imp__sub_82215B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,432(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// addi r11,r3,432
	ctx.r11.s64 = ctx.r3.s64 + 432;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82215B40:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82215b80
	if (ctx.cr6.eq) goto loc_82215B80;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
loc_82215B58:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,112(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r6,r4,0,3,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82215b94
	if (!ctx.cr6.eq) goto loc_82215B94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82215b58
	if (ctx.cr6.lt) goto loc_82215B58;
loc_82215B80:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// blt cr6,0x82215b40
	if (ctx.cr6.lt) goto loc_82215B40;
	// blr 
	return;
loc_82215B94:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82215bbc
	if (ctx.cr6.eq) goto loc_82215BBC;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
loc_82215BBC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82215BD8"))) PPC_WEAK_FUNC(sub_82215BD8);
PPC_FUNC_IMPL(__imp__sub_82215BD8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82215c10
	if (!ctx.cr6.eq) goto loc_82215C10;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82215c48
	if (!ctx.cr6.eq) goto loc_82215C48;
	// b 0x82215c18
	goto loc_82215C18;
loc_82215C10:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82215c48
	if (ctx.cr6.eq) goto loc_82215C48;
loc_82215C18:
	// lwz r31,416(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82215c48
	if (ctx.cr6.eq) goto loc_82215C48;
loc_82215C24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82215C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82215c24
	if (!ctx.cr6.eq) goto loc_82215C24;
loc_82215C48:
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

__attribute__((alias("__imp__sub_82215C60"))) PPC_WEAK_FUNC(sub_82215C60);
PPC_FUNC_IMPL(__imp__sub_82215C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82215C68;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82215cb4
	if (ctx.cr6.eq) goto loc_82215CB4;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82215cb4
	if (ctx.cr6.eq) goto loc_82215CB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82215CB4:
	// lwz r31,420(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82215cfc
	if (ctx.cr6.eq) goto loc_82215CFC;
loc_82215CC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82215CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// or r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 | ctx.r8.u64;
	// bne cr6,0x82215cc4
	if (!ctx.cr6.eq) goto loc_82215CC4;
loc_82215CFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215D0C"))) PPC_WEAK_FUNC(sub_82215D0C);
PPC_FUNC_IMPL(__imp__sub_82215D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215D10"))) PPC_WEAK_FUNC(sub_82215D10);
PPC_FUNC_IMPL(__imp__sub_82215D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82215D18;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// lwz r22,308(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r30.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// stw r30,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r30.u32);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stw r30,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r30,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215e34
	if (ctx.cr6.eq) goto loc_82215E34;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82215D5C:
	// lwz r11,412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// lwzx r31,r11,r24
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// and r9,r10,r22
	ctx.r9.u64 = ctx.r10.u64 & ctx.r22.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82215e28
	if (ctx.cr6.eq) goto loc_82215E28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82215D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82215db0
	if (ctx.cr6.eq) goto loc_82215DB0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82215da4
	if (!ctx.cr6.eq) goto loc_82215DA4;
	// stw r31,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r31.u32);
	// b 0x82215da8
	goto loc_82215DA8;
loc_82215DA4:
	// stw r31,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r31.u32);
loc_82215DA8:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82215DB0:
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215dd8
	if (ctx.cr6.eq) goto loc_82215DD8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82215dcc
	if (!ctx.cr6.eq) goto loc_82215DCC;
	// stw r31,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r31.u32);
	// b 0x82215dd0
	goto loc_82215DD0;
loc_82215DCC:
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
loc_82215DD0:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82215DD8:
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215e00
	if (ctx.cr6.eq) goto loc_82215E00;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82215df4
	if (!ctx.cr6.eq) goto loc_82215DF4;
	// stw r31,424(r29)
	PPC_STORE_U32(ctx.r29.u32 + 424, ctx.r31.u32);
	// b 0x82215df8
	goto loc_82215DF8;
loc_82215DF4:
	// stw r31,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
loc_82215DF8:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82215E00:
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215e28
	if (ctx.cr6.eq) goto loc_82215E28;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82215e1c
	if (!ctx.cr6.eq) goto loc_82215E1C;
	// stw r31,428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 428, ctx.r31.u32);
	// b 0x82215e20
	goto loc_82215E20;
loc_82215E1C:
	// stw r31,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r31.u32);
loc_82215E20:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82215E28:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x82215d5c
	if (!ctx.cr0.eq) goto loc_82215D5C;
loc_82215E34:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215E3C"))) PPC_WEAK_FUNC(sub_82215E3C);
PPC_FUNC_IMPL(__imp__sub_82215E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215E40"))) PPC_WEAK_FUNC(sub_82215E40);
PPC_FUNC_IMPL(__imp__sub_82215E40) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82215e78
	if (!ctx.cr6.eq) goto loc_82215E78;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82215eb0
	if (!ctx.cr6.eq) goto loc_82215EB0;
	// b 0x82215e80
	goto loc_82215E80;
loc_82215E78:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82215eb0
	if (ctx.cr6.eq) goto loc_82215EB0;
loc_82215E80:
	// lwz r31,428(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82215eb0
	if (ctx.cr6.eq) goto loc_82215EB0;
loc_82215E8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82215EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82215e8c
	if (!ctx.cr6.eq) goto loc_82215E8C;
loc_82215EB0:
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

__attribute__((alias("__imp__sub_82215EC8"))) PPC_WEAK_FUNC(sub_82215EC8);
PPC_FUNC_IMPL(__imp__sub_82215EC8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82215f00
	if (!ctx.cr6.eq) goto loc_82215F00;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82215f38
	if (!ctx.cr6.eq) goto loc_82215F38;
	// b 0x82215f08
	goto loc_82215F08;
loc_82215F00:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82215f38
	if (ctx.cr6.eq) goto loc_82215F38;
loc_82215F08:
	// lwz r31,424(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82215f38
	if (ctx.cr6.eq) goto loc_82215F38;
loc_82215F14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82215F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82215f14
	if (!ctx.cr6.eq) goto loc_82215F14;
loc_82215F38:
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

__attribute__((alias("__imp__sub_82215F50"))) PPC_WEAK_FUNC(sub_82215F50);
PPC_FUNC_IMPL(__imp__sub_82215F50) {
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
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// addi r31,r3,432
	ctx.r31.s64 = ctx.r3.s64 + 432;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215fb4
	if (ctx.cr6.eq) goto loc_82215FB4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f31,280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f31.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// bl 0x82095840
	ctx.lr = 0x82215F94;
	sub_82095840(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82215FA0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f1,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stfs f31,24(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// bdnz 0x82215fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82215FA0;
loc_82215FB4:
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

__attribute__((alias("__imp__sub_82215FCC"))) PPC_WEAK_FUNC(sub_82215FCC);
PPC_FUNC_IMPL(__imp__sub_82215FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215FD0"))) PPC_WEAK_FUNC(sub_82215FD0);
PPC_FUNC_IMPL(__imp__sub_82215FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8233fa30
	ctx.lr = 0x82215FE0;
	__savefpr_26(ctx, base);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,644(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,464(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f8,468(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f5,460(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,388(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f10,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f3,-76(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// fadds f2,f8,f9
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f2,-72(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lwz r11,-76(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// fadds f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f1,-80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lwz r9,-80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// stw r9,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r9.u32);
	// stw r11,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// stw r10,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r10.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,616(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 616);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,624(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f2,f13,f12,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f6.f64));
	// lfs f30,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f29,636(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,632(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 632);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	ctx.f31.f64 = double(temp.f32);
	// lfs f5,628(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,612(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,604(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f12.f64 = double(temp.f32);
	// lfs f27,608(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f27.f64 = double(temp.f32);
	// lfs f13,480(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f11,f7,f11,f3
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f3.f64));
	// lfs f26,476(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f7,f2,f4
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmsubs f6,f0,f8,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 - ctx.f6.f64));
	// fmuls f3,f11,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f0,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f11,f6,f4
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmadds f9,f5,f3,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmuls f2,f10,f7
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f7,f30,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f7.f64));
	// fmadds f6,f12,f11,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f10,f29,f3,f2
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f4,f28,f3,f7
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fadds f3,f31,f6
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f6.f64));
	// stfs f3,-80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lwz r7,-80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// fmadds f8,f1,f11,f10
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f2,f27,f11,f4
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fadds f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f5,-72(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// fadds f1,f26,f2
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f2.f64));
	// stfs f1,-76(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lwz r8,-72(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r6,-76(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// stw r6,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r6.u32);
	// stw r7,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r7.u32);
	// stw r8,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r8.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8233fa7c
	ctx.lr = 0x82216104;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216110"))) PPC_WEAK_FUNC(sub_82216110);
PPC_FUNC_IMPL(__imp__sub_82216110) {
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
	// lwz r4,180(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// addi r7,r3,168
	ctx.r7.s64 = ctx.r3.s64 + 168;
	// addi r31,r11,31376
	ctx.r31.s64 = ctx.r11.s64 + 31376;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lfs f11,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// blt cr6,0x82216290
	if (ctx.cr6.lt) goto loc_82216290;
	// addi r5,r4,-3
	ctx.r5.s64 = ctx.r4.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82216158:
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82216168
	if (ctx.cr6.lt) goto loc_82216168;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82216170
	goto loc_82216170;
loc_82216168:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82216170:
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r30,r30,31
	ctx.r30.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221619c
	if (ctx.cr6.eq) goto loc_8221619C;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x8221619c
	if (ctx.cr6.eq) goto loc_8221619C;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8221619C:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822161b0
	if (ctx.cr6.lt) goto loc_822161B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822161bc
	goto loc_822161BC;
loc_822161B0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
loc_822161BC:
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r30,r30,31
	ctx.r30.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822161e8
	if (ctx.cr6.eq) goto loc_822161E8;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x822161e8
	if (ctx.cr6.eq) goto loc_822161E8;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_822161E8:
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822161f8
	if (ctx.cr6.lt) goto loc_822161F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82216204
	goto loc_82216204;
loc_822161F8:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
loc_82216204:
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r30,r30,31
	ctx.r30.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82216230
	if (ctx.cr6.eq) goto loc_82216230;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x82216230
	if (ctx.cr6.eq) goto loc_82216230;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82216230:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82216244
	if (ctx.cr6.lt) goto loc_82216244;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82216250
	goto loc_82216250;
loc_82216244:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,708
	ctx.r11.s64 = ctx.r11.s64 + 708;
loc_82216250:
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r30,r30,31
	ctx.r30.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221627c
	if (ctx.cr6.eq) goto loc_8221627C;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x8221627c
	if (ctx.cr6.eq) goto loc_8221627C;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8221627C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r10,r10,944
	ctx.r10.s64 = ctx.r10.s64 + 944;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82216158
	if (ctx.cr6.lt) goto loc_82216158;
loc_82216290:
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822162f4
	if (!ctx.cr6.lt) goto loc_822162F4;
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// mulli r10,r8,236
	ctx.r10.s64 = ctx.r8.s64 * 236;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822162A4:
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822162b4
	if (ctx.cr6.lt) goto loc_822162B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822162bc
	goto loc_822162BC;
loc_822162B4:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822162BC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822162e8
	if (ctx.cr6.eq) goto loc_822162E8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x822162e8
	if (ctx.cr6.eq) goto loc_822162E8;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_822162E8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// bdnz 0x822162a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822162A4;
loc_822162F4:
	// lfs f13,848(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822164ec
	if (ctx.cr6.gt) goto loc_822164EC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8221631c
	if (!ctx.cr6.eq) goto loc_8221631C;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82216328
	goto loc_82216328;
loc_8221631C:
	// clrldi r11,r6,32
	ctx.r11.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82216328:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// blt cr6,0x82216484
	if (ctx.cr6.lt) goto loc_82216484;
	// addi r6,r4,-3
	ctx.r6.s64 = ctx.r4.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8221634C:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82216360
	if (ctx.cr6.lt) goto loc_82216360;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82216368
	goto loc_82216368;
loc_82216360:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82216368:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82216390
	if (ctx.cr6.eq) goto loc_82216390;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82216390
	if (ctx.cr6.eq) goto loc_82216390;
	// fmuls f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_82216390:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822163a8
	if (ctx.cr6.lt) goto loc_822163A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822163b4
	goto loc_822163B4;
loc_822163A8:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
loc_822163B4:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822163dc
	if (ctx.cr6.eq) goto loc_822163DC;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x822163dc
	if (ctx.cr6.eq) goto loc_822163DC;
	// fmuls f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_822163DC:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822163f0
	if (ctx.cr6.lt) goto loc_822163F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822163fc
	goto loc_822163FC;
loc_822163F0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
loc_822163FC:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82216424
	if (ctx.cr6.eq) goto loc_82216424;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82216424
	if (ctx.cr6.eq) goto loc_82216424;
	// fmuls f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_82216424:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221643c
	if (ctx.cr6.lt) goto loc_8221643C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82216448
	goto loc_82216448;
loc_8221643C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,708
	ctx.r11.s64 = ctx.r11.s64 + 708;
loc_82216448:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82216470
	if (ctx.cr6.eq) goto loc_82216470;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82216470
	if (ctx.cr6.eq) goto loc_82216470;
	// fmuls f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_82216470:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r10,r10,944
	ctx.r10.s64 = ctx.r10.s64 + 944;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8221634c
	if (ctx.cr6.lt) goto loc_8221634C;
loc_82216484:
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822166c8
	if (!ctx.cr6.lt) goto loc_822166C8;
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// mulli r10,r8,236
	ctx.r10.s64 = ctx.r8.s64 * 236;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82216498:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822164ac
	if (ctx.cr6.lt) goto loc_822164AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822164b4
	goto loc_822164B4;
loc_822164AC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822164B4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822164dc
	if (ctx.cr6.eq) goto loc_822164DC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// beq cr6,0x822164dc
	if (ctx.cr6.eq) goto loc_822164DC;
	// fmuls f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_822164DC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// bdnz 0x82216498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82216498;
	// b 0x822166c8
	goto loc_822166C8;
loc_822164EC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x8221665c
	if (ctx.cr6.lt) goto loc_8221665C;
	// addi r6,r4,-3
	ctx.r6.s64 = ctx.r4.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82216504:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82216518
	if (ctx.cr6.lt) goto loc_82216518;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82216520
	goto loc_82216520;
loc_82216518:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82216520:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82216550
	if (ctx.cr6.eq) goto loc_82216550;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82216550
	if (ctx.cr6.eq) goto loc_82216550;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_82216550:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82216568
	if (ctx.cr6.lt) goto loc_82216568;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82216574
	goto loc_82216574;
loc_82216568:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
loc_82216574:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822165a4
	if (ctx.cr6.eq) goto loc_822165A4;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x822165a4
	if (ctx.cr6.eq) goto loc_822165A4;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_822165A4:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822165b8
	if (ctx.cr6.lt) goto loc_822165B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822165c4
	goto loc_822165C4;
loc_822165B8:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
loc_822165C4:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822165f4
	if (ctx.cr6.eq) goto loc_822165F4;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x822165f4
	if (ctx.cr6.eq) goto loc_822165F4;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_822165F4:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221660c
	if (ctx.cr6.lt) goto loc_8221660C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82216618
	goto loc_82216618;
loc_8221660C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,708
	ctx.r11.s64 = ctx.r11.s64 + 708;
loc_82216618:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82216648
	if (ctx.cr6.eq) goto loc_82216648;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82216648
	if (ctx.cr6.eq) goto loc_82216648;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_82216648:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r10,r10,944
	ctx.r10.s64 = ctx.r10.s64 + 944;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82216504
	if (ctx.cr6.lt) goto loc_82216504;
loc_8221665C:
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822166c8
	if (!ctx.cr6.lt) goto loc_822166C8;
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// mulli r10,r8,236
	ctx.r10.s64 = ctx.r8.s64 * 236;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82216670:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82216684
	if (ctx.cr6.lt) goto loc_82216684;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8221668c
	goto loc_8221668C;
loc_82216684:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8221668C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822166bc
	if (ctx.cr6.eq) goto loc_822166BC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// beq cr6,0x822166bc
	if (ctx.cr6.eq) goto loc_822166BC;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_822166BC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// bdnz 0x82216670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82216670;
loc_822166C8:
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// ble cr6,0x822166ec
	if (!ctx.cr6.gt) goto loc_822166EC;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822166ec
	if (!ctx.cr6.lt) goto loc_822166EC;
	// fdivs f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// stfs f1,640(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 640, temp.u32);
	// stfs f0,644(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 644, temp.u32);
	// b 0x822166f4
	goto loc_822166F4;
loc_822166EC:
	// stfs f0,640(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 640, temp.u32);
	// stfs f11,644(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 644, temp.u32);
loc_822166F4:
	// lfs f0,644(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x82216734
	if (ctx.cr6.eq) goto loc_82216734;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216728
	if (ctx.cr6.eq) goto loc_82216728;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82216728
	if (ctx.cr6.eq) goto loc_82216728;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82216734
	if (ctx.cr6.eq) goto loc_82216734;
loc_82216728:
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// b 0x8221673c
	goto loc_8221673C;
loc_82216734:
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// oris r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 2097152;
loc_8221673C:
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// bl 0x82217a18
	ctx.lr = 0x82216744;
	sub_82217A18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221675C"))) PPC_WEAK_FUNC(sub_8221675C);
PPC_FUNC_IMPL(__imp__sub_8221675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216760"))) PPC_WEAK_FUNC(sub_82216760);
PPC_FUNC_IMPL(__imp__sub_82216760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r8,180(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,31376
	ctx.r6.s64 = ctx.r11.s64 + 31376;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// lfs f13,48(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// blt cr6,0x82216834
	if (ctx.cr6.lt) goto loc_82216834;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82216794:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822167a4
	if (ctx.cr6.lt) goto loc_822167A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822167ac
	goto loc_822167AC;
loc_822167A4:
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822167AC:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x822167d8
	if (ctx.cr6.eq) goto loc_822167D8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822167d8
	if (ctx.cr6.eq) goto loc_822167D8;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_822167D8:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822167ec
	if (ctx.cr6.lt) goto loc_822167EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822167f8
	goto loc_822167F8;
loc_822167EC:
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
loc_822167F8:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x82216824
	if (ctx.cr6.eq) goto loc_82216824;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82216824
	if (ctx.cr6.eq) goto loc_82216824;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82216824:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r10,r10,472
	ctx.r10.s64 = ctx.r10.s64 + 472;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82216794
	if (ctx.cr6.lt) goto loc_82216794;
loc_82216834:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82216870
	if (!ctx.cr6.lt) goto loc_82216870;
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mulli r11,r9,236
	ctx.r11.s64 = ctx.r9.s64 * 236;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f9,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x82216870
	if (ctx.cr6.eq) goto loc_82216870;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82216870
	if (ctx.cr6.eq) goto loc_82216870;
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
loc_82216870:
	// fadds f12,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// beq cr6,0x82216900
	if (ctx.cr6.eq) goto loc_82216900;
	// lfs f12,92(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822168a8
	if (!ctx.cr6.gt) goto loc_822168A8;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822168a8
	if (!ctx.cr6.lt) goto loc_822168A8;
	// lfs f12,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,640(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 640, temp.u32);
	// stfs f12,644(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 644, temp.u32);
	// b 0x822168b0
	goto loc_822168B0;
loc_822168A8:
	// stfs f12,640(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 640, temp.u32);
	// stfs f13,644(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 644, temp.u32);
loc_822168B0:
	// lfs f0,644(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x822168f0
	if (ctx.cr6.eq) goto loc_822168F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822168e4
	if (ctx.cr6.eq) goto loc_822168E4;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822168e4
	if (ctx.cr6.eq) goto loc_822168E4;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822168f0
	if (ctx.cr6.eq) goto loc_822168F0;
loc_822168E4:
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// b 0x822168f8
	goto loc_822168F8;
loc_822168F0:
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// oris r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 2097152;
loc_822168F8:
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// b 0x82217a18
	sub_82217A18(ctx, base);
	return;
loc_82216900:
	// lfs f0,92(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82216928
	if (!ctx.cr6.gt) goto loc_82216928;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82216928
	if (!ctx.cr6.lt) goto loc_82216928;
	// lfs f0,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f12,640(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 640, temp.u32);
	// stfs f0,644(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 644, temp.u32);
	// b 0x82216930
	goto loc_82216930;
loc_82216928:
	// stfs f0,640(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 640, temp.u32);
	// stfs f13,644(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 644, temp.u32);
loc_82216930:
	// lfs f0,644(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82216970
	if (ctx.cr6.eq) goto loc_82216970;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216964
	if (ctx.cr6.eq) goto loc_82216964;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82216964
	if (ctx.cr6.eq) goto loc_82216964;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82216970
	if (ctx.cr6.eq) goto loc_82216970;
loc_82216964:
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// b 0x82216978
	goto loc_82216978;
loc_82216970:
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// oris r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 2097152;
loc_82216978:
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// b 0x82217a18
	sub_82217A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216980"))) PPC_WEAK_FUNC(sub_82216980);
PPC_FUNC_IMPL(__imp__sub_82216980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82216988;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,156(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,304(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822169c4
	if (!ctx.cr6.eq) goto loc_822169C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f5f90
	ctx.lr = 0x822169C0;
	sub_820F5F90(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
loc_822169C4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r9,r11,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822169e4
	if (ctx.cr6.eq) goto loc_822169E4;
loc_822169D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_822169E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822169d8
	if (ctx.cr6.eq) goto loc_822169D8;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822169d8
	if (ctx.cr6.eq) goto loc_822169D8;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822169d8
	if (!ctx.cr6.eq) goto loc_822169D8;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822169d8
	if (!ctx.cr6.eq) goto loc_822169D8;
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822169d8
	if (!ctx.cr6.eq) goto loc_822169D8;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216a60
	if (ctx.cr6.eq) goto loc_82216A60;
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822169d8
	if (ctx.cr6.eq) goto loc_822169D8;
loc_82216A60:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822169d8
	if (ctx.cr6.eq) goto loc_822169D8;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r28,176(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82216ad4
	if (ctx.cr6.eq) goto loc_82216AD4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r29,r11,-13936
	ctx.r29.s64 = ctx.r11.s64 + -13936;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x82216A94;
	sub_823052D8(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82216acc
	if (ctx.cr6.eq) goto loc_82216ACC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82216AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r8,r9,29,0,0
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r8,r9,29,2,2
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x20000000) | (ctx.r8.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r8,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r8.u32);
loc_82216ACC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x82216AD4;
	sub_823051A8(ctx, base);
loc_82216AD4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216b90
	if (ctx.cr6.eq) goto loc_82216B90;
	// addi r29,r31,184
	ctx.r29.s64 = ctx.r31.s64 + 184;
	// lfs f1,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820eccd8
	ctx.lr = 0x82216AF4;
	sub_820ECCD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822169d8
	if (ctx.cr6.eq) goto loc_822169D8;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f5,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f5,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fadds f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f7,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// fmr f9,f6
	ctx.f9.f64 = ctx.f6.f64;
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f4,f6,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f0.f64));
	// fmuls f2,f7,f8
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f5,f6,f3
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmsubs f0,f6,f8,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 - ctx.f10.f64));
	// fmadds f9,f7,f7,f4
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmsubs f13,f11,f3,f2
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 - ctx.f2.f64));
	// fmuls f11,f1,f1
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmsubs f10,f7,f12,f5
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f5.f64));
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f7,f13,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fdivs f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fcmpu cr6,f5,f11
	ctx.cr6.compare(ctx.f5.f64, ctx.f11.f64);
	// bgt cr6,0x822169d8
	if (ctx.cr6.gt) goto loc_822169D8;
loc_82216B90:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// and r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 & ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x821d3578
	ctx.lr = 0x82216BAC;
	sub_821D3578(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216BB4"))) PPC_WEAK_FUNC(sub_82216BB4);
PPC_FUNC_IMPL(__imp__sub_82216BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216BB8"))) PPC_WEAK_FUNC(sub_82216BB8);
PPC_FUNC_IMPL(__imp__sub_82216BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82216BC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// std r8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82216c04
	if (ctx.cr6.eq) goto loc_82216C04;
loc_82216BF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82216C04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82216bf8
	if (ctx.cr6.eq) goto loc_82216BF8;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82216bf8
	if (ctx.cr6.eq) goto loc_82216BF8;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82216bf8
	if (!ctx.cr6.eq) goto loc_82216BF8;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82216bf8
	if (!ctx.cr6.eq) goto loc_82216BF8;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r29,176(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82216cbc
	if (ctx.cr6.eq) goto loc_82216CBC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r30,r11,-13936
	ctx.r30.s64 = ctx.r11.s64 + -13936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x82216C7C;
	sub_823052D8(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82216cb4
	if (ctx.cr6.eq) goto loc_82216CB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82216CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r8,r9,29,0,0
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r8,r9,29,2,2
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x20000000) | (ctx.r8.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r8,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r8.u32);
loc_82216CB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x82216CBC;
	sub_823051A8(ctx, base);
loc_82216CBC:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r27,180(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// and r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 & ctx.r29.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82216d6c
	if (ctx.cr6.eq) goto loc_82216D6C;
	// lwz r26,340(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// lwz r25,332(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
loc_82216CE8:
	// and r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 & ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216d58
	if (ctx.cr6.eq) goto loc_82216D58;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82216d58
	if (ctx.cr6.eq) goto loc_82216D58;
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82216d58
	if (!ctx.cr6.eq) goto loc_82216D58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82216d58
	if (!ctx.cr6.eq) goto loc_82216D58;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82216D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82216d78
	if (!ctx.cr6.eq) goto loc_82216D78;
loc_82216D58:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,236
	ctx.r31.s64 = ctx.r31.s64 + 236;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82216ce8
	if (ctx.cr6.lt) goto loc_82216CE8;
loc_82216D6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82216D78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216D84"))) PPC_WEAK_FUNC(sub_82216D84);
PPC_FUNC_IMPL(__imp__sub_82216D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216D88"))) PPC_WEAK_FUNC(sub_82216D88);
PPC_FUNC_IMPL(__imp__sub_82216D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82216D90;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,156(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,304(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82216dc0
	if (!ctx.cr6.eq) goto loc_82216DC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x82216DBC;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_82216DC0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r26,28(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82216fd4
	if (!ctx.cr6.eq) goto loc_82216FD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82216fd4
	if (ctx.cr6.eq) goto loc_82216FD4;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82216fd4
	if (ctx.cr6.eq) goto loc_82216FD4;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82216fd4
	if (!ctx.cr6.eq) goto loc_82216FD4;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82216fd4
	if (!ctx.cr6.eq) goto loc_82216FD4;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r9,r10,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82216fd4
	if (!ctx.cr6.eq) goto loc_82216FD4;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216e58
	if (ctx.cr6.eq) goto loc_82216E58;
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216fd4
	if (ctx.cr6.eq) goto loc_82216FD4;
loc_82216E58:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82216fd4
	if (ctx.cr6.eq) goto loc_82216FD4;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r28,176(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82216ecc
	if (ctx.cr6.eq) goto loc_82216ECC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r30,r11,-13936
	ctx.r30.s64 = ctx.r11.s64 + -13936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x82216E8C;
	sub_823052D8(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82216ec4
	if (ctx.cr6.eq) goto loc_82216EC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82216EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r8,r9,29,0,0
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r8,r9,29,2,2
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x20000000) | (ctx.r8.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r8,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r8.u32);
loc_82216EC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x82216ECC;
	sub_823051A8(ctx, base);
loc_82216ECC:
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// lfs f1,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820eccd8
	ctx.lr = 0x82216EE0;
	sub_820ECCD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216fd4
	if (ctx.cr6.eq) goto loc_82216FD4;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// and r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 & ctx.r28.u64;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x821d3690
	ctx.lr = 0x82216F04;
	sub_821D3690(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82216fd4
	if (ctx.cr6.eq) goto loc_82216FD4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82216f38
	if (!ctx.cr6.eq) goto loc_82216F38;
	// bl 0x820ddca8
	ctx.lr = 0x82216F28;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216f50
	if (ctx.cr6.eq) goto loc_82216F50;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82216f70
	goto loc_82216F70;
loc_82216F38:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82216fc8
	if (ctx.cr6.eq) goto loc_82216FC8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82216f58
	if (!ctx.cr6.eq) goto loc_82216F58;
loc_82216F50:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82216f70
	goto loc_82216F70;
loc_82216F58:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82216F6C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82216F70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216fc8
	if (ctx.cr6.eq) goto loc_82216FC8;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216fc8
	if (ctx.cr6.eq) goto loc_82216FC8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// bne cr6,0x82216fbc
	if (!ctx.cr6.eq) goto loc_82216FBC;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lfs f0,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_82216FBC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x820daf68
	ctx.lr = 0x82216FC8;
	sub_820DAF68(ctx, base);
loc_82216FC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82216FD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216FE0"))) PPC_WEAK_FUNC(sub_82216FE0);
PPC_FUNC_IMPL(__imp__sub_82216FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82216FE8;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r31,r3,432
	ctx.r31.s64 = ctx.r3.s64 + 432;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217178
	if (!ctx.cr6.eq) goto loc_82217178;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// lwz r29,344(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x82217024;
	sub_823052D8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// addi r24,r31,-4
	ctx.r24.s64 = ctx.r31.s64 + -4;
	// li r27,6
	ctx.r27.s64 = 6;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r25,-32197
	ctx.r25.s64 = -2110062592;
	// lfs f30,252(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	ctx.f30.f64 = double(temp.f32);
	// addi r23,r11,-24932
	ctx.r23.s64 = ctx.r11.s64 + -24932;
	// lfs f31,104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
loc_8221704C:
	// lwz r3,-27096(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82217054;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82217060
	if (!ctx.cr6.eq) goto loc_82217060;
	// bl 0x821b3000
	ctx.lr = 0x82217060;
	sub_821B3000(ctx, base);
loc_82217060:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82217084
	if (!ctx.cr6.lt) goto loc_82217084;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r30,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r30.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82217084:
	// bl 0x8220e060
	ctx.lr = 0x82217088;
	sub_8220E060(ctx, base);
	// lwz r11,-27096(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -27096);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82388734
	ctx.lr = 0x82217098;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822170a4
	if (!ctx.cr6.eq) goto loc_822170A4;
	// bl 0x821b3000
	ctx.lr = 0x822170A4;
	sub_821B3000(ctx, base);
loc_822170A4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822170b8
	if (ctx.cr6.eq) goto loc_822170B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_822170B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822170cc
	if (ctx.cr6.eq) goto loc_822170CC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// b 0x822170d0
	goto loc_822170D0;
loc_822170CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822170D0:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// lwz r10,156(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 156);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8221712c
	if (ctx.cr6.eq) goto loc_8221712C;
	// lfs f0,196(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82217110
	if (!ctx.cr6.lt) goto loc_82217110;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x82217114
	goto loc_82217114;
loc_82217110:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_82217114:
	// lfs f0,280(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,280(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82217134
	if (!ctx.cr6.lt) goto loc_82217134;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82217134
	goto loc_82217134;
loc_8221712C:
	// lfs f12,196(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,280(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
loc_82217134:
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82217148
	if (!ctx.cr6.gt) goto loc_82217148;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82217148:
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// stwu r11,4(r24)
	ea = 4 + ctx.r24.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r24.u32 = ea;
	// bne 0x8221704c
	if (!ctx.cr0.eq) goto loc_8221704C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x82217178;
	sub_823051A8(ctx, base);
loc_82217178:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217188"))) PPC_WEAK_FUNC(sub_82217188);
PPC_FUNC_IMPL(__imp__sub_82217188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82217190;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r29,r3,432
	ctx.r29.s64 = ctx.r3.s64 + 432;
	// li r25,6
	ctx.r25.s64 = 6;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r11,4536
	ctx.r28.s64 = ctx.r11.s64 + 4536;
loc_822171AC:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82217244
	if (ctx.cr6.eq) goto loc_82217244;
	// lwz r30,344(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 344);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x822171C8;
	sub_823052D8(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822171e0
	if (!ctx.cr6.eq) goto loc_822171E0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8221720c
	goto loc_8221720C;
loc_822171E0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221720c
	if (ctx.cr6.eq) goto loc_8221720C;
loc_822171E8:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82217204
	if (ctx.cr6.eq) goto loc_82217204;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822171e8
	if (!ctx.cr6.eq) goto loc_822171E8;
	// b 0x8221720c
	goto loc_8221720C;
loc_82217204:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_8221720C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221722c
	if (ctx.cr6.eq) goto loc_8221722C;
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
	ctx.lr = 0x8221722C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221722C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x82217234;
	sub_823051A8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
loc_82217244:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x822171ac
	if (!ctx.cr0.eq) goto loc_822171AC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217258"))) PPC_WEAK_FUNC(sub_82217258);
PPC_FUNC_IMPL(__imp__sub_82217258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82217260;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addic. r11,r3,432
	ctx.xer.ca = ctx.r3.u32 > 4294966863;
	ctx.r11.s64 = ctx.r3.s64 + 432;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822172dc
	if (ctx.cr0.eq) goto loc_822172DC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822172dc
	if (ctx.cr6.eq) goto loc_822172DC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r27,6
	ctx.r27.s64 = 6;
loc_82217284:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822172d0
	if (ctx.cr0.lt) goto loc_822172D0;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_822172A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// and r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 & ctx.r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822172c4
	if (ctx.cr6.eq) goto loc_822172C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220d4a0
	ctx.lr = 0x822172C4;
	sub_8220D4A0(ctx, base);
loc_822172C4:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x822172a0
	if (!ctx.cr0.lt) goto loc_822172A0;
loc_822172D0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82217284
	if (!ctx.cr0.eq) goto loc_82217284;
loc_822172DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822172E4"))) PPC_WEAK_FUNC(sub_822172E4);
PPC_FUNC_IMPL(__imp__sub_822172E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822172E8"))) PPC_WEAK_FUNC(sub_822172E8);
PPC_FUNC_IMPL(__imp__sub_822172E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x822172F0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8233fa30
	ctx.lr = 0x822172F8;
	__savefpr_26(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f29,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f10,f30,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// bne cr6,0x82217380
	if (!ctx.cr6.eq) goto loc_82217380;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f29
	ctx.cr6.compare(ctx.f9.f64, ctx.f29.f64);
	// bne cr6,0x82217380
	if (!ctx.cr6.eq) goto loc_82217380;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221736C;
	sub_8233E4E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8233fa7c
	ctx.lr = 0x8221737C;
	__restfpr_26(ctx, base);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82217380:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82217390;
	sub_8233E4E0(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f28,f30,f31
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f27,f10,f31
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f26,f9,f31
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmadds f8,f11,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fcmpu cr6,f7,f29
	ctx.cr6.compare(ctx.f7.f64, ctx.f29.f64);
	// ble cr6,0x82217618
	if (!ctx.cr6.gt) goto loc_82217618;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f12,120(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f10,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fsqrts f30,f8
	ctx.f30.f64 = double(float(sqrt(ctx.f8.f64)));
	// fmuls f7,f30,f31
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fcmpu cr6,f7,f12
	ctx.cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// ble cr6,0x822173f4
	if (!ctx.cr6.gt) goto loc_822173F4;
	// fdivs f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 / ctx.f31.f64));
loc_822173F4:
	// lfs f13,224(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// bge cr6,0x82217450
	if (!ctx.cr6.lt) goto loc_82217450;
	// fmuls f12,f31,f31
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lfs f13,464(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f8,f9,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmsubs f5,f31,f29,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f29.f64 - ctx.f6.f64));
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82217494
	goto loc_82217494;
loc_82217450:
	// fmuls f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221745C;
	sub_8233C870(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f30.f64));
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82217494:
	// fmuls f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x8233c950
	ctx.lr = 0x822174AC;
	sub_8233C950(ctx, base);
	// lwz r11,304(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 304);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822174e0
	if (ctx.cr6.eq) goto loc_822174E0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x822174D0;
	sub_8233E4E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823054d0
	ctx.lr = 0x822174D8;
	sub_823054D0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x822174e4
	goto loc_822174E4;
loc_822174E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822174E4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82305858
	ctx.lr = 0x822174EC;
	sub_82305858(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f12,f13
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f7,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f2,f11,f31,f6
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f6.f64));
	// fmsubs f1,f10,f31,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 - ctx.f5.f64));
	// fmsubs f13,f0,f31,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f4.f64));
	// fmadds f6,f31,f12,f3
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fnmsubs f5,f12,f9,f2
	ctx.f5.f64 = double(float(-(ctx.f12.f64 * ctx.f9.f64 - ctx.f2.f64)));
	// fnmsubs f4,f0,f9,f1
	ctx.f4.f64 = double(float(-(ctx.f0.f64 * ctx.f9.f64 - ctx.f1.f64)));
	// fmadds f3,f10,f9,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f2,f11,f9,f6
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f1,f10,f8,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fnmsubs f13,f11,f8,f4
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f8.f64 - ctx.f4.f64)));
	// fmadds f12,f12,f8,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fnmsubs f11,f0,f8,f2
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f8.f64 - ctx.f2.f64)));
	// fmuls f10,f1,f1
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f6,f11,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 / ctx.f5.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f4,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82218640
	ctx.lr = 0x82217590;
	sub_82218640(ctx, base);
	// lwz r11,304(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 304);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82217618
	if (ctx.cr6.eq) goto loc_82217618;
	// lfs f0,324(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,328(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f12,332(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 332);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f2,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f3,144(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f4,136(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_82217618:
	// lfs f13,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f10,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fadds f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f27.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f0,56(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x82217664;
	sub_8233E4E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8233fa7c
	ctx.lr = 0x82217674;
	__restfpr_26(ctx, base);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217678"))) PPC_WEAK_FUNC(sub_82217678);
PPC_FUNC_IMPL(__imp__sub_82217678) {
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
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822176b0
	if (!ctx.cr6.eq) goto loc_822176B0;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822176b0
	if (ctx.cr6.eq) goto loc_822176B0;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82217750
	if (!ctx.cr6.eq) goto loc_82217750;
loc_822176B0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r6,r31,472
	ctx.r6.s64 = ctx.r31.s64 + 472;
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r31,460
	ctx.r5.s64 = ctx.r31.s64 + 460;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x822172e8
	ctx.lr = 0x822176E0;
	sub_822172E8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822176f8
	if (ctx.cr6.eq) goto loc_822176F8;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_822176F8:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,184
	ctx.r11.s64 = ctx.r31.s64 + 184;
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f5,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f2,184(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// fadds f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f1,188(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// fadds f0,f3,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_82217750:
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

__attribute__((alias("__imp__sub_82217764"))) PPC_WEAK_FUNC(sub_82217764);
PPC_FUNC_IMPL(__imp__sub_82217764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217768"))) PPC_WEAK_FUNC(sub_82217768);
PPC_FUNC_IMPL(__imp__sub_82217768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82217770;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82217820
	if (ctx.cr6.eq) goto loc_82217820;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82305f00
	ctx.lr = 0x822177DC;
	sub_82305F00(ctx, base);
	// addi r5,r31,532
	ctx.r5.s64 = ctx.r31.s64 + 532;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82305f50
	ctx.lr = 0x822177EC;
	sub_82305F50(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82305f50
	ctx.lr = 0x822177FC;
	sub_82305F50(ctx, base);
	// addi r30,r31,604
	ctx.r30.s64 = ctx.r31.s64 + 604;
	// addi r5,r31,568
	ctx.r5.s64 = ctx.r31.s64 + 568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82305f50
	ctx.lr = 0x82217810;
	sub_82305F50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82305f50
	ctx.lr = 0x82217820;
	sub_82305F50(ctx, base);
loc_82217820:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217828"))) PPC_WEAK_FUNC(sub_82217828);
PPC_FUNC_IMPL(__imp__sub_82217828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f29,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lfs f0,644(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,488(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lwz r8,464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// lfs f10,496(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,468(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// lfs f9,500(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,484(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// lfs f8,504(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// lfs f7,-40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	ctx.f7.f64 = double(temp.f32);
	// stw r9,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r9.u32);
	// lfs f5,-44(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f5,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// stw r8,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r8.u32);
	// lfs f4,-44(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f4.f64 = double(temp.f32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// lfs f3,-40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f7,f1
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f2,f0,f0
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r10,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r10.u32);
	// lfs f6,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f12,f6,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// lwz r6,460(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// fmadds f2,f13,f13,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// lfs f5,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fadds f9,f5,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// fmadds f10,f12,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// lwz r5,472(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// lwz r4,476(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// fadds f8,f4,f7
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// lwz r10,480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// stw r4,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r4.u32);
	// stw r10,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r10.u32);
	// fadds f7,f3,f6
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x82217950
	if (!ctx.cr6.gt) goto loc_82217950;
	// lfs f11,616(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 616);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f5,624(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f0,632(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 632);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,628(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,636(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,604(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,608(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f5.f64 = double(temp.f32);
	// lfs f31,612(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f2,f2,f13,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f6.f64));
	// lfs f6,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f0,f13,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f3,f11,f13,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f2,f10,f12,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f13,f5,f12,f4
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f12,f31,f12,f3
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fadds f0,f2,f30
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// b 0x8221795c
	goto loc_8221795C;
loc_82217950:
	// lfs f12,-56(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
loc_8221795C:
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8221799c
	if (!ctx.cr6.eq) goto loc_8221799C;
	// fmuls f11,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f6,f12,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f5,f0,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsqrts f11,f5
	ctx.f11.f64 = double(float(sqrt(ctx.f5.f64)));
	// fmuls f4,f11,f1
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fcmpu cr6,f4,f10
	ctx.cr6.compare(ctx.f4.f64, ctx.f10.f64);
	// ble cr6,0x8221799c
	if (!ctx.cr6.gt) goto loc_8221799C;
	// fdivs f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// fdivs f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
loc_8221799C:
	// lfs f11,296(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f5,-60(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fmuls f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f4,-56(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// fmuls f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f3,-48(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f2,-44(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// lwz r9,-60(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r8,-56(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// fmuls f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lwz r7,-48(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// stfs f7,-40(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// lwz r6,-44(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f6,-64(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stw r10,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r10.u32);
	// lwz r11,-40(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// stw r6,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r6.u32);
	// stw r7,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r7.u32);
	// stw r9,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r9.u32);
	// stw r8,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r8.u32);
	// stw r11,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r11.u32);
	// lfd f29,-24(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217A14"))) PPC_WEAK_FUNC(sub_82217A14);
PPC_FUNC_IMPL(__imp__sub_82217A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217A18"))) PPC_WEAK_FUNC(sub_82217A18);
PPC_FUNC_IMPL(__imp__sub_82217A18) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,640(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82217a9c
	if (!ctx.cr6.gt) goto loc_82217A9C;
	// lfs f12,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82217a9c
	if (!ctx.cr6.lt) goto loc_82217A9C;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r11,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r9,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r9.u32);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82217A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,52(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82217A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_82217A9C:
	// stfs f0,564(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stfs f0,556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stfs f0,536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stfs f0,600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stfs f0,596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f0,592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stfs f0,588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stfs f0,584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f0,572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// stfs f0,636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// stfs f0,632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stfs f0,624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stfs f0,620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stfs f0,616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stfs f0,612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfs f0,604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// stfs f0,460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stfs f0,464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// stfs f0,476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
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

__attribute__((alias("__imp__sub_82217B34"))) PPC_WEAK_FUNC(sub_82217B34);
PPC_FUNC_IMPL(__imp__sub_82217B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217B38"))) PPC_WEAK_FUNC(sub_82217B38);
PPC_FUNC_IMPL(__imp__sub_82217B38) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r8,r10,512
	ctx.r8.u64 = ctx.r10.u64 | 33554432;
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r8.u32);
	// stw r6,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r6.u32);
	// lwz r5,36(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82217B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217B94;
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

__attribute__((alias("__imp__sub_82217BA8"))) PPC_WEAK_FUNC(sub_82217BA8);
PPC_FUNC_IMPL(__imp__sub_82217BA8) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r3,r3,656
	ctx.r3.s64 = ctx.r3.s64 + 656;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82217c00
	if (ctx.cr6.eq) goto loc_82217C00;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82217BDC:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82217bfc
	if (ctx.cr6.eq) goto loc_82217BFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82217bdc
	if (ctx.cr6.lt) goto loc_82217BDC;
	// b 0x82217c00
	goto loc_82217C00;
loc_82217BFC:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82217C00:
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82217c14
	if (!ctx.cr6.eq) goto loc_82217C14;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x82106098
	ctx.lr = 0x82217C14;
	sub_82106098(ctx, base);
loc_82217C14:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 8388608;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82217C34"))) PPC_WEAK_FUNC(sub_82217C34);
PPC_FUNC_IMPL(__imp__sub_82217C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217C38"))) PPC_WEAK_FUNC(sub_82217C38);
PPC_FUNC_IMPL(__imp__sub_82217C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82217c8c
	if (ctx.cr6.eq) goto loc_82217C8C;
	// lwz r7,660(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82217c8c
	if (ctx.cr6.eq) goto loc_82217C8C;
	// lwz r8,676(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 676);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82217C60:
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82217c94
	if (ctx.cr6.eq) goto loc_82217C94;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82217c94
	if (ctx.cr6.eq) goto loc_82217C94;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82217c60
	if (ctx.cr6.lt) goto loc_82217C60;
loc_82217C8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82217C94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217C9C"))) PPC_WEAK_FUNC(sub_82217C9C);
PPC_FUNC_IMPL(__imp__sub_82217C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217CA0"))) PPC_WEAK_FUNC(sub_82217CA0);
PPC_FUNC_IMPL(__imp__sub_82217CA0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f13,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82217ce8
	if (!ctx.cr6.gt) goto loc_82217CE8;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82217ce8
	if (!ctx.cr6.lt) goto loc_82217CE8;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f1,640(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 640, temp.u32);
	// stfs f0,644(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 644, temp.u32);
	// b 0x82217cf0
	goto loc_82217CF0;
loc_82217CE8:
	// stfs f0,640(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// stfs f13,644(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
loc_82217CF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d6b20
	ctx.lr = 0x82217CF8;
	sub_820D6B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217a18
	ctx.lr = 0x82217D00;
	sub_82217A18(ctx, base);
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

__attribute__((alias("__imp__sub_82217D14"))) PPC_WEAK_FUNC(sub_82217D14);
PPC_FUNC_IMPL(__imp__sub_82217D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217D18"))) PPC_WEAK_FUNC(sub_82217D18);
PPC_FUNC_IMPL(__imp__sub_82217D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82217D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822182ac
	if (!ctx.cr6.eq) goto loc_822182AC;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822182ac
	if (!ctx.cr6.eq) goto loc_822182AC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r3,312
	ctx.r11.s64 = ctx.r3.s64 + 312;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// addi r7,r3,168
	ctx.r7.s64 = ctx.r3.s64 + 168;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,312(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// stfs f0,320(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// stfs f0,316(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lfs f0,640(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x82218174
	if (ctx.cr6.lt) goto loc_82218174;
	// addi r31,r3,-3
	ctx.r31.s64 = ctx.r3.s64 + -3;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82217D8C:
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82217da0
	if (ctx.cr6.lt) goto loc_82217DA0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82217da8
	goto loc_82217DA8;
loc_82217DA0:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82217DA8:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82217e7c
	if (ctx.cr6.eq) goto loc_82217E7C;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x82217e7c
	if (ctx.cr6.eq) goto loc_82217E7C;
	// lfs f13,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fadds f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f13,f9,f3
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmr f9,f2
	ctx.f9.f64 = ctx.f2.f64;
	// fmuls f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fadds f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmr f8,f1
	ctx.f8.f64 = ctx.f1.f64;
	// fadds f13,f3,f9
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f2
	ctx.f11.f64 = ctx.f2.f64;
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f7,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// lfs f5,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f2
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_82217E7C:
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82217e94
	if (ctx.cr6.lt) goto loc_82217E94;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82217ea0
	goto loc_82217EA0;
loc_82217E94:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
loc_82217EA0:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82217f74
	if (ctx.cr6.eq) goto loc_82217F74;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x82217f74
	if (ctx.cr6.eq) goto loc_82217F74;
	// lfs f13,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fadds f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f13,f9,f3
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f8,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f10,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// lfs f11,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmr f3,f2
	ctx.f3.f64 = ctx.f2.f64;
	// fadds f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f4,f13
	ctx.f4.f64 = ctx.f13.f64;
	// fadds f13,f5,f6
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmr f11,f1
	ctx.f11.f64 = ctx.f1.f64;
	// lfs f7,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f5,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82217F74:
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82217f88
	if (ctx.cr6.lt) goto loc_82217F88;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82217f94
	goto loc_82217F94;
loc_82217F88:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,472
	ctx.r10.s64 = ctx.r10.s64 + 472;
loc_82217F94:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82218068
	if (ctx.cr6.eq) goto loc_82218068;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x82218068
	if (ctx.cr6.eq) goto loc_82218068;
	// lfs f13,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fadds f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f13,f9,f3
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f8,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f9,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fmr f10,f1
	ctx.f10.f64 = ctx.f1.f64;
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f6,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fmr f3,f2
	ctx.f3.f64 = ctx.f2.f64;
	// fadds f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fadds f2,f7,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f11,f1
	ctx.f11.f64 = ctx.f1.f64;
	// fmr f9,f2
	ctx.f9.f64 = ctx.f2.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// lfs f10,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f10,f2
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f7,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f5,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82218068:
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82218080
	if (ctx.cr6.lt) goto loc_82218080;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8221808c
	goto loc_8221808C;
loc_82218080:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,708
	ctx.r10.s64 = ctx.r10.s64 + 708;
loc_8221808C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82218160
	if (ctx.cr6.eq) goto loc_82218160;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x82218160
	if (ctx.cr6.eq) goto loc_82218160;
	// lfs f13,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fadds f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f13,f9,f3
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f5,f2
	ctx.f5.f64 = ctx.f2.f64;
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// lfs f11,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fadds f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmr f11,f2
	ctx.f11.f64 = ctx.f2.f64;
	// lfs f7,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f5,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82218160:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r8,r8,944
	ctx.r8.s64 = ctx.r8.s64 + 944;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82217d8c
	if (ctx.cr6.lt) goto loc_82217D8C;
loc_82218174:
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82218284
	if (!ctx.cr6.lt) goto loc_82218284;
	// subf r10,r5,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r5.s64;
	// mulli r8,r5,236
	ctx.r8.s64 = ctx.r5.s64 * 236;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82218188:
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221819c
	if (ctx.cr6.lt) goto loc_8221819C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822181a4
	goto loc_822181A4;
loc_8221819C:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_822181A4:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82218278
	if (ctx.cr6.eq) goto loc_82218278;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// beq cr6,0x82218278
	if (ctx.cr6.eq) goto loc_82218278;
	// lfs f13,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fadds f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f13,f9,f3
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f5,f2
	ctx.f5.f64 = ctx.f2.f64;
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// lfs f8,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f11,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// lfs f10,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f7,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmr f11,f2
	ctx.f11.f64 = ctx.f2.f64;
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f5,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82218278:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,236
	ctx.r8.s64 = ctx.r8.s64 + 236;
	// bdnz 0x82218188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82218188;
loc_82218284:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,304(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// oris r6,r7,1024
	ctx.r6.u64 = ctx.r7.u64 | 67108864;
	// stw r6,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r6.u32);
	// b 0x822182c4
	goto loc_822182C4;
loc_822182AC:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,320(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
loc_822182C4:
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82257600
	ctx.lr = 0x822182D0;
	sub_82257600(ctx, base);
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f9,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f8,4(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f7,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f6,8(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218308"))) PPC_WEAK_FUNC(sub_82218308);
PPC_FUNC_IMPL(__imp__sub_82218308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// addi r9,r3,168
	ctx.r9.s64 = ctx.r3.s64 + 168;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218368
	if (ctx.cr6.eq) goto loc_82218368;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82218334:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82218348
	if (ctx.cr6.lt) goto loc_82218348;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82218350
	goto loc_82218350;
loc_82218348:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82218350:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// rlwinm r6,r7,0,4,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bdnz 0x82218334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82218334;
loc_82218368:
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,13,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218378"))) PPC_WEAK_FUNC(sub_82218378);
PPC_FUNC_IMPL(__imp__sub_82218378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82218380;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addi r25,r3,432
	ctx.r25.s64 = ctx.r3.s64 + 432;
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82218420
	if (ctx.cr6.eq) goto loc_82218420;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// li r26,6
	ctx.r26.s64 = 6;
loc_822183A0:
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r11,168
	ctx.r30.s64 = ctx.r11.s64 + 168;
	// blt 0x82218414
	if (ctx.cr0.lt) goto loc_82218414;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_822183C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822183e0
	if (ctx.cr6.lt) goto loc_822183E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822183ec
	goto loc_822183EC;
loc_822183E0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 * 236;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822183EC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82218408
	if (ctx.cr6.eq) goto loc_82218408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8220d4a0
	ctx.lr = 0x82218408;
	sub_8220D4A0(ctx, base);
loc_82218408:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x822183c4
	if (!ctx.cr0.lt) goto loc_822183C4;
loc_82218414:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x822183a0
	if (!ctx.cr0.eq) goto loc_822183A0;
loc_82218420:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r30,6
	ctx.r30.s64 = 6;
loc_82218428:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218438
	if (ctx.cr6.eq) goto loc_82218438;
	// bl 0x8220c280
	ctx.lr = 0x82218438;
	sub_8220C280(ctx, base);
loc_82218438:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82218428
	if (!ctx.cr0.eq) goto loc_82218428;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221844C"))) PPC_WEAK_FUNC(sub_8221844C);
PPC_FUNC_IMPL(__imp__sub_8221844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218450"))) PPC_WEAK_FUNC(sub_82218450);
PPC_FUNC_IMPL(__imp__sub_82218450) {
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
	// lbz r11,17(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218494
	if (ctx.cr6.eq) goto loc_82218494;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218490
	if (ctx.cr6.eq) goto loc_82218490;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82218490;
	sub_82080000(ctx, base);
loc_82218490:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_82218494:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822184B4"))) PPC_WEAK_FUNC(sub_822184B4);
PPC_FUNC_IMPL(__imp__sub_822184B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822184B8"))) PPC_WEAK_FUNC(sub_822184B8);
PPC_FUNC_IMPL(__imp__sub_822184B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82218500
	if (ctx.cr6.eq) goto loc_82218500;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_822184D8:
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822184fc
	if (ctx.cr6.eq) goto loc_822184FC;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822184d8
	if (ctx.cr6.lt) goto loc_822184D8;
	// b 0x82218500
	goto loc_82218500;
loc_822184FC:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82218500:
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r8,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221853C"))) PPC_WEAK_FUNC(sub_8221853C);
PPC_FUNC_IMPL(__imp__sub_8221853C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218540"))) PPC_WEAK_FUNC(sub_82218540);
PPC_FUNC_IMPL(__imp__sub_82218540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82218548;
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
loc_82218558:
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
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
loc_82218578:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,40(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r4,40(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822185ac
	if (!ctx.cr6.lt) goto loc_822185AC;
loc_82218594:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r4,40(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82218594
	if (ctx.cr6.lt) goto loc_82218594;
loc_822185AC:
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r4,40(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822185d8
	if (!ctx.cr6.lt) goto loc_822185D8;
loc_822185C0:
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r4,40(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822185c0
	if (ctx.cr6.lt) goto loc_822185C0;
loc_822185D8:
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82218610
	if (ctx.cr6.gt) goto loc_82218610;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stwx r4,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r4.u32);
	// ble cr6,0x82218578
	if (!ctx.cr6.gt) goto loc_82218578;
loc_82218610:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82218624
	if (!ctx.cr6.lt) goto loc_82218624;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82218540
	ctx.lr = 0x82218624;
	sub_82218540(ctx, base);
loc_82218624:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82218634
	if (!ctx.cr6.lt) goto loc_82218634;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x82218558
	goto loc_82218558;
loc_82218634:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221863C"))) PPC_WEAK_FUNC(sub_8221863C);
PPC_FUNC_IMPL(__imp__sub_8221863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218640"))) PPC_WEAK_FUNC(sub_82218640);
PPC_FUNC_IMPL(__imp__sub_82218640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f3,f8,f13
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f13,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fadds f10,f5,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fsubs f13,f9,f1
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f1,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// lfs f12,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f12,60(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fsubs f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fsubs f8,f4,f6
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fadds f11,f4,f6
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fadds f31,f3,f7
	ctx.f31.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fnmsubs f10,f10,f0,f12
	ctx.f10.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f10,40(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fnmsubs f6,f5,f0,f12
	ctx.f6.f64 = double(float(-(ctx.f5.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f5,16(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fnmsubs f3,f2,f0,f12
	ctx.f3.f64 = double(float(-(ctx.f2.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f1,24(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmuls f7,f31,f0
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221871C"))) PPC_WEAK_FUNC(sub_8221871C);
PPC_FUNC_IMPL(__imp__sub_8221871C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218720"))) PPC_WEAK_FUNC(sub_82218720);
PPC_FUNC_IMPL(__imp__sub_82218720) {
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
	ctx.lr = 0x82218738;
	sub_82081C00(ctx, base);
	// bl 0x82219fc0
	ctx.lr = 0x8221873C;
	sub_82219FC0(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8221874C;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82218760
	if (!ctx.cr6.eq) goto loc_82218760;
	// bl 0x821b3000
	ctx.lr = 0x8221875C;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82218760:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82218778
	if (ctx.cr6.eq) goto loc_82218778;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82218778:
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

__attribute__((alias("__imp__sub_8221878C"))) PPC_WEAK_FUNC(sub_8221878C);
PPC_FUNC_IMPL(__imp__sub_8221878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218790"))) PPC_WEAK_FUNC(sub_82218790);
PPC_FUNC_IMPL(__imp__sub_82218790) {
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
	// bl 0x822150e8
	ctx.lr = 0x822187A8;
	sub_822150E8(ctx, base);
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// bl 0x821cf758
	ctx.lr = 0x822187B0;
	sub_821CF758(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,-23316
	ctx.r7.s64 = ctx.r10.s64 + -23316;
	// addi r6,r8,-23256
	ctx.r6.s64 = ctx.r8.s64 + -23256;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r6.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r5.u32);
	// stfs f0,1048(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// stfs f0,1044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,1040(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1040, temp.u32);
	// stfs f0,1060(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// stfs f0,1056(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1056, temp.u32);
	// stfs f0,1052(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1052, temp.u32);
	// stfs f0,984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
	// stfs f0,980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// stfs f0,976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// stfs f0,972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// stfs f0,964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// stfs f0,960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
	// stfs f0,956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 956, temp.u32);
	// stfs f0,952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 952, temp.u32);
	// stfs f0,944(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 944, temp.u32);
	// stfs f0,940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 940, temp.u32);
	// stfs f0,936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 936, temp.u32);
	// stfs f0,932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// stfs f13,988(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// stfs f13,968(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// stfs f13,948(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 948, temp.u32);
	// stfs f13,928(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// bl 0x820d6b20
	ctx.lr = 0x8221884C;
	sub_820D6B20(ctx, base);
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

__attribute__((alias("__imp__sub_82218864"))) PPC_WEAK_FUNC(sub_82218864);
PPC_FUNC_IMPL(__imp__sub_82218864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218868"))) PPC_WEAK_FUNC(sub_82218868);
PPC_FUNC_IMPL(__imp__sub_82218868) {
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,-23316
	ctx.r9.s64 = ctx.r11.s64 + -23316;
	// addi r8,r10,-23256
	ctx.r8.s64 = ctx.r10.s64 + -23256;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,776
	ctx.r3.s64 = ctx.r3.s64 + 776;
	// stw r8,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821cf860
	ctx.lr = 0x822188A4;
	sub_821CF860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82215410
	ctx.lr = 0x822188AC;
	sub_82215410(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822188c4
	if (ctx.cr6.eq) goto loc_822188C4;
	// bl 0x82219ea8
	ctx.lr = 0x822188C0;
	sub_82219EA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822188C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822188DC"))) PPC_WEAK_FUNC(sub_822188DC);
PPC_FUNC_IMPL(__imp__sub_822188DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822188E0"))) PPC_WEAK_FUNC(sub_822188E0);
PPC_FUNC_IMPL(__imp__sub_822188E0) {
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
	// bl 0x821cf8e0
	ctx.lr = 0x822188FC;
	sub_821CF8E0(ctx, base);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r4,-776
	ctx.r31.s64 = ctx.r4.s64 + -776;
	// bne cr6,0x8221890c
	if (!ctx.cr6.eq) goto loc_8221890C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221890C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-776
	ctx.r3.s64 = ctx.r30.s64 + -776;
	// bl 0x82215550
	ctx.lr = 0x82218918;
	sub_82215550(ctx, base);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r11,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r11.u32);
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r10,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r10.u32);
	// lwz r9,268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// stw r9,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r9.u32);
	// lwz r8,272(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// stw r8,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r8.u32);
	// lwz r7,276(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// stw r7,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r7.u32);
	// lwz r6,280(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// stw r6,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r6.u32);
	// lwz r5,284(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// stw r5,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218968"))) PPC_WEAK_FUNC(sub_82218968);
PPC_FUNC_IMPL(__imp__sub_82218968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82218970;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r3,-708
	ctx.r6.s64 = ctx.r3.s64 + -708;
	// addi r3,r3,-608
	ctx.r3.s64 = ctx.r3.s64 + -608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821d3920
	ctx.lr = 0x8221898C;
	sub_821D3920(ctx, base);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,-416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -416, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -412, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,-408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -408, ctx.r9.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r8,-404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -404, ctx.r8.u32);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r7,-400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -400, ctx.r7.u32);
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r6,-396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -396, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822189C4"))) PPC_WEAK_FUNC(sub_822189C4);
PPC_FUNC_IMPL(__imp__sub_822189C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822189C8"))) PPC_WEAK_FUNC(sub_822189C8);
PPC_FUNC_IMPL(__imp__sub_822189C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-608
	ctx.r3.s64 = ctx.r3.s64 + -608;
	// b 0x821d3788
	sub_821D3788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822189D0"))) PPC_WEAK_FUNC(sub_822189D0);
PPC_FUNC_IMPL(__imp__sub_822189D0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82218a04
	if (!ctx.cr6.eq) goto loc_82218A04;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82218a04
	if (ctx.cr6.eq) goto loc_82218A04;
	// lwz r3,780(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218a04
	if (ctx.cr6.eq) goto loc_82218A04;
	// bl 0x820f0e50
	ctx.lr = 0x82218A04;
	sub_820F0E50(ctx, base);
loc_82218A04:
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82218a20
	if (!ctx.cr6.eq) goto loc_82218A20;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
loc_82218A20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218A30"))) PPC_WEAK_FUNC(sub_82218A30);
PPC_FUNC_IMPL(__imp__sub_82218A30) {
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
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82218a74
	if (ctx.cr6.eq) goto loc_82218A74;
	// addi r4,r3,928
	ctx.r4.s64 = ctx.r3.s64 + 928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x82218A64;
	sub_8233E4E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823054d0
	ctx.lr = 0x82218A6C;
	sub_823054D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82218a78
	goto loc_82218A78;
loc_82218A74:
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
loc_82218A78:
	// addi r4,r31,992
	ctx.r4.s64 = ctx.r31.s64 + 992;
	// bl 0x82305858
	ctx.lr = 0x82218A80;
	sub_82305858(ctx, base);
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

__attribute__((alias("__imp__sub_82218A94"))) PPC_WEAK_FUNC(sub_82218A94);
PPC_FUNC_IMPL(__imp__sub_82218A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218A98"))) PPC_WEAK_FUNC(sub_82218A98);
PPC_FUNC_IMPL(__imp__sub_82218A98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82218ab8
	if (ctx.cr6.eq) goto loc_82218AB8;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x82218ac4
	goto loc_82218AC4;
loc_82218AB8:
	// lwz r11,976(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 976);
	// lwz r10,980(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	// lwz r9,984(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 984);
loc_82218AC4:
	// stw r9,1016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1016, ctx.r9.u32);
	// stw r11,1008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1008, ctx.r11.u32);
	// lwz r11,992(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 992);
	// lwz r9,996(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 996);
	// lwz r8,1000(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
	// lwz r7,1004(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1004);
	// stw r10,1012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1012, ctx.r10.u32);
	// addi r10,r3,992
	ctx.r10.s64 = ctx.r3.s64 + 992;
	// stw r11,1020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1020, ctx.r11.u32);
	// stw r9,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r9.u32);
	// stw r8,1028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1028, ctx.r8.u32);
	// stw r7,1032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1032, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218AF8"))) PPC_WEAK_FUNC(sub_82218AF8);
PPC_FUNC_IMPL(__imp__sub_82218AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,976
	ctx.r11.s64 = ctx.r3.s64 + 976;
	// lfs f13,976(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 976);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,976(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 976, temp.u32);
	// lfs f11,980(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,980(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 980, temp.u32);
	// lfs f8,984(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 984);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,984(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 984, temp.u32);
	// lfs f5,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f1,68(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f4
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f11,76(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218B70"))) PPC_WEAK_FUNC(sub_82218B70);
PPC_FUNC_IMPL(__imp__sub_82218B70) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82218B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82218BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,304(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r6,r7,32768
	ctx.r6.u64 = ctx.r7.u64 | 2147483648;
	// stw r6,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82218BCC"))) PPC_WEAK_FUNC(sub_82218BCC);
PPC_FUNC_IMPL(__imp__sub_82218BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218BD0"))) PPC_WEAK_FUNC(sub_82218BD0);
PPC_FUNC_IMPL(__imp__sub_82218BD0) {
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
	// lwz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 780);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// addi r5,r3,928
	ctx.r5.s64 = ctx.r3.s64 + 928;
	// addi r4,r3,312
	ctx.r4.s64 = ctx.r3.s64 + 312;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r10.u32);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r9,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r9.u32);
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r8,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r8.u32);
	// bl 0x82257540
	ctx.lr = 0x82218C18;
	sub_82257540(ctx, base);
	// lwz r7,304(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82218c38
	if (ctx.cr6.eq) goto loc_82218C38;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82218c44
	goto loc_82218C44;
loc_82218C38:
	// lwz r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// lwz r10,980(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// lwz r9,984(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
loc_82218C44:
	// stw r9,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r9.u32);
	// stw r10,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r10.u32);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218C68"))) PPC_WEAK_FUNC(sub_82218C68);
PPC_FUNC_IMPL(__imp__sub_82218C68) {
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
	// lwz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 780);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f11,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,808(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 808);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f6,f6,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f2,f8,f8,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f1,f7,f7,f10
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fmadds f10,f3,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fmadds f12,f5,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f11,f4,f4,f1
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fsqrts f7,f10
	ctx.f7.f64 = double(float(sqrt(ctx.f10.f64)));
	// stfs f7,324(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// fsqrts f8,f11
	ctx.f8.f64 = double(float(sqrt(ctx.f11.f64)));
	// stfs f8,328(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// fsqrts f9,f12
	ctx.f9.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f9,332(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// fmr f11,f7
	ctx.f11.f64 = ctx.f7.f64;
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bgt cr6,0x82218d44
	if (ctx.cr6.gt) goto loc_82218D44;
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x82218d44
	if (ctx.cr6.gt) goto loc_82218D44;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x82218d44
	if (ctx.cr6.gt) goto loc_82218D44;
	// lfs f0,812(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 812);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// blt cr6,0x82218d44
	if (ctx.cr6.lt) goto loc_82218D44;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x82218d44
	if (ctx.cr6.lt) goto loc_82218D44;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x82218d44
	if (ctx.cr6.lt) goto loc_82218D44;
	// lwz r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r9,r10,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// b 0x82218d4c
	goto loc_82218D4C;
loc_82218D44:
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 268435456;
loc_82218D4C:
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r10.u32);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r8,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r8.u32);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r7,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r7.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lwz r6,964(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// lwz r5,968(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r4.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r8.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r7,932(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,936(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r5.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r10.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r9.u32);
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// lwz r8,948(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r7,952(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// bl 0x82218a30
	ctx.lr = 0x82218DE8;
	sub_82218A30(ctx, base);
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x82218e18
	if (!ctx.cr6.eq) goto loc_82218E18;
	// lwz r11,992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	// addi r10,r31,992
	ctx.r10.s64 = ctx.r31.s64 + 992;
	// lwz r9,996(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// lwz r8,1000(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// lwz r7,1004(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// stw r11,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r11.u32);
	// stw r9,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r9.u32);
	// stw r8,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r8.u32);
	// stw r7,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r7.u32);
loc_82218E18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218E30"))) PPC_WEAK_FUNC(sub_82218E30);
PPC_FUNC_IMPL(__imp__sub_82218E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82218E38;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r29,r3,168
	ctx.r29.s64 = ctx.r3.s64 + 168;
	// lwz r3,780(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 780);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r24,180(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// bl 0x820ac008
	ctx.lr = 0x82218E58;
	sub_820AC008(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r22,r11,31376
	ctx.r22.s64 = ctx.r11.s64 + 31376;
	// beq cr6,0x82218f08
	if (ctx.cr6.eq) goto loc_82218F08;
	// lfs f31,52(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
loc_82218E78:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82218e8c
	if (ctx.cr6.lt) goto loc_82218E8C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82218e94
	goto loc_82218E94;
loc_82218E8C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82218E94:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,40(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82218ef8
	if (ctx.cr6.eq) goto loc_82218EF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82306938
	ctx.lr = 0x82218ECC;
	sub_82306938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218ef8
	if (!ctx.cr6.eq) goto loc_82218EF8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// oris r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 268435456;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x82218EF8;
	sub_8233E4E0(ctx, base);
loc_82218EF8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,236
	ctx.r27.s64 = ctx.r27.s64 + 236;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82218e78
	if (ctx.cr6.lt) goto loc_82218E78;
loc_82218F08:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218f5c
	if (ctx.cr6.eq) goto loc_82218F5C;
	// lwz r10,304(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 304);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r9,r10,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// oris r8,r9,32776
	ctx.r8.u64 = ctx.r9.u64 | 2148007936;
	// stw r8,304(r26)
	PPC_STORE_U32(ctx.r26.u32 + 304, ctx.r8.u32);
	// beq cr6,0x82218f5c
	if (ctx.cr6.eq) goto loc_82218F5C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82218f5c
	if (ctx.cr6.eq) goto loc_82218F5C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82218f4c
	if (ctx.cr6.eq) goto loc_82218F4C;
	// lwz r11,148(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r26)
	PPC_STORE_U32(ctx.r26.u32 + 148, ctx.r10.u32);
loc_82218F4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,48(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_82218F5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218F68"))) PPC_WEAK_FUNC(sub_82218F68);
PPC_FUNC_IMPL(__imp__sub_82218F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82218F70;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8233fa1c
	ctx.lr = 0x82218F78;
	__savefpr_21(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,31376
	ctx.r31.s64 = ctx.r11.s64 + 31376;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bctrl 
	ctx.lr = 0x82218FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,304(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// rlwinm r7,r8,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82219048
	if (!ctx.cr6.eq) goto loc_82219048;
	// stfs f31,564(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 564, temp.u32);
	// stfs f31,560(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 560, temp.u32);
	// stfs f31,556(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 556, temp.u32);
	// stfs f31,552(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 552, temp.u32);
	// stfs f31,548(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 548, temp.u32);
	// stfs f31,544(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 544, temp.u32);
	// stfs f31,540(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 540, temp.u32);
	// stfs f31,536(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 536, temp.u32);
	// stfs f31,532(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 532, temp.u32);
	// stfs f31,600(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 600, temp.u32);
	// stfs f31,596(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 596, temp.u32);
	// stfs f31,592(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 592, temp.u32);
	// stfs f31,588(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 588, temp.u32);
	// stfs f31,584(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 584, temp.u32);
	// stfs f31,580(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 580, temp.u32);
	// stfs f31,576(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 576, temp.u32);
	// stfs f31,572(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 572, temp.u32);
	// stfs f31,568(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 568, temp.u32);
	// stfs f31,636(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 636, temp.u32);
	// stfs f31,632(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 632, temp.u32);
	// stfs f31,628(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 628, temp.u32);
	// stfs f31,624(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 624, temp.u32);
	// stfs f31,620(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 620, temp.u32);
	// stfs f31,616(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 616, temp.u32);
	// stfs f31,612(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 612, temp.u32);
	// stfs f31,608(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 608, temp.u32);
	// stfs f31,604(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 604, temp.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8233fa68
	ctx.lr = 0x82219044;
	__restfpr_21(ctx, base);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82219048:
	// lwz r29,180(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmr f23,f31
	ctx.f23.f64 = ctx.f31.f64;
	// fmr f22,f31
	ctx.f22.f64 = ctx.f31.f64;
	// addi r5,r30,168
	ctx.r5.s64 = ctx.r30.s64 + 168;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82219258
	if (ctx.cr6.eq) goto loc_82219258;
	// lfs f21,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f21.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
loc_822190AC:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stfs f31,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f21,160(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f21,144(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f21,128(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// blt cr6,0x822190e4
	if (ctx.cr6.lt) goto loc_822190E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822190ec
	goto loc_822190EC;
loc_822190E4:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_822190EC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82219224
	if (ctx.cr6.eq) goto loc_82219224;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82219224
	if (ctx.cr6.eq) goto loc_82219224;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f12,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// lfs f10,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// lfs f6,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fadds f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// lfs f3,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f12,f10,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// fadds f11,f3,f4
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fsubs f10,f2,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bgt cr6,0x822191dc
	if (ctx.cr6.gt) goto loc_822191DC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822191a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822191A4;
	// bdzf 4*cr6+eq,0x822191b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822191B8;
	// bne cr6,0x822191cc
	if (!ctx.cr6.eq) goto loc_822191CC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f1,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821f0d58
	ctx.lr = 0x822191A0;
	sub_821F0D58(ctx, base);
	// b 0x822191dc
	goto loc_822191DC;
loc_822191A4:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821f2748
	ctx.lr = 0x822191B4;
	sub_821F2748(ctx, base);
	// b 0x822191dc
	goto loc_822191DC;
loc_822191B8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821e78c0
	ctx.lr = 0x822191C8;
	sub_821E78C0(ctx, base);
	// b 0x822191dc
	goto loc_822191DC;
loc_822191CC:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821e8fa8
	ctx.lr = 0x822191DC;
	sub_821E8FA8(ctx, base);
loc_822191DC:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fadds f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fadds f29,f13,f29
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// fadds f28,f12,f28
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fadds f27,f11,f27
	ctx.f27.f64 = double(float(ctx.f11.f64 + ctx.f27.f64));
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fadds f26,f10,f26
	ctx.f26.f64 = double(float(ctx.f10.f64 + ctx.f26.f64));
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// fadds f25,f9,f25
	ctx.f25.f64 = double(float(ctx.f9.f64 + ctx.f25.f64));
	// lfs f7,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// fadds f24,f8,f24
	ctx.f24.f64 = double(float(ctx.f8.f64 + ctx.f24.f64));
	// lfs f6,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f6.f64 = double(temp.f32);
	// fadds f23,f7,f23
	ctx.f23.f64 = double(float(ctx.f7.f64 + ctx.f23.f64));
	// fadds f22,f6,f22
	ctx.f22.f64 = double(float(ctx.f6.f64 + ctx.f22.f64));
loc_82219224:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,236
	ctx.r8.s64 = ctx.r8.s64 + 236;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822190ac
	if (ctx.cr6.lt) goto loc_822190AC;
	// stfs f22,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f23,204(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f24,200(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f25,196(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f26,192(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f27,188(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f28,184(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
loc_82219258:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r3,r30,532
	ctx.r3.s64 = ctx.r30.s64 + 532;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8221926C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8221926c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221926C;
	// addi r4,r30,568
	ctx.r4.s64 = ctx.r30.s64 + 568;
	// bl 0x82305d28
	ctx.lr = 0x82219280;
	sub_82305D28(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8233fa68
	ctx.lr = 0x8221928C;
	__restfpr_21(ctx, base);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219290"))) PPC_WEAK_FUNC(sub_82219290);
PPC_FUNC_IMPL(__imp__sub_82219290) {
	PPC_FUNC_PROLOGUE();
	// b 0x82217d18
	sub_82217D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219294"))) PPC_WEAK_FUNC(sub_82219294);
PPC_FUNC_IMPL(__imp__sub_82219294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219298"))) PPC_WEAK_FUNC(sub_82219298);
PPC_FUNC_IMPL(__imp__sub_82219298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822192C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r31,928
	ctx.r5.s64 = ctx.r31.s64 + 928;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82257540
	ctx.lr = 0x822192D4;
	sub_82257540(ctx, base);
	// lfs f12,928(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f11,932(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// lfs f10,936(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f9,944(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f8,948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,40(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f7,952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,44(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f6,960(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,52(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f5,964(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,56(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f4,968(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,60(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// stfs f3,68(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f2,72(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f1,76(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lwz r7,304(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r6,r7,0,3,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82219388
	if (ctx.cr6.eq) goto loc_82219388;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82257cb8
	ctx.lr = 0x82219374;
	sub_82257CB8(ctx, base);
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
loc_82219388:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821a6508
	ctx.lr = 0x82219394;
	sub_821A6508(ctx, base);
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

__attribute__((alias("__imp__sub_822193A8"))) PPC_WEAK_FUNC(sub_822193A8);
PPC_FUNC_IMPL(__imp__sub_822193A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -776);
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822193BC"))) PPC_WEAK_FUNC(sub_822193BC);
PPC_FUNC_IMPL(__imp__sub_822193BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822193C0"))) PPC_WEAK_FUNC(sub_822193C0);
PPC_FUNC_IMPL(__imp__sub_822193C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,-128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -128);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,-596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -596);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82219418
	if (!ctx.cr6.lt) goto loc_82219418;
	// lwz r10,-608(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -608);
	// mulli r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 * 236;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219418
	if (ctx.cr0.eq) goto loc_82219418;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82219418
	if (ctx.cr6.eq) goto loc_82219418;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,-440(r3)
	PPC_STORE_U32(ctx.r3.u32 + -440, ctx.r10.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r9,-436(r3)
	PPC_STORE_U32(ctx.r3.u32 + -436, ctx.r9.u32);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r8,-432(r3)
	PPC_STORE_U32(ctx.r3.u32 + -432, ctx.r8.u32);
	// blr 
	return;
loc_82219418:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-432(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + -432, temp.u32);
	// stfs f0,-436(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + -436, temp.u32);
	// stfs f0,-440(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + -440, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219434"))) PPC_WEAK_FUNC(sub_82219434);
PPC_FUNC_IMPL(__imp__sub_82219434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219438"))) PPC_WEAK_FUNC(sub_82219438);
PPC_FUNC_IMPL(__imp__sub_82219438) {
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
	// lfs f13,980(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// lfs f0,1776(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1776);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822194b8
	if (!ctx.cr6.lt) goto loc_822194B8;
	// lwz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822194b8
	if (ctx.cr6.eq) goto loc_822194B8;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822194b8
	if (ctx.cr6.eq) goto loc_822194B8;
	// lfs f0,464(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// beq cr6,0x822194b8
	if (ctx.cr6.eq) goto loc_822194B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,103
	ctx.r4.s64 = 103;
	// bl 0x820daf68
	ctx.lr = 0x822194B8;
	sub_820DAF68(ctx, base);
loc_822194B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822194CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217768
	ctx.lr = 0x822194D4;
	sub_82217768(ctx, base);
	// addi r4,r31,928
	ctx.r4.s64 = ctx.r31.s64 + 928;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x821d25b8
	ctx.lr = 0x822194E0;
	sub_821D25B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// addi r30,r31,184
	ctx.r30.s64 = ctx.r31.s64 + 184;
	// bl 0x82215f50
	ctx.lr = 0x822194F0;
	sub_82215F50(ctx, base);
	// lwz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r8,200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r9,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r9.u32);
	// lwz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r6,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r6.u32);
	// lwz r5,192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r5,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r5.u32);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r4,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r4.u32);
	// stw r8,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r8.u32);
	// stw r7,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219538"))) PPC_WEAK_FUNC(sub_82219538);
PPC_FUNC_IMPL(__imp__sub_82219538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -776);
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221954C"))) PPC_WEAK_FUNC(sub_8221954C);
PPC_FUNC_IMPL(__imp__sub_8221954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219550"))) PPC_WEAK_FUNC(sub_82219550);
PPC_FUNC_IMPL(__imp__sub_82219550) {
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
	ctx.lr = 0x82219564;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 780);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822197dc
	if (!ctx.cr6.eq) goto loc_822197DC;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822197dc
	if (!ctx.cr6.eq) goto loc_822197DC;
	// lwz r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// clrlwi r8,r10,7
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFF;
	// rlwinm r8,r8,0,31,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF000001;
	// lfs f30,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822195b4
	if (ctx.cr6.eq) goto loc_822195B4;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_822195B4:
	// addi r5,r31,992
	ctx.r5.s64 = ctx.r31.s64 + 992;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1020
	ctx.r3.s64 = ctx.r31.s64 + 1020;
	// bl 0x82191248
	ctx.lr = 0x822195C8;
	sub_82191248(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82218640
	ctx.lr = 0x822195D4;
	sub_82218640(ctx, base);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r11,r10,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221965c
	if (ctx.cr6.eq) goto loc_8221965C;
	// lfs f0,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f13,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f12,332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x822196d4
	goto loc_822196D4;
loc_8221965C:
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f4,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f6,260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f11,f8
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f4,f8
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f9,f0,f6
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f8,f12,f6
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f10,f6,f2
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_822196D4:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// lfs f8,1008(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,1012(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221975c
	if (ctx.cr6.eq) goto loc_8221975C;
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f10,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f5,1016(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// addi r4,r31,312
	ctx.r4.s64 = ctx.r31.s64 + 312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fadds f31,f4,f11
	ctx.f31.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fadds f30,f3,f9
	ctx.f30.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fadds f28,f2,f7
	ctx.f28.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// bl 0x82257600
	ctx.lr = 0x82219734;
	sub_82257600(ctx, base);
	// lfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f28,f1
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f1.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsubs f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x8221979c
	goto loc_8221979C;
loc_8221975C:
	// lfs f13,984(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f12,976(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f10,1016(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lfs f7,980(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fadds f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f3,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8221979C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8233e4e0
	ctx.lr = 0x822197C8;
	sub_8233E4E0(ctx, base);
	// lwz r3,780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// bl 0x820efed0
	ctx.lr = 0x822197D0;
	sub_820EFED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82219a68
	ctx.lr = 0x822197DC;
	sub_82219A68(ctx, base);
loc_822197DC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8233fa84
	ctx.lr = 0x822197E8;
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

__attribute__((alias("__imp__sub_822197F8"))) PPC_WEAK_FUNC(sub_822197F8);
PPC_FUNC_IMPL(__imp__sub_822197F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// b 0x82215890
	sub_82215890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219800"))) PPC_WEAK_FUNC(sub_82219800);
PPC_FUNC_IMPL(__imp__sub_82219800) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,784(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 784);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219808"))) PPC_WEAK_FUNC(sub_82219808);
PPC_FUNC_IMPL(__imp__sub_82219808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// addi r11,r3,-776
	ctx.r11.s64 = ctx.r3.s64 + -776;
	// stfs f1,-392(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + -392, temp.u32);
	// lfs f13,-312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -312);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,460
	ctx.r10.s64 = ctx.r11.s64 + 460;
	// lfs f12,-308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -308);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lfs f0,-316(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -316);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f9,-316(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + -316, temp.u32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f10,-312(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + -312, temp.u32);
	// stfs f11,-308(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + -308, temp.u32);
	// lfs f7,-300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -300);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-296(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -296);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,-304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -304);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f8,f1
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f3,-304(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + -304, temp.u32);
	// fmuls f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f4,-300(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + -300, temp.u32);
	// stfs f5,-296(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + -296, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219868"))) PPC_WEAK_FUNC(sub_82219868);
PPC_FUNC_IMPL(__imp__sub_82219868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r3,-776
	ctx.r11.s64 = ctx.r3.s64 + -776;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// addi r10,r11,460
	ctx.r10.s64 = ctx.r11.s64 + 460;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f0,-392(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + -392, temp.u32);
	// lfs f11,-312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -312);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -308);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,-316(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -316);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f7,-316(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + -316, temp.u32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,-308(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + -308, temp.u32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f8,-312(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + -312, temp.u32);
	// lfs f5,-300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -300);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-296(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -296);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,-304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -304);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f1,-304(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + -304, temp.u32);
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f2,-300(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + -300, temp.u32);
	// stfs f3,-296(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + -296, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822198D8"))) PPC_WEAK_FUNC(sub_822198D8);
PPC_FUNC_IMPL(__imp__sub_822198D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// b 0x82215678
	sub_82215678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822198E0"))) PPC_WEAK_FUNC(sub_822198E0);
PPC_FUNC_IMPL(__imp__sub_822198E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r4,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82219968
	if (ctx.cr6.eq) goto loc_82219968;
	// lwz r10,-572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -572);
	// and r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221991c
	if (ctx.cr6.eq) goto loc_8221991C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
loc_8221991C:
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82219960
	if (ctx.cr6.eq) goto loc_82219960;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82219960
	if (ctx.cr6.eq) goto loc_82219960;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82219948
	if (ctx.cr6.eq) goto loc_82219948;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
loc_82219948:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82219960:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82217258
	sub_82217258(ctx, base);
	return;
loc_82219968:
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// b 0x82215b28
	sub_82215B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219970"))) PPC_WEAK_FUNC(sub_82219970);
PPC_FUNC_IMPL(__imp__sub_82219970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219974"))) PPC_WEAK_FUNC(sub_82219974);
PPC_FUNC_IMPL(__imp__sub_82219974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219978"))) PPC_WEAK_FUNC(sub_82219978);
PPC_FUNC_IMPL(__imp__sub_82219978) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82217678
	ctx.lr = 0x82219990;
	sub_82217678(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82219a50
	if (ctx.cr6.eq) goto loc_82219A50;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r31,312
	ctx.r4.s64 = ctx.r31.s64 + 312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82257600
	ctx.lr = 0x822199B0;
	sub_82257600(ctx, base);
	// lfs f12,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f10,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// stfs f9,928(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,932(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// lfs f7,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,936(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 936, temp.u32);
	// lfs f6,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,944(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 944, temp.u32);
	// lfs f5,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,948(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 948, temp.u32);
	// lfs f4,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,952(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 952, temp.u32);
	// lfs f3,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,960(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
	// lfs f2,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,964(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f1
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f5,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f5,968(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// stfs f8,976(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// stfs f6,980(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// stfs f4,984(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
	// stfs f0,972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// stfs f0,956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 956, temp.u32);
	// stfs f0,940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 940, temp.u32);
	// stfs f13,988(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// bl 0x82218a30
	ctx.lr = 0x82219A50;
	sub_82218A30(ctx, base);
loc_82219A50:
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

__attribute__((alias("__imp__sub_82219A64"))) PPC_WEAK_FUNC(sub_82219A64);
PPC_FUNC_IMPL(__imp__sub_82219A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219A68"))) PPC_WEAK_FUNC(sub_82219A68);
PPC_FUNC_IMPL(__imp__sub_82219A68) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 780);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r30,224(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82219ac0
	if (ctx.cr6.eq) goto loc_82219AC0;
loc_82219A98:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219ab4
	if (ctx.cr6.eq) goto loc_82219AB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82219AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82219AB4:
	// lwz r30,232(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82219a98
	if (!ctx.cr6.eq) goto loc_82219A98;
loc_82219AC0:
	// lwz r11,1036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bge cr6,0x82219be0
	if (!ctx.cr6.lt) goto loc_82219BE0;
	// lwz r9,780(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r31,928
	ctx.r5.s64 = ctx.r31.s64 + 928;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,340(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// lwz r10,40(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x82257540
	ctx.lr = 0x82219AF8;
	sub_82257540(ctx, base);
	// lfs f12,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,1040(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,1048(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r31,1040
	ctx.r11.s64 = ctx.r31.s64 + 1040;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x82219b48
	if (ctx.cr6.gt) goto loc_82219B48;
	// lfs f12,1056(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1056);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f10,1052(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1060(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// ble cr6,0x82219bc8
	if (!ctx.cr6.gt) goto loc_82219BC8;
loc_82219B48:
	// lfs f4,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// lfs f3,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f5,1052(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,1056(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1056);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,1060(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f11,f2,f10
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fadds f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fadds f8,f1,f11
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// fadds f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r10.u32);
	// stw r8,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r8.u32);
	// stw r9,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r9.u32);
loc_82219BC8:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_82219BE0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82219BFC"))) PPC_WEAK_FUNC(sub_82219BFC);
PPC_FUNC_IMPL(__imp__sub_82219BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219C00"))) PPC_WEAK_FUNC(sub_82219C00);
PPC_FUNC_IMPL(__imp__sub_82219C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,-360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -360);
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

__attribute__((alias("__imp__sub_82219C10"))) PPC_WEAK_FUNC(sub_82219C10);
PPC_FUNC_IMPL(__imp__sub_82219C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,-356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -356);
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

__attribute__((alias("__imp__sub_82219C20"))) PPC_WEAK_FUNC(sub_82219C20);
PPC_FUNC_IMPL(__imp__sub_82219C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,-352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -352);
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

__attribute__((alias("__imp__sub_82219C30"))) PPC_WEAK_FUNC(sub_82219C30);
PPC_FUNC_IMPL(__imp__sub_82219C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,-348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -348);
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

__attribute__((alias("__imp__sub_82219C40"))) PPC_WEAK_FUNC(sub_82219C40);
PPC_FUNC_IMPL(__imp__sub_82219C40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// b 0x82215bd8
	sub_82215BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219C48"))) PPC_WEAK_FUNC(sub_82219C48);
PPC_FUNC_IMPL(__imp__sub_82219C48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// b 0x82215ec8
	sub_82215EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219C50"))) PPC_WEAK_FUNC(sub_82219C50);
PPC_FUNC_IMPL(__imp__sub_82219C50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// b 0x82215e40
	sub_82215E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219C58"))) PPC_WEAK_FUNC(sub_82219C58);
PPC_FUNC_IMPL(__imp__sub_82219C58) {
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
	// lwz r11,-776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -776);
	// addi r31,r3,-776
	ctx.r31.s64 = ctx.r3.s64 + -776;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82219C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82219c9c
	if (!ctx.cr6.eq) goto loc_82219C9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82219cc4
	goto loc_82219CC4;
loc_82219C9C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82219cc0
	if (ctx.cr6.eq) goto loc_82219CC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82219cc0
	if (ctx.cr6.eq) goto loc_82219CC0;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82219cc4
	if (!ctx.cr6.gt) goto loc_82219CC4;
loc_82219CC0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82219CC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219d8c
	if (ctx.cr6.eq) goto loc_82219D8C;
	// lwz r11,-472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -472);
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82219d10
	if (ctx.cr6.eq) goto loc_82219D10;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82219dc8
	if (ctx.cr6.eq) goto loc_82219DC8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82219dc8
	if (ctx.cr6.eq) goto loc_82219DC8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82219d08
	if (ctx.cr6.eq) goto loc_82219D08;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_82219D08:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82219dc4
	goto loc_82219DC4;
loc_82219D10:
	// lwz r11,-772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82219d4c
	if (!ctx.cr6.eq) goto loc_82219D4C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82219d4c
	if (ctx.cr6.eq) goto loc_82219D4C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82219d4c
	if (ctx.cr6.eq) goto loc_82219D4C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82219d44
	if (ctx.cr6.eq) goto loc_82219D44;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_82219D44:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82219D4C:
	// lwz r11,-772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82219dc8
	if (ctx.cr6.eq) goto loc_82219DC8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stfs f0,464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// stfs f0,460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f0,476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// b 0x82219dc8
	goto loc_82219DC8;
loc_82219D8C:
	// lwz r11,-772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82219dc8
	if (ctx.cr6.eq) goto loc_82219DC8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82219dc8
	if (ctx.cr6.eq) goto loc_82219DC8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82219dc8
	if (ctx.cr6.eq) goto loc_82219DC8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82219dc0
	if (ctx.cr6.eq) goto loc_82219DC0;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_82219DC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82219DC4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82219DC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219DE0"))) PPC_WEAK_FUNC(sub_82219DE0);
PPC_FUNC_IMPL(__imp__sub_82219DE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -772);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82219df8
	if (ctx.cr6.eq) goto loc_82219DF8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82219DF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219E00"))) PPC_WEAK_FUNC(sub_82219E00);
PPC_FUNC_IMPL(__imp__sub_82219E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-576(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -576);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219E08"))) PPC_WEAK_FUNC(sub_82219E08);
PPC_FUNC_IMPL(__imp__sub_82219E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-572(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -572);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219E10"))) PPC_WEAK_FUNC(sub_82219E10);
PPC_FUNC_IMPL(__imp__sub_82219E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-568(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -568);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219E18"))) PPC_WEAK_FUNC(sub_82219E18);
PPC_FUNC_IMPL(__imp__sub_82219E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-628(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -628);
	// addi r11,r3,-776
	ctx.r11.s64 = ctx.r3.s64 + -776;
	// andc r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// stw r9,-628(r3)
	PPC_STORE_U32(ctx.r3.u32 + -628, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219E2C"))) PPC_WEAK_FUNC(sub_82219E2C);
PPC_FUNC_IMPL(__imp__sub_82219E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219E30"))) PPC_WEAK_FUNC(sub_82219E30);
PPC_FUNC_IMPL(__imp__sub_82219E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-472(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -472);
	// addi r11,r3,-776
	ctx.r11.s64 = ctx.r3.s64 + -776;
	// andc r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// stw r9,-472(r3)
	PPC_STORE_U32(ctx.r3.u32 + -472, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219E44"))) PPC_WEAK_FUNC(sub_82219E44);
PPC_FUNC_IMPL(__imp__sub_82219E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219E48"))) PPC_WEAK_FUNC(sub_82219E48);
PPC_FUNC_IMPL(__imp__sub_82219E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -472);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219E54"))) PPC_WEAK_FUNC(sub_82219E54);
PPC_FUNC_IMPL(__imp__sub_82219E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219E58"))) PPC_WEAK_FUNC(sub_82219E58);
PPC_FUNC_IMPL(__imp__sub_82219E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -776);
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82219E6C"))) PPC_WEAK_FUNC(sub_82219E6C);
PPC_FUNC_IMPL(__imp__sub_82219E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219E70"))) PPC_WEAK_FUNC(sub_82219E70);
PPC_FUNC_IMPL(__imp__sub_82219E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r3,-776
	ctx.r11.s64 = ctx.r3.s64 + -776;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-272(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + -272, temp.u32);
	// stfs f0,-276(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + -276, temp.u32);
	// stfs f0,-280(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + -280, temp.u32);
	// stfs f0,-284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + -284, temp.u32);
	// stfs f0,-288(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + -288, temp.u32);
	// stfs f0,-292(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + -292, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219E9C"))) PPC_WEAK_FUNC(sub_82219E9C);
PPC_FUNC_IMPL(__imp__sub_82219E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219EA0"))) PPC_WEAK_FUNC(sub_82219EA0);
PPC_FUNC_IMPL(__imp__sub_82219EA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// b 0x82218308
	sub_82218308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219EA8"))) PPC_WEAK_FUNC(sub_82219EA8);
PPC_FUNC_IMPL(__imp__sub_82219EA8) {
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
	// beq cr6,0x82219fa4
	if (ctx.cr6.eq) goto loc_82219FA4;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,5100
	ctx.r31.s64 = ctx.r11.s64 + 5100;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82219EDC;
	sub_823052D8(ctx, base);
	// lwz r11,1064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1064);
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
	// bne cr6,0x82219f98
	if (!ctx.cr6.eq) goto loc_82219F98;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82219f98
	if (ctx.cr6.eq) goto loc_82219F98;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82219f98
	if (!ctx.cr6.lt) goto loc_82219F98;
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
	// beq cr6,0x82219f70
	if (ctx.cr6.eq) goto loc_82219F70;
loc_82219F48:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82219f68
	if (ctx.cr6.eq) goto loc_82219F68;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82219f48
	if (!ctx.cr6.eq) goto loc_82219F48;
	// b 0x82219f70
	goto loc_82219F70;
loc_82219F68:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82219F70:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82219f88
	if (!ctx.cr6.eq) goto loc_82219F88;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82219F88:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82219F94;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82219F98:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82219FA4;
	sub_823051A8(ctx, base);
loc_82219FA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219FBC"))) PPC_WEAK_FUNC(sub_82219FBC);
PPC_FUNC_IMPL(__imp__sub_82219FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219FC0"))) PPC_WEAK_FUNC(sub_82219FC0);
PPC_FUNC_IMPL(__imp__sub_82219FC0) {
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
	// addi r31,r11,5100
	ctx.r31.s64 = ctx.r11.s64 + 5100;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82219FE8;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a00c
	if (ctx.cr6.eq) goto loc_8221A00C;
loc_82219FF4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221a03c
	if (!ctx.cr6.eq) goto loc_8221A03C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82219ff4
	if (!ctx.cr6.eq) goto loc_82219FF4;
loc_8221A00C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221a064
	if (!ctx.cr6.eq) goto loc_8221A064;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221a0c0
	ctx.lr = 0x8221A020;
	sub_8221A0C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221a064
	if (!ctx.cr6.eq) goto loc_8221A064;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8221A034;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221a0a8
	goto loc_8221A0A8;
loc_8221A03C:
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
	// b 0x8221a098
	goto loc_8221A098;
loc_8221A064:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,1064
	ctx.r10.s64 = ctx.r11.s64 + 1064;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,1064(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1064);
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
loc_8221A098:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8221A0A4;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8221A0A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A0C0"))) PPC_WEAK_FUNC(sub_8221A0C0);
PPC_FUNC_IMPL(__imp__sub_8221A0C0) {
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
	// mulli r11,r3,1072
	ctx.r11.s64 = ctx.r3.s64 * 1072;
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
	ctx.lr = 0x8221A0EC;
	sub_82082030(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,5100
	ctx.r11.s64 = ctx.r11.s64 + 5100;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221a108
	if (ctx.cr6.eq) goto loc_8221A108;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8221a10c
	goto loc_8221A10C;
loc_8221A108:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8221A10C:
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
	// beq cr6,0x8221a14c
	if (ctx.cr6.eq) goto loc_8221A14C;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8221A144:
	// stwu r3,1072(r10)
	ea = 1072 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8221a144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221A144;
loc_8221A14C:
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

__attribute__((alias("__imp__sub_8221A16C"))) PPC_WEAK_FUNC(sub_8221A16C);
PPC_FUNC_IMPL(__imp__sub_8221A16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A170"))) PPC_WEAK_FUNC(sub_8221A170);
PPC_FUNC_IMPL(__imp__sub_8221A170) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// b 0x82218868
	sub_82218868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A178"))) PPC_WEAK_FUNC(sub_8221A178);
PPC_FUNC_IMPL(__imp__sub_8221A178) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-772(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -772);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A180"))) PPC_WEAK_FUNC(sub_8221A180);
PPC_FUNC_IMPL(__imp__sub_8221A180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,-772(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -772);
	// addi r11,r3,-776
	ctx.r11.s64 = ctx.r3.s64 + -776;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8221a1ac
	if (ctx.cr6.eq) goto loc_8221A1AC;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
loc_8221A1AC:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A1D0"))) PPC_WEAK_FUNC(sub_8221A1D0);
PPC_FUNC_IMPL(__imp__sub_8221A1D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,-760(r3)
	PPC_STORE_U32(ctx.r3.u32 + -760, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A1D8"))) PPC_WEAK_FUNC(sub_8221A1D8);
PPC_FUNC_IMPL(__imp__sub_8221A1D8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// addi r3,r3,-776
	ctx.r3.s64 = ctx.r3.s64 + -776;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a1ec
	if (ctx.cr6.eq) goto loc_8221A1EC;
	// b 0x820c0148
	sub_820C0148(ctx, base);
	return;
loc_8221A1EC:
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// andc r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A1FC"))) PPC_WEAK_FUNC(sub_8221A1FC);
PPC_FUNC_IMPL(__imp__sub_8221A1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A200"))) PPC_WEAK_FUNC(sub_8221A200);
PPC_FUNC_IMPL(__imp__sub_8221A200) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -472);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A208"))) PPC_WEAK_FUNC(sub_8221A208);
PPC_FUNC_IMPL(__imp__sub_8221A208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A214"))) PPC_WEAK_FUNC(sub_8221A214);
PPC_FUNC_IMPL(__imp__sub_8221A214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A218"))) PPC_WEAK_FUNC(sub_8221A218);
PPC_FUNC_IMPL(__imp__sub_8221A218) {
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
	// bl 0x822150e8
	ctx.lr = 0x8221A230;
	sub_822150E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,-23104
	ctx.r7.s64 = ctx.r10.s64 + -23104;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// addi r6,r31,904
	ctx.r6.s64 = ctx.r31.s64 + 904;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,780(r31)
	PPC_STORE_U8(ctx.r31.u32 + 780, ctx.r11.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r6,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r6.u32);
	// stw r9,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// lfs f13,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r5.u32);
	// lfs f0,932(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 932);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r11.u8);
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// sth r4,812(r31)
	PPC_STORE_U16(ctx.r31.u32 + 812, ctx.r4.u16);
	// sth r11,814(r31)
	PPC_STORE_U16(ctx.r31.u32 + 814, ctx.r11.u16);
	// stfs f13,900(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 900, temp.u32);
	// stw r10,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r10.u32);
	// stfs f13,868(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// stw r7,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// stw r10,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r10.u32);
	// stw r10,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r10.u32);
	// stw r10,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// stfs f0,856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// stfs f0,860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 860, temp.u32);
	// stfs f0,864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// bl 0x820d6b20
	ctx.lr = 0x8221A2DC;
	sub_820D6B20(ctx, base);
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

__attribute__((alias("__imp__sub_8221A2F4"))) PPC_WEAK_FUNC(sub_8221A2F4);
PPC_FUNC_IMPL(__imp__sub_8221A2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A2F8"))) PPC_WEAK_FUNC(sub_8221A2F8);
PPC_FUNC_IMPL(__imp__sub_8221A2F8) {
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
	// bl 0x8221a348
	ctx.lr = 0x8221A318;
	sub_8221A348(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a330
	if (ctx.cr6.eq) goto loc_8221A330;
	// bl 0x8221ab00
	ctx.lr = 0x8221A32C;
	sub_8221AB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221A330:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A348"))) PPC_WEAK_FUNC(sub_8221A348);
PPC_FUNC_IMPL(__imp__sub_8221A348) {
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
	// lwz r11,820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 820);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-23104
	ctx.r9.s64 = ctx.r10.s64 + -23104;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8221a380
	if (ctx.cr6.eq) goto loc_8221A380;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221A380;
	sub_82080000(ctx, base);
loc_8221A380:
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a398
	if (ctx.cr6.eq) goto loc_8221A398;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221A398;
	sub_82080000(ctx, base);
loc_8221A398:
	// addi r3,r31,788
	ctx.r3.s64 = ctx.r31.s64 + 788;
	// bl 0x82218450
	ctx.lr = 0x8221A3A0;
	sub_82218450(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82215410
	ctx.lr = 0x8221A3A8;
	sub_82215410(ctx, base);
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

__attribute__((alias("__imp__sub_8221A3BC"))) PPC_WEAK_FUNC(sub_8221A3BC);
PPC_FUNC_IMPL(__imp__sub_8221A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A3C0"))) PPC_WEAK_FUNC(sub_8221A3C0);
PPC_FUNC_IMPL(__imp__sub_8221A3C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82215550
	sub_82215550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A3C4"))) PPC_WEAK_FUNC(sub_8221A3C4);
PPC_FUNC_IMPL(__imp__sub_8221A3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A3C8"))) PPC_WEAK_FUNC(sub_8221A3C8);
PPC_FUNC_IMPL(__imp__sub_8221A3C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A3D4"))) PPC_WEAK_FUNC(sub_8221A3D4);
PPC_FUNC_IMPL(__imp__sub_8221A3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A3D8"))) PPC_WEAK_FUNC(sub_8221A3D8);
PPC_FUNC_IMPL(__imp__sub_8221A3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8221A3E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// addi r31,r3,168
	ctx.r31.s64 = ctx.r3.s64 + 168;
	// stfs f9,72(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,76(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8221a46c
	if (!ctx.cr6.gt) goto loc_8221A46C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8221A438:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8221A458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,236
	ctx.r27.s64 = ctx.r27.s64 + 236;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8221a438
	if (ctx.cr6.lt) goto loc_8221A438;
loc_8221A46C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A4B4"))) PPC_WEAK_FUNC(sub_8221A4B4);
PPC_FUNC_IMPL(__imp__sub_8221A4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A4B8"))) PPC_WEAK_FUNC(sub_8221A4B8);
PPC_FUNC_IMPL(__imp__sub_8221A4B8) {
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
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x8221a4e0
	if (!ctx.cr6.gt) goto loc_8221A4E0;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
loc_8221A4E0:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822578d8
	ctx.lr = 0x8221A4F0;
	sub_822578D8(ctx, base);
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// bl 0x822578d8
	ctx.lr = 0x8221A508;
	sub_822578D8(ctx, base);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8221A528"))) PPC_WEAK_FUNC(sub_8221A528);
PPC_FUNC_IMPL(__imp__sub_8221A528) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f31,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bctrl 
	ctx.lr = 0x8221A57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,304(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r6,r7,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8221a5fc
	if (!ctx.cr6.eq) goto loc_8221A5FC;
	// stfs f31,564(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// stfs f31,560(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stfs f31,556(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f31,544(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f31,540(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stfs f31,536(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f31,532(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stfs f31,600(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stfs f31,596(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f31,592(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stfs f31,588(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stfs f31,584(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// stfs f31,580(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// stfs f31,576(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f31,572(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stfs f31,568(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// stfs f31,636(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// stfs f31,632(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stfs f31,628(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stfs f31,624(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stfs f31,620(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stfs f31,616(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stfs f31,612(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stfs f31,608(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfs f31,604(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// b 0x8221a6d0
	goto loc_8221A6D0;
loc_8221A5FC:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// beq cr6,0x8221a6a8
	if (ctx.cr6.eq) goto loc_8221A6A8;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221a6a8
	if (ctx.cr6.eq) goto loc_8221A6A8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8221a6a8
	if (ctx.cr6.gt) goto loc_8221A6A8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8221a684
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8221A684;
	// bdzf 4*cr6+eq,0x8221a698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8221A698;
	// bne cr6,0x8221a6a8
	if (!ctx.cr6.eq) goto loc_8221A6A8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821f0d58
	ctx.lr = 0x8221A680;
	sub_821F0D58(ctx, base);
	// b 0x8221a6a8
	goto loc_8221A6A8;
loc_8221A684:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821f2748
	ctx.lr = 0x8221A694;
	sub_821F2748(ctx, base);
	// b 0x8221a6a8
	goto loc_8221A6A8;
loc_8221A698:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821e78c0
	ctx.lr = 0x8221A6A8;
	sub_821E78C0(ctx, base);
loc_8221A6A8:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8221A6BC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8221a6bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221A6BC;
	// addi r4,r31,568
	ctx.r4.s64 = ctx.r31.s64 + 568;
	// bl 0x82305d28
	ctx.lr = 0x8221A6D0;
	sub_82305D28(ctx, base);
loc_8221A6D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_8221A6E8"))) PPC_WEAK_FUNC(sub_8221A6E8);
PPC_FUNC_IMPL(__imp__sub_8221A6E8) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stfs f0,320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// lwz r8,312(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,320(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 67108864;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// bl 0x82257600
	ctx.lr = 0x8221A754;
	sub_82257600(ctx, base);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f10,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A79C"))) PPC_WEAK_FUNC(sub_8221A79C);
PPC_FUNC_IMPL(__imp__sub_8221A79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A7A0"))) PPC_WEAK_FUNC(sub_8221A7A0);
PPC_FUNC_IMPL(__imp__sub_8221A7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8221A7A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 780);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a848
	if (ctx.cr6.eq) goto loc_8221A848;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x8221a7d0
	if (!ctx.cr6.gt) goto loc_8221A7D0;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
loc_8221A7D0:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822578d8
	ctx.lr = 0x8221A7E0;
	sub_822578D8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82257cb8
	ctx.lr = 0x8221A7F0;
	sub_82257CB8(ctx, base);
	// addi r5,r29,20
	ctx.r5.s64 = ctx.r29.s64 + 20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822578d8
	ctx.lr = 0x8221A800;
	sub_822578D8(ctx, base);
	// lwz r11,776(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 776);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8233e4e0
	ctx.lr = 0x8221A818;
	sub_8233E4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820efed0
	ctx.lr = 0x8221A820;
	sub_820EFED0(ctx, base);
	// lwz r31,792(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 792);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221a848
	if (ctx.cr6.eq) goto loc_8221A848;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221A830:
	// lwz r11,808(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 808);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8221a850
	ctx.lr = 0x8221A83C;
	sub_8221A850(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8221a830
	if (!ctx.cr0.eq) goto loc_8221A830;
loc_8221A848:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A850"))) PPC_WEAK_FUNC(sub_8221A850);
PPC_FUNC_IMPL(__imp__sub_8221A850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8221A858;
	__savegprlr_29(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8221a874
	if (!ctx.cr6.gt) goto loc_8221A874;
	// lwz r30,168(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
loc_8221A874:
	// lwz r11,776(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 776);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// bl 0x82257cb8
	ctx.lr = 0x8221A88C;
	sub_82257CB8(ctx, base);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822578d8
	ctx.lr = 0x8221A89C;
	sub_822578D8(ctx, base);
	// addi r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 + 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82257cb8
	ctx.lr = 0x8221A8AC;
	sub_82257CB8(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822578d8
	ctx.lr = 0x8221A8BC;
	sub_822578D8(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,128(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// bl 0x82257cb8
	ctx.lr = 0x8221A8D0;
	sub_82257CB8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x822578d8
	ctx.lr = 0x8221A8E0;
	sub_822578D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,224(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820abe28
	ctx.lr = 0x8221A8F0;
	sub_820ABE28(ctx, base);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221A900;
	sub_8233E4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac008
	ctx.lr = 0x8221A908;
	sub_820AC008(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821879a8
	ctx.lr = 0x8221A91C;
	sub_821879A8(ctx, base);
	// lwz r31,792(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 792);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221a944
	if (ctx.cr6.eq) goto loc_8221A944;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221A92C:
	// lwz r11,808(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 808);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8221a850
	ctx.lr = 0x8221A938;
	sub_8221A850(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8221a92c
	if (!ctx.cr0.eq) goto loc_8221A92C;
loc_8221A944:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A94C"))) PPC_WEAK_FUNC(sub_8221A94C);
PPC_FUNC_IMPL(__imp__sub_8221A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A950"))) PPC_WEAK_FUNC(sub_8221A950);
PPC_FUNC_IMPL(__imp__sub_8221A950) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8221a968
	if (ctx.cr6.eq) goto loc_8221A968;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8221a96c
	if (!ctx.cr6.eq) goto loc_8221A96C;
loc_8221A968:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221A96C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82217678
	sub_82217678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A97C"))) PPC_WEAK_FUNC(sub_8221A97C);
PPC_FUNC_IMPL(__imp__sub_8221A97C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A980"))) PPC_WEAK_FUNC(sub_8221A980);
PPC_FUNC_IMPL(__imp__sub_8221A980) {
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
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221A9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,304(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r8,r9,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221a9d8
	if (ctx.cr6.eq) goto loc_8221A9D8;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82257cb8
	ctx.lr = 0x8221A9C4;
	sub_82257CB8(ctx, base);
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
loc_8221A9D8:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x821a6508
	ctx.lr = 0x8221A9E4;
	sub_821A6508(ctx, base);
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

__attribute__((alias("__imp__sub_8221A9F8"))) PPC_WEAK_FUNC(sub_8221A9F8);
PPC_FUNC_IMPL(__imp__sub_8221A9F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r10,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r10.u32);
	// stw r9,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AA20"))) PPC_WEAK_FUNC(sub_8221AA20);
PPC_FUNC_IMPL(__imp__sub_8221AA20) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221AA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r9,4536
	ctx.r8.s64 = ctx.r9.s64 + 4536;
	// lfs f0,1776(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1776);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221aab0
	if (!ctx.cr6.lt) goto loc_8221AAB0;
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221aab0
	if (ctx.cr6.eq) goto loc_8221AAB0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221aab0
	if (ctx.cr6.eq) goto loc_8221AAB0;
	// lfs f0,464(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// beq cr6,0x8221aab0
	if (ctx.cr6.eq) goto loc_8221AAB0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,103
	ctx.r4.s64 = 103;
	// bl 0x820daf68
	ctx.lr = 0x8221AAB0;
	sub_820DAF68(ctx, base);
loc_8221AAB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217768
	ctx.lr = 0x8221AAB8;
	sub_82217768(ctx, base);
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x821d25b8
	ctx.lr = 0x8221AACC;
	sub_821D25B8(ctx, base);
	// lwz r10,776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r8.u32);
	// lfs f1,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82215f50
	ctx.lr = 0x8221AAE8;
	sub_82215F50(ctx, base);
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

__attribute__((alias("__imp__sub_8221AAFC"))) PPC_WEAK_FUNC(sub_8221AAFC);
PPC_FUNC_IMPL(__imp__sub_8221AAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221AB00"))) PPC_WEAK_FUNC(sub_8221AB00);
PPC_FUNC_IMPL(__imp__sub_8221AB00) {
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
	// beq cr6,0x8221abfc
	if (ctx.cr6.eq) goto loc_8221ABFC;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,5156
	ctx.r31.s64 = ctx.r11.s64 + 5156;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8221AB34;
	sub_823052D8(ctx, base);
	// lwz r11,944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
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
	// bne cr6,0x8221abf0
	if (!ctx.cr6.eq) goto loc_8221ABF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221abf0
	if (ctx.cr6.eq) goto loc_8221ABF0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8221abf0
	if (!ctx.cr6.lt) goto loc_8221ABF0;
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
	// beq cr6,0x8221abc8
	if (ctx.cr6.eq) goto loc_8221ABC8;
loc_8221ABA0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221abc0
	if (ctx.cr6.eq) goto loc_8221ABC0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8221aba0
	if (!ctx.cr6.eq) goto loc_8221ABA0;
	// b 0x8221abc8
	goto loc_8221ABC8;
loc_8221ABC0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8221ABC8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221abe0
	if (!ctx.cr6.eq) goto loc_8221ABE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8221ABE0:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221ABEC;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8221ABF0:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8221ABFC;
	sub_823051A8(ctx, base);
loc_8221ABFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AC14"))) PPC_WEAK_FUNC(sub_8221AC14);
PPC_FUNC_IMPL(__imp__sub_8221AC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221AC18"))) PPC_WEAK_FUNC(sub_8221AC18);
PPC_FUNC_IMPL(__imp__sub_8221AC18) {
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
	// addi r31,r11,5156
	ctx.r31.s64 = ctx.r11.s64 + 5156;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8221AC40;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ac64
	if (ctx.cr6.eq) goto loc_8221AC64;
loc_8221AC4C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221ac94
	if (!ctx.cr6.eq) goto loc_8221AC94;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221ac4c
	if (!ctx.cr6.eq) goto loc_8221AC4C;
loc_8221AC64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221acbc
	if (!ctx.cr6.eq) goto loc_8221ACBC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221ae10
	ctx.lr = 0x8221AC78;
	sub_8221AE10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221acbc
	if (!ctx.cr6.eq) goto loc_8221ACBC;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8221AC8C;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221ad00
	goto loc_8221AD00;
loc_8221AC94:
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
	// b 0x8221acf0
	goto loc_8221ACF0;
loc_8221ACBC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,944
	ctx.r10.s64 = ctx.r11.s64 + 944;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,944(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 944);
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
loc_8221ACF0:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8221ACFC;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8221AD00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AD18"))) PPC_WEAK_FUNC(sub_8221AD18);
PPC_FUNC_IMPL(__imp__sub_8221AD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8221AD20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221adec
	if (!ctx.cr6.eq) goto loc_8221ADEC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221ad58
	if (!ctx.cr6.eq) goto loc_8221AD58;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4944
	ctx.r9.s64 = ctx.r10.s64 + 4944;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_8221AD58:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8221ad7c
	if (!ctx.cr6.gt) goto loc_8221AD7C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8221AD7C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8221AD8C;
	sub_82082030(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221ada0
	if (!ctx.cr6.lt) goto loc_8221ADA0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8221ADA0:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221adbc
	if (ctx.cr6.eq) goto loc_8221ADBC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221ADBC;
	sub_8233E4E0(ctx, base);
loc_8221ADBC:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ade0
	if (ctx.cr6.eq) goto loc_8221ADE0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ade0
	if (ctx.cr6.eq) goto loc_8221ADE0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221ADE0;
	sub_82080000(ctx, base);
loc_8221ADE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
loc_8221ADEC:
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
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221AE10"))) PPC_WEAK_FUNC(sub_8221AE10);
PPC_FUNC_IMPL(__imp__sub_8221AE10) {
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
	// mulli r11,r3,960
	ctx.r11.s64 = ctx.r3.s64 * 960;
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
	ctx.lr = 0x8221AE3C;
	sub_82082030(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,5156
	ctx.r11.s64 = ctx.r11.s64 + 5156;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221ae58
	if (ctx.cr6.eq) goto loc_8221AE58;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8221ae5c
	goto loc_8221AE5C;
loc_8221AE58:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8221AE5C:
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
	// beq cr6,0x8221ae9c
	if (ctx.cr6.eq) goto loc_8221AE9C;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8221AE94:
	// stwu r3,960(r10)
	ea = 960 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8221ae94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221AE94;
loc_8221AE9C:
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

__attribute__((alias("__imp__sub_8221AEBC"))) PPC_WEAK_FUNC(sub_8221AEBC);
PPC_FUNC_IMPL(__imp__sub_8221AEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221AEC0"))) PPC_WEAK_FUNC(sub_8221AEC0);
PPC_FUNC_IMPL(__imp__sub_8221AEC0) {
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
	ctx.lr = 0x8221AED8;
	sub_82081C00(ctx, base);
	// bl 0x8221e8c8
	ctx.lr = 0x8221AEDC;
	sub_8221E8C8(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8221AEEC;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221af00
	if (!ctx.cr6.eq) goto loc_8221AF00;
	// bl 0x821b3000
	ctx.lr = 0x8221AEFC;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221AF00:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221af18
	if (ctx.cr6.eq) goto loc_8221AF18;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8221AF18:
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

__attribute__((alias("__imp__sub_8221AF2C"))) PPC_WEAK_FUNC(sub_8221AF2C);
PPC_FUNC_IMPL(__imp__sub_8221AF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221AF30"))) PPC_WEAK_FUNC(sub_8221AF30);
PPC_FUNC_IMPL(__imp__sub_8221AF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x8221AF38;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8233fa38
	ctx.lr = 0x8221AF40;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x82214fb8
	ctx.lr = 0x8221AF54;
	sub_82214FB8(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x821cf758
	ctx.lr = 0x8221AF5C;
	sub_821CF758(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,-23036
	ctx.r9.s64 = ctx.r11.s64 + -23036;
	// addi r8,r10,-23744
	ctx.r8.s64 = ctx.r10.s64 + -23744;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r27,8
	ctx.r27.s64 = 8;
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// li r28,16
	ctx.r28.s64 = 16;
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r27,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r27.u32);
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// stw r28,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r28.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stb r30,324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 324, ctx.r30.u8);
	// stb r29,325(r31)
	PPC_STORE_U8(ctx.r31.u32 + 325, ctx.r29.u8);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// bl 0x8221eb58
	ctx.lr = 0x8221AFAC;
	sub_8221EB58(ctx, base);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r28,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r28.u32);
	// stb r30,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r30.u8);
	// stb r29,349(r31)
	PPC_STORE_U8(ctx.r31.u32 + 349, ctx.r29.u8);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// bl 0x8220fbc0
	ctx.lr = 0x8221AFD4;
	sub_8220FBC0(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r26,4
	ctx.r26.s64 = 4;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// addi r23,r7,31376
	ctx.r23.s64 = ctx.r7.s64 + 31376;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// lfs f31,48(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// lfs f30,36(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// lfs f0,320(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// lfs f29,324(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 324);
	ctx.f29.f64 = double(temp.f32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// lfs f28,232(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 232);
	ctx.f28.f64 = double(temp.f32);
	// stfs f31,416(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stw r26,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r26.u32);
	// stfs f0,420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f31,424(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stfs f29,428(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// stfs f30,436(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stfs f28,440(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stfs f30,444(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// stb r29,456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 456, ctx.r29.u8);
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stw r27,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r27.u32);
	// stw r28,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r28.u32);
	// stb r30,476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 476, ctx.r30.u8);
	// stb r29,477(r31)
	PPC_STORE_U8(ctx.r31.u32 + 477, ctx.r29.u8);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// bl 0x8221ec78
	ctx.lr = 0x8221B068;
	sub_8221EC78(ctx, base);
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// stw r27,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r27.u32);
	// stw r28,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r28.u32);
	// stb r30,500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 500, ctx.r30.u8);
	// stb r29,501(r31)
	PPC_STORE_U8(ctx.r31.u32 + 501, ctx.r29.u8);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8221edd8
	ctx.lr = 0x8221B090;
	sub_8221EDD8(ctx, base);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r29,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r29.u32);
	// stw r28,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r28.u32);
	// stb r30,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r30.u8);
	// stb r29,529(r31)
	PPC_STORE_U8(ctx.r31.u32 + 529, ctx.r29.u8);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// bl 0x8221ed20
	ctx.lr = 0x8221B0BC;
	sub_8221ED20(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f0,1192(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 1192);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// lfs f13,92(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// stfs f13,448(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stw r6,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r6.u32);
	// stfs f31,452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stw r29,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r29.u32);
	// stfs f29,428(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// stw r28,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
	// stfs f28,440(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stw r25,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r25.u32);
	// stfs f30,444(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// stw r24,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r24.u32);
	// stfs f30,436(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stw r26,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r26.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// addi r11,r31,540
	ctx.r11.s64 = ctx.r31.s64 + 540;
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f31,544(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,540(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stfs f31,560(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stfs f31,556(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8233fa84
	ctx.lr = 0x8221B140;
	__restfpr_28(ctx, base);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B144"))) PPC_WEAK_FUNC(sub_8221B144);
PPC_FUNC_IMPL(__imp__sub_8221B144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B148"))) PPC_WEAK_FUNC(sub_8221B148);
PPC_FUNC_IMPL(__imp__sub_8221B148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8221B150;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r10,-23036
	ctx.r8.s64 = ctx.r10.s64 + -23036;
	// addi r7,r9,-23744
	ctx.r7.s64 = ctx.r9.s64 + -23744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r7,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r7.u32);
	// addi r26,r3,156
	ctx.r26.s64 = ctx.r3.s64 + 156;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b1b0
	if (ctx.cr6.eq) goto loc_8221B1B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8221B18C:
	// lwz r10,532(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lbz r9,177(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 177);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,177(r10)
	PPC_STORE_U8(ctx.r10.u32 + 177, ctx.r8.u8);
	// bdnz 0x8221b18c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221B18C;
loc_8221B1B0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r4,164(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r27,r11,4536
	ctx.r27.s64 = ctx.r11.s64 + 4536;
	// lwz r3,336(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 336);
	// bl 0x821e22a8
	ctx.lr = 0x8221B1C4;
	sub_821E22A8(ctx, base);
	// lbz r11,529(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 529);
	// addi r31,r28,512
	ctx.r31.s64 = ctx.r28.s64 + 512;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b1f0
	if (ctx.cr6.eq) goto loc_8221B1F0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b1ec
	if (ctx.cr6.eq) goto loc_8221B1EC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221B1EC;
	sub_82080000(ctx, base);
loc_8221B1EC:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_8221B1F0:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r30,r28,484
	ctx.r30.s64 = ctx.r28.s64 + 484;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lbz r11,501(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 501);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b224
	if (ctx.cr6.eq) goto loc_8221B224;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b220
	if (ctx.cr6.eq) goto loc_8221B220;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221B220;
	sub_82080000(ctx, base);
loc_8221B220:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
loc_8221B224:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r31,r28,460
	ctx.r31.s64 = ctx.r28.s64 + 460;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// lbz r11,477(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 477);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b258
	if (ctx.cr6.eq) goto loc_8221B258;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b254
	if (ctx.cr6.eq) goto loc_8221B254;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221B254;
	sub_82080000(ctx, base);
loc_8221B254:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_8221B258:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r30,r28,332
	ctx.r30.s64 = ctx.r28.s64 + 332;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lbz r11,349(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 349);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b28c
	if (ctx.cr6.eq) goto loc_8221B28C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b288
	if (ctx.cr6.eq) goto loc_8221B288;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221B288;
	sub_82080000(ctx, base);
loc_8221B288:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
loc_8221B28C:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r31,r28,308
	ctx.r31.s64 = ctx.r28.s64 + 308;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lbz r11,325(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 325);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b2c0
	if (ctx.cr6.eq) goto loc_8221B2C0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b2bc
	if (ctx.cr6.eq) goto loc_8221B2BC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221B2BC;
	sub_82080000(ctx, base);
loc_8221B2BC:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_8221B2C0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r10,r11,-25080
	ctx.r10.s64 = ctx.r11.s64 + -25080;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8221b2ec
	if (ctx.cr6.eq) goto loc_8221B2EC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221B2EC;
	sub_82080000(ctx, base);
loc_8221B2EC:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b304
	if (ctx.cr6.eq) goto loc_8221B304;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221B304;
	sub_82080000(ctx, base);
loc_8221B304:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,108
	ctx.r3.s64 = ctx.r27.s64 + 108;
	// bl 0x822184b8
	ctx.lr = 0x8221B314;
	sub_822184B8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-23388
	ctx.r10.s64 = ctx.r11.s64 + -23388;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B328"))) PPC_WEAK_FUNC(sub_8221B328);
PPC_FUNC_IMPL(__imp__sub_8221B328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221b3b4
	if (!ctx.cr6.eq) goto loc_8221B3B4;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8221b3b4
	if (ctx.cr6.eq) goto loc_8221B3B4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8221b3b4
	if (ctx.cr6.eq) goto loc_8221B3B4;
	// lwz r6,312(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221b3a8
	if (ctx.cr6.eq) goto loc_8221B3A8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,328(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r5,r11,31376
	ctx.r5.s64 = ctx.r11.s64 + 31376;
	// lfs f0,336(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
loc_8221B370:
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lfs f13,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x8221b3b8
	if (ctx.cr6.gt) goto loc_8221B3B8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8221b370
	if (ctx.cr6.lt) goto loc_8221B370;
loc_8221B3A8:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f2,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_8221B3B4:
	// blr 
	return;
loc_8221B3B8:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8221b3b4
	if (ctx.cr6.eq) goto loc_8221B3B4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8221b3d4
	if (ctx.cr6.eq) goto loc_8221B3D4;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
loc_8221B3D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,48(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B3E8"))) PPC_WEAK_FUNC(sub_8221B3E8);
PPC_FUNC_IMPL(__imp__sub_8221B3E8) {
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
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,216(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f31,212(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f31,208(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f31,220(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// bl 0x8221e6a0
	ctx.lr = 0x8221B424;
	sub_8221E6A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221e008
	ctx.lr = 0x8221B42C;
	sub_8221E008(ctx, base);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82257cb8
	ctx.lr = 0x8221B480;
	sub_82257CB8(ctx, base);
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

__attribute__((alias("__imp__sub_8221B49C"))) PPC_WEAK_FUNC(sub_8221B49C);
PPC_FUNC_IMPL(__imp__sub_8221B49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B4A0"))) PPC_WEAK_FUNC(sub_8221B4A0);
PPC_FUNC_IMPL(__imp__sub_8221B4A0) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lfs f31,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82305f50
	ctx.lr = 0x8221B518;
	sub_82305F50(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82305f50
	ctx.lr = 0x8221B528;
	sub_82305F50(ctx, base);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x823066e0
	ctx.lr = 0x8221B560;
	sub_823066E0(ctx, base);
	// lfs f8,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f6,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f8,16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f7,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// stfs f5,20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

__attribute__((alias("__imp__sub_8221B614"))) PPC_WEAK_FUNC(sub_8221B614);
PPC_FUNC_IMPL(__imp__sub_8221B614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B618"))) PPC_WEAK_FUNC(sub_8221B618);
PPC_FUNC_IMPL(__imp__sub_8221B618) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8221b4a0
	ctx.lr = 0x8221B654;
	sub_8221B4A0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x823066e0
	ctx.lr = 0x8221B698;
	sub_823066E0(ctx, base);
	// stfs f31,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fdivs f1,f30,f29
	ctx.f1.f64 = double(float(ctx.f30.f64 / ctx.f29.f64));
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x823066e0
	ctx.lr = 0x8221B6CC;
	sub_823066E0(ctx, base);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fadds f1,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// fadds f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fadds f13,f12,f2
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// lfs f10,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// stfs f3,224(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f1,228(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fadds f0,f9,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f8,f2
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f7,f12
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f7,f6,f9
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f11,236(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f4,240(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f10,248(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f8,252(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f7,256(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// bl 0x82305d28
	ctx.lr = 0x8221B768;
	sub_82305D28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82305f50
	ctx.lr = 0x8221B778;
	sub_82305F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
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

__attribute__((alias("__imp__sub_8221B79C"))) PPC_WEAK_FUNC(sub_8221B79C);
PPC_FUNC_IMPL(__imp__sub_8221B79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B7A0"))) PPC_WEAK_FUNC(sub_8221B7A0);
PPC_FUNC_IMPL(__imp__sub_8221B7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,336(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f13,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x8221b84c
	if (ctx.cr6.lt) goto loc_8221B84C;
	// addi r6,r7,-3
	ctx.r6.s64 = ctx.r7.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
loc_8221B7C8:
	// lfs f0,-8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8221b7e4
	if (ctx.cr6.eq) goto loc_8221B7E4;
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_8221B7E4:
	// lfs f0,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8221b800
	if (ctx.cr6.eq) goto loc_8221B800;
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
loc_8221B800:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8221b81c
	if (ctx.cr6.eq) goto loc_8221B81C;
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
loc_8221B81C:
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8221b838
	if (ctx.cr6.eq) goto loc_8221B838;
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,56(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
loc_8221B838:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8221b7c8
	if (ctx.cr6.lt) goto loc_8221B7C8;
loc_8221B84C:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r8,r9,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r9.s64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8221B868:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8221b884
	if (ctx.cr6.eq) goto loc_8221B884;
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_8221B884:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8221b868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221B868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B894"))) PPC_WEAK_FUNC(sub_8221B894);
PPC_FUNC_IMPL(__imp__sub_8221B894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B898"))) PPC_WEAK_FUNC(sub_8221B898);
PPC_FUNC_IMPL(__imp__sub_8221B898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r6,336(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x8221ba34
	if (ctx.cr6.lt) goto loc_8221BA34;
	// addi r7,r6,-3
	ctx.r7.s64 = ctx.r6.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221B8B0:
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f2,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fdivs f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fsubs f4,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f3,f5,f5
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fsubs f2,f9,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmadds f1,f4,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f0,f2,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f1.f64));
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f13,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r5,-16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// lwz r4,-12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f1,f8,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f0,f2,f2
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fsubs f13,f6,f5
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmadds f12,f1,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,-8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f10,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fdivs f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// stfs f6,-4(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f3,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f13,f5,f4
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f9,f1,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f7,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fdivs f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f7.f64));
	// stfs f3,12(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// blt cr6,0x8221b8b0
	if (ctx.cr6.lt) goto loc_8221B8B0;
loc_8221BA34:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r11,r9,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r9.s64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8221BA48:
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f2,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,64(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fdivs f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bdnz 0x8221ba48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221BA48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BAB0"))) PPC_WEAK_FUNC(sub_8221BAB0);
PPC_FUNC_IMPL(__imp__sub_8221BAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8221BAB8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,456(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 456);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bae0
	if (ctx.cr6.eq) goto loc_8221BAE0;
	// bl 0x8221b898
	ctx.lr = 0x8221BAD8;
	sub_8221B898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 456, ctx.r11.u8);
loc_8221BAE0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,580(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// stfs f12,592(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// lfs f13,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f31,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,584(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// stfs f10,588(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stfs f9,596(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// lfs f7,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,424(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f31,f8
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8221f498
	ctx.lr = 0x8221BB48;
	sub_8221F498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221e4c0
	ctx.lr = 0x8221BB50;
	sub_8221E4C0(ctx, base);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x8221beb8
	if (ctx.cr6.lt) goto loc_8221BEB8;
	// addi r5,r4,-3
	ctx.r5.s64 = ctx.r4.s64 + -3;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8221BB6C:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r6,r8,276
	ctx.r6.s64 = ctx.r8.s64 + 276;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lfs f10,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f5,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fadds f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f1,36(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fadds f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f11,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f2,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f10,44(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f9,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f4,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f1,f4
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lhz r3,74(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 74);
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r3,74(r11)
	PPC_STORE_U16(ctx.r11.u32 + 74, ctx.r3.u16);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lfs f10,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f1,f10,f7
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f13,f3,f8
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fadds f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f1,f8
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fadds f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f8,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f7,44(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfs f5,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,368
	ctx.r8.s64 = ctx.r8.s64 + 368;
	// lfs f4,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// lfs f3,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fadds f1,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f12,f7,f3
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lhz r3,74(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 74);
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r3,74(r11)
	PPC_STORE_U16(ctx.r11.u32 + 74, ctx.r3.u16);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,-92
	ctx.r11.s64 = ctx.r11.s64 + -92;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lfs f7,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f13,f1,f7
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f12,f3,f5
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f11,f3,f4
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fadds f10,f13,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fmuls f9,f12,f7
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f8,f11,f7
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f7,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f6,40(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f5,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f4,44(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f3,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmuls f10,f1,f3
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f4,f1
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fadds f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lhz r3,74(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 74);
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r3,74(r11)
	PPC_STORE_U16(ctx.r11.u32 + 74, ctx.r3.u16);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lfs f4,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f2,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f8,f10,f4
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fadds f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f7,36(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fmuls f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// lfs f5,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f4
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f2,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f8,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f1,44(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f8,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lhz r3,74(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 74);
	// rlwinm r6,r3,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r6,74(r11)
	PPC_STORE_U16(ctx.r11.u32 + 74, ctx.r6.u16);
	// blt cr6,0x8221bb6c
	if (ctx.cr6.lt) goto loc_8221BB6C;
loc_8221BEB8:
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8221bfa4
	if (!ctx.cr6.lt) goto loc_8221BFA4;
	// mulli r6,r7,92
	ctx.r6.s64 = ctx.r7.s64 * 92;
	// subf r8,r7,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r7.s64;
loc_8221BEC8:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r6,92
	ctx.r6.s64 = ctx.r6.s64 + 92;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lfs f5,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f1,f6,f5
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f11,f2,f5
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fadds f13,f4,f10
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fadds f10,f1,f3
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f10,40(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,44(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f2,f13,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f6,f9
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f7,f4
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f10,f13,f2
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lhz r7,74(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 74);
	// rlwinm r5,r7,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r5,74(r11)
	PPC_STORE_U16(ctx.r11.u32 + 74, ctx.r5.u16);
	// bne 0x8221bec8
	if (!ctx.cr0.eq) goto loc_8221BEC8;
loc_8221BFA4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221c100
	if (ctx.cr6.eq) goto loc_8221C100;
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lfs f0,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,540
	ctx.r30.s64 = ctx.r31.s64 + 540;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f13,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stw r8,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f11,540(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stw r7,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r7.u32);
	// lfs f12,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f10,544(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f8,548(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r5.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r3,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r3.u32);
	// lfs f6,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f4.f64 = double(temp.f32);
	// lfs f7,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f3,556(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// fadds f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f2,552(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f5,560(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// ble cr6,0x8221c11c
	if (!ctx.cr6.gt) goto loc_8221C11C;
	// li r28,92
	ctx.r28.s64 = 92;
	// addi r29,r4,-1
	ctx.r29.s64 = ctx.r4.s64 + -1;
loc_8221C044:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lfs f0,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lfs f5,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82308fc8
	ctx.lr = 0x8221C0D4;
	sub_82308FC8(ctx, base);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82308fc8
	ctx.lr = 0x8221C0E0;
	sub_82308FC8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,92
	ctx.r28.s64 = ctx.r28.s64 + 92;
	// bne 0x8221c044
	if (!ctx.cr0.eq) goto loc_8221C044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221e008
	ctx.lr = 0x8221C0F4;
	sub_8221E008(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8221C100:
	// stfs f0,548(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// addi r11,r31,540
	ctx.r11.s64 = ctx.r31.s64 + 540;
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stfs f0,556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
loc_8221C11C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221e008
	ctx.lr = 0x8221C124;
	sub_8221E008(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C130"))) PPC_WEAK_FUNC(sub_8221C130);
PPC_FUNC_IMPL(__imp__sub_8221C130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8221C138;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8233fa20
	ctx.lr = 0x8221C140;
	__savefpr_22(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221c214
	if (ctx.cr6.eq) goto loc_8221C214;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c5f8
	if (ctx.cr6.eq) goto loc_8221C5F8;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8221C16C:
	// lwz r11,532(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 532);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r5,164(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221c198
	if (ctx.cr6.eq) goto loc_8221C198;
	// bl 0x822578d8
	ctx.lr = 0x8221C194;
	sub_822578D8(ctx, base);
	// b 0x8221c1a0
	goto loc_8221C1A0;
loc_8221C198:
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221C1A0;
	sub_8233E4E0(ctx, base);
loc_8221C1A0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8221c1d8
	if (ctx.cr6.eq) goto loc_8221C1D8;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,340(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// lwz r10,40(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// b 0x8221c1dc
	goto loc_8221C1DC;
loc_8221C1D8:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_8221C1DC:
	// bl 0x82257540
	ctx.lr = 0x8221C1E0;
	sub_82257540(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// bne 0x8221c16c
	if (!ctx.cr0.eq) goto loc_8221C16C;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8233fa6c
	ctx.lr = 0x8221C210;
	__restfpr_22(ctx, base);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8221C214:
	// lfs f28,580(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 580);
	ctx.f28.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c5f8
	if (ctx.cr6.eq) goto loc_8221C5F8;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r25,r11,22200
	ctx.r25.s64 = ctx.r11.s64 + 22200;
	// lfs f27,516(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 516);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f25.f64 = double(temp.f32);
loc_8221C244:
	// lwz r11,532(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 532);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221c2bc
	if (ctx.cr6.eq) goto loc_8221C2BC;
	// lwz r11,776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// addi r3,r30,776
	ctx.r3.s64 = ctx.r30.s64 + 776;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221C274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8221c2bc
	if (ctx.cr6.eq) goto loc_8221C2BC;
	// addi r4,r30,928
	ctx.r4.s64 = ctx.r30.s64 + 928;
loc_8221C280:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8233e4e0
	ctx.lr = 0x8221C28C;
	sub_8233E4E0(ctx, base);
loc_8221C28C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8221c2dc
	if (ctx.cr6.eq) goto loc_8221C2DC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,340(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// lwz r10,40(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// b 0x8221c3c4
	goto loc_8221C3C4;
loc_8221C2BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r5,164(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221c280
	if (ctx.cr6.eq) goto loc_8221C280;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822578d8
	ctx.lr = 0x8221C2D8;
	sub_822578D8(ctx, base);
	// b 0x8221c28c
	goto loc_8221C28C;
loc_8221C2DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221c3c0
	if (ctx.cr6.eq) goto loc_8221C3C0;
	// lwz r11,776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// addi r3,r30,776
	ctx.r3.s64 = ctx.r30.s64 + 776;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221C2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8221c3c0
	if (ctx.cr6.eq) goto loc_8221C3C0;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221C310;
	sub_8233E4E0(ctx, base);
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lwz r9,320(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// bl 0x82257600
	ctx.lr = 0x8221C338;
	sub_82257600(ctx, base);
	// lfs f0,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f4,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f1.f64 = double(temp.f32);
	// stfs f26,252(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f26,236(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f26,220(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f25,268(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f6,208(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f3,216(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f2,224(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f1,228(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfs f0,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f13,240(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f12,244(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f10,248(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f11,256(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f8,260(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f5,264(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
loc_8221C3C0:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_8221C3C4:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82257540
	ctx.lr = 0x8221C3D0;
	sub_82257540(ctx, base);
	// fmr f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f26.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// beq cr6,0x8221c4c0
	if (ctx.cr6.eq) goto loc_8221C4C0;
	// lwz r11,776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// addi r3,r30,776
	ctx.r3.s64 = ctx.r30.s64 + 776;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221C3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8221c4c0
	if (ctx.cr6.eq) goto loc_8221C4C0;
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221c418
	if (!ctx.cr6.eq) goto loc_8221C418;
	// lfs f0,24(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
loc_8221C418:
	// lwz r9,460(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// lfs f11,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,464(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lfs f12,480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,476(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f10,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f7,472(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	ctx.f7.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f1,f13,f4,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 - ctx.f9.f64));
	// fmsubs f13,f11,f7,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f12,f12,f10,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f3.f64));
	// fadds f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f8,f5,f12
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f4,f7,f28
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f9,f28
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmuls f3,f5,f28
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
loc_8221C4C0:
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f8,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f2,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f30,f11
	ctx.f3.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// lfs f2,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f10,f27
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f30,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// lfs f24,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f1,f29,f1
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// lfs f22,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f22.f64 = double(temp.f32);
	// fsubs f6,f31,f6
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f6.f64));
	// lfs f31,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f5,f5,f27
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fadds f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fmuls f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f1,f8,f11
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmadds f12,f2,f6,f3
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f11,f10,f6,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f10,f30,f6,f13
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fmadds f31,f31,f5,f12
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fmadds f30,f24,f5,f11
	ctx.f30.f64 = double(float(ctx.f24.f64 * ctx.f5.f64 + ctx.f11.f64));
	// fmadds f29,f23,f5,f10
	ctx.f29.f64 = double(float(ctx.f23.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmuls f8,f31,f22
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f7,f30,f22
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f22.f64));
	// fmuls f6,f29,f22
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f22.f64));
	// fadds f5,f8,f4
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f5,0(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f4,4(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,8(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// beq cr6,0x8221c5ec
	if (ctx.cr6.eq) goto loc_8221C5EC;
	// lwz r11,776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// addi r3,r30,776
	ctx.r3.s64 = ctx.r30.s64 + 776;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221C5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8221c5ec
	if (ctx.cr6.eq) goto loc_8221C5EC;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221c5ec
	if (!ctx.cr6.eq) goto loc_8221C5EC;
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fneg f13,f30
	ctx.f13.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fneg f12,f29
	ctx.f12.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82215fd0
	ctx.lr = 0x8221C5EC;
	sub_82215FD0(ctx, base);
loc_8221C5EC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// bne 0x8221c244
	if (!ctx.cr0.eq) goto loc_8221C244;
loc_8221C5F8:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8233fa6c
	ctx.lr = 0x8221C604;
	__restfpr_22(ctx, base);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C608"))) PPC_WEAK_FUNC(sub_8221C608);
PPC_FUNC_IMPL(__imp__sub_8221C608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8221C610;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa34
	ctx.lr = 0x8221C618;
	__savefpr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cafc
	if (ctx.cr6.eq) goto loc_8221CAFC;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f29,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
loc_8221C640:
	// lwz r11,504(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 504);
	// add r30,r26,r11
	ctx.r30.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwzx r29,r26,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8221c760
	if (!ctx.cr6.eq) goto loc_8221C760;
	// lfs f0,576(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221c66c
	if (!ctx.cr6.lt) goto loc_8221C66C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8221C66C:
	// lfs f13,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f10,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f10,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f31,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f0,f9,f1
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f12,f8,f1
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f9,f7,f1
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmadds f8,f5,f11,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f7,f4,f11,f12
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f5,f3,f11,f9
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f0,f2,f6,f8
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f8.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f13,f13,f6,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f7.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f12,f10,f6,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f5.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// fmuls f4,f0,f31
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// fmuls f3,f13,f31
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// fmuls f2,f12,f31
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fsubs f1,f30,f4
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f4.f64));
	// stfs f1,0(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fsubs f0,f28,f3
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f3.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fsubs f13,f27,f2
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f2.f64));
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r7,r8,11,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8221caf0
	if (!ctx.cr6.eq) goto loc_8221CAF0;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r10,160(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8221caf0
	if (ctx.cr6.eq) goto loc_8221CAF0;
	// addi r5,r30,68
	ctx.r5.s64 = ctx.r30.s64 + 68;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x82215fd0
	ctx.lr = 0x8221C75C;
	sub_82215FD0(ctx, base);
	// b 0x8221caf0
	goto loc_8221CAF0;
loc_8221C760:
	// lwz r31,8(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8221c7e4
	if (!ctx.cr6.eq) goto loc_8221C7E4;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f10,f11,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f5,f9,f8,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fadds f13,f5,f7
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221c7b0
	if (!ctx.cr6.gt) goto loc_8221C7B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8221c7d4
	goto loc_8221C7D4;
loc_8221C7B0:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_8221C7D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221caf0
	if (ctx.cr6.eq) goto loc_8221CAF0;
	// b 0x8221cab0
	goto loc_8221CAB0;
loc_8221C7E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221c928
	if (!ctx.cr6.eq) goto loc_8221C928;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f31,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lfs f30,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bl 0x8221f3c0
	ctx.lr = 0x8221C828;
	sub_8221F3C0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221caf0
	if (ctx.cr6.eq) goto loc_8221CAF0;
	// lwz r11,412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 412);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221cab0
	if (!ctx.cr6.eq) goto loc_8221CAB0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221cab0
	if (ctx.cr6.eq) goto loc_8221CAB0;
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f8,f9,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f29
	ctx.cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// bge cr6,0x8221cab0
	if (!ctx.cr6.lt) goto loc_8221CAB0;
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// fadds f9,f30,f31
	ctx.f9.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// lfs f6,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lwz r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// fsubs f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f2,f10,f7
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fmadds f10,f13,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmuls f3,f5,f5
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f13,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f11,f4,f4,f3
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f8,f4,f0,f12
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f7,f2,f2,f11
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fmadds f4,f2,f13,f8
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fnmsubs f5,f9,f9,f7
	ctx.f5.f64 = double(float(-(ctx.f9.f64 * ctx.f9.f64 - ctx.f7.f64)));
	// fmuls f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmsubs f2,f4,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 - ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fsubs f0,f1,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// fdivs f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x8221cab0
	goto loc_8221CAB0;
loc_8221C928:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8221ca18
	if (!ctx.cr6.eq) goto loc_8221CA18;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r28,r31,88
	ctx.r28.s64 = ctx.r31.s64 + 88;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfs f2,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// bl 0x8221f270
	ctx.lr = 0x8221C96C;
	sub_8221F270(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221caf0
	if (ctx.cr6.eq) goto loc_8221CAF0;
	// lwz r11,412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 412);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221cab0
	if (!ctx.cr6.eq) goto loc_8221CAB0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221cab0
	if (ctx.cr6.eq) goto loc_8221CAB0;
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f8,f9,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f29
	ctx.cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// bge cr6,0x8221cab0
	if (!ctx.cr6.lt) goto loc_8221CAB0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwz r7,32(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// lwz r28,60(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r24,64(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lfs f2,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r4,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r4.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// bl 0x8221cb10
	ctx.lr = 0x8221CA14;
	sub_8221CB10(ctx, base);
	// b 0x8221cab0
	goto loc_8221CAB0;
loc_8221CA18:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8221cab0
	if (!ctx.cr6.eq) goto loc_8221CAB0;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r31,152
	ctx.r7.s64 = ctx.r31.s64 + 152;
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221ef48
	ctx.lr = 0x8221CA40;
	sub_8221EF48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221caf0
	if (ctx.cr6.eq) goto loc_8221CAF0;
	// lwz r11,412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 412);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221cab0
	if (!ctx.cr6.eq) goto loc_8221CAB0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221cab0
	if (ctx.cr6.eq) goto loc_8221CAB0;
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f8,f9,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f29
	ctx.cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// bge cr6,0x8221cab0
	if (!ctx.cr6.lt) goto loc_8221CAB0;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_8221CAB0:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// stfs f4,0(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fsubs f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// stfs f3,4(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fsubs f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f2,8(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_8221CAF0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,92
	ctx.r26.s64 = ctx.r26.s64 + 92;
	// bne 0x8221c640
	if (!ctx.cr0.eq) goto loc_8221C640;
loc_8221CAFC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa80
	ctx.lr = 0x8221CB08;
	__restfpr_27(ctx, base);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CB0C"))) PPC_WEAK_FUNC(sub_8221CB0C);
PPC_FUNC_IMPL(__imp__sub_8221CB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221CB10"))) PPC_WEAK_FUNC(sub_8221CB10);
PPC_FUNC_IMPL(__imp__sub_8221CB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8233fa28
	ctx.lr = 0x8221CB20;
	__savefpr_24(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f9,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f8,f1,f2
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// lfs f7,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f2,f7
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// lfs f31,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f5,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f30,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f27,f8,f8
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f31,f3
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f3.f64));
	// lfs f28,376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f26,f30,f2
	ctx.f26.f64 = double(float(ctx.f30.f64 - ctx.f2.f64));
	// fsubs f25,f29,f1
	ctx.f25.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f6,f13
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f8,f5,f12
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f24,f0,f7
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmsubs f10,f5,f13,f4
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 - ctx.f4.f64));
	// fmuls f4,f25,f12
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f12.f64));
	// fmsubs f8,f6,f0,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f8.f64));
	// fmuls f5,f26,f13
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmsubs f9,f11,f12,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f9.f64));
	// fmsubs f6,f25,f13,f24
	ctx.f6.f64 = double(float(ctx.f25.f64 * ctx.f13.f64 - ctx.f24.f64));
	// fmuls f25,f10,f10
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmsubs f4,f26,f0,f4
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 - ctx.f4.f64));
	// fmsubs f5,f7,f12,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f5.f64));
	// fmadds f7,f9,f9,f25
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f25.f64));
	// fmadds f7,f8,f8,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f7,f28
	ctx.cr6.compare(ctx.f7.f64, ctx.f28.f64);
	// bge cr6,0x8221cbd8
	if (!ctx.cr6.lt) goto loc_8221CBD8;
	// lfs f9,804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	ctx.f9.f64 = double(temp.f32);
	// b 0x8221cc14
	goto loc_8221CC14;
loc_8221CBD8:
	// fmuls f28,f6,f6
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmuls f26,f13,f13
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmadds f6,f5,f5,f28
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f28.f64));
	// fmadds f28,f0,f0,f26
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f26.f64));
	// fmadds f5,f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f10,f4,f4,f6
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmadds f9,f12,f12,f28
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f28.f64));
	// fmadds f8,f4,f8,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fnmsubs f6,f9,f27,f10
	ctx.f6.f64 = double(float(-(ctx.f9.f64 * ctx.f27.f64 - ctx.f10.f64)));
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmsubs f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 - ctx.f5.f64));
	// fsqrts f10,f4
	ctx.f10.f64 = double(float(sqrt(ctx.f4.f64)));
	// fsubs f9,f10,f8
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fdivs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
loc_8221CC14:
	// lfs f10,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f13,f13
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fadds f8,f31,f8
	ctx.f8.f64 = double(float(ctx.f31.f64 + ctx.f8.f64));
	// fadds f7,f30,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f7.f64));
	// fadds f6,f29,f5
	ctx.f6.f64 = double(float(ctx.f29.f64 + ctx.f5.f64));
	// fmadds f5,f0,f0,f4
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fsubs f4,f8,f3
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// fsubs f8,f7,f2
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fsubs f7,f6,f1
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fmadds f6,f12,f12,f5
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f8,f7,f0,f5
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f7,f4,f13,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fdivs f8,f7,f6
	ctx.f8.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// fcmpu cr6,f8,f10
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// blt cr6,0x8221cc78
	if (ctx.cr6.lt) goto loc_8221CC78;
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f8,f10
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// bgt cr6,0x8221cc78
	if (ctx.cr6.gt) goto loc_8221CC78;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
loc_8221CC78:
	// fcmpu cr6,f8,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// beq cr6,0x8221cd04
	if (ctx.cr6.eq) goto loc_8221CD04;
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f5,f9,f9
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fadds f4,f12,f2
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// fadds f2,f8,f1
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// fadds f1,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fmadds f0,f7,f7,f5
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fsubs f13,f30,f4
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f4.f64));
	// fsubs f12,f29,f2
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f2.f64));
	// fsubs f10,f31,f1
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmuls f6,f13,f13
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f4,f12,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f3,f11,f10,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f2,f10,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f1,f9,f12,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fsubs f0,f2,f27
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f27.f64));
	// fmuls f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmsubs f12,f1,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 - ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsubs f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fdivs f9,f10,f8
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,0(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8233fa74
	ctx.lr = 0x8221CCF8;
	__restfpr_24(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221CD04:
	// fneg f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8233fa74
	ctx.lr = 0x8221CD14;
	__restfpr_24(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CD20"))) PPC_WEAK_FUNC(sub_8221CD20);
PPC_FUNC_IMPL(__imp__sub_8221CD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,336(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lfs f0,224(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8221d068
	if (ctx.cr6.lt) goto loc_8221D068;
	// addi r5,r4,-3
	ctx.r5.s64 = ctx.r4.s64 + -3;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8221CD44:
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addi r6,r9,48
	ctx.r6.s64 = ctx.r9.s64 + 48;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f13,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lfs f12,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f2,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f9,f9
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f11,f6,f6,f1
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f10,f3,f3,f11
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fadds f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fsubs f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmadds f4,f8,f12,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fdivs f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 / ctx.f4.f64));
	// fmuls f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmuls f12,f6,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fsubs f8,f7,f12
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f4,f10
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f10,f6,f11
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f8,f3,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lfs f2,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lfs f1,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f5,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f7
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fsubs f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmadds f12,f6,f6,f4
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmadds f11,f3,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fadds f10,f2,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fsubs f9,f2,f11
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fmadds f8,f10,f1,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fdivs f4,f9,f8
	ctx.f4.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fmuls f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f1,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f12,f7,f2
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f11,f3,f2
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fsubs f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f11,f6,f12
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f10,f7,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fadds f8,f1,f11
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r11,-12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	// lfs f3,-8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f3.f64 = double(temp.f32);
	// lwz r10,-16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16);
	// lfs f2,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f7,f1,f13
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f6,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fsubs f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f1,f7,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f12,f4,f4,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fadds f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// fsubs f10,f3,f12
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fmadds f9,f11,f2,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fdivs f5,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmuls f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f2,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f1,f8,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f12,f4,f3
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fsubs f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// fmuls f12,f7,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fadds f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f4,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lfs f3,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f6,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f2,f13,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f12,f7,f7,f2
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fadds f11,f4,f12
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fsubs f9,f4,f12
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// fmadds f8,f11,f3,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fdivs f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f12,f7,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fsubs f11,f1,f3
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f4,8(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f11,f7,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fadds f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blt cr6,0x8221cd44
	if (ctx.cr6.lt) goto loc_8221CD44;
loc_8221D068:
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r11,r7,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r7.s64;
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8221D07C:
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f13,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f2,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f9,f9
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f11,f6,f6,f1
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f7,f3,f3,f11
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fadds f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fsubs f1,f13,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmadds f13,f4,f12,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fdivs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// fmuls f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f7,f6,f11
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fsubs f1,f8,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f13,f10,f4
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f11,f5,f2
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f10,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f7,f6,f8
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fadds f13,f4,f5
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f1,f6,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f12,f3,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bdnz 0x8221d07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221D07C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221D144"))) PPC_WEAK_FUNC(sub_8221D144);
PPC_FUNC_IMPL(__imp__sub_8221D144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221D148"))) PPC_WEAK_FUNC(sub_8221D148);
PPC_FUNC_IMPL(__imp__sub_8221D148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8221D150;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r24,r10,31376
	ctx.r24.s64 = ctx.r10.s64 + 31376;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,48(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// beq cr6,0x8221d4a4
	if (ctx.cr6.eq) goto loc_8221D4A4;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_8221D1A4:
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r28,r27,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221d3d0
	if (ctx.cr6.eq) goto loc_8221D3D0;
	// lwz r11,776(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 776);
	// addi r3,r29,776
	ctx.r3.s64 = ctx.r29.s64 + 776;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221D1D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8221d3d0
	if (ctx.cr6.eq) goto loc_8221D3D0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8221d260
	if (ctx.cr6.eq) goto loc_8221D260;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r29,928
	ctx.r5.s64 = ctx.r29.s64 + 928;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,340(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// lwz r10,40(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x82257540
	ctx.lr = 0x8221D214;
	sub_82257540(ctx, base);
	// lfs f13,68(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,72(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,76(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// b 0x8221d304
	goto loc_8221D304;
loc_8221D260:
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221d2ac
	if (ctx.cr6.eq) goto loc_8221D2AC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r5,164(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221d298
	if (ctx.cr6.eq) goto loc_8221D298;
	// bl 0x822578d8
	ctx.lr = 0x8221D28C;
	sub_822578D8(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// b 0x8221d2fc
	goto loc_8221D2FC;
loc_8221D298:
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221D2A0;
	sub_8233E4E0(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// b 0x8221d2fc
	goto loc_8221D2FC;
loc_8221D2AC:
	// lwz r10,316(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,320(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r29,20
	ctx.r5.s64 = ctx.r29.s64 + 20;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f6,160(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
loc_8221D2FC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82257600
	ctx.lr = 0x8221D304;
	sub_82257600(ctx, base);
loc_8221D304:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lfs f1,580(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,64(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221d350
	if (ctx.cr6.eq) goto loc_8221D350;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x8221b618
	ctx.lr = 0x8221D330;
	sub_8221B618(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8221D340:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8221d340
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221D340;
	// b 0x8221d378
	goto loc_8221D378;
loc_8221D350:
	// addi r7,r29,604
	ctx.r7.s64 = ctx.r29.s64 + 604;
	// lfs f3,644(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x8221b618
	ctx.lr = 0x8221D35C;
	sub_8221B618(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8221D36C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8221d36c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221D36C;
loc_8221D378:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lfs f13,64(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8221d498
	if (ctx.cr6.eq) goto loc_8221D498;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8221d498
	if (ctx.cr6.eq) goto loc_8221D498;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221d3c8
	if (ctx.cr6.eq) goto loc_8221D3C8;
	// lwz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r10.u32);
loc_8221D3C8:
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// b 0x8221d498
	goto loc_8221D498;
loc_8221D3D0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r5,164(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221d3f0
	if (ctx.cr6.eq) goto loc_8221D3F0;
	// bl 0x822578d8
	ctx.lr = 0x8221D3EC;
	sub_822578D8(ctx, base);
	// b 0x8221d3f8
	goto loc_8221D3F8;
loc_8221D3F0:
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221D3F8;
	sub_8233E4E0(ctx, base);
loc_8221D3F8:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8221d430
	if (ctx.cr6.eq) goto loc_8221D430;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,340(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// lwz r10,40(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// b 0x8221d434
	goto loc_8221D434;
loc_8221D430:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_8221D434:
	// bl 0x82257600
	ctx.lr = 0x8221D438;
	sub_82257600(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lfs f1,580(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f2,64(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x8221b618
	ctx.lr = 0x8221D454;
	sub_8221B618(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8221D464:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8221d464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221D464;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lfs f0,64(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_8221D498:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,80
	ctx.r27.s64 = ctx.r27.s64 + 80;
	// bne 0x8221d1a4
	if (!ctx.cr0.eq) goto loc_8221D1A4;
loc_8221D4A4:
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r29,312(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8221d4e0
	if (!ctx.cr6.gt) goto loc_8221D4E0;
loc_8221D4B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221c130
	ctx.lr = 0x8221D4C0;
	sub_8221C130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221c608
	ctx.lr = 0x8221D4C8;
	sub_8221C608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221cd20
	ctx.lr = 0x8221D4D0;
	sub_8221CD20(ctx, base);
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221d4b8
	if (ctx.cr6.lt) goto loc_8221D4B8;
loc_8221D4E0:
	// lfs f0,36(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// lfs f13,428(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lfs f11,584(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// beq cr6,0x8221d764
	if (ctx.cr6.eq) goto loc_8221D764;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8221d6d4
	if (ctx.cr6.lt) goto loc_8221D6D4;
	// addi r7,r29,-3
	ctx.r7.s64 = ctx.r29.s64 + -3;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_8221D518:
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// ble cr6,0x8221d554
	if (!ctx.cr6.gt) goto loc_8221D554;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// b 0x8221d560
	goto loc_8221D560;
loc_8221D554:
	// lfs f12,584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_8221D560:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,44(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,36(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// ble cr6,0x8221d5c0
	if (!ctx.cr6.gt) goto loc_8221D5C0;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// b 0x8221d5cc
	goto loc_8221D5CC;
loc_8221D5C0:
	// lfs f12,584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_8221D5CC:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r9,276
	ctx.r10.s64 = ctx.r9.s64 + 276;
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,44(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-92
	ctx.r11.s64 = ctx.r11.s64 + -92;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,36(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// ble cr6,0x8221d630
	if (!ctx.cr6.gt) goto loc_8221D630;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// b 0x8221d63c
	goto loc_8221D63C;
loc_8221D630:
	// lfs f12,584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_8221D63C:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,44(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,36(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// ble cr6,0x8221d698
	if (!ctx.cr6.gt) goto loc_8221D698;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// b 0x8221d6a4
	goto loc_8221D6A4;
loc_8221D698:
	// lfs f12,584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_8221D6A4:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,368
	ctx.r9.s64 = ctx.r9.s64 + 368;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,44(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// blt cr6,0x8221d518
	if (ctx.cr6.lt) goto loc_8221D518;
loc_8221D6D4:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8221d9b8
	if (!ctx.cr6.lt) goto loc_8221D9B8;
	// subf r11,r8,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r8.s64;
	// mulli r10,r8,92
	ctx.r10.s64 = ctx.r8.s64 * 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8221D6E8:
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// ble cr6,0x8221d724
	if (!ctx.cr6.gt) goto loc_8221D724;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// b 0x8221d730
	goto loc_8221D730;
loc_8221D724:
	// lfs f12,584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_8221D730:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,44(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// bdnz 0x8221d6e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221D6E8;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_8221D764:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8221d934
	if (ctx.cr6.lt) goto loc_8221D934;
	// addi r7,r29,-3
	ctx.r7.s64 = ctx.r29.s64 + -3;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8221D778:
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// addi r8,r10,276
	ctx.r8.s64 = ctx.r10.s64 + 276;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// addi r10,r10,368
	ctx.r10.s64 = ctx.r10.s64 + 368;
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f7,f1,f13
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,-92
	ctx.r11.s64 = ctx.r11.s64 + -92;
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f8,f2,f1
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fsubs f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// stw r3,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f8,f2,f3
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// blt cr6,0x8221d778
	if (ctx.cr6.lt) goto loc_8221D778;
loc_8221D934:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8221d9b8
	if (!ctx.cr6.lt) goto loc_8221D9B8;
	// mulli r8,r9,92
	ctx.r8.s64 = ctx.r9.s64 * 92;
	// subf r10,r9,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r9.s64;
loc_8221D944:
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r8,92
	ctx.r8.s64 = ctx.r8.s64 + 92;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// bne 0x8221d944
	if (!ctx.cr0.eq) goto loc_8221D944;
loc_8221D9B8:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D9C4"))) PPC_WEAK_FUNC(sub_8221D9C4);
PPC_FUNC_IMPL(__imp__sub_8221D9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221D9C8"))) PPC_WEAK_FUNC(sub_8221D9C8);
PPC_FUNC_IMPL(__imp__sub_8221D9C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221D9D0"))) PPC_WEAK_FUNC(sub_8221D9D0);
PPC_FUNC_IMPL(__imp__sub_8221D9D0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221db94
	if (!ctx.cr6.eq) goto loc_8221DB94;
	// lwz r11,-156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -156);
	// addi r30,r3,-156
	ctx.r30.s64 = ctx.r3.s64 + -156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221DA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -152);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221da24
	if (!ctx.cr6.eq) goto loc_8221DA24;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8221da4c
	goto loc_8221DA4C;
loc_8221DA24:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8221da48
	if (ctx.cr6.eq) goto loc_8221DA48;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8221da48
	if (ctx.cr6.eq) goto loc_8221DA48;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8221da4c
	if (!ctx.cr6.gt) goto loc_8221DA4C;
loc_8221DA48:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8221DA4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,-152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -152);
	// beq cr6,0x8221db60
	if (ctx.cr6.eq) goto loc_8221DB60;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221da94
	if (!ctx.cr6.eq) goto loc_8221DA94;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8221da94
	if (ctx.cr6.eq) goto loc_8221DA94;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8221da94
	if (ctx.cr6.eq) goto loc_8221DA94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8221da8c
	if (ctx.cr6.eq) goto loc_8221DA8C;
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r10.u32);
loc_8221DA8C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8221DA94:
	// lwz r11,-152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -152);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221db94
	if (ctx.cr6.eq) goto loc_8221DB94;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8221db2c
	if (ctx.cr6.lt) goto loc_8221DB2C;
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8221DACC:
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// stfs f0,44(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,136(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 136, temp.u32);
	// stfs f0,132(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 132, temp.u32);
	// stfs f0,128(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 128, temp.u32);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,228(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 228, temp.u32);
	// stfs f0,224(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 224, temp.u32);
	// stfs f0,220(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,320(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 320, temp.u32);
	// addi r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 + 368;
	// stfs f0,316(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 316, temp.u32);
	// stfs f0,312(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 312, temp.u32);
	// blt cr6,0x8221dacc
	if (ctx.cr6.lt) goto loc_8221DACC;
loc_8221DB2C:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8221db94
	if (!ctx.cr6.lt) goto loc_8221DB94;
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// mulli r10,r9,92
	ctx.r10.s64 = ctx.r9.s64 * 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8221DB40:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// stfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// bdnz 0x8221db40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221DB40;
	// b 0x8221db94
	goto loc_8221DB94;
loc_8221DB60:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8221db94
	if (ctx.cr6.eq) goto loc_8221DB94;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8221db94
	if (ctx.cr6.eq) goto loc_8221DB94;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8221db94
	if (ctx.cr6.eq) goto loc_8221DB94;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221db90
	if (ctx.cr6.eq) goto loc_8221DB90;
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r10.u32);
loc_8221DB90:
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_8221DB94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DBAC"))) PPC_WEAK_FUNC(sub_8221DBAC);
PPC_FUNC_IMPL(__imp__sub_8221DBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221DBB0"))) PPC_WEAK_FUNC(sub_8221DBB0);
PPC_FUNC_IMPL(__imp__sub_8221DBB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -152);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8221dbc8
	if (ctx.cr6.eq) goto loc_8221DBC8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8221DBC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DBD0"))) PPC_WEAK_FUNC(sub_8221DBD0);
PPC_FUNC_IMPL(__imp__sub_8221DBD0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,156(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lfs f13,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r11,31376
	ctx.r7.s64 = ctx.r11.s64 + 31376;
	// lfs f0,644(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// lfs f31,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x8221dc10
	if (!ctx.cr6.eq) goto loc_8221DC10;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_8221DC10:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8221dc84
	if (!ctx.cr6.gt) goto loc_8221DC84;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x8221eeb0
	ctx.lr = 0x8221DC50;
	sub_8221EEB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8221dc84
	if (ctx.cr6.eq) goto loc_8221DC84;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8221dc84
	if (ctx.cr6.eq) goto loc_8221DC84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221dc78
	if (ctx.cr6.eq) goto loc_8221DC78;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_8221DC78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8221DC84:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_8221DC9C"))) PPC_WEAK_FUNC(sub_8221DC9C);
PPC_FUNC_IMPL(__imp__sub_8221DC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221DCA0"))) PPC_WEAK_FUNC(sub_8221DCA0);
PPC_FUNC_IMPL(__imp__sub_8221DCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x8221DCA8;
	__savegprlr_18(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221dff0
	if (!ctx.cr6.eq) goto loc_8221DFF0;
	// lwz r18,180(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// lfs f31,576(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	ctx.f31.f64 = double(temp.f32);
	// lwz r22,312(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// addi r19,r4,168
	ctx.r19.s64 = ctx.r4.s64 + 168;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8221dff0
	if (ctx.cr6.eq) goto loc_8221DFF0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f29,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
loc_8221DCFC:
	// lwz r11,12(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221dd10
	if (ctx.cr6.lt) goto loc_8221DD10;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8221dd18
	goto loc_8221DD18;
loc_8221DD10:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// add r24,r20,r11
	ctx.r24.u64 = ctx.r20.u64 + ctx.r11.u64;
loc_8221DD18:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221dfe0
	if (ctx.cr6.eq) goto loc_8221DFE0;
	// lwz r11,564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 564);
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221dfe0
	if (ctx.cr6.eq) goto loc_8221DFE0;
	// lwz r30,8(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8221de0c
	if (!ctx.cr6.eq) goto loc_8221DE0C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8221dfe0
	if (ctx.cr6.eq) goto loc_8221DFE0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8221DD64:
	// lwz r11,328(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 328);
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f0,64(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x8221ddfc
	if (ctx.cr6.eq) goto loc_8221DDFC;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f11,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f5,f8,f9,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fadds f0,f5,f7
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8221ddb4
	if (!ctx.cr6.gt) goto loc_8221DDB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8221ddd4
	goto loc_8221DDD4;
loc_8221DDB4:
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// fsubs f30,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_8221DDD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ddfc
	if (ctx.cr6.eq) goto loc_8221DDFC;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8221dbd0
	ctx.lr = 0x8221DDFC;
	sub_8221DBD0(ctx, base);
loc_8221DDFC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// bne 0x8221dd64
	if (!ctx.cr0.eq) goto loc_8221DD64;
	// b 0x8221dfe0
	goto loc_8221DFE0;
loc_8221DE0C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221dea8
	if (!ctx.cr6.eq) goto loc_8221DEA8;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8221dfe0
	if (ctx.cr6.eq) goto loc_8221DFE0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8221DE24:
	// lwz r11,328(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 328);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x8221de98
	if (ctx.cr6.eq) goto loc_8221DE98;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x8221f3c0
	ctx.lr = 0x8221DE6C;
	sub_8221F3C0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221de98
	if (ctx.cr6.eq) goto loc_8221DE98;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8221dbd0
	ctx.lr = 0x8221DE98;
	sub_8221DBD0(ctx, base);
loc_8221DE98:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// bne 0x8221de24
	if (!ctx.cr0.eq) goto loc_8221DE24;
	// b 0x8221dfe0
	goto loc_8221DFE0;
loc_8221DEA8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8221df50
	if (!ctx.cr6.eq) goto loc_8221DF50;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lfs f30,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r28,r30,88
	ctx.r28.s64 = ctx.r30.s64 + 88;
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// beq cr6,0x8221dfe0
	if (ctx.cr6.eq) goto loc_8221DFE0;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8221DEE0:
	// lwz r11,328(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 328);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x8221df40
	if (ctx.cr6.eq) goto loc_8221DF40;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221f270
	ctx.lr = 0x8221DF14;
	sub_8221F270(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221df40
	if (ctx.cr6.eq) goto loc_8221DF40;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8221dbd0
	ctx.lr = 0x8221DF40;
	sub_8221DBD0(ctx, base);
loc_8221DF40:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// bne 0x8221dee0
	if (!ctx.cr0.eq) goto loc_8221DEE0;
	// b 0x8221dfe0
	goto loc_8221DFE0;
loc_8221DF50:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8221dfe0
	if (!ctx.cr6.eq) goto loc_8221DFE0;
	// addi r28,r30,88
	ctx.r28.s64 = ctx.r30.s64 + 88;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// addi r26,r30,152
	ctx.r26.s64 = ctx.r30.s64 + 152;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8221dfe0
	if (ctx.cr6.eq) goto loc_8221DFE0;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8221DF74:
	// lwz r11,328(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 328);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x8221dfd4
	if (ctx.cr6.eq) goto loc_8221DFD4;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ef48
	ctx.lr = 0x8221DFA8;
	sub_8221EF48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221dfd4
	if (ctx.cr6.eq) goto loc_8221DFD4;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8221dbd0
	ctx.lr = 0x8221DFD4;
	sub_8221DBD0(ctx, base);
loc_8221DFD4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// bne 0x8221df74
	if (!ctx.cr0.eq) goto loc_8221DF74;
loc_8221DFE0:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r20,r20,236
	ctx.r20.s64 = ctx.r20.s64 + 236;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x8221dcfc
	if (ctx.cr6.lt) goto loc_8221DCFC;
loc_8221DFF0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E004"))) PPC_WEAK_FUNC(sub_8221E004);
PPC_FUNC_IMPL(__imp__sub_8221E004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E008"))) PPC_WEAK_FUNC(sub_8221E008);
PPC_FUNC_IMPL(__imp__sub_8221E008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8221E010;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// lwz r10,544(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	// addi r30,r3,540
	ctx.r30.s64 = ctx.r3.s64 + 540;
	// lwz r9,548(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// addi r29,r3,552
	ctx.r29.s64 = ctx.r3.s64 + 552;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,552(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,556(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r6,560(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// bl 0x82309d98
	ctx.lr = 0x8221E060;
	sub_82309D98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,568(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x821ee318
	ctx.lr = 0x8221E074;
	sub_821EE318(ctx, base);
	// lwz r5,408(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8221e0a0
	if (!ctx.cr6.eq) goto loc_8221E0A0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,336(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// bl 0x821e24b0
	ctx.lr = 0x8221E0A0;
	sub_821E24B0(ctx, base);
loc_8221E0A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E0A8"))) PPC_WEAK_FUNC(sub_8221E0A8);
PPC_FUNC_IMPL(__imp__sub_8221E0A8) {
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
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,308
	ctx.r31.s64 = ctx.r3.s64 + 308;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e124
	if (ctx.cr6.eq) goto loc_8221E124;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8221e0e4
	if (ctx.cr6.gt) goto loc_8221E0E4;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8221E0E4:
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
	// bgt cr6,0x8221e11c
	if (ctx.cr6.gt) goto loc_8221E11C;
	// bge cr6,0x8221e124
	if (!ctx.cr6.lt) goto loc_8221E124;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e124
	if (ctx.cr6.eq) goto loc_8221E124;
loc_8221E11C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221eb58
	ctx.lr = 0x8221E124;
	sub_8221EB58(ctx, base);
loc_8221E124:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8221e134
	if (ctx.cr6.gt) goto loc_8221E134;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8221E134:
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

__attribute__((alias("__imp__sub_8221E150"))) PPC_WEAK_FUNC(sub_8221E150);
PPC_FUNC_IMPL(__imp__sub_8221E150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8221E158;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8221e198
	if (!ctx.cr6.eq) goto loc_8221E198;
	// bl 0x820ddca8
	ctx.lr = 0x8221E180;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e190
	if (ctx.cr6.eq) goto loc_8221E190;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8221e1b4
	goto loc_8221E1B4;
loc_8221E190:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8221e1b4
	goto loc_8221E1B4;
loc_8221E198:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8221e1c4
	if (!ctx.cr6.eq) goto loc_8221E1C4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221e2c0
	if (ctx.cr6.eq) goto loc_8221E2C0;
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_8221E1B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221e1e4
	if (ctx.cr6.eq) goto loc_8221E1E4;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// b 0x8221e1e4
	goto loc_8221E1E4;
loc_8221E1C4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8221e2c0
	if (ctx.cr6.eq) goto loc_8221E2C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x8221E1E0;
	sub_820F3178(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8221E1E4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221e2c0
	if (ctx.cr6.eq) goto loc_8221E2C0;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r31,r28,512
	ctx.r31.s64 = ctx.r28.s64 + 512;
	// lwz r11,328(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	// mulli r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 * 92;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,72(r11)
	PPC_STORE_U16(ctx.r11.u32 + 72, ctx.r9.u16);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,516(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 516);
	// lwz r11,512(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 512);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// bne cr6,0x8221e27c
	if (!ctx.cr6.eq) goto loc_8221E27C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221e268
	if (!ctx.cr6.eq) goto loc_8221E268;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4944
	ctx.r9.s64 = ctx.r10.s64 + 4944;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_8221E268:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8221ed20
	ctx.lr = 0x8221E27C;
	sub_8221ED20(ctx, base);
loc_8221E27C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,80
	ctx.r5.s64 = 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221E2A8;
	sub_8233E4E0(ctx, base);
	// lbz r11,177(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 177);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,177(r29)
	PPC_STORE_U8(ctx.r29.u32 + 177, ctx.r6.u8);
	// lwz r11,536(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 536);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r4.u32);
loc_8221E2C0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E2C8"))) PPC_WEAK_FUNC(sub_8221E2C8);
PPC_FUNC_IMPL(__imp__sub_8221E2C8) {
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
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8221e314
	if (!ctx.cr6.eq) goto loc_8221E314;
	// bl 0x820ddca8
	ctx.lr = 0x8221E2FC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e30c
	if (ctx.cr6.eq) goto loc_8221E30C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8221e338
	goto loc_8221E338;
loc_8221E30C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8221e338
	goto loc_8221E338;
loc_8221E314:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8221e34c
	if (!ctx.cr6.eq) goto loc_8221E34C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8221e334
	if (!ctx.cr6.eq) goto loc_8221E334;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221e370
	goto loc_8221E370;
loc_8221E334:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_8221E338:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221e344
	if (ctx.cr6.eq) goto loc_8221E344;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8221E344:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8221e370
	goto loc_8221E370;
loc_8221E34C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8221e35c
	if (!ctx.cr6.eq) goto loc_8221E35C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221e370
	goto loc_8221E370;
loc_8221E35C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x8221E370;
	sub_820F3178(ctx, base);
loc_8221E370:
	// lwz r8,516(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221e3b8
	if (ctx.cr6.eq) goto loc_8221E3B8;
	// lwz r9,532(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8221E38C:
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8221e3b0
	if (ctx.cr6.eq) goto loc_8221E3B0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x8221e38c
	if (ctx.cr6.lt) goto loc_8221E38C;
	// b 0x8221e3b8
	goto loc_8221E3B8;
loc_8221E3B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221e3d0
	ctx.lr = 0x8221E3B8;
	sub_8221E3D0(ctx, base);
loc_8221E3B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E3D0"))) PPC_WEAK_FUNC(sub_8221E3D0);
PPC_FUNC_IMPL(__imp__sub_8221E3D0) {
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
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,532(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r3,512
	ctx.r3.s64 = ctx.r3.s64 + 512;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lhz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 72);
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sth r8,72(r10)
	PPC_STORE_U16(ctx.r10.u32 + 72, ctx.r8.u16);
	// lwz r10,532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lbz r9,177(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 177);
	// addi r5,r9,255
	ctx.r5.s64 = ctx.r9.s64 + 255;
	// stb r5,177(r10)
	PPC_STORE_U8(ctx.r10.u32 + 177, ctx.r5.u8);
	// lwz r10,532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8221e9c8
	ctx.lr = 0x8221E430;
	sub_8221E9C8(ctx, base);
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r3,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8221E450"))) PPC_WEAK_FUNC(sub_8221E450);
PPC_FUNC_IMPL(__imp__sub_8221E450) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,392(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r8,396(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r7,400(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// lwz r6,404(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E484"))) PPC_WEAK_FUNC(sub_8221E484);
PPC_FUNC_IMPL(__imp__sub_8221E484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E488"))) PPC_WEAK_FUNC(sub_8221E488);
PPC_FUNC_IMPL(__imp__sub_8221E488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r9,392(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r8,396(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r7,400(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// lwz r5,404(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E4BC"))) PPC_WEAK_FUNC(sub_8221E4BC);
PPC_FUNC_IMPL(__imp__sub_8221E4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E4C0"))) PPC_WEAK_FUNC(sub_8221E4C0);
PPC_FUNC_IMPL(__imp__sub_8221E4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r6,600(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4536
	ctx.r11.s64 = ctx.r11.s64 + 4536;
	// lwz r7,1740(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8221e510
	if (ctx.cr6.eq) goto loc_8221E510;
	// lwz r9,1756(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1756);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8221E4F0:
	// lwz r8,80(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8221e690
	if (ctx.cr6.eq) goto loc_8221E690;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x8221e4f0
	if (ctx.cr6.lt) goto loc_8221E4F0;
loc_8221E510:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8221E514:
	// lwz r6,312(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x8221e630
	if (ctx.cr6.lt) goto loc_8221E630;
	// addi r11,r5,36
	ctx.r11.s64 = ctx.r5.s64 + 36;
	// addi r7,r6,-3
	ctx.r7.s64 = ctx.r6.s64 + -3;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8221E530:
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,232
	ctx.r10.s64 = ctx.r10.s64 + 232;
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,324
	ctx.r10.s64 = ctx.r10.s64 + 324;
	// addi r9,r9,368
	ctx.r9.s64 = ctx.r9.s64 + 368;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blt cr6,0x8221e530
	if (ctx.cr6.lt) goto loc_8221E530;
loc_8221E630:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r11,r8,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r8.s64;
	// addi r9,r5,36
	ctx.r9.s64 = ctx.r5.s64 + 36;
	// mulli r10,r8,92
	ctx.r10.s64 = ctx.r8.s64 * 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8221E648:
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bdnz 0x8221e648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221E648;
	// blr 
	return;
loc_8221E690:
	// mulli r11,r10,84
	ctx.r11.s64 = ctx.r10.s64 * 84;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8221e514
	goto loc_8221E514;
}

__attribute__((alias("__imp__sub_8221E69C"))) PPC_WEAK_FUNC(sub_8221E69C);
PPC_FUNC_IMPL(__imp__sub_8221E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E6A0"))) PPC_WEAK_FUNC(sub_8221E6A0);
PPC_FUNC_IMPL(__imp__sub_8221E6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8221E6A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// addi r31,r3,540
	ctx.r31.s64 = ctx.r3.s64 + 540;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,548(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// stfs f0,544(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// stfs f0,540(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// stfs f0,560(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 560, temp.u32);
	// stfs f0,556(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 556, temp.u32);
	// stfs f0,552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// lwz r30,312(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221e790
	if (ctx.cr6.eq) goto loc_8221E790;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8221E6E8:
	// lwz r11,328(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	// lfs f0,576(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82308fc8
	ctx.lr = 0x8221E778;
	sub_82308FC8(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82308fc8
	ctx.lr = 0x8221E784;
	sub_82308FC8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// bne 0x8221e6e8
	if (!ctx.cr0.eq) goto loc_8221E6E8;
loc_8221E790:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E798"))) PPC_WEAK_FUNC(sub_8221E798);
PPC_FUNC_IMPL(__imp__sub_8221E798) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E7A0"))) PPC_WEAK_FUNC(sub_8221E7A0);
PPC_FUNC_IMPL(__imp__sub_8221E7A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E7A8"))) PPC_WEAK_FUNC(sub_8221E7A8);
PPC_FUNC_IMPL(__imp__sub_8221E7A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E7B0"))) PPC_WEAK_FUNC(sub_8221E7B0);
PPC_FUNC_IMPL(__imp__sub_8221E7B0) {
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
	// beq cr6,0x8221e8ac
	if (ctx.cr6.eq) goto loc_8221E8AC;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,5212
	ctx.r31.s64 = ctx.r11.s64 + 5212;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8221E7E4;
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
	// bne cr6,0x8221e8a0
	if (!ctx.cr6.eq) goto loc_8221E8A0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221e8a0
	if (ctx.cr6.eq) goto loc_8221E8A0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8221e8a0
	if (!ctx.cr6.lt) goto loc_8221E8A0;
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
	// beq cr6,0x8221e878
	if (ctx.cr6.eq) goto loc_8221E878;
loc_8221E850:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221e870
	if (ctx.cr6.eq) goto loc_8221E870;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8221e850
	if (!ctx.cr6.eq) goto loc_8221E850;
	// b 0x8221e878
	goto loc_8221E878;
loc_8221E870:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8221E878:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221e890
	if (!ctx.cr6.eq) goto loc_8221E890;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8221E890:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221E89C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8221E8A0:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8221E8AC;
	sub_823051A8(ctx, base);
loc_8221E8AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E8C4"))) PPC_WEAK_FUNC(sub_8221E8C4);
PPC_FUNC_IMPL(__imp__sub_8221E8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E8C8"))) PPC_WEAK_FUNC(sub_8221E8C8);
PPC_FUNC_IMPL(__imp__sub_8221E8C8) {
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
	// addi r31,r11,5212
	ctx.r31.s64 = ctx.r11.s64 + 5212;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8221E8F0;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e914
	if (ctx.cr6.eq) goto loc_8221E914;
loc_8221E8FC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e944
	if (!ctx.cr6.eq) goto loc_8221E944;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221e8fc
	if (!ctx.cr6.eq) goto loc_8221E8FC;
loc_8221E914:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221e96c
	if (!ctx.cr6.eq) goto loc_8221E96C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221eaa8
	ctx.lr = 0x8221E928;
	sub_8221EAA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221e96c
	if (!ctx.cr6.eq) goto loc_8221E96C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8221E93C;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221e9b0
	goto loc_8221E9B0;
loc_8221E944:
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
	// b 0x8221e9a0
	goto loc_8221E9A0;
loc_8221E96C:
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
loc_8221E9A0:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8221E9AC;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8221E9B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E9C8"))) PPC_WEAK_FUNC(sub_8221E9C8);
PPC_FUNC_IMPL(__imp__sub_8221E9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8221E9D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221ea34
	if (ctx.cr6.eq) goto loc_8221EA34;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8221E9FC:
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// subf r4,r9,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221ea30
	if (!ctx.cr6.eq) goto loc_8221EA30;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x8221e9fc
	if (ctx.cr6.lt) goto loc_8221E9FC;
	// b 0x8221ea34
	goto loc_8221EA34;
loc_8221EA30:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8221EA34:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8221eaa0
	if (!ctx.cr6.lt) goto loc_8221EAA0;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r6,-1
	ctx.r30.s64 = ctx.r6.s64 + -1;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221EA64;
	sub_8233E4E0(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,80
	ctx.r5.s64 = 80;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r30,r10,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221EA80;
	sub_8233E4E0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8233e4e0
	ctx.lr = 0x8221EA94;
	sub_8233E4E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8221EAA0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EAA8"))) PPC_WEAK_FUNC(sub_8221EAA8);
PPC_FUNC_IMPL(__imp__sub_8221EAA8) {
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
	ctx.lr = 0x8221EAD4;
	sub_82082030(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,5212
	ctx.r11.s64 = ctx.r11.s64 + 5212;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221eaf0
	if (ctx.cr6.eq) goto loc_8221EAF0;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8221eaf4
	goto loc_8221EAF4;
loc_8221EAF0:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8221EAF4:
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
	// beq cr6,0x8221eb34
	if (ctx.cr6.eq) goto loc_8221EB34;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8221EB2C:
	// stwu r3,608(r10)
	ea = 608 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8221eb2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221EB2C;
loc_8221EB34:
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

__attribute__((alias("__imp__sub_8221EB54"))) PPC_WEAK_FUNC(sub_8221EB54);
PPC_FUNC_IMPL(__imp__sub_8221EB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221EB58"))) PPC_WEAK_FUNC(sub_8221EB58);
PPC_FUNC_IMPL(__imp__sub_8221EB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8221EB60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,712
	ctx.r11.s64 = 46661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r11,22795
	ctx.r10.u64 = ctx.r11.u64 | 22795;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r4,92
	ctx.r3.s64 = ctx.r4.s64 * 92;
	// ble cr6,0x8221eb84
	if (!ctx.cr6.gt) goto loc_8221EB84;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8221EB84:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8221EB94;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221ec10
	if (ctx.cr6.eq) goto loc_8221EC10;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8221ec08
	if (ctx.cr0.lt) goto loc_8221EC08;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
loc_8221EBC0:
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// sth r10,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r10.u16);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// sth r10,98(r11)
	PPC_STORE_U16(ctx.r11.u32 + 98, ctx.r10.u16);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stwu r10,92(r11)
	ea = 92 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8221ebc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221EBC0;
loc_8221EC08:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8221ec14
	goto loc_8221EC14;
loc_8221EC10:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221EC14:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221ec24
	if (!ctx.cr6.lt) goto loc_8221EC24;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8221EC24:
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221ec40
	if (ctx.cr6.eq) goto loc_8221EC40;
	// mulli r5,r11,92
	ctx.r5.s64 = ctx.r11.s64 * 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221EC40;
	sub_8233E4E0(ctx, base);
loc_8221EC40:
	// lbz r11,17(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ec64
	if (ctx.cr6.eq) goto loc_8221EC64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ec64
	if (ctx.cr6.eq) goto loc_8221EC64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221EC64;
	sub_82080000(ctx, base);
loc_8221EC64:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stb r11,17(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EC78"))) PPC_WEAK_FUNC(sub_8221EC78);
PPC_FUNC_IMPL(__imp__sub_8221EC78) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82082030
	ctx.lr = 0x8221ECA4;
	sub_82082030(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// ble cr6,0x8221ecb8
	if (!ctx.cr6.gt) goto loc_8221ECB8;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8221ECB8:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221ecd8
	if (ctx.cr6.eq) goto loc_8221ECD8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221ECD8;
	sub_8233E4E0(ctx, base);
loc_8221ECD8:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ecfc
	if (ctx.cr6.eq) goto loc_8221ECFC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ecfc
	if (ctx.cr6.eq) goto loc_8221ECFC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221ECFC;
	sub_82080000(ctx, base);
loc_8221ECFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221ED20"))) PPC_WEAK_FUNC(sub_8221ED20);
PPC_FUNC_IMPL(__imp__sub_8221ED20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8221ED28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,819
	ctx.r11.s64 = 53673984;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,13107
	ctx.r10.u64 = ctx.r11.u64 | 13107;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8221ed54
	if (ctx.cr6.gt) goto loc_8221ED54;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x8221ed58
	goto loc_8221ED58;
loc_8221ED54:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8221ED58:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8221ED68;
	sub_82082030(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221ed7c
	if (!ctx.cr6.lt) goto loc_8221ED7C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8221ED7C:
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221eda0
	if (ctx.cr6.eq) goto loc_8221EDA0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8233e4e0
	ctx.lr = 0x8221EDA0;
	sub_8233E4E0(ctx, base);
loc_8221EDA0:
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221edc4
	if (ctx.cr6.eq) goto loc_8221EDC4;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221edc4
	if (ctx.cr6.eq) goto loc_8221EDC4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221EDC4;
	sub_82080000(ctx, base);
loc_8221EDC4:
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

__attribute__((alias("__imp__sub_8221EDD8"))) PPC_WEAK_FUNC(sub_8221EDD8);
PPC_FUNC_IMPL(__imp__sub_8221EDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8221EDE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,712
	ctx.r11.s64 = 46661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r11,22795
	ctx.r10.u64 = ctx.r11.u64 | 22795;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r4,92
	ctx.r3.s64 = ctx.r4.s64 * 92;
	// ble cr6,0x8221ee04
	if (!ctx.cr6.gt) goto loc_8221EE04;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8221EE04:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8221EE14;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221ee48
	if (ctx.cr6.eq) goto loc_8221EE48;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8221ee40
	if (ctx.cr0.lt) goto loc_8221EE40;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-84
	ctx.r11.s64 = ctx.r3.s64 + -84;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8221EE34:
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stwu r10,92(r11)
	ea = 92 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8221ee34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221EE34;
loc_8221EE40:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8221ee4c
	goto loc_8221EE4C;
loc_8221EE48:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221EE4C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221ee5c
	if (!ctx.cr6.lt) goto loc_8221EE5C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8221EE5C:
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221ee78
	if (ctx.cr6.eq) goto loc_8221EE78;
	// mulli r5,r11,92
	ctx.r5.s64 = ctx.r11.s64 * 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221EE78;
	sub_8233E4E0(ctx, base);
loc_8221EE78:
	// lbz r11,17(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ee9c
	if (ctx.cr6.eq) goto loc_8221EE9C;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ee9c
	if (ctx.cr6.eq) goto loc_8221EE9C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8221EE9C;
	sub_82080000(ctx, base);
loc_8221EE9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stb r11,17(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EEB0"))) PPC_WEAK_FUNC(sub_8221EEB0);
PPC_FUNC_IMPL(__imp__sub_8221EEB0) {
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
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,488(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// addi r31,r3,484
	ctx.r31.s64 = ctx.r3.s64 + 484;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221ef0c
	if (!ctx.cr6.eq) goto loc_8221EF0C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221eef8
	if (!ctx.cr6.eq) goto loc_8221EEF8;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4944
	ctx.r9.s64 = ctx.r10.s64 + 4944;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_8221EEF8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8221edd8
	ctx.lr = 0x8221EF0C;
	sub_8221EDD8(ctx, base);
loc_8221EF0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,92
	ctx.r5.s64 = 92;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221EF30;
	sub_8233E4E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EF48"))) PPC_WEAK_FUNC(sub_8221EF48);
PPC_FUNC_IMPL(__imp__sub_8221EF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8221EF50;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x82257540
	ctx.lr = 0x8221EF84;
	sub_82257540(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// fmuls f8,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// lfs f9,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r29.s64;
	// lfs f10,332(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	ctx.f10.f64 = double(temp.f32);
	// fmr f31,f9
	ctx.f31.f64 = ctx.f9.f64;
	// subf r7,r29,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r29.s64;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
loc_8221EFD0:
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// ble cr6,0x8221eff0
	if (!ctx.cr6.gt) goto loc_8221EFF0;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8221EFF0:
	// fcmpu cr6,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// ble cr6,0x8221f028
	if (!ctx.cr6.gt) goto loc_8221F028;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8221f00c
	if (!ctx.cr6.lt) goto loc_8221F00C;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x8221f018
	goto loc_8221F018;
loc_8221F00C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8221f018
	if (!ctx.cr6.gt) goto loc_8221F018;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8221F018:
	// fmadds f31,f12,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f31.f64));
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// fcmpu cr6,f31,f8
	ctx.cr6.compare(ctx.f31.f64, ctx.f8.f64);
	// bgt cr6,0x8221f09c
	if (ctx.cr6.gt) goto loc_8221F09C;
loc_8221F028:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8221efd0
	if (ctx.cr6.lt) goto loc_8221EFD0;
	// fcmpu cr6,f31,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f9.f64);
	// bne cr6,0x8221f0f0
	if (!ctx.cr6.eq) goto loc_8221F0F0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bge cr6,0x8221f0b0
	if (!ctx.cr6.lt) goto loc_8221F0B0;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x8221f0c8
	goto loc_8221F0C8;
loc_8221F09C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8221F0B0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
loc_8221F0C8:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfsx f13,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// stfs f11,0(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8221F0F0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82257540
	ctx.lr = 0x8221F118;
	sub_82257540(ctx, base);
	// fsqrts f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f31.f64)));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsubs f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f2,f13,f30
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// stfs f2,0(r26)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fsubs f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f0,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f3,f6
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F194"))) PPC_WEAK_FUNC(sub_8221F194);
PPC_FUNC_IMPL(__imp__sub_8221F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F198"))) PPC_WEAK_FUNC(sub_8221F198);
PPC_FUNC_IMPL(__imp__sub_8221F198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// fsubs f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f13,f6,f6,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f12,f6,f7,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f11,f2,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f10,f2,f3,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fdivs f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8221f208
	if (ctx.cr6.lt) goto loc_8221F208;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8221f208
	if (ctx.cr6.gt) goto loc_8221F208;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8221F208:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F26C"))) PPC_WEAK_FUNC(sub_8221F26C);
PPC_FUNC_IMPL(__imp__sub_8221F26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F270"))) PPC_WEAK_FUNC(sub_8221F270);
PPC_FUNC_IMPL(__imp__sub_8221F270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8221F278;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8221f198
	ctx.lr = 0x8221F2C4;
	sub_8221F198(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fadds f31,f31,f30
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f10,f31,f31
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f11,f12,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8221f33c
	if (!ctx.cr6.gt) goto loc_8221F33C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8221F33C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r11,31376
	ctx.r31.s64 = ctx.r11.s64 + 31376;
	// lfs f10,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8221f378
	if (!ctx.cr6.gt) goto loc_8221F378;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x8221f388
	goto loc_8221F388;
loc_8221F378:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c01b0
	ctx.lr = 0x8221F384;
	sub_820C01B0(ctx, base);
	// lfs f11,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
loc_8221F388:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f0,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F3BC"))) PPC_WEAK_FUNC(sub_8221F3BC);
PPC_FUNC_IMPL(__imp__sub_8221F3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F3C0"))) PPC_WEAK_FUNC(sub_8221F3C0);
PPC_FUNC_IMPL(__imp__sub_8221F3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f1,f2
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lfs f11,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f9,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// lfs f8,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f6,f10,f10
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f5,f13,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f11,f12,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fcmpu cr6,f11,f6
	ctx.cr6.compare(ctx.f11.f64, ctx.f6.f64);
	// ble cr6,0x8221f420
	if (!ctx.cr6.gt) goto loc_8221F420;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8221F420:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f9,328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// ble cr6,0x8221f45c
	if (!ctx.cr6.gt) goto loc_8221F45C;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f8,-16(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f7,-12(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f6,-8(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// b 0x8221f470
	goto loc_8221F470;
loc_8221F45C:
	// lfs f11,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f11,-8(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
loc_8221F470:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// fsubs f0,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F498"))) PPC_WEAK_FUNC(sub_8221F498);
PPC_FUNC_IMPL(__imp__sub_8221F498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,312(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8221f5f8
	if (ctx.cr6.lt) goto loc_8221F5F8;
	// addi r6,r7,-3
	ctx.r6.s64 = ctx.r7.s64 + -3;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8221F4BC:
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f13,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221f504
	if (!ctx.cr6.gt) goto loc_8221F504;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8221F504:
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// lfs f13,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221f550
	if (!ctx.cr6.gt) goto loc_8221F550;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8221F550:
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r10,r9,276
	ctx.r10.s64 = ctx.r9.s64 + 276;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-92
	ctx.r11.s64 = ctx.r11.s64 + -92;
	// lfs f13,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221f5a0
	if (!ctx.cr6.gt) goto loc_8221F5A0;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8221F5A0:
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221f5e8
	if (!ctx.cr6.gt) goto loc_8221F5E8;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8221F5E8:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,368
	ctx.r9.s64 = ctx.r9.s64 + 368;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8221f4bc
	if (ctx.cr6.lt) goto loc_8221F4BC;
loc_8221F5F8:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mulli r10,r8,92
	ctx.r10.s64 = ctx.r8.s64 * 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8221F60C:
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221f654
	if (!ctx.cr6.gt) goto loc_8221F654;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8221F654:
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// bdnz 0x8221f60c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221F60C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F660"))) PPC_WEAK_FUNC(sub_8221F660);
PPC_FUNC_IMPL(__imp__sub_8221F660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8221F668;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa00
	ctx.lr = 0x8221F670;
	__savefpr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,300(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8221fb18
	ctx.lr = 0x8221F684;
	sub_8221FB18(ctx, base);
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f8bc
	if (ctx.cr6.eq) goto loc_8221F8BC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,296(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,292(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,288(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	ctx.f19.f64 = double(temp.f32);
	// lfs f30,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	ctx.f29.f64 = double(temp.f32);
	// lfs f18,192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	ctx.f18.f64 = double(temp.f32);
	// lfs f27,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8221F6DC:
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8221f8b0
	if (ctx.cr6.eq) goto loc_8221F8B0;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f1,f11,f19
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f19.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221F70C;
	sub_8233C870(ctx, base);
	// lfs f10,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f1,f8,f20
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f20.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221F724;
	sub_8233C870(ctx, base);
	// lfs f7,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// frsp f17,f1
	ctx.f17.f64 = double(float(ctx.f1.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f1,f5,f21
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f21.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221F73C;
	sub_8233C870(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// lfs f3,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f4,f30
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fmuls f1,f1,f22
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f22.f64));
	// fmadds f11,f17,f29,f12
	ctx.f11.f64 = double(float(ctx.f17.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmadds f10,f31,f28,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f28.f64 + ctx.f11.f64));
	// fmadds f17,f10,f0,f13
	ctx.f17.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221F76C;
	sub_8233C870(ctx, base);
	// lfs f9,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lfs f8,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f1,f7,f23
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f23.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221F784;
	sub_8233C870(ctx, base);
	// lfs f6,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// frsp f16,f1
	ctx.f16.f64 = double(float(ctx.f1.f64));
	// lfs f5,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f1,f4,f18
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f18.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221F79C;
	sub_8233C870(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f3,f30
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmuls f1,f0,f24
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fmadds f10,f16,f29,f11
	ctx.f10.f64 = double(float(ctx.f16.f64 * ctx.f29.f64 + ctx.f11.f64));
	// fmadds f9,f31,f28,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f28.f64 + ctx.f10.f64));
	// fmadds f14,f9,f13,f12
	ctx.f14.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221F7CC;
	sub_8233C870(ctx, base);
	// lfs f8,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// frsp f16,f1
	ctx.f16.f64 = double(float(ctx.f1.f64));
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f1,f6,f25
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f25.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221F7E4;
	sub_8233C870(ctx, base);
	// lfs f5,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// frsp f15,f1
	ctx.f15.f64 = double(float(ctx.f1.f64));
	// lfs f4,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f1,f3,f26
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f26.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221F7FC;
	sub_8233C870(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f14
	ctx.f1.f64 = ctx.f14.f64;
	// fmuls f12,f2,f30
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// fmadds f11,f15,f29,f12
	ctx.f11.f64 = double(float(ctx.f15.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmadds f10,f16,f28,f11
	ctx.f10.f64 = double(float(ctx.f16.f64 * ctx.f28.f64 + ctx.f11.f64));
	// fmadds f31,f10,f0,f13
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221F820;
	sub_8233C870(ctx, base);
	// frsp f15,f1
	ctx.fpscr.disableFlushMode();
	ctx.f15.f64 = double(float(ctx.f1.f64));
	// fmr f16,f31
	ctx.f16.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8233c950
	ctx.lr = 0x8221F830;
	sub_8233C950(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fmuls f8,f9,f15
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f15.f64));
	// fmr f1,f14
	ctx.f1.f64 = ctx.f14.f64;
	// fmuls f7,f8,f17
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f17.f64));
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x8233c870
	ctx.lr = 0x8221F848;
	sub_8233C870(ctx, base);
	// frsp f15,f1
	ctx.fpscr.disableFlushMode();
	ctx.f15.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8233c870
	ctx.lr = 0x8221F854;
	sub_8233C870(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fmr f1,f14
	ctx.f1.f64 = ctx.f14.f64;
	// fmuls f5,f6,f15
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f15.f64));
	// fmuls f4,f5,f17
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f17.f64));
	// stfs f4,44(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x8233c950
	ctx.lr = 0x8221F86C;
	sub_8233C950(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f17,48(r31)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// fmuls f2,f3,f17
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f17.f64));
	// stfs f2,40(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// ble cr6,0x8221f890
	if (!ctx.cr6.gt) goto loc_8221F890;
loc_8221F884:
	// fsubs f31,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bgt cr6,0x8221f884
	if (ctx.cr6.gt) goto loc_8221F884;
loc_8221F890:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8221f8a8
	if (!ctx.cr6.lt) goto loc_8221F8A8;
loc_8221F89C:
	// fadds f31,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f27.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8221f89c
	if (ctx.cr6.lt) goto loc_8221F89C;
loc_8221F8A8:
	// stfs f31,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f31,300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f31.f64 = double(temp.f32);
loc_8221F8B0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// bne 0x8221f6dc
	if (!ctx.cr0.eq) goto loc_8221F6DC;
loc_8221F8BC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa4c
	ctx.lr = 0x8221F8C8;
	__restfpr_14(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F8CC"))) PPC_WEAK_FUNC(sub_8221F8CC);
PPC_FUNC_IMPL(__imp__sub_8221F8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F8D0"))) PPC_WEAK_FUNC(sub_8221F8D0);
PPC_FUNC_IMPL(__imp__sub_8221F8D0) {
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
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,31376
	ctx.r6.s64 = ctx.r8.s64 + 31376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lfs f0,48(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,104(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// lfs f12,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,420(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 420);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,424(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 424);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r11,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r11.u64);
	// std r11,24(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24, ctx.r11.u64);
	// stw r11,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r11.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r11,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r11.u8);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// ld r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// bl 0x820d6720
	ctx.lr = 0x8221F998;
	sub_820D6720(ctx, base);
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8221f9dc
	if (!ctx.cr6.eq) goto loc_8221F9DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221f9c8
	if (!ctx.cr6.eq) goto loc_8221F9C8;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4944
	ctx.r9.s64 = ctx.r10.s64 + 4944;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_8221F9C8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821dbb00
	ctx.lr = 0x8221F9DC;
	sub_821DBB00(ctx, base);
loc_8221F9DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,84
	ctx.r5.s64 = 84;
	// mulli r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 * 84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x8221FA00;
	sub_8233E4E0(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
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

__attribute__((alias("__imp__sub_8221FA18"))) PPC_WEAK_FUNC(sub_8221FA18);
PPC_FUNC_IMPL(__imp__sub_8221FA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8221FA20;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8221fb10
	if (ctx.cr6.eq) goto loc_8221FB10;
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221FA3C:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,80(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8221fa64
	if (ctx.cr6.eq) goto loc_8221FA64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8221fa3c
	if (ctx.cr6.lt) goto loc_8221FA3C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8221FA64:
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r3,84
	ctx.r31.s64 = ctx.r3.s64 + 84;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8221fab4
	if (ctx.cr6.eq) goto loc_8221FAB4;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8221FA88:
	// lwz r9,80(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8221fab0
	if (ctx.cr6.eq) goto loc_8221FAB0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x8221fa88
	if (ctx.cr6.lt) goto loc_8221FA88;
	// b 0x8221fab4
	goto loc_8221FAB4;
loc_8221FAB0:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8221FAB4:
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8221fb10
	if (!ctx.cr6.lt) goto loc_8221FB10;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r5,84
	ctx.r11.s64 = ctx.r5.s64 * 84;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// addi r29,r7,-1
	ctx.r29.s64 = ctx.r7.s64 + -1;
	// bl 0x8233e4e0
	ctx.lr = 0x8221FADC;
	sub_8233E4E0(ctx, base);
	// mulli r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 * 84;
	// add r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 + ctx.r28.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8221FAF0;
	sub_8233E4E0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x8233e4e0
	ctx.lr = 0x8221FB04;
	sub_8233E4E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8221FB10:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FB18"))) PPC_WEAK_FUNC(sub_8221FB18);
PPC_FUNC_IMPL(__imp__sub_8221FB18) {
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
	// bl 0x8233fa2c
	ctx.lr = 0x8221FB30;
	__savefpr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8221fd3c
	if (ctx.cr6.eq) goto loc_8221FD3C;
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// lfs f0,288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221FB6C;
	sub_8233C870(ctx, base);
	// lfs f10,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// frsp f28,f1
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f0,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221FB88;
	sub_8233C870(ctx, base);
	// lfs f7,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// frsp f27,f1
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// lfs f0,296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221FBA4;
	sub_8233C870(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// lfs f31,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f30.f64 = double(temp.f32);
	// lfs f3,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f29,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,300(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f4,f31
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f10,f27,f30,f11
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f30.f64 + ctx.f11.f64));
	// fmadds f9,f28,f29,f10
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 + ctx.f10.f64));
	// fmadds f27,f9,f13,f12
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221FBE4;
	sub_8233C870(ctx, base);
	// lfs f8,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// frsp f28,f1
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// lfs f7,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f0,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221FC00;
	sub_8233C870(ctx, base);
	// lfs f5,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// frsp f26,f1
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// lfs f4,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// lfs f0,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221FC1C;
	sub_8233C870(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,308(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f2,f31
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f9,f26,f30,f10
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fmadds f8,f28,f29,f9
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 + ctx.f9.f64));
	// fmadds f28,f8,f12,f11
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f11.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221FC50;
	sub_8233C870(ctx, base);
	// lfs f7,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// frsp f26,f1
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// lfs f6,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// lfs f0,312(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221FC6C;
	sub_8233C870(ctx, base);
	// lfs f4,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// frsp f25,f1
	ctx.f25.f64 = double(float(ctx.f1.f64));
	// lfs f3,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// lfs f0,316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221FC88;
	sub_8233C870(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// fmadds f11,f25,f30,f12
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmadds f10,f26,f29,f11
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 + ctx.f11.f64));
	// fmadds f31,f10,f0,f13
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x8233c870
	ctx.lr = 0x8221FCAC;
	sub_8233C870(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8233c950
	ctx.lr = 0x8221FCBC;
	sub_8233C950(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// fmuls f8,f9,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmuls f7,f8,f27
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x8233c870
	ctx.lr = 0x8221FCD4;
	sub_8233C870(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8233c870
	ctx.lr = 0x8221FCE0;
	sub_8233C870(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// fmuls f5,f6,f29
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// fmuls f4,f5,f27
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// stfs f4,44(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x8233c950
	ctx.lr = 0x8221FCF8;
	sub_8233C950(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lfs f0,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f27,48(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// fmuls f2,f3,f27
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f27.f64));
	// stfs f2,40(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// ble cr6,0x8221fd20
	if (!ctx.cr6.gt) goto loc_8221FD20;
loc_8221FD14:
	// fsubs f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8221fd14
	if (ctx.cr6.gt) goto loc_8221FD14;
loc_8221FD20:
	// lfs f13,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x8221fd38
	if (!ctx.cr6.lt) goto loc_8221FD38;
loc_8221FD2C:
	// fadds f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x8221fd2c
	if (ctx.cr6.lt) goto loc_8221FD2C;
loc_8221FD38:
	// stfs f31,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_8221FD3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8233fa78
	ctx.lr = 0x8221FD48;
	__restfpr_25(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FD5C"))) PPC_WEAK_FUNC(sub_8221FD5C);
PPC_FUNC_IMPL(__imp__sub_8221FD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FD60"))) PPC_WEAK_FUNC(sub_8221FD60);
PPC_FUNC_IMPL(__imp__sub_8221FD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8221FD68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,-17344
	ctx.r9.s64 = ctx.r10.s64 + -17344;
	// addi r31,r11,4536
	ctx.r31.s64 = ctx.r11.s64 + 4536;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r28,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r28.u32);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stb r28,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r28.u8);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821dbdd8
	ctx.lr = 0x8221FDA8;
	sub_821DBDD8(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r8,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82082030
	ctx.lr = 0x8221FDC4;
	sub_82082030(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// beq cr6,0x8221fe0c
	if (ctx.cr6.eq) goto loc_8221FE0C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x8221fddc
	goto loc_8221FDDC;
loc_8221FDD8:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
loc_8221FDDC:
	// add. r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221fdf0
	if (ctx.cr0.eq) goto loc_8221FDF0;
	// bl 0x821d4c98
	ctx.lr = 0x8221FDE8;
	sub_821D4C98(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8221fdf4
	goto loc_8221FDF4;
loc_8221FDF0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_8221FDF4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x821d23a0
	ctx.lr = 0x8221FE00;
	sub_821D23A0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bne 0x8221fdd8
	if (!ctx.cr0.eq) goto loc_8221FDD8;
loc_8221FE0C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r28.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r28.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r28,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FE2C"))) PPC_WEAK_FUNC(sub_8221FE2C);
PPC_FUNC_IMPL(__imp__sub_8221FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FE30"))) PPC_WEAK_FUNC(sub_8221FE30);
PPC_FUNC_IMPL(__imp__sub_8221FE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x8221FE38;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r22,r11,4536
	ctx.r22.s64 = ctx.r11.s64 + 4536;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// addi r8,r9,22200
	ctx.r8.s64 = ctx.r9.s64 + 22200;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// lwz r16,0(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r3,-27096(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27096);
	// lwz r15,336(r22)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r22.u32 + 336);
	// lfs f30,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// lwz r20,1804(r22)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1804);
	// lwz r19,1808(r22)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1808);
	// lwz r29,4(r16)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// bl 0x82388734
	ctx.lr = 0x8221FE80;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221fe8c
	if (!ctx.cr6.eq) goto loc_8221FE8C;
	// bl 0x821b3000
	ctx.lr = 0x8221FE8C;
	sub_821B3000(ctx, base);
loc_8221FE8C:
	// mulli r11,r29,164
	ctx.r11.s64 = ctx.r29.s64 * 164;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r14,r9,0,0,27
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r8,r11,4492
	ctx.r8.s64 = ctx.r11.s64 + 4492;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r27,r3,20
	ctx.r27.s64 = ctx.r3.s64 + 20;
	// add r7,r11,r14
	ctx.r7.u64 = ctx.r11.u64 + ctx.r14.u64;
	// lis r18,-13569
	ctx.r18.s64 = -889257984;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8221fec0
	if (!ctx.cr6.gt) goto loc_8221FEC0;
	// stw r8,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r8.u32);
loc_8221FEC0:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r11,r10,r14
	ctx.r11.u64 = ctx.r10.u64 + ctx.r14.u64;
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// add r21,r10,r9
	ctx.r21.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r31,15
	ctx.r5.s64 = ctx.r31.s64 + 15;
	// rlwinm r17,r5,0,0,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// add r4,r17,r11
	ctx.r4.u64 = ctx.r17.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8221fefc
	if (!ctx.cr6.gt) goto loc_8221FEFC;
	// stw r8,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r8.u32);
loc_8221FEFC:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r11,r17,r10
	ctx.r11.u64 = ctx.r17.u64 + ctx.r10.u64;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r24,r10,r9
	ctx.r24.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r17,r11
	ctx.r6.u64 = ctx.r17.u64 + ctx.r11.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8221ff24
	if (!ctx.cr6.gt) goto loc_8221FF24;
	// stw r8,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r8.u32);
loc_8221FF24:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,255
	ctx.r4.s64 = 255;
	// add r9,r17,r11
	ctx.r9.u64 = ctx.r17.u64 + ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8221FF48;
	sub_8233EAF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x8221FF58;
	sub_8233EAF0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r23,r11,-22992
	ctx.r23.s64 = ctx.r11.s64 + -22992;
	// beq cr6,0x8221ff9c
	if (ctx.cr6.eq) goto loc_8221FF9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,140(r21)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r21.u32 + 140, temp.u32);
	// stfs f30,144(r21)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r21.u32 + 144, temp.u32);
	// stw r25,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r25.u32);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// stw r23,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r23.u32);
	// stw r11,136(r21)
	PPC_STORE_U32(ctx.r21.u32 + 136, ctx.r11.u32);
	// stw r24,156(r21)
	PPC_STORE_U32(ctx.r21.u32 + 156, ctx.r24.u32);
	// stw r26,160(r21)
	PPC_STORE_U32(ctx.r21.u32 + 160, ctx.r26.u32);
	// stw r20,148(r21)
	PPC_STORE_U32(ctx.r21.u32 + 148, ctx.r20.u32);
	// stw r19,152(r21)
	PPC_STORE_U32(ctx.r21.u32 + 152, ctx.r19.u32);
	// b 0x8221ffa0
	goto loc_8221FFA0;
loc_8221FF9C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221FFA0:
	// addi r31,r21,164
	ctx.r31.s64 = ctx.r21.s64 + 164;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822200bc
	if (ctx.cr6.eq) goto loc_822200BC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r22,r11,-22984
	ctx.r22.s64 = ctx.r11.s64 + -22984;
loc_8221FFBC:
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwzx r11,r11,r18
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8222005c
	if (!ctx.cr6.eq) goto loc_8222005C;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r11,r11,-776
	ctx.r11.s64 = ctx.r11.s64 + -776;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r8,r11,18
	ctx.r8.s64 = ctx.r11.s64 + 18;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r28.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822200a4
	if (ctx.cr6.lt) goto loc_822200A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b60c0
	ctx.lr = 0x82220014;
	sub_821B60C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82220050
	if (ctx.cr6.eq) goto loc_82220050;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f30,144(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r24,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r24.u32);
	// stw r26,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r26.u32);
	// stw r20,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r20.u32);
	// stw r19,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r19.u32);
	// addi r31,r31,164
	ctx.r31.s64 = ctx.r31.s64 + 164;
	// b 0x822200a4
	goto loc_822200A4;
loc_82220050:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r31,164
	ctx.r31.s64 = ctx.r31.s64 + 164;
	// b 0x822200a4
	goto loc_822200A4;
loc_8222005C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82220094
	if (ctx.cr6.eq) goto loc_82220094;
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,16(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r20,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r20.u32);
	// stw r19,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r19.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// b 0x82220098
	goto loc_82220098;
loc_82220094:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82220098:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bl 0x821b60c0
	ctx.lr = 0x822200A4;
	sub_821B60C0(ctx, base);
loc_822200A4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8221ffbc
	if (ctx.cr6.lt) goto loc_8221FFBC;
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r18,-13569
	ctx.r18.s64 = -889257984;
loc_822200BC:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822200d4
	if (ctx.cr6.eq) goto loc_822200D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b60c0
	ctx.lr = 0x822200D4;
	sub_821B60C0(ctx, base);
loc_822200D4:
	// bl 0x821b5da8
	ctx.lr = 0x822200D8;
	sub_821B5DA8(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// beq cr6,0x82220130
	if (ctx.cr6.eq) goto loc_82220130;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// subf r28,r24,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r24.s64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_822200F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82220120
	if (ctx.cr6.eq) goto loc_82220120;
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// add r6,r28,r31
	ctx.r6.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x821e23c0
	ctx.lr = 0x82220120;
	sub_821E23C0(ctx, base);
loc_82220120:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x822200f8
	if (!ctx.cr0.eq) goto loc_822200F8;
loc_82220130:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// beq cr6,0x82220178
	if (ctx.cr6.eq) goto loc_82220178;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82220150
	if (!ctx.cr6.gt) goto loc_82220150;
	// stw r9,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r9.u32);
loc_82220150:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r11,r17,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r17.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8222016c
	if (ctx.cr6.eq) goto loc_8222016C;
	// stw r9,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r9.u32);
loc_8222016C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r10,r17,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r17.s64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_82220178:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822201b8
	if (ctx.cr6.eq) goto loc_822201B8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82220190
	if (!ctx.cr6.gt) goto loc_82220190;
	// stw r9,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r9.u32);
loc_82220190:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r11,r17,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r17.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x822201ac
	if (ctx.cr6.eq) goto loc_822201AC;
	// stw r9,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r9.u32);
loc_822201AC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r10,r17,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r17.s64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_822201B8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822201f8
	if (ctx.cr6.eq) goto loc_822201F8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822201d0
	if (!ctx.cr6.gt) goto loc_822201D0;
	// stw r9,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r9.u32);
loc_822201D0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r11,r14,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r14.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x822201ec
	if (ctx.cr6.eq) goto loc_822201EC;
	// stw r9,-13570(r18)
	PPC_STORE_U32(ctx.r18.u32 + -13570, ctx.r9.u32);
loc_822201EC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r10,r14,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r14.s64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_822201F8:
	// lwz r11,1804(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1804);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82220308
	if (!ctx.cr6.eq) goto loc_82220308;
	// lwz r28,4(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220308
	if (ctx.cr6.eq) goto loc_82220308;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_82220224:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r31,r30,484
	ctx.r31.s64 = ctx.r30.s64 + 484;
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220278
	if (ctx.cr6.eq) goto loc_82220278;
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
	// bgt cr6,0x82220270
	if (ctx.cr6.gt) goto loc_82220270;
	// bge cr6,0x82220278
	if (!ctx.cr6.lt) goto loc_82220278;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220278
	if (ctx.cr6.eq) goto loc_82220278;
loc_82220270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221edd8
	ctx.lr = 0x82220278;
	sub_8221EDD8(ctx, base);
loc_82220278:
	// clrlwi r11,r25,16
	ctx.r11.u64 = ctx.r25.u32 & 0xFFFF;
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// lwz r10,304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r3,r30,156
	ctx.r3.s64 = ctx.r30.s64 + 156;
	// sth r11,284(r30)
	PPC_STORE_U16(ctx.r30.u32 + 284, ctx.r11.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8222029c
	if (!ctx.cr6.eq) goto loc_8222029C;
	// sth r11,-612(r3)
	PPC_STORE_U16(ctx.r3.u32 + -612, ctx.r11.u16);
	// b 0x822202cc
	goto loc_822202CC;
loc_8222029C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822202cc
	if (!ctx.cr6.eq) goto loc_822202CC;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822202cc
	if (ctx.cr6.eq) goto loc_822202CC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822202BC:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lhz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 128);
	// sth r9,164(r10)
	PPC_STORE_U16(ctx.r10.u32 + 164, ctx.r9.u16);
	// bdnz 0x822202bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822202BC;
loc_822202CC:
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822202E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822202fc
	if (ctx.cr6.eq) goto loc_822202FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221bab0
	ctx.lr = 0x822202FC;
	sub_8221BAB0(ctx, base);
loc_822202FC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82220224
	if (!ctx.cr0.eq) goto loc_82220224;
loc_82220308:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

