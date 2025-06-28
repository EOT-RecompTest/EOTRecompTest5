#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821D6DD4"))) PPC_WEAK_FUNC(sub_821D6DD4);
PPC_FUNC_IMPL(__imp__sub_821D6DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D6DD8"))) PPC_WEAK_FUNC(sub_821D6DD8);
PPC_FUNC_IMPL(__imp__sub_821D6DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821D6DE0;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa1c
	ctx.lr = 0x821D6DE8;
	__savefpr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
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
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x821d7780
	ctx.lr = 0x821D6E18;
	sub_821D7780(ctx, base);
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x821D6E28;
	sub_8233EAF0(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r10,31376
	ctx.r7.s64 = ctx.r10.s64 + 31376;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f30,72(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// sth r29,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r29.u16);
	// lfs f0,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// sth r28,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r28.u16);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// lfs f13,64(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f4,f9,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmsubs f2,f8,f10,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f5.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// fmsubs f1,f11,f7,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 - ctx.f4.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmsubs f3,f9,f12,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f10,f13,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f2.f64));
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f5,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f7,f12,f7,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f10.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmadds f9,f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f8,f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// fmadds f5,f5,f4,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f8.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmadds f6,f6,f4,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f9.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// lfs f3,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lfs f4,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r9,348(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lfs f1,388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f4,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fmuls f11,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f6,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fneg f4,f9
	ctx.f4.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fneg f2,f10
	ctx.f2.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f1,f8,f5
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f13,f3,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f12,f7,f2
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmsubs f11,f3,f2,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 - ctx.f1.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f10,f7,f5,f13
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 - ctx.f13.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f9,f8,f4,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 - ctx.f12.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f13,f7,f8
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f3,f7,f9,f2
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f2.f64));
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f2,f1,f4,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmuls f13,f12,f4
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmadds f1,f6,f8,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f3.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f12,f5,f9,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f2.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f11,f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f10,f10,f8,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f11.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// lfs f9,388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 388);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f6,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// stfs f5,52(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fmuls f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// stfs f7,48(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f3,56(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f2,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f4,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fneg f30,f12
	ctx.f30.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f12,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fneg f31,f13
	ctx.f31.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f3,f2,f1
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// lfs f29,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f27,f12,f11
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f24,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f28,f8,f10
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f23,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f22,f29,f31
	ctx.f22.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// lfs f26,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f26.f64 = double(temp.f32);
	// fmsubs f6,f29,f30,f6
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f30.f64 - ctx.f6.f64));
	// lfs f25,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f25.f64 = double(temp.f32);
	// fmsubs f10,f12,f10,f3
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f3.f64));
	// lfs f13,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f7,f30
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// lfs f12,804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 804);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f21,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// lfs f29,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmsubs f1,f8,f1,f27
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 - ctx.f27.f64));
	// fmsubs f11,f2,f11,f28
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 - ctx.f28.f64));
	// fmsubs f8,f7,f5,f22
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 - ctx.f22.f64));
	// fmuls f7,f9,f6
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmsubs f6,f4,f31,f30
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fmadds f4,f24,f8,f7
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f5,f24,f1,f10
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f1,f23,f6,f4
	ctx.f1.f64 = double(float(ctx.f23.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmadds f2,f23,f11,f5
	ctx.f2.f64 = double(float(ctx.f23.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fadds f10,f1,f25
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f25.f64));
	// fadds f11,f2,f26
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f26.f64));
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fdivs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// stfs f8,84(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f10,464(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 464);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 476);
	ctx.f7.f64 = double(temp.f32);
	// lfs f31,468(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 468);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 480);
	ctx.f28.f64 = double(temp.f32);
	// lfs f24,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f24.f64 = double(temp.f32);
	// lfs f5,464(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 464);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fneg f1,f6
	ctx.f1.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,468(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lfs f5,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f2,f13,f11,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f2.f64));
	// lfs f4,460(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	ctx.f4.f64 = double(temp.f32);
	// fneg f6,f11
	ctx.f6.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f30,460(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 460);
	ctx.f30.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fneg f9,f5
	ctx.f9.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f27,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,472(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 472);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f11,f10,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f10,480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 480);
	ctx.f10.f64 = double(temp.f32);
	// lfs f1,476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 476);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f12,112(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// fmadds f12,f31,f6,f11
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// fmadds f0,f4,f5,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f11,f9,f30,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmadds f9,f7,f3,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f7,f28,f13,f11
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f6,f10,f21,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f21.f64 + ctx.f9.f64));
	// fmadds f5,f1,f27,f7
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f27.f64 + ctx.f7.f64));
	// fmadds f4,f29,f26,f6
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f26.f64 + ctx.f6.f64));
	// fmadds f3,f25,f24,f5
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f24.f64 + ctx.f5.f64));
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fmuls f0,f1,f8
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa68
	ctx.lr = 0x821D7200;
	__restfpr_21(ctx, base);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D7204"))) PPC_WEAK_FUNC(sub_821D7204);
PPC_FUNC_IMPL(__imp__sub_821D7204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7208"))) PPC_WEAK_FUNC(sub_821D7208);
PPC_FUNC_IMPL(__imp__sub_821D7208) {
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
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821d727c
	if (!ctx.cr6.lt) goto loc_821D727C;
	// lwz r10,156(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821d7274
	if (ctx.cr6.eq) goto loc_821D7274;
	// lwz r10,304(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 304);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d7274
	if (!ctx.cr6.eq) goto loc_821D7274;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x821d7950
	ctx.lr = 0x821D7260;
	sub_821D7950(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821d7298
	ctx.lr = 0x821D7268;
	sub_821D7298(ctx, base);
	// extsh r9,r30
	ctx.r9.s64 = ctx.r30.s16;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// b 0x821d7278
	goto loc_821D7278;
loc_821D7274:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D7278:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821D727C:
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

__attribute__((alias("__imp__sub_821D7294"))) PPC_WEAK_FUNC(sub_821D7294);
PPC_FUNC_IMPL(__imp__sub_821D7294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7298"))) PPC_WEAK_FUNC(sub_821D7298);
PPC_FUNC_IMPL(__imp__sub_821D7298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// beq cr6,0x821d7320
	if (ctx.cr6.eq) goto loc_821D7320;
	// lwz r10,304(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 304);
	// rlwinm r9,r10,0,4,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC00000;
	// rlwinm r9,r9,0,9,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF87FFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d7320
	if (!ctx.cr6.eq) goto loc_821D7320;
	// lfs f0,644(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f13,388(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f0,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,60(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
loc_821D7320:
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D733C"))) PPC_WEAK_FUNC(sub_821D733C);
PPC_FUNC_IMPL(__imp__sub_821D733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7340"))) PPC_WEAK_FUNC(sub_821D7340);
PPC_FUNC_IMPL(__imp__sub_821D7340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821d7488
	if (!ctx.cr6.eq) goto loc_821D7488;
	// addi r11,r11,460
	ctx.r11.s64 = ctx.r11.s64 + 460;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f11,f12,f12,f6
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x821d73d8
	if (!ctx.cr6.gt) goto loc_821D73D8;
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
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
loc_821D73D8:
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lfs f10,800(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 800);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f9,452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 452);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,-8(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f4,f12,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fsqrts f11,f4
	ctx.f11.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmuls f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fcmpu cr6,f3,f9
	ctx.cr6.compare(ctx.f3.f64, ctx.f9.f64);
	// ble cr6,0x821d746c
	if (!ctx.cr6.gt) goto loc_821D746C;
	// lfs f10,868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 868);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,-16(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f9,-12(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f8,-8(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
loc_821D746C:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// blr 
	return;
loc_821D7488:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,460
	ctx.r11.s64 = ctx.r11.s64 + 460;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f9,-16(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f8,-8(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,-12(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lfs f4,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lfs f2,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f13,f4,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fadds f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f11,-12(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f5,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r7,-8(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D7528"))) PPC_WEAK_FUNC(sub_821D7528);
PPC_FUNC_IMPL(__imp__sub_821D7528) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821d7768
	if (!ctx.cr6.gt) goto loc_821D7768;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821d7684
	if (!ctx.cr6.eq) goto loc_821D7684;
	// addi r11,r11,460
	ctx.r11.s64 = ctx.r11.s64 + 460;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f11,f12,f12,f6
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x821d75d4
	if (!ctx.cr6.gt) goto loc_821D75D4;
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821D75D4:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f10,800(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 800);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f9,452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 452);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f4,f12,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fsqrts f11,f4
	ctx.f11.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmuls f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fcmpu cr6,f3,f9
	ctx.cr6.compare(ctx.f3.f64, ctx.f9.f64);
	// ble cr6,0x821d7668
	if (!ctx.cr6.gt) goto loc_821D7668;
	// lfs f10,868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 868);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821D7668:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// b 0x821d7720
	goto loc_821D7720;
loc_821D7684:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,460
	ctx.r11.s64 = ctx.r11.s64 + 460;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lfs f4,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f12,f4,f3
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fadds f10,f2,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_821D7720:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// bl 0x822172e8
	ctx.lr = 0x821D7738;
	sub_822172E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7768
	if (ctx.cr6.eq) goto loc_821D7768;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x8233e4e0
	ctx.lr = 0x821D7758;
	sub_8233E4E0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
loc_821D7768:
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

__attribute__((alias("__imp__sub_821D777C"))) PPC_WEAK_FUNC(sub_821D777C);
PPC_FUNC_IMPL(__imp__sub_821D777C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7780"))) PPC_WEAK_FUNC(sub_821D7780);
PPC_FUNC_IMPL(__imp__sub_821D7780) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d77d4
	if (!ctx.cr6.eq) goto loc_821D77D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d77c0
	if (!ctx.cr6.eq) goto loc_821D77C0;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,-31300
	ctx.r9.s64 = ctx.r10.s64 + -31300;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_821D77C0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821d79d0
	ctx.lr = 0x821D77D4;
	sub_821D79D0(ctx, base);
loc_821D77D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 * 116;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_821D7800"))) PPC_WEAK_FUNC(sub_821D7800);
PPC_FUNC_IMPL(__imp__sub_821D7800) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d787c
	if (ctx.cr6.eq) goto loc_821D787C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821d783c
	if (ctx.cr6.gt) goto loc_821D783C;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_821D783C:
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
	// bgt cr6,0x821d7874
	if (ctx.cr6.gt) goto loc_821D7874;
	// bge cr6,0x821d787c
	if (!ctx.cr6.lt) goto loc_821D787C;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d787c
	if (ctx.cr6.eq) goto loc_821D787C;
loc_821D7874:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d79d0
	ctx.lr = 0x821D787C;
	sub_821D79D0(ctx, base);
loc_821D787C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821d788c
	if (ctx.cr6.gt) goto loc_821D788C;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_821D788C:
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

__attribute__((alias("__imp__sub_821D78A4"))) PPC_WEAK_FUNC(sub_821D78A4);
PPC_FUNC_IMPL(__imp__sub_821D78A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D78A8"))) PPC_WEAK_FUNC(sub_821D78A8);
PPC_FUNC_IMPL(__imp__sub_821D78A8) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7924
	if (ctx.cr6.eq) goto loc_821D7924;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821d78e4
	if (ctx.cr6.gt) goto loc_821D78E4;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_821D78E4:
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
	// bgt cr6,0x821d791c
	if (ctx.cr6.gt) goto loc_821D791C;
	// bge cr6,0x821d7924
	if (!ctx.cr6.lt) goto loc_821D7924;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7924
	if (ctx.cr6.eq) goto loc_821D7924;
loc_821D791C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dbdd8
	ctx.lr = 0x821D7924;
	sub_821DBDD8(ctx, base);
loc_821D7924:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821d7934
	if (ctx.cr6.gt) goto loc_821D7934;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_821D7934:
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

__attribute__((alias("__imp__sub_821D794C"))) PPC_WEAK_FUNC(sub_821D794C);
PPC_FUNC_IMPL(__imp__sub_821D794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7950"))) PPC_WEAK_FUNC(sub_821D7950);
PPC_FUNC_IMPL(__imp__sub_821D7950) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d79a4
	if (!ctx.cr6.eq) goto loc_821D79A4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7990
	if (!ctx.cr6.eq) goto loc_821D7990;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,-31300
	ctx.r9.s64 = ctx.r10.s64 + -31300;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_821D7990:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821d7a78
	ctx.lr = 0x821D79A4;
	sub_821D7A78(ctx, base);
loc_821D79A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_821D79D0"))) PPC_WEAK_FUNC(sub_821D79D0);
PPC_FUNC_IMPL(__imp__sub_821D79D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821D79D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,564
	ctx.r11.s64 = 36962304;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,63276
	ctx.r10.u64 = ctx.r11.u64 | 63276;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r4,116
	ctx.r3.s64 = ctx.r4.s64 * 116;
	// ble cr6,0x821d79fc
	if (!ctx.cr6.gt) goto loc_821D79FC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821D79FC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821D7A0C;
	sub_82082030(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821d7a20
	if (!ctx.cr6.lt) goto loc_821D7A20;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821D7A20:
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d7a3c
	if (ctx.cr6.eq) goto loc_821D7A3C;
	// mulli r5,r11,116
	ctx.r5.s64 = ctx.r11.s64 * 116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821D7A3C;
	sub_8233E4E0(ctx, base);
loc_821D7A3C:
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7a60
	if (ctx.cr6.eq) goto loc_821D7A60;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7a60
	if (ctx.cr6.eq) goto loc_821D7A60;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821D7A60;
	sub_82080000(ctx, base);
loc_821D7A60:
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

__attribute__((alias("__imp__sub_821D7A74"))) PPC_WEAK_FUNC(sub_821D7A74);
PPC_FUNC_IMPL(__imp__sub_821D7A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7A78"))) PPC_WEAK_FUNC(sub_821D7A78);
PPC_FUNC_IMPL(__imp__sub_821D7A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821D7A80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1023
	ctx.r11.s64 = 67043328;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r4,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// ble cr6,0x821d7aa4
	if (!ctx.cr6.gt) goto loc_821D7AA4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821D7AA4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821D7AB4;
	sub_82082030(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821d7ac8
	if (!ctx.cr6.lt) goto loc_821D7AC8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821D7AC8:
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d7ae4
	if (ctx.cr6.eq) goto loc_821D7AE4;
	// rlwinm r5,r11,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821D7AE4;
	sub_8233E4E0(ctx, base);
loc_821D7AE4:
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7b08
	if (ctx.cr6.eq) goto loc_821D7B08;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7b08
	if (ctx.cr6.eq) goto loc_821D7B08;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821D7B08;
	sub_82080000(ctx, base);
loc_821D7B08:
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

__attribute__((alias("__imp__sub_821D7B1C"))) PPC_WEAK_FUNC(sub_821D7B1C);
PPC_FUNC_IMPL(__imp__sub_821D7B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7B20"))) PPC_WEAK_FUNC(sub_821D7B20);
PPC_FUNC_IMPL(__imp__sub_821D7B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821D7B28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821d7c08
	ctx.lr = 0x821D7B34;
	sub_821D7C08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d7ee0
	ctx.lr = 0x821D7B3C;
	sub_821D7EE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8120
	ctx.lr = 0x821D7B44;
	sub_821D8120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d81f8
	ctx.lr = 0x821D7B4C;
	sub_821D81F8(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// beq cr6,0x821d7ba0
	if (ctx.cr6.eq) goto loc_821D7BA0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_821D7B64:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x821d9118
	ctx.lr = 0x821D7B7C;
	sub_821D9118(ctx, base);
	// sth r3,2(r27)
	PPC_STORE_U16(ctx.r27.u32 + 2, ctx.r3.u16);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// sthx r30,r11,r28
	PPC_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r30.u16);
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821d7b64
	if (ctx.cr6.lt) goto loc_821D7B64;
loc_821D7BA0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r26.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x821d7bc8
	if (!ctx.cr6.gt) goto loc_821D7BC8;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821d8ff0
	ctx.lr = 0x821D7BC8;
	sub_821D8FF0(ctx, base);
loc_821D7BC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8450
	ctx.lr = 0x821D7BD0;
	sub_821D8450(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,4536
	ctx.r11.s64 = ctx.r11.s64 + 4536;
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r26.u8);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x821d7c00
	if (!ctx.cr6.gt) goto loc_821D7C00;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821d8ce8
	ctx.lr = 0x821D7C00;
	sub_821D8CE8(ctx, base);
loc_821D7C00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D7C08"))) PPC_WEAK_FUNC(sub_821D7C08);
PPC_FUNC_IMPL(__imp__sub_821D7C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821D7C10;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// lwz r11,336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7ed4
	if (ctx.cr6.eq) goto loc_821D7ED4;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
loc_821D7C48:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r9,0,2,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821d7e68
	if (!ctx.cr6.eq) goto loc_821D7E68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x821d7e68
	if (ctx.cr6.eq) goto loc_821D7E68;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821d7cd4
	if (ctx.cr6.eq) goto loc_821D7CD4;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r10,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7cb4
	if (!ctx.cr6.eq) goto loc_821D7CB4;
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821d7cb8
	if (ctx.cr6.eq) goto loc_821D7CB8;
loc_821D7CB4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821D7CB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7e68
	if (!ctx.cr6.eq) goto loc_821D7E68;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r11,r11,0,31,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r11,129
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 129, ctx.xer);
	// bne cr6,0x821d7e68
	if (!ctx.cr6.eq) goto loc_821D7E68;
loc_821D7CD4:
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d7e54
	if (!ctx.cr6.eq) goto loc_821D7E54;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x821d7e54
	if (ctx.cr6.eq) goto loc_821D7E54;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821d7d48
	if (ctx.cr6.eq) goto loc_821D7D48;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r11,r10,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7d28
	if (!ctx.cr6.eq) goto loc_821D7D28;
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821d7d2c
	if (ctx.cr6.eq) goto loc_821D7D2C;
loc_821D7D28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821D7D2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7e54
	if (!ctx.cr6.eq) goto loc_821D7E54;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r11,r11,0,31,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r11,129
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 129, ctx.xer);
	// bne cr6,0x821d7e54
	if (!ctx.cr6.eq) goto loc_821D7E54;
loc_821D7D48:
	// lhz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821d7ec8
	if (ctx.cr6.eq) goto loc_821D7EC8;
	// lhz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 128);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821d7ec8
	if (ctx.cr6.eq) goto loc_821D7EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D7D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d7dc0
	if (!ctx.cr6.eq) goto loc_821D7DC0;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d7db8
	if (!ctx.cr6.eq) goto loc_821D7DB8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhz r5,128(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 128);
	// lhz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// bl 0x821d9190
	ctx.lr = 0x821D7DB4;
	sub_821D9190(ctx, base);
	// b 0x821d7ec8
	goto loc_821D7EC8;
loc_821D7DB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7e14
	if (ctx.cr6.eq) goto loc_821D7E14;
loc_821D7DC0:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d7ec8
	if (!ctx.cr6.eq) goto loc_821D7EC8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7e14
	if (ctx.cr6.eq) goto loc_821D7E14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d7ec8
	if (ctx.cr6.eq) goto loc_821D7EC8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821d7ec8
	goto loc_821D7EC8;
loc_821D7E14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d7ec8
	if (ctx.cr6.eq) goto loc_821D7EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821d7ec8
	goto loc_821D7EC8;
loc_821D7E54:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821cf958
	ctx.lr = 0x821D7E60;
	sub_821CF958(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x821d7eb8
	goto loc_821D7EB8;
loc_821D7E68:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// sth r26,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r26.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d7e80
	if (!ctx.cr6.eq) goto loc_821D7E80;
	// sth r26,-612(r31)
	PPC_STORE_U16(ctx.r31.u32 + -612, ctx.r26.u16);
	// b 0x821d7eb0
	goto loc_821D7EB0;
loc_821D7E80:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821d7eb0
	if (!ctx.cr6.eq) goto loc_821D7EB0;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d7eb0
	if (ctx.cr6.eq) goto loc_821D7EB0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D7EA0:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lhz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// sth r9,164(r10)
	PPC_STORE_U16(ctx.r10.u32 + 164, ctx.r9.u16);
	// bdnz 0x821d7ea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D7EA0;
loc_821D7EB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D7EB8:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D7EC8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,36
	ctx.r27.s64 = ctx.r27.s64 + 36;
	// bne 0x821d7c48
	if (!ctx.cr0.eq) goto loc_821D7C48;
loc_821D7ED4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D7EDC"))) PPC_WEAK_FUNC(sub_821D7EDC);
PPC_FUNC_IMPL(__imp__sub_821D7EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7EE0"))) PPC_WEAK_FUNC(sub_821D7EE0);
PPC_FUNC_IMPL(__imp__sub_821D7EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821D7EE8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r25,r11,4536
	ctx.r25.s64 = ctx.r11.s64 + 4536;
	// lwz r11,236(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8118
	if (ctx.cr6.eq) goto loc_821D8118;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_821D7F14:
	// lwz r11,252(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 252);
	// lwzx r31,r27,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d7f54
	if (ctx.cr6.eq) goto loc_821D7F54;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d7f54
	if (!ctx.cr6.eq) goto loc_821D7F54;
	// sth r28,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r28.u16);
	// b 0x821d7f88
	goto loc_821D7F88;
loc_821D7F54:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821d7f84
	if (ctx.cr6.eq) goto loc_821D7F84;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d7f84
	if (!ctx.cr6.eq) goto loc_821D7F84;
	// sth r28,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r28.u16);
	// b 0x821d7f88
	goto loc_821D7F88;
loc_821D7F84:
	// sth r26,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r26.u16);
loc_821D7F88:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d810c
	if (ctx.cr6.eq) goto loc_821D810C;
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d810c
	if (!ctx.cr6.eq) goto loc_821D810C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821d810c
	if (ctx.cr6.eq) goto loc_821D810C;
	// lwz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d810c
	if (!ctx.cr6.eq) goto loc_821D810C;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d7fd4
	if (ctx.cr6.eq) goto loc_821D7FD4;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x821d7fd8
	if (!ctx.cr6.eq) goto loc_821D7FD8;
loc_821D7FD4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821D7FD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d810c
	if (ctx.cr6.eq) goto loc_821D810C;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d8004
	if (!ctx.cr6.eq) goto loc_821D8004;
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d8004
	if (!ctx.cr6.eq) goto loc_821D8004;
	// sth r28,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r28.u16);
	// b 0x821d810c
	goto loc_821D810C;
loc_821D8004:
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// lwz r10,156(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d810c
	if (ctx.cr6.eq) goto loc_821D810C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r9,0,31,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r9,129
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 129, ctx.xer);
	// bne cr6,0x821d810c
	if (!ctx.cr6.eq) goto loc_821D810C;
	// rlwinm r9,r11,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d8044
	if (!ctx.cr6.eq) goto loc_821D8044;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x821d8048
	if (ctx.cr6.eq) goto loc_821D8048;
loc_821D8044:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821D8048:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d810c
	if (!ctx.cr6.eq) goto loc_821D810C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d810c
	if (ctx.cr6.eq) goto loc_821D810C;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r10,129
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 129, ctx.xer);
	// bne cr6,0x821d810c
	if (!ctx.cr6.eq) goto loc_821D810C;
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d808c
	if (!ctx.cr6.eq) goto loc_821D808C;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x821d8090
	if (ctx.cr6.eq) goto loc_821D8090;
loc_821D808C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821D8090:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d810c
	if (!ctx.cr6.eq) goto loc_821D810C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821d80b4
	if (ctx.cr6.eq) goto loc_821D80B4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x821d80b8
	if (!ctx.cr6.eq) goto loc_821D80B8;
loc_821D80B4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821D80B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d80ec
	if (!ctx.cr6.eq) goto loc_821D80EC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821d80dc
	if (ctx.cr6.eq) goto loc_821D80DC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x821d80e0
	if (!ctx.cr6.eq) goto loc_821D80E0;
loc_821D80DC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821D80E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d810c
	if (ctx.cr6.eq) goto loc_821D810C;
loc_821D80EC:
	// lhz r5,164(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 164);
	// lhz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 164);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821d810c
	if (ctx.cr6.eq) goto loc_821D810C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821d9190
	ctx.lr = 0x821D810C;
	sub_821D9190(ctx, base);
loc_821D810C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x821d7f14
	if (!ctx.cr0.eq) goto loc_821D7F14;
loc_821D8118:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D8120"))) PPC_WEAK_FUNC(sub_821D8120);
PPC_FUNC_IMPL(__imp__sub_821D8120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821D8128;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// lwz r25,4(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d81f0
	if (ctx.cr6.eq) goto loc_821D81F0;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_821D8150:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwzx r28,r27,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// addi r30,r28,512
	ctx.r30.s64 = ctx.r28.s64 + 512;
	// lwz r11,516(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d81e4
	if (ctx.cr6.eq) goto loc_821D81E4;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_821D8170:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d81d8
	if (ctx.cr6.eq) goto loc_821D81D8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r11,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d81a8
	if (!ctx.cr6.eq) goto loc_821D81A8;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821d81ac
	if (ctx.cr6.eq) goto loc_821D81AC;
loc_821D81A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821D81AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d81d8
	if (!ctx.cr6.eq) goto loc_821D81D8;
	// lhz r5,904(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 904);
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x821d81d8
	if (ctx.cr6.eq) goto loc_821D81D8;
	// lhz r4,284(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 284);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x821d81d8
	if (ctx.cr6.eq) goto loc_821D81D8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821d9190
	ctx.lr = 0x821D81D8;
	sub_821D9190(ctx, base);
loc_821D81D8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bne 0x821d8170
	if (!ctx.cr0.eq) goto loc_821D8170;
loc_821D81E4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x821d8150
	if (!ctx.cr0.eq) goto loc_821D8150;
loc_821D81F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D81F8"))) PPC_WEAK_FUNC(sub_821D81F8);
PPC_FUNC_IMPL(__imp__sub_821D81F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x821D8200;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r23,r10,65535
	ctx.r23.u64 = ctx.r10.u64 | 65535;
	// lwz r27,4536(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4536);
	// addi r26,r11,4536
	ctx.r26.s64 = ctx.r11.s64 + 4536;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821d8338
	if (ctx.cr6.eq) goto loc_821D8338;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_821D8238:
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D8254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821d82b4
	if (ctx.cr6.eq) goto loc_821D82B4;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// sth r23,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r23.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d827c
	if (!ctx.cr6.eq) goto loc_821D827C;
	// sth r23,-612(r31)
	PPC_STORE_U16(ctx.r31.u32 + -612, ctx.r23.u16);
	// li r4,-2
	ctx.r4.s64 = -2;
	// b 0x821d830c
	goto loc_821D830C;
loc_821D827C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821d82ac
	if (!ctx.cr6.eq) goto loc_821D82AC;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d82ac
	if (ctx.cr6.eq) goto loc_821D82AC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D829C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lhz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// sth r9,164(r10)
	PPC_STORE_U16(ctx.r10.u32 + 164, ctx.r9.u16);
	// bdnz 0x821d829c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D829C;
loc_821D82AC:
	// li r4,-2
	ctx.r4.s64 = -2;
	// b 0x821d830c
	goto loc_821D830C;
loc_821D82B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821d9118
	ctx.lr = 0x821D82C0;
	sub_821D9118(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// sth r3,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r3.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d82d8
	if (!ctx.cr6.eq) goto loc_821D82D8;
	// sth r3,-612(r31)
	PPC_STORE_U16(ctx.r31.u32 + -612, ctx.r3.u16);
	// b 0x821d8308
	goto loc_821D8308;
loc_821D82D8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821d8308
	if (!ctx.cr6.eq) goto loc_821D8308;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d8308
	if (ctx.cr6.eq) goto loc_821D8308;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D82F8:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lhz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// sth r9,164(r10)
	PPC_STORE_U16(ctx.r10.u32 + 164, ctx.r9.u16);
	// bdnz 0x821d82f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D82F8;
loc_821D8308:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_821D830C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D8320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x821d8238
	if (ctx.cr6.lt) goto loc_821D8238;
loc_821D8338:
	// lwz r26,4(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8448
	if (ctx.cr6.eq) goto loc_821D8448;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// li r24,-2
	ctx.r24.s64 = -2;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_821D8358:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r31,r29,156
	ctx.r31.s64 = ctx.r29.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,156(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// lwz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D8378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821d83d8
	if (ctx.cr6.eq) goto loc_821D83D8;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// sth r23,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r23.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d83a0
	if (!ctx.cr6.eq) goto loc_821D83A0;
	// sth r23,-612(r31)
	PPC_STORE_U16(ctx.r31.u32 + -612, ctx.r23.u16);
	// stw r24,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r24.u32);
	// b 0x821d8430
	goto loc_821D8430;
loc_821D83A0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821d83d0
	if (!ctx.cr6.eq) goto loc_821D83D0;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d83d0
	if (ctx.cr6.eq) goto loc_821D83D0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D83C0:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lhz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// sth r9,164(r10)
	PPC_STORE_U16(ctx.r10.u32 + 164, ctx.r9.u16);
	// bdnz 0x821d83c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D83C0;
loc_821D83D0:
	// stw r24,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r24.u32);
	// b 0x821d8430
	goto loc_821D8430;
loc_821D83D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821d9118
	ctx.lr = 0x821D83E4;
	sub_821D9118(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// sth r3,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r3.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d83fc
	if (!ctx.cr6.eq) goto loc_821D83FC;
	// sth r3,-612(r31)
	PPC_STORE_U16(ctx.r31.u32 + -612, ctx.r3.u16);
	// b 0x821d842c
	goto loc_821D842C;
loc_821D83FC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821d842c
	if (!ctx.cr6.eq) goto loc_821D842C;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d842c
	if (ctx.cr6.eq) goto loc_821D842C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D841C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lhz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// sth r9,164(r10)
	PPC_STORE_U16(ctx.r10.u32 + 164, ctx.r9.u16);
	// bdnz 0x821d841c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D841C;
loc_821D842C:
	// stw r25,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r25.u32);
loc_821D8430:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x821d8358
	if (!ctx.cr0.eq) goto loc_821D8358;
loc_821D8448:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D8450"))) PPC_WEAK_FUNC(sub_821D8450);
PPC_FUNC_IMPL(__imp__sub_821D8450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x821D8458;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// addi r9,r11,4536
	ctx.r9.s64 = ctx.r11.s64 + 4536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r16,4536(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4536);
	// lwz r3,-27096(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27096);
	// lwz r18,4(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r15,320(r9)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r9.u32 + 320);
	// lwz r20,4(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// add r24,r11,r20
	ctx.r24.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x82388734
	ctx.lr = 0x821D848C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d8498
	if (!ctx.cr6.eq) goto loc_821D8498;
	// bl 0x821b3000
	ctx.lr = 0x821D8498;
	sub_821B3000(ctx, base);
loc_821D8498:
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r21,r3,20
	ctx.r21.s64 = ctx.r3.s64 + 20;
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r17,r9,0,0,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// add r8,r17,r11
	ctx.r8.u64 = ctx.r17.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821d84cc
	if (!ctx.cr6.gt) goto loc_821D84CC;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4492
	ctx.r9.s64 = ctx.r10.s64 + 4492;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_821D84CC:
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// add r8,r10,r17
	ctx.r8.u64 = ctx.r10.u64 + ctx.r17.u64;
	// add r22,r9,r10
	ctx.r22.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r8.u32);
	// beq cr6,0x821d866c
	if (ctx.cr6.eq) goto loc_821D866C;
	// li r19,1
	ctx.r19.s64 = 1;
	// li r14,2
	ctx.r14.s64 = 2;
loc_821D84F4:
	// lwz r9,24(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// rlwinm r8,r11,2,14,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// lhz r26,2(r9)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// bge cr6,0x821d85c0
	if (!ctx.cr6.lt) goto loc_821D85C0;
	// clrlwi r27,r26,16
	ctx.r27.u64 = ctx.r26.u32 & 0xFFFF;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// addi r28,r22,-4
	ctx.r28.s64 = ctx.r22.s64 + -4;
loc_821D8528:
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821d85c0
	if (!ctx.cr6.eq) goto loc_821D85C0;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x821d855c
	if (!ctx.cr6.lt) goto loc_821D855C;
	// lwz r10,20(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x821d857c
	goto loc_821D857C;
loc_821D855C:
	// subf r11,r20,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r20.s64;
	// lwz r10,20(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// bne cr6,0x821d857c
	if (!ctx.cr6.eq) goto loc_821D857C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D857C:
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D8590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,8(r28)
	ea = 8 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d85a8
	if (ctx.cr6.eq) goto loc_821D85A8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x821d85ac
	if (!ctx.cr6.eq) goto loc_821D85AC;
loc_821D85A8:
	// li r25,0
	ctx.r25.s64 = 0;
loc_821D85AC:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x821d8528
	if (ctx.cr6.lt) goto loc_821D8528;
loc_821D85C0:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// beq cr6,0x821d8618
	if (ctx.cr6.eq) goto loc_821D8618;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stbx r14,r11,r15
	PPC_STORE_U8(ctx.r11.u32 + ctx.r15.u32, ctx.r14.u8);
	// beq cr6,0x821d865c
	if (ctx.cr6.eq) goto loc_821D865C;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_821D85E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821d8608
	if (ctx.cr6.eq) goto loc_821D8608;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D8608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D8608:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x821d85e0
	if (!ctx.cr0.eq) goto loc_821D85E0;
	// b 0x821d865c
	goto loc_821D865C;
loc_821D8618:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stbx r19,r11,r15
	PPC_STORE_U8(ctx.r11.u32 + ctx.r15.u32, ctx.r19.u8);
	// beq cr6,0x821d865c
	if (ctx.cr6.eq) goto loc_821D865C;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_821D8628:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821d8650
	if (!ctx.cr6.eq) goto loc_821D8650;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D8650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D8650:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x821d8628
	if (!ctx.cr0.eq) goto loc_821D8628;
loc_821D865C:
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x821d84f4
	if (ctx.cr6.lt) goto loc_821D84F4;
loc_821D866C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821d86bc
	if (ctx.cr6.eq) goto loc_821D86BC;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r10.u32, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// ble cr6,0x821d8690
	if (!ctx.cr6.gt) goto loc_821D8690;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_821D8690:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// subf r11,r17,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r17.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x821d86b0
	if (ctx.cr6.eq) goto loc_821D86B0;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_821D86B0:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// subf r10,r17,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r17.s64;
	// stw r10,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r10.u32);
loc_821D86BC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821d86d0
	ctx.lr = 0x821D86C4;
	sub_821D86D0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D86CC"))) PPC_WEAK_FUNC(sub_821D86CC);
PPC_FUNC_IMPL(__imp__sub_821D86CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D86D0"))) PPC_WEAK_FUNC(sub_821D86D0);
PPC_FUNC_IMPL(__imp__sub_821D86D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821D86D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r28,r3,28
	ctx.r28.s64 = ctx.r3.s64 + 28;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x821d8bc0
	ctx.lr = 0x821D86F8;
	sub_821D8BC0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d88fc
	if (ctx.cr6.eq) goto loc_821D88FC;
loc_821D8704:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,160(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	// lwz r10,156(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// lwz r5,156(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 156);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8750
	if (ctx.cr6.eq) goto loc_821D8750;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821d88f0
	if (ctx.cr6.eq) goto loc_821D88F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8750
	if (ctx.cr6.eq) goto loc_821D8750;
	// lwz r11,160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 160);
	// rlwinm r6,r11,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821d88f0
	if (!ctx.cr6.eq) goto loc_821D88F0;
loc_821D8750:
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r11,r10,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d8770
	if (!ctx.cr6.eq) goto loc_821D8770;
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x821d8774
	if (ctx.cr6.eq) goto loc_821D8774;
loc_821D8770:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821D8774:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d88f0
	if (!ctx.cr6.eq) goto loc_821D88F0;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r11,r11,0,31,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r11,129
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 129, ctx.xer);
	// bne cr6,0x821d88f0
	if (!ctx.cr6.eq) goto loc_821D88F0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x821d88f0
	if (ctx.cr6.eq) goto loc_821D88F0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821d87e8
	if (ctx.cr6.eq) goto loc_821D87E8;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r11,r10,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d87c0
	if (!ctx.cr6.eq) goto loc_821D87C0;
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x821d87c4
	if (ctx.cr6.eq) goto loc_821D87C4;
loc_821D87C0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821D87C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d88f0
	if (!ctx.cr6.eq) goto loc_821D88F0;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r11,r11,0,31,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r11,129
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 129, ctx.xer);
	// bne cr6,0x821d88f0
	if (!ctx.cr6.eq) goto loc_821D88F0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x821d88f0
	if (ctx.cr6.eq) goto loc_821D88F0;
loc_821D87E8:
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8820
	if (ctx.cr6.eq) goto loc_821D8820;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821d88f0
	if (ctx.cr6.eq) goto loc_821D88F0;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d88f0
	if (!ctx.cr6.eq) goto loc_821D88F0;
loc_821D8820:
	// lwz r11,304(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// lwz r10,304(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 304);
	// rlwinm r11,r11,11,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// rlwinm r10,r10,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d886c
	if (ctx.cr6.eq) goto loc_821D886C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821d886c
	if (!ctx.cr6.eq) goto loc_821D886C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x821d886c
	if (ctx.cr6.eq) goto loc_821D886C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x821d886c
	if (ctx.cr6.eq) goto loc_821D886C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821d8868
	if (ctx.cr6.eq) goto loc_821D8868;
	// lwz r11,148(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 148, ctx.r7.u32);
loc_821D8868:
	// stw r29,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r29.u32);
loc_821D886C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d88b0
	if (ctx.cr6.eq) goto loc_821D88B0;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d88b0
	if (!ctx.cr6.eq) goto loc_821D88B0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821d88b0
	if (ctx.cr6.eq) goto loc_821D88B0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821d88b0
	if (ctx.cr6.eq) goto loc_821D88B0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d88ac
	if (ctx.cr6.eq) goto loc_821D88AC;
	// lwz r11,148(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 148, ctx.r8.u32);
loc_821D88AC:
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
loc_821D88B0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821d88c0
	if (ctx.cr6.eq) goto loc_821D88C0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d88f0
	if (!ctx.cr6.eq) goto loc_821D88F0;
loc_821D88C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lhz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821d88dc
	if (!ctx.cr6.eq) goto loc_821D88DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
loc_821D88DC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d8b20
	ctx.lr = 0x821D88F0;
	sub_821D8B20(ctx, base);
loc_821D88F0:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821d8704
	if (!ctx.cr6.eq) goto loc_821D8704;
loc_821D88FC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x821d8924
	if (!ctx.cr6.gt) goto loc_821D8924;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d8e10
	ctx.lr = 0x821D8924;
	sub_821D8E10(ctx, base);
loc_821D8924:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D892C"))) PPC_WEAK_FUNC(sub_821D892C);
PPC_FUNC_IMPL(__imp__sub_821D892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D8930"))) PPC_WEAK_FUNC(sub_821D8930);
PPC_FUNC_IMPL(__imp__sub_821D8930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821D8938;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r28,r3,28
	ctx.r28.s64 = ctx.r3.s64 + 28;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x821d8bc0
	ctx.lr = 0x821D895C;
	sub_821D8BC0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d8af0
	if (ctx.cr6.eq) goto loc_821D8AF0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_821D896C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821d8990
	if (!ctx.cr6.eq) goto loc_821D8990;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821d89a0
	if (ctx.cr6.eq) goto loc_821D89A0;
	// b 0x821d8ae4
	goto loc_821D8AE4;
loc_821D8990:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821d89a0
	if (ctx.cr6.eq) goto loc_821D89A0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821d8ae4
	if (!ctx.cr6.eq) goto loc_821D8AE4;
loc_821D89A0:
	// stw r27,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r27.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821d89d8
	if (ctx.cr6.eq) goto loc_821D89D8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821d8ae4
	if (!ctx.cr6.eq) goto loc_821D8AE4;
loc_821D89D8:
	// lwz r8,304(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// rlwinm r7,r8,11,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821d8a28
	if (ctx.cr6.eq) goto loc_821D8A28;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821d8a28
	if (!ctx.cr6.eq) goto loc_821D8A28;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821d8a28
	if (ctx.cr6.eq) goto loc_821D8A28;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821d8a28
	if (ctx.cr6.eq) goto loc_821D8A28;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821d8a24
	if (ctx.cr6.eq) goto loc_821D8A24;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r8.u32);
loc_821D8A24:
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_821D8A28:
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// rlwinm r8,r10,11,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821d8a7c
	if (ctx.cr6.eq) goto loc_821D8A7C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821d8a7c
	if (!ctx.cr6.eq) goto loc_821D8A7C;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821d8a7c
	if (ctx.cr6.eq) goto loc_821D8A7C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821d8a7c
	if (ctx.cr6.eq) goto loc_821D8A7C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d8a78
	if (ctx.cr6.eq) goto loc_821D8A78;
	// lwz r11,148(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 148, ctx.r10.u32);
loc_821D8A78:
	// stw r26,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r26.u32);
loc_821D8A7C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// rlwinm r9,r11,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d8aa8
	if (ctx.cr6.eq) goto loc_821D8AA8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,304(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwinm r8,r9,11,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821d8aac
	if (!ctx.cr6.eq) goto loc_821D8AAC;
loc_821D8AA8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821D8AAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8ae4
	if (ctx.cr6.eq) goto loc_821D8AE4;
	// lhz r11,164(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 164);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821d8ad0
	if (!ctx.cr6.eq) goto loc_821D8AD0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
loc_821D8AD0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d8b20
	ctx.lr = 0x821D8AE4;
	sub_821D8B20(ctx, base);
loc_821D8AE4:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821d896c
	if (!ctx.cr6.eq) goto loc_821D896C;
loc_821D8AF0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r26.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x821d8b18
	if (!ctx.cr6.gt) goto loc_821D8B18;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d8e10
	ctx.lr = 0x821D8B18;
	sub_821D8E10(ctx, base);
loc_821D8B18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D8B20"))) PPC_WEAK_FUNC(sub_821D8B20);
PPC_FUNC_IMPL(__imp__sub_821D8B20) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d8b7c
	if (!ctx.cr6.eq) goto loc_821D8B7C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d8b68
	if (!ctx.cr6.eq) goto loc_821D8B68;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4944
	ctx.r9.s64 = ctx.r10.s64 + 4944;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_821D8B68:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821d8c40
	ctx.lr = 0x821D8B7C;
	sub_821D8C40(ctx, base);
loc_821D8B7C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_821D8BBC"))) PPC_WEAK_FUNC(sub_821D8BBC);
PPC_FUNC_IMPL(__imp__sub_821D8BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D8BC0"))) PPC_WEAK_FUNC(sub_821D8BC0);
PPC_FUNC_IMPL(__imp__sub_821D8BC0) {
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
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d8c24
	if (ctx.cr6.eq) goto loc_821D8C24;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// twllei r10,0
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divwu r7,r8,r10
	ctx.r7.u32 = ctx.r8.u32 / ctx.r10.u32;
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x821d8c1c
	if (ctx.cr6.gt) goto loc_821D8C1C;
	// bge cr6,0x821d8c24
	if (!ctx.cr6.lt) goto loc_821D8C24;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8c24
	if (ctx.cr6.eq) goto loc_821D8C24;
loc_821D8C1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8c40
	ctx.lr = 0x821D8C24;
	sub_821D8C40(ctx, base);
loc_821D8C24:
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_821D8C40"))) PPC_WEAK_FUNC(sub_821D8C40);
PPC_FUNC_IMPL(__imp__sub_821D8C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821D8C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x821d8c6c
	if (!ctx.cr6.gt) goto loc_821D8C6C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821D8C6C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821D8C7C;
	sub_82082030(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821d8c90
	if (!ctx.cr6.lt) goto loc_821D8C90;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821D8C90:
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d8cac
	if (ctx.cr6.eq) goto loc_821D8CAC;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821D8CAC;
	sub_8233E4E0(ctx, base);
loc_821D8CAC:
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8cd0
	if (ctx.cr6.eq) goto loc_821D8CD0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8cd0
	if (ctx.cr6.eq) goto loc_821D8CD0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821D8CD0;
	sub_82080000(ctx, base);
loc_821D8CD0:
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

__attribute__((alias("__imp__sub_821D8CE4"))) PPC_WEAK_FUNC(sub_821D8CE4);
PPC_FUNC_IMPL(__imp__sub_821D8CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D8CE8"))) PPC_WEAK_FUNC(sub_821D8CE8);
PPC_FUNC_IMPL(__imp__sub_821D8CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821D8CF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
loc_821D8D04:
	// add r11,r25,r24
	ctx.r11.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r7,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
loc_821D8D24:
	// lwz r28,20(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x821d8f20
	ctx.lr = 0x821D8D38;
	sub_821D8F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8d64
	if (ctx.cr6.eq) goto loc_821D8D64;
loc_821D8D44:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x821d8f20
	ctx.lr = 0x821D8D58;
	sub_821D8F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d8d44
	if (!ctx.cr6.eq) goto loc_821D8D44;
loc_821D8D64:
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r29,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x821d8f20
	ctx.lr = 0x821D8D74;
	sub_821D8F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8da0
	if (ctx.cr6.eq) goto loc_821D8DA0;
loc_821D8D80:
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwzx r4,r29,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x821d8f20
	ctx.lr = 0x821D8D94;
	sub_821D8F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d8d80
	if (!ctx.cr6.eq) goto loc_821D8D80;
loc_821D8DA0:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x821d8dd8
	if (ctx.cr6.gt) goto loc_821D8DD8;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,20(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stwx r7,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r7.u32);
	// ble cr6,0x821d8d24
	if (!ctx.cr6.gt) goto loc_821D8D24;
loc_821D8DD8:
	// cmpw cr6,r25,r31
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x821d8df4
	if (!ctx.cr6.lt) goto loc_821D8DF4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821d8ce8
	ctx.lr = 0x821D8DF4;
	sub_821D8CE8(ctx, base);
loc_821D8DF4:
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x821d8e04
	if (!ctx.cr6.lt) goto loc_821D8E04;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// b 0x821d8d04
	goto loc_821D8D04;
loc_821D8E04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D8E0C"))) PPC_WEAK_FUNC(sub_821D8E0C);
PPC_FUNC_IMPL(__imp__sub_821D8E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D8E10"))) PPC_WEAK_FUNC(sub_821D8E10);
PPC_FUNC_IMPL(__imp__sub_821D8E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821D8E18;
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
loc_821D8E28:
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
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_821D8E50:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x821d8e80
	if (!ctx.cr6.lt) goto loc_821D8E80;
loc_821D8E68:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821d8e68
	if (ctx.cr6.lt) goto loc_821D8E68;
loc_821D8E80:
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x821d8eac
	if (!ctx.cr6.lt) goto loc_821D8EAC;
loc_821D8E94:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821d8e94
	if (ctx.cr6.lt) goto loc_821D8E94;
loc_821D8EAC:
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x821d8ef0
	if (ctx.cr6.gt) goto loc_821D8EF0;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stdx r3,r10,r9
	PPC_STORE_U64(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u64);
	// ble cr6,0x821d8e50
	if (!ctx.cr6.gt) goto loc_821D8E50;
loc_821D8EF0:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821d8f04
	if (!ctx.cr6.lt) goto loc_821D8F04;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d8e10
	ctx.lr = 0x821D8F04;
	sub_821D8E10(ctx, base);
loc_821D8F04:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x821d8f14
	if (!ctx.cr6.lt) goto loc_821D8F14;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x821d8e28
	goto loc_821D8E28;
loc_821D8F14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D8F1C"))) PPC_WEAK_FUNC(sub_821D8F1C);
PPC_FUNC_IMPL(__imp__sub_821D8F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D8F20"))) PPC_WEAK_FUNC(sub_821D8F20);
PPC_FUNC_IMPL(__imp__sub_821D8F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8f7c
	if (ctx.cr6.eq) goto loc_821D8F7C;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8f7c
	if (ctx.cr6.eq) goto loc_821D8F7C;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d8f6c
	if (ctx.cr6.eq) goto loc_821D8F6C;
	// lwz r11,156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d8f6c
	if (ctx.cr6.eq) goto loc_821D8F6C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821d8f74
	if (!ctx.cr6.eq) goto loc_821D8F74;
	// lhz r11,164(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 164);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x821d8f80
	goto loc_821D8F80;
loc_821D8F6C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
loc_821D8F74:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x821d8f80
	goto loc_821D8F80;
loc_821D8F7C:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_821D8F80:
	// lhz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8fd4
	if (ctx.cr6.eq) goto loc_821D8FD4;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8fd4
	if (ctx.cr6.eq) goto loc_821D8FD4;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d8fc8
	if (ctx.cr6.eq) goto loc_821D8FC8;
	// lwz r11,156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d8fc8
	if (ctx.cr6.eq) goto loc_821D8FC8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lhz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821d8fd8
	if (!ctx.cr6.eq) goto loc_821D8FD8;
	// lhz r11,164(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 164);
	// b 0x821d8fd8
	goto loc_821D8FD8;
loc_821D8FC8:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lhz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
	// b 0x821d8fd8
	goto loc_821D8FD8;
loc_821D8FD4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_821D8FD8:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D8FF0"))) PPC_WEAK_FUNC(sub_821D8FF0);
PPC_FUNC_IMPL(__imp__sub_821D8FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821D8FF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_821D9008:
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
	// lwzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
loc_821D9030:
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x821d9060
	if (!ctx.cr6.lt) goto loc_821D9060;
loc_821D9048:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x821d9048
	if (ctx.cr6.lt) goto loc_821D9048;
loc_821D9060:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821d908c
	if (!ctx.cr6.lt) goto loc_821D908C;
loc_821D9074:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821d9074
	if (ctx.cr6.lt) goto loc_821D9074;
loc_821D908C:
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x821d90e8
	if (ctx.cr6.gt) goto loc_821D90E8;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lhzx r27,r11,r10
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r26,82(r1)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sthx r27,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u16);
	// lhz r7,2(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r26,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r26.u16);
	// ble cr6,0x821d9030
	if (!ctx.cr6.gt) goto loc_821D9030;
loc_821D90E8:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821d90fc
	if (!ctx.cr6.lt) goto loc_821D90FC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d8ff0
	ctx.lr = 0x821D90FC;
	sub_821D8FF0(ctx, base);
loc_821D90FC:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x821d910c
	if (!ctx.cr6.lt) goto loc_821D910C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x821d9008
	goto loc_821D9008;
loc_821D910C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D9114"))) PPC_WEAK_FUNC(sub_821D9114);
PPC_FUNC_IMPL(__imp__sub_821D9114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9118"))) PPC_WEAK_FUNC(sub_821D9118);
PPC_FUNC_IMPL(__imp__sub_821D9118) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r4,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lhz r6,2(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x821d9184
	if (ctx.cr6.eq) goto loc_821D9184;
loc_821D9138:
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lhz r5,2(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// sth r5,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r5.u16);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,2(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// rotlwi r11,r3,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821d9138
	if (!ctx.cr6.eq) goto loc_821D9138;
	// blr 
	return;
loc_821D9184:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D918C"))) PPC_WEAK_FUNC(sub_821D918C);
PPC_FUNC_IMPL(__imp__sub_821D918C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9190"))) PPC_WEAK_FUNC(sub_821D9190);
PPC_FUNC_IMPL(__imp__sub_821D9190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821D9198;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821d9118
	ctx.lr = 0x821D91A8;
	sub_821D9118(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9118
	ctx.lr = 0x821D91B8;
	sub_821D9118(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821d9214
	if (ctx.cr6.eq) goto loc_821D9214;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x821d9204
	if (!ctx.cr6.gt) goto loc_821D9204;
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821D9204:
	// sth r30,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r30.u16);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_821D9214:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D921C"))) PPC_WEAK_FUNC(sub_821D921C);
PPC_FUNC_IMPL(__imp__sub_821D921C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9220"))) PPC_WEAK_FUNC(sub_821D9220);
PPC_FUNC_IMPL(__imp__sub_821D9220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821D9228;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821cfb50
	ctx.lr = 0x821D9238;
	sub_821CFB50(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,64
	ctx.r10.s64 = 64;
	// sth r30,348(r31)
	PPC_STORE_U16(ctx.r31.u32 + 348, ctx.r30.u16);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// addi r29,r31,348
	ctx.r29.s64 = ctx.r31.s64 + 348;
	// stb r30,368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 368, ctx.r30.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// stb r28,369(r31)
	PPC_STORE_U8(ctx.r31.u32 + 369, ctx.r28.u8);
	// bl 0x821dbdd8
	ctx.lr = 0x821D9278;
	sub_821DBDD8(ctx, base);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// stb r30,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r30.u8);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r8,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r8.u32);
	// stw r9,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r9.u32);
	// stb r28,393(r31)
	PPC_STORE_U8(ctx.r31.u32 + 393, ctx.r28.u8);
	// bl 0x821d8c40
	ctx.lr = 0x821D92A8;
	sub_821D8C40(ctx, base);
	// addi r26,r31,400
	ctx.r26.s64 = ctx.r31.s64 + 400;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82218790
	ctx.lr = 0x821D92B4;
	sub_82218790(ctx, base);
	// addi r25,r31,1464
	ctx.r25.s64 = ctx.r31.s64 + 1464;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820e66e0
	ctx.lr = 0x821D92C0;
	sub_820E66E0(ctx, base);
	// li r7,128
	ctx.r7.s64 = 128;
	// li r24,2383
	ctx.r24.s64 = 2383;
	// stw r30,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// stw r30,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// addi r27,r31,1608
	ctx.r27.s64 = ctx.r31.s64 + 1608;
	// stb r30,1624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1624, ctx.r30.u8);
	// li r4,2383
	ctx.r4.s64 = 2383;
	// stw r30,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r7,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r7.u32);
	// stw r24,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r24.u32);
	// stb r28,1625(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1625, ctx.r28.u8);
	// bl 0x821dbdd8
	ctx.lr = 0x821D92F4;
	sub_821DBDD8(ctx, base);
	// stw r30,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r30.u32);
	// addi r3,r31,1652
	ctx.r3.s64 = ctx.r31.s64 + 1652;
	// bl 0x821dbce8
	ctx.lr = 0x821D9300;
	sub_821DBCE8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r28,r11,31376
	ctx.r28.s64 = ctx.r11.s64 + 31376;
	// stw r30,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r30.u32);
	// stw r30,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r30.u32);
	// stw r30,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r30.u32);
	// stw r30,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r30.u32);
	// stw r30,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r30.u32);
	// lfs f0,128(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r30.u32);
	// lfs f31,48(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r30.u32);
	// stfs f0,1776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1776, temp.u32);
	// stfs f31,1800(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1800, temp.u32);
	// bl 0x82081c00
	ctx.lr = 0x821D9340;
	sub_82081C00(ctx, base);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r23,r6,5100
	ctx.r23.s64 = ctx.r6.s64 + 5100;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r11,5100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 5100, ctx.r11.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// bl 0x8221a0c0
	ctx.lr = 0x821D9360;
	sub_8221A0C0(ctx, base);
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// lbz r5,44(r23)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r30.u32);
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// ori r11,r5,128
	ctx.r11.u64 = ctx.r5.u64 | 128;
	// stb r11,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821D9380;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d938c
	if (!ctx.cr6.eq) goto loc_821D938C;
	// bl 0x821b3000
	ctx.lr = 0x821D938C;
	sub_821B3000(ctx, base);
loc_821D938C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d93a0
	if (ctx.cr6.eq) goto loc_821D93A0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821D93A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821D93A8;
	sub_82081C00(ctx, base);
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// li r11,40
	ctx.r11.s64 = 40;
	// addi r23,r9,5156
	ctx.r23.s64 = ctx.r9.s64 + 5156;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r11,5156(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5156, ctx.r11.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// bl 0x8221ae10
	ctx.lr = 0x821D93C8;
	sub_8221AE10(ctx, base);
	// lbz r8,44(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821D93E4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d93f0
	if (!ctx.cr6.eq) goto loc_821D93F0;
	// bl 0x821b3000
	ctx.lr = 0x821D93F0;
	sub_821B3000(ctx, base);
loc_821D93F0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9404
	if (ctx.cr6.eq) goto loc_821D9404;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821D9404:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821D940C;
	sub_82081C00(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r23,r9,9280
	ctx.r23.s64 = ctx.r9.s64 + 9280;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,9280(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9280, ctx.r11.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// bl 0x822014b0
	ctx.lr = 0x821D9428;
	sub_822014B0(ctx, base);
	// lbz r8,44(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821D9444;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d9450
	if (!ctx.cr6.eq) goto loc_821D9450;
	// bl 0x821b3000
	ctx.lr = 0x821D9450;
	sub_821B3000(ctx, base);
loc_821D9450:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9464
	if (ctx.cr6.eq) goto loc_821D9464;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821D9464:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821D946C;
	sub_82081C00(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r23,r9,9000
	ctx.r23.s64 = ctx.r9.s64 + 9000;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,9000(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9000, ctx.r11.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// bl 0x821e8508
	ctx.lr = 0x821D948C;
	sub_821E8508(ctx, base);
	// lbz r8,44(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821D94A8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d94b4
	if (!ctx.cr6.eq) goto loc_821D94B4;
	// bl 0x821b3000
	ctx.lr = 0x821D94B4;
	sub_821B3000(ctx, base);
loc_821D94B4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d94c8
	if (ctx.cr6.eq) goto loc_821D94C8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821D94C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821D94D0;
	sub_82081C00(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r23,r9,9224
	ctx.r23.s64 = ctx.r9.s64 + 9224;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,9224(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9224, ctx.r11.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// bl 0x821f3cd0
	ctx.lr = 0x821D94F0;
	sub_821F3CD0(ctx, base);
	// lbz r8,44(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821D950C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d9518
	if (!ctx.cr6.eq) goto loc_821D9518;
	// bl 0x821b3000
	ctx.lr = 0x821D9518;
	sub_821B3000(ctx, base);
loc_821D9518:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d952c
	if (ctx.cr6.eq) goto loc_821D952C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821D952C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821D9534;
	sub_82081C00(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r11,96
	ctx.r11.s64 = 96;
	// addi r23,r9,9168
	ctx.r23.s64 = ctx.r9.s64 + 9168;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,96
	ctx.r3.s64 = 96;
	// stw r11,9168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9168, ctx.r11.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// bl 0x821f1548
	ctx.lr = 0x821D9554;
	sub_821F1548(ctx, base);
	// lbz r8,44(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821D9570;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d957c
	if (!ctx.cr6.eq) goto loc_821D957C;
	// bl 0x821b3000
	ctx.lr = 0x821D957C;
	sub_821B3000(ctx, base);
loc_821D957C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9590
	if (ctx.cr6.eq) goto loc_821D9590;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821D9590:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821D9598;
	sub_82081C00(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r11,96
	ctx.r11.s64 = 96;
	// addi r23,r9,9336
	ctx.r23.s64 = ctx.r9.s64 + 9336;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,96
	ctx.r3.s64 = 96;
	// stw r11,9336(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9336, ctx.r11.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// bl 0x82201550
	ctx.lr = 0x821D95B8;
	sub_82201550(ctx, base);
	// lbz r8,44(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821D95D4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d95e0
	if (!ctx.cr6.eq) goto loc_821D95E0;
	// bl 0x821b3000
	ctx.lr = 0x821D95E0;
	sub_821B3000(ctx, base);
loc_821D95E0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d95f4
	if (ctx.cr6.eq) goto loc_821D95F4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821D95F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821D95FC;
	sub_82081C00(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r23,r9,9056
	ctx.r23.s64 = ctx.r9.s64 + 9056;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,9056(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9056, ctx.r11.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// bl 0x821e99a8
	ctx.lr = 0x821D961C;
	sub_821E99A8(ctx, base);
	// lbz r8,44(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821D9638;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d9644
	if (!ctx.cr6.eq) goto loc_821D9644;
	// bl 0x821b3000
	ctx.lr = 0x821D9644;
	sub_821B3000(ctx, base);
loc_821D9644:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9658
	if (ctx.cr6.eq) goto loc_821D9658;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821D9658:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821D9660;
	sub_82081C00(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r23,r9,9112
	ctx.r23.s64 = ctx.r9.s64 + 9112;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r11,9112(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9112, ctx.r11.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// bl 0x821ee268
	ctx.lr = 0x821D9680;
	sub_821EE268(ctx, base);
	// lbz r8,44(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821D969C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d96a8
	if (!ctx.cr6.eq) goto loc_821D96A8;
	// bl 0x821b3000
	ctx.lr = 0x821D96A8;
	sub_821B3000(ctx, base);
loc_821D96A8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d96bc
	if (ctx.cr6.eq) goto loc_821D96BC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821D96BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821D96C4;
	sub_82081C00(ctx, base);
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r23,r9,5044
	ctx.r23.s64 = ctx.r9.s64 + 5044;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,5044(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5044, ctx.r11.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// bl 0x822135b0
	ctx.lr = 0x821D96E0;
	sub_822135B0(ctx, base);
	// lbz r8,44(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821D96FC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d9708
	if (!ctx.cr6.eq) goto loc_821D9708;
	// bl 0x821b3000
	ctx.lr = 0x821D9708;
	sub_821B3000(ctx, base);
loc_821D9708:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d971c
	if (ctx.cr6.eq) goto loc_821D971C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821D971C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821D9724;
	sub_82081C00(ctx, base);
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r23,r9,5212
	ctx.r23.s64 = ctx.r9.s64 + 5212;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r11,5212(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5212, ctx.r11.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// bl 0x8221eaa8
	ctx.lr = 0x821D9744;
	sub_8221EAA8(ctx, base);
	// lbz r8,44(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821D9760;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d976c
	if (!ctx.cr6.eq) goto loc_821D976C;
	// bl 0x821b3000
	ctx.lr = 0x821D976C;
	sub_821B3000(ctx, base);
loc_821D976C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9780
	if (ctx.cr6.eq) goto loc_821D9780;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821D9780:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821D9788;
	sub_82081C00(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r23,r9,9392
	ctx.r23.s64 = ctx.r9.s64 + 9392;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,9392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9392, ctx.r11.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// bl 0x82202840
	ctx.lr = 0x821D97A4;
	sub_82202840(ctx, base);
	// lbz r8,44(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821D97C0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d97cc
	if (!ctx.cr6.eq) goto loc_821D97CC;
	// bl 0x821b3000
	ctx.lr = 0x821D97CC;
	sub_821B3000(ctx, base);
loc_821D97CC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d97e0
	if (ctx.cr6.eq) goto loc_821D97E0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821D97E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82082030
	ctx.lr = 0x821D97F4;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d9804
	if (ctx.cr6.eq) goto loc_821D9804;
	// bl 0x821e1df0
	ctx.lr = 0x821D9800;
	sub_821E1DF0(ctx, base);
	// b 0x821d9808
	goto loc_821D9808;
loc_821D9804:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821D9808:
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82082030
	ctx.lr = 0x821D9820;
	sub_82082030(ctx, base);
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82082030
	ctx.lr = 0x821D9838;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d9848
	if (ctx.cr6.eq) goto loc_821D9848;
	// bl 0x8220b740
	ctx.lr = 0x821D9844;
	sub_8220B740(ctx, base);
	// b 0x821d984c
	goto loc_821D984C;
loc_821D9848:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821D984C:
	// li r11,6
	ctx.r11.s64 = 6;
	// lfs f0,800(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 800);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// lfs f12,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r11.u32);
	// stfs f0,1780(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1780, temp.u32);
	// stfs f13,668(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// stfs f12,684(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// stfs f31,664(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 664, temp.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821d989c
	if (ctx.cr6.eq) goto loc_821D989C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821d989c
	if (ctx.cr6.eq) goto loc_821D989C;
	// lwz r11,148(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// stw r9,148(r26)
	PPC_STORE_U32(ctx.r26.u32 + 148, ctx.r9.u32);
loc_821D989C:
	// stw r25,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r25.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9900
	if (ctx.cr6.eq) goto loc_821D9900;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,2383
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2383, ctx.xer);
	// blt cr6,0x821d98c0
	if (ctx.cr6.lt) goto loc_821D98C0;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_821D98C0:
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
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
	// bgt cr6,0x821d98f8
	if (ctx.cr6.gt) goto loc_821D98F8;
	// bge cr6,0x821d9900
	if (!ctx.cr6.lt) goto loc_821D9900;
	// lbz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9900
	if (ctx.cr6.eq) goto loc_821D9900;
loc_821D98F8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821dbdd8
	ctx.lr = 0x821D9900;
	sub_821DBDD8(ctx, base);
loc_821D9900:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,2383
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2383, ctx.xer);
	// blt cr6,0x821d9910
	if (ctx.cr6.lt) goto loc_821D9910;
	// stw r24,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r24.u32);
loc_821D9910:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233eaf0
	ctx.lr = 0x821D9924;
	sub_8233EAF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822026b0
	ctx.lr = 0x821D992C;
	sub_822026B0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822026b0
	ctx.lr = 0x821D9934;
	sub_822026B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D9944"))) PPC_WEAK_FUNC(sub_821D9944);
PPC_FUNC_IMPL(__imp__sub_821D9944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9948"))) PPC_WEAK_FUNC(sub_821D9948);
PPC_FUNC_IMPL(__imp__sub_821D9948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821D9950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r30,r11,4536
	ctx.r30.s64 = ctx.r11.s64 + 4536;
	// lwz r28,336(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821d9a00
	if (ctx.cr6.eq) goto loc_821D9A00;
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// li r29,3
	ctx.r29.s64 = 3;
loc_821D9970:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9988
	if (ctx.cr6.eq) goto loc_821D9988;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821D9988;
	sub_82080000(ctx, base);
loc_821D9988:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821d9970
	if (!ctx.cr0.eq) goto loc_821D9970;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d99b4
	if (ctx.cr6.eq) goto loc_821D99B4;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d99b4
	if (ctx.cr0.eq) goto loc_821D99B4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821D99B4;
	sub_82080000(ctx, base);
loc_821D99B4:
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d99f4
	if (ctx.cr6.eq) goto loc_821D99F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d99d8
	if (ctx.cr6.eq) goto loc_821D99D8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821D99D8;
	sub_82080000(ctx, base);
loc_821D99D8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d99e8
	if (ctx.cr6.eq) goto loc_821D99E8;
	// bl 0x821e4358
	ctx.lr = 0x821D99E8;
	sub_821E4358(ctx, base);
loc_821D99E8:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821D99F4;
	sub_82080000(ctx, base);
loc_821D99F4:
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// lwz r3,-8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821D9A00;
	sub_82080000(ctx, base);
loc_821D9A00:
	// lwz r31,344(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d9a34
	if (ctx.cr6.eq) goto loc_821D9A34;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9a28
	if (ctx.cr6.eq) goto loc_821D9A28;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x821D9A28;
	sub_82246E18(ctx, base);
loc_821D9A28:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821D9A34;
	sub_82080000(ctx, base);
loc_821D9A34:
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9a4c
	if (ctx.cr6.eq) goto loc_821D9A4C;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
loc_821D9A48:
	// bl 0x82080000
	ctx.lr = 0x821D9A4C;
	sub_82080000(ctx, base);
loc_821D9A4C:
	// lwz r31,1764(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1764);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d9a74
	if (ctx.cr6.eq) goto loc_821D9A74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1764(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1764, ctx.r11.u32);
	// bl 0x821e9a58
	ctx.lr = 0x821D9A68;
	sub_821E9A58(ctx, base);
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// b 0x821d9a48
	goto loc_821D9A48;
loc_821D9A74:
	// lwz r5,1768(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821d9a8c
	if (ctx.cr6.eq) goto loc_821D9A8C;
	// addi r4,r30,1768
	ctx.r4.s64 = ctx.r30.s64 + 1768;
	// addi r3,r30,1768
	ctx.r3.s64 = ctx.r30.s64 + 1768;
	// bl 0x821061a0
	ctx.lr = 0x821D9A8C;
	sub_821061A0(ctx, base);
loc_821D9A8C:
	// addi r3,r30,1736
	ctx.r3.s64 = ctx.r30.s64 + 1736;
	// bl 0x821dbc78
	ctx.lr = 0x821D9A94;
	sub_821DBC78(ctx, base);
	// addi r3,r30,1608
	ctx.r3.s64 = ctx.r30.s64 + 1608;
	// bl 0x82218450
	ctx.lr = 0x821D9A9C;
	sub_82218450(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-23316
	ctx.r11.s64 = ctx.r11.s64 + -23316;
	// addi r10,r10,-23256
	ctx.r10.s64 = ctx.r10.s64 + -23256;
	// stw r11,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r11.u32);
	// addi r3,r30,1176
	ctx.r3.s64 = ctx.r30.s64 + 1176;
	// stw r10,1176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1176, ctx.r10.u32);
	// bl 0x821cf860
	ctx.lr = 0x821D9ABC;
	sub_821CF860(ctx, base);
	// addi r3,r30,400
	ctx.r3.s64 = ctx.r30.s64 + 400;
	// bl 0x82215410
	ctx.lr = 0x821D9AC4;
	sub_82215410(ctx, base);
	// addi r3,r30,376
	ctx.r3.s64 = ctx.r30.s64 + 376;
	// bl 0x82218450
	ctx.lr = 0x821D9ACC;
	sub_82218450(ctx, base);
	// addi r3,r30,352
	ctx.r3.s64 = ctx.r30.s64 + 352;
	// bl 0x82218450
	ctx.lr = 0x821D9AD4;
	sub_82218450(ctx, base);
	// bl 0x821cfd90
	ctx.lr = 0x821D9AD8;
	sub_821CFD90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D9AE0"))) PPC_WEAK_FUNC(sub_821D9AE0);
PPC_FUNC_IMPL(__imp__sub_821D9AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821D9AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d9c2c
	if (!ctx.cr6.eq) goto loc_821D9C2C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r28,r11,4536
	ctx.r28.s64 = ctx.r11.s64 + 4536;
	// addi r3,r28,256
	ctx.r3.s64 = ctx.r28.s64 + 256;
	// bl 0x823052d8
	ctx.lr = 0x821D9B1C;
	sub_823052D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,184
	ctx.r3.s64 = ctx.r28.s64 + 184;
	// bl 0x82106098
	ctx.lr = 0x821D9B28;
	sub_82106098(ctx, base);
	// addi r3,r28,256
	ctx.r3.s64 = ctx.r28.s64 + 256;
	// bl 0x823051a8
	ctx.lr = 0x821D9B30;
	sub_823051A8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D9B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,148(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821d9b88
	if (!ctx.cr6.eq) goto loc_821D9B88;
	// lwz r11,-596(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -596);
	// addi r31,r29,-776
	ctx.r31.s64 = ctx.r29.s64 + -776;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9c2c
	if (ctx.cr6.eq) goto loc_821D9C2C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9b78
	if (ctx.cr6.eq) goto loc_821D9B78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219438
	ctx.lr = 0x821D9B78;
	sub_82219438(ctx, base);
loc_821D9B78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r28,400
	ctx.r4.s64 = ctx.r28.s64 + 400;
	// bl 0x82216fe0
	ctx.lr = 0x821D9B84;
	sub_82216FE0(ctx, base);
	// b 0x821d9bd0
	goto loc_821D9BD0;
loc_821D9B88:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9ba8
	if (ctx.cr6.eq) goto loc_821D9BA8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D9BA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D9BA8:
	// lwz r31,184(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d9bd0
	if (ctx.cr6.eq) goto loc_821D9BD0;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_821D9BBC:
	// addi r4,r28,400
	ctx.r4.s64 = ctx.r28.s64 + 400;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82216fe0
	ctx.lr = 0x821D9BC8;
	sub_82216FE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821d9bbc
	if (!ctx.cr0.eq) goto loc_821D9BBC;
loc_821D9BD0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D9BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r31,336(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e20e8
	ctx.lr = 0x821D9C04;
	sub_821E20E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821d9c1c
	if (!ctx.cr6.eq) goto loc_821D9C1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821D9C1C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_821D9C2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D9C34"))) PPC_WEAK_FUNC(sub_821D9C34);
PPC_FUNC_IMPL(__imp__sub_821D9C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9C38"))) PPC_WEAK_FUNC(sub_821D9C38);
PPC_FUNC_IMPL(__imp__sub_821D9C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821D9C40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d9d10
	if (ctx.cr6.eq) goto loc_821D9D10;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821cf958
	ctx.lr = 0x821D9C60;
	sub_821CF958(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D9C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d9c8c
	if (!ctx.cr6.eq) goto loc_821D9C8C;
	// addi r3,r30,-776
	ctx.r3.s64 = ctx.r30.s64 + -776;
	// bl 0x82217188
	ctx.lr = 0x821D9C88;
	sub_82217188(ctx, base);
	// b 0x821d9cb8
	goto loc_821D9CB8;
loc_821D9C8C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821d9cb8
	if (!ctx.cr6.eq) goto loc_821D9CB8;
	// lwz r31,184(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d9cb8
	if (ctx.cr6.eq) goto loc_821D9CB8;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_821D9CA8:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82217188
	ctx.lr = 0x821D9CB0;
	sub_82217188(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821d9ca8
	if (!ctx.cr0.eq) goto loc_821D9CA8;
loc_821D9CB8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r11,4536
	ctx.r31.s64 = ctx.r11.s64 + 4536;
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// bl 0x821e22a8
	ctx.lr = 0x821D9CCC;
	sub_821E22A8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x823052d8
	ctx.lr = 0x821D9CDC;
	sub_823052D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x822184b8
	ctx.lr = 0x821D9CE8;
	sub_822184B8(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x823051a8
	ctx.lr = 0x821D9CF0;
	sub_823051A8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D9D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D9D10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D9D18"))) PPC_WEAK_FUNC(sub_821D9D18);
PPC_FUNC_IMPL(__imp__sub_821D9D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821D9D20;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r10,-24688
	ctx.r9.s64 = ctx.r10.s64 + -24688;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r7,4536
	ctx.r10.s64 = ctx.r7.s64 + 4536;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r3,r10,1768
	ctx.r3.s64 = ctx.r10.s64 + 1768;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fadds f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// bl 0x820cbe70
	ctx.lr = 0x821D9DEC;
	sub_820CBE70(ctx, base);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D9E0C"))) PPC_WEAK_FUNC(sub_821D9E0C);
PPC_FUNC_IMPL(__imp__sub_821D9E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9E10"))) PPC_WEAK_FUNC(sub_821D9E10);
PPC_FUNC_IMPL(__imp__sub_821D9E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821D9E18;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r31,r11,4536
	ctx.r31.s64 = ctx.r11.s64 + 4536;
	// lwz r11,1804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d9fb0
	if (!ctx.cr6.eq) goto loc_821D9FB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d1388
	ctx.lr = 0x821D9E44;
	sub_821D1388(ctx, base);
	// addi r3,r31,1652
	ctx.r3.s64 = ctx.r31.s64 + 1652;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221f660
	ctx.lr = 0x821D9E50;
	sub_8221F660(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f1,1780(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,1804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// addi r29,r11,22200
	ctx.r29.s64 = ctx.r11.s64 + 22200;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r10.u32);
	// lfs f0,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f0,1800(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1800);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,1800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1800, temp.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// fdivs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821d9ea0
	if (!ctx.cr6.lt) goto loc_821D9EA0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821D9EA0:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r11.u32);
	// stw r9,26212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26212, ctx.r9.u32);
	// ble cr6,0x821d9eec
	if (!ctx.cr6.gt) goto loc_821D9EEC;
loc_821D9EB8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821d9eec
	if (!ctx.cr6.gt) goto loc_821D9EEC;
	// bl 0x821cfe58
	ctx.lr = 0x821D9EC4;
	sub_821CFE58(ctx, base);
	// lfs f0,1800(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1800);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,1780(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1792);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,1800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1800, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r11,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r11.u32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x821d9eb8
	if (ctx.cr6.gt) goto loc_821D9EB8;
loc_821D9EEC:
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// bl 0x821cffc0
	ctx.lr = 0x821D9EF8;
	sub_821CFFC0(ctx, base);
	// lwz r11,1804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d9f14
	if (!ctx.cr6.eq) goto loc_821D9F14;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821d0068
	ctx.lr = 0x821D9F10;
	sub_821D0068(ctx, base);
	// lwz r11,1804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
loc_821D9F14:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821d20b8
	ctx.lr = 0x821D9F28;
	sub_821D20B8(ctx, base);
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// li r25,100
	ctx.r25.s64 = 100;
	// lwz r26,984(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 984);
loc_821D9F34:
	// lwz r27,1628(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d9f90
	if (ctx.cr6.eq) goto loc_821D9F90;
loc_821D9F4C:
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r30,284(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,150
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 150, ctx.xer);
	// ble cr6,0x821d9f7c
	if (!ctx.cr6.gt) goto loc_821D9F7C;
	// bl 0x82202728
	ctx.lr = 0x821D9F64;
	sub_82202728(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821d9f74
	if (!ctx.cr6.eq) goto loc_821D9F74;
	// stwx r30,r28,r27
	PPC_STORE_U32(ctx.r28.u32 + ctx.r27.u32, ctx.r30.u32);
	// b 0x821d9f80
	goto loc_821D9F80;
loc_821D9F74:
	// stw r30,284(r29)
	PPC_STORE_U32(ctx.r29.u32 + 284, ctx.r30.u32);
	// b 0x821d9f80
	goto loc_821D9F80;
loc_821D9F7C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821D9F80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821d9f4c
	if (!ctx.cr6.eq) goto loc_821D9F4C;
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
loc_821D9F90:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// cmplwi cr6,r11,2383
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2383, ctx.xer);
	// blt cr6,0x821d9fa8
	if (ctx.cr6.lt) goto loc_821D9FA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
loc_821D9FA8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x821d9f34
	if (!ctx.cr0.eq) goto loc_821D9F34;
loc_821D9FB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D9FBC"))) PPC_WEAK_FUNC(sub_821D9FBC);
PPC_FUNC_IMPL(__imp__sub_821D9FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9FC0"))) PPC_WEAK_FUNC(sub_821D9FC0);
PPC_FUNC_IMPL(__imp__sub_821D9FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821D9FC8;
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r10,4536
	ctx.r31.s64 = ctx.r10.s64 + 4536;
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r11,1804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// lfs f0,800(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 800);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// lfs f13,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x821d1f30
	ctx.lr = 0x821DA00C;
	sub_821D1F30(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r30,r30,-776
	ctx.r30.s64 = ctx.r30.s64 + -776;
	// lfs f31,1780(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x821da020
	if (!ctx.cr6.eq) goto loc_821DA020;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821DA020:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x821d2430
	ctx.lr = 0x821DA034;
	sub_821D2430(ctx, base);
	// lwz r10,304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r9.u32);
	// bl 0x821d01c8
	ctx.lr = 0x821DA048;
	sub_821D01C8(ctx, base);
	// bl 0x821d0658
	ctx.lr = 0x821DA04C;
	sub_821D0658(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// bl 0x821d8930
	ctx.lr = 0x821DA058;
	sub_821D8930(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821d09b8
	ctx.lr = 0x821DA064;
	sub_821D09B8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821d0d70
	ctx.lr = 0x821DA06C;
	sub_821D0D70(ctx, base);
	// lfs f1,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x821cffc0
	ctx.lr = 0x821DA078;
	sub_821CFFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821d20b8
	ctx.lr = 0x821DA084;
	sub_821D20B8(ctx, base);
	// lwz r11,1804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821DA0A0"))) PPC_WEAK_FUNC(sub_821DA0A0);
PPC_FUNC_IMPL(__imp__sub_821DA0A0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bgt cr6,0x821da5ec
	if (ctx.cr6.gt) goto loc_821DA5EC;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24352
	ctx.r12.s64 = ctx.r12.s64 + -24352;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_821DA10C;
	case 1:
		goto loc_821DA2B0;
	case 2:
		goto loc_821DA36C;
	case 3:
		goto loc_821DA444;
	case 4:
		goto loc_821DA2D4;
	case 5:
		goto loc_821DA3C0;
	case 6:
		goto loc_821DA4E4;
	case 7:
		goto loc_821DA52C;
	case 8:
		goto loc_821DA1B8;
	case 9:
		goto loc_821DA56C;
	case 10:
		goto loc_821DA220;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-24308(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24308);
	// lwz r16,-23888(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23888);
	// lwz r16,-23700(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23700);
	// lwz r16,-23484(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23484);
	// lwz r16,-23852(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23852);
	// lwz r16,-23616(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23616);
	// lwz r16,-23324(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23324);
	// lwz r16,-23252(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23252);
	// lwz r16,-24136(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24136);
	// lwz r16,-23188(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23188);
	// lwz r16,-24032(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24032);
loc_821DA10C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82082030
	ctx.lr = 0x821DA120;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821da5e8
	if (ctx.cr6.eq) goto loc_821DA5E8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821db660
	ctx.lr = 0x821DA138;
	sub_821DB660(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lis r8,20031
	ctx.r8.s64 = 1312751616;
	// addi r7,r10,-24628
	ctx.r7.s64 = ctx.r10.s64 + -24628;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r6,r8,2
	ctx.r6.u64 = ctx.r8.u64 | 2;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DA1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821da5ec
	goto loc_821DA5EC;
loc_821DA1B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82082030
	ctx.lr = 0x821DA1CC;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821da5e8
	if (ctx.cr6.eq) goto loc_821DA5E8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x821db660
	ctx.lr = 0x821DA1E4;
	sub_821DB660(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// addi r8,r10,-24340
	ctx.r8.s64 = ctx.r10.s64 + -24340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// b 0x821da5ec
	goto loc_821DA5EC;
loc_821DA220:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82082030
	ctx.lr = 0x821DA234;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821da5e8
	if (ctx.cr6.eq) goto loc_821DA5E8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821db660
	ctx.lr = 0x821DA24C;
	sub_821DB660(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// lis r8,20031
	ctx.r8.s64 = 1312751616;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r10,-24304
	ctx.r7.s64 = ctx.r10.s64 + -24304;
	// ori r6,r8,19
	ctx.r6.u64 = ctx.r8.u64 | 19;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lfs f0,60(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DA2A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821da5ec
	goto loc_821DA5EC;
loc_821DA2B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82082030
	ctx.lr = 0x821DA2C4;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821da5e8
	if (ctx.cr6.eq) goto loc_821DA5E8;
	// bl 0x821db168
	ctx.lr = 0x821DA2D0;
	sub_821DB168(ctx, base);
	// b 0x821da5ec
	goto loc_821DA5EC;
loc_821DA2D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82082030
	ctx.lr = 0x821DA2E8;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821da5e8
	if (ctx.cr6.eq) goto loc_821DA5E8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821db660
	ctx.lr = 0x821DA300;
	sub_821DB660(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// addi r8,r10,-24448
	ctx.r8.s64 = ctx.r10.s64 + -24448;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// b 0x821da5ec
	goto loc_821DA5EC;
loc_821DA36C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82082030
	ctx.lr = 0x821DA380;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821da5e8
	if (ctx.cr6.eq) goto loc_821DA5E8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821db660
	ctx.lr = 0x821DA398;
	sub_821DB660(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// addi r8,r10,-24484
	ctx.r8.s64 = ctx.r10.s64 + -24484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x821da5ec
	goto loc_821DA5EC;
loc_821DA3C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,216
	ctx.r3.s64 = 216;
	// bl 0x82082030
	ctx.lr = 0x821DA3D4;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821da5e8
	if (ctx.cr6.eq) goto loc_821DA5E8;
	// lis r5,28672
	ctx.r5.s64 = 1879048192;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821db660
	ctx.lr = 0x821DA3EC;
	sub_821DB660(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r8,r10,-24520
	ctx.r8.s64 = ctx.r10.s64 + -24520;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// lfs f13,116(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// b 0x821da5ec
	goto loc_821DA5EC;
loc_821DA444:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82082030
	ctx.lr = 0x821DA458;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821da5e8
	if (ctx.cr6.eq) goto loc_821DA5E8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821db660
	ctx.lr = 0x821DA470;
	sub_821DB660(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// addi r8,r10,-24556
	ctx.r8.s64 = ctx.r10.s64 + -24556;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// b 0x821da5ec
	goto loc_821DA5EC;
loc_821DA4E4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82082030
	ctx.lr = 0x821DA4F8;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821da5e8
	if (ctx.cr6.eq) goto loc_821DA5E8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821db660
	ctx.lr = 0x821DA510;
	sub_821DB660(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,-24412
	ctx.r9.s64 = ctx.r11.s64 + -24412;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x821da5ec
	goto loc_821DA5EC;
loc_821DA52C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82082030
	ctx.lr = 0x821DA540;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821da5e8
	if (ctx.cr6.eq) goto loc_821DA5E8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x821db660
	ctx.lr = 0x821DA558;
	sub_821DB660(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-24376
	ctx.r10.s64 = ctx.r11.s64 + -24376;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x821da5ec
	goto loc_821DA5EC;
loc_821DA56C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82082030
	ctx.lr = 0x821DA580;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821da5e8
	if (ctx.cr6.eq) goto loc_821DA5E8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821db660
	ctx.lr = 0x821DA598;
	sub_821DB660(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,20031
	ctx.r10.s64 = 1312751616;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r9,r11,-24592
	ctx.r9.s64 = ctx.r11.s64 + -24592;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// ori r8,r10,16
	ctx.r8.u64 = ctx.r10.u64 | 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821DA5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821da5ec
	goto loc_821DA5EC;
loc_821DA5E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821DA5EC:
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

__attribute__((alias("__imp__sub_821DA604"))) PPC_WEAK_FUNC(sub_821DA604);
PPC_FUNC_IMPL(__imp__sub_821DA604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DA608"))) PPC_WEAK_FUNC(sub_821DA608);
PPC_FUNC_IMPL(__imp__sub_821DA608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// lfs f13,428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x821da684
	if (!ctx.cr6.gt) goto loc_821DA684;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f8,f10,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// stfs f4,8(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fneg f2,f5
	ctx.f2.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f2,4(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// stfs f3,0(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_821DA684:
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f8,f10,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// fmuls f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f4,4(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fneg f2,f5
	ctx.f2.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f2,0(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f3,8(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DA6E0"))) PPC_WEAK_FUNC(sub_821DA6E0);
PPC_FUNC_IMPL(__imp__sub_821DA6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821DA6E8;
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
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821da724
	if (!ctx.cr6.eq) goto loc_821DA724;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_821DA724:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821da838
	if (ctx.cr6.eq) goto loc_821DA838;
	// lfs f12,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// lfs f0,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f13,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lfs f12,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f9,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
loc_821DA760:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f8,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fadds f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lfs f4,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// fadds f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fadds f4,f1,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f2,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fadds f7,f7,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fadds f1,f1,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f31,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f2,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fadds f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f31.f64));
	// lfs f30,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// fsubs f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fadds f31,f30,f31
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fsubs f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f5,f5,f7
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fsubs f8,f3,f2
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fabs f6,f6
	ctx.f6.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fsubs f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fabs f4,f4
	ctx.f4.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fabs f5,f5
	ctx.f5.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fabs f3,f1
	ctx.f3.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fabs f2,f8
	ctx.f2.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f1,f7
	ctx.f1.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fadds f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f7,f3,f4
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fadds f6,f8,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fadds f5,f7,f1
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// fcmpu cr6,f6,f5
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// blt cr6,0x821da824
	if (ctx.cr6.lt) goto loc_821DA824;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821DA824:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821da760
	if (!ctx.cr6.eq) goto loc_821DA760;
loc_821DA838:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8230a138
	ctx.lr = 0x821DA844;
	sub_8230A138(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// bl 0x82106200
	ctx.lr = 0x821DA864;
	sub_82106200(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821da94c
	if (ctx.cr6.eq) goto loc_821DA94C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r29
	PPC_STORE_U32(ctx.r5.u32 + ctx.r29.u32, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_821DA8A0:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821da908
	if (ctx.cr6.gt) goto loc_821DA908;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821da908
	if (ctx.cr6.gt) goto loc_821DA908;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821da908
	if (ctx.cr6.gt) goto loc_821DA908;
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821da908
	if (ctx.cr6.lt) goto loc_821DA908;
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821da908
	if (ctx.cr6.lt) goto loc_821DA908;
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821da90c
	if (!ctx.cr6.lt) goto loc_821DA90C;
loc_821DA908:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821DA90C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821da960
	if (!ctx.cr6.eq) goto loc_821DA960;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// bl 0x82106200
	ctx.lr = 0x821DA92C;
	sub_82106200(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821da8a0
	if (!ctx.cr6.eq) goto loc_821DA8A0;
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
loc_821DA94C:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_821DA960:
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

__attribute__((alias("__imp__sub_821DA970"))) PPC_WEAK_FUNC(sub_821DA970);
PPC_FUNC_IMPL(__imp__sub_821DA970) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-24592
	ctx.r9.s64 = ctx.r10.s64 + -24592;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821da9b0
	if (ctx.cr6.eq) goto loc_821DA9B0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821DA9B0;
	sub_82080000(ctx, base);
loc_821DA9B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209708
	ctx.lr = 0x821DA9B8;
	sub_82209708(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821da9d0
	if (ctx.cr6.eq) goto loc_821DA9D0;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821DA9D0;
	sub_82080000(ctx, base);
loc_821DA9D0:
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

__attribute__((alias("__imp__sub_821DA9EC"))) PPC_WEAK_FUNC(sub_821DA9EC);
PPC_FUNC_IMPL(__imp__sub_821DA9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DA9F0"))) PPC_WEAK_FUNC(sub_821DA9F0);
PPC_FUNC_IMPL(__imp__sub_821DA9F0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821daa48
	if (!ctx.cr6.eq) goto loc_821DAA48;
	// lis r10,20031
	ctx.r10.s64 = 1312751616;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,16
	ctx.r8.u64 = ctx.r10.u64 | 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r6,20(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821DAA38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821DAA48:
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x8220b2a0
	ctx.lr = 0x821DAA54;
	sub_8220B2A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAA64"))) PPC_WEAK_FUNC(sub_821DAA64);
PPC_FUNC_IMPL(__imp__sub_821DAA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAA68"))) PPC_WEAK_FUNC(sub_821DAA68);
PPC_FUNC_IMPL(__imp__sub_821DAA68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAA6C"))) PPC_WEAK_FUNC(sub_821DAA6C);
PPC_FUNC_IMPL(__imp__sub_821DAA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAA70"))) PPC_WEAK_FUNC(sub_821DAA70);
PPC_FUNC_IMPL(__imp__sub_821DAA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821daaa8
	if (ctx.cr6.eq) goto loc_821DAAA8;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// bl 0x82215d10
	ctx.lr = 0x821DAA98;
	sub_82215D10(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821DAAA8:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r8,20031
	ctx.r8.s64 = 1312751616;
	// addi r7,r10,31376
	ctx.r7.s64 = ctx.r10.s64 + 31376;
	// ori r6,r8,18
	ctx.r6.u64 = ctx.r8.u64 | 18;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lfs f13,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bctrl 
	ctx.lr = 0x821DAB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAB44"))) PPC_WEAK_FUNC(sub_821DAB44);
PPC_FUNC_IMPL(__imp__sub_821DAB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAB48"))) PPC_WEAK_FUNC(sub_821DAB48);
PPC_FUNC_IMPL(__imp__sub_821DAB48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAB54"))) PPC_WEAK_FUNC(sub_821DAB54);
PPC_FUNC_IMPL(__imp__sub_821DAB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAB58"))) PPC_WEAK_FUNC(sub_821DAB58);
PPC_FUNC_IMPL(__imp__sub_821DAB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821dacb8
	if (ctx.cr6.eq) goto loc_821DACB8;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// bne cr6,0x821dac20
	if (!ctx.cr6.eq) goto loc_821DAC20;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// lwz r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// lwz r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r5,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r5.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// lwz r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// lwz r7,52(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// lwz r6,56(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// lwz r5,72(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lwz r9,60(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// lwz r8,64(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r8,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// lwz r7,68(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r7,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821DAC20:
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r6,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// lwz r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// lwz r6,48(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// lwz r5,52(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// lwz r4,56(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f13,96(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821DACB8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,20031
	ctx.r9.s64 = 1312751616;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// ori r7,r9,18
	ctx.r7.u64 = ctx.r9.u64 | 18;
	// li r6,84
	ctx.r6.s64 = 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lfs f13,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bctrl 
	ctx.lr = 0x821DAD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAD50"))) PPC_WEAK_FUNC(sub_821DAD50);
PPC_FUNC_IMPL(__imp__sub_821DAD50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r8,76(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r8,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// lwz r7,80(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r7,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r7.u32);
	// lwz r6,84(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r6,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r6.u32);
	// lwz r5,88(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r5,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r5.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r9,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r9.u32);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r8,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r8.u32);
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r7,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r7.u32);
	// lwz r6,64(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r6,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r6.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r5,92(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// stw r5,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r5.u32);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r11,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r11.u32);
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// stw r10,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r10.u32);
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r9,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r9.u32);
	// lwz r8,108(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stw r8,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r8.u32);
	// lwz r7,112(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r7,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DADF8"))) PPC_WEAK_FUNC(sub_821DADF8);
PPC_FUNC_IMPL(__imp__sub_821DADF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAE14"))) PPC_WEAK_FUNC(sub_821DAE14);
PPC_FUNC_IMPL(__imp__sub_821DAE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAE18"))) PPC_WEAK_FUNC(sub_821DAE18);
PPC_FUNC_IMPL(__imp__sub_821DAE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821dae54
	if (ctx.cr6.eq) goto loc_821DAE54;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
loc_821DAE54:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lfs f0,116(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAE78"))) PPC_WEAK_FUNC(sub_821DAE78);
PPC_FUNC_IMPL(__imp__sub_821DAE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAE8C"))) PPC_WEAK_FUNC(sub_821DAE8C);
PPC_FUNC_IMPL(__imp__sub_821DAE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAE90"))) PPC_WEAK_FUNC(sub_821DAE90);
PPC_FUNC_IMPL(__imp__sub_821DAE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821daeac
	if (ctx.cr6.eq) goto loc_821DAEAC;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
loc_821DAEAC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAEC8"))) PPC_WEAK_FUNC(sub_821DAEC8);
PPC_FUNC_IMPL(__imp__sub_821DAEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r8,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// lwz r7,80(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r7,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r7.u32);
	// lwz r6,68(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r6,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r6.u32);
	// lwz r5,72(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r5,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r5.u32);
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r3,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAF1C"))) PPC_WEAK_FUNC(sub_821DAF1C);
PPC_FUNC_IMPL(__imp__sub_821DAF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAF20"))) PPC_WEAK_FUNC(sub_821DAF20);
PPC_FUNC_IMPL(__imp__sub_821DAF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821daf4c
	if (ctx.cr6.eq) goto loc_821DAF4C;
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// blr 
	return;
loc_821DAF4C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAF8C"))) PPC_WEAK_FUNC(sub_821DAF8C);
PPC_FUNC_IMPL(__imp__sub_821DAF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAF90"))) PPC_WEAK_FUNC(sub_821DAF90);
PPC_FUNC_IMPL(__imp__sub_821DAF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r8,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r8.u32);
	// lwz r7,56(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r7,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r7.u32);
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f12,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f11,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f10,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,40(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f9,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,44(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f8,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,48(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f7,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,52(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f6,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,56(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f5,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,60(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f4,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,64(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DB024"))) PPC_WEAK_FUNC(sub_821DB024);
PPC_FUNC_IMPL(__imp__sub_821DB024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB028"))) PPC_WEAK_FUNC(sub_821DB028);
PPC_FUNC_IMPL(__imp__sub_821DB028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821db0c4
	if (ctx.cr6.eq) goto loc_821DB0C4;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f11,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,76(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f9,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,80(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f8,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,84(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f7,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,104(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f6,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,108(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f5,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,112(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f4,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,116(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821DB0C4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,20031
	ctx.r9.s64 = 1312751616;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r7,r9,5
	ctx.r7.u64 = ctx.r9.u64 | 5;
	// li r6,68
	ctx.r6.s64 = 68;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f0,96(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f13,56(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f12,104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lfs f11,112(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lfs f10,100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f9,108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f8,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bctrl 
	ctx.lr = 0x821DB154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DB164"))) PPC_WEAK_FUNC(sub_821DB164);
PPC_FUNC_IMPL(__imp__sub_821DB164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB168"))) PPC_WEAK_FUNC(sub_821DB168);
PPC_FUNC_IMPL(__imp__sub_821DB168) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,20480
	ctx.r5.s64 = 1342177280;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821db660
	ctx.lr = 0x821DB190;
	sub_821DB660(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lis r8,20031
	ctx.r8.s64 = 1312751616;
	// addi r7,r10,-24664
	ctx.r7.s64 = ctx.r10.s64 + -24664;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r6,r8,5
	ctx.r6.u64 = ctx.r8.u64 | 5;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// lfs f0,96(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lfs f13,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f30,112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	ctx.f30.f64 = double(temp.f32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lfs f11,100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f10,108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f9,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f31,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stfs f31,140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f9,140(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DB234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r10,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r10.u8);
	// stfs f30,100(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DB26C"))) PPC_WEAK_FUNC(sub_821DB26C);
PPC_FUNC_IMPL(__imp__sub_821DB26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB270"))) PPC_WEAK_FUNC(sub_821DB270);
PPC_FUNC_IMPL(__imp__sub_821DB270) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-24304
	ctx.r9.s64 = ctx.r10.s64 + -24304;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821db2b0
	if (ctx.cr6.eq) goto loc_821DB2B0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821DB2B0;
	sub_82080000(ctx, base);
loc_821DB2B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209708
	ctx.lr = 0x821DB2B8;
	sub_82209708(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821db2d0
	if (ctx.cr6.eq) goto loc_821DB2D0;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821DB2D0;
	sub_82080000(ctx, base);
loc_821DB2D0:
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

__attribute__((alias("__imp__sub_821DB2EC"))) PPC_WEAK_FUNC(sub_821DB2EC);
PPC_FUNC_IMPL(__imp__sub_821DB2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB2F0"))) PPC_WEAK_FUNC(sub_821DB2F0);
PPC_FUNC_IMPL(__imp__sub_821DB2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DB304"))) PPC_WEAK_FUNC(sub_821DB304);
PPC_FUNC_IMPL(__imp__sub_821DB304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB308"))) PPC_WEAK_FUNC(sub_821DB308);
PPC_FUNC_IMPL(__imp__sub_821DB308) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821db36c
	if (!ctx.cr6.eq) goto loc_821DB36C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,20031
	ctx.r9.s64 = 1312751616;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// ori r7,r9,19
	ctx.r7.u64 = ctx.r9.u64 | 19;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,60(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DB35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821DB36C:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DB38C"))) PPC_WEAK_FUNC(sub_821DB38C);
PPC_FUNC_IMPL(__imp__sub_821DB38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB390"))) PPC_WEAK_FUNC(sub_821DB390);
PPC_FUNC_IMPL(__imp__sub_821DB390) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821db400
	if (!ctx.cr6.eq) goto loc_821DB400;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,20031
	ctx.r9.s64 = 1312751616;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// ori r7,r9,14
	ctx.r7.u64 = ctx.r9.u64 | 14;
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bctrl 
	ctx.lr = 0x821DB3F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821DB400:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x821db454
	if (!ctx.cr6.eq) goto loc_821DB454;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821DB454:
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lfs f13,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r7,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f10,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f8,f0,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fsqrts f0,f8
	ctx.f0.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821db4f4
	if (!ctx.cr6.gt) goto loc_821DB4F4;
	// lfs f13,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
loc_821DB4F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DB504"))) PPC_WEAK_FUNC(sub_821DB504);
PPC_FUNC_IMPL(__imp__sub_821DB504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB508"))) PPC_WEAK_FUNC(sub_821DB508);
PPC_FUNC_IMPL(__imp__sub_821DB508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r8,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// lwz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r7,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r7.u32);
	// lwz r6,68(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r6,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DB548"))) PPC_WEAK_FUNC(sub_821DB548);
PPC_FUNC_IMPL(__imp__sub_821DB548) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-11768
	ctx.r31.s64 = ctx.r11.s64 + -11768;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823052d8
	ctx.lr = 0x821DB574;
	sub_823052D8(ctx, base);
	// lwz r11,16404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821db5a0
	if (!ctx.cr6.eq) goto loc_821DB5A0;
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
	ctx.lr = 0x821DB598;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821db644
	goto loc_821DB644;
loc_821DB5A0:
	// lwz r8,16408(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16408);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,2048
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2048, ctx.xer);
	// bge cr6,0x821db5d8
	if (!ctx.cr6.lt) goto loc_821DB5D8;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_821DB5BC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821db5d8
	if (ctx.cr6.eq) goto loc_821DB5D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// blt cr6,0x821db5bc
	if (ctx.cr6.lt) goto loc_821DB5BC;
loc_821DB5D8:
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bne cr6,0x821db60c
	if (!ctx.cr6.eq) goto loc_821DB60C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821db60c
	if (ctx.cr6.eq) goto loc_821DB60C;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
loc_821DB5F0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821db60c
	if (ctx.cr6.eq) goto loc_821DB60C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821db5f0
	if (ctx.cr6.lt) goto loc_821DB5F0;
loc_821DB60C:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// rlwinm r6,r11,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r11,16404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16404);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r11,16404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16404, ctx.r11.u32);
	// or r31,r5,r6
	ctx.r31.u64 = ctx.r5.u64 | ctx.r6.u64;
	// bl 0x823051a8
	ctx.lr = 0x821DB640;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821DB644:
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

__attribute__((alias("__imp__sub_821DB65C"))) PPC_WEAK_FUNC(sub_821DB65C);
PPC_FUNC_IMPL(__imp__sub_821DB65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB660"))) PPC_WEAK_FUNC(sub_821DB660);
PPC_FUNC_IMPL(__imp__sub_821DB660) {
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
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// addi r9,r10,-24724
	ctx.r9.s64 = ctx.r10.s64 + -24724;
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// bl 0x821db548
	ctx.lr = 0x821DB6B4;
	sub_821DB548(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_821DB6D0"))) PPC_WEAK_FUNC(sub_821DB6D0);
PPC_FUNC_IMPL(__imp__sub_821DB6D0) {
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
	// bl 0x82209708
	ctx.lr = 0x821DB6F0;
	sub_82209708(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821db710
	if (ctx.cr6.eq) goto loc_821DB710;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821db710
	if (ctx.cr6.eq) goto loc_821DB710;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821DB710;
	sub_82080000(ctx, base);
loc_821DB710:
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

__attribute__((alias("__imp__sub_821DB72C"))) PPC_WEAK_FUNC(sub_821DB72C);
PPC_FUNC_IMPL(__imp__sub_821DB72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB730"))) PPC_WEAK_FUNC(sub_821DB730);
PPC_FUNC_IMPL(__imp__sub_821DB730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r9,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r9.u32);
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r8,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r8.u32);
	// lwz r7,68(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r7,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r7.u32);
	// lwz r6,72(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r6,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r6.u32);
	// lwz r5,76(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r5,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r5.u32);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r3,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DB784"))) PPC_WEAK_FUNC(sub_821DB784);
PPC_FUNC_IMPL(__imp__sub_821DB784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB788"))) PPC_WEAK_FUNC(sub_821DB788);
PPC_FUNC_IMPL(__imp__sub_821DB788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// bne cr6,0x821db814
	if (!ctx.cr6.eq) goto loc_821DB814;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,20031
	ctx.r9.s64 = 1312751616;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// li r6,52
	ctx.r6.s64 = 52;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lfs f13,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bctrl 
	ctx.lr = 0x821DB804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821DB814:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// fdivs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lfs f10,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// lwz r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// lwz r5,36(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// lfs f8,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stfs f8,84(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f7,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f5,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f1,f1
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fsubs f0,f6,f7
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfs f11,92(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fsubs f7,f4,f5
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// stfs f9,96(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fmadds f6,f0,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f5,f7,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fsqrts f0,f5
	ctx.f0.f64 = double(float(sqrt(ctx.f5.f64)));
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x821db918
	if (!ctx.cr6.gt) goto loc_821DB918;
	// fdivs f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// stfs f10,92(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fsqrts f11,f13
	ctx.f11.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f9,48(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,88(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x821db92c
	goto loc_821DB92C;
loc_821DB918:
	// lfs f10,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f0,f11,f10,f0
	ctx.f0.f64 = double(float(-(ctx.f11.f64 * ctx.f10.f64 - ctx.f0.f64)));
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmadds f11,f13,f10,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f11,88(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
loc_821DB92C:
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821db950
	if (!ctx.cr6.gt) goto loc_821DB950;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
loc_821DB950:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DB960"))) PPC_WEAK_FUNC(sub_821DB960);
PPC_FUNC_IMPL(__imp__sub_821DB960) {
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
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x821db9f0
	if (!ctx.cr6.gt) goto loc_821DB9F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,36(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x821ea030
	ctx.lr = 0x821DB9B8;
	sub_821EA030(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821db9d0
	if (ctx.cr6.eq) goto loc_821DB9D0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_821DB9D0:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
loc_821DB9F0:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_821DBA08"))) PPC_WEAK_FUNC(sub_821DBA08);
PPC_FUNC_IMPL(__imp__sub_821DBA08) {
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
	// addi r9,r11,-24680
	ctx.r9.s64 = ctx.r11.s64 + -24680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821dba40
	if (ctx.cr6.eq) goto loc_821DBA40;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821DBA40;
	sub_82080000(ctx, base);
loc_821DBA40:
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

__attribute__((alias("__imp__sub_821DBA58"))) PPC_WEAK_FUNC(sub_821DBA58);
PPC_FUNC_IMPL(__imp__sub_821DBA58) {
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
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x821dbae8
	if (!ctx.cr6.gt) goto loc_821DBAE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,36(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x821e9dd8
	ctx.lr = 0x821DBAB0;
	sub_821E9DD8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dbac8
	if (ctx.cr6.eq) goto loc_821DBAC8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_821DBAC8:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
loc_821DBAE8:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_821DBB00"))) PPC_WEAK_FUNC(sub_821DBB00);
PPC_FUNC_IMPL(__imp__sub_821DBB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821DBB08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,780
	ctx.r11.s64 = 51118080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r11,12483
	ctx.r10.u64 = ctx.r11.u64 | 12483;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821dbb3c
	if (ctx.cr6.gt) goto loc_821DBB3C;
	// mulli r11,r4,84
	ctx.r11.s64 = ctx.r4.s64 * 84;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821dbb40
	if (!ctx.cr6.gt) goto loc_821DBB40;
loc_821DBB3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821DBB40:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821DBB50;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dbc04
	if (ctx.cr6.eq) goto loc_821DBC04;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r6,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r6.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt 0x821dbbfc
	if (ctx.cr0.lt) goto loc_821DBBFC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f11,424(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 424);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,420(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 420);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
loc_821DBB90:
	// li r8,9
	ctx.r8.s64 = 9;
	// stfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r31,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r31.u32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stfs f11,36(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_821DBBC4:
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821dbbc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DBBC4;
	// stfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
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
	// stbu r7,84(r11)
	ea = 84 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bge 0x821dbb90
	if (!ctx.cr0.lt) goto loc_821DBB90;
loc_821DBBFC:
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// b 0x821dbc08
	goto loc_821DBC08;
loc_821DBC04:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821DBC08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821dbc18
	if (!ctx.cr6.lt) goto loc_821DBC18;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821DBC18:
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821dbc34
	if (ctx.cr6.eq) goto loc_821DBC34;
	// mulli r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 * 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821DBC34;
	sub_8233E4E0(ctx, base);
loc_821DBC34:
	// lbz r11,17(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dbc60
	if (ctx.cr6.eq) goto loc_821DBC60;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dbc60
	if (ctx.cr6.eq) goto loc_821DBC60;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dbc60
	if (ctx.cr0.eq) goto loc_821DBC60;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821DBC60;
	sub_82080000(ctx, base);
loc_821DBC60:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stb r11,17(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DBC74"))) PPC_WEAK_FUNC(sub_821DBC74);
PPC_FUNC_IMPL(__imp__sub_821DBC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBC78"))) PPC_WEAK_FUNC(sub_821DBC78);
PPC_FUNC_IMPL(__imp__sub_821DBC78) {
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
	// beq cr6,0x821dbcc4
	if (ctx.cr6.eq) goto loc_821DBCC4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dbcc0
	if (ctx.cr6.eq) goto loc_821DBCC0;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dbcc0
	if (ctx.cr0.eq) goto loc_821DBCC0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821DBCC0;
	sub_82080000(ctx, base);
loc_821DBCC0:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_821DBCC4:
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

__attribute__((alias("__imp__sub_821DBCE4"))) PPC_WEAK_FUNC(sub_821DBCE4);
PPC_FUNC_IMPL(__imp__sub_821DBCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBCE8"))) PPC_WEAK_FUNC(sub_821DBCE8);
PPC_FUNC_IMPL(__imp__sub_821DBCE8) {
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
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfs f13,104(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lfs f12,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,420(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 420);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,424(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 424);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
loc_821DBD5C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821dbd5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DBD5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stb r30,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r30.u8);
	// stb r11,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r11.u8);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// bl 0x821dbb00
	ctx.lr = 0x821DBDB8;
	sub_821DBB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821DBDD8"))) PPC_WEAK_FUNC(sub_821DBDD8);
PPC_FUNC_IMPL(__imp__sub_821DBDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821DBDE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821dbe04
	if (!ctx.cr6.gt) goto loc_821DBE04;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821DBE04:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821DBE14;
	sub_82082030(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821dbe28
	if (!ctx.cr6.lt) goto loc_821DBE28;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821DBE28:
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821dbe44
	if (ctx.cr6.eq) goto loc_821DBE44;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821DBE44;
	sub_8233E4E0(ctx, base);
loc_821DBE44:
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dbe68
	if (ctx.cr6.eq) goto loc_821DBE68;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dbe68
	if (ctx.cr6.eq) goto loc_821DBE68;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821DBE68;
	sub_82080000(ctx, base);
loc_821DBE68:
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

__attribute__((alias("__imp__sub_821DBE7C"))) PPC_WEAK_FUNC(sub_821DBE7C);
PPC_FUNC_IMPL(__imp__sub_821DBE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBE80"))) PPC_WEAK_FUNC(sub_821DBE80);
PPC_FUNC_IMPL(__imp__sub_821DBE80) {
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
	// bl 0x821cf758
	ctx.lr = 0x821DBE98;
	sub_821CF758(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24264
	ctx.r9.s64 = ctx.r10.s64 + -24264;
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r8,r3,212
	ctx.r8.s64 = ctx.r3.s64 + 212;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r7,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r7.u32);
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// stb r11,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r11.u8);
	// stw r8,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// bl 0x82305000
	ctx.lr = 0x821DBF04;
	sub_82305000(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_821DBF24"))) PPC_WEAK_FUNC(sub_821DBF24);
PPC_FUNC_IMPL(__imp__sub_821DBF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBF28"))) PPC_WEAK_FUNC(sub_821DBF28);
PPC_FUNC_IMPL(__imp__sub_821DBF28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-24264
	ctx.r9.s64 = ctx.r10.s64 + -24264;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// lwz r8,200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821dbf68
	if (ctx.cr6.eq) goto loc_821DBF68;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x821DBF68;
	sub_82246E18(ctx, base);
loc_821DBF68:
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82218450
	ctx.lr = 0x821DBF70;
	sub_82218450(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cf860
	ctx.lr = 0x821DBF78;
	sub_821CF860(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dbf90
	if (ctx.cr6.eq) goto loc_821DBF90;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821DBF90;
	sub_82080000(ctx, base);
loc_821DBF90:
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

__attribute__((alias("__imp__sub_821DBFAC"))) PPC_WEAK_FUNC(sub_821DBFAC);
PPC_FUNC_IMPL(__imp__sub_821DBFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBFB0"))) PPC_WEAK_FUNC(sub_821DBFB0);
PPC_FUNC_IMPL(__imp__sub_821DBFB0) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// bl 0x821cf8e0
	ctx.lr = 0x821DBFC8;
	sub_821CF8E0(ctx, base);
	// lwz r6,184(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stw r6,184(r4)
	PPC_STORE_U32(ctx.r4.u32 + 184, ctx.r6.u32);
	// lwz r5,188(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// stw r5,188(r4)
	PPC_STORE_U32(ctx.r4.u32 + 188, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DBFE8"))) PPC_WEAK_FUNC(sub_821DBFE8);
PPC_FUNC_IMPL(__imp__sub_821DBFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x821DBFF0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r20,184(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r25,180(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// addi r9,r10,4536
	ctx.r9.s64 = ctx.r10.s64 + 4536;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// lwz r16,344(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 344);
	// bl 0x82388734
	ctx.lr = 0x821DC018;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821dc024
	if (!ctx.cr6.eq) goto loc_821DC024;
	// bl 0x821b3000
	ctx.lr = 0x821DC024;
	sub_821B3000(ctx, base);
loc_821DC024:
	// mullw r5,r20,r20
	ctx.r5.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r20.s32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r9,r5,15
	ctx.r9.s64 = ctx.r5.s64 + 15;
	// addi r27,r11,4492
	ctx.r27.s64 = ctx.r11.s64 + 4492;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r26,r9,0,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r17,r3,20
	ctx.r17.s64 = ctx.r3.s64 + 20;
	// add r8,r26,r11
	ctx.r8.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r24,-13569
	ctx.r24.s64 = -889257984;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821dc05c
	if (!ctx.cr6.gt) goto loc_821DC05C;
	// stw r27,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r27.u32);
loc_821DC05C:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r14,r11,r10
	ctx.r14.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r9.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x821DC07C;
	sub_8233EAF0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,156(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 156);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x821dc180
	if (!ctx.cr6.gt) goto loc_821DC180;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821DC090:
	// lwz r11,172(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 172);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lfs f0,360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821dc108
	if (ctx.cr6.gt) goto loc_821DC108;
	// lfs f0,372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821dc108
	if (ctx.cr6.lt) goto loc_821DC108;
	// lfs f0,364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821dc108
	if (ctx.cr6.gt) goto loc_821DC108;
	// lfs f0,376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821dc108
	if (ctx.cr6.lt) goto loc_821DC108;
	// lfs f0,368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 380);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821dc108
	if (ctx.cr6.gt) goto loc_821DC108;
	// lfs f0,380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821dc10c
	if (!ctx.cr6.lt) goto loc_821DC10C;
loc_821DC108:
	// li r9,0
	ctx.r9.s64 = 0;
loc_821DC10C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821dc140
	if (!ctx.cr6.eq) goto loc_821DC140;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r15,152
	ctx.r3.s64 = ctx.r15.s64 + 152;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// bl 0x822184b8
	ctx.lr = 0x821DC130;
	sub_822184B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8220b9c8
	ctx.lr = 0x821DC13C;
	sub_8220B9C8(ctx, base);
	// b 0x821dc170
	goto loc_821DC170;
loc_821DC140:
	// lhz r11,812(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 812);
	// lhz r10,812(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 812);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821dc15c
	if (ctx.cr6.lt) goto loc_821DC15C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bgt cr6,0x821dc160
	if (ctx.cr6.gt) goto loc_821DC160;
loc_821DC15C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821DC160:
	// mullw r9,r9,r20
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r20.s32);
	// add r10,r9,r14
	ctx.r10.u64 = ctx.r9.u64 + ctx.r14.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_821DC170:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821dc090
	if (ctx.cr6.lt) goto loc_821DC090;
loc_821DC180:
	// rlwinm r11,r20,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r8,r20,r11
	ctx.r8.u64 = ctx.r20.u64 + ctx.r11.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// rlwinm r18,r7,0,0,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// add r6,r18,r10
	ctx.r6.u64 = ctx.r18.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821dc1ac
	if (!ctx.cr6.gt) goto loc_821DC1AC;
	// stw r27,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r27.u32);
loc_821DC1AC:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// add r9,r18,r11
	ctx.r9.u64 = ctx.r18.u64 + ctx.r11.u64;
	// add r19,r11,r10
	ctx.r19.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r9.u32);
	// beq cr6,0x821dc338
	if (ctx.cr6.eq) goto loc_821DC338;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// addi r8,r25,-4
	ctx.r8.s64 = ctx.r25.s64 + -4;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
loc_821DC1D4:
	// li r9,6
	ctx.r9.s64 = 6;
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// addi r11,r11,356
	ctx.r11.s64 = ctx.r11.s64 + 356;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821DC1E8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821dc1e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DC1E8;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// bne 0x821dc1d4
	if (!ctx.cr0.eq) goto loc_821DC1D4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821dc338
	if (ctx.cr6.eq) goto loc_821DC338;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// addi r29,r19,12
	ctx.r29.s64 = ctx.r19.s64 + 12;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// li r21,-1
	ctx.r21.s64 = -1;
loc_821DC21C:
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x821dc318
	if (!ctx.cr6.lt) goto loc_821DC318;
	// addi r27,r25,4
	ctx.r27.s64 = ctx.r25.s64 + 4;
	// addi r30,r29,28
	ctx.r30.s64 = ctx.r29.s64 + 28;
loc_821DC234:
	// lbzx r11,r23,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821dc304
	if (ctx.cr6.eq) goto loc_821DC304;
	// lfs f0,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821dc2a4
	if (ctx.cr6.gt) goto loc_821DC2A4;
	// lfs f0,-16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821dc2a4
	if (ctx.cr6.lt) goto loc_821DC2A4;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821dc2a4
	if (ctx.cr6.gt) goto loc_821DC2A4;
	// lfs f0,-12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821dc2a4
	if (ctx.cr6.lt) goto loc_821DC2A4;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821dc2a4
	if (ctx.cr6.gt) goto loc_821DC2A4;
	// lfs f0,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821dc2a8
	if (!ctx.cr6.lt) goto loc_821DC2A8;
loc_821DC2A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DC2A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dc304
	if (ctx.cr6.eq) goto loc_821DC304;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217c38
	ctx.lr = 0x821DC2C4;
	sub_82217C38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dc304
	if (ctx.cr6.eq) goto loc_821DC304;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x823052d8
	ctx.lr = 0x821DC2DC;
	sub_823052D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8220b8a0
	ctx.lr = 0x821DC2EC;
	sub_8220B8A0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x823051a8
	ctx.lr = 0x821DC2F8;
	sub_823051A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r15,152
	ctx.r3.s64 = ctx.r15.s64 + 152;
	// bl 0x821d23a0
	ctx.lr = 0x821DC304;
	sub_821D23A0(ctx, base);
loc_821DC304:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r28,r20
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x821dc234
	if (ctx.cr6.lt) goto loc_821DC234;
loc_821DC318:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r23,r23,r20
	ctx.r23.u64 = ctx.r23.u64 + ctx.r20.u64;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x821dc21c
	if (!ctx.cr0.eq) goto loc_821DC21C;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r24,-13569
	ctx.r24.s64 = -889257984;
loc_821DC338:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// beq cr6,0x821dc380
	if (ctx.cr6.eq) goto loc_821DC380;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821dc358
	if (!ctx.cr6.gt) goto loc_821DC358;
	// stw r9,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r9.u32);
loc_821DC358:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// subf r11,r18,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r18.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x821dc374
	if (ctx.cr6.eq) goto loc_821DC374;
	// stw r9,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r9.u32);
loc_821DC374:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// subf r10,r18,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r18.s64;
	// stw r10,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r10.u32);
loc_821DC380:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x821dc3c0
	if (ctx.cr6.eq) goto loc_821DC3C0;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821dc398
	if (!ctx.cr6.gt) goto loc_821DC398;
	// stw r9,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r9.u32);
loc_821DC398:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x821dc3b4
	if (ctx.cr6.eq) goto loc_821DC3B4;
	// stw r9,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r9.u32);
loc_821DC3B4:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// stw r10,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r10.u32);
loc_821DC3C0:
	// lwz r31,156(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 156);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821dc40c
	if (!ctx.cr6.gt) goto loc_821DC40C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821DC3D0:
	// lwz r11,172(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 172);
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220c280
	ctx.lr = 0x821DC3E0;
	sub_8220C280(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,168
	ctx.r4.s64 = ctx.r10.s64 + 168;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x821d4788
	ctx.lr = 0x821DC3F8;
	sub_821D4788(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220dc00
	ctx.lr = 0x821DC400;
	sub_8220DC00(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821dc3d0
	if (!ctx.cr0.eq) goto loc_821DC3D0;
loc_821DC40C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DC414"))) PPC_WEAK_FUNC(sub_821DC414);
PPC_FUNC_IMPL(__imp__sub_821DC414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC418"))) PPC_WEAK_FUNC(sub_821DC418);
PPC_FUNC_IMPL(__imp__sub_821DC418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DC438:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r10,304(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// bdnz 0x821dc438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DC438;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DC44C"))) PPC_WEAK_FUNC(sub_821DC44C);
PPC_FUNC_IMPL(__imp__sub_821DC44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC450"))) PPC_WEAK_FUNC(sub_821DC450);
PPC_FUNC_IMPL(__imp__sub_821DC450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821DC458;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,184(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r30,180(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821dc4c4
	if (ctx.cr6.eq) goto loc_821DC4C4;
	// rlwinm r27,r4,0,30,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// not r28,r4
	ctx.r28.u64 = ~ctx.r4.u64;
loc_821DC474:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821dc4ac
	if (ctx.cr6.eq) goto loc_821DC4AC;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dc4ac
	if (ctx.cr6.eq) goto loc_821DC4AC;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821DC4AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DC4AC:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// and r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ctx.r28.u64;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// bne 0x821dc474
	if (!ctx.cr0.eq) goto loc_821DC474;
loc_821DC4C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DC4CC"))) PPC_WEAK_FUNC(sub_821DC4CC);
PPC_FUNC_IMPL(__imp__sub_821DC4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC4D0"))) PPC_WEAK_FUNC(sub_821DC4D0);
PPC_FUNC_IMPL(__imp__sub_821DC4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821DC4D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dc5d4
	if (ctx.cr6.eq) goto loc_821DC5D4;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_821DC4FC:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821dc5c8
	if (ctx.cr6.eq) goto loc_821DC5C8;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821dc588
	if (!ctx.cr6.eq) goto loc_821DC588;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r4,r31,928
	ctx.r4.s64 = ctx.r31.s64 + 928;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821dc530
	if (ctx.cr6.lt) goto loc_821DC530;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x821dc53c
	goto loc_821DC53C;
loc_821DC530:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 * 236;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821DC53C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dc574
	if (ctx.cr6.eq) goto loc_821DC574;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201220
	ctx.lr = 0x821DC554;
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
	// b 0x821dc5b8
	goto loc_821DC5B8;
loc_821DC574:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r28,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r28.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r28,652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 652, ctx.r28.u32);
	// b 0x821dc5c8
	goto loc_821DC5C8;
loc_821DC588:
	// lhz r11,814(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 814);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dc5a0
	if (ctx.cr6.eq) goto loc_821DC5A0;
	// stw r28,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r28.u32);
	// b 0x821dc5c8
	goto loc_821DC5C8;
loc_821DC5A0:
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
loc_821DC5B8:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r27,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r27.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r27,652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 652, ctx.r27.u32);
loc_821DC5C8:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x821dc4fc
	if (!ctx.cr0.eq) goto loc_821DC4FC;
loc_821DC5D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DC5DC"))) PPC_WEAK_FUNC(sub_821DC5DC);
PPC_FUNC_IMPL(__imp__sub_821DC5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC5E0"))) PPC_WEAK_FUNC(sub_821DC5E0);
PPC_FUNC_IMPL(__imp__sub_821DC5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,184(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,180(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x821dc6ec
	if (ctx.cr6.lt) goto loc_821DC6EC;
	// addi r6,r7,-3
	ctx.r6.s64 = ctx.r7.s64 + -3;
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
loc_821DC60C:
	// lwz r11,-8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821dc640
	if (ctx.cr6.eq) goto loc_821DC640;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dc640
	if (ctx.cr6.eq) goto loc_821DC640;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821dc638
	if (ctx.cr6.eq) goto loc_821DC638;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r3,r10,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r3.u32);
loc_821DC638:
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821DC640:
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821dc674
	if (ctx.cr6.eq) goto loc_821DC674;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dc674
	if (ctx.cr6.eq) goto loc_821DC674;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821dc66c
	if (ctx.cr6.eq) goto loc_821DC66C;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r3,r10,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r3.u32);
loc_821DC66C:
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821DC674:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821dc6a8
	if (ctx.cr6.eq) goto loc_821DC6A8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dc6a8
	if (ctx.cr6.eq) goto loc_821DC6A8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821dc6a0
	if (ctx.cr6.eq) goto loc_821DC6A0;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r3,r10,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r3.u32);
loc_821DC6A0:
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821DC6A8:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821dc6dc
	if (ctx.cr6.eq) goto loc_821DC6DC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dc6dc
	if (ctx.cr6.eq) goto loc_821DC6DC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821dc6d4
	if (ctx.cr6.eq) goto loc_821DC6D4;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r3,r10,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r3.u32);
loc_821DC6D4:
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821DC6DC:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821dc60c
	if (ctx.cr6.lt) goto loc_821DC60C;
loc_821DC6EC:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DC704:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821dc738
	if (ctx.cr6.eq) goto loc_821DC738;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dc738
	if (ctx.cr6.eq) goto loc_821DC738;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821dc730
	if (ctx.cr6.eq) goto loc_821DC730;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r8.u32);
loc_821DC730:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_821DC738:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x821dc704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DC704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DC744"))) PPC_WEAK_FUNC(sub_821DC744);
PPC_FUNC_IMPL(__imp__sub_821DC744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC748"))) PPC_WEAK_FUNC(sub_821DC748);
PPC_FUNC_IMPL(__imp__sub_821DC748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821DC750;
	__savegprlr_27(ctx, base);
	// lwz r28,184(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stfs f1,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lwz r27,180(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x821dc904
	if (ctx.cr6.lt) goto loc_821DC904;
	// addi r29,r28,-3
	ctx.r29.s64 = ctx.r28.s64 + -3;
	// addi r9,r27,-4
	ctx.r9.s64 = ctx.r27.s64 + -4;
loc_821DC770:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f0,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r11,r8,460
	ctx.r11.s64 = ctx.r8.s64 + 460;
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r10,r8,472
	ctx.r10.s64 = ctx.r8.s64 + 472;
	// stfs f0,384(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 384, temp.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r7,460
	ctx.r11.s64 = ctx.r7.s64 + 460;
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,0(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r7,472
	ctx.r10.s64 = ctx.r7.s64 + 472;
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,0(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lfs f1,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// stfs f1,384(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 384, temp.u32);
	// addi r11,r6,460
	ctx.r11.s64 = ctx.r6.s64 + 460;
	// lfs f0,460(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 460);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,460(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 460, temp.u32);
	// addi r10,r6,472
	ctx.r10.s64 = ctx.r6.s64 + 472;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwzu r8,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r11,r8,460
	ctx.r11.s64 = ctx.r8.s64 + 460;
	// lfs f8,472(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 472);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f1,f8
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// stfs f7,472(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 472, temp.u32);
	// addi r10,r8,472
	ctx.r10.s64 = ctx.r8.s64 + 472;
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f5,0(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f2,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,384(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 384, temp.u32);
	// lfs f1,460(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 460);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// stfs f0,460(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 460, temp.u32);
	// lfs f13,464(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 464);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// stfs f12,464(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 464, temp.u32);
	// lfs f11,468(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 468);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// stfs f10,468(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 468, temp.u32);
	// lfs f9,472(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 472);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f2,f9
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// stfs f8,472(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 472, temp.u32);
	// lfs f7,476(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 476);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f2
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// stfs f6,476(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 476, temp.u32);
	// lfs f5,480(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 480);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f2
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// stfs f4,480(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 480, temp.u32);
	// lfs f3,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,384(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 384, temp.u32);
	// lfs f2,460(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 460);
	ctx.f2.f64 = double(temp.f32);
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// stfs f1,460(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 460, temp.u32);
	// lfs f0,464(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// stfs f13,464(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 464, temp.u32);
	// lfs f12,468(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 468);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f11,468(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 468, temp.u32);
	// lfs f10,472(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 472);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f3,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// stfs f9,472(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 472, temp.u32);
	// lfs f8,476(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 476);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f3
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// stfs f7,476(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 476, temp.u32);
	// lfs f6,480(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 480);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f3
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// stfs f5,480(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 480, temp.u32);
	// blt cr6,0x821dc770
	if (ctx.cr6.lt) goto loc_821DC770;
loc_821DC904:
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x821dc980
	if (!ctx.cr6.lt) goto loc_821DC980;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r5,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r5.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DC920:
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// lfs f0,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,460
	ctx.r11.s64 = ctx.r9.s64 + 460;
	// addi r10,r9,472
	ctx.r10.s64 = ctx.r9.s64 + 472;
	// stfs f0,384(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 384, temp.u32);
	// lfs f11,460(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 460);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,464(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 464);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,468(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,460(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 460, temp.u32);
	// stfs f9,468(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 468, temp.u32);
	// stfs f8,464(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 464, temp.u32);
	// lfs f4,480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 480);
	ctx.f4.f64 = double(temp.f32);
	// lfs f7,476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 476);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 472);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f0,f5
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f2,472(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 472, temp.u32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f6,476(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 476, temp.u32);
	// stfs f3,480(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 480, temp.u32);
	// bdnz 0x821dc920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DC920;
loc_821DC980:
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DC984"))) PPC_WEAK_FUNC(sub_821DC984);
PPC_FUNC_IMPL(__imp__sub_821DC984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC988"))) PPC_WEAK_FUNC(sub_821DC988);
PPC_FUNC_IMPL(__imp__sub_821DC988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821DC990;
	__savegprlr_27(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r28,184(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r27,180(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// lfs f13,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,144(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// fdivs f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// blt cr6,0x821dcb4c
	if (ctx.cr6.lt) goto loc_821DCB4C;
	// addi r29,r28,-3
	ctx.r29.s64 = ctx.r28.s64 + -3;
	// addi r9,r27,-4
	ctx.r9.s64 = ctx.r27.s64 + -4;
loc_821DC9C0:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r8,460
	ctx.r11.s64 = ctx.r8.s64 + 460;
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r10,r8,472
	ctx.r10.s64 = ctx.r8.s64 + 472;
	// lwzu r7,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stfs f13,384(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 384, temp.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r6,460
	ctx.r11.s64 = ctx.r6.s64 + 460;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r5,460
	ctx.r8.s64 = ctx.r5.s64 + 460;
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r6,472
	ctx.r10.s64 = ctx.r6.s64 + 472;
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// stfs f13,384(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 384, temp.u32);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r31,r8,4
	ctx.r31.s64 = ctx.r8.s64 + 4;
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r5,472
	ctx.r11.s64 = ctx.r5.s64 + 472;
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r30,r8,8
	ctx.r30.s64 = ctx.r8.s64 + 8;
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r11,r7,472
	ctx.r11.s64 = ctx.r7.s64 + 472;
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r7,460
	ctx.r10.s64 = ctx.r7.s64 + 460;
	// stfs f13,384(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 384, temp.u32);
	// lfs f12,460(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 460);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f11,460(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 460, temp.u32);
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f8,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,8(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f6,472(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 472);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f5,472(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 472, temp.u32);
	// lfs f4,476(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 476);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,476(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 476, temp.u32);
	// lfs f2,480(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 480);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,480(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 480, temp.u32);
	// stfs f13,384(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 384, temp.u32);
	// lfs f12,460(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 460);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f11,460(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 460, temp.u32);
	// lfs f10,464(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 464);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,464(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 464, temp.u32);
	// lfs f8,468(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 468);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,468(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 468, temp.u32);
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// lfs f6,472(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 472);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f5,472(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 472, temp.u32);
	// lfs f4,476(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 476);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,476(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 476, temp.u32);
	// lfs f2,480(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 480);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,480(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 480, temp.u32);
	// blt cr6,0x821dc9c0
	if (ctx.cr6.lt) goto loc_821DC9C0;
loc_821DCB4C:
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x821dcbc4
	if (!ctx.cr6.lt) goto loc_821DCBC4;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r4.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DCB68:
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r11,r9,460
	ctx.r11.s64 = ctx.r9.s64 + 460;
	// addi r10,r9,472
	ctx.r10.s64 = ctx.r9.s64 + 472;
	// stfs f13,384(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 384, temp.u32);
	// lfs f9,468(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 468);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,464(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 464);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,460(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 460);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f8,464(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 464, temp.u32);
	// stfs f7,468(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 468, temp.u32);
	// stfs f10,460(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 460, temp.u32);
	// lfs f5,472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 472);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 476);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 480);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f4,472(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 472, temp.u32);
	// stfs f1,476(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 476, temp.u32);
	// stfs f2,480(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 480, temp.u32);
	// bdnz 0x821dcb68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DCB68;
loc_821DCBC4:
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DCBC8"))) PPC_WEAK_FUNC(sub_821DCBC8);
PPC_FUNC_IMPL(__imp__sub_821DCBC8) {
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
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dcd54
	if (ctx.cr6.eq) goto loc_821DCD54;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_821DCC04:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821dcd48
	if (!ctx.cr6.eq) goto loc_821DCD48;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dcd48
	if (ctx.cr6.eq) goto loc_821DCD48;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821dcc3c
	if (ctx.cr6.eq) goto loc_821DCC3C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821dcc40
	if (!ctx.cr6.eq) goto loc_821DCC40;
loc_821DCC3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DCC40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dcd44
	if (ctx.cr6.eq) goto loc_821DCD44;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dcc64
	if (ctx.cr6.eq) goto loc_821DCC64;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821dcd44
	if (!ctx.cr6.eq) goto loc_821DCD44;
loc_821DCC64:
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
	// addi r11,r3,496
	ctx.r11.s64 = ctx.r3.s64 + 496;
	// addi r11,r3,508
	ctx.r11.s64 = ctx.r3.s64 + 508;
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
	// addi r11,r3,520
	ctx.r11.s64 = ctx.r3.s64 + 520;
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// addi r11,r3,484
	ctx.r11.s64 = ctx.r3.s64 + 484;
	// fmuls f5,f0,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fadds f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f4,496(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// fadds f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f3,500(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// fadds f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f2,504(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// lfs f12,508(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f4
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f10,496(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// fmr f11,f4
	ctx.f11.f64 = ctx.f4.f64;
	// lfs f9,512(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f3
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f8,500(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
	// lfs f7,516(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f2
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f6,504(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// lfs f5,488(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,492(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,484(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	ctx.f2.f64 = double(temp.f32);
	// fadds f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f0,484(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 484, temp.u32);
	// lfs f13,524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f12,488(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 488, temp.u32);
	// lfs f11,528(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f4
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f10,492(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 492, temp.u32);
	// stfs f31,516(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// stfs f31,512(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// stfs f31,508(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 508, temp.u32);
	// stfs f31,528(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// stfs f31,524(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// stfs f31,520(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
loc_821DCD44:
	// bl 0x82217828
	ctx.lr = 0x821DCD48;
	sub_82217828(ctx, base);
loc_821DCD48:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821dcc04
	if (!ctx.cr0.eq) goto loc_821DCC04;
loc_821DCD54:
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

__attribute__((alias("__imp__sub_821DCD70"))) PPC_WEAK_FUNC(sub_821DCD70);
PPC_FUNC_IMPL(__imp__sub_821DCD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821DCD78;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// beq cr6,0x821dce58
	if (ctx.cr6.eq) goto loc_821DCE58;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_821DCDC8:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r10,168
	ctx.r11.s64 = ctx.r10.s64 + 168;
	// lhz r9,814(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 814);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821dce38
	if (!ctx.cr6.eq) goto loc_821DCE38;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
	// or r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 | ctx.r28.u64;
	// bne cr6,0x821dce24
	if (!ctx.cr6.eq) goto loc_821DCE24;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r6,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
	// b 0x821dce4c
	goto loc_821DCE4C;
loc_821DCE24:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188ec8
	ctx.lr = 0x821DCE30;
	sub_82188EC8(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x821dce4c
	goto loc_821DCE4C;
loc_821DCE38:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r10,816
	ctx.r3.s64 = ctx.r10.s64 + 816;
	// bl 0x821ee318
	ctx.lr = 0x821DCE4C;
	sub_821EE318(ctx, base);
loc_821DCE4C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x821dcdc8
	if (!ctx.cr0.eq) goto loc_821DCDC8;
loc_821DCE58:
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// beq cr6,0x821dcea0
	if (ctx.cr6.eq) goto loc_821DCEA0;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821dce8c
	if (!ctx.cr6.eq) goto loc_821DCE8C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_821DCE8C:
	// bl 0x821ee318
	ctx.lr = 0x821DCE90;
	sub_821EE318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dd080
	ctx.lr = 0x821DCE98;
	sub_821DD080(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_821DCEA0:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DCEB4"))) PPC_WEAK_FUNC(sub_821DCEB4);
PPC_FUNC_IMPL(__imp__sub_821DCEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DCEB8"))) PPC_WEAK_FUNC(sub_821DCEB8);
PPC_FUNC_IMPL(__imp__sub_821DCEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821DCEC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// beq cr6,0x821dcfb4
	if (ctx.cr6.eq) goto loc_821DCFB4;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_821DCF10:
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DCF28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,814(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 814);
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821dcf94
	if (!ctx.cr6.eq) goto loc_821DCF94;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// or r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 | ctx.r28.u64;
	// or r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 | ctx.r27.u64;
	// bne cr6,0x821dcf80
	if (!ctx.cr6.eq) goto loc_821DCF80;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r6,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r6.u32);
	// b 0x821dcfa8
	goto loc_821DCFA8;
loc_821DCF80:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82188ec8
	ctx.lr = 0x821DCF8C;
	sub_82188EC8(ctx, base);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x821dcfa8
	goto loc_821DCFA8;
loc_821DCF94:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r30,816
	ctx.r3.s64 = ctx.r30.s64 + 816;
	// bl 0x821ee318
	ctx.lr = 0x821DCFA8;
	sub_821EE318(ctx, base);
loc_821DCFA8:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x821dcf10
	if (!ctx.cr0.eq) goto loc_821DCF10;
loc_821DCFB4:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// beq cr6,0x821dd008
	if (ctx.cr6.eq) goto loc_821DD008;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821dcff4
	if (!ctx.cr6.eq) goto loc_821DCFF4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_821DCFF4:
	// bl 0x821ee318
	ctx.lr = 0x821DCFF8;
	sub_821EE318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dd080
	ctx.lr = 0x821DD000;
	sub_821DD080(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_821DD008:
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// stw r24,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r24.u32);
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DD01C"))) PPC_WEAK_FUNC(sub_821DD01C);
PPC_FUNC_IMPL(__imp__sub_821DD01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD020"))) PPC_WEAK_FUNC(sub_821DD020);
PPC_FUNC_IMPL(__imp__sub_821DD020) {
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
	// lwz r31,184(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821dd064
	if (ctx.cr6.eq) goto loc_821DD064;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_821DD048:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DD05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821dd048
	if (!ctx.cr0.eq) goto loc_821DD048;
loc_821DD064:
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

__attribute__((alias("__imp__sub_821DD07C"))) PPC_WEAK_FUNC(sub_821DD07C);
PPC_FUNC_IMPL(__imp__sub_821DD07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD080"))) PPC_WEAK_FUNC(sub_821DD080);
PPC_FUNC_IMPL(__imp__sub_821DD080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821DD088;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,180(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dd0f8
	if (ctx.cr6.eq) goto loc_821DD0F8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821DD0A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,814(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 814);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821dd0ec
	if (!ctx.cr6.eq) goto loc_821DD0EC;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
	// addi r8,r11,184
	ctx.r8.s64 = ctx.r11.s64 + 184;
	// stw r10,856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 856, ctx.r10.u32);
	// lwz r7,188(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// stw r7,860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 860, ctx.r7.u32);
	// lwz r6,192(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stw r6,864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 864, ctx.r6.u32);
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// stw r5,868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 868, ctx.r5.u32);
	// bl 0x821ee9a8
	ctx.lr = 0x821DD0EC;
	sub_821EE9A8(ctx, base);
loc_821DD0EC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821dd0a4
	if (!ctx.cr0.eq) goto loc_821DD0A4;
loc_821DD0F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DD100"))) PPC_WEAK_FUNC(sub_821DD100);
PPC_FUNC_IMPL(__imp__sub_821DD100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821DD108;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,184(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r28,180(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821dd1e4
	if (ctx.cr6.eq) goto loc_821DD1E4;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_821DD12C:
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r6,r31,68
	ctx.r6.s64 = ctx.r31.s64 + 68;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bne cr6,0x821dd180
	if (!ctx.cr6.eq) goto loc_821DD180;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x821d3920
	ctx.lr = 0x821DD14C;
	sub_821D3920(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// stw r9,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r9.u32);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r8,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r8.u32);
	// stw r7,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r7.u32);
	// stw r6,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r6.u32);
	// b 0x821dd1d4
	goto loc_821DD1D4;
loc_821DD180:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821d3920
	ctx.lr = 0x821DD18C;
	sub_821D3920(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// stw r9,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r9.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r8,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r8.u32);
	// stw r7,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r7.u32);
	// stw r6,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r6.u32);
	// bl 0x82308fc8
	ctx.lr = 0x821DD1C8;
	sub_82308FC8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82308fc8
	ctx.lr = 0x821DD1D4;
	sub_82308FC8(ctx, base);
loc_821DD1D4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x821dd12c
	if (ctx.cr6.lt) goto loc_821DD12C;
loc_821DD1E4:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// stw r7,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r7.u32);
	// stw r6,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r6.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DD21C"))) PPC_WEAK_FUNC(sub_821DD21C);
PPC_FUNC_IMPL(__imp__sub_821DD21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD220"))) PPC_WEAK_FUNC(sub_821DD220);
PPC_FUNC_IMPL(__imp__sub_821DD220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// std r3,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// stw r3,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r3.u32);
	// beq cr6,0x821dd270
	if (ctx.cr6.eq) goto loc_821DD270;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821DD250:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// bdnz 0x821dd250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DD250;
loc_821DD270:
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
loc_821DD274:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x821dd274
	if (ctx.cr6.lt) goto loc_821DD274;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD298"))) PPC_WEAK_FUNC(sub_821DD298);
PPC_FUNC_IMPL(__imp__sub_821DD298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821DD2A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,184(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r28,180(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821dd354
	if (ctx.cr6.eq) goto loc_821DD354;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_821DD2C8:
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// bne cr6,0x821dd2ec
	if (!ctx.cr6.eq) goto loc_821DD2EC;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821d3788
	ctx.lr = 0x821DD2E8;
	sub_821D3788(ctx, base);
	// b 0x821dd344
	goto loc_821DD344;
loc_821DD2EC:
	// addi r6,r30,68
	ctx.r6.s64 = ctx.r30.s64 + 68;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821d3920
	ctx.lr = 0x821DD2FC;
	sub_821D3920(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r11.u32);
	// stw r10,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r10.u32);
	// stw r9,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r9.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r8,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r8.u32);
	// stw r7,376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 376, ctx.r7.u32);
	// stw r6,380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 380, ctx.r6.u32);
	// bl 0x82308fc8
	ctx.lr = 0x821DD338;
	sub_82308FC8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82308fc8
	ctx.lr = 0x821DD344;
	sub_82308FC8(ctx, base);
loc_821DD344:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x821dd2c8
	if (ctx.cr6.lt) goto loc_821DD2C8;
loc_821DD354:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// stw r7,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r7.u32);
	// stw r6,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DD38C"))) PPC_WEAK_FUNC(sub_821DD38C);
PPC_FUNC_IMPL(__imp__sub_821DD38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD390"))) PPC_WEAK_FUNC(sub_821DD390);
PPC_FUNC_IMPL(__imp__sub_821DD390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821DD398;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// lwz r31,184(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r30,180(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dd450
	if (ctx.cr6.eq) goto loc_821DD450;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821dd3d8
	if (ctx.cr6.eq) goto loc_821DD3D8;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821DD3C8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,204(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bdnz 0x821dd3c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DD3C8;
loc_821DD3D8:
	// and r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 & ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dd46c
	if (ctx.cr6.eq) goto loc_821DD46C;
	// rlwinm r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dd424
	if (ctx.cr6.eq) goto loc_821DD424;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// beq cr6,0x821dd424
	if (ctx.cr6.eq) goto loc_821DD424;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821DD410:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stw r11,824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 824, ctx.r11.u32);
	// stw r11,832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 832, ctx.r11.u32);
	// stw r11,828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 828, ctx.r11.u32);
	// bdnz 0x821dd410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DD410;
loc_821DD424:
	// bl 0x821dc5e0
	ctx.lr = 0x821DD428;
	sub_821DC5E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821dd46c
	if (ctx.cr6.eq) goto loc_821DD46C;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_821DD434:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82217258
	ctx.lr = 0x821DD440;
	sub_82217258(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821dd434
	if (!ctx.cr0.eq) goto loc_821DD434;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821DD450:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821dd46c
	if (ctx.cr6.eq) goto loc_821DD46C;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_821DD45C:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82215b28
	ctx.lr = 0x821DD464;
	sub_82215B28(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821dd45c
	if (!ctx.cr0.eq) goto loc_821DD45C;
loc_821DD46C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DD474"))) PPC_WEAK_FUNC(sub_821DD474);
PPC_FUNC_IMPL(__imp__sub_821DD474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD478"))) PPC_WEAK_FUNC(sub_821DD478);
PPC_FUNC_IMPL(__imp__sub_821DD478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821DD480;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,184(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dd4f4
	if (ctx.cr6.eq) goto loc_821DD4F4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821dd4d8
	if (ctx.cr6.eq) goto loc_821DD4D8;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821DD4A8:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd4cc
	if (ctx.cr6.eq) goto loc_821DD4CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DD4CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DD4CC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821dd4a8
	if (!ctx.cr0.eq) goto loc_821DD4A8;
loc_821DD4D8:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dd4f0
	if (ctx.cr6.eq) goto loc_821DD4F0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821DD4F0;
	sub_82080000(ctx, base);
loc_821DD4F0:
	// stw r30,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r30.u32);
loc_821DD4F4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,156(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// stw r30,184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 184, ctx.r30.u32);
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r28,344(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// beq cr6,0x821dd548
	if (ctx.cr6.eq) goto loc_821DD548;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823052d8
	ctx.lr = 0x821DD51C;
	sub_823052D8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821dd540
	if (ctx.cr6.eq) goto loc_821DD540;
loc_821DD524:
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8220ba80
	ctx.lr = 0x821DD534;
	sub_8220BA80(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821dd524
	if (!ctx.cr0.eq) goto loc_821DD524;
loc_821DD540:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823051a8
	ctx.lr = 0x821DD548;
	sub_823051A8(ctx, base);
loc_821DD548:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,152
	ctx.r3.s64 = ctx.r29.s64 + 152;
	// bl 0x821d78a8
	ctx.lr = 0x821DD554;
	sub_821D78A8(ctx, base);
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// rlwinm r10,r11,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// stw r10,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DD568"))) PPC_WEAK_FUNC(sub_821DD568);
PPC_FUNC_IMPL(__imp__sub_821DD568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,184(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
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
	// blt cr6,0x821dd6a0
	if (ctx.cr6.lt) goto loc_821DD6A0;
	// addi r6,r7,-3
	ctx.r6.s64 = ctx.r7.s64 + -3;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
loc_821DD590:
	// lwz r11,-8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821dd5d0
	if (ctx.cr6.eq) goto loc_821DD5D0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dd5d0
	if (ctx.cr6.eq) goto loc_821DD5D0;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821dd5bc
	if (ctx.cr6.eq) goto loc_821DD5BC;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
loc_821DD5BC:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dd5d0
	if (ctx.cr6.eq) goto loc_821DD5D0;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821DD5D0:
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821dd610
	if (ctx.cr6.eq) goto loc_821DD610;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dd610
	if (ctx.cr6.eq) goto loc_821DD610;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821dd5fc
	if (ctx.cr6.eq) goto loc_821DD5FC;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
loc_821DD5FC:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dd610
	if (ctx.cr6.eq) goto loc_821DD610;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821DD610:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821dd650
	if (ctx.cr6.eq) goto loc_821DD650;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dd650
	if (ctx.cr6.eq) goto loc_821DD650;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821dd63c
	if (ctx.cr6.eq) goto loc_821DD63C;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
loc_821DD63C:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dd650
	if (ctx.cr6.eq) goto loc_821DD650;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821DD650:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821dd690
	if (ctx.cr6.eq) goto loc_821DD690;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dd690
	if (ctx.cr6.eq) goto loc_821DD690;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821dd67c
	if (ctx.cr6.eq) goto loc_821DD67C;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
loc_821DD67C:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dd690
	if (ctx.cr6.eq) goto loc_821DD690;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821DD690:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821dd590
	if (ctx.cr6.lt) goto loc_821DD590;
loc_821DD6A0:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DD6B8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821dd6f8
	if (ctx.cr6.eq) goto loc_821DD6F8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dd6f8
	if (ctx.cr6.eq) goto loc_821DD6F8;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821dd6e4
	if (ctx.cr6.eq) goto loc_821DD6E4;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r8.u32);
loc_821DD6E4:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dd6f8
	if (ctx.cr6.eq) goto loc_821DD6F8;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821DD6F8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x821dd6b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DD6B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD704"))) PPC_WEAK_FUNC(sub_821DD704);
PPC_FUNC_IMPL(__imp__sub_821DD704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD708"))) PPC_WEAK_FUNC(sub_821DD708);
PPC_FUNC_IMPL(__imp__sub_821DD708) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,184(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821dd73c
	if (ctx.cr6.eq) goto loc_821DD73C;
loc_821DD71C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,416(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 416);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821dd744
	if (!ctx.cr6.eq) goto loc_821DD744;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821dd71c
	if (ctx.cr6.lt) goto loc_821DD71C;
loc_821DD73C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821DD744:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD74C"))) PPC_WEAK_FUNC(sub_821DD74C);
PPC_FUNC_IMPL(__imp__sub_821DD74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD750"))) PPC_WEAK_FUNC(sub_821DD750);
PPC_FUNC_IMPL(__imp__sub_821DD750) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,184(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821dd784
	if (ctx.cr6.eq) goto loc_821DD784;
loc_821DD764:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,420(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 420);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821dd78c
	if (!ctx.cr6.eq) goto loc_821DD78C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821dd764
	if (ctx.cr6.lt) goto loc_821DD764;
loc_821DD784:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821DD78C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD794"))) PPC_WEAK_FUNC(sub_821DD794);
PPC_FUNC_IMPL(__imp__sub_821DD794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD798"))) PPC_WEAK_FUNC(sub_821DD798);
PPC_FUNC_IMPL(__imp__sub_821DD798) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,184(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821dd7cc
	if (ctx.cr6.eq) goto loc_821DD7CC;
loc_821DD7AC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,424(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 424);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821dd7d4
	if (!ctx.cr6.eq) goto loc_821DD7D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821dd7ac
	if (ctx.cr6.lt) goto loc_821DD7AC;
loc_821DD7CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821DD7D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD7DC"))) PPC_WEAK_FUNC(sub_821DD7DC);
PPC_FUNC_IMPL(__imp__sub_821DD7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD7E0"))) PPC_WEAK_FUNC(sub_821DD7E0);
PPC_FUNC_IMPL(__imp__sub_821DD7E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,184(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821dd814
	if (ctx.cr6.eq) goto loc_821DD814;
loc_821DD7F4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,428(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 428);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821dd81c
	if (!ctx.cr6.eq) goto loc_821DD81C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821dd7f4
	if (ctx.cr6.lt) goto loc_821DD7F4;
loc_821DD814:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821DD81C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD824"))) PPC_WEAK_FUNC(sub_821DD824);
PPC_FUNC_IMPL(__imp__sub_821DD824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD828"))) PPC_WEAK_FUNC(sub_821DD828);
PPC_FUNC_IMPL(__imp__sub_821DD828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821DD830;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r30,180(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dd8b8
	if (ctx.cr6.eq) goto loc_821DD8B8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_821DD850:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821dd874
	if (!ctx.cr6.eq) goto loc_821DD874;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821dd8ac
	if (!ctx.cr6.eq) goto loc_821DD8AC;
	// b 0x821dd87c
	goto loc_821DD87C;
loc_821DD874:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dd8ac
	if (ctx.cr6.eq) goto loc_821DD8AC;
loc_821DD87C:
	// lwz r31,416(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821dd8ac
	if (ctx.cr6.eq) goto loc_821DD8AC;
loc_821DD888:
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
	ctx.lr = 0x821DD8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821dd888
	if (!ctx.cr6.eq) goto loc_821DD888;
loc_821DD8AC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821dd850
	if (!ctx.cr0.eq) goto loc_821DD850;
loc_821DD8B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DD8C4"))) PPC_WEAK_FUNC(sub_821DD8C4);
PPC_FUNC_IMPL(__imp__sub_821DD8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD8C8"))) PPC_WEAK_FUNC(sub_821DD8C8);
PPC_FUNC_IMPL(__imp__sub_821DD8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821DD8D0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r30,180(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dd958
	if (ctx.cr6.eq) goto loc_821DD958;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_821DD8F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821dd914
	if (!ctx.cr6.eq) goto loc_821DD914;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821dd94c
	if (!ctx.cr6.eq) goto loc_821DD94C;
	// b 0x821dd91c
	goto loc_821DD91C;
loc_821DD914:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dd94c
	if (ctx.cr6.eq) goto loc_821DD94C;
loc_821DD91C:
	// lwz r31,424(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821dd94c
	if (ctx.cr6.eq) goto loc_821DD94C;
loc_821DD928:
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
	ctx.lr = 0x821DD940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821dd928
	if (!ctx.cr6.eq) goto loc_821DD928;
loc_821DD94C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821dd8f0
	if (!ctx.cr0.eq) goto loc_821DD8F0;
loc_821DD958:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DD964"))) PPC_WEAK_FUNC(sub_821DD964);
PPC_FUNC_IMPL(__imp__sub_821DD964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD968"))) PPC_WEAK_FUNC(sub_821DD968);
PPC_FUNC_IMPL(__imp__sub_821DD968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821DD970;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r30,180(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dd9f8
	if (ctx.cr6.eq) goto loc_821DD9F8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_821DD990:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821dd9b4
	if (!ctx.cr6.eq) goto loc_821DD9B4;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821dd9ec
	if (!ctx.cr6.eq) goto loc_821DD9EC;
	// b 0x821dd9bc
	goto loc_821DD9BC;
loc_821DD9B4:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821dd9ec
	if (ctx.cr6.eq) goto loc_821DD9EC;
loc_821DD9BC:
	// lwz r31,428(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821dd9ec
	if (ctx.cr6.eq) goto loc_821DD9EC;
loc_821DD9C8:
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
	ctx.lr = 0x821DD9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821dd9c8
	if (!ctx.cr6.eq) goto loc_821DD9C8;
loc_821DD9EC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821dd990
	if (!ctx.cr0.eq) goto loc_821DD990;
loc_821DD9F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DDA04"))) PPC_WEAK_FUNC(sub_821DDA04);
PPC_FUNC_IMPL(__imp__sub_821DDA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDA08"))) PPC_WEAK_FUNC(sub_821DDA08);
PPC_FUNC_IMPL(__imp__sub_821DDA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821DDA10;
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
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ddb7c
	if (ctx.cr6.eq) goto loc_821DDB7C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,2
	ctx.r26.s64 = 2;
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_821DDA58:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DDA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821dda8c
	if (!ctx.cr6.eq) goto loc_821DDA8C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x821ddab4
	goto loc_821DDAB4;
loc_821DDA8C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821ddab0
	if (ctx.cr6.eq) goto loc_821DDAB0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821ddab0
	if (ctx.cr6.eq) goto loc_821DDAB0;
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
	// ble cr6,0x821ddab4
	if (!ctx.cr6.gt) goto loc_821DDAB4;
loc_821DDAB0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821DDAB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ddb48
	if (ctx.cr6.eq) goto loc_821DDB48;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r9,r11,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ddafc
	if (ctx.cr6.eq) goto loc_821DDAFC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821ddb70
	if (ctx.cr6.eq) goto loc_821DDB70;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821ddb70
	if (ctx.cr6.eq) goto loc_821DDB70;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821ddaf4
	if (ctx.cr6.eq) goto loc_821DDAF4;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_821DDAF4:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// b 0x821ddb70
	goto loc_821DDB70;
loc_821DDAFC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821ddb14
	if (!ctx.cr6.eq) goto loc_821DDB14;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_821DDB14:
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
	// beq cr6,0x821ddb70
	if (ctx.cr6.eq) goto loc_821DDB70;
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
	// b 0x821ddb70
	goto loc_821DDB70;
loc_821DDB48:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821ddb70
	if (ctx.cr6.eq) goto loc_821DDB70;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821ddb70
	if (ctx.cr6.eq) goto loc_821DDB70;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821ddb6c
	if (ctx.cr6.eq) goto loc_821DDB6C;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_821DDB6C:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_821DDB70:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821dda58
	if (!ctx.cr0.eq) goto loc_821DDA58;
loc_821DDB7C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DDB90"))) PPC_WEAK_FUNC(sub_821DDB90);
PPC_FUNC_IMPL(__imp__sub_821DDB90) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,184(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821ddba4
	if (!ctx.cr6.eq) goto loc_821DDBA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821DDBA4:
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821DDBB8:
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821ddbe0
	if (ctx.cr6.eq) goto loc_821DDBE0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x821ddbe4
	if (!ctx.cr6.eq) goto loc_821DDBE4;
loc_821DDBE0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821DDBE4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 & ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821ddbb8
	if (ctx.cr6.lt) goto loc_821DDBB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DDC00"))) PPC_WEAK_FUNC(sub_821DDC00);
PPC_FUNC_IMPL(__imp__sub_821DDC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DDC20:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r10,200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// bdnz 0x821ddc20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DDC20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DDC34"))) PPC_WEAK_FUNC(sub_821DDC34);
PPC_FUNC_IMPL(__imp__sub_821DDC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDC38"))) PPC_WEAK_FUNC(sub_821DDC38);
PPC_FUNC_IMPL(__imp__sub_821DDC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DDC58:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r10,204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// bdnz 0x821ddc58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DDC58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DDC6C"))) PPC_WEAK_FUNC(sub_821DDC6C);
PPC_FUNC_IMPL(__imp__sub_821DDC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDC70"))) PPC_WEAK_FUNC(sub_821DDC70);
PPC_FUNC_IMPL(__imp__sub_821DDC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DDC90:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r10,208(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// bdnz 0x821ddc90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DDC90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DDCA4"))) PPC_WEAK_FUNC(sub_821DDCA4);
PPC_FUNC_IMPL(__imp__sub_821DDCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDCA8"))) PPC_WEAK_FUNC(sub_821DDCA8);
PPC_FUNC_IMPL(__imp__sub_821DDCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// not r9,r4
	ctx.r9.u64 = ~ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_821DDCC4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r8,148(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r7,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r7.u32);
	// bdnz 0x821ddcc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DDCC4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DDCDC"))) PPC_WEAK_FUNC(sub_821DDCDC);
PPC_FUNC_IMPL(__imp__sub_821DDCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDCE0"))) PPC_WEAK_FUNC(sub_821DDCE0);
PPC_FUNC_IMPL(__imp__sub_821DDCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// not r9,r4
	ctx.r9.u64 = ~ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_821DDCFC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r8,304(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r7,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r7.u32);
	// bdnz 0x821ddcfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DDCFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DDD14"))) PPC_WEAK_FUNC(sub_821DDD14);
PPC_FUNC_IMPL(__imp__sub_821DDD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDD18"))) PPC_WEAK_FUNC(sub_821DDD18);
PPC_FUNC_IMPL(__imp__sub_821DDD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DDD30:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r4,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// bdnz 0x821ddd30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DDD30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DDD40"))) PPC_WEAK_FUNC(sub_821DDD40);
PPC_FUNC_IMPL(__imp__sub_821DDD40) {
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
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dddb4
	if (ctx.cr6.eq) goto loc_821DDDB4;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821DDD74:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821ddd90
	if (ctx.cr6.eq) goto loc_821DDD90;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821ddd94
	if (!ctx.cr6.eq) goto loc_821DDD94;
loc_821DDD90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DDD94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ddda8
	if (ctx.cr6.eq) goto loc_821DDDA8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82217678
	ctx.lr = 0x821DDDA8;
	sub_82217678(ctx, base);
loc_821DDDA8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821ddd74
	if (!ctx.cr0.eq) goto loc_821DDD74;
loc_821DDDB4:
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

__attribute__((alias("__imp__sub_821DDDD0"))) PPC_WEAK_FUNC(sub_821DDDD0);
PPC_FUNC_IMPL(__imp__sub_821DDDD0) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,184(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821dde2c
	if (ctx.cr6.eq) goto loc_821DDE2C;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_821DDE08:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DDE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821dde08
	if (!ctx.cr0.eq) goto loc_821DDE08;
loc_821DDE2C:
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

__attribute__((alias("__imp__sub_821DDE4C"))) PPC_WEAK_FUNC(sub_821DDE4C);
PPC_FUNC_IMPL(__imp__sub_821DDE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDE50"))) PPC_WEAK_FUNC(sub_821DDE50);
PPC_FUNC_IMPL(__imp__sub_821DDE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,184(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x821ddef4
	if (ctx.cr6.lt) goto loc_821DDEF4;
	// addi r5,r4,-3
	ctx.r5.s64 = ctx.r4.s64 + -3;
	// addi r7,r3,-4
	ctx.r7.s64 = ctx.r3.s64 + -4;
loc_821DDE78:
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// lwzu r11,16(r7)
	ea = 16 + ctx.r7.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stfs f0,504(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 504, temp.u32);
	// stfs f0,500(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 500, temp.u32);
	// stfs f0,496(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 496, temp.u32);
	// stfs f0,492(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 492, temp.u32);
	// stfs f0,488(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 488, temp.u32);
	// stfs f0,484(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 484, temp.u32);
	// stfs f0,504(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 504, temp.u32);
	// stfs f0,500(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 500, temp.u32);
	// stfs f0,496(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 496, temp.u32);
	// stfs f0,492(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 492, temp.u32);
	// stfs f0,488(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 488, temp.u32);
	// stfs f0,484(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 484, temp.u32);
	// stfs f0,504(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 504, temp.u32);
	// stfs f0,500(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 500, temp.u32);
	// stfs f0,496(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 496, temp.u32);
	// stfs f0,492(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 492, temp.u32);
	// stfs f0,488(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 488, temp.u32);
	// stfs f0,484(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 484, temp.u32);
	// stfs f0,504(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 504, temp.u32);
	// stfs f0,500(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// stfs f0,496(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stfs f0,492(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
	// stfs f0,488(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 488, temp.u32);
	// stfs f0,484(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 484, temp.u32);
	// blt cr6,0x821dde78
	if (ctx.cr6.lt) goto loc_821DDE78;
loc_821DDEF4:
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r6,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r6.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821DDF10:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stfs f0,504(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 504, temp.u32);
	// stfs f0,500(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// stfs f0,496(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stfs f0,492(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
	// stfs f0,488(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 488, temp.u32);
	// stfs f0,484(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 484, temp.u32);
	// bdnz 0x821ddf10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DDF10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DDF34"))) PPC_WEAK_FUNC(sub_821DDF34);
PPC_FUNC_IMPL(__imp__sub_821DDF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDF38"))) PPC_WEAK_FUNC(sub_821DDF38);
PPC_FUNC_IMPL(__imp__sub_821DDF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x821DDF40;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,814(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 814);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ddf74
	if (ctx.cr6.eq) goto loc_821DDF74;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821de390
	ctx.lr = 0x821DDF64;
	sub_821DE390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_821DDF74:
	// lwz r11,180(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// ble cr6,0x821ddf8c
	if (!ctx.cr6.gt) goto loc_821DDF8C;
	// lwz r11,168(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
loc_821DDF8C:
	// lwz r25,16(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// addi r24,r4,788
	ctx.r24.s64 = ctx.r4.s64 + 788;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r11,56
	ctx.r7.s64 = ctx.r11.s64 + 56;
	// lwz r11,792(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 792);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// beq cr6,0x821de140
	if (ctx.cr6.eq) goto loc_821DE140;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// lfs f31,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r26,r22,12
	ctx.r26.s64 = ctx.r22.s64 + 12;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// addi r21,r11,4536
	ctx.r21.s64 = ctx.r11.s64 + 4536;
loc_821DE01C:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// stfs f31,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lwzx r29,r11,r27
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821de03c
	if (!ctx.cr6.gt) goto loc_821DE03C;
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
loc_821DE03C:
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// or r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 | ctx.r25.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x821ef358
	ctx.lr = 0x821DE0B0;
	sub_821EF358(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821de0ec
	if (!ctx.cr6.eq) goto loc_821DE0EC;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x821de0ec
	if (ctx.cr6.eq) goto loc_821DE0EC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r21,208
	ctx.r5.s64 = ctx.r21.s64 + 208;
	// bl 0x821de840
	ctx.lr = 0x821DE0E0;
	sub_821DE840(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821de0ec
	if (!ctx.cr6.eq) goto loc_821DE0EC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_821DE0EC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r28,r9,24
	ctx.r28.u64 = ctx.r9.u32 & 0xFF;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// beq cr6,0x821de118
	if (ctx.cr6.eq) goto loc_821DE118;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821de3f0
	ctx.lr = 0x821DE114;
	sub_821DE3F0(ctx, base);
	// b 0x821de134
	goto loc_821DE134;
loc_821DE118:
	// lhz r11,814(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 814);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r10,814(r29)
	PPC_STORE_U16(ctx.r29.u32 + 814, ctx.r10.u16);
	// bl 0x821ddf38
	ctx.lr = 0x821DE128;
	sub_821DDF38(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_821DE134:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x821de01c
	if (!ctx.cr0.eq) goto loc_821DE01C;
loc_821DE140:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DE150"))) PPC_WEAK_FUNC(sub_821DE150);
PPC_FUNC_IMPL(__imp__sub_821DE150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x821DE158;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,814(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 814);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821de18c
	if (ctx.cr6.eq) goto loc_821DE18C;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821de390
	ctx.lr = 0x821DE17C;
	sub_821DE390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_821DE18C:
	// lwz r11,180(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// ble cr6,0x821de1a4
	if (!ctx.cr6.gt) goto loc_821DE1A4;
	// lwz r11,168(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
loc_821DE1A4:
	// lwz r26,16(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// addi r24,r4,788
	ctx.r24.s64 = ctx.r4.s64 + 788;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r11,56
	ctx.r7.s64 = ctx.r11.s64 + 56;
	// lwz r11,792(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 792);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// beq cr6,0x821de380
	if (ctx.cr6.eq) goto loc_821DE380;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// lfs f31,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// addi r22,r11,4536
	ctx.r22.s64 = ctx.r11.s64 + 4536;
loc_821DE230:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// stfs f31,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lwzx r29,r11,r25
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lhz r10,814(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 814);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821de268
	if (!ctx.cr6.eq) goto loc_821DE268;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821de150
	ctx.lr = 0x821DE258;
	sub_821DE150(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x821de374
	goto loc_821DE374;
loc_821DE268:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// ble cr6,0x821de27c
	if (!ctx.cr6.gt) goto loc_821DE27C;
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
loc_821DE27C:
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// or r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 | ctx.r26.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x821ef358
	ctx.lr = 0x821DE2F0;
	sub_821EF358(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821de32c
	if (!ctx.cr6.eq) goto loc_821DE32C;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x821de32c
	if (ctx.cr6.eq) goto loc_821DE32C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r22,208
	ctx.r5.s64 = ctx.r22.s64 + 208;
	// bl 0x821de840
	ctx.lr = 0x821DE320;
	sub_821DE840(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821de32c
	if (!ctx.cr6.eq) goto loc_821DE32C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_821DE32C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r28,r9,24
	ctx.r28.u64 = ctx.r9.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x821de358
	if (ctx.cr6.eq) goto loc_821DE358;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821de3f0
	ctx.lr = 0x821DE354;
	sub_821DE3F0(ctx, base);
	// b 0x821de374
	goto loc_821DE374;
loc_821DE358:
	// lhz r11,814(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 814);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r10,814(r29)
	PPC_STORE_U16(ctx.r29.u32 + 814, ctx.r10.u16);
	// bl 0x821ddf38
	ctx.lr = 0x821DE368;
	sub_821DDF38(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_821DE374:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x821de230
	if (!ctx.cr0.eq) goto loc_821DE230;
loc_821DE380:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DE390"))) PPC_WEAK_FUNC(sub_821DE390);
PPC_FUNC_IMPL(__imp__sub_821DE390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821DE398;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,814(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 814);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// andc r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// sth r9,814(r4)
	PPC_STORE_U16(ctx.r4.u32 + 814, ctx.r9.u16);
	// addi r28,r4,788
	ctx.r28.s64 = ctx.r4.s64 + 788;
	// lwz r31,792(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 792);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821de3e8
	if (ctx.cr6.eq) goto loc_821DE3E8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821DE3C8:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x821de390
	ctx.lr = 0x821DE3DC;
	sub_821DE390(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821de3c8
	if (!ctx.cr0.eq) goto loc_821DE3C8;
loc_821DE3E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DE3F0"))) PPC_WEAK_FUNC(sub_821DE3F0);
PPC_FUNC_IMPL(__imp__sub_821DE3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821DE3F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,814(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 814);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// sth r9,814(r4)
	PPC_STORE_U16(ctx.r4.u32 + 814, ctx.r9.u16);
	// addi r28,r4,788
	ctx.r28.s64 = ctx.r4.s64 + 788;
	// lwz r31,792(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 792);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821de448
	if (ctx.cr6.eq) goto loc_821DE448;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821DE428:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x821de3f0
	ctx.lr = 0x821DE43C;
	sub_821DE3F0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821de428
	if (!ctx.cr0.eq) goto loc_821DE428;
loc_821DE448:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DE450"))) PPC_WEAK_FUNC(sub_821DE450);
PPC_FUNC_IMPL(__imp__sub_821DE450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x821DE458;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821de4dc
	if (!ctx.cr6.eq) goto loc_821DE4DC;
	// addi r4,r3,100
	ctx.r4.s64 = ctx.r3.s64 + 100;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x821ee318
	ctx.lr = 0x821DE488;
	sub_821EE318(ctx, base);
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821de4c4
	if (ctx.cr6.eq) goto loc_821DE4C4;
	// lwz r11,188(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,180(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x821ddf38
	ctx.lr = 0x821DE4AC;
	sub_821DDF38(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821de4c4
	if (ctx.cr6.eq) goto loc_821DE4C4;
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r10.u32);
loc_821DE4C4:
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_821DE4DC:
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,180(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821de648
	if (ctx.cr6.eq) goto loc_821DE648;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,1220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1220);
	ctx.f31.f64 = double(temp.f32);
loc_821DE504:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r24,r11,656
	ctx.r24.s64 = ctx.r11.s64 + 656;
	// lwz r11,660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821de63c
	if (ctx.cr6.eq) goto loc_821DE63C;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_821DE520:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwzx r31,r27,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821de630
	if (ctx.cr6.eq) goto loc_821DE630;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821de630
	if (!ctx.cr6.eq) goto loc_821DE630;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821de630
	if (!ctx.cr6.eq) goto loc_821DE630;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821de5a4
	if (ctx.cr6.eq) goto loc_821DE5A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821de630
	if (!ctx.cr6.eq) goto loc_821DE630;
	// addi r5,r29,20
	ctx.r5.s64 = ctx.r29.s64 + 20;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82257540
	ctx.lr = 0x821DE578;
	sub_82257540(ctx, base);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82257540
	ctx.lr = 0x821DE588;
	sub_82257540(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// b 0x821de5dc
	goto loc_821DE5DC;
loc_821DE5A4:
	// addi r5,r29,20
	ctx.r5.s64 = ctx.r29.s64 + 20;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82257540
	ctx.lr = 0x821DE5B4;
	sub_82257540(ctx, base);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82257540
	ctx.lr = 0x821DE5C4;
	sub_82257540(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
loc_821DE5DC:
	// fsubs f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821de630
	if (!ctx.cr6.gt) goto loc_821DE630;
	// lwz r11,784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821de610
	if (!ctx.cr6.eq) goto loc_821DE610;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x821de620
	goto loc_821DE620;
loc_821DE610:
	// lwz r11,784(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 784);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x821de630
	if (!ctx.cr6.eq) goto loc_821DE630;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_821DE620:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821de3f0
	ctx.lr = 0x821DE62C;
	sub_821DE3F0(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
loc_821DE630:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x821de520
	if (!ctx.cr0.eq) goto loc_821DE520;
loc_821DE63C:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// bne 0x821de504
	if (!ctx.cr0.eq) goto loc_821DE504;
loc_821DE648:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821de660
	if (ctx.cr6.eq) goto loc_821DE660;
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r10.u32);
loc_821DE660:
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821de6b4
	if (ctx.cr6.eq) goto loc_821DE6B4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,100
	ctx.r4.s64 = ctx.r28.s64 + 100;
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// bl 0x821ee318
	ctx.lr = 0x821DE684;
	sub_821EE318(ctx, base);
	// lwz r11,188(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// lwz r10,180(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x821de150
	ctx.lr = 0x821DE69C;
	sub_821DE150(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821de6b4
	if (!ctx.cr6.eq) goto loc_821DE6B4;
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r10.u32);
loc_821DE6B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DE6C0"))) PPC_WEAK_FUNC(sub_821DE6C0);
PPC_FUNC_IMPL(__imp__sub_821DE6C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_821DE6D8:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,304(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 304);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821de748
	if (ctx.cr6.eq) goto loc_821DE748;
	// lwz r11,180(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 180);
	// addi r9,r7,168
	ctx.r9.s64 = ctx.r7.s64 + 168;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821de73c
	if (ctx.cr6.eq) goto loc_821DE73C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821DE708:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821de71c
	if (ctx.cr6.lt) goto loc_821DE71C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821de724
	goto loc_821DE724;
loc_821DE71C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821DE724:
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// rlwinm r3,r4,0,4,2
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bdnz 0x821de708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DE708;
loc_821DE73C:
	// lwz r11,304(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 304);
	// rlwinm r10,r11,0,13,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r10,304(r7)
	PPC_STORE_U32(ctx.r7.u32 + 304, ctx.r10.u32);
loc_821DE748:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x821de6d8
	if (!ctx.cr0.eq) goto loc_821DE6D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE758"))) PPC_WEAK_FUNC(sub_821DE758);
PPC_FUNC_IMPL(__imp__sub_821DE758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,184(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r6,180(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x821de7ac
	if (ctx.cr6.lt) goto loc_821DE7AC;
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
loc_821DE780:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// lwzu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stfs f0,456(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 456, temp.u32);
	// stfs f0,456(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 456, temp.u32);
	// stfs f0,456(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// stfs f0,456(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 456, temp.u32);
	// blt cr6,0x821de780
	if (ctx.cr6.lt) goto loc_821DE780;
loc_821DE7AC:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DE7C8:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stfs f0,456(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 456, temp.u32);
	// bdnz 0x821de7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DE7C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE7D8"))) PPC_WEAK_FUNC(sub_821DE7D8);
PPC_FUNC_IMPL(__imp__sub_821DE7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// bne cr6,0x821de7f0
	if (!ctx.cr6.eq) goto loc_821DE7F0;
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_821DE7F0:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821de80c
	if (!ctx.cr6.eq) goto loc_821DE80C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,-616(r3)
	PPC_STORE_U32(ctx.r3.u32 + -616, ctx.r11.u32);
	// blr 
	return;
loc_821DE80C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DE82C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// stw r9,160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 160, ctx.r9.u32);
	// bdnz 0x821de82c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DE82C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE840"))) PPC_WEAK_FUNC(sub_821DE840);
PPC_FUNC_IMPL(__imp__sub_821DE840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821DE848;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f10,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f10,f10
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fadds f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// lfs f1,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// fadds f10,f13,f8
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fadds f8,f4,f2
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fmadds f9,f5,f5,f6
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmadds f5,f11,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// fsqrts f3,f5
	ctx.f3.f64 = double(float(sqrt(ctx.f5.f64)));
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x821de978
	if (ctx.cr6.eq) goto loc_821DE978;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_821DE908:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82216980
	ctx.lr = 0x821DE928;
	sub_82216980(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821de96c
	if (ctx.cr6.eq) goto loc_821DE96C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r29,156(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x821de960
	if (!ctx.cr6.eq) goto loc_821DE960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f5f90
	ctx.lr = 0x821DE95C;
	sub_820F5F90(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
loc_821DE960:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_821DE96C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x821de908
	if (!ctx.cr0.eq) goto loc_821DE908;
loc_821DE978:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DE984"))) PPC_WEAK_FUNC(sub_821DE984);
PPC_FUNC_IMPL(__imp__sub_821DE984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE988"))) PPC_WEAK_FUNC(sub_821DE988);
PPC_FUNC_IMPL(__imp__sub_821DE988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821DE990;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// addi r9,r9,31376
	ctx.r9.s64 = ctx.r9.s64 + 31376;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f0,224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// fmadds f9,f10,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// blt cr6,0x821deac8
	if (ctx.cr6.lt) goto loc_821DEAC8;
	// lwz r3,24(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821deac8
	if (ctx.cr6.eq) goto loc_821DEAC8;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821deac8
	if (ctx.cr6.eq) goto loc_821DEAC8;
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f9,f9
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fadds f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fadds f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f9,f3,f1
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// fmadds f10,f4,f4,f5
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fadds f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fsqrts f4,f6
	ctx.f4.f64 = double(float(sqrt(ctx.f6.f64)));
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82216980
	ctx.lr = 0x821DEA88;
	sub_82216980(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821deac8
	if (ctx.cr6.eq) goto loc_821DEAC8;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821deaac
	if (!ctx.cr6.eq) goto loc_821DEAAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f5f90
	ctx.lr = 0x821DEAA8;
	sub_820F5F90(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
loc_821DEAAC:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821DEAC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DEAD4"))) PPC_WEAK_FUNC(sub_821DEAD4);
PPC_FUNC_IMPL(__imp__sub_821DEAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEAD8"))) PPC_WEAK_FUNC(sub_821DEAD8);
PPC_FUNC_IMPL(__imp__sub_821DEAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x821DEAE0;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r25,r11,31376
	ctx.r25.s64 = ctx.r11.s64 + 31376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// lfs f0,376(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fabs f8,f9
	ctx.f8.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x821deb48
	if (!ctx.cr6.lt) goto loc_821DEB48;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f29,-88(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821DEB48:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lfs f30,36(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x820d6a68
	ctx.lr = 0x821DEB68;
	sub_820D6A68(ctx, base);
	// lfs f31,48(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// lfs f29,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// ble cr6,0x821debe8
	if (!ctx.cr6.gt) goto loc_821DEBE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,284(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f31,276(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,272(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// stfs f31,264(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stfs f31,256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stw r10,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f30,300(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f30,280(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f30,260(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f30,240(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f29,408(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f29,412(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x821DEBE0;
	sub_8233E4E0(ctx, base);
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
loc_821DEBE8:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r27,r11,4536
	ctx.r27.s64 = ctx.r11.s64 + 4536;
	// beq cr6,0x821dedd0
	if (ctx.cr6.eq) goto loc_821DEDD0;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821e1c98
	ctx.lr = 0x821DEC40;
	sub_821E1C98(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dec94
	if (ctx.cr6.eq) goto loc_821DEC94;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821dec94
	if (ctx.cr6.eq) goto loc_821DEC94;
	// lwz r11,152(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,776
	ctx.r3.s64 = ctx.r26.s64 + 776;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dec70
	if (ctx.cr6.eq) goto loc_821DEC70;
	// lwz r3,776(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 776);
loc_821DEC70:
	// bl 0x821cfa58
	ctx.lr = 0x821DEC74;
	sub_821CFA58(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821eec68
	ctx.lr = 0x821DEC8C;
	sub_821EEC68(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x821dedb8
	goto loc_821DEDB8;
loc_821DEC94:
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r27,1768
	ctx.r3.s64 = ctx.r27.s64 + 1768;
	// beq cr6,0x821ded30
	if (ctx.cr6.eq) goto loc_821DED30;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x821decf4
	if (!ctx.cr6.gt) goto loc_821DECF4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r10,r11,-24092
	ctx.r10.s64 = ctx.r11.s64 + -24092;
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x820cbe70
	ctx.lr = 0x821DECDC;
	sub_820CBE70(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f13,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r9,-24680
	ctx.r8.s64 = ctx.r9.s64 + -24680;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// lwz r28,192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// b 0x821dedb0
	goto loc_821DEDB0;
loc_821DECF4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,-24084
	ctx.r10.s64 = ctx.r11.s64 + -24084;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x820cbe70
	ctx.lr = 0x821DED18;
	sub_820CBE70(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r9,-24680
	ctx.r8.s64 = ctx.r9.s64 + -24680;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x821dedb0
	goto loc_821DEDB0;
loc_821DED30:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x821ded78
	if (!ctx.cr6.gt) goto loc_821DED78;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r10,r11,-24108
	ctx.r10.s64 = ctx.r11.s64 + -24108;
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// stw r28,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x820cbe70
	ctx.lr = 0x821DED60;
	sub_820CBE70(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f13,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r9,-24680
	ctx.r8.s64 = ctx.r9.s64 + -24680;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// lwz r28,224(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// b 0x821dedb0
	goto loc_821DEDB0;
loc_821DED78:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,-24100
	ctx.r10.s64 = ctx.r11.s64 + -24100;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x820cbe70
	ctx.lr = 0x821DED9C;
	sub_820CBE70(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f13,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r9,-24680
	ctx.r8.s64 = ctx.r9.s64 + -24680;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_821DEDB0:
	// stfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_821DEDB8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821dedd0
	if (ctx.cr6.eq) goto loc_821DEDD0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821dee80
	if (!ctx.cr6.eq) goto loc_821DEE80;
loc_821DEDD0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dee80
	if (ctx.cr6.eq) goto loc_821DEE80;
	// lfs f5,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f10,f10
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fadds f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f0,60(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,336(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fadds f10,f4,f2
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmadds f11,f5,f5,f6
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmadds f7,f12,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// fsqrts f5,f7
	ctx.f5.f64 = double(float(sqrt(ctx.f7.f64)));
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x821e3b60
	ctx.lr = 0x821DEE7C;
	sub_821E3B60(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_821DEE80:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stfs f0,44(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 44, temp.u32);
	// beq cr6,0x821deee4
	if (ctx.cr6.eq) goto loc_821DEEE4;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// ble cr6,0x821deee4
	if (!ctx.cr6.gt) goto loc_821DEEE4;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821DEEE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DEEFC"))) PPC_WEAK_FUNC(sub_821DEEFC);
PPC_FUNC_IMPL(__imp__sub_821DEEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEF00"))) PPC_WEAK_FUNC(sub_821DEF00);
PPC_FUNC_IMPL(__imp__sub_821DEF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821DEF08;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lbz r10,5628(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5628);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821defe4
	if (ctx.cr6.eq) goto loc_821DEFE4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821defd8
	if (ctx.cr6.eq) goto loc_821DEFD8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r25,4536(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4536);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821defd8
	if (ctx.cr6.eq) goto loc_821DEFD8;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_821DEF4C:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821def78
	if (!ctx.cr6.eq) goto loc_821DEF78;
	// addi r3,r11,-776
	ctx.r3.s64 = ctx.r11.s64 + -776;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82216d88
	ctx.lr = 0x821DEF70;
	sub_82216D88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x821defc0
	goto loc_821DEFC0;
loc_821DEF78:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821defcc
	if (!ctx.cr6.eq) goto loc_821DEFCC;
	// lwz r31,184(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821defbc
	if (ctx.cr6.eq) goto loc_821DEFBC;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_821DEF98:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82216d88
	ctx.lr = 0x821DEFA8;
	sub_82216D88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// or r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bne 0x821def98
	if (!ctx.cr0.eq) goto loc_821DEF98;
loc_821DEFBC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
loc_821DEFC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821defcc
	if (ctx.cr6.eq) goto loc_821DEFCC;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_821DEFCC:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x821def4c
	if (!ctx.cr0.eq) goto loc_821DEF4C;
loc_821DEFD8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_821DEFE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821deff8
	if (!ctx.cr6.eq) goto loc_821DEFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_821DEFF8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// lwz r3,336(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// bl 0x821e33e8
	ctx.lr = 0x821DF00C;
	sub_821E33E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DF014"))) PPC_WEAK_FUNC(sub_821DF014);
PPC_FUNC_IMPL(__imp__sub_821DF014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF018"))) PPC_WEAK_FUNC(sub_821DF018);
PPC_FUNC_IMPL(__imp__sub_821DF018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x821DF020;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r26,r11,31376
	ctx.r26.s64 = ctx.r11.s64 + 31376;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r24,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r24.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f0,36(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// bl 0x820d6a68
	ctx.lr = 0x821DF068;
	sub_820D6A68(ctx, base);
	// lfs f31,48(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stw r25,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r25.u32);
	// lfs f0,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821df0bc
	if (!ctx.cr6.gt) goto loc_821DF0BC;
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f12,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r11.u32);
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f6,172(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f5,176(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
loc_821DF0BC:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821df254
	if (ctx.cr6.eq) goto loc_821DF254;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821df254
	if (ctx.cr6.eq) goto loc_821DF254;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821df180
	if (ctx.cr6.eq) goto loc_821DF180;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// ble cr6,0x821df134
	if (!ctx.cr6.gt) goto loc_821DF134;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821df254
	if (ctx.cr6.eq) goto loc_821DF254;
loc_821DF0F8:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821e09f0
	ctx.lr = 0x821DF114;
	sub_821E09F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821df178
	if (!ctx.cr6.eq) goto loc_821DF178;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x821df0f8
	if (ctx.cr6.lt) goto loc_821DF0F8;
	// b 0x821df20c
	goto loc_821DF20C;
loc_821DF134:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821df254
	if (ctx.cr6.eq) goto loc_821DF254;
loc_821DF13C:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821e0778
	ctx.lr = 0x821DF158;
	sub_821E0778(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821df178
	if (!ctx.cr6.eq) goto loc_821DF178;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x821df13c
	if (ctx.cr6.lt) goto loc_821DF13C;
	// b 0x821df20c
	goto loc_821DF20C;
loc_821DF178:
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x821df20c
	goto loc_821DF20C;
loc_821DF180:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821df1cc
	if (!ctx.cr6.gt) goto loc_821DF1CC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821df254
	if (ctx.cr6.eq) goto loc_821DF254;
loc_821DF190:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821e09f0
	ctx.lr = 0x821DF1AC;
	sub_821E09F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821df1bc
	if (ctx.cr6.eq) goto loc_821DF1BC;
	// li r21,1
	ctx.r21.s64 = 1;
loc_821DF1BC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821df190
	if (!ctx.cr0.eq) goto loc_821DF190;
	// b 0x821df20c
	goto loc_821DF20C;
loc_821DF1CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821df254
	if (ctx.cr6.eq) goto loc_821DF254;
loc_821DF1D4:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821e0778
	ctx.lr = 0x821DF1F0;
	sub_821E0778(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821df200
	if (ctx.cr6.eq) goto loc_821DF200;
	// li r21,1
	ctx.r21.s64 = 1;
loc_821DF200:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821df1d4
	if (!ctx.cr0.eq) goto loc_821DF1D4;
loc_821DF20C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821df23c
	if (ctx.cr6.eq) goto loc_821DF23C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r8,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r8.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// divw r5,r6,r9
	ctx.r5.s32 = ctx.r6.s32 / ctx.r9.s32;
	// stw r24,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r24.u32);
	// stw r5,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r5.u32);
loc_821DF23C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x821df254
	if (ctx.cr6.eq) goto loc_821DF254;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821df3e4
	if (!ctx.cr6.eq) goto loc_821DF3E4;
loc_821DF254:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821df3e4
	if (ctx.cr6.eq) goto loc_821DF3E4;
	// lfs f5,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// lfs f4,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// lfs f11,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f10,f10
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fadds f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f0,60(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fadds f10,f4,f2
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f1,f12,f9
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fmadds f12,f5,f5,f6
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmadds f7,f11,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// fsqrts f5,f7
	ctx.f5.f64 = double(float(sqrt(ctx.f7.f64)));
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x821df374
	if (ctx.cr6.eq) goto loc_821DF374;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821df3e4
	if (ctx.cr6.eq) goto loc_821DF3E4;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_821DF308:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82216980
	ctx.lr = 0x821DF328;
	sub_82216980(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821df348
	if (!ctx.cr6.eq) goto loc_821DF348;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x821df308
	if (ctx.cr6.lt) goto loc_821DF308;
	// b 0x821df3e4
	goto loc_821DF3E4;
loc_821DF348:
	// lwz r31,156(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// li r21,2
	ctx.r21.s64 = 2;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821df368
	if (!ctx.cr6.eq) goto loc_821DF368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x821DF364;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_821DF368:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// b 0x821df3e4
	goto loc_821DF3E4;
loc_821DF374:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821df3e4
	if (ctx.cr6.eq) goto loc_821DF3E4;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_821DF384:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82216980
	ctx.lr = 0x821DF3A4;
	sub_82216980(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821df3d8
	if (ctx.cr6.eq) goto loc_821DF3D8;
	// lwz r31,156(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r21,2
	ctx.r21.s64 = 2;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821df3d0
	if (!ctx.cr6.eq) goto loc_821DF3D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x821DF3CC;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_821DF3D0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
loc_821DF3D8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821df384
	if (!ctx.cr0.eq) goto loc_821DF384;
loc_821DF3E4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stfs f0,44(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 44, temp.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// beq cr6,0x821df44c
	if (ctx.cr6.eq) goto loc_821DF44C;
	// lfs f0,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r27,12
	ctx.r11.s64 = ctx.r27.s64 + 12;
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f8,f9,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// ble cr6,0x821df44c
	if (!ctx.cr6.gt) goto loc_821DF44C;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821DF44C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DF458"))) PPC_WEAK_FUNC(sub_821DF458);
PPC_FUNC_IMPL(__imp__sub_821DF458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x821DF460;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa24
	ctx.lr = 0x821DF468;
	__savefpr_23(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f13,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r11,31376
	ctx.r31.s64 = ctx.r11.s64 + 31376;
	// lwz r22,20(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r21,24(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lwz r16,52(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lwz r15,64(r10)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stfs f12,404(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// lwz r14,68(r10)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stfs f11,408(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// lwz r20,28(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lwz r19,32(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// lwz r18,40(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lwz r17,48(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// fadds f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r8,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r8.u32);
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// addi r6,r1,296
	ctx.r6.s64 = ctx.r1.s64 + 296;
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stw r7,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// stw r9,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r9.u32);
	// stfs f29,236(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r8,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// stw r7,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r7.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r22,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r22.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r21,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r21.u32);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// stw r20,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r20.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// stw r19,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r19.u32);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// stw r18,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r18.u32);
	// stw r17,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r17.u32);
	// stw r16,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r16.u32);
	// stw r15,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r15.u32);
	// stw r14,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r14.u32);
	// stw r10,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// lfs f7,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// lfs f4,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// lfs f2,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// lfs f0,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// lfs f12,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f5,252(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f3,256(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f1,260(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f13,240(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f11,244(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f10,248(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// bl 0x82137c48
	ctx.lr = 0x821DF5AC;
	sub_82137C48(ctx, base);
	// lfs f0,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f28,f0,f8
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f13,316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f10.f64 = double(temp.f32);
	// fabs f26,f13
	ctx.f26.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f7,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f25,f10,f7
	ctx.f25.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// lfs f9,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f24,f9,f6
	ctx.f24.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// lfs f12,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f5,f1,f9
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// lfs f31,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f31.f64 = double(temp.f32);
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f11,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f4,f31,f0
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f9,336(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fabs f23,f11
	ctx.f23.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fmuls f27,f28,f13
	ctx.f27.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// lfs f30,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f3,f30,f10
	ctx.f3.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// stfs f26,332(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// lfs f2,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f25,f12
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f12.f64));
	// stfs f23,340(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fmsubs f9,f25,f11,f27
	ctx.f9.f64 = double(float(ctx.f25.f64 * ctx.f11.f64 - ctx.f27.f64));
	// stfs f9,212(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmuls f27,f24,f11
	ctx.f27.f64 = double(float(ctx.f24.f64 * ctx.f11.f64));
	// fmsubs f10,f24,f13,f0
	ctx.f10.f64 = double(float(ctx.f24.f64 * ctx.f13.f64 - ctx.f0.f64));
	// stfs f10,216(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmuls f26,f9,f5
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmsubs f0,f28,f12,f27
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 - ctx.f27.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmadds f28,f10,f4,f26
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f26.f64));
	// fmadds f28,f0,f3,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f28.f64));
	// fcmpu cr6,f28,f2
	ctx.cr6.compare(ctx.f28.f64, ctx.f2.f64);
	// ble cr6,0x821df684
	if (!ctx.cr6.gt) goto loc_821DF684;
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f9,228(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f10,232(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stfs f9,224(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// lfs f9,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
loc_821DF684:
	// fmuls f28,f9,f9
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// fsubs f27,f1,f6
	ctx.f27.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// fsubs f1,f30,f7
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f7.f64));
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f31,f31,f8
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f8.f64));
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r10,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// lfs f26,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f26.f64 = double(temp.f32);
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// stw r9,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r9.u32);
	// fmadds f10,f10,f10,f28
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f28.f64));
	// fmuls f25,f27,f11
	ctx.f25.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// fmuls f24,f1,f12
	ctx.f24.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f28,f31,f13
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmadds f23,f0,f0,f10
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmsubs f10,f27,f13,f24
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 - ctx.f24.f64));
	// stfs f10,232(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmsubs f11,f1,f11,f28
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 - ctx.f28.f64));
	// stfs f11,228(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmsubs f1,f31,f12,f25
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 - ctx.f25.f64));
	// stfs f1,224(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lfs f30,348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f30.f64 = double(temp.f32);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// fsqrts f13,f23
	ctx.f13.f64 = double(float(sqrt(ctx.f23.f64)));
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// fdivs f31,f9,f13
	ctx.f31.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// fmuls f5,f11,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// stfs f13,348(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// stfs f12,352(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fmadds f4,f10,f4,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f0,344(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// stfs f13,380(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stfs f13,384(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// fmadds f4,f1,f3,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fabs f3,f0
	ctx.f3.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f3,376(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// fmadds f12,f8,f12,f5
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f2
	ctx.cr6.compare(ctx.f4.f64, ctx.f2.f64);
	// fnmadds f5,f7,f0,f12
	ctx.f5.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64)));
	// stfs f5,356(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// bge cr6,0x821df788
	if (!ctx.cr6.lt) goto loc_821DF788;
	// fneg f12,f10
	ctx.f12.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// fneg f13,f11
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
loc_821DF788:
	// lfs f0,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r9.u32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// lfs f10,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// addi r8,r10,-24116
	ctx.r8.s64 = ctx.r10.s64 + -24116;
	// stfs f29,440(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// stw r8,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r8.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stb r7,456(r1)
	PPC_STORE_U8(ctx.r1.u32 + 456, ctx.r7.u8);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r31,r11,4536
	ctx.r31.s64 = ctx.r11.s64 + 4536;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// fmadds f5,f13,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// addi r3,r31,1768
	ctx.r3.s64 = ctx.r31.s64 + 1768;
	// fmadds f4,f0,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// lfs f11,364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	ctx.f11.f64 = double(temp.f32);
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fdivs f2,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 / ctx.f3.f64));
	// fmuls f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// stfs f13,364(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// fmuls f12,f2,f10
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// stfs f12,368(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// fmuls f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// stfs f13,392(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f11,388(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stfs f10,396(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// fmadds f9,f8,f12,f1
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fnmadds f8,f7,f0,f9
	ctx.f8.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 + ctx.f9.f64)));
	// stfs f8,372(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// bl 0x820cbe70
	ctx.lr = 0x821DF834;
	sub_820CBE70(ctx, base);
	// lwz r6,444(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r5,448(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// lfs f7,440(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	ctx.f7.f64 = double(temp.f32);
	// lwz r4,452(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// stfs f7,236(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lwz r3,412(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// stw r4,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r4.u32);
	// lbz r30,456(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 456);
	// beq cr6,0x821df8b8
	if (ctx.cr6.eq) goto loc_821DF8B8;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r10,r1,236
	ctx.r10.s64 = ctx.r1.s64 + 236;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x8233e4e0
	ctx.lr = 0x821DF884;
	sub_8233E4E0(ctx, base);
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// ld r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// ld r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// ld r6,288(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// ld r7,296(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// ld r8,304(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// ld r9,312(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// ld r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// bl 0x821e2ee8
	ctx.lr = 0x821DF8A8;
	sub_821E2EE8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821df8b8
	if (ctx.cr6.eq) goto loc_821DF8B8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_821DF8B8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821df8d8
	if (!ctx.cr6.eq) goto loc_821DF8D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa70
	ctx.lr = 0x821DF8D4;
	__restfpr_23(ctx, base);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_821DF8D8:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lfs f0,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa70
	ctx.lr = 0x821DF908;
	__restfpr_23(ctx, base);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DF90C"))) PPC_WEAK_FUNC(sub_821DF90C);
PPC_FUNC_IMPL(__imp__sub_821DF90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF910"))) PPC_WEAK_FUNC(sub_821DF910);
PPC_FUNC_IMPL(__imp__sub_821DF910) {
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
	// addi r6,r3,12
	ctx.r6.s64 = ctx.r3.s64 + 12;
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// lwz r3,36(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821ec440
	ctx.lr = 0x821DF938;
	sub_821EC440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821df950
	if (ctx.cr6.eq) goto loc_821DF950;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
loc_821DF950:
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

__attribute__((alias("__imp__sub_821DF964"))) PPC_WEAK_FUNC(sub_821DF964);
PPC_FUNC_IMPL(__imp__sub_821DF964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF968"))) PPC_WEAK_FUNC(sub_821DF968);
PPC_FUNC_IMPL(__imp__sub_821DF968) {
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
	// lwz r3,36(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x821ebe30
	ctx.lr = 0x821DF994;
	sub_821EBE30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821df9ac
	if (ctx.cr6.eq) goto loc_821DF9AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_821DF9AC:
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

__attribute__((alias("__imp__sub_821DF9C0"))) PPC_WEAK_FUNC(sub_821DF9C0);
PPC_FUNC_IMPL(__imp__sub_821DF9C0) {
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
	// lwz r3,36(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x821ec980
	ctx.lr = 0x821DF9EC;
	sub_821EC980(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dfa04
	if (ctx.cr6.eq) goto loc_821DFA04;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_821DFA04:
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

__attribute__((alias("__imp__sub_821DFA18"))) PPC_WEAK_FUNC(sub_821DFA18);
PPC_FUNC_IMPL(__imp__sub_821DFA18) {
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
	// lwz r3,36(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x821ebe30
	ctx.lr = 0x821DFA4C;
	sub_821EBE30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dfa64
	if (ctx.cr6.eq) goto loc_821DFA64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// b 0x821dfa68
	goto loc_821DFA68;
loc_821DFA64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821DFA68:
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

__attribute__((alias("__imp__sub_821DFA80"))) PPC_WEAK_FUNC(sub_821DFA80);
PPC_FUNC_IMPL(__imp__sub_821DFA80) {
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
	// lwz r3,36(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x821ec980
	ctx.lr = 0x821DFAB4;
	sub_821EC980(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dfacc
	if (ctx.cr6.eq) goto loc_821DFACC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// b 0x821dfad0
	goto loc_821DFAD0;
loc_821DFACC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821DFAD0:
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

__attribute__((alias("__imp__sub_821DFAE8"))) PPC_WEAK_FUNC(sub_821DFAE8);
PPC_FUNC_IMPL(__imp__sub_821DFAE8) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dfb48
	if (ctx.cr6.eq) goto loc_821DFB48;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dfb08
	if (ctx.cr6.eq) goto loc_821DFB08;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x821dfb0c
	goto loc_821DFB0C;
loc_821DFB08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DFB0C:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821dfb48
	if (!ctx.cr6.lt) goto loc_821DFB48;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821dfb48
	if (ctx.cr6.lt) goto loc_821DFB48;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dfb48
	if (ctx.cr6.eq) goto loc_821DFB48;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821dfb48
	if (ctx.cr6.eq) goto loc_821DFB48;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
loc_821DFB48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DFB50"))) PPC_WEAK_FUNC(sub_821DFB50);
PPC_FUNC_IMPL(__imp__sub_821DFB50) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dfb64
	if (ctx.cr6.eq) goto loc_821DFB64;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// b 0x821dfb68
	goto loc_821DFB68;
loc_821DFB64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DFB68:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dfb80
	if (ctx.cr6.eq) goto loc_821DFB80;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821dfb80
	if (!ctx.cr6.lt) goto loc_821DFB80;
	// addi r3,r10,168
	ctx.r3.s64 = ctx.r10.s64 + 168;
	// b 0x821d3528
	sub_821D3528(ctx, base);
	return;
loc_821DFB80:
	// lhz r9,240(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// b 0x821d3528
	sub_821D3528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DFBC0"))) PPC_WEAK_FUNC(sub_821DFBC0);
PPC_FUNC_IMPL(__imp__sub_821DFBC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DFBC4"))) PPC_WEAK_FUNC(sub_821DFBC4);
PPC_FUNC_IMPL(__imp__sub_821DFBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DFBC8"))) PPC_WEAK_FUNC(sub_821DFBC8);
PPC_FUNC_IMPL(__imp__sub_821DFBC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dfbe4
	if (ctx.cr6.eq) goto loc_821DFBE4;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x821dfbe8
	goto loc_821DFBE8;
loc_821DFBE4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821DFBE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dfc14
	if (ctx.cr6.eq) goto loc_821DFC14;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821dfc14
	if (!ctx.cr6.lt) goto loc_821DFC14;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821dfc58
	if (!ctx.cr6.lt) goto loc_821DFC58;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mulli r11,r4,236
	ctx.r11.s64 = ctx.r4.s64 * 236;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_821DFC14:
	// lhz r11,240(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 240);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,236(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x821dfc60
	if (ctx.cr6.gt) goto loc_821DFC60;
loc_821DFC58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821DFC60:
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DFC68"))) PPC_WEAK_FUNC(sub_821DFC68);
PPC_FUNC_IMPL(__imp__sub_821DFC68) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dfc7c
	if (ctx.cr6.eq) goto loc_821DFC7C;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// b 0x821dfc80
	goto loc_821DFC80;
loc_821DFC7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DFC80:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dfc98
	if (ctx.cr6.eq) goto loc_821DFC98;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821dfc98
	if (!ctx.cr6.lt) goto loc_821DFC98;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_821DFC98:
	// lhz r9,240(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821dfccc
	if (!ctx.cr6.lt) goto loc_821DFCCC;
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dfccc
	if (ctx.cr6.eq) goto loc_821DFCCC;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dfccc
	if (ctx.cr6.eq) goto loc_821DFCCC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_821DFCCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DFCD4"))) PPC_WEAK_FUNC(sub_821DFCD4);
PPC_FUNC_IMPL(__imp__sub_821DFCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DFCD8"))) PPC_WEAK_FUNC(sub_821DFCD8);
PPC_FUNC_IMPL(__imp__sub_821DFCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// stw r9,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r8.u32);
	// lfs f0,224(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r7.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
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
	// beq cr6,0x821dfd44
	if (ctx.cr6.eq) goto loc_821DFD44;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
loc_821DFD44:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DFD58"))) PPC_WEAK_FUNC(sub_821DFD58);
PPC_FUNC_IMPL(__imp__sub_821DFD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// stw r9,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r8.u32);
	// lfs f0,224(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r7.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
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
	// beq cr6,0x821dfdc4
	if (ctx.cr6.eq) goto loc_821DFDC4;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
loc_821DFDC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DFDD8"))) PPC_WEAK_FUNC(sub_821DFDD8);
PPC_FUNC_IMPL(__imp__sub_821DFDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,508
	ctx.r11.s64 = ctx.r3.s64 + 508;
	// lfs f13,508(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,512(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,508(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 508, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,516(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,512(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,516(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
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
	// beq cr6,0x821dfe34
	if (ctx.cr6.eq) goto loc_821DFE34;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
loc_821DFE34:
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

__attribute__((alias("__imp__sub_821DFE50"))) PPC_WEAK_FUNC(sub_821DFE50);
PPC_FUNC_IMPL(__imp__sub_821DFE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,520
	ctx.r11.s64 = ctx.r3.s64 + 520;
	// lfs f13,520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,520(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,528(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,524(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,528(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 528, temp.u32);
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
	// beq cr6,0x821dfeac
	if (ctx.cr6.eq) goto loc_821DFEAC;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
loc_821DFEAC:
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

__attribute__((alias("__imp__sub_821DFEC8"))) PPC_WEAK_FUNC(sub_821DFEC8);
PPC_FUNC_IMPL(__imp__sub_821DFEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x821DFED0;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// beq cr6,0x821dff1c
	if (ctx.cr6.eq) goto loc_821DFF1C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82257600
	ctx.lr = 0x821DFF1C;
	sub_82257600(ctx, base);
loc_821DFF1C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821dff7c
	if (ctx.cr6.eq) goto loc_821DFF7C;
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dff38
	if (ctx.cr6.eq) goto loc_821DFF38;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x821dff5c
	goto loc_821DFF5C;
loc_821DFF38:
	// addi r5,r28,32
	ctx.r5.s64 = ctx.r28.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82257cb8
	ctx.lr = 0x821DFF48;
	sub_82257CB8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82257600
	ctx.lr = 0x821DFF58;
	sub_82257600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_821DFF5C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82257600
	ctx.lr = 0x821DFF68;
	sub_82257600(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82215fd0
	ctx.lr = 0x821DFF78;
	sub_82215FD0(ctx, base);
	// b 0x821dffd4
	goto loc_821DFFD4;
loc_821DFF7C:
	// lfs f0,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f8,460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,464(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f9,468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f9.f64 = double(temp.f32);
	// fadds f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// stw r9,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r9.u32);
	// stw r10,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r10.u32);
loc_821DFFD4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821e0014
	if (ctx.cr6.eq) goto loc_821E0014;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821e0014
	if (ctx.cr6.eq) goto loc_821E0014;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dfffc
	if (ctx.cr6.eq) goto loc_821DFFFC;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_821DFFFC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_821E0014:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E001C"))) PPC_WEAK_FUNC(sub_821E001C);
PPC_FUNC_IMPL(__imp__sub_821E001C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0020"))) PPC_WEAK_FUNC(sub_821E0020);
PPC_FUNC_IMPL(__imp__sub_821E0020) {
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
	// lhz r11,178(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 178);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// blt cr6,0x821e0048
	if (ctx.cr6.lt) goto loc_821E0048;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x821e005c
	goto loc_821E005C;
loc_821E0048:
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_821E005C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x821E0064;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e0104
	if (ctx.cr6.eq) goto loc_821E0104;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e009c
	if (ctx.cr6.eq) goto loc_821E009C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e0088
	if (ctx.cr6.eq) goto loc_821E0088;
	// lwz r10,160(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 160);
loc_821E0088:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e009c
	if (ctx.cr6.eq) goto loc_821E009C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E009C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// andc r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// beq cr6,0x821e0104
	if (ctx.cr6.eq) goto loc_821E0104;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x821dfb50
	ctx.lr = 0x821E00BC;
	sub_821DFB50(ctx, base);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x821dfc68
	ctx.lr = 0x821E00C4;
	sub_821DFC68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e00ec
	if (ctx.cr6.eq) goto loc_821E00EC;
	// lfs f1,640(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82216110
	ctx.lr = 0x821E00D8;
	sub_82216110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E00EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E00EC:
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
loc_821E0104:
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

__attribute__((alias("__imp__sub_821E011C"))) PPC_WEAK_FUNC(sub_821E011C);
PPC_FUNC_IMPL(__imp__sub_821E011C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0120"))) PPC_WEAK_FUNC(sub_821E0120);
PPC_FUNC_IMPL(__imp__sub_821E0120) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x821E0140;
	sub_821DFBC8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e0204
	if (ctx.cr6.eq) goto loc_821E0204;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e0170
	if (ctx.cr6.eq) goto loc_821E0170;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e0170
	if (!ctx.cr6.eq) goto loc_821E0170;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E0170:
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 | ctx.r5.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// beq cr6,0x821e0204
	if (ctx.cr6.eq) goto loc_821E0204;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dfb50
	ctx.lr = 0x821E0194;
	sub_821DFB50(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e01bc
	if (ctx.cr6.eq) goto loc_821E01BC;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821e01bc
	if (!ctx.cr6.lt) goto loc_821E01BC;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r5,r11,928
	ctx.r5.s64 = ctx.r11.s64 + 928;
	// addi r3,r10,56
	ctx.r3.s64 = ctx.r10.s64 + 56;
	// b 0x821e01c8
	goto loc_821E01C8;
loc_821E01BC:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
loc_821E01C8:
	// addi r4,r7,92
	ctx.r4.s64 = ctx.r7.s64 + 92;
	// bl 0x82257540
	ctx.lr = 0x821E01D0;
	sub_82257540(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dfc68
	ctx.lr = 0x821E01DC;
	sub_821DFC68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e0204
	if (ctx.cr6.eq) goto loc_821E0204;
	// lfs f1,640(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82216110
	ctx.lr = 0x821E01F0;
	sub_82216110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E0204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E0204:
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

__attribute__((alias("__imp__sub_821E021C"))) PPC_WEAK_FUNC(sub_821E021C);
PPC_FUNC_IMPL(__imp__sub_821E021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0220"))) PPC_WEAK_FUNC(sub_821E0220);
PPC_FUNC_IMPL(__imp__sub_821E0220) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e02f4
	if (ctx.cr6.eq) goto loc_821E02F4;
	// addi r31,r11,168
	ctx.r31.s64 = ctx.r11.s64 + 168;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e02c0
	if (ctx.cr6.eq) goto loc_821E02C0;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821E0268:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821e027c
	if (ctx.cr6.lt) goto loc_821E027C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821e0284
	goto loc_821E0284;
loc_821E027C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821E0284:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821e02a0
	if (ctx.cr6.eq) goto loc_821E02A0;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821e02a0
	if (ctx.cr6.eq) goto loc_821E02A0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_821E02A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e02b4
	if (ctx.cr6.eq) goto loc_821E02B4;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// andc r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
loc_821E02B4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// bdnz 0x821e0268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E0268;
loc_821E02C0:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e02f4
	if (ctx.cr6.eq) goto loc_821E02F4;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lfs f1,640(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82216110
	ctx.lr = 0x821E02D8;
	sub_82216110(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E02EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d3528
	ctx.lr = 0x821E02F4;
	sub_821D3528(ctx, base);
loc_821E02F4:
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

__attribute__((alias("__imp__sub_821E030C"))) PPC_WEAK_FUNC(sub_821E030C);
PPC_FUNC_IMPL(__imp__sub_821E030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0310"))) PPC_WEAK_FUNC(sub_821E0310);
PPC_FUNC_IMPL(__imp__sub_821E0310) {
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
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821e03ec
	if (ctx.cr6.eq) goto loc_821E03EC;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e03a8
	if (ctx.cr6.eq) goto loc_821E03A8;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821E0350:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821e0364
	if (ctx.cr6.lt) goto loc_821E0364;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821e036c
	goto loc_821E036C;
loc_821E0364:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821E036C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821e0388
	if (ctx.cr6.eq) goto loc_821E0388;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821e0388
	if (!ctx.cr6.eq) goto loc_821E0388;
	// li r8,1
	ctx.r8.s64 = 1;
loc_821E0388:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e039c
	if (ctx.cr6.eq) goto loc_821E039C;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// or r5,r4,r6
	ctx.r5.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
loc_821E039C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// bdnz 0x821e0350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E0350;
loc_821E03A8:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e03ec
	if (ctx.cr6.eq) goto loc_821E03EC;
	// bl 0x821d3528
	ctx.lr = 0x821E03B8;
	sub_821D3528(ctx, base);
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E03CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,640(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82216110
	ctx.lr = 0x821E03D8;
	sub_82216110(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821E03EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E03EC:
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

__attribute__((alias("__imp__sub_821E0400"))) PPC_WEAK_FUNC(sub_821E0400);
PPC_FUNC_IMPL(__imp__sub_821E0400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x821E0408;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,388(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r20,-1
	ctx.r20.s64 = -1;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821e04f4
	if (ctx.cr6.eq) goto loc_821E04F4;
loc_821E0448:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e04e4
	if (!ctx.cr6.eq) goto loc_821E04E4;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e04e4
	if (ctx.cr6.eq) goto loc_821E04E4;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E0494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e04e4
	if (ctx.cr6.eq) goto loc_821E04E4;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r20,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r20.u32);
	// stw r29,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r29.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// lwz r7,48(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// rlwinm r6,r7,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821e076c
	if (!ctx.cr6.eq) goto loc_821E076C;
loc_821E04E4:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x821e0448
	if (ctx.cr6.lt) goto loc_821E0448;
loc_821E04F4:
	// lis r17,-32197
	ctx.r17.s64 = -2110062592;
	// lwz r3,-27096(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821E0500;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e050c
	if (!ctx.cr6.eq) goto loc_821E050C;
	// bl 0x821b3000
	ctx.lr = 0x821E050C;
	sub_821B3000(ctx, base);
loc_821E050C:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r15,-13569
	ctx.r15.s64 = -889257984;
	// addi r8,r10,176
	ctx.r8.s64 = ctx.r10.s64 + 176;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821e0534
	if (!ctx.cr6.gt) goto loc_821E0534;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4492
	ctx.r9.s64 = ctx.r10.s64 + 4492;
	// stw r9,-13570(r15)
	PPC_STORE_U32(ctx.r15.u32 + -13570, ctx.r9.u32);
loc_821E0534:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// addi r6,r10,176
	ctx.r6.s64 = ctx.r10.s64 + 176;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// add r22,r9,r10
	ctx.r22.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// lfs f0,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x821e06a0
	if (ctx.cr6.eq) goto loc_821E06A0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r23,r11,4536
	ctx.r23.s64 = ctx.r11.s64 + 4536;
loc_821E05B0:
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e0690
	if (!ctx.cr6.eq) goto loc_821E0690;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e0690
	if (ctx.cr6.eq) goto loc_821E0690;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E05FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r26,28
	ctx.r5.s64 = ctx.r26.s64 + 28;
	// addi r4,r23,1464
	ctx.r4.s64 = ctx.r23.s64 + 1464;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821E0620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r14)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r11,28(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E0640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e0690
	if (ctx.cr6.eq) goto loc_821E0690;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r29.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r20,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r20.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// lwz r7,48(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// rlwinm r6,r7,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821e070c
	if (!ctx.cr6.eq) goto loc_821E070C;
loc_821E0690:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r24,r16
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x821e05b0
	if (ctx.cr6.lt) goto loc_821E05B0;
loc_821E06A0:
	// lwz r3,-27096(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821E06A8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e06b4
	if (!ctx.cr6.eq) goto loc_821E06B4;
	// bl 0x821b3000
	ctx.lr = 0x821E06B4;
	sub_821B3000(ctx, base);
loc_821E06B4:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821e0700
	if (ctx.cr6.eq) goto loc_821E0700;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r10,4520
	ctx.r8.s64 = ctx.r10.s64 + 4520;
	// cmplwi cr6,r9,176
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 176, ctx.xer);
	// bge cr6,0x821e06d8
	if (!ctx.cr6.lt) goto loc_821E06D8;
	// stw r8,-13570(r15)
	PPC_STORE_U32(ctx.r15.u32 + -13570, ctx.r8.u32);
loc_821E06D8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-176
	ctx.r10.s64 = ctx.r10.s64 + -176;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x821e06f4
	if (ctx.cr6.eq) goto loc_821E06F4;
	// stw r8,-13570(r15)
	PPC_STORE_U32(ctx.r15.u32 + -13570, ctx.r8.u32);
loc_821E06F4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-176
	ctx.r10.s64 = ctx.r10.s64 + -176;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_821E0700:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_821E070C:
	// lwz r3,-27096(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821E0714;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e0720
	if (!ctx.cr6.eq) goto loc_821E0720;
	// bl 0x821b3000
	ctx.lr = 0x821E0720;
	sub_821B3000(ctx, base);
loc_821E0720:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821e076c
	if (ctx.cr6.eq) goto loc_821E076C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r10,4520
	ctx.r8.s64 = ctx.r10.s64 + 4520;
	// cmplwi cr6,r9,176
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 176, ctx.xer);
	// bge cr6,0x821e0744
	if (!ctx.cr6.lt) goto loc_821E0744;
	// stw r8,-13570(r15)
	PPC_STORE_U32(ctx.r15.u32 + -13570, ctx.r8.u32);
loc_821E0744:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-176
	ctx.r10.s64 = ctx.r10.s64 + -176;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x821e0760
	if (ctx.cr6.eq) goto loc_821E0760;
	// stw r8,-13570(r15)
	PPC_STORE_U32(ctx.r15.u32 + -13570, ctx.r8.u32);
loc_821E0760:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-176
	ctx.r10.s64 = ctx.r10.s64 + -176;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_821E076C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E0778"))) PPC_WEAK_FUNC(sub_821E0778);
PPC_FUNC_IMPL(__imp__sub_821E0778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821E0780;
	__savegprlr_28(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r3,r9,0,15,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e07a4
	if (ctx.cr6.eq) goto loc_821E07A4;
loc_821E079C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821E07A4:
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// and r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 & ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e079c
	if (ctx.cr6.eq) goto loc_821E079C;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 + 12;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f7,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f11,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f6,f8,f9,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f6.f64));
	// bne cr6,0x821e0810
	if (!ctx.cr6.eq) goto loc_821E0810;
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r3,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e0810
	if (!ctx.cr6.eq) goto loc_821E0810;
	// fcmpu cr6,f6,f7
	ctx.cr6.compare(ctx.f6.f64, ctx.f7.f64);
	// bgt cr6,0x821e079c
	if (ctx.cr6.gt) goto loc_821E079C;
loc_821E0810:
	// fabs f12,f6
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f0,388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x821e079c
	if (ctx.cr6.lt) goto loc_821E079C;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f3,f8,f11,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f2,f13,f10,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fadds f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fabs f1,f13
	ctx.f1.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f1
	ctx.cr6.compare(ctx.f9.f64, ctx.f1.f64);
	// bgt cr6,0x821e0878
	if (ctx.cr6.gt) goto loc_821E0878;
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bge cr6,0x821e0864
	if (!ctx.cr6.lt) goto loc_821E0864;
	// fadds f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// b 0x821e0868
	goto loc_821E0868;
loc_821E0864:
	// fsubs f0,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
loc_821E0868:
	// fdivs f0,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// blt cr6,0x821e079c
	if (ctx.cr6.lt) goto loc_821E079C;
loc_821E0878:
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821e079c
	if (ctx.cr6.gt) goto loc_821E079C;
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r29,8(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 + 60;
	// lwz r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r30,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r30.u32);
	// lfs f13,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r29.u32);
	// lfs f8,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f8.f64 = double(temp.f32);
	// stw r28,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r28.u32);
	// lfs f6,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f13,f11,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f12,-60(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fadds f11,f10,f3
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f11,-56(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
loc_821E08D4:
	// lfs f10,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f6,f11,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f2,f5,f13,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fadds f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fcmpu cr6,f1,f9
	ctx.cr6.compare(ctx.f1.f64, ctx.f9.f64);
	// bgt cr6,0x821e079c
	if (ctx.cr6.gt) goto loc_821E079C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x821e08d4
	if (ctx.cr6.lt) goto loc_821E08D4;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// and r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 & ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821e079c
	if (!ctx.cr6.eq) goto loc_821E079C;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r4,-60(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r3,-64(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// lwz r6,-56(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r6.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f6,f0,f13,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f5,f12,f11,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f7
	ctx.cr6.compare(ctx.f5.f64, ctx.f7.f64);
	// ble cr6,0x821e09a4
	if (!ctx.cr6.gt) goto loc_821E09A4;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_821E09A4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r4,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r4.u32);
	// stw r9,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r9.u32);
	// stw r10,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E09EC"))) PPC_WEAK_FUNC(sub_821E09EC);
PPC_FUNC_IMPL(__imp__sub_821E09EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E09F0"))) PPC_WEAK_FUNC(sub_821E09F0);
PPC_FUNC_IMPL(__imp__sub_821E09F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821E09F8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e0cd8
	if (!ctx.cr6.eq) goto loc_821E0CD8;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// and r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e0cd8
	if (ctx.cr6.eq) goto loc_821E0CD8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r27,r11,31376
	ctx.r27.s64 = ctx.r11.s64 + 31376;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,48(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x821e0a9c
	if (!ctx.cr6.eq) goto loc_821E0A9C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e0a9c
	if (!ctx.cr6.eq) goto loc_821E0A9C;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// bgt cr6,0x821e0cd8
	if (ctx.cr6.gt) goto loc_821E0CD8;
loc_821E0A9C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stb r10,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r10.u8);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x821ef678
	ctx.lr = 0x821E0AE8;
	sub_821EF678(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e0cd8
	if (ctx.cr6.eq) goto loc_821E0CD8;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// and r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e0cd8
	if (!ctx.cr6.eq) goto loc_821E0CD8;
	// lfs f13,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,224(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x821e0b68
	if (ctx.cr6.gt) goto loc_821E0B68;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0b68
	if (ctx.cr6.eq) goto loc_821E0B68;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f7,f8,f10
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f1,f6,f8,f9
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f13,f5,f4,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f12,f5,f3,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x821e0cd8
	if (ctx.cr6.gt) goto loc_821E0CD8;
loc_821E0B68:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e0ce8
	if (ctx.cr6.eq) goto loc_821E0CE8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f13,f8,f3
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// bne cr6,0x821e0c28
	if (!ctx.cr6.eq) goto loc_821E0C28;
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fmr f7,f6
	ctx.f7.f64 = ctx.f6.f64;
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fmr f5,f4
	ctx.f5.f64 = ctx.f4.f64;
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f9,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f2,f6,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fsubs f1,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f13,f7,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x821e0c60
	goto loc_821E0C60;
loc_821E0C28:
	// lfs f11,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f13,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f2,f7,f8
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_821E0C60:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmadds f12,f5,f5,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f8.f64));
	// fmadds f11,f5,f6,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fmadds f10,f1,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f9,f2,f1,f11
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fdivs f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x821e0cd8
	if (ctx.cr6.lt) goto loc_821E0CD8;
	// lfs f12,36(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x821e0e6c
	if (!ctx.cr6.gt) goto loc_821E0E6C;
loc_821E0CD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_821E0CE8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x821e0d48
	if (!ctx.cr6.eq) goto loc_821E0D48;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0d48
	if (ctx.cr6.eq) goto loc_821E0D48;
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f10,f11
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f3,f11,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f2,f6,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f1,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f13,f7,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x821e0e54
	goto loc_821E0E54;
loc_821E0D48:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f13,f2,f8
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r7,r8,0,22,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821e0e6c
	if (ctx.cr6.eq) goto loc_821E0E6C;
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x821e0e1c
	if (!ctx.cr6.eq) goto loc_821E0E1C;
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fmr f7,f5
	ctx.f7.f64 = ctx.f5.f64;
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// lfs f9,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f6,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f4,f9,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f3,f10,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fsubs f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f1,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f13,f7,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x821e0e64
	goto loc_821E0E64;
loc_821E0E1C:
	// lfs f11,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f2,f13,f8
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_821E0E54:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_821E0E64:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_821E0E6C:
	// stfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f11,f10,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f8,f7,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// ble cr6,0x821e0edc
	if (!ctx.cr6.gt) goto loc_821E0EDC;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821E0EDC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r7,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r7.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r6,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r5,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r4,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r4.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E0F2C"))) PPC_WEAK_FUNC(sub_821E0F2C);
PPC_FUNC_IMPL(__imp__sub_821E0F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0F30"))) PPC_WEAK_FUNC(sub_821E0F30);
PPC_FUNC_IMPL(__imp__sub_821E0F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821E0F38;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// lfs f5,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f5,f0
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f30,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f13,f10,f6,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f13.f64));
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f11,f12,f6,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f11.f64));
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f7,f6,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f31.f64));
	// fmadds f13,f2,f1,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fmadds f31,f8,f1,f11
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f6,f4,f1,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f6.f64));
	// fadds f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fadds f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fadds f6,f6,f30
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// fmuls f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821e1020
	if (!ctx.cr6.lt) goto loc_821E1020;
	// fsubs f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fsubs f29,f12,f10
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// fdivs f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 / ctx.f1.f64));
	// fmuls f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f29,f29,f1
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f1.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fsubs f9,f2,f8
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fsubs f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// stfs f8,-96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsubs f1,f3,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// stfs f1,-92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// lwz r4,-96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// lwz r31,-92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r9,-88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	// stw r9,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r9.u32);
	// stw r31,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r31.u32);
	// stw r4,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r4.u32);
loc_821E1020:
	// fmuls f9,f6,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x821e109c
	if (!ctx.cr6.lt) goto loc_821E109C;
	// fsubs f9,f6,f13
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f4,f4,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fsubs f31,f7,f12
	ctx.f31.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fsubs f5,f5,f1
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
	// fdivs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fmuls f9,f4,f13
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f4,f31,f13
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fsubs f8,f12,f4
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f8,-96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsubs f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// stfs f5,-92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// lwz r30,-96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// lwz r29,-92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r31,-88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// stw r29,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r29.u32);
	// stwx r30,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r30.u32);
loc_821E109C:
	// fmuls f13,f6,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821e1118
	if (!ctx.cr6.lt) goto loc_821E1118;
	// fsubs f13,f11,f6
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fsubs f11,f10,f7
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r1,-80
	ctx.r6.s64 = ctx.r1.s64 + -80;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// fdivs f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 / ctx.f13.f64));
	// fmuls f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fsubs f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f1,-88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// lwz r31,-88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	// fsubs f13,f10,f3
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// lwz r4,-92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// fsubs f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// stfs f2,-96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r4,-96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// stwx r4,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r4.u32);
	// stw r31,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r31.u32);
loc_821E1118:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821e1134
	if (ctx.cr6.eq) goto loc_821E1134;
loc_821E1120:
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821E1134:
	// lfs f3,-76(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f3.f64 = double(temp.f32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// lfs f13,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// lfs f10,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// lfs f9,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f2
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// lfs f6,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f5,-68(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f11,f5,f1
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// lfs f4,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// lfs f9,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmr f30,f9
	ctx.f30.f64 = ctx.f9.f64;
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmadds f8,f2,f6,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f6,f12,f6,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f1,f4,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f8.f64));
	// fmadds f10,f11,f4,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fadds f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x821e11b4
	if (!ctx.cr6.gt) goto loc_821E11B4;
	// fdivs f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x821e11dc
	if (!ctx.cr6.lt) goto loc_821E11DC;
	// fmr f30,f10
	ctx.f30.f64 = ctx.f10.f64;
	// b 0x821e11dc
	goto loc_821E11DC;
loc_821E11B4:
	// fcmpu cr6,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x821e11d4
	if (!ctx.cr6.lt) goto loc_821E11D4;
	// fdivs f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x821e11dc
	if (!ctx.cr6.gt) goto loc_821E11DC;
	// fmr f31,f10
	ctx.f31.f64 = ctx.f10.f64;
	// b 0x821e11dc
	goto loc_821E11DC;
loc_821E11D4:
	// fcmpu cr6,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x821e1120
	if (ctx.cr6.gt) goto loc_821E1120;
loc_821E11DC:
	// lfs f10,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f3,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// lfs f8,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f5,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f2,f8,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f9,f12,f8,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f8,f1,f5,f10
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f10,f11,f5,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f9.f64));
	// fadds f9,f8,f4
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x821e1228
	if (!ctx.cr6.gt) goto loc_821E1228;
	// fdivs f0,f7,f10
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x821e1250
	if (!ctx.cr6.lt) goto loc_821E1250;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x821e1250
	goto loc_821E1250;
loc_821E1228:
	// fcmpu cr6,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x821e1248
	if (!ctx.cr6.lt) goto loc_821E1248;
	// fdivs f0,f7,f10
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821e1250
	if (!ctx.cr6.gt) goto loc_821E1250;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x821e1250
	goto loc_821E1250;
loc_821E1248:
	// fcmpu cr6,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x821e1120
	if (ctx.cr6.gt) goto loc_821E1120;
loc_821E1250:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x821e1120
	if (!ctx.cr6.lt) goto loc_821E1120;
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f9,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f8,f3
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// lfs f10,376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f4,f7,f2
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x821e1120
	if (ctx.cr6.lt) goto loc_821E1120;
	// fmuls f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmadds f5,f4,f12,f10
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f4,f6,f11,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fdivs f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821e12a8
	if (!ctx.cr6.lt) goto loc_821E12A8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x821e12b4
	goto loc_821E12B4;
loc_821E12A8:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x821e12b4
	if (!ctx.cr6.gt) goto loc_821E12B4;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_821E12B4:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fadds f0,f13,f3
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f0,-92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fadds f13,f6,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// stfs f13,-88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fadds f12,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f12,-96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsubs f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsubs f1,f9,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f0,f3,f3
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f13,f2,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f0,f1,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// bgt cr6,0x821e1120
	if (ctx.cr6.gt) goto loc_821E1120;
	// lwz r11,-96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lwz r10,-92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lwz r9,-88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E1334"))) PPC_WEAK_FUNC(sub_821E1334);
PPC_FUNC_IMPL(__imp__sub_821E1334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E1338"))) PPC_WEAK_FUNC(sub_821E1338);
PPC_FUNC_IMPL(__imp__sub_821E1338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x821E1340;
	__savegprlr_18(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// add r23,r4,r5
	ctx.r23.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// bl 0x820d6a68
	ctx.lr = 0x821E1374;
	sub_820D6A68(ctx, base);
	// lfs f0,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f13,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// lfs f12,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f6,296(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f9,280(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f7,284(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f5,288(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f6,300(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// beq cr6,0x821e1504
	if (ctx.cr6.eq) goto loc_821E1504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r21,r11,-24932
	ctx.r21.s64 = ctx.r11.s64 + -24932;
	// addi r20,r10,4536
	ctx.r20.s64 = ctx.r10.s64 + 4536;
	// lfs f31,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
loc_821E13E4:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e14f4
	if (ctx.cr6.eq) goto loc_821E14F4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e14f4
	if (!ctx.cr6.eq) goto loc_821E14F4;
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x821e149c
	if (ctx.cr6.lt) goto loc_821E149C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e1498
	if (!ctx.cr6.eq) goto loc_821E1498;
	// stfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r20,1464
	ctx.r4.s64 = ctx.r20.s64 + 1464;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E148C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// or r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 | ctx.r25.u64;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
loc_821E1498:
	// rlwinm r25,r25,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_821E149C:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stfs f31,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stb r18,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r18.u8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821E14E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e1518
	if (!ctx.cr6.eq) goto loc_821E1518;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8220b850
	ctx.lr = 0x821E14F4;
	sub_8220B850(ctx, base);
loc_821E14F4:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x821e13e4
	if (ctx.cr6.lt) goto loc_821E13E4;
loc_821E1504:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
loc_821E1518:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e155c
	if (ctx.cr6.eq) goto loc_821E155C;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,20(r19)
	PPC_STORE_U32(ctx.r19.u32 + 20, ctx.r10.u32);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,24(r19)
	PPC_STORE_U32(ctx.r19.u32 + 24, ctx.r9.u32);
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r8,28(r19)
	PPC_STORE_U32(ctx.r19.u32 + 28, ctx.r8.u32);
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r7,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r7.u32);
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r6,12(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12, ctx.r6.u32);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r5,16(r19)
	PPC_STORE_U32(ctx.r19.u32 + 16, ctx.r5.u32);
loc_821E155C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8220b850
	ctx.lr = 0x821E1564;
	sub_8220B850(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E1578"))) PPC_WEAK_FUNC(sub_821E1578);
PPC_FUNC_IMPL(__imp__sub_821E1578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e16f4
	if (!ctx.cr6.eq) goto loc_821E16F4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e16f4
	if (ctx.cr6.eq) goto loc_821E16F4;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r4,12
	ctx.r7.s64 = ctx.r4.s64 + 12;
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f13,f9,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f4,f8,f11,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fadds f5,f4,f7
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fabs f3,f5
	ctx.f3.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fcmpu cr6,f3,f6
	ctx.cr6.compare(ctx.f3.f64, ctx.f6.f64);
	// bgt cr6,0x821e16f4
	if (ctx.cr6.gt) goto loc_821E16F4;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
	// fmuls f6,f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,31376
	ctx.r6.s64 = ctx.r10.s64 + 31376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 + 60;
	// lfs f7,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmr f10,f7
	ctx.f10.f64 = ctx.f7.f64;
loc_821E1608:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f8,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f8,f13,f9
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f1,f4,f12,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fadds f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x821e1648
	if (!ctx.cr6.gt) goto loc_821E1648;
	// fmuls f9,f5,f5
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f8,f0,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f6
	ctx.cr6.compare(ctx.f8.f64, ctx.f6.f64);
	// bgt cr6,0x821e1658
	if (ctx.cr6.gt) goto loc_821E1658;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821E1648:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x821e1608
	if (ctx.cr6.lt) goto loc_821E1608;
loc_821E1658:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x821e16f4
	if (!ctx.cr6.eq) goto loc_821E16F4;
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x821e1738
	if (!ctx.cr6.gt) goto loc_821E1738;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r6,30
	ctx.r10.u64 = ctx.r6.u32 & 0x3;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 + 20;
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f4,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f12,f4
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// lfs f3,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f9,f13,f8
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// lfs f1,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f12,f1,f8
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fsubs f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f4,f10,f13,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f8,f9,f12,f4
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bge cr6,0x821e16fc
	if (!ctx.cr6.lt) goto loc_821E16FC;
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f13,f10,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f12,f9,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f6
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// ble cr6,0x821e1738
	if (!ctx.cr6.gt) goto loc_821E1738;
loc_821E16F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E16FC:
	// fmuls f7,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f4,f13,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f3,f12,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fcmpu cr6,f8,f3
	ctx.cr6.compare(ctx.f8.f64, ctx.f3.f64);
	// ble cr6,0x821e1738
	if (!ctx.cr6.gt) goto loc_821E1738;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f6
	ctx.cr6.compare(ctx.f9.f64, ctx.f6.f64);
	// ble cr6,0x821e1738
	if (!ctx.cr6.gt) goto loc_821E1738;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E1738:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e17c0
	if (ctx.cr6.eq) goto loc_821E17C0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// fabs f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r9.u32);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f2,f7,f11
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fsubs f1,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// stfs f1,-16(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// fmuls f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fsubs f0,f6,f2
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fsubs f3,f10,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// stfs f3,-8(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r8,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r8.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
loc_821E17C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E17C8"))) PPC_WEAK_FUNC(sub_821E17C8);
PPC_FUNC_IMPL(__imp__sub_821E17C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x821E17D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// addi r26,r3,168
	ctx.r26.s64 = ctx.r3.s64 + 168;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821e1808
	if (ctx.cr6.lt) goto loc_821E1808;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x821e1814
	goto loc_821E1814;
loc_821E1808:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 * 236;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821E1814:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// bne cr6,0x821e1894
	if (!ctx.cr6.eq) goto loc_821E1894;
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e187c
	if (!ctx.cr6.eq) goto loc_821E187C;
	// addi r4,r29,928
	ctx.r4.s64 = ctx.r29.s64 + 928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201220
	ctx.lr = 0x821E185C;
	sub_82201220(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x821e18ac
	goto loc_821E18AC;
loc_821E187C:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,76(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// b 0x821e18a8
	goto loc_821E18A8;
loc_821E1894:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_821E18A8:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_821E18AC:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r28,r11,31376
	ctx.r28.s64 = ctx.r11.s64 + 31376;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f11,936(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 936);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,76(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// beq cr6,0x821e1908
	if (ctx.cr6.eq) goto loc_821E1908;
	// lfs f10,232(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
loc_821E1908:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1964
	if (ctx.cr6.eq) goto loc_821E1964;
	// fmuls f10,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f12,376(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f0,f13,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x821e1938
	if (!ctx.cr6.lt) goto loc_821E1938;
loc_821E192C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_821E1938:
	// fmuls f13,f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821e1964
	if (!ctx.cr6.lt) goto loc_821E1964;
	// lwz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e1964
	if (!ctx.cr6.eq) goto loc_821E1964;
	// lfs f13,456(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1288(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1288);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821e192c
	if (ctx.cr6.gt) goto loc_821E192C;
loc_821E1964:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// beq cr6,0x821e19f8
	if (ctx.cr6.eq) goto loc_821E19F8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821E19B4:
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821e19c4
	if (ctx.cr6.lt) goto loc_821E19C4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x821e19cc
	goto loc_821E19CC;
loc_821E19C4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_821E19CC:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821e19ec
	if (ctx.cr6.eq) goto loc_821E19EC;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 | ctx.r27.u64;
loc_821E19EC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// bdnz 0x821e19b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E19B4;
loc_821E19F8:
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e1a1c
	if (!ctx.cr6.eq) goto loc_821E1A1C;
	// addi r3,r29,828
	ctx.r3.s64 = ctx.r29.s64 + 828;
	// b 0x821e1a24
	goto loc_821E1A24;
loc_821E1A1C:
	// lwz r11,776(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 776);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
loc_821E1A24:
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x821e1d60
	ctx.lr = 0x821E1A2C;
	sub_821E1D60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e1a44
	if (!ctx.cr6.eq) goto loc_821E1A44;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_821E1A44:
	// lfs f0,36(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f0,44(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 44, temp.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821dead8
	ctx.lr = 0x821E1A5C;
	sub_821DEAD8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r30,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,4536
	ctx.r11.s64 = ctx.r11.s64 + 4536;
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e1aa0
	if (ctx.cr6.eq) goto loc_821E1AA0;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821e1aa0
	if (ctx.cr6.eq) goto loc_821E1AA0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,208
	ctx.r5.s64 = ctx.r11.s64 + 208;
	// bl 0x821de840
	ctx.lr = 0x821E1A94;
	sub_821DE840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e1aa0
	if (ctx.cr6.eq) goto loc_821E1AA0;
	// li r31,2
	ctx.r31.s64 = 2;
loc_821E1AA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E1AAC"))) PPC_WEAK_FUNC(sub_821E1AAC);
PPC_FUNC_IMPL(__imp__sub_821E1AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E1AB0"))) PPC_WEAK_FUNC(sub_821E1AB0);
PPC_FUNC_IMPL(__imp__sub_821E1AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,1036(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1036);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r10,1044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1044, ctx.r10.u32);
	// stw r11,1048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1048, ctx.r11.u32);
	// stw r9,1040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1040, ctx.r9.u32);
	// stw r9,1052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1052, ctx.r9.u32);
	// stw r10,1056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1056, ctx.r10.u32);
	// stw r11,1060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1060, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E1B08"))) PPC_WEAK_FUNC(sub_821E1B08);
PPC_FUNC_IMPL(__imp__sub_821E1B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821E1B10;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821e1b44
	if (!ctx.cr6.eq) goto loc_821E1B44;
	// bl 0x820ddca8
	ctx.lr = 0x821E1B30;
	sub_820DDCA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e1b60
	if (ctx.cr6.eq) goto loc_821E1B60;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x821e1b80
	goto loc_821E1B80;
loc_821E1B44:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821e1c90
	if (ctx.cr6.eq) goto loc_821E1C90;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821e1b68
	if (!ctx.cr6.eq) goto loc_821E1B68;
loc_821E1B60:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x821e1b80
	goto loc_821E1B80;
loc_821E1B68:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x821E1B7C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821E1B80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1c90
	if (ctx.cr6.eq) goto loc_821E1C90;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e1c90
	if (ctx.cr6.eq) goto loc_821E1C90;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821dead8
	ctx.lr = 0x821E1BA4;
	sub_821DEAD8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lis r9,20031
	ctx.r9.s64 = 1312751616;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// ori r7,r9,4
	ctx.r7.u64 = ctx.r9.u64 | 4;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// li r6,72
	ctx.r6.s64 = 72;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lfs f13,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// beq cr6,0x821e1c78
	if (ctx.cr6.eq) goto loc_821E1C78;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r28,120(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// stw r4,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// b 0x821e1c80
	goto loc_821E1C80;
loc_821E1C78:
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
loc_821E1C80:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,127
	ctx.r4.s64 = 127;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820daf68
	ctx.lr = 0x821E1C90;
	sub_820DAF68(ctx, base);
loc_821E1C90:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E1C98"))) PPC_WEAK_FUNC(sub_821E1C98);
PPC_FUNC_IMPL(__imp__sub_821E1C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821e1cb8
	if (ctx.cr6.lt) goto loc_821E1CB8;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821e1cc0
	goto loc_821E1CC0;
loc_821E1CB8:
	// stfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_821E1CC0:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821e1ce0
	if (ctx.cr6.lt) goto loc_821E1CE0;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821e1ce8
	goto loc_821E1CE8;
loc_821E1CE0:
	// stfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_821E1CE8:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821e1d08
	if (ctx.cr6.lt) goto loc_821E1D08;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821e1d10
	goto loc_821E1D10;
loc_821E1D08:
	// stfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_821E1D10:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsubs f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f3,f8,f1
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// fadds f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E1D60"))) PPC_WEAK_FUNC(sub_821E1D60);
PPC_FUNC_IMPL(__imp__sub_821E1D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f13,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821e1d88
	if (!ctx.cr6.lt) goto loc_821E1D88;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E1D88:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f9,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lfs f8,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r9.u32);
	// lfs f7,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fsubs f3,f8,f11
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmadds f2,f5,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmadds f1,f3,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// ble cr6,0x821e1de4
	if (!ctx.cr6.gt) goto loc_821E1DE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E1DE4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E1DEC"))) PPC_WEAK_FUNC(sub_821E1DEC);
PPC_FUNC_IMPL(__imp__sub_821E1DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E1DF0"))) PPC_WEAK_FUNC(sub_821E1DF0);
PPC_FUNC_IMPL(__imp__sub_821E1DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821E1DF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82082030
	ctx.lr = 0x821E1E14;
	sub_82082030(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x821e1ec4
	if (ctx.cr6.eq) goto loc_821E1EC4;
	// li r28,256
	ctx.r28.s64 = 256;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,9220
	ctx.r3.s64 = 9220;
	// bl 0x82082030
	ctx.lr = 0x821E1E50;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e1ea8
	if (ctx.cr6.eq) goto loc_821E1EA8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// addi r10,r9,-36
	ctx.r10.s64 = ctx.r9.s64 + -36;
	// li r8,5
	ctx.r8.s64 = 5;
loc_821E1E74:
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r30,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r30.u32);
	// stwu r30,36(r10)
	ea = 36 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r23,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r23.u32);
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stb r30,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r30.u8);
	// stb r30,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r30.u8);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bdnz 0x821e1e74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E1E74;
	// b 0x821e1eac
	goto loc_821E1EAC;
loc_821E1EA8:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_821E1EAC:
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x821e43e8
	ctx.lr = 0x821E1EC0;
	sub_821E43E8(ctx, base);
	// b 0x821e1ec8
	goto loc_821E1EC8;
loc_821E1EC4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_821E1EC8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r29,4001
	ctx.r29.s64 = 4001;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f0,1204(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1204);
	ctx.f0.f64 = double(temp.f32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// ori r3,r3,62500
	ctx.r3.u64 = ctx.r3.u64 | 62500;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lfs f0,1208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfs f0,416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// fdivs f4,f0,f12
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f4,60(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f3,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 / ctx.f9.f64));
	// stfs f2,64(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// fdivs f0,f1,f6
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f6.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// bl 0x82082030
	ctx.lr = 0x821E1F74;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e1f88
	if (ctx.cr6.eq) goto loc_821E1F88;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// b 0x821e1f8c
	goto loc_821E1F8C;
loc_821E1F88:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821E1F8C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r23,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// ble cr6,0x821e1fd0
	if (!ctx.cr6.gt) goto loc_821E1FD0;
	// li r10,32
	ctx.r10.s64 = 32;
loc_821E1FB0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821e1fb0
	if (ctx.cr6.lt) goto loc_821E1FB0;
loc_821E1FD0:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,3
	ctx.r28.s64 = 3;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r27,r29,-4
	ctx.r27.s64 = ctx.r29.s64 + -4;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// li r24,-1
	ctx.r24.s64 = -1;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
	// stw r30,-24(r9)
	PPC_STORE_U32(ctx.r9.u32 + -24, ctx.r30.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r26,r8,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_821E2004:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// rlwinm r3,r26,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x821e2014
	if (!ctx.cr6.gt) goto loc_821E2014;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_821E2014:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821E2024;
	sub_82082030(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
	// bne 0x821e2004
	if (!ctx.cr0.eq) goto loc_821E2004;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r9,65535
	ctx.r11.u64 = ctx.r9.u64 | 65535;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r30.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r23.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r30.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r23.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r30.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r23.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r30.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E20E4"))) PPC_WEAK_FUNC(sub_821E20E4);
PPC_FUNC_IMPL(__imp__sub_821E20E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E20E8"))) PPC_WEAK_FUNC(sub_821E20E8);
PPC_FUNC_IMPL(__imp__sub_821E20E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821E20F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e2140
	if (ctx.cr6.eq) goto loc_821E2140;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// ble cr6,0x821e2138
	if (!ctx.cr6.gt) goto loc_821E2138;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
loc_821E2138:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x821e214c
	if (!ctx.cr6.eq) goto loc_821E214C;
loc_821E2140:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_821E214C:
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2518
	ctx.lr = 0x821E2168;
	sub_821E2518(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821e2518
	ctx.lr = 0x821E2178;
	sub_821E2518(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r25,r29,20
	ctx.r25.s64 = ctx.r29.s64 + 20;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r5,r25,-4
	ctx.r5.s64 = ctx.r25.s64 + -4;
	// subf r28,r31,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r31.s64;
	// subfic r27,r31,12
	ctx.xer.ca = ctx.r31.u32 <= 12;
	ctx.r27.s64 = 12 - ctx.r31.s64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r26,r4,-1
	ctx.r26.s64 = ctx.r4.s64 + -1;
loc_821E21A4:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r3,r9,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwzx r24,r8,r24
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lwzx r23,r8,r23
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stwx r3,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,-8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lwz r3,-4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r3,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r3.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r30,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r30.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r30,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r30.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r24,-8(r3)
	PPC_STORE_U32(ctx.r3.u32 + -8, ctx.r24.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r23,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
	// stwx r26,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// bne 0x821e21a4
	if (!ctx.cr0.eq) goto loc_821E21A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e25d8
	ctx.lr = 0x821E2238;
	sub_821E25D8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2748
	ctx.lr = 0x821E224C;
	sub_821E2748(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e25d8
	ctx.lr = 0x821E2260;
	sub_821E25D8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2748
	ctx.lr = 0x821E2274;
	sub_821E2748(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e25d8
	ctx.lr = 0x821E2288;
	sub_821E25D8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2748
	ctx.lr = 0x821E229C;
	sub_821E2748(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E22A8"))) PPC_WEAK_FUNC(sub_821E22A8);
PPC_FUNC_IMPL(__imp__sub_821E22A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x821E22B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e23b4
	if (ctx.cr6.eq) goto loc_821E23B4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x821e4868
	ctx.lr = 0x821E22CC;
	sub_821E4868(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r29,r22,8
	ctx.r29.s64 = ctx.r22.s64 + 8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// subf r24,r22,r31
	ctx.r24.s64 = ctx.r31.s64 - ctx.r22.s64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r26,r7,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r23,r26,4
	ctx.r23.s64 = ctx.r26.s64 + 4;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_821E2320:
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r28,r24,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r27,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r27.u32);
	// bl 0x821e2a38
	ctx.lr = 0x821E2340;
	sub_821E2A38(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r27,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r27.u32);
	// bl 0x821e28b8
	ctx.lr = 0x821E235C;
	sub_821E28B8(ctx, base);
	// add r9,r26,r28
	ctx.r9.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r25,r23,r28
	PPC_STORE_U32(ctx.r23.u32 + ctx.r28.u32, ctx.r25.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// stw r25,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r25.u32);
	// blt cr6,0x821e2320
	if (ctx.cr6.lt) goto loc_821E2320;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821e2390
	if (!ctx.cr6.eq) goto loc_821E2390;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_821E2390:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
loc_821E23B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E23BC"))) PPC_WEAK_FUNC(sub_821E23BC);
PPC_FUNC_IMPL(__imp__sub_821E23BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E23C0"))) PPC_WEAK_FUNC(sub_821E23C0);
PPC_FUNC_IMPL(__imp__sub_821E23C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x821E23C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// addi r29,r4,20
	ctx.r29.s64 = ctx.r4.s64 + 20;
	// subf r22,r6,r5
	ctx.r22.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_821E23E4:
	// lwz r30,-12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r27,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r22,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// subf. r25,r6,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r23,r5,r7
	ctx.r23.s64 = ctx.r7.s64 - ctx.r5.s64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r3,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r3.u32);
	// bge 0x821e2438
	if (!ctx.cr0.lt) goto loc_821E2438;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821e25d8
	ctx.lr = 0x821E2438;
	sub_821E25D8(ctx, base);
loc_821E2438:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x821e2454
	if (!ctx.cr6.gt) goto loc_821E2454;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821e2a38
	ctx.lr = 0x821E2454;
	sub_821E2A38(ctx, base);
loc_821E2454:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x821e2470
	if (!ctx.cr6.gt) goto loc_821E2470;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821e28b8
	ctx.lr = 0x821E2470;
	sub_821E28B8(ctx, base);
loc_821E2470:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x821e248c
	if (!ctx.cr6.lt) goto loc_821E248C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821e2748
	ctx.lr = 0x821E248C;
	sub_821E2748(ctx, base);
loc_821E248C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// blt cr6,0x821e23e4
	if (ctx.cr6.lt) goto loc_821E23E4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E24AC"))) PPC_WEAK_FUNC(sub_821E24AC);
PPC_FUNC_IMPL(__imp__sub_821E24AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E24B0"))) PPC_WEAK_FUNC(sub_821E24B0);
PPC_FUNC_IMPL(__imp__sub_821E24B0) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e2500
	if (ctx.cr6.eq) goto loc_821E2500;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821e2518
	ctx.lr = 0x821E24E0;
	sub_821E2518(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821e2518
	ctx.lr = 0x821E24F0;
	sub_821E2518(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e23c0
	ctx.lr = 0x821E2500;
	sub_821E23C0(ctx, base);
loc_821E2500:
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

__attribute__((alias("__imp__sub_821E2518"))) PPC_WEAK_FUNC(sub_821E2518);
PPC_FUNC_IMPL(__imp__sub_821E2518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-24
	ctx.r9.s64 = ctx.r1.s64 + -24;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f5,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r7,r10,31376
	ctx.r7.s64 = ctx.r10.s64 + 31376;
	// lfs f4,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// ori r10,r8,65534
	ctx.r10.u64 = ctx.r8.u64 | 65534;
	// fmuls f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// stfs f2,-24(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lfs f13,416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f4,f8
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f12,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f1,-20(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// fmuls f0,f3,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
loc_821E258C:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x821e25a0
	if (ctx.cr6.gt) goto loc_821E25A0;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// b 0x821e25cc
	goto loc_821E25CC;
loc_821E25A0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821e25b4
	if (ctx.cr6.lt) goto loc_821E25B4;
	// or r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x821e25cc
	goto loc_821E25CC;
loc_821E25B4:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f0.u64);
	// lwz r8,-28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_821E25CC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821e258c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E258C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E25D8"))) PPC_WEAK_FUNC(sub_821E25D8);
PPC_FUNC_IMPL(__imp__sub_821E25D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821E25E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwzx r10,r27,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r3.u32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r28,-8
	ctx.r29.s64 = ctx.r28.s64 + -8;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r7,-8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bge cr6,0x821e273c
	if (!ctx.cr6.lt) goto loc_821E273C;
	// li r24,1
	ctx.r24.s64 = 1;
loc_821E262C:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e2704
	if (ctx.cr6.eq) goto loc_821E2704;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e26ec
	if (ctx.cr6.eq) goto loc_821E26EC;
	// slw r11,r24,r26
	ctx.r11.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r26.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r24,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// clrlwi r11,r8,30
	ctx.r11.u64 = ctx.r8.u32 & 0x3;
	// lwzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821e26cc
	if (ctx.cr6.lt) goto loc_821E26CC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821e26cc
	if (ctx.cr6.lt) goto loc_821E26CC;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821e26cc
	if (ctx.cr6.lt) goto loc_821E26CC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821e26d0
	if (!ctx.cr6.lt) goto loc_821E26D0;
loc_821E26CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E26D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e26ec
	if (ctx.cr6.eq) goto loc_821E26EC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821e4558
	ctx.lr = 0x821E26EC;
	sub_821E4558(ctx, base);
loc_821E26EC:
	// addi r11,r26,5
	ctx.r11.s64 = ctx.r26.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// b 0x821e2710
	goto loc_821E2710;
loc_821E2704:
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u32);
loc_821E2710:
	// lwzx r11,r27,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r27,r30
	PPC_STORE_U32(ctx.r27.u32 + ctx.r30.u32, ctx.r11.u32);
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// ld r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r9,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r9.u64);
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// lwzu r11,-8(r29)
	ea = -8 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwzu r10,-8(r28)
	ea = -8 + ctx.r28.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821e262c
	if (ctx.cr6.lt) goto loc_821E262C;
loc_821E273C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

